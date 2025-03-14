#include "pch.h"
#include "Replication.h"
#include "Misc.h"
#include <random>
#include "Options.h"

__forceinline int& Replication::GetReplicationFrame(UNetDriver* Driver)
{
	return *(int*)(__int64(Driver) + 0x3d8);
}

__forceinline FNetworkObjectList& Replication::GetNetworkObjectList(UNetDriver* Driver)
{
	return *(*(TSharedPtr<FNetworkObjectList>*)(__int64(Driver) + 0x6b8));
}

__forceinline double& Replication::GetElapsedTime(UNetDriver* Driver)
{
	return *(double*)(__int64(Driver) + 0x218);
}

__forceinline AActor* Replication::GetViewTarget(APlayerController* Controller)
{
	return (decltype(&GetViewTarget)(Sarah::Offsets::GetViewTarget))(Controller);
}

__forceinline double& Replication::GetRelevantTime(UActorChannel* Channel)
{
	return *(double*)(__int64(Channel) + 0x78);
}

__forceinline int32& Replication::GetNetTag(UNetDriver* Driver)
{
	return *(int32*)(__int64(Driver) + 0x2e4);
}

__forceinline TSet<FNetworkGUID>& Replication::GetDestroyedStartupOrDormantActorGUIDs(UNetConnection* Conn)
{
	return *(TSet<FNetworkGUID>*)(__int64(Conn) + 0x1488);
}

__forceinline TMap<FNetworkGUID, TUniquePtr<FActorDestructionInfo>>& Replication::GetDestroyedStartupOrDormantActors(UNetDriver* Driver)
{
	return *(TMap<FNetworkGUID, TUniquePtr<FActorDestructionInfo>>*)(__int64(Driver) + 0x2e8);
}

__forceinline uint32& Replication::GetLastProcessedFrame(UNetConnection* Conn)
{
	return *(uint32*)(__int64(Conn) + 0x200);
}

__forceinline TSet<FName>& Replication::GetClientVisibleLevelNames(UNetConnection* Conn)
{
	return *(TSet<FName>*)(__int64(Conn) + 0x1578);
}

__forceinline FName& Replication::GetClientWorldPackageName(UNetConnection* Conn)
{
	return *(FName*)(__int64(Conn) + 0x16b8);
}

__forceinline AActor*& Replication::GetRepContextActor(UNetConnection* Conn)
{
	return *(AActor**)(__int64(Conn) + 0x16c8);
}

__forceinline ULevel*& Replication::GetRepContextLevel(UNetConnection* Conn)
{
	return *(ULevel**)(__int64(Conn) + 0x16d0);
}

__forceinline TSharedPtr<void*>& Replication::GetGuidCache(UNetDriver* Driver)
{
	return *(TSharedPtr<void*>*)(__int64(Driver) + 0x150);
}

__forceinline bool& Replication::GetPendingCloseDueToReplicationFailure(UNetConnection* Conn)
{
	return *(bool*)(__int64(Conn) + 0x1b56);
}


__forceinline int Replication::PrepConns(UNetDriver* Driver)
{
	//bool bFoundReadyConn = false;
	for (auto& Conn : Driver->ClientConnections)
	{
		auto Owner = Conn->OwningActor;
		if (Owner && GetElapsedTime(Conn->Driver) - Conn->LastReceiveTime < 1.5)
		{
			//bFoundReadyConn = true;
			auto OutViewTarget = Owner;
			if (auto Controller = Conn->PlayerController)
				if (auto ViewTarget = GetViewTarget(Controller))
					OutViewTarget = ViewTarget;
			Conn->ViewTarget = OutViewTarget;
			for (auto& Child : Conn->Children)
			{
				if (auto Controller = Child->PlayerController)
					Child->ViewTarget = GetViewTarget(Controller);
				else
					Child->ViewTarget = nullptr;
			}
		}
		else
		{
			Conn->ViewTarget = nullptr;
			for (auto& Child : Conn->Children)
				Child->ViewTarget = nullptr;
		}
	}

	return /*bFoundReadyConn ? */Driver->ClientConnections.Num()/* : 0*/;
}

__forceinline float FRand()
{
	/*random_device rd;
	mt19937 gen(rd());
	uniform_real_distribution<> dis(0, 1);
	float random_number = (float) dis(gen);

	return random_number;*/
	constexpr int32 RandMax = 0x00ffffff < RAND_MAX ? 0x00ffffff : RAND_MAX;
	return (rand() & RandMax) / (float)RandMax;
}

