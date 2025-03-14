#include "pch.h"
#include "Utils.h"
#include "Looting.h"
#include "Inventory.h"

void Looting::SetupLDSForPackage(TArray<FFortItemEntry>& LootDrops, SDK::FName Package, int i, FName TierGroup, int WorldLevel) {
	static UEAllocatedVector<FFortLootPackageData*> LPGroupsAll;

	if (LPGroupsAll.size() == 0) {
		auto AddToPackages = [&](UDataTable* Table, bool skipCheck = false) {
			//Table->AddToRoot();
			if (auto CompositeTable = Table->Cast<UCompositeDataTable>())
				for (auto& ParentTable : CompositeTable->ParentTables)
					for (auto& [Key, Val] : (TMap<FName, FFortLootPackageData*>) ParentTable->RowMap) {
						LPGroupsAll.push_back(Val);
					}

			for (auto& [Key, Val] : (TMap<FName, FFortLootPackageData*>) Table->RowMap) {
				LPGroupsAll.push_back(Val);
			}
			};
		auto Playlist = ((AFortGameStateAthena*)UWorld::GetWorld()->GameState)->CurrentPlaylistInfo.BasePlaylist;
		auto LootPackages = Playlist->LootPackages.Get();
		if (!LootPackages) LootPackages = Utils::FindObject<UDataTable>("/Game/Items/Datatables/AthenaLootPackages_Client.AthenaLootPackages_Client");
		if (!LootPackages) return;
		AddToPackages(LootPackages, true);

		for (int i = 0; i < UObject::GObjects->Num(); i++) {
			auto Object = UObject::GObjects->GetByIndex(i);

			if (!Object || !Object->Class || Object->IsDefaultObject())
				continue;
			if (auto GameFeatureData = Object->Cast<UFortGameFeatureData>()) {
				auto LootTableData = GameFeatureData->DefaultLootTableData;

				auto LootPackageData = LootTableData.LootPackageData.Get();
				if (!LootPackageData)
					continue;
				AddToPackages(LootPackageData);

				for (auto& Tag : Playlist->GameplayTagContainer.GameplayTags)
					for (auto& Override : GameFeatureData->PlaylistOverrideLootTableData)
						if (Tag.TagName == Override.First.TagName)
							AddToPackages(Override.Second.LootPackageData.Get());
			}
		}
	}

	UEAllocatedVector<FFortLootPackageData*> LPGroups;
	for (auto const& Val : LPGroupsAll)
	{
		if (!Val)
			continue;

		if (Val->LootPackageID != Package)
			continue;
		if (i != -1 && Val->LootPackageCategory != i)
			continue;
		if (WorldLevel >= 0) {
			if (Val->MaxWorldLevel >= 0 && WorldLevel > Val->MaxWorldLevel)
				continue;
			if (Val->MinWorldLevel >= 0 && WorldLevel < Val->MinWorldLevel)
				continue;
		}
		LPGroups.push_back(Val);
	}
	if (LPGroups.size() == 0) return;


	auto LootPackage = PickWeighted(LPGroups, [](float Total) { return ((float)rand() / 32767.f) * Total; });
	if (!LootPackage)
		return;
	if (LootPackage->LootPackageCall.Num() > 1)
	{
		for (int i = 0; i < LootPackage->Count; i++)
			SetupLDSForPackage(LootDrops, FName(LootPackage->LootPackageCall), 0, TierGroup);

		return;
	}

	auto ItemDefinition = LootPackage->ItemDefinition->Cast<UFortWorldItemDefinition>();
	if (!ItemDefinition) {
		return;
	}
	bool found = false;
	for (auto& LootDrop : LootDrops) {
		if (LootDrop.ItemDefinition == ItemDefinition) {
			LootDrop.Count += LootPackage->Count;
			if (LootDrop.Count > (int32)Utils::EvaluateScalableFloat(ItemDefinition->MaxStackSize)) {
				auto OGCount = LootDrop.Count;
				LootDrop.Count = (int32)Utils::EvaluateScalableFloat(ItemDefinition->MaxStackSize);

				if (Inventory::GetQuickbar(LootDrop.ItemDefinition) == EFortQuickBars::Secondary) LootDrops.Add(*Inventory::MakeItemEntry(ItemDefinition, OGCount - (int32)Utils::EvaluateScalableFloat(ItemDefinition->MaxStackSize), std::clamp(Inventory::GetLevel(ItemDefinition->LootLevelData), ItemDefinition->MinLevel, ItemDefinition->MaxLevel)));
			}
			if (Inventory::GetQuickbar(LootDrop.ItemDefinition) == EFortQuickBars::Secondary) found = true;
		}
	}

	if (!found && LootPackage->Count > 0) {
		static auto FlopperDefault = FName(L"Loot_AthenaFlopper_Default");
		static auto FlopperHigh = FName(L"Loot_AthenaFlopper_High");
		static auto FlopperSwampDefault = FName(L"Loot_AthenaFlopper_Swamp_Default");
		static auto FlopperSwampHigh = FName(L"Loot_AthenaFlopper_Swamp_High");
		if (ItemDefinition->IsA<UFortWeaponRangedItemDefinition>() && !ItemDefinition->IsStackable() && ItemDefinition->GetAmmoWorldItemDefinition_BP() && TierGroup != FlopperDefault && TierGroup != FlopperHigh && TierGroup != FlopperSwampDefault && TierGroup != FlopperSwampHigh)
		{
			FFortLootPackageData* Group = nullptr;
			auto AmmoDefinition = ItemDefinition->GetAmmoWorldItemDefinition_BP();
			static auto AmmoSmall = FName(L"WorldList.AthenaAmmoSmall");
			for (auto const& Val : LPGroupsAll)
			{
				if (Val->LootPackageID == AmmoSmall && Val->ItemDefinition == AmmoDefinition)
				{
					Group = Val;
					break;
				}
			}
			if (Group)
			{
				LootDrops.Add(*Inventory::MakeItemEntry(AmmoDefinition, Group->Count, 0));
			}
		}
		LootDrops.Add(*Inventory::MakeItemEntry(ItemDefinition, LootPackage->Count, std::clamp(Inventory::GetLevel(ItemDefinition->LootLevelData), ItemDefinition->MinLevel, ItemDefinition->MaxLevel)));
	}
}

