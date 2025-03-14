#pragma once
#include "pch.h"

class Looting {
public:
	static bool SpawnLootHook(ABuildingContainer*);
	static void SpawnLoot(FName&, FVector);
	static void SpawnFloorLootForContainer(UBlueprintGeneratedClass*);
private:
	static bool ServerOnAttemptInteract(ABuildingContainer*, AFortPlayerPawn*);
	static void SetupLDSForPackage(TArray<FFortItemEntry>&, SDK::FName, int, FName, int WorldLevel = ((AFortGameStateAthena*)UWorld::GetWorld()->GameState)->WorldLevel);
	template <typename T>
	static pair<FName, UEAllocatedVector<T*>> PickWeighted(UEAllocatedMap<FName, UEAllocatedVector<T*>>& Map, float (*RandFunc)(float), bool bCheckZero = true) {
		float TotalWeight = std::accumulate(Map.begin(), Map.end(), 0.0f, [&](float acc, const pair<FName, UEAllocatedVector<T*>>& p) { auto Weight = 0.f; for (auto& _El : p.second) Weight += _El->Weight; return acc + Weight; });
		float RandomNumber = RandFunc(TotalWeight);

		for (auto& Element : Map)
		{
			auto Weight = 0.f; 
			for (auto& _El : Element.second) Weight += _El->Weight;
			if (bCheckZero && Weight == 0)
				continue;

			if (RandomNumber <= Weight) return Element;

			RandomNumber -= Weight;
		}

		pair<FName, UEAllocatedVector<T*>> None;
		return None;
	}
	template <typename T>
	static T* PickWeighted(UEAllocatedVector<T*>& Map, float (*RandFunc)(float), bool bCheckZero = true) {
		float TotalWeight = std::accumulate(Map.begin(), Map.end(), 0.0f, [&](float acc, T*& p) { return acc + p->Weight; });
		float RandomNumber = RandFunc(TotalWeight);

		for (auto& Element : Map)
		{
			float Weight = Element->Weight;
			if (bCheckZero && Weight == 0)
				continue;

			if (RandomNumber <= Weight) return Element;

			RandomNumber -= Weight;
		}

		return nullptr;
	}
	template <typename T>
	static pair<FName, T*> PickWeighted(UEAllocatedMap<FName, T*>& Map, float (*RandFunc)(float), bool bCheckZero = true) {
		float TotalWeight = std::accumulate(Map.begin(), Map.end(), 0.0f, [&](float acc, const pair<FName, T*>& p) { return acc + p.second->Weight; });
		float RandomNumber = RandFunc(TotalWeight);

		for (auto& Element : Map)
		{
			float Weight = Element.second->Weight;
			if (bCheckZero && Weight == 0)
				continue;

			if (RandomNumber <= Weight) return Element;

			RandomNumber -= Weight;
		}

		pair<FName, T*> None;
		return None;
	}
public:
	static TArray<FFortItemEntry> ChooseLootForContainer(FName, int = -1, int = ((AFortGameStateAthena*)UWorld::GetWorld()->GameState)->WorldLevel);
private:
	static bool PickLootDrops(UObject*, FFrame&, bool*);
	static AFortPickup* SpawnPickup(UObject*, FFrame&, AFortPickup**);
	static AFortPickup* K2_SpawnPickupInWorld(UObject*, FFrame&, AFortPickup**);
	static AFortPickup* SpawnItemVariantPickupInWorld(UObject*, FFrame&, AFortPickup**);

	InitHooks;
};