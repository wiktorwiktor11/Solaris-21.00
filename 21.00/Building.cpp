#include "pch.h"
#include "Building.h"
#include "Inventory.h"

bool Building::CanBePlacedByPlayer(UClass* BuildClass) {
	return ((AFortGameStateAthena*)UWorld::GetWorld()->GameState)->AllPlayerBuildableClasses.Search([BuildClass](UClass* Class) { return Class == BuildClass; });
}
void Building::ServerCreateBuildingActor(UObject* Context, FFrame& Stack)
{
	FCreateBuildingActorData CreateBuildingData;
	Stack.StepCompiledIn(&CreateBuildingData);
	Stack.IncrementCode();
	auto PlayerController = (AFortPlayerController*)Context;
	if (!PlayerController)
		return callOG(PlayerController, "/Script/FortniteGame.FortPlayerController", ServerCreateBuildingActor, CreateBuildingData);
	auto BuildingClassPtr = ((AFortGameStateAthena*)UWorld::GetWorld()->GameState)->AllPlayerBuildableClassesIndexLookup.SearchForKey([&](UClass* Class, int32 Handle) {
		return Handle == CreateBuildingData.BuildingClassHandle;
		});
	if (!BuildingClassPtr)
		return callOG(PlayerController, "/Script/FortniteGame.FortPlayerController", ServerCreateBuildingActor, CreateBuildingData);
	auto BuildingClass = *BuildingClassPtr;

	TArray<ABuildingSMActor*> RemoveBuildings;
	char _Unknown;
	static auto CantBuild = (__int64 (*)(UWorld*, UObject*, FVector, FRotator, bool, TArray<ABuildingSMActor*> *, char*))(Sarah::Offsets::ImageBase + 0x6ebb83c);
	if (CantBuild(UWorld::GetWorld(), BuildingClass, CreateBuildingData.BuildLoc, CreateBuildingData.BuildRot, CreateBuildingData.bMirrored, &RemoveBuildings, &_Unknown))
		return callOG(PlayerController, "/Script/FortniteGame.FortPlayerController", ServerCreateBuildingActor, CreateBuildingData);
	auto Resource = UFortKismetLibrary::K2_GetResourceItemDefinition(((ABuildingSMActor*)BuildingClass->DefaultObject)->ResourceType);
	auto ItemEntry = PlayerController->WorldInventory->Inventory.ReplicatedEntries.Search([&](FFortItemEntry& entry)
		{ return entry.ItemDefinition == Resource; });
	if (!ItemEntry || ItemEntry->Count < 10)
		return callOG(PlayerController, "/Script/FortniteGame.FortPlayerController", ServerCreateBuildingActor, CreateBuildingData);

	// ItemEntry->Count -= 10;
	// if (ItemEntry->Count <= 0)
	//	 Inventory::Remove(PlayerController, ItemEntry->ItemGuid);
	// Inventory::ReplaceEntry((AFortPlayerControllerAthena*)PlayerController, *ItemEntry);

	for (auto& RemoveBuilding : RemoveBuildings)
		RemoveBuilding->K2_DestroyActor();
	RemoveBuildings.Free();

	ABuildingSMActor* Building = Utils::SpawnActor<ABuildingSMActor>(BuildingClass, CreateBuildingData.BuildLoc, CreateBuildingData.BuildRot, PlayerController);
	Building->bPlayerPlaced = true;
	Building->InitializeKismetSpawnedBuildingActor(Building, PlayerController, true, nullptr);
	Building->TeamIndex = ((AFortPlayerStateAthena*)PlayerController->PlayerState)->TeamIndex;
	Building->Team = EFortTeam(Building->TeamIndex);
	//PlayerController->bBuildFree = true;
	if (auto ControllerAthena = PlayerController->Cast<AFortPlayerControllerAthena>()) ControllerAthena->BuildingsCreated++;
	Utils::FinishSpawnActor<ABuildingSMActor>(Building, CreateBuildingData.BuildLoc, CreateBuildingData.BuildRot);

	//return OG(PlayerController, CreateBuildingData);
	return callOG(PlayerController, "/Script/FortniteGame.FortPlayerController", ServerCreateBuildingActor, CreateBuildingData);
}

