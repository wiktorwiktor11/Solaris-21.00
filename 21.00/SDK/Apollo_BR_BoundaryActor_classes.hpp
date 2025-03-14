﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Apollo_BR_BoundaryActor

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Apollo_BR_BoundaryActor.Apollo_BR_BoundaryActor_C
// 0x0040 (0x0750 - 0x0710)
class AApollo_BR_BoundaryActor_C final : public ABuildingActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0710(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0718(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<class AKillZVolume*>                   KillZList;                                         // 0x0720(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate)
	TArray<class ABlockingVolume*>                BlockingVolumeList;                                // 0x0730(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate)
	class AFlyingVehicleBoundarySpline_C*         FlyBoundrySpline;                                  // 0x0740(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CurrentPlaylistName;                               // 0x0748(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void TurnOffBlockingKillAndBoundaries();
	void ReceiveBeginPlay();
	void PlaylistHasLoaded(class FName PlaylistName, const struct FGameplayTagContainer& PlaylistContextTags);
	void OnWorldReady();
	void GetFortAthenaGameState(class AFortGameStateAthena** AsFort_Game_State_Athena);
	void ExecuteUbergraph_Apollo_BR_BoundaryActor(int32 EntryPoint);
	void BindPlaylistHasChanged();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Apollo_BR_BoundaryActor_C">();
	}
	static class AApollo_BR_BoundaryActor_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AApollo_BR_BoundaryActor_C>();
	}
};
static_assert(alignof(AApollo_BR_BoundaryActor_C) == 0x000008, "Wrong alignment on AApollo_BR_BoundaryActor_C");
static_assert(sizeof(AApollo_BR_BoundaryActor_C) == 0x000750, "Wrong size on AApollo_BR_BoundaryActor_C");
static_assert(offsetof(AApollo_BR_BoundaryActor_C, UberGraphFrame) == 0x000710, "Member 'AApollo_BR_BoundaryActor_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AApollo_BR_BoundaryActor_C, DefaultSceneRoot) == 0x000718, "Member 'AApollo_BR_BoundaryActor_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(AApollo_BR_BoundaryActor_C, KillZList) == 0x000720, "Member 'AApollo_BR_BoundaryActor_C::KillZList' has a wrong offset!");
static_assert(offsetof(AApollo_BR_BoundaryActor_C, BlockingVolumeList) == 0x000730, "Member 'AApollo_BR_BoundaryActor_C::BlockingVolumeList' has a wrong offset!");
static_assert(offsetof(AApollo_BR_BoundaryActor_C, FlyBoundrySpline) == 0x000740, "Member 'AApollo_BR_BoundaryActor_C::FlyBoundrySpline' has a wrong offset!");
static_assert(offsetof(AApollo_BR_BoundaryActor_C, CurrentPlaylistName) == 0x000748, "Member 'AApollo_BR_BoundaryActor_C::CurrentPlaylistName' has a wrong offset!");

}