float fastLerp(float a, float b, float t)
{
	//return (a * (1.f - t)) + (b * t);
	return a - (a + b) * t;
}

TArray<FNetworkObjectInfo*> ConsiderList;
__forceinline void Replication::BuildConsiderList(UNetDriver* Driver, float DeltaTime)
{
	void (*CallPreReplication)(AActor*, UNetDriver*) = decltype(CallPreReplication)(Sarah::Offsets::CallPreReplication);
	void (*RemoveNetworkActor)(UNetDriver*, AActor*) = decltype(RemoveNetworkActor)(Sarah::Offsets::RemoveNetworkActor);
	auto& ActiveNetworkObjects = GetNetworkObjectList(Driver).ActiveNetworkObjects;
	ConsiderList.ResetNum();
	ConsiderList.Reserve(ActiveNetworkObjects.Num());
	auto Time = Driver->World->TimeSeconds;
	TArray<AActor*> ActorsToRemove;
	for (auto& ActorInfo : ActiveNetworkObjects)
	{
		if (!ActorInfo->bPendingNetUpdate && Time <= ActorInfo->NextUpdateTime)
			continue;
		auto Actor = ActorInfo->Actor;
		auto Outer = Actor->Outer;
		if (Actor->bActorIsBeingDestroyed || Actor->Flags & (EObjectFlags::PendingKill | EObjectFlags::Garbage) || Actor->RemoteRole == ENetRole::ROLE_None || Actor->NetDriverName != Driver->NetDriverName || (Actor->bNetStartup && Actor->NetDormancy == ENetDormancy::DORM_Initial))
		{
			ActorsToRemove.Add(Actor);
			continue;
		}
		if (!Actor->bActorInitialized)
			continue;

		ULevel* Level = nullptr;
		while (Outer && !Level)
		{
			if (Outer->Class == ULevel::StaticClass())
			{
				Level = (ULevel*)Outer;
				break;
			}
			else
			{
				Outer = Outer->Outer;
			}
		}
		if (Level == Level->OwningWorld->CurrentLevelPendingVisibility || Level == Level->OwningWorld->CurrentLevelPendingInvisibility || Level->bIsAssociatingLevel)
		{
			continue;
		}

		if (ActorInfo->LastNetReplicateTime == 0)
		{
			ActorInfo->LastNetReplicateTime = Time;
			//ActorInfo->OptimalNetUpdateDelta = 1.f / Actor->NetUpdateFrequency;
		}

		/*const float LastReplicateDelta = float(Time - ActorInfo->LastNetReplicateTime);

		if (LastReplicateDelta > 2.f)
		{
			if (Actor->MinNetUpdateFrequency == 0.f)
			{
				Actor->MinNetUpdateFrequency = 2.f;
			}

			const float MinOptimalDelta = 1.f / Actor->NetUpdateFrequency;
			const float MaxOptimalDelta = max(1.f / Actor->MinNetUpdateFrequency, MinOptimalDelta);

			const float Alpha = clamp((LastReplicateDelta - 2.f) / 5.f, 0.f, 1.f);
			ActorInfo->OptimalNetUpdateDelta = fastLerp(MinOptimalDelta, MaxOptimalDelta, Alpha);
		}*/

		if (!ActorInfo->bPendingNetUpdate)
		{
			//constexpr bool bUseAdapativeNetFrequency = false;
			const float NextUpdateDelta = /*bUseAdapativeNetFrequency ? ActorInfo->OptimalNetUpdateDelta : */1.f / Actor->NetUpdateFrequency;

			float ServerTickTime = 1.f / clamp(1.f / DeltaTime, 1.f, MaxTickRate);
			ActorInfo->NextUpdateTime = Time + FRand() * ServerTickTime + NextUpdateDelta;
			ActorInfo->LastNetUpdateTimestamp = (float)GetElapsedTime(Driver);
		}
		else
		{
			ActorInfo->bPendingNetUpdate = false;
		}

		ConsiderList.Add(ActorInfo.Get());

		CallPreReplication(Actor, Driver);
	}

	for (auto& Actor : ActorsToRemove) {
		RemoveNetworkActor(Driver, Actor);
	}
	ActorsToRemove.Free();
}

