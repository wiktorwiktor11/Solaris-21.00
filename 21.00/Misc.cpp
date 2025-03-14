#include "pch.h"
#include "Misc.h"
#include "Replication.h"
#include "Options.h"

int Misc::GetNetMode() {
	return 1;
}

float Misc::GetMaxTickRate(UEngine* Engine, float DeltaTime, bool bAllowFrameRateSmoothing) {
	// improper, DS is supposed to do hitching differently
	return clamp(1.f / DeltaTime, 1.f, MaxTickRate);
}

bool Misc::RetTrue() { return true; }

void Misc::TickFlush(UNetDriver* Driver, float DeltaTime)
{
	Replication::ServerReplicateActors(Driver, DeltaTime);

	return TickFlushOG(Driver, DeltaTime);
}

void* Misc::DispatchRequest(void* Arg1, void* MCPData, int)
{
	return DispatchRequestOG(Arg1, MCPData, 3);
}

void Misc::Listen() {
	auto World = UWorld::GetWorld();
	auto Engine = UEngine::GetEngine();
	FWorldContext* Context = ((FWorldContext * (*)(UEngine*, UWorld*)) (Sarah::Offsets::ImageBase + 0xebd6a8))(Engine, World);
	auto NetDriverName = FName(L"GameNetDriver");
	auto NetDriver = World->NetDriver = ((UNetDriver * (*)(UEngine*, FWorldContext*, FName))Sarah::Offsets::CreateNetDriver)(Engine, Context, NetDriverName);

	NetDriver->NetDriverName = NetDriverName;
	NetDriver->World = World;

	for (auto& Collection : World->LevelCollections) Collection.NetDriver = NetDriver;

	FString Err;
	if (((bool (*)(UNetDriver*, UWorld*, FURL&, bool, FString&))Sarah::Offsets::InitListen)(NetDriver, World, World->PersistentLevel->URL, false, Err)) {
		((void (*)(UNetDriver*, UWorld*))Sarah::Offsets::SetWorld)(NetDriver, World);
	}
	else {
		Log(L"Failed to listen");
	}
}

void Misc::SetDynamicFoundationEnabled(UObject* Context, FFrame& Stack)
{
	auto Foundation = (ABuildingFoundation*)Context;
	bool bEnabled;
	Stack.StepCompiledIn(&bEnabled);
	Stack.IncrementCode();
	Foundation->DynamicFoundationRepData.EnabledState = bEnabled ? EDynamicFoundationEnabledState::Enabled : EDynamicFoundationEnabledState::Disabled;
	Foundation->OnRep_DynamicFoundationRepData();
	Foundation->FoundationEnabledState = bEnabled ? EDynamicFoundationEnabledState::Enabled : EDynamicFoundationEnabledState::Disabled;
}

void Misc::SetDynamicFoundationTransform(UObject* Context, FFrame& Stack)
{
	auto Foundation = (ABuildingFoundation*)Context;
	FTransform Transform;
	Stack.StepCompiledIn(&Transform);
	Stack.IncrementCode();
	Foundation->DynamicFoundationTransform = Transform;
	Foundation->DynamicFoundationRepData.Rotation = Transform.Rotation.Rotator();
	Foundation->DynamicFoundationRepData.Translation = Transform.Translation;
	Foundation->StreamingData.FoundationLocation = Transform.Translation;
	Foundation->StreamingData.BoundingBox = Foundation->StreamingBoundingBox;
	Foundation->OnRep_DynamicFoundationRepData();
}

bool Misc::RetFalse()
{
	return false;
}

void Misc::StartNewSafeZonePhase(AFortGameModeAthena* GameMode, int a2)
{
	auto GameState = (AFortGameStateAthena *) GameMode->GameState;

	FFortSafeZoneDefinition* SafeZoneDefinition = &GameState->MapInfo->SafeZoneDefinition;
	TArray<float> Durations = *(TArray<float>*)(__int64(SafeZoneDefinition) + 0x248);
	TArray<float> HoldDurations = *(TArray<float>*)(__int64(SafeZoneDefinition) + 0x238);

	auto DurationSum = 0.f;
	for (auto& _v : Durations) DurationSum += _v;
	if (DurationSum == 0)
	{
		auto GameData = GameState->CurrentPlaylistInfo.BasePlaylist->GameData.Get();

		if (!GameData)
			GameData = Utils::FindObject<UCurveTable>("/Game/Balance/AthenaGameData.AthenaGameData");

		auto ShrinkTime = FName(L"Default.SafeZone.ShrinkTime");
		auto HoldTime = FName(L"Default.SafeZone.WaitTime");

		for (int i = 0; i < Durations.Num(); i++)
			UDataTableFunctionLibrary::EvaluateCurveTableRow(GameData, ShrinkTime, (float)i, nullptr, &Durations[i], FString());
		for (int i = 0; i < HoldDurations.Num(); i++)
			UDataTableFunctionLibrary::EvaluateCurveTableRow(GameData, HoldTime, (float)i, nullptr, &HoldDurations[i], FString());
	}

	auto& Duration = Durations[GameMode->SafeZonePhase + 1];
	auto& HoldDuration = HoldDurations[GameMode->SafeZonePhase + 1];

	GameMode->SafeZoneIndicator->SafeZoneStartShrinkTime = UGameplayStatics::GetTimeSeconds(UWorld::GetWorld()) + HoldDuration;
	GameMode->SafeZoneIndicator->SafeZoneFinishShrinkTime = GameMode->SafeZoneIndicator->SafeZoneStartShrinkTime + Duration;
	StartNewSafeZonePhaseOG(GameMode, a2);
}

uint32 Misc::CheckCheckpointHeartBeat() {
	return -1;
}


void Misc::Hook() {
	Utils::Hook(Sarah::Offsets::WorldNetMode, GetNetMode);
	Utils::Hook(Sarah::Offsets::GetMaxTickRate, GetMaxTickRate, GetMaxTickRateOG);
	Utils::Hook(Sarah::Offsets::TickFlush, TickFlush, TickFlushOG);
	Utils::Hook(Sarah::Offsets::DispatchRequest, DispatchRequest, DispatchRequestOG);
	Utils::ExecHook("/Script/FortniteGame.BuildingFoundation.SetDynamicFoundationTransform", SetDynamicFoundationTransform);
	Utils::ExecHook("/Script/FortniteGame.BuildingFoundation.SetDynamicFoundationEnabled", SetDynamicFoundationEnabled);
	Utils::Hook(Sarah::Offsets::StartNewSafeZonePhase, StartNewSafeZonePhase, StartNewSafeZonePhaseOG);
	Utils::Patch<uint8_t>(Sarah::Offsets::EncryptionPatch, 0x74);
	Utils::Patch<uint8_t>(Sarah::Offsets::GameSessionPatch, 0x85);
	Utils::Hook(Sarah::Offsets::ImageBase + 0x88f5da4, Listen);
	for (auto& NullFunc : Sarah::Offsets::NullFuncs)
		Utils::Patch<uint8_t>(NullFunc, 0xc3);
	for (auto& RetTrueFunc : Sarah::Offsets::RetTrueFuncs) {
		Utils::Patch<uint32_t>(RetTrueFunc, 0xc0ffc031);
		Utils::Patch<uint8_t>(RetTrueFunc + 4, 0xc3);
	}
	Utils::Hook(Sarah::Offsets::ImageBase + 0x4a9d740, CheckCheckpointHeartBeat);
}
