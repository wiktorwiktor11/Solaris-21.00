﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_BoostJumpPack_JumpHover

#include "Basic.hpp"

#include "GameplayTags_0_structs.hpp"
#include "Engine_structs.hpp"
#include "GameplayAbilities_structs.hpp"
#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GA_BoostJumpPack_JumpHover.GA_BoostJumpPack_JumpHover_C
// 0x0040 (0x0B50 - 0x0B10)
class UGA_BoostJumpPack_JumpHover_C final : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0B10(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FGameplayTagContainer                  RequiredTags;                                      // 0x0B18(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FActiveGameplayEffectHandle            GE_Hover_Instance;                                 // 0x0B38(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	float                                         RequiredFuelToActivate;                            // 0x0B40(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_B44[0x4];                                      // 0x0B44(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UClass*                                 GE_Hover;                                          // 0x0B48(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_GA_BoostJumpPack_JumpHover(int32 EntryPoint);
	void K2_ActivateAbility();
	void K2_CommitExecute();
	void K2_OnEndAbility(bool bWasCancelled);
	void OnAbilityInputReleased();

	bool K2_CanActivateAbility(const struct FGameplayAbilityActorInfo& ActorInfo, const struct FGameplayAbilitySpecHandle& Handle, struct FGameplayTagContainer* RelevantTags) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_BoostJumpPack_JumpHover_C">();
	}
	static class UGA_BoostJumpPack_JumpHover_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_BoostJumpPack_JumpHover_C>();
	}
};
static_assert(alignof(UGA_BoostJumpPack_JumpHover_C) == 0x000008, "Wrong alignment on UGA_BoostJumpPack_JumpHover_C");
static_assert(sizeof(UGA_BoostJumpPack_JumpHover_C) == 0x000B50, "Wrong size on UGA_BoostJumpPack_JumpHover_C");
static_assert(offsetof(UGA_BoostJumpPack_JumpHover_C, UberGraphFrame) == 0x000B10, "Member 'UGA_BoostJumpPack_JumpHover_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UGA_BoostJumpPack_JumpHover_C, RequiredTags) == 0x000B18, "Member 'UGA_BoostJumpPack_JumpHover_C::RequiredTags' has a wrong offset!");
static_assert(offsetof(UGA_BoostJumpPack_JumpHover_C, GE_Hover_Instance) == 0x000B38, "Member 'UGA_BoostJumpPack_JumpHover_C::GE_Hover_Instance' has a wrong offset!");
static_assert(offsetof(UGA_BoostJumpPack_JumpHover_C, RequiredFuelToActivate) == 0x000B40, "Member 'UGA_BoostJumpPack_JumpHover_C::RequiredFuelToActivate' has a wrong offset!");
static_assert(offsetof(UGA_BoostJumpPack_JumpHover_C, GE_Hover) == 0x000B48, "Member 'UGA_BoostJumpPack_JumpHover_C::GE_Hover' has a wrong offset!");

}

