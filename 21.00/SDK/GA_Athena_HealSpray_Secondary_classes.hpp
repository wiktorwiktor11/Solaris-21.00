﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Athena_HealSpray_Secondary

#include "Basic.hpp"

#include "GameplayTags_structs.hpp"
#include "Engine_structs.hpp"
#include "GameplayAbilities_structs.hpp"
#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GA_Athena_HealSpray_Secondary.GA_Athena_HealSpray_Secondary_C
// 0x00E0 (0x0BF0 - 0x0B10)
class UGA_Athena_HealSpray_Secondary_C final : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0B10(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UAbilityTask_WaitGameplayEvent*         Task_WaitPrimaryPressed;                           // 0x0B18(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           Tag_PrimaryPressed;                                // 0x0B20(0x0004)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           Tag_PrimaryReleased;                               // 0x0B24(0x0004)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UAbilityTask_WaitGameplayEvent*         Task_WaitPrimaryReleased;                          // 0x0B28(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          PrimaryFireActive;                                 // 0x0B30(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_B31[0x3];                                      // 0x0B31(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   Section_FireLoop;                                  // 0x0B34(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Section_AimLoop;                                   // 0x0B38(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Section_Outro;                                     // 0x0B3C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          AbilityEnding;                                     // 0x0B40(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_B41[0x7];                                      // 0x0B41(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayAbilityTargetDataHandle       TargetData;                                        // 0x0B48(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTag                           ApplicationTag;                                    // 0x0B70(0x0004)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           Tag_GC_SprayLoop;                                  // 0x0B74(0x0004)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                          SprayFXActive;                                     // 0x0B78(0x0001)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_B79[0x3];                                      // 0x0B79(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayTag                           Tag_AmmoChanged;                                   // 0x0B7C(0x0004)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	TSubclassOf<class UGameplayEffect>            GE_Channeling;                                     // 0x0B80(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	struct FActiveGameplayEffectHandle            Handle_GE_Channeling;                              // 0x0B88(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FScalableFloat                         Row_MontageIntroDuration;                          // 0x0B90(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                         Row_MaxDuration;                                   // 0x0BB8(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FTimerHandle                           Handle_FailsafeTimer;                              // 0x0BE0(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class FName                                   MontageSection_Outro;                              // 0x0BE8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void AbilityTriggered();
	void AmmoChangedEvent();
	void ApplyGCAfterMontageIntroDelay();
	void CallEndAbility();
	void Cancelled_79A3F9314B40B2F7BBB018827DA65523(const struct FGameplayAbilityTargetDataHandle& TargetData_0, const struct FGameplayTag& ApplicationTag_0);
	void CleanUpAndEndAbility();
	void Completed_79A3F9314B40B2F7BBB018827DA65523(const struct FGameplayAbilityTargetDataHandle& TargetData_0, const struct FGameplayTag& ApplicationTag_0);
	void ExecuteUbergraph_GA_Athena_HealSpray_Secondary(int32 EntryPoint);
	void FailSafeTimer();
	void InitVars();
	void K2_ActivateAbility();
	void K2_OnEndAbility(bool bWasCancelled);
	void MontageCanceledOrEnded();
	void MontageTriggeredPreCommit();
	void OnAbilityInputReleased();
	void OnRep_SprayFXActive();
	void PrimaryPressed();
	void PrimaryReleased();
	void RepMontageOutro();
	void RepSetSprayActive(bool SprayFXActive_0);
	void ResetReleaseEvent();
	void Triggered_79A3F9314B40B2F7BBB018827DA65523(const struct FGameplayAbilityTargetDataHandle& TargetData_0, const struct FGameplayTag& ApplicationTag_0);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_Athena_HealSpray_Secondary_C">();
	}
	static class UGA_Athena_HealSpray_Secondary_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_Athena_HealSpray_Secondary_C>();
	}
};
static_assert(alignof(UGA_Athena_HealSpray_Secondary_C) == 0x000008, "Wrong alignment on UGA_Athena_HealSpray_Secondary_C");
static_assert(sizeof(UGA_Athena_HealSpray_Secondary_C) == 0x000BF0, "Wrong size on UGA_Athena_HealSpray_Secondary_C");
static_assert(offsetof(UGA_Athena_HealSpray_Secondary_C, UberGraphFrame) == 0x000B10, "Member 'UGA_Athena_HealSpray_Secondary_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UGA_Athena_HealSpray_Secondary_C, Task_WaitPrimaryPressed) == 0x000B18, "Member 'UGA_Athena_HealSpray_Secondary_C::Task_WaitPrimaryPressed' has a wrong offset!");
static_assert(offsetof(UGA_Athena_HealSpray_Secondary_C, Tag_PrimaryPressed) == 0x000B20, "Member 'UGA_Athena_HealSpray_Secondary_C::Tag_PrimaryPressed' has a wrong offset!");
static_assert(offsetof(UGA_Athena_HealSpray_Secondary_C, Tag_PrimaryReleased) == 0x000B24, "Member 'UGA_Athena_HealSpray_Secondary_C::Tag_PrimaryReleased' has a wrong offset!");
static_assert(offsetof(UGA_Athena_HealSpray_Secondary_C, Task_WaitPrimaryReleased) == 0x000B28, "Member 'UGA_Athena_HealSpray_Secondary_C::Task_WaitPrimaryReleased' has a wrong offset!");
static_assert(offsetof(UGA_Athena_HealSpray_Secondary_C, PrimaryFireActive) == 0x000B30, "Member 'UGA_Athena_HealSpray_Secondary_C::PrimaryFireActive' has a wrong offset!");
static_assert(offsetof(UGA_Athena_HealSpray_Secondary_C, Section_FireLoop) == 0x000B34, "Member 'UGA_Athena_HealSpray_Secondary_C::Section_FireLoop' has a wrong offset!");
static_assert(offsetof(UGA_Athena_HealSpray_Secondary_C, Section_AimLoop) == 0x000B38, "Member 'UGA_Athena_HealSpray_Secondary_C::Section_AimLoop' has a wrong offset!");
static_assert(offsetof(UGA_Athena_HealSpray_Secondary_C, Section_Outro) == 0x000B3C, "Member 'UGA_Athena_HealSpray_Secondary_C::Section_Outro' has a wrong offset!");
static_assert(offsetof(UGA_Athena_HealSpray_Secondary_C, AbilityEnding) == 0x000B40, "Member 'UGA_Athena_HealSpray_Secondary_C::AbilityEnding' has a wrong offset!");
static_assert(offsetof(UGA_Athena_HealSpray_Secondary_C, TargetData) == 0x000B48, "Member 'UGA_Athena_HealSpray_Secondary_C::TargetData' has a wrong offset!");
static_assert(offsetof(UGA_Athena_HealSpray_Secondary_C, ApplicationTag) == 0x000B70, "Member 'UGA_Athena_HealSpray_Secondary_C::ApplicationTag' has a wrong offset!");
static_assert(offsetof(UGA_Athena_HealSpray_Secondary_C, Tag_GC_SprayLoop) == 0x000B74, "Member 'UGA_Athena_HealSpray_Secondary_C::Tag_GC_SprayLoop' has a wrong offset!");
static_assert(offsetof(UGA_Athena_HealSpray_Secondary_C, SprayFXActive) == 0x000B78, "Member 'UGA_Athena_HealSpray_Secondary_C::SprayFXActive' has a wrong offset!");
static_assert(offsetof(UGA_Athena_HealSpray_Secondary_C, Tag_AmmoChanged) == 0x000B7C, "Member 'UGA_Athena_HealSpray_Secondary_C::Tag_AmmoChanged' has a wrong offset!");
static_assert(offsetof(UGA_Athena_HealSpray_Secondary_C, GE_Channeling) == 0x000B80, "Member 'UGA_Athena_HealSpray_Secondary_C::GE_Channeling' has a wrong offset!");
static_assert(offsetof(UGA_Athena_HealSpray_Secondary_C, Handle_GE_Channeling) == 0x000B88, "Member 'UGA_Athena_HealSpray_Secondary_C::Handle_GE_Channeling' has a wrong offset!");
static_assert(offsetof(UGA_Athena_HealSpray_Secondary_C, Row_MontageIntroDuration) == 0x000B90, "Member 'UGA_Athena_HealSpray_Secondary_C::Row_MontageIntroDuration' has a wrong offset!");
static_assert(offsetof(UGA_Athena_HealSpray_Secondary_C, Row_MaxDuration) == 0x000BB8, "Member 'UGA_Athena_HealSpray_Secondary_C::Row_MaxDuration' has a wrong offset!");
static_assert(offsetof(UGA_Athena_HealSpray_Secondary_C, Handle_FailsafeTimer) == 0x000BE0, "Member 'UGA_Athena_HealSpray_Secondary_C::Handle_FailsafeTimer' has a wrong offset!");
static_assert(offsetof(UGA_Athena_HealSpray_Secondary_C, MontageSection_Outro) == 0x000BE8, "Member 'UGA_Athena_HealSpray_Secondary_C::MontageSection_Outro' has a wrong offset!");

}

