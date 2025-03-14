#pragma once
#include "pch.h"
#include "Utils.h"

struct FNetworkObjectInfo
{
	class SDK::AActor* Actor;

	TWeakObjectPtr<class SDK::AActor> WeakActor;

	double NextUpdateTime;

	double LastNetReplicateTime;

	float OptimalNetUpdateDelta;

	double LastNetUpdateTimestamp;

	TSet<TWeakObjectPtr<class SDK::UNetConnection>> DormantConnections;

	TSet<TWeakObjectPtr<class SDK::UNetConnection>> RecentlyDormantConnections;

	uint8 bPendingNetUpdate : 1;

	uint8 bDirtyForReplay : 1;

	uint8 bSwapRolesOnReplicate : 1;

	uint32 ForceRelevantFrame = 0;
};


template< class ObjectType>
class TSharedPtr
{
public:
	ObjectType* Object;

	int32 SharedReferenceCount;
	int32 WeakReferenceCount;

	FORCEINLINE ObjectType* Get()
	{
		return Object;
	}
	FORCEINLINE ObjectType* Get() const
	{
		return Object;
	}
	FORCEINLINE ObjectType& operator*()
	{
		return *Object;
	}
	FORCEINLINE const ObjectType& operator*() const
	{
		return *Object;
	}
	FORCEINLINE ObjectType* operator->()
	{
		return Object;
	}
	FORCEINLINE ObjectType* operator->() const
	{
		return Object;
	}
};

class FNetworkObjectList
{
public:
	using FNetworkObjectSet = TSet<TSharedPtr<FNetworkObjectInfo>>;

	FNetworkObjectSet AllNetworkObjects;
	FNetworkObjectSet ActiveNetworkObjects;
	FNetworkObjectSet ObjectsDormantOnAllConnections;

	TMap<TWeakObjectPtr<UNetConnection>, int32> NumDormantObjectsPerConnection;

	void Remove(AActor* const Actor);
};

struct alignas(0x4) FServerFrameInfo
{
	int32 LastProcessedInputFrame = -1;
	int32 LastLocalFrame = -1;
	int32 LastSentLocalFrame = -1;

	float TargetTimeDilation = 1.f;
	int8 QuantizedTimeDilation = 1;
	float TargetNumBufferedCmds = 1.f;
	bool bFault = true;
};

class FNetworkGUID
{
public:

	uint32 Value;

public:

	FNetworkGUID()
		: Value(0)
	{
	}

	FNetworkGUID(uint32 V)
		: Value(V)
	{
	}

public:

	friend bool operator==(const FNetworkGUID& X, const FNetworkGUID& Y)
	{
		return (X.Value == Y.Value);
	}

	friend bool operator!=(const FNetworkGUID& X, const FNetworkGUID& Y)
	{
		return (X.Value != Y.Value);
	}
};


struct FActorDestructionInfo
{
public:
	FActorDestructionInfo()
		: Reason(0)
		, bIgnoreDistanceCulling(false)
	{
	}

	TWeakObjectPtr<class SDK::ULevel> Level;
	TWeakObjectPtr<class SDK::UObject> ObjOuter;
	struct SDK::FVector DestroyedPosition;
	class FNetworkGUID NetGUID;
	class SDK::FString PathName;
	class SDK::FName StreamingLevelName;
	uint8_t Reason;

	bool bIgnoreDistanceCulling;
};

template< class ObjectType>
class TUniquePtr
{
public:
	ObjectType* Ptr;

	FORCEINLINE ObjectType* Get()
	{
		return Ptr;
	}
	FORCEINLINE ObjectType* Get() const
	{
		return Ptr;
	}
	FORCEINLINE ObjectType& operator*()
	{
		return *Ptr;
	}
	FORCEINLINE const ObjectType& operator*() const
	{
		return *Ptr;
	}
	FORCEINLINE ObjectType* operator->()
	{
		return Ptr;
	}
	FORCEINLINE ObjectType* operator->() const
	{
		return Ptr;
	}
};

#define CLOSEPROXIMITY					500.
#define NEARSIGHTTHRESHOLD				2000.
#define MEDSIGHTTHRESHOLD				3162.
#define FARSIGHTTHRESHOLD				8000.
#define CLOSEPROXIMITYSQUARED			(CLOSEPROXIMITY*CLOSEPROXIMITY)
#define NEARSIGHTTHRESHOLDSQUARED		(NEARSIGHTTHRESHOLD*NEARSIGHTTHRESHOLD)
#define MEDSIGHTTHRESHOLDSQUARED		(MEDSIGHTTHRESHOLD*MEDSIGHTTHRESHOLD)
#define FARSIGHTTHRESHOLDSQUARED		(FARSIGHTTHRESHOLD*FARSIGHTTHRESHOLD)

struct FActorPriority
{
	int32 Priority;

	FNetworkObjectInfo* ActorInfo;
	UActorChannel* Channel;

	FActorDestructionInfo* DestructionInfo;

	FActorPriority() :
		Priority(0), ActorInfo(NULL), Channel(NULL), DestructionInfo(NULL)
	{
	}

