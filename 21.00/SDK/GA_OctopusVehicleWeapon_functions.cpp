﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_OctopusVehicleWeapon

#include "Basic.hpp"

#include "GA_OctopusVehicleWeapon_classes.hpp"
#include "GA_OctopusVehicleWeapon_parameters.hpp"


namespace SDK
{

// Function GA_OctopusVehicleWeapon.GA_OctopusVehicleWeapon_C.Removed_DE1C33CD4D588B05A50CC5A99FE6CB41
// (BlueprintCallable, BlueprintEvent)

void UGA_OctopusVehicleWeapon_C::Removed_DE1C33CD4D588B05A50CC5A99FE6CB41()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_OctopusVehicleWeapon_C", "Removed_DE1C33CD4D588B05A50CC5A99FE6CB41");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_OctopusVehicleWeapon.GA_OctopusVehicleWeapon_C.K2_OnEndAbility
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                                    bWasCancelled                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_OctopusVehicleWeapon_C::K2_OnEndAbility(bool bWasCancelled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_OctopusVehicleWeapon_C", "K2_OnEndAbility");

	Params::GA_OctopusVehicleWeapon_C_K2_OnEndAbility Parms{};

	Parms.bWasCancelled = bWasCancelled;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_OctopusVehicleWeapon.GA_OctopusVehicleWeapon_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)

void UGA_OctopusVehicleWeapon_C::K2_ActivateAbility()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_OctopusVehicleWeapon_C", "K2_ActivateAbility");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_OctopusVehicleWeapon.GA_OctopusVehicleWeapon_C.FailedToActivatePassiveAbility
// (Event, Public, BlueprintEvent)

void UGA_OctopusVehicleWeapon_C::FailedToActivatePassiveAbility()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_OctopusVehicleWeapon_C", "FailedToActivatePassiveAbility");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_OctopusVehicleWeapon.GA_OctopusVehicleWeapon_C.ExecuteUbergraph_GA_OctopusVehicleWeapon
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_OctopusVehicleWeapon_C::ExecuteUbergraph_GA_OctopusVehicleWeapon(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_OctopusVehicleWeapon_C", "ExecuteUbergraph_GA_OctopusVehicleWeapon");

	Params::GA_OctopusVehicleWeapon_C_ExecuteUbergraph_GA_OctopusVehicleWeapon Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

