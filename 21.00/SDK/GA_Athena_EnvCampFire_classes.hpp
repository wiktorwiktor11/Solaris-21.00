﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Athena_EnvCampFire

#include "Basic.hpp"

#include "GameplayTags_structs.hpp"
#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "GameplayAbilities_structs.hpp"
#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GA_Athena_EnvCampFire.GA_Athena_EnvCampFire_C
// 0x0140 (0x0C50 - 0x0B10)
class UGA_Athena_EnvCampFire_C final : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0B10(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	float                                         TimeBetweenHeals;                                  // 0x0B18(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_B1C[0x4];                                      // 0x0B1C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           Timer_ApplyHeal;                                   // 0x0B20(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	int32                                         MaxHeals;                                          // 0x0B28(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CurrentHeals;                                      // 0x0B2C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTransform                             CustomTargeting;                                   // 0x0B30(0x0060)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                         TargetingHeightOffset;                             // 0x0B90(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_B94[0x4];                                      // 0x0B94(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FScalableFloat                         Row_MaxHeals;                                      // 0x0B98(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                         Row_TimeBetweenHeals;                              // 0x0BC0(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                         Row_StokeDuration;                                 // 0x0BE8(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                         Row_Stoke_TimeBetweenHeals;                        // 0x0C10(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          IsStoked;                                          // 0x0C38(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C39[0x3];                                      // 0x0C39(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayTag                           GC_StokedLoop;                                     // 0x0C3C(0x0004)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           GC_StokeBurst;                                     // 0x0C40(0x0004)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C44[0x4];                                      // 0x0C44(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AB_BGA_Athena_EnvCampFire_C*            Campfire;                                          // 0x0C48(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void Targeted_FA21AF3D4B3CDB44816F37A74E520B7C(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Targeted_EDAB937443020D47385625B06E892DF0(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Targeted_54C862474620655A47CEAFABF8570B89(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void SetIsStoked(bool IsStoked_0);
	void SetCustomTargetingTrans();
	void SetBalanceValues(bool Stoke);
	void K2_OnEndAbility(bool bWasCancelled);
	void K2_ActivateAbilityFromEvent(const struct FGameplayEventData& EventData);
	void ForceEndAbility();
	void FinishStoke();
	void ExecuteUbergraph_GA_Athena_EnvCampFire(int32 EntryPoint);
	void EventReceived_63E2BB3E47E5E63C7A4A0A8C45DC23E4(const struct FGameplayEventData& Payload);
	void EndEvent();
	void Cancelled_FA21AF3D4B3CDB44816F37A74E520B7C(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Cancelled_EDAB937443020D47385625B06E892DF0(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Cancelled_54C862474620655A47CEAFABF8570B89(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void ApplyHeal();

	struct FTransform GetCustomAbilitySourceTransform() const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_Athena_EnvCampFire_C">();
	}
	static class UGA_Athena_EnvCampFire_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_Athena_EnvCampFire_C>();
	}
};
static_assert(alignof(UGA_Athena_EnvCampFire_C) == 0x000010, "Wrong alignment on UGA_Athena_EnvCampFire_C");
static_assert(sizeof(UGA_Athena_EnvCampFire_C) == 0x000C50, "Wrong size on UGA_Athena_EnvCampFire_C");
static_assert(offsetof(UGA_Athena_EnvCampFire_C, UberGraphFrame) == 0x000B10, "Member 'UGA_Athena_EnvCampFire_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UGA_Athena_EnvCampFire_C, TimeBetweenHeals) == 0x000B18, "Member 'UGA_Athena_EnvCampFire_C::TimeBetweenHeals' has a wrong offset!");
static_assert(offsetof(UGA_Athena_EnvCampFire_C, Timer_ApplyHeal) == 0x000B20, "Member 'UGA_Athena_EnvCampFire_C::Timer_ApplyHeal' has a wrong offset!");
static_assert(offsetof(UGA_Athena_EnvCampFire_C, MaxHeals) == 0x000B28, "Member 'UGA_Athena_EnvCampFire_C::MaxHeals' has a wrong offset!");
static_assert(offsetof(UGA_Athena_EnvCampFire_C, CurrentHeals) == 0x000B2C, "Member 'UGA_Athena_EnvCampFire_C::CurrentHeals' has a wrong offset!");
static_assert(offsetof(UGA_Athena_EnvCampFire_C, CustomTargeting) == 0x000B30, "Member 'UGA_Athena_EnvCampFire_C::CustomTargeting' has a wrong offset!");
static_assert(offsetof(UGA_Athena_EnvCampFire_C, TargetingHeightOffset) == 0x000B90, "Member 'UGA_Athena_EnvCampFire_C::TargetingHeightOffset' has a wrong offset!");
static_assert(offsetof(UGA_Athena_EnvCampFire_C, Row_MaxHeals) == 0x000B98, "Member 'UGA_Athena_EnvCampFire_C::Row_MaxHeals' has a wrong offset!");
static_assert(offsetof(UGA_Athena_EnvCampFire_C, Row_TimeBetweenHeals) == 0x000BC0, "Member 'UGA_Athena_EnvCampFire_C::Row_TimeBetweenHeals' has a wrong offset!");
static_assert(offsetof(UGA_Athena_EnvCampFire_C, Row_StokeDuration) == 0x000BE8, "Member 'UGA_Athena_EnvCampFire_C::Row_StokeDuration' has a wrong offset!");
static_assert(offsetof(UGA_Athena_EnvCampFire_C, Row_Stoke_TimeBetweenHeals) == 0x000C10, "Member 'UGA_Athena_EnvCampFire_C::Row_Stoke_TimeBetweenHeals' has a wrong offset!");
static_assert(offsetof(UGA_Athena_EnvCampFire_C, IsStoked) == 0x000C38, "Member 'UGA_Athena_EnvCampFire_C::IsStoked' has a wrong offset!");
static_assert(offsetof(UGA_Athena_EnvCampFire_C, GC_StokedLoop) == 0x000C3C, "Member 'UGA_Athena_EnvCampFire_C::GC_StokedLoop' has a wrong offset!");
static_assert(offsetof(UGA_Athena_EnvCampFire_C, GC_StokeBurst) == 0x000C40, "Member 'UGA_Athena_EnvCampFire_C::GC_StokeBurst' has a wrong offset!");
static_assert(offsetof(UGA_Athena_EnvCampFire_C, Campfire) == 0x000C48, "Member 'UGA_Athena_EnvCampFire_C::Campfire' has a wrong offset!");

}

