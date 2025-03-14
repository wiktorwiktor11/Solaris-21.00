﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Hotfix_Container_Parent

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "GameplayAbilities_structs.hpp"
#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Hotfix_Container_Parent.Hotfix_Container_Parent_C
// 0x0090 (0x10B0 - 0x1020)
class AHotfix_Container_Parent_C : public ABuildingContainer
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x1020(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FScalableFloat                         Row_ActorEnabled;                                  // 0x1028(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                         Row_InteractEnabled;                               // 0x1050(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UParticleSystem*                        FX_Open;                                           // 0x1078(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                FX_OpenOffsetLocation;                             // 0x1080(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         FX_OpenPitchOffset;                                // 0x1098(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_109C[0x4];                                     // 0x109C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USoundBase*                             Sound_Open;                                        // 0x10A0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          DisableLootOnDisableInteract;                      // 0x10A8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Hotfix_Container_Parent(int32 EntryPoint);
	void OnLoot();
	void OnReady_8BE6ADB6479A5EF3145F32B245E584C6(class AFortGameStateAthena* GameState, const class UFortPlaylist* Playlist, const struct FGameplayTagContainer& PlaylistContextTags);
	void ReceiveBeginPlay();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Hotfix_Container_Parent_C">();
	}
	static class AHotfix_Container_Parent_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AHotfix_Container_Parent_C>();
	}
};
static_assert(alignof(AHotfix_Container_Parent_C) == 0x000008, "Wrong alignment on AHotfix_Container_Parent_C");
static_assert(sizeof(AHotfix_Container_Parent_C) == 0x0010B0, "Wrong size on AHotfix_Container_Parent_C");
static_assert(offsetof(AHotfix_Container_Parent_C, UberGraphFrame) == 0x001020, "Member 'AHotfix_Container_Parent_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AHotfix_Container_Parent_C, Row_ActorEnabled) == 0x001028, "Member 'AHotfix_Container_Parent_C::Row_ActorEnabled' has a wrong offset!");
static_assert(offsetof(AHotfix_Container_Parent_C, Row_InteractEnabled) == 0x001050, "Member 'AHotfix_Container_Parent_C::Row_InteractEnabled' has a wrong offset!");
static_assert(offsetof(AHotfix_Container_Parent_C, FX_Open) == 0x001078, "Member 'AHotfix_Container_Parent_C::FX_Open' has a wrong offset!");
static_assert(offsetof(AHotfix_Container_Parent_C, FX_OpenOffsetLocation) == 0x001080, "Member 'AHotfix_Container_Parent_C::FX_OpenOffsetLocation' has a wrong offset!");
static_assert(offsetof(AHotfix_Container_Parent_C, FX_OpenPitchOffset) == 0x001098, "Member 'AHotfix_Container_Parent_C::FX_OpenPitchOffset' has a wrong offset!");
static_assert(offsetof(AHotfix_Container_Parent_C, Sound_Open) == 0x0010A0, "Member 'AHotfix_Container_Parent_C::Sound_Open' has a wrong offset!");
static_assert(offsetof(AHotfix_Container_Parent_C, DisableLootOnDisableInteract) == 0x0010A8, "Member 'AHotfix_Container_Parent_C::DisableLootOnDisableInteract' has a wrong offset!");

}