void Building::ServerBeginEditingBuildingActor(UObject* Context, FFrame& Stack)
{
	ABuildingSMActor* Building;
	Stack.StepCompiledIn(&Building);
	Stack.IncrementCode();
	auto PlayerController = (AFortPlayerController*)Context;
	if (!PlayerController || !PlayerController->MyFortPawn || !Building || Building->TeamIndex != static_cast<AFortPlayerStateAthena*>(PlayerController->PlayerState)->TeamIndex)
		return;

	AFortPlayerStateAthena* PlayerState = (AFortPlayerStateAthena*)PlayerController->PlayerState;
	if (!PlayerState)
		return;

	auto ItemEntry = PlayerController->WorldInventory->Inventory.ReplicatedEntries.Search([](FFortItemEntry& entry)
		{ return entry.ItemDefinition->IsA<UFortEditToolItemDefinition>(); });
	if (!ItemEntry)
		return;

	PlayerController->ServerExecuteInventoryItem(ItemEntry->ItemGuid);


	auto EditTool = PlayerController->MyFortPawn->CurrentWeapon->Cast<AFortWeap_EditingTool>();
	EditTool->EditActor = Building;
	EditTool->OnRep_EditActor();

}

void Building::ServerEditBuildingActor(UObject* Context, FFrame& Stack)
{
	ABuildingSMActor* Building;
	TSubclassOf<ABuildingSMActor> NewClass;
	uint8 RotationIterations;
	bool bMirrored;
	Stack.StepCompiledIn(&Building);
	Stack.StepCompiledIn(&NewClass);
	Stack.StepCompiledIn(&RotationIterations);
	Stack.StepCompiledIn(&bMirrored);
	Stack.IncrementCode();
	auto PlayerController = (AFortPlayerController*)Context;

	if (!PlayerController || !Building || !NewClass || !Building->IsA<ABuildingSMActor>() || !CanBePlacedByPlayer(NewClass) || Building->TeamIndex != static_cast<AFortPlayerStateAthena*>(PlayerController->PlayerState)->TeamIndex)
		return;

	Building->SetNetDormancy(ENetDormancy::DORM_DormantAll);
	Building->EditingPlayer = nullptr;

	static auto ReplaceBuildingActor = (ABuildingSMActor * (*)(ABuildingSMActor*, unsigned int, UObject*, unsigned int, int, bool, AFortPlayerController*))(Sarah::Offsets::ImageBase + 0x6c890f8);

	ABuildingSMActor* NewBuild = ReplaceBuildingActor(Building, 1, NewClass, Building->CurrentBuildingLevel, RotationIterations, bMirrored, PlayerController);

	if (NewBuild)
		NewBuild->bPlayerPlaced = true;
}

void Building::ServerEndEditingBuildingActor(UObject* Context, FFrame& Stack)
{
	ABuildingSMActor* Building;
	Stack.StepCompiledIn(&Building);
	Stack.IncrementCode();
	auto PlayerController = (AFortPlayerController*)Context;
	if (!PlayerController || !PlayerController->MyFortPawn || !Building || Building->EditingPlayer != (AFortPlayerStateZone*)PlayerController->PlayerState || Building->TeamIndex != static_cast<AFortPlayerStateAthena*>(PlayerController->PlayerState)->TeamIndex)
		return;

	Building->SetNetDormancy(ENetDormancy::DORM_DormantAll);
	Building->EditingPlayer = nullptr;

	AFortWeap_EditingTool* EditTool = PlayerController->MyFortPawn->CurrentWeapon->Cast<AFortWeap_EditingTool>();

	if (!EditTool)
		return;

	EditTool->EditActor = nullptr;
	EditTool->OnRep_EditActor();

	if (auto ControllerAthena = PlayerController->Cast<AFortPlayerControllerAthena>()) ControllerAthena->BuildingsEdited++;
}

void Building::ServerRepairBuildingActor(UObject* Context, FFrame& Stack)
{
	ABuildingSMActor* Building;
	Stack.StepCompiledIn(&Building);
	Stack.IncrementCode();
	auto PlayerController = (AFortPlayerController*)Context;
	if (!PlayerController)
		return;

	auto Price = (int32)std::floor((10.f * (1.f - Building->GetHealthPercent())) * 0.75f);
	auto res = UFortKismetLibrary::K2_GetResourceItemDefinition(Building->ResourceType);
	auto itemEntry = PlayerController->WorldInventory->Inventory.ReplicatedEntries.Search([res](FFortItemEntry& entry)
		{ return entry.ItemDefinition == res; });
	itemEntry->Count -= Price;
	if (itemEntry->Count <= 0)
		Inventory::Remove(PlayerController, itemEntry->ItemGuid);
	else
		Inventory::ReplaceEntry(PlayerController, *itemEntry);

	Building->RepairBuilding(PlayerController, Price);

	if (auto ControllerAthena = PlayerController->Cast<AFortPlayerControllerAthena>()) ControllerAthena->BuildingsRepaired++;
}