__forceinline bool Replication::IsActorRelevantToConnection(const AActor* Actor, const TArray<FNetViewer>& ConnectionViewers)
{
	bool (*IsNetRelevantFor)(const AActor *, const AActor *, const AActor *, const FVector &) = decltype(IsNetRelevantFor)(Actor->VTable[0x9a]);

	for (auto& Viewer : ConnectionViewers)
	{
		if (IsNetRelevantFor(Actor, Viewer.InViewer, Viewer.ViewTarget, Viewer.ViewLocation))
		{
			return true;
		}
	}

	return false;
}

__forceinline FNetViewer Replication::ConstructNetViewer(UNetConnection* NetConnection)
{
	FNetViewer newViewer{};
	newViewer.Connection = NetConnection;
	newViewer.InViewer = NetConnection->PlayerController ? NetConnection->PlayerController : NetConnection->OwningActor;
	newViewer.ViewTarget = NetConnection->ViewTarget;

	APlayerController* ViewingController = NetConnection->PlayerController;

	newViewer.ViewLocation = newViewer.ViewTarget->K2_GetActorLocation();

	if (ViewingController)
	{
		FRotator ViewRotation = ViewingController->ControlRotation;
		constexpr auto radian = 0.017453292519943295;
		double cosPitch = cos(ViewRotation.Pitch * radian), sinPitch = sin(ViewRotation.Pitch * radian), cosYaw = cos(ViewRotation.Yaw * radian), sinYaw = sin(ViewRotation.Yaw * radian);
		newViewer.ViewDir = FVector(cosPitch * cosYaw, cosPitch * sinYaw, sinPitch);
	}

	return newViewer;
}

__forceinline UNetConnection* Replication::IsActorOwnedByAndRelevantToConnection(const AActor* Actor, const TArray<FNetViewer>& ConnectionViewers, bool& bOutHasNullViewTarget)
{
	bool (*IsRelevancyOwnerFor)(const AActor*, const AActor*, const AActor*, const AActor*) = decltype(IsRelevancyOwnerFor)(Actor->VTable[0x9c]);
	AActor *(*GetNetOwner)(const AActor*) = decltype(GetNetOwner)(Actor->VTable[0xa0]);

	const AActor* ActorOwner = GetNetOwner(Actor);

	bOutHasNullViewTarget = false;

	for (auto& Viewer : ConnectionViewers)
	{
		UNetConnection* ViewerConnection = Viewer.Connection;

		if (ViewerConnection->ViewTarget == nullptr)
		{
			bOutHasNullViewTarget = true;
		}

		if (ActorOwner == ViewerConnection->PlayerController ||
			(ViewerConnection->PlayerController && ActorOwner == ViewerConnection->PlayerController->Pawn) ||
			(ViewerConnection->ViewTarget && IsRelevancyOwnerFor(ViewerConnection->ViewTarget, Actor, ActorOwner, ViewerConnection->OwningActor)))
		{
			return ViewerConnection;
		}
	}

	return nullptr;
}

__forceinline bool Replication::ShouldActorGoDormant(AActor* Actor, const TArray<FNetViewer>& ConnectionViewers, UActorChannel* Channel, const float Time, const bool bLowNetBandwidth)
{
	if (Actor->NetDormancy <= ENetDormancy::DORM_Awake || !Channel || Channel->bPendingDormancy || Channel->Dormant)
	{
		// Either shouldn't go dormant, or is already dormant
		return false;
	}

	if (Actor->NetDormancy == ENetDormancy::DORM_DormantPartial)
	{
		for (int32 viewerIdx = 0; viewerIdx < ConnectionViewers.Num(); viewerIdx++)
		{
			//if (!GetNetDormancy(Actor, ConnectionViewers[viewerIdx].ViewLocation, ConnectionViewers[viewerIdx].ViewDir, ConnectionViewers[viewerIdx].InViewer, ConnectionViewers[viewerIdx].ViewTarget, Channel, Time, bLowNetBandwidth))
			{
				return false;
			}
		}
	}

	return true;
}

__forceinline bool Replication::IsLevelInitializedForActor(const UNetDriver* NetDriver, const AActor* InActor, UNetConnection* InConnection)
{
	bool (*ClientHasInitializedLevelFor)(const UNetConnection*, const AActor*) = decltype(ClientHasInitializedLevelFor)(Sarah::Offsets::ClientHasInitializedLevelFor);

	const bool bCorrectWorld = NetDriver->WorldPackage != nullptr && (GetClientWorldPackageName(InConnection) == NetDriver->WorldPackage->Name) && ClientHasInitializedLevelFor(InConnection, InActor);		
	const bool bIsConnectionPC = (InActor == InConnection->PlayerController);
	return bCorrectWorld || bIsConnectionPC;
}

