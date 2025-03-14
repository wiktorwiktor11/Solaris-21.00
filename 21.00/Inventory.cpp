#include "pch.h"
#include "Utils.h"
#include "Inventory.h"
#include "Player.h"

FFortRangedWeaponStats* Inventory::GetStats(UFortWeaponItemDefinition* Def)
{
	if (!Def || !Def->WeaponStatHandle.DataTable)
		return nullptr;

	auto Val = Def->WeaponStatHandle.DataTable->Search([Def](FName& Key, uint8_t* Value)
		{ return Def->WeaponStatHandle.RowName == Key && Value; });

	return Val ? *(FFortRangedWeaponStats**)Val : nullptr;
}

int Inventory::GetLevel(const FDataTableCategoryHandle& CategoryHandle)
{
	auto GameMode = (AFortGameModeAthena*)UWorld::GetWorld()->AuthorityGameMode;
	auto GameState = (AFortGameStateAthena*)GameMode->GameState;

	if (!CategoryHandle.DataTable)
		return 0;

	if (!CategoryHandle.ColumnName)
		return 0;

	if (!CategoryHandle.RowContents.ComparisonIndex)
		return 0;

	TArray<FFortLootLevelData*> LootLevelData;

	for (auto& LootLevelDataPair : (TMap<FName, FFortLootLevelData*>)CategoryHandle.DataTable->RowMap)
	{
		if (LootLevelDataPair.Value()->category != CategoryHandle.RowContents)
			continue;

		LootLevelData.Add(LootLevelDataPair.Value());
	}

	if (LootLevelData.Num() > 0)
	{
		int ind = -1;
		int ll = 0;

		for (int i = 0; i < LootLevelData.Num(); i++)
		{
			if (LootLevelData[i]->LootLevel <= GameState->WorldLevel && LootLevelData[i]->LootLevel > ll)
			{
				ll = LootLevelData[i]->LootLevel;
				ind = i;
			}
		}

		if (ind != -1)
		{
			auto subbed = LootLevelData[ind]->MaxItemLevel - LootLevelData[ind]->MinItemLevel;

			if (subbed <= -1)
				subbed = 0;
			else
			{
				auto calc = (int)(((float)rand() / 32767) * (float)(subbed + 1));
				if (calc <= subbed)
					subbed = calc;
			}

			return subbed + LootLevelData[ind]->MinItemLevel;
		}
	}

	return 0;
}

FFortItemEntry* Inventory::MakeItemEntry(UFortItemDefinition* ItemDefinition, int32 Count, int32 Level) {
	FFortItemEntry* ItemEntry = new FFortItemEntry();

	ItemEntry->MostRecentArrayReplicationKey = -1;
	ItemEntry->ReplicationID = -1;
	ItemEntry->ReplicationKey = -1;

	ItemEntry->ItemDefinition = ItemDefinition;
	ItemEntry->Count = Count;
	ItemEntry->Durability = 1.f;
	ItemEntry->GameplayAbilitySpecHandle = FGameplayAbilitySpecHandle(-1);
	ItemEntry->ParentInventory.ObjectIndex = -1;
	ItemEntry->Level = Level;
	if (auto Weapon = ItemDefinition->Cast<UFortWeaponItemDefinition>())
	{
		auto Stats = GetStats(Weapon);
		ItemEntry->LoadedAmmo = Stats->ClipSize;
		if (Weapon->bUsesPhantomReserveAmmo)
			ItemEntry->PhantomReserveAmmo = Stats->InitialClips * Stats->ClipSize;
	}

	return ItemEntry;
}

void Inventory::TriggerInventoryUpdate(AFortPlayerController* PlayerController, FFortItemEntry* Entry)
{
	if (!PlayerController)
		return;
	AFortInventory* Inventory = PlayerController->WorldInventory;
	Inventory->bRequiresLocalUpdate = true;
	Inventory->HandleInventoryLocalUpdate();

	return Entry ? Inventory->Inventory.MarkItemDirty(*Entry) : Inventory->Inventory.MarkArrayDirty();
}