void Building::OnDamageServer(ABuildingSMActor* Actor, float Damage, FGameplayTagContainer DamageTags, FVector Momentum, FHitResult HitInfo, AFortPlayerControllerAthena* InstigatedBy, AActor* DamageCauser, FGameplayEffectContextHandle EffectContext) {
	auto GameState = ((AFortGameStateAthena*)UWorld::GetWorld()->GameState);
	if (!InstigatedBy || Actor->bPlayerPlaced || Actor->GetHealth() == 1 || Actor->IsA(UObject::FindClassFast("B_Athena_VendingMachine_C")) || Actor->IsA(GameState->MapInfo->LlamaClass)) return OnDamageServerOG(Actor, Damage, DamageTags, Momentum, HitInfo, InstigatedBy, DamageCauser, EffectContext);
	if (!DamageCauser || !DamageCauser->IsA<AFortWeapon>() || !((AFortWeapon*)DamageCauser)->WeaponData->IsA<UFortWeaponMeleeItemDefinition>()) return OnDamageServerOG(Actor, Damage, DamageTags, Momentum, HitInfo, InstigatedBy, DamageCauser, EffectContext);

	static auto PickaxeTag = FName(L"Weapon.Melee.Impact.Pickaxe");
	auto entry = DamageTags.GameplayTags.Search([](FGameplayTag& entry) {
		return entry.TagName.ComparisonIndex == PickaxeTag.ComparisonIndex;
		});
	if (!entry) return OnDamageServerOG(Actor, Damage, DamageTags, Momentum, HitInfo, InstigatedBy, DamageCauser, EffectContext);

	auto Resource = UFortKismetLibrary::K2_GetResourceItemDefinition(Actor->ResourceType);
	if (!Resource) return OnDamageServerOG(Actor, Damage, DamageTags, Momentum, HitInfo, InstigatedBy, DamageCauser, EffectContext);


	auto MaxMat = (int32) Utils::EvaluateScalableFloat(Resource->MaxStackSize);


	FCurveTableRowHandle& BuildingResourceAmountOverride = Actor->BuildingResourceAmountOverride;
	int ResCount = 0;

	if (Actor->BuildingResourceAmountOverride.RowName.ComparisonIndex > 0) {
		static UCurveTable* CurveTable = GameState->CurrentPlaylistInfo.BasePlaylist->ResourceRates;

		if (!CurveTable)
			CurveTable = Utils::FindObject<UCurveTable>("/Game/Athena/Balance/DataTables/AthenaResourceRates.AthenaResourceRates"); // why not js BuildingResourceAmountOverride.CurveTable???

		float Out;
		UDataTableFunctionLibrary::EvaluateCurveTableRow(CurveTable, Actor->BuildingResourceAmountOverride.RowName, 0.f, nullptr, &Out, FString());

		float RC = Out / (Actor->GetMaxHealth() / Damage);

		ResCount = (int)round(RC);
	}

	if (ResCount > 0) {
		auto itemEntry = InstigatedBy->WorldInventory->Inventory.ReplicatedEntries.Search([&](FFortItemEntry& entry) {
			return entry.ItemDefinition == Resource;
			});

		if (itemEntry) {
			itemEntry->Count += ResCount;
			if (itemEntry->Count > MaxMat)
			{
				Inventory::SpawnPickup(InstigatedBy->Pawn->K2_GetActorLocation(), itemEntry->ItemDefinition, itemEntry->Count - MaxMat, 0, EFortPickupSourceTypeFlag::Tossed, EFortPickupSpawnSource::Unset, InstigatedBy->MyFortPawn);
				itemEntry->Count = MaxMat;
			}
			Inventory::ReplaceEntry(InstigatedBy, *itemEntry);
		}
		else {
			if (ResCount > MaxMat) {
				Inventory::SpawnPickup(InstigatedBy->Pawn->K2_GetActorLocation(), Resource, ResCount - MaxMat, 0, EFortPickupSourceTypeFlag::Tossed, EFortPickupSpawnSource::Unset, InstigatedBy->MyFortPawn);
				ResCount = MaxMat;
			}
			Inventory::GiveItem(InstigatedBy, Resource, ResCount, 0, 0, false);
		}
	}
	InstigatedBy->ClientReportDamagedResourceBuilding(Actor, ResCount == 0 ? EFortResourceType::None : Actor->ResourceType, ResCount, false, Damage == 100.f);
	return OnDamageServerOG(Actor, Damage, DamageTags, Momentum, HitInfo, InstigatedBy, DamageCauser, EffectContext);
}


