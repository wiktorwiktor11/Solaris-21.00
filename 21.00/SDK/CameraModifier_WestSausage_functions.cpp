﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CameraModifier_WestSausage

#include "Basic.hpp"

#include "CameraModifier_WestSausage_classes.hpp"
#include "CameraModifier_WestSausage_parameters.hpp"


namespace SDK
{

// Function CameraModifier_WestSausage.CameraModifier_WestSausage_C.DEPRECATED_CameraBoost
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   BoostAmount_Time_0                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   BoostAmount_Magnitude_0                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCameraModifier_WestSausage_C::DEPRECATED_CameraBoost(float BoostAmount_Time_0, float BoostAmount_Magnitude_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CameraModifier_WestSausage_C", "DEPRECATED_CameraBoost");

	Params::CameraModifier_WestSausage_C_DEPRECATED_CameraBoost Parms{};

	Parms.BoostAmount_Time_0 = BoostAmount_Time_0;
	Parms.BoostAmount_Magnitude_0 = BoostAmount_Magnitude_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CameraModifier_WestSausage.CameraModifier_WestSausage_C.DEPRECATED_TurnOff
// (BlueprintCallable, BlueprintEvent)

void UCameraModifier_WestSausage_C::DEPRECATED_TurnOff()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CameraModifier_WestSausage_C", "DEPRECATED_TurnOff");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CameraModifier_WestSausage.CameraModifier_WestSausage_C.DEPRECATED_TurnOn
// (BlueprintCallable, BlueprintEvent)

void UCameraModifier_WestSausage_C::DEPRECATED_TurnOn()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CameraModifier_WestSausage_C", "DEPRECATED_TurnOn");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CameraModifier_WestSausage.CameraModifier_WestSausage_C.ExecuteUbergraph_CameraModifier_WestSausage
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCameraModifier_WestSausage_C::ExecuteUbergraph_CameraModifier_WestSausage(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CameraModifier_WestSausage_C", "ExecuteUbergraph_CameraModifier_WestSausage");

	Params::CameraModifier_WestSausage_C_ExecuteUbergraph_CameraModifier_WestSausage Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CameraModifier_WestSausage.CameraModifier_WestSausage_C.Turn On
// (BlueprintCallable, BlueprintEvent)

void UCameraModifier_WestSausage_C::Turn_On()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CameraModifier_WestSausage_C", "Turn On");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CameraModifier_WestSausage.CameraModifier_WestSausage_C.TurnOff
// (BlueprintCallable, BlueprintEvent)

void UCameraModifier_WestSausage_C::TurnOff()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CameraModifier_WestSausage_C", "TurnOff");

	UObject::ProcessEvent(Func, nullptr);
}

}