UFortWorldItem* Inventory::GiveItem(AFortPlayerController* PlayerController, UFortItemDefinition* Def, int Count, int LoadedAmmo, int Level, bool ShowPickupNoti, bool updateInventory, int PhantomReserveAmmo)
{
	if (!PlayerController || !Def || !Count)
		return nullptr;
	UFortWorldItem* Item = (UFortWorldItem*)Def->CreateTemporaryItemInstanceBP(Count, Level);
	Item->SetOwningControllerForTemporaryItem(PlayerController);
	Item->ItemEntry.LoadedAmmo = LoadedAmmo; 
	Item->ItemEntry.PhantomReserveAmmo = PhantomReserveAmmo;

	if (Def->IsA<UFortAmmoItemDefinition>() || Def->IsA<UFortResourceItemDefinition>())
	{
		FFortItemEntryStateValue Value{};
		Value.IntValue = ShowPickupNoti;
		Value.StateType = EFortItemEntryState::ShouldShowItemToast;
		Item->ItemEntry.StateValues.Add(Value);
	}

	PlayerController->WorldInventory->Inventory.ReplicatedEntries.Add(Item->ItemEntry);
	PlayerController->WorldInventory->Inventory.ItemInstances.Add(Item);

	if (updateInventory)
		TriggerInventoryUpdate(PlayerController, &Item->ItemEntry);
	return Item;
}

UFortWorldItem* Inventory::GiveItem(AFortPlayerController* PC, FFortItemEntry entry, int Count, bool ShowPickupNoti, bool updateInventory)
{
	if (Count == -1)
		Count = entry.Count;
	return GiveItem(PC, entry.ItemDefinition, Count, entry.LoadedAmmo, entry.Level, ShowPickupNoti, updateInventory, entry.PhantomReserveAmmo);
}


EFortQuickBars Inventory::GetQuickbar(UFortItemDefinition* ItemDefinition)
{
	if (!ItemDefinition) return EFortQuickBars::Max_None;
	return ItemDefinition->IsA<UFortWeaponMeleeItemDefinition>() || ItemDefinition->IsA<UFortResourceItemDefinition>() || ItemDefinition->IsA<UFortAmmoItemDefinition>() || ItemDefinition->IsA<UFortTrapItemDefinition>() || ItemDefinition->IsA<UFortBuildingItemDefinition>() || ItemDefinition->IsA<UFortEditToolItemDefinition>() || ((UFortWorldItemDefinition*)ItemDefinition)->bForceIntoOverflow ? EFortQuickBars::Secondary : EFortQuickBars::Primary;
}

AFortPickupAthena* Inventory::SpawnPickup(FVector Loc, FFortItemEntry& Entry, EFortPickupSourceTypeFlag SourceTypeFlag, EFortPickupSpawnSource SpawnSource, AFortPlayerPawn* Pawn, int OverrideCount, bool Toss, bool RandomRotation, bool bCombine)
{
	AFortPickupAthena* NewPickup = Utils::SpawnActor<AFortPickupAthena>(Loc, {});
	if (!NewPickup)
		return nullptr;
	NewPickup->bRandomRotation = RandomRotation;
	NewPickup->PrimaryPickupItemEntry.ItemDefinition = Entry.ItemDefinition;
	NewPickup->PrimaryPickupItemEntry.LoadedAmmo = Entry.LoadedAmmo;
	NewPickup->PrimaryPickupItemEntry.Count = OverrideCount != -1 ? OverrideCount : Entry.Count;
	NewPickup->PrimaryPickupItemEntry.PhantomReserveAmmo = Entry.PhantomReserveAmmo;
	NewPickup->OnRep_PrimaryPickupItemEntry();
	NewPickup->PawnWhoDroppedPickup = Pawn;


	NewPickup->TossPickup(Loc, Pawn, -1, Toss, true, SourceTypeFlag, SpawnSource);
	NewPickup->bTossedFromContainer = SpawnSource == EFortPickupSpawnSource::Chest || SpawnSource == EFortPickupSpawnSource::AmmoBox;
	if (NewPickup->bTossedFromContainer) NewPickup->OnRep_TossedFromContainer();

	return NewPickup;
}

AFortPickupAthena* Inventory::SpawnPickup(FVector Loc, UFortItemDefinition* ItemDefinition, int Count, int LoadedAmmo, EFortPickupSourceTypeFlag SourceTypeFlag, EFortPickupSpawnSource SpawnSource, AFortPlayerPawn* Pawn, bool Toss, bool bRandomRotation)
{
	return SpawnPickup(Loc, *MakeItemEntry(ItemDefinition, Count, 0), SourceTypeFlag, SpawnSource, Pawn, -1, Toss, true, bRandomRotation);
}