__forceinline void Replication::SendClientAdjustment(APlayerController *PlayerController)
{
	auto& ServerFrameInfo = *(FServerFrameInfo*)(__int64(PlayerController) + 0x7a4);

	if (ServerFrameInfo.LastProcessedInputFrame != -1 && ServerFrameInfo.LastProcessedInputFrame != ServerFrameInfo.LastSentLocalFrame)
	{
		ServerFrameInfo.LastSentLocalFrame = ServerFrameInfo.LastProcessedInputFrame;
		PlayerController->ClientRecvServerAckFrame(ServerFrameInfo.LastProcessedInputFrame, ServerFrameInfo.LastLocalFrame, ServerFrameInfo.QuantizedTimeDilation);
	}

	auto Pawn = (ACharacter *) PlayerController->Pawn;

	if (!Pawn || Pawn->RemoteRole != ENetRole::ROLE_AutonomousProxy)
	{
		return;
	}
	
	auto Interface = Utils::GetInterface<INetworkPredictionInterface>(Pawn->CharacterMovement);

	if (Interface)
	{
		auto SendClientAdjustmemt = (void (*)(INetworkPredictionInterface*)) Sarah::Offsets::SendClientAdjustment;
		SendClientAdjustmemt(Interface);
	}
}

UEAllocatedVector<FActorPriority> PriorityActors;

__forceinline void Replication::PrioritizeActors(UNetDriver *Driver, UNetConnection *Conn, TArray<FNetViewer>& ConnViewers) {
	void (*CloseActorChannel)(UActorChannel*, uint8) = decltype(CloseActorChannel)(Sarah::Offsets::CloseActorChannel);
	UActorChannel* (*FindActorChannelRef)(UNetConnection*, const TWeakObjectPtr<AActor>&) = decltype(FindActorChannelRef)(Sarah::Offsets::FindActorChannelRef);
	void (*StartBecomingDormant)(UActorChannel*) = decltype(StartBecomingDormant)(Sarah::Offsets::StartBecomingDormant);

	GetNetTag(Driver)++;
	for (auto& Temp : Conn->SentTemporaries)
		Temp->NetTag = GetNetTag(Driver);

	int32 MaxSortedActors = ConsiderList.Num() + GetDestroyedStartupOrDormantActors(Driver).Num();
	if (MaxSortedActors > 0) {
		PriorityActors.clear();
		PriorityActors.reserve(MaxSortedActors);

		for (auto& ActorInfo : ConsiderList) {
			auto Channel = FindActorChannelRef(Conn, ActorInfo->WeakActor);
			auto Actor = ActorInfo->Actor;

			UNetConnection* PriorityConnection = Conn;
			if (!Channel && (!IsActorRelevantToConnection(Actor, ConnViewers) || !IsLevelInitializedForActor(Driver, Actor, Conn))) continue;

			if (Actor->bOnlyRelevantToOwner)
			{
				bool bHasNullViewTarget = false;

				auto PriorityConnection = IsActorOwnedByAndRelevantToConnection(Actor, ConnViewers, bHasNullViewTarget);

				if (PriorityConnection == nullptr)
				{
					if (!bHasNullViewTarget && Channel != NULL && GetElapsedTime(Driver) - GetRelevantTime(Channel) >= Driver->RelevantTimeout)
						CloseActorChannel(Channel, 3);

					continue;
				}
			}
			else {
				if (ActorInfo->DormantConnections.Contains(Conn)) continue;

				if (ShouldActorGoDormant(Actor, ConnViewers, Channel, (float)GetElapsedTime(Driver), false))
					StartBecomingDormant(Channel);
			}

			if (GetNetTag(Driver) != Actor->NetTag) {
				Actor->NetTag = GetNetTag(Driver);

				PriorityActors.push_back(FActorPriority(PriorityConnection, Channel, ActorInfo, ConnViewers));
			}
		}

		for (auto& NetworkGUID : GetDestroyedStartupOrDormantActorGUIDs(Conn))
		{
			auto Equals = [](const FNetworkGUID& LeftKey, const FNetworkGUID& RightKey) -> bool
				{
					return LeftKey == RightKey;
				};

			if (FActorDestructionInfo* DestructionInfo = (*GetDestroyedStartupOrDormantActors(Driver).Find(NetworkGUID, Equals)).Value().Get())
			{
				if (DestructionInfo->StreamingLevelName != FName(0) && !GetClientVisibleLevelNames(Conn).Contains(DestructionInfo->StreamingLevelName))
					continue;

				PriorityActors.push_back(FActorPriority(Conn, DestructionInfo, ConnViewers));
			}
		}

		sort(PriorityActors.begin(), PriorityActors.end(), greater());
	}
}