TArray<FFortItemEntry> Looting::ChooseLootForContainer(FName TierGroup, int LootTier, int WorldLevel) {
	static UEAllocatedVector<FFortLootTierData*> TierDataAllGroups;
	if (TierDataAllGroups.size() == 0) {
		auto AddToTierData = [&](UDataTable* Table, bool skipCheck = false) {
			//Table->AddToRoot();

			if (auto CompositeTable = Table->Cast<UCompositeDataTable>())
				for (auto& ParentTable : CompositeTable->ParentTables)
					for (auto& [Key, Val] : (TMap<FName, FFortLootTierData*>) ParentTable->RowMap) {
						TierDataAllGroups.push_back(Val);
					}

			for (auto& [Key, Val] : (TMap<FName, FFortLootTierData*>) Table->RowMap) {
				TierDataAllGroups.push_back(Val);
			}
			};
		auto Playlist = ((AFortGameStateAthena*)UWorld::GetWorld()->GameState)->CurrentPlaylistInfo.BasePlaylist;
		auto LootTierData = Playlist->LootTierData.Get();
		if (!LootTierData) LootTierData = Utils::FindObject<UDataTable>("/Game/Items/Datatables/AthenaLootTierData_Client.AthenaLootTierData_Client");
		if (!LootTierData) return {};
		AddToTierData(LootTierData, true);

		for (int i = 0; i < UObject::GObjects->Num(); i++) {
			auto Object = UObject::GObjects->GetByIndex(i);

			if (!Object || !Object->Class || Object->IsDefaultObject())
				continue;
			if (auto GameFeatureData = Object->Cast<UFortGameFeatureData>()) {
				auto LootTableData = GameFeatureData->DefaultLootTableData;
				auto LTDFeatureData = LootTableData.LootTierData.Get();
				if (!LTDFeatureData)
					continue;
				AddToTierData(LTDFeatureData);

				for (auto& Tag : Playlist->GameplayTagContainer.GameplayTags)
					for (auto& Override : GameFeatureData->PlaylistOverrideLootTableData)
						if (Tag.TagName == Override.First.TagName)
							AddToTierData(Override.Second.LootTierData.Get());
			}
		}
	}


	UEAllocatedVector<FFortLootTierData*> TierDataGroups;
	for (auto const& Val : TierDataAllGroups) {
		if (Val->TierGroup == TierGroup && (LootTier == -1 ? true : LootTier == Val->LootTier)) TierDataGroups.push_back(Val);
	}
	auto LootTierData = PickWeighted(TierDataGroups, [](float Total) { return ((float)rand() / 32767.f) * Total; });
	if (!LootTierData) return {};
	float DropCount = 0;
	if (LootTierData->NumLootPackageDrops > 0) {
		DropCount = LootTierData->NumLootPackageDrops < 1 ? 1 : (float)((int)((LootTierData->NumLootPackageDrops * 2) - .5f) >> 1);
		if (LootTierData->NumLootPackageDrops > 1) {
			float idk = LootTierData->NumLootPackageDrops - DropCount;
			if (idk > 0.0000099999997f) DropCount += idk >= ((float)rand() / 32767);
		}
	}

	float AmountOfLootDrops = 0;
	float MinLootDrops = 0;

	for (auto& Min : LootTierData->LootPackageCategoryMinArray) AmountOfLootDrops += Min;

	int SumWeights = 0;

	for (int i = 0; i < LootTierData->LootPackageCategoryWeightArray.Num(); ++i)
	{
		if (LootTierData->LootPackageCategoryWeightArray[i] > 0 && LootTierData->LootPackageCategoryMaxArray[i] != 0) SumWeights += LootTierData->LootPackageCategoryWeightArray[i];
	}

	while (SumWeights > 0)
	{
		AmountOfLootDrops++;

		if (AmountOfLootDrops >= LootTierData->NumLootPackageDrops) {
			AmountOfLootDrops = AmountOfLootDrops;
			break;
		}

		SumWeights--;
	}

	if (!AmountOfLootDrops) AmountOfLootDrops = AmountOfLootDrops;
	TArray<FFortItemEntry> LootDrops;

	for (int i = 0; i < AmountOfLootDrops && i < LootTierData->LootPackageCategoryMinArray.Num(); i++)
	{
		for (int j = 0; j < LootTierData->LootPackageCategoryMinArray[i] && LootTierData->LootPackageCategoryMinArray[i] >= 1; j++)
		{
			SetupLDSForPackage(LootDrops, LootTierData->LootPackage, i, TierGroup, WorldLevel);
		}
	}

	return LootDrops;
}


