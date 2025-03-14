﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_OctopusVehicleWeapon

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GA_OctopusVehicleWeapon.GA_OctopusVehicleWeapon_C
// 0x0018 (0x0B28 - 0x0B10)
class UGA_OctopusVehicleWeapon_C final : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0B10(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class AFortWeapon*                            PreviousWeapon;                                    // 0x0B18(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerPawn*                        FortPawn;                                          // 0x0B20(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void Removed_DE1C33CD4D588B05A50CC5A99FE6CB41();
	void K2_OnEndAbility(bool bWasCancelled);
	void K2_ActivateAbility();
	void FailedToActivatePassiveAbility();
	void ExecuteUbergraph_GA_OctopusVehicleWeapon(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_OctopusVehicleWeapon_C">();
	}
	static class UGA_OctopusVehicleWeapon_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_OctopusVehicleWeapon_C>();
	}
};
static_assert(alignof(UGA_OctopusVehicleWeapon_C) == 0x000008, "Wrong alignment on UGA_OctopusVehicleWeapon_C");
static_assert(sizeof(UGA_OctopusVehicleWeapon_C) == 0x000B28, "Wrong size on UGA_OctopusVehicleWeapon_C");
static_assert(offsetof(UGA_OctopusVehicleWeapon_C, UberGraphFrame) == 0x000B10, "Member 'UGA_OctopusVehicleWeapon_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UGA_OctopusVehicleWeapon_C, PreviousWeapon) == 0x000B18, "Member 'UGA_OctopusVehicleWeapon_C::PreviousWeapon' has a wrong offset!");
static_assert(offsetof(UGA_OctopusVehicleWeapon_C, FortPawn) == 0x000B20, "Member 'UGA_OctopusVehicleWeapon_C::FortPawn' has a wrong offset!");

}