void Building::ServerSpawnDeco(UObject* Context, FFrame& Stack) {
	FVector Location;
	FRotator Rotation;
	ABuildingSMActor* AttachedActor;
	EBuildingAttachmentType InBuildingAttachmentType;
	Stack.StepCompiledIn(&Location);
	Stack.StepCompiledIn(&Rotation);
	Stack.StepCompiledIn(&AttachedActor);
	Stack.StepCompiledIn(&InBuildingAttachmentType);
	Stack.IncrementCode();
	auto DecoTool = (AFortDecoTool*)Context;
	auto ContextTrap = DecoTool->Cast<AFortDecoTool_ContextTrap>();
	auto ItemDefinition = (UFortDecoItemDefinition*)DecoTool->ItemDefinition;
	if (auto ContextTrapTool = DecoTool->Cast<AFortDecoTool_ContextTrap>()) {
		switch ((int)InBuildingAttachmentType) {
		case 0:
		case 6:
			ItemDefinition = ContextTrapTool->ContextTrapItemDefinition->FloorTrap;
			break;
		case 7:
		case 2:
			ItemDefinition = ContextTrapTool->ContextTrapItemDefinition->CeilingTrap;
			break;
		case 1:
			ItemDefinition = ContextTrapTool->ContextTrapItemDefinition->WallTrap;
			break;
		case 8:
			ItemDefinition = ContextTrapTool->ContextTrapItemDefinition->StairTrap;
			break;
		}
	}
	auto NewTrap = Utils::SpawnActor<ABuildingActor>(ItemDefinition->BlueprintClass.Get(), Location, Rotation, AttachedActor);
	AttachedActor->AttachBuildingActorToMe(NewTrap, true);
	AttachedActor->bHiddenDueToTrapPlacement = ItemDefinition->bReplacesBuildingWhenPlaced;
	if (ItemDefinition->bReplacesBuildingWhenPlaced) AttachedActor->bActorEnableCollision = false;
	AttachedActor->ForceNetUpdate();
	auto Pawn = (APawn*)DecoTool->Owner;
	if (!Pawn) return;
	auto PlayerController = (AFortPlayerControllerAthena*)Pawn->Controller;
	if (!PlayerController) return;
	
	auto Resource = UFortKismetLibrary::GetDefaultObj()->K2_GetResourceItemDefinition(AttachedActor->ResourceType);
	auto itemEntry = PlayerController->WorldInventory->Inventory.ReplicatedEntries.Search([&](FFortItemEntry& entry) {
		return entry.ItemDefinition == DecoTool->ItemDefinition;
	});
	if (!itemEntry) return;

	itemEntry->Count--;
	if (itemEntry->Count <= 0) Inventory::Remove(PlayerController, itemEntry->ItemGuid);
	else Inventory::ReplaceEntry(PlayerController, *itemEntry);

	if (NewTrap->TeamIndex != ((AFortPlayerStateAthena*)PlayerController->PlayerState)->TeamIndex) {
		NewTrap->TeamIndex = ((AFortPlayerStateAthena*)PlayerController->PlayerState)->TeamIndex;
		NewTrap->Team = EFortTeam(NewTrap->TeamIndex);
	}
}