__forceinline bool Replication::IsNetReady(UNetConnection* Connection, bool bSaturate) {
	bool (*IsNetReady)(UNetConnection*, bool) = decltype(IsNetReady)(Sarah::Offsets::IsNetReady);
	return IsNetReady(Connection, bSaturate);
}

__forceinline bool Replication::IsNetReady(UChannel* Channel, bool bSaturate) {
	if (Channel->NumOutRec >= 255)
		return 0;
	return IsNetReady(Channel->Connection, bSaturate);
}

__forceinline size_t Replication::ProcessPrioritizedActors(UNetDriver *Driver, UNetConnection *Conn, TArray<FNetViewer>& ConnViewers) {
	UActorChannel* (*CreateChannelByName)(UNetConnection*, FName*, EChannelCreateFlags, int32_t) = decltype(CreateChannelByName)(Sarah::Offsets::CreateChannelByName);
	__int64 (*SetChannelActor)(UActorChannel*, AActor*) = decltype(SetChannelActor)(Sarah::Offsets::SetChannelActor);
	__int64 (*ReplicateActor)(UActorChannel*) = decltype(ReplicateActor)(Sarah::Offsets::ReplicateActor);
	void (*CloseActorChannel)(UActorChannel*, uint8) = decltype(CloseActorChannel)(Sarah::Offsets::CloseActorChannel);
	int64(*SetChannelActorForDestroy)(UActorChannel*, FActorDestructionInfo*) = decltype(SetChannelActorForDestroy)(Sarah::Offsets::SetChannelActorForDestroy);
	bool (*SupportsObject)(void*, const UObject*, const TWeakObjectPtr<UObject>*) = decltype(SupportsObject)(Sarah::Offsets::SupportsObject);
	UObject* (*GetArchetype)(UObject*) = decltype(GetArchetype)(Sarah::Offsets::GetArchetype);

	if (!IsNetReady(Conn, false)) return 0;

	static auto ActorFName = FName(298);
	int i = 0;
	for (auto& PriorityActor : PriorityActors) {
		i++;
		auto ActorInfo = PriorityActor.ActorInfo;
		if (ActorInfo == nullptr && PriorityActor.DestructionInfo) {

			GetRepContextLevel(Conn) = PriorityActor.DestructionInfo->Level.Get();

			UActorChannel* Channel = (UActorChannel*)CreateChannelByName(Conn, &ActorFName, EChannelCreateFlags::OpenedLocally, -1);
			if (Channel)
			{
				SetChannelActorForDestroy(Channel, PriorityActor.DestructionInfo);
				CloseActorChannel(Channel, 0);
			}

			GetRepContextLevel(Conn) = nullptr;
			GetDestroyedStartupOrDormantActorGUIDs(Conn).Remove(PriorityActor.DestructionInfo->NetGUID);
			continue;
		}

		UActorChannel* Channel = PriorityActor.Channel;

		if (!Channel || Channel->Actor) {
			auto Actor = ActorInfo->Actor;

			bool bLevelInitializedForActor = IsLevelInitializedForActor(Driver, Actor, Conn);
			bool bRelevant = bLevelInitializedForActor && !Actor->bTearOff && (!Channel || GetElapsedTime(Driver) - GetRelevantTime(Channel) > 1.0) && IsActorRelevantToConnection(Actor, ConnViewers);
			bool bRecentlyRelevant = bRelevant || (Channel && GetElapsedTime(Driver) - GetRelevantTime(Channel) < Driver->RelevantTimeout) || (ActorInfo->ForceRelevantFrame >= GetLastProcessedFrame(Conn));

			if (bRecentlyRelevant) {
				if (!Channel && SupportsObject(GetGuidCache(Driver).Get(), Actor->Class, nullptr) && SupportsObject(GetGuidCache(Driver).Get(), Actor->bNetStartup ? Actor : GetArchetype(Actor), nullptr)) {
					if (bLevelInitializedForActor) {
						Channel = CreateChannelByName(Conn, &ActorFName, EChannelCreateFlags::OpenedLocally, -1);

						if (Channel)
							SetChannelActor(Channel, Actor);
					}
					else if (Actor->NetUpdateFrequency < 1.0f)
						ActorInfo->NextUpdateTime = Driver->World->TimeSeconds + 0.2f * FRand();
				}
				if (Channel) {
					if (bRelevant)
						GetRelevantTime(Channel) = GetElapsedTime(Driver) + 0.5 * FRand();
					if (IsNetReady(Channel, false)) {
						if (ReplicateActor(Channel)) {
							auto TimeSeconds = Driver->World->TimeSeconds;
							/*const float MinOptimalDelta = 1.f / Actor->NetUpdateFrequency;
							const float MaxOptimalDelta = max(1.f / Actor->MinNetUpdateFrequency, MinOptimalDelta);
							const float DeltaBetweenReplications = float(TimeSeconds - ActorInfo->LastNetReplicateTime);

							ActorInfo->OptimalNetUpdateDelta = clamp(DeltaBetweenReplications * 0.7f, MinOptimalDelta, MaxOptimalDelta);*/
							ActorInfo->LastNetReplicateTime = TimeSeconds;
						}
					}
					else {
						Actor->ForceNetUpdate();
						return i;
					}
				}
			}

			if (Channel && (!bRecentlyRelevant || Actor->bTearOff) && (bLevelInitializedForActor || !Actor->bNetStartup))
				CloseActorChannel(Channel, Actor->bTearOff ? 4 : 3);
		}
	}
	return PriorityActors.size() - 1;
}

void Replication::ServerReplicateActors(UNetDriver* Driver, float DeltaTime)
{
	GetReplicationFrame(Driver)++;

	auto NumConns = PrepConns(Driver);
	if (NumConns == 0)
		return;
	BuildConsiderList(Driver, DeltaTime);

	auto WorldSettings = Driver->World->K2_GetWorldSettings();
	void (*CloseConnection)(UNetConnection *) = decltype(CloseConnection)(Sarah::Offsets::CloseConnection);
	
	for (auto& Conn : Driver->ClientConnections) {
		if (!Conn->ViewTarget)
			continue;

		if (Conn->PlayerController)
			SendClientAdjustment(Conn->PlayerController);

		for (auto& Child : Conn->Children)
			if (Child->PlayerController)
				SendClientAdjustment(Child->PlayerController);

		TArray<FNetViewer>& ConnViewers = WorldSettings->ReplicationViewers;
		ConnViewers.ResetNum();
		ConnViewers.Add(ConstructNetViewer(Conn));
		for (auto& Child : Conn->Children)
			if (Child->ViewTarget) 
				ConnViewers.Add(ConstructNetViewer(Child));

		PrioritizeActors(Driver, Conn, ConnViewers);
		if (PriorityActors.size() > 0) {
			auto LastProcessedActor = ProcessPrioritizedActors(Driver, Conn, ConnViewers);
			for (size_t i = LastProcessedActor; i < PriorityActors.size() - 1; i++) {
				auto& PriorityActor = PriorityActors[i];
				if (!PriorityActor.ActorInfo)
					continue;

				auto ActorInfo = PriorityActor.ActorInfo;
				auto Actor = ActorInfo->Actor;
				auto Channel = PriorityActor.Channel;

				if (Channel && GetElapsedTime(Driver) - GetRelevantTime(Channel) <= 1.0) {
					ActorInfo->bPendingNetUpdate = true;
				}
				else if (IsActorRelevantToConnection(Actor, ConnViewers)) {
					ActorInfo->bPendingNetUpdate = true;
					if (Channel)
						GetRelevantTime(Channel) = GetElapsedTime(Driver) + 0.5 * FRand();
				}

				if (ActorInfo->ForceRelevantFrame >= GetLastProcessedFrame(Conn))
					ActorInfo->ForceRelevantFrame = GetReplicationFrame(Driver) + 1;
			}
		}
		
		GetLastProcessedFrame(Conn) = GetReplicationFrame(Driver);

		if (GetPendingCloseDueToReplicationFailure(Conn))
			CloseConnection(Conn);
	}

	ConsiderList.Free();
}