bool Looting::SpawnLootHook(ABuildingContainer* Container)
{
	auto& RealTierGroup = Container->SearchLootTierGroup;
	for (auto& Pair : ((AFortGameModeAthena*)UWorld::GetWorld()->AuthorityGameMode)->RedirectAthenaLootTierGroups)
	{
		if (Pair.Key() == RealTierGroup) {
			RealTierGroup = Pair.Value();
			break;
		}
	}

	for (auto& LootDrop : ChooseLootForContainer(RealTierGroup)) Inventory::SpawnPickup(Container, LootDrop);

	Container->bAlreadySearched = true;
	Container->OnRep_bAlreadySearched();
	Container->SearchBounceData.SearchAnimationCount++;
	Container->BounceContainer();
	return true;
}

void Looting::SpawnLoot(FName& TierGroup, FVector Loc) {
	auto& RealTierGroup = TierGroup;
	for (auto& Pair : ((AFortGameModeAthena*)UWorld::GetWorld()->AuthorityGameMode)->RedirectAthenaLootTierGroups)
	{
		if (Pair.Key() == TierGroup) {
			RealTierGroup = Pair.Value();
			break;
		}
	}

	for (auto& LootDrop : ChooseLootForContainer(RealTierGroup)) Inventory::SpawnPickup(Loc, LootDrop);
}

void Looting::SpawnFloorLootForContainer(UBlueprintGeneratedClass* ContainerType) {
	auto Containers = Utils::GetAll<ABuildingContainer>(ContainerType);

	for (auto& BuildingContainer : Containers) {
		BuildingContainer->K2_DestroyActor();
	}

	Containers.Free();
}

bool Looting::ServerOnAttemptInteract(ABuildingContainer* BuildingContainer, AFortPlayerPawn*) {

	if (!BuildingContainer) return false;

	if (BuildingContainer->bAlreadySearched)
		return true;

	SpawnLoot(BuildingContainer->SearchLootTierGroup, BuildingContainer->K2_GetActorLocation() + BuildingContainer->GetActorRightVector() * 70.f + FVector{ 0, 0, 50 });

	BuildingContainer->bAlreadySearched = true;
	BuildingContainer->OnRep_bAlreadySearched();
	BuildingContainer->SearchBounceData.SearchAnimationCount++;
	BuildingContainer->BounceContainer();

	return true;
}

bool Looting::PickLootDrops(UObject* Object, FFrame& Stack, bool* Ret) {
	UObject* WorldContextObject;
	FName TierGroupName;
	int32 WorldLevel;
	int32 ForcedLootTier;

	Stack.StepCompiledIn(&WorldContextObject);
	auto& OutLootToDrop = Stack.StepCompiledInRef<TArray<FFortItemEntry>>();
	Stack.StepCompiledIn(&TierGroupName);
	Stack.StepCompiledIn(&WorldLevel);
	Stack.StepCompiledIn(&ForcedLootTier);
	Stack.IncrementCode();

	auto LootDrops = ChooseLootForContainer(TierGroupName, ForcedLootTier, WorldLevel);
	for (auto& LootDrop : LootDrops) {
		OutLootToDrop.Add(LootDrop);
	}
	return *Ret = true;
}