void Building::ServerCreateBuildingAndSpawnDeco(UObject* Context, FFrame& Stack) {
	auto Tool = (AFortDecoTool*)Context;
	auto Pawn = (APawn*)Tool->Owner;
	if (!Pawn) return;
	auto PlayerController = (AFortPlayerControllerAthena*)Pawn->Controller;
	if (!PlayerController) return;
	FVector_NetQuantize10 BuildingLocation;
	FRotator BuildingRotation;
	FVector_NetQuantize10 Location;
	FRotator Rotation;
	EBuildingAttachmentType InBuildingAttachmentType;
	bool bSpawnDecoOnExtraPiece;
	FVector BuildingExtraPieceLocation;
	Stack.StepCompiledIn(&BuildingLocation);
	Stack.StepCompiledIn(&BuildingRotation);
	Stack.StepCompiledIn(&Location);
	Stack.StepCompiledIn(&Rotation);
	Stack.StepCompiledIn(&InBuildingAttachmentType);
	Stack.StepCompiledIn(&bSpawnDecoOnExtraPiece);
	Stack.StepCompiledIn(&BuildingExtraPieceLocation);
	Stack.IncrementCode();

	auto Mat = PlayerController->BroadcastRemoteClientInfo->RemoteBuildingMaterial;
	UEAllocatedString MatName;
	UEAllocatedString MatNameShort;
	switch ((int)Mat) {
	case 0:
		MatName = "Wood";
		MatNameShort = "W";
		break;
	case 1:
		MatName = "Stone";
		MatNameShort = "S";
		break;
	case 2:
		MatName = "Metal";
		MatNameShort = "M";
		break;
	}
	UEAllocatedString BuildingType;
	switch ((int)InBuildingAttachmentType) {
	case 0:
	case 6:
	case 7:
	case 2:
		BuildingType = "Floor";
		break;
	case 1:
		BuildingType = "Solid";
		break;
	}
	auto Build = Utils::FindObject<UClass>("/Game/Building/ActorBlueprints/Player/" + MatName + "/L1/PBWA_" + MatNameShort + "1_" + BuildingType + ".PBWA_" + MatNameShort + "1_" + BuildingType + "_C");
	ABuildingSMActor* Building = nullptr;
	TArray<ABuildingSMActor*> RemoveBuildings;
	char _Unknown;
	static auto CantBuild = (__int64 (*)(UWorld*, UObject*, FVector, FRotator, bool, TArray<ABuildingSMActor*> *, char*))(Sarah::Offsets::ImageBase + 0x6ebb83c);
	if (CantBuild(UWorld::GetWorld(), Build, BuildingLocation, BuildingRotation, false, &RemoveBuildings, &_Unknown)) return;
	auto Resource = UFortKismetLibrary::GetDefaultObj()->K2_GetResourceItemDefinition(((ABuildingSMActor*)Build->DefaultObject)->ResourceType);
	auto itemEntry = PlayerController->WorldInventory->Inventory.ReplicatedEntries.Search([&](FFortItemEntry& entry) {
		return entry.ItemDefinition == Resource;
		});
	if (!itemEntry) return;

	itemEntry->Count -= 10;
	if (itemEntry->Count <= 0) Inventory::Remove(PlayerController, itemEntry->ItemGuid);
	Inventory::ReplaceEntry((AFortPlayerControllerAthena*)PlayerController, *itemEntry);

	for (auto& RemoveBuilding : RemoveBuildings) RemoveBuilding->K2_DestroyActor();
	RemoveBuildings.Free();

	Building = Utils::SpawnActor<ABuildingSMActor>(Build, BuildingLocation, BuildingRotation, PlayerController);
	Building->bPlayerPlaced = true;
	Building->InitializeKismetSpawnedBuildingActor(Building, PlayerController, true, nullptr);
	Building->TeamIndex = ((AFortPlayerStateAthena*)PlayerController->PlayerState)->TeamIndex;
	Building->Team = EFortTeam(Building->TeamIndex);
	//Utils::FinishSpawnActor<ABuildingSMActor>(Building, BuildingLocation, BuildingRotation);
	Tool->ServerSpawnDeco(Location, Rotation, Building, InBuildingAttachmentType);
}

void Building::Hook() {
	Utils::ExecHook("/Script/FortniteGame.FortPlayerController.ServerCreateBuildingActor", ServerCreateBuildingActor, ServerCreateBuildingActorOG);
	Utils::ExecHook("/Script/FortniteGame.FortPlayerController.ServerBeginEditingBuildingActor", ServerBeginEditingBuildingActor);
	Utils::ExecHook("/Script/FortniteGame.FortPlayerController.ServerEditBuildingActor", ServerEditBuildingActor);
	Utils::ExecHook("/Script/FortniteGame.FortPlayerController.ServerEndEditingBuildingActor", ServerEndEditingBuildingActor);
	Utils::ExecHook("/Script/FortniteGame.FortPlayerController.ServerRepairBuildingActor", ServerRepairBuildingActor);
	Utils::Hook(Sarah::Offsets::ImageBase + 0x747cfc4, OnDamageServer, OnDamageServerOG);
	Utils::ExecHook("/Script/FortniteGame.FortDecoTool.ServerSpawnDeco", ServerSpawnDeco, ServerSpawnDecoOG);
	Utils::ExecHook("/Script/FortniteGame.FortDecoTool.ServerCreateBuildingAndSpawnDeco", ServerCreateBuildingAndSpawnDeco);
	Utils::ExecHook("/Script/FortniteGame.FortDecoTool_ContextTrap.ServerSpawnDeco_Implementation", ServerSpawnDeco, ServerSpawnDecoOG);
	Utils::ExecHook("/Script/FortniteGame.FortDecoTool_ContextTrap.ServerCreateBuildingAndSpawnDeco", ServerCreateBuildingAndSpawnDeco);
}