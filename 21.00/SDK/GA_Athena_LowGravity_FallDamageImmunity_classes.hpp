﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Athena_LowGravity_FallDamageImmunity

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "GAT_TriggeredAbility_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GA_Athena_LowGravity_FallDamageImmunity.GA_Athena_LowGravity_FallDamageImmunity_C
// 0x0010 (0x0B30 - 0x0B20)
class UGA_Athena_LowGravity_FallDamageImmunity_C final : public UGAT_TriggeredAbility_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_GA_Athena_LowGravity_FallDamageImmunity_C; // 0x0B20(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class AFortPlayerPawn*                        PlayerPawn;                                        // 0x0B28(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_GA_Athena_LowGravity_FallDamageImmunity(int32 EntryPoint);
	void K2_ActivateAbilityFromEvent(const struct FGameplayEventData& EventData);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_Athena_LowGravity_FallDamageImmunity_C">();
	}
	static class UGA_Athena_LowGravity_FallDamageImmunity_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_Athena_LowGravity_FallDamageImmunity_C>();
	}
};
static_assert(alignof(UGA_Athena_LowGravity_FallDamageImmunity_C) == 0x000008, "Wrong alignment on UGA_Athena_LowGravity_FallDamageImmunity_C");
static_assert(sizeof(UGA_Athena_LowGravity_FallDamageImmunity_C) == 0x000B30, "Wrong size on UGA_Athena_LowGravity_FallDamageImmunity_C");
static_assert(offsetof(UGA_Athena_LowGravity_FallDamageImmunity_C, UberGraphFrame_GA_Athena_LowGravity_FallDamageImmunity_C) == 0x000B20, "Member 'UGA_Athena_LowGravity_FallDamageImmunity_C::UberGraphFrame_GA_Athena_LowGravity_FallDamageImmunity_C' has a wrong offset!");
static_assert(offsetof(UGA_Athena_LowGravity_FallDamageImmunity_C, PlayerPawn) == 0x000B28, "Member 'UGA_Athena_LowGravity_FallDamageImmunity_C::PlayerPawn' has a wrong offset!");

}