AFortPickupAthena* Inventory::SpawnPickup(ABuildingContainer* Container, FFortItemEntry Entry, AFortPlayerPawn* Pawn, int OverrideCount)
{
	if (!&Entry)
		return nullptr;
	auto ContainerLoc = Container->K2_GetActorLocation();
	auto Loc = ContainerLoc + (Container->GetActorForwardVector() * Container->LootSpawnLocation_Athena.X) + (Container->GetActorRightVector() * Container->LootSpawnLocation_Athena.Y) + (Container->GetActorUpVector() * Container->LootSpawnLocation_Athena.Z);
	AFortPickupAthena* NewPickup = Utils::SpawnActor<AFortPickupAthena>(Loc, {});
	if (!NewPickup)
		return nullptr;
	NewPickup->bRandomRotation = true;
	NewPickup->PrimaryPickupItemEntry.ItemDefinition = Entry.ItemDefinition;
	NewPickup->PrimaryPickupItemEntry.LoadedAmmo = Entry.LoadedAmmo;
	NewPickup->PrimaryPickupItemEntry.Count = OverrideCount != -1 ? OverrideCount : Entry.Count;
	NewPickup->OnRep_PrimaryPickupItemEntry();
	NewPickup->PawnWhoDroppedPickup = Pawn;
	//NewPickup->TossPickup(Loc, Pawn, -1, true, true, EFortPickupSourceTypeFlag::Container, EFortPickupSpawnSource::Chest);
	//auto bFloorLoot = Container->IsA<ATiered_Athena_FloorLoot_01_C>() || Container->IsA<ATiered_Athena_FloorLoot_Warmup_C>();
	UFortKismetLibrary::TossPickupFromContainer(UWorld::GetWorld(), Container, NewPickup, 1, 0, Container->LootTossConeHalfAngle_Athena, /*Container->LootTossDirection_Athena*/ UKismetMathLibrary::FindLookAtRotation(ContainerLoc, Loc), Container->LootTossSpeed_Athena, false);
	NewPickup->bTossedFromContainer = true;
	NewPickup->OnRep_TossedFromContainer();

	return NewPickup;
}

void Inventory::ReplaceEntry(AFortPlayerController* PlayerController, FFortItemEntry& Entry)
{
	if (!PlayerController)
		return;
	auto ent = PlayerController->WorldInventory->Inventory.ItemInstances.Search([&](UFortWorldItem* item)
		{ return item->ItemEntry.ItemGuid == Entry.ItemGuid; });
	if (ent)
		(*ent)->ItemEntry = Entry;

	TriggerInventoryUpdate(PlayerController, &Entry);
}

void Inventory::Remove(AFortPlayerController* PlayerController, FGuid Guid)
{
	if (!PlayerController)
		return;
	auto ItemEntryIdx = PlayerController->WorldInventory->Inventory.ReplicatedEntries.SearchIndex([&](FFortItemEntry& entry) { return entry.ItemGuid == Guid; });
	if (ItemEntryIdx != -1)
		PlayerController->WorldInventory->Inventory.ReplicatedEntries.Remove(ItemEntryIdx);
	auto ItemInstanceIdx = PlayerController->WorldInventory->Inventory.ItemInstances.SearchIndex([&](UFortWorldItem* entry) { return entry->ItemEntry.ItemGuid == Guid; });
	auto ItemInstance = PlayerController->WorldInventory->Inventory.ItemInstances.Search([&](UFortWorldItem* entry)
		{ return entry->ItemEntry.ItemGuid == Guid; });
	auto Instance = ItemInstance ? *ItemInstance : nullptr;
	if (ItemInstanceIdx != -1) PlayerController->WorldInventory->Inventory.ItemInstances.Remove(ItemInstanceIdx);

	TriggerInventoryUpdate(PlayerController, nullptr);
}

void Inventory::GiveItemToInventoryOwner(UObject* Object, FFrame& Stack) {
	TScriptInterface<class IFortInventoryOwnerInterface> InventoryOwner;
	UFortWorldItemDefinition* ItemDefinition;
	FGuid ItemVariantGuid;
	int32 NumberToGive;
	bool bNotifyPlayer;
	int32 ItemLevel;
	int32 PickupInstigatorHandle;
	bool bUseItemPickupAnalyticEvent;
	Stack.StepCompiledIn(&InventoryOwner);
	Stack.StepCompiledIn(&ItemDefinition);
	Stack.StepCompiledIn(&ItemVariantGuid);
	Stack.StepCompiledIn(&NumberToGive);
	Stack.StepCompiledIn(&bNotifyPlayer);
	Stack.StepCompiledIn(&ItemLevel);
	Stack.StepCompiledIn(&PickupInstigatorHandle);
	Stack.StepCompiledIn(&bUseItemPickupAnalyticEvent);
	Stack.IncrementCode();

	auto PlayerController = (AFortPlayerControllerAthena*)InventoryOwner.ObjectPointer;
	auto ItemEntry = Inventory::MakeItemEntry(ItemDefinition, NumberToGive, ItemLevel);
	Player::InternalPickup(PlayerController, *ItemEntry);
}