AFortPickup* Looting::SpawnPickup(UObject* Object, FFrame& Stack, AFortPickup** Ret) {
	UFortWorldItemDefinition* ItemDefinition;
	int32 NumberToSpawn;
	AFortPawn* TriggeringPawn;
	FVector Position;
	FVector Direction;
	Stack.StepCompiledIn(&ItemDefinition);
	Stack.StepCompiledIn(&NumberToSpawn);
	Stack.StepCompiledIn(&TriggeringPawn);
	Stack.StepCompiledIn(&Position);
	Stack.StepCompiledIn(&Direction);
	Stack.IncrementCode();

	auto Pickup = Inventory::SpawnPickup(Position, ItemDefinition, NumberToSpawn, ItemDefinition->IsA<UFortWeaponItemDefinition>() ? Inventory::GetStats((UFortWeaponItemDefinition*)ItemDefinition)->ClipSize : 0, EFortPickupSourceTypeFlag::Other, EFortPickupSpawnSource::SupplyDrop);
	return *Ret = Pickup;
}

AFortPickup* Looting::K2_SpawnPickupInWorld(UObject* Object, FFrame& Stack, AFortPickup** Ret) {
	class UObject* WorldContextObject;
	class UFortWorldItemDefinition* ItemDefinition;
	int32 NumberToSpawn;
	FVector Position;
	FVector Direction;
	int32 OverrideMaxStackCount;
	bool bToss;
	bool bRandomRotation;
	bool bBlockedFromAutoPickup;
	int32 PickupInstigatorHandle;
	EFortPickupSourceTypeFlag SourceType;
	EFortPickupSpawnSource Source;
	class AFortPlayerController* OptionalOwnerPC;
	bool bPickupOnlyRelevantToOwner;

	Stack.StepCompiledIn(&WorldContextObject);
	Stack.StepCompiledIn(&ItemDefinition);
	Stack.StepCompiledIn(&NumberToSpawn);
	Stack.StepCompiledIn(&Position);
	Stack.StepCompiledIn(&Direction);
	Stack.StepCompiledIn(&OverrideMaxStackCount);
	Stack.StepCompiledIn(&bToss);
	Stack.StepCompiledIn(&bRandomRotation);
	Stack.StepCompiledIn(&bBlockedFromAutoPickup);
	Stack.StepCompiledIn(&PickupInstigatorHandle);
	Stack.StepCompiledIn(&SourceType);
	Stack.StepCompiledIn(&Source);
	Stack.StepCompiledIn(&OptionalOwnerPC);
	Stack.StepCompiledIn(&bPickupOnlyRelevantToOwner);
	Stack.IncrementCode();

	auto Pickup = Inventory::SpawnPickup(Position, ItemDefinition, NumberToSpawn, 0, SourceType, Source, OptionalOwnerPC ? OptionalOwnerPC->MyFortPawn : nullptr, bToss, bRandomRotation);
	return *Ret = Pickup;
}

AFortPickup* Looting::SpawnItemVariantPickupInWorld(UObject* Object, FFrame& Stack, AFortPickup** Ret) {
	UObject* WorldContextObject;
	FSpawnItemVariantParams Params;
	Stack.StepCompiledIn(&WorldContextObject);
	Stack.StepCompiledIn(&Params);
	Stack.IncrementCode();

	auto Pickup = Inventory::SpawnPickup(Params.Position, Params.WorldItemDefinition, Params.NumberToSpawn, 0, Params.SourceType, Params.Source, nullptr, Params.bToss, Params.bRandomRotation);
	return *Ret = Pickup;
}

void Looting::Hook() {
	Utils::Hook(Sarah::Offsets::ImageBase + 0x6c60e0c, SpawnLootHook);
	Utils::ExecHook("/Script/FortniteGame.FortKismetLibrary.PickLootDrops", PickLootDrops);
	Utils::ExecHook("/Script/FortniteGame.FortAthenaSupplyDrop.SpawnPickup", SpawnPickup);

	Utils::ExecHook("/Script/FortniteGame.FortKismetLibrary.K2_SpawnPickupInWorld", K2_SpawnPickupInWorld);
	Utils::ExecHook("/Script/FortniteGame.FortKismetLibrary.SpawnItemVariantPickupInWorld", SpawnItemVariantPickupInWorld);
}
