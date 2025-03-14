﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Athena_FloppingRabbit_Passive

#include "Basic.hpp"

#include "GameplayTags_structs.hpp"
#include "Engine_structs.hpp"
#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GA_Athena_FloppingRabbit_Passive.GA_Athena_FloppingRabbit_Passive_C
// 0x00A0 (0x0BB0 - 0x0B10)
class UGA_Athena_FloppingRabbit_Passive_C final : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0B10(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UClass*                                 GE_Active;                                         // 0x0B18(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagContainer                  T_Active;                                          // 0x0B20(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UClass*                                 GE_InWorld;                                        // 0x0B40(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagContainer                  T_InWorld;                                         // 0x0B48(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	class AActor*                                 Projectile;                                        // 0x0B68(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 Wire;                                              // 0x0B70(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         FailsafeDelay;                                     // 0x0B78(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_B7C[0x4];                                      // 0x0B7C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UClass*                                 GE_ReelIn;                                         // 0x0B80(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagContainer                  T_ReelIn;                                          // 0x0B88(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	class AB_FloppingRabbit_Weap_Athena_C*        WeaponRod;                                         // 0x0BA8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void EndFishing();
	void ExecuteUbergraph_GA_Athena_FloppingRabbit_Passive(int32 EntryPoint);
	void K2_ActivateAbilityFromEvent(const struct FGameplayEventData& EventData);
	void K2_OnEndAbility(bool bWasCancelled);
	void Removed_DCA556AE47E7D8C25D9A27899D5C963C();
	void SaveOutRod();
	void Seat_Changed(int32 SeatIndex);
	void SetBobberHidden(bool HideBobber, class AFortWeapon** CurrentWeapon, class AB_FloppingRabbit_Weap_Athena_C** CastedToRabbitWeapon);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_Athena_FloppingRabbit_Passive_C">();
	}
	static class UGA_Athena_FloppingRabbit_Passive_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_Athena_FloppingRabbit_Passive_C>();
	}
};
static_assert(alignof(UGA_Athena_FloppingRabbit_Passive_C) == 0x000008, "Wrong alignment on UGA_Athena_FloppingRabbit_Passive_C");
static_assert(sizeof(UGA_Athena_FloppingRabbit_Passive_C) == 0x000BB0, "Wrong size on UGA_Athena_FloppingRabbit_Passive_C");
static_assert(offsetof(UGA_Athena_FloppingRabbit_Passive_C, UberGraphFrame) == 0x000B10, "Member 'UGA_Athena_FloppingRabbit_Passive_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UGA_Athena_FloppingRabbit_Passive_C, GE_Active) == 0x000B18, "Member 'UGA_Athena_FloppingRabbit_Passive_C::GE_Active' has a wrong offset!");
static_assert(offsetof(UGA_Athena_FloppingRabbit_Passive_C, T_Active) == 0x000B20, "Member 'UGA_Athena_FloppingRabbit_Passive_C::T_Active' has a wrong offset!");
static_assert(offsetof(UGA_Athena_FloppingRabbit_Passive_C, GE_InWorld) == 0x000B40, "Member 'UGA_Athena_FloppingRabbit_Passive_C::GE_InWorld' has a wrong offset!");
static_assert(offsetof(UGA_Athena_FloppingRabbit_Passive_C, T_InWorld) == 0x000B48, "Member 'UGA_Athena_FloppingRabbit_Passive_C::T_InWorld' has a wrong offset!");
static_assert(offsetof(UGA_Athena_FloppingRabbit_Passive_C, Projectile) == 0x000B68, "Member 'UGA_Athena_FloppingRabbit_Passive_C::Projectile' has a wrong offset!");
static_assert(offsetof(UGA_Athena_FloppingRabbit_Passive_C, Wire) == 0x000B70, "Member 'UGA_Athena_FloppingRabbit_Passive_C::Wire' has a wrong offset!");
static_assert(offsetof(UGA_Athena_FloppingRabbit_Passive_C, FailsafeDelay) == 0x000B78, "Member 'UGA_Athena_FloppingRabbit_Passive_C::FailsafeDelay' has a wrong offset!");
static_assert(offsetof(UGA_Athena_FloppingRabbit_Passive_C, GE_ReelIn) == 0x000B80, "Member 'UGA_Athena_FloppingRabbit_Passive_C::GE_ReelIn' has a wrong offset!");
static_assert(offsetof(UGA_Athena_FloppingRabbit_Passive_C, T_ReelIn) == 0x000B88, "Member 'UGA_Athena_FloppingRabbit_Passive_C::T_ReelIn' has a wrong offset!");
static_assert(offsetof(UGA_Athena_FloppingRabbit_Passive_C, WeaponRod) == 0x000BA8, "Member 'UGA_Athena_FloppingRabbit_Passive_C::WeaponRod' has a wrong offset!");

}