bool Inventory::ServerRemoveInventoryItem(AFortPlayerControllerAthena* PlayerController, FGuid ItemGuid, int Count, bool bForceRemoval, bool bForcePersistWhenEmpty) {
	auto ItemEntry = PlayerController->WorldInventory->Inventory.ReplicatedEntries.Search([&](FFortItemEntry& entry)
		{ return entry.ItemGuid == ItemGuid; });
	if (!ItemEntry) return false;

	ItemEntry->Count -= Count;
	if (ItemEntry->Count <= 0) {
		Inventory::Remove(PlayerController, ItemEntry->ItemGuid);
	}
	else
		Inventory::ReplaceEntry(PlayerController, *ItemEntry);
	return true;
}

bool Inventory::AddItemToInventoryOwner(UFortItemEntryComponent* Component, TScriptInterface<class IFortInventoryOwnerInterface> InventoryOwner, bool bUseItemPickupAnalyticEvent) {
	Player::InternalPickup((AFortPlayerControllerAthena*)InventoryOwner.ObjectPointer, Component->OwnedItemEntry);
	return true;
}

int32 Inventory::K2_RemoveItemFromPlayer(UObject* Context, FFrame& Stack, int32* Ret) {
	AFortPlayerControllerAthena* PlayerController;
	UFortWorldItemDefinition* ItemDefinition;
	FGuid ItemVariantGuid;
	int32 AmountToRemove;
	bool bForceRemoval;
	Stack.StepCompiledIn(&PlayerController);
	Stack.StepCompiledIn(&ItemDefinition);
	Stack.StepCompiledIn(&ItemVariantGuid);
	Stack.StepCompiledIn(&AmountToRemove);
	Stack.StepCompiledIn(&bForceRemoval);
	Stack.IncrementCode();
	if (!PlayerController) return *Ret = 0;

	auto itemEntry = PlayerController->WorldInventory->Inventory.ReplicatedEntries.Search([&](FFortItemEntry& entry)
		{ return entry.ItemDefinition == ItemDefinition; });
	if (!itemEntry) return *Ret = 0;
	auto RemoveCount = AmountToRemove;
	itemEntry->Count -= AmountToRemove;
	if (itemEntry->Count <= 0 || ItemDefinition->IsA<UFortGadgetItemDefinition>()) {
		RemoveCount += itemEntry->Count;
		Inventory::Remove(PlayerController, itemEntry->ItemGuid);
	}
	else
		Inventory::ReplaceEntry(PlayerController, *itemEntry);
	return *Ret = RemoveCount;
}

int32 Inventory::K2_RemoveItemFromPlayerByGuid(UObject* Context, FFrame& Stack, int32* Ret) {
	class AFortPlayerControllerAthena* PlayerController;
	struct FGuid ItemGuid;
	int32 AmountToRemove;
	bool bForceRemoval;
	Stack.StepCompiledIn(&PlayerController);
	Stack.StepCompiledIn(&ItemGuid);
	Stack.StepCompiledIn(&AmountToRemove);
	Stack.StepCompiledIn(&bForceRemoval);
	Stack.IncrementCode();

	auto ItemEntry = PlayerController->WorldInventory->Inventory.ReplicatedEntries.Search([&](FFortItemEntry& entry)
		{ return entry.ItemGuid == ItemGuid; });
	if (!ItemEntry) return 0;
	auto RemoveCount = AmountToRemove;
	ItemEntry->Count -= AmountToRemove;
	if (ItemEntry->Count <= 0 || ItemEntry->ItemDefinition->IsA<UFortGadgetItemDefinition>()) {
		RemoveCount += ItemEntry->Count;
		Inventory::Remove(PlayerController, ItemEntry->ItemGuid);
	}
	else
		Inventory::ReplaceEntry(PlayerController, *ItemEntry);
	return RemoveCount;
}

void Inventory::Hook() {
	Utils::ExecHook("/Script/FortniteGame.FortKismetLibrary.GiveItemToInventoryOwner", GiveItemToInventoryOwner);
	Utils::Hook<AFortPlayerControllerAthena>(uint32(0x22e), ServerRemoveInventoryItem);
	Utils::Hook(Sarah::Offsets::ImageBase + 0x6d267ec, AddItemToInventoryOwner);
	Utils::ExecHook("/Script/FortniteGame.FortKismetLibrary.K2_RemoveItemFromPlayer", K2_RemoveItemFromPlayer);
	Utils::ExecHook("/Script/FortniteGame.FortKismetLibrary.K2_RemoveItemFromPlayerByGuid", K2_RemoveItemFromPlayerByGuid);
}