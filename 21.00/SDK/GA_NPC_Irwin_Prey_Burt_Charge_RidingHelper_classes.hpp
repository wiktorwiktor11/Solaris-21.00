﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_NPC_Irwin_Prey_Burt_Charge_RidingHelper

#include "Basic.hpp"

#include "GameplayTags_0_structs.hpp"
#include "Engine_structs.hpp"
#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GA_NPC_Irwin_Prey_Burt_Charge_RidingHelper.GA_NPC_Irwin_Prey_Burt_Charge_RidingHelper_C
// 0x0030 (0x0B40 - 0x0B10)
class UGA_NPC_Irwin_Prey_Burt_Charge_RidingHelper_C final : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0B10(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UControllableRidableComponent*          ControllableRidableComponent_Cached;               // 0x0B18(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortAIPawn*                            FortAIPawnCached;                                  // 0x0B20(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         InitialMaxAcceleration;                            // 0x0B28(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         MaxRotationRateYaw;                                // 0x0B2C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           GCN_BoostTag;                                      // 0x0B30(0x0004)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_B34[0x4];                                      // 0x0B34(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UFortGameplayAbility*                   TargetAbilityCached;                               // 0x0B38(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_GA_NPC_Irwin_Prey_Burt_Charge_RidingHelper(int32 EntryPoint);
	void FireBoostEffectsOnPlayerMulti(class AActor* PlayerTarget);
	void K2_ActivateAbilityFromEvent(const struct FGameplayEventData& EventData);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_NPC_Irwin_Prey_Burt_Charge_RidingHelper_C">();
	}
	static class UGA_NPC_Irwin_Prey_Burt_Charge_RidingHelper_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_NPC_Irwin_Prey_Burt_Charge_RidingHelper_C>();
	}
};
static_assert(alignof(UGA_NPC_Irwin_Prey_Burt_Charge_RidingHelper_C) == 0x000008, "Wrong alignment on UGA_NPC_Irwin_Prey_Burt_Charge_RidingHelper_C");
static_assert(sizeof(UGA_NPC_Irwin_Prey_Burt_Charge_RidingHelper_C) == 0x000B40, "Wrong size on UGA_NPC_Irwin_Prey_Burt_Charge_RidingHelper_C");
static_assert(offsetof(UGA_NPC_Irwin_Prey_Burt_Charge_RidingHelper_C, UberGraphFrame) == 0x000B10, "Member 'UGA_NPC_Irwin_Prey_Burt_Charge_RidingHelper_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UGA_NPC_Irwin_Prey_Burt_Charge_RidingHelper_C, ControllableRidableComponent_Cached) == 0x000B18, "Member 'UGA_NPC_Irwin_Prey_Burt_Charge_RidingHelper_C::ControllableRidableComponent_Cached' has a wrong offset!");
static_assert(offsetof(UGA_NPC_Irwin_Prey_Burt_Charge_RidingHelper_C, FortAIPawnCached) == 0x000B20, "Member 'UGA_NPC_Irwin_Prey_Burt_Charge_RidingHelper_C::FortAIPawnCached' has a wrong offset!");
static_assert(offsetof(UGA_NPC_Irwin_Prey_Burt_Charge_RidingHelper_C, InitialMaxAcceleration) == 0x000B28, "Member 'UGA_NPC_Irwin_Prey_Burt_Charge_RidingHelper_C::InitialMaxAcceleration' has a wrong offset!");
static_assert(offsetof(UGA_NPC_Irwin_Prey_Burt_Charge_RidingHelper_C, MaxRotationRateYaw) == 0x000B2C, "Member 'UGA_NPC_Irwin_Prey_Burt_Charge_RidingHelper_C::MaxRotationRateYaw' has a wrong offset!");
static_assert(offsetof(UGA_NPC_Irwin_Prey_Burt_Charge_RidingHelper_C, GCN_BoostTag) == 0x000B30, "Member 'UGA_NPC_Irwin_Prey_Burt_Charge_RidingHelper_C::GCN_BoostTag' has a wrong offset!");
static_assert(offsetof(UGA_NPC_Irwin_Prey_Burt_Charge_RidingHelper_C, TargetAbilityCached) == 0x000B38, "Member 'UGA_NPC_Irwin_Prey_Burt_Charge_RidingHelper_C::TargetAbilityCached' has a wrong offset!");

}