	FActorPriority(UNetConnection* InConnection, UActorChannel* InChannel, FNetworkObjectInfo* InActorInfo, const TArray<FNetViewer>& Viewers)
		: ActorInfo(InActorInfo), Channel(InChannel), DestructionInfo(NULL)
	{
		const auto Time = float(Channel ? (*(double*)(__int64(InConnection->Driver) + 0x218) - *(double*)(__int64(InChannel) + 0x84)) : InConnection->Driver->SpawnPrioritySeconds);

		Priority = 0;
		for (int32 i = 0; i < Viewers.Num(); i++)
		{
			float (*GetNetPriority)(AActor *, const FVector &, const FVector &, class AActor*, AActor *, UActorChannel *, float, bool) = decltype(GetNetPriority)(ActorInfo->Actor->VTable[0x85]);

			Priority = max(Priority, (int32) round(65536.0f * GetNetPriority(ActorInfo->Actor, Viewers[i].ViewLocation, Viewers[i].ViewDir, Viewers[i].InViewer, Viewers[i].ViewTarget, InChannel, Time, false)));
		}
	}

	FActorPriority(UNetConnection* InConnection, FActorDestructionInfo* DestructInfo, const TArray<FNetViewer>& Viewers)
		: ActorInfo(NULL), Channel(NULL), DestructionInfo(DestructInfo)
	{
		Priority = 0;

		for (int32 i = 0; i < Viewers.Num(); i++)
		{
			float Time = InConnection->Driver->SpawnPrioritySeconds;

			FVector Dir = DestructionInfo->DestroyedPosition - Viewers[i].ViewLocation;
			double DistSq = Dir.SizeSquared();

			// adjust priority based on distance and whether actor is in front of viewer
			if ((Viewers[i].ViewDir | Dir) < 0.f)
			{
				if (DistSq > NEARSIGHTTHRESHOLDSQUARED)
					Time *= 0.2f;
				else if (DistSq > CLOSEPROXIMITYSQUARED)
					Time *= 0.4f;
			}
			else if (DistSq > MEDSIGHTTHRESHOLDSQUARED)
				Time *= 0.4f;

			Priority = max(Priority, int32(65536.0f * Time));
		}
	}

	bool operator>(FActorPriority& _Rhs) {
		return Priority > _Rhs.Priority;
	}
};

enum class EChannelCreateFlags : uint32_t
{
	None = (1 << 0),
	OpenedLocally = (1 << 1)
};

class Replication {
private:
	static inline auto ActorFName = FName(298);

	static int& GetReplicationFrame(UNetDriver*);
	static FNetworkObjectList& GetNetworkObjectList(UNetDriver*);
	static double& GetElapsedTime(UNetDriver*);
	static AActor* GetViewTarget(APlayerController*);
	static double& GetRelevantTime(UActorChannel* Channel);
	static int32& GetNetTag(UNetDriver* Driver);
	static TSet<FNetworkGUID>& GetDestroyedStartupOrDormantActorGUIDs(UNetConnection* Conn);
	static TMap<FNetworkGUID, TUniquePtr<FActorDestructionInfo>>& GetDestroyedStartupOrDormantActors(UNetDriver* Driver);
	static uint32& GetLastProcessedFrame(UNetConnection* Conn);
	static TSet<FName>& GetClientVisibleLevelNames(UNetConnection* Conn);
	static FName& GetClientWorldPackageName(UNetConnection* Conn);
	static AActor*& GetRepContextActor(UNetConnection* Conn);
	static ULevel*& GetRepContextLevel(UNetConnection* Conn);
	static TSharedPtr<void*>& GetGuidCache(UNetDriver* Driver);
	static bool& GetPendingCloseDueToReplicationFailure(UNetConnection* Conn);
	static int PrepConns(UNetDriver*);
	static void BuildConsiderList(UNetDriver*, float);
	static bool IsActorRelevantToConnection(const AActor* Actor, const TArray<FNetViewer>& ConnectionViewers);
	static FNetViewer ConstructNetViewer(UNetConnection* NetConnection);
	static UNetConnection* IsActorOwnedByAndRelevantToConnection(const AActor* Actor, const TArray<FNetViewer>& ConnectionViewers, bool& bOutHasNullViewTarget);
	static bool ShouldActorGoDormant(AActor* Actor, const TArray<FNetViewer>& ConnectionViewers, UActorChannel* Channel, const float Time, const bool bLowNetBandwidth);
	static bool IsLevelInitializedForActor(const UNetDriver* Driver, const AActor* InActor, UNetConnection* InConnection);
	static void SendClientAdjustment(APlayerController*);
	static void PrioritizeActors(UNetDriver* Driver, UNetConnection* Conn, TArray<FNetViewer>& ConnViewers);
	static bool IsNetReady(UNetConnection* Connection, bool bSaturate);
	static bool IsNetReady(UChannel* Channel, bool bSaturate);
	static size_t ProcessPrioritizedActors(UNetDriver* Driver, UNetConnection* Conn, TArray<FNetViewer>& ConnViewers);
public:
	static void ServerReplicateActors(UNetDriver*, float);
};