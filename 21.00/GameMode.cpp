#include "pch.h"
#include "GameMode.h"
#include "Abilities.h"
#include "Inventory.h"
#include "Looting.h"

#include "Offsets.h"

void SetPlaylist(AFortGameModeAthena* GameMode, UFortPlaylistAthena* Playlist) {
	auto GameState = (AFortGameStateAthena*)GameMode->GameState;

	GameState->CurrentPlaylistInfo.BasePlaylist = Playlist;
	GameState->CurrentPlaylistInfo.OverridePlaylist = Playlist;
	GameState->CurrentPlaylistInfo.PlaylistReplicationKey++;
	GameState->CurrentPlaylistInfo.MarkArrayDirty();

	GameState->CurrentPlaylistId = GameMode->CurrentPlaylistId = Playlist->PlaylistId;
	GameMode->CurrentPlaylistName = Playlist->PlaylistName;
	GameState->OnRep_CurrentPlaylistInfo();
	GameState->OnRep_CurrentPlaylistId();

	GameMode->GameSession->MaxPlayers = Playlist->MaxPlayers;

	GameState->AirCraftBehavior = Playlist->AirCraftBehavior;
	GameState->WorldLevel = Playlist->LootLevel;
	GameState->CachedSafeZoneStartUp = Playlist->SafeZoneStartUp;

	GameMode->bAlwaysDBNO = Playlist->MaxSquadSize > 1;
}

bool bReady = false;
bool GameMode::ReadyToStartMatch(UObject* Context, FFrame& Stack, bool* Ret) {
	static auto Playlist = Utils::FindObject<UFortPlaylistAthena>("/Game/Athena/Playlists/Playlist_DefaultSolo.Playlist_DefaultSolo");
	Stack.IncrementCode();
	auto GameMode = Context->Cast<AFortGameModeAthena>();
	if (!GameMode) return *Ret = callOGWithRet(((AGameMode*)Context), "/Script/Engine.GameMode", ReadyToStartMatch);
	auto GameState = ((AFortGameStateAthena*)GameMode->GameState);
	if (GameMode->CurrentPlaylistId == -1) {
		GameMode->WarmupRequiredPlayerCount = 1;

		SetPlaylist(GameMode, Playlist);
		for (auto& Level : Playlist->AdditionalLevels)
		{
			bool Success = false;
			std::cout << "Level: " << Level.Get()->Name.ToString() << std::endl;
			ULevelStreamingDynamic::LoadLevelInstanceBySoftObjectPtr(UWorld::GetWorld(), Level, FVector(), FRotator(), &Success, FString(), nullptr);
			FAdditionalLevelStreamed level{};
			level.bIsServerOnly = false;
			level.LevelName = Level.ObjectID.AssetPathName;
			if (Success) GameState->AdditionalPlaylistLevelsStreamed.Add(level);
		}
		for (auto& Level : Playlist->AdditionalLevelsServerOnly)
		{
			bool Success = false;
			std::cout << "Level: " << Level.Get()->Name.ToString() << std::endl;
			ULevelStreamingDynamic::LoadLevelInstanceBySoftObjectPtr(UWorld::GetWorld(), Level, FVector(), FRotator(), &Success, FString(), nullptr);
			FAdditionalLevelStreamed level{};
			level.bIsServerOnly = true;
			level.LevelName = Level.ObjectID.AssetPathName;
			if (Success) GameState->AdditionalPlaylistLevelsStreamed.Add(level);
		}
		GameState->OnRep_AdditionalPlaylistLevelsStreamed();

		return *Ret = false;
	}

	if (!GameMode->bWorldIsReady) {
		auto Starts = Utils::GetAll<AFortPlayerStartWarmup>();
		auto StartsNum = Starts.Num();
		Starts.Free();
		if (StartsNum == 0 || !GameState->MapInfo)
			return *Ret = false;

		GameState->DefaultParachuteDeployTraceForGroundDistance = 10000;


		Looting::SpawnFloorLootForContainer(Utils::FindObject<UBlueprintGeneratedClass>("/Game/Athena/Environments/Blueprints/Tiered_Athena_FloorLoot_Warmup.Tiered_Athena_FloorLoot_Warmup_C"));
		Looting::SpawnFloorLootForContainer(Utils::FindObject<UBlueprintGeneratedClass>("/Game/Athena/Environments/Blueprints/Tiered_Athena_FloorLoot_01.Tiered_Athena_FloorLoot_01_C"));

		AbilitySets.Add(Utils::FindObject<UFortAbilitySet>("/Game/Abilities/Player/Generic/Traits/DefaultPlayer/GAS_AthenaPlayer.GAS_AthenaPlayer"));

		for (int i = 0; i < UObject::GObjects->Num(); i++)
		{
			auto Object = UObject::GObjects->GetByIndex(i);

			if (!Object || !Object->Class || Object->IsDefaultObject())
				continue;

			if (auto GameFeatureData = Object->Cast<UFortGameFeatureData>())
			{
				auto AbilitySet = GameFeatureData->PlayerAbilitySet.Get();
				if (!AbilitySet) continue;
				AbilitySets.Add(AbilitySet);
				AbilitySet->AddToRoot();
			}
		}

		UCurveTable* AthenaGameDataTable = GameState->AthenaGameDataTable; // this is js playlist gamedata or default gamedata if playlist doesn't have one

		if (AthenaGameDataTable)
		{
			static FName DefaultSafeZoneDamageName = FName(L"Default.SafeZone.Damage");

			for (const auto& [RowName, RowPtr] : ((UDataTable*)AthenaGameDataTable)->RowMap) // same offset
			{
				if (RowName != DefaultSafeZoneDamageName)
					continue;

				FSimpleCurve* Row = (FSimpleCurve*)RowPtr;

				if (!Row)
					continue;

				for (auto& Key : Row->Keys)
				{
					FSimpleCurveKey* KeyPtr = &Key;

					if (KeyPtr->Time == 0.f)
					{
						KeyPtr->Value = 0.f;
					}
				}

				Row->Keys.Add(FSimpleCurveKey(1.f, 0.01f), 1);
			}
		}

		SetConsoleTitleA("Sarah 21.00: Ready");
		GameMode->bWorldIsReady = true;
		return *Ret = false;
	}

	return *Ret = GameMode->AlivePlayers.Num() > 0;
}

APawn* GameMode::SpawnDefaultPawnFor(UObject* Context, FFrame& Stack, APawn** Ret) {
	AController* NewPlayer;
	AActor* StartSpot;
	Stack.StepCompiledIn(&NewPlayer);
	Stack.StepCompiledIn(&StartSpot);
	Stack.IncrementCode();
	auto GameMode = (AFortGameModeAthena*)Context;
	auto Transform = StartSpot->GetTransform();
	auto Pawn = GameMode->SpawnDefaultPawnAtTransform(NewPlayer, Transform);

	static bool IsFirstPlayer = false;

	if (!IsFirstPlayer)
	{
		Utils::Patch<uint8_t>(Sarah::Offsets::ImageBase + 0x154b864, 0xc3);
		IsFirstPlayer = true;
	}

	auto PlayerController = NewPlayer->Cast<AFortPlayerController>();
	if (!PlayerController) return *Ret = Pawn;

	auto Num = PlayerController->WorldInventory->Inventory.ReplicatedEntries.Num();
	if (Num != 0) {
		PlayerController->WorldInventory->Inventory.ReplicatedEntries.ResetNum();
		PlayerController->WorldInventory->Inventory.ItemInstances.ResetNum();
	}
	Inventory::GiveItem(PlayerController, PlayerController->CosmeticLoadoutPC.Pickaxe->WeaponDefinition);
	for (auto& StartingItem : ((AFortGameModeAthena*)GameMode)->StartingItems)
	{
		if (StartingItem.Count && !StartingItem.Item->IsA<UFortSmartBuildingItemDefinition>())
		{
			Inventory::GiveItem(PlayerController, StartingItem.Item, StartingItem.Count);
		}
	}


	if (Num == 0) 
	{
		auto PlayerState = (AFortPlayerStateAthena*)PlayerController->PlayerState;

		for (auto& AbilitySet : AbilitySets)
			Abilities::GiveAbilitySet(PlayerState->AbilitySystemComponent, AbilitySet);

		auto SprintCompClass = Utils::FindObject<UClass>("/TacticalSprint/Gameplay/TacticalSprintControllerComponent.TacticalSprintControllerComponent_C");
		auto EnergyCompClass = Utils::FindObject<UClass>("/TacticalSprint/Gameplay/TacticalSprintEnergyComponent.TacticalSprintEnergyComponent_C");

		UFortPlayerControllerComponent_TacticalSprint* SprintComp = (UFortPlayerControllerComponent_TacticalSprint*)PlayerController->AddComponentByClass(SprintCompClass, false, FTransform(), false);
		UFortPlayerControllerComponent_TacticalSprint* SprintComp2 = (UFortPlayerControllerComponent_TacticalSprint*)Pawn->AddComponentByClass(SprintCompClass, false, FTransform(), false);
		UFortComponent_Energy* EnergyComp = (UFortComponent_Energy*)Pawn->AddComponentByClass(EnergyCompClass, false, FTransform(), false);

		SprintComp->CurrentBoundPlayerPawn = (AFortPlayerPawn*)Pawn;
		SprintComp->SetIsSprinting(true);

		Log(L"%p", SprintComp);
		Log(L"%p", SprintComp->CurrentBoundPlayerPawn);
		Log(L"%d", bool(SprintComp->bTacticalSprintEnabled));
		Log(L"%s", SprintComp->TacticalSprintAbilityGameplayTag.TagName.ToString().c_str());
		Log(L"%s", SprintComp->DisableTacticalSprintAbilityGameplayTag.TagName.ToString().c_str());
		Log(L"%d", bool(SprintComp->bIsSprinting));

		SprintComp2->CurrentBoundPlayerPawn = (AFortPlayerPawn*)Pawn;
		SprintComp2->SetIsSprinting(true);

		Log(L"%p", SprintComp2);
		Log(L"%p", SprintComp2->CurrentBoundPlayerPawn);
		Log(L"%d", bool(SprintComp2->bTacticalSprintEnabled));
		Log(L"%s", SprintComp2->TacticalSprintAbilityGameplayTag.TagName.ToString().c_str());
		Log(L"%s", SprintComp2->DisableTacticalSprintAbilityGameplayTag.TagName.ToString().c_str());
		Log(L"%d", bool(SprintComp2->bIsSprinting));

		Log(L"%p", EnergyComp);
		Log(L"%f", EnergyComp->CurrentEnergy);

		((AFortPlayerStateAthena*)PlayerController->PlayerState)->HeroType = PlayerController->CosmeticLoadoutPC.Character->HeroDefinition;
		((void (*)(APlayerState*, APawn*)) Sarah::Offsets::ApplyCharacterCustomization)(PlayerController->PlayerState, Pawn);

		auto AthenaController = (AFortPlayerControllerAthena*)PlayerController;
		PlayerState->SeasonLevelUIDisplay = AthenaController->XPComponent->CurrentLevel;
		PlayerState->OnRep_SeasonLevelUIDisplay();
		AthenaController->XPComponent->bRegisteredWithQuestManager = true;
		AthenaController->XPComponent->OnRep_bRegisteredWithQuestManager();

		AthenaController->GetQuestManager(ESubGame::Athena)->InitializeQuestAbilities(AthenaController->Pawn);
	}

	return *Ret = Pawn;
}

EFortTeam GameMode::PickTeam(AFortGameModeAthena* GameMode, uint8_t PreferredTeam, AFortPlayerControllerAthena* Controller) {
	uint8_t ret = CurrentTeam;

	if (++PlayersOnCurTeam >= ((AFortGameStateAthena*)GameMode->GameState)->CurrentPlaylistInfo.BasePlaylist->MaxSquadSize) {
		CurrentTeam++;
		PlayersOnCurTeam = 0;
	}

	return EFortTeam(ret);
}

void GameMode::HandleStartingNewPlayer(UObject* Context, FFrame& Stack) {
	AFortPlayerControllerAthena* NewPlayer;
	Stack.StepCompiledIn(&NewPlayer);
	Stack.IncrementCode();
	auto GameMode = (AFortGameModeAthena*)Context;
	auto GameState = (AFortGameStateAthena*)GameMode->GameState;
	AFortPlayerStateAthena* PlayerState = (AFortPlayerStateAthena*)NewPlayer->PlayerState;

	PlayerState->SquadId = PlayerState->TeamIndex - 3;
	PlayerState->OnRep_SquadId();

	FGameMemberInfo Member;
	Member.MostRecentArrayReplicationKey = -1;
	Member.ReplicationID = -1;
	Member.ReplicationKey = -1;
	Member.TeamIndex = PlayerState->TeamIndex;
	Member.SquadId = PlayerState->SquadId;
	Member.MemberUniqueId = PlayerState->UniqueId;

	GameState->GameMemberInfoArray.Members.Add(Member);
	GameState->GameMemberInfoArray.MarkItemDirty(Member);


	if (!NewPlayer->MatchReport)
	{
		NewPlayer->MatchReport = reinterpret_cast<UAthenaPlayerMatchReport*>(UGameplayStatics::SpawnObject(UAthenaPlayerMatchReport::StaticClass(), NewPlayer));
	}

	return callOG(GameMode, "/Script/Engine.GameModeBase", HandleStartingNewPlayer, NewPlayer);
}

void GameMode::OnAircraftExitedDropZone(UObject* Context, FFrame& Stack)
{
	AFortAthenaAircraft* Aircraft;
	Stack.StepCompiledIn(&Aircraft);
	Stack.IncrementCode();
	auto GameMode = (AFortGameModeAthena*)Context;
	for (auto& Player : GameMode->AlivePlayers)
	{
		if (Player->IsInAircraft())
		{
			Player->GetAircraftComponent()->ServerAttemptAircraftJump({});
		}
	}

	callOG(GameMode, "/Script/FortniteGame.FortGameModeAthena", OnAircraftExitedDropZone, Aircraft);
}

UClass** GetGameSessionClass(AFortGameMode*, UClass** OutClass) {
	*OutClass = AFortGameSessionDedicatedAthena::StaticClass();
	return OutClass;
}

void GameMode::Hook()
{
	Utils::ExecHook("/Script/Engine.GameMode.ReadyToStartMatch", ReadyToStartMatch, ReadyToStartMatchOG);
	Utils::ExecHook("/Script/Engine.GameModeBase.SpawnDefaultPawnFor", SpawnDefaultPawnFor);
	Utils::Hook(Sarah::Offsets::PickTeam, PickTeam, PickTeamOG);
	Utils::ExecHook("/Script/Engine.GameModeBase.HandleStartingNewPlayer", HandleStartingNewPlayer, HandleStartingNewPlayerOG);
	Utils::ExecHook("/Script/FortniteGame.FortGameModeAthena.OnAircraftExitedDropZone", OnAircraftExitedDropZone, OnAircraftExitedDropZoneOG);
	//Utils::Hook(Sarah::Offsets::ImageBase + 0x19A2D44, GetGameSessionClass);
}
