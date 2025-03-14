﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_SafeZoneStorm

#include "Basic.hpp"

#include "BP_SafeZoneStorm_classes.hpp"
#include "BP_SafeZoneStorm_parameters.hpp"


namespace SDK
{

// Function BP_SafeZoneStorm.BP_SafeZoneStorm_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_SafeZoneStorm_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SafeZoneStorm_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_SafeZoneStorm.BP_SafeZoneStorm_C.ShowStormScreenEffect
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Show                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SafeZoneStorm_C::ShowStormScreenEffect(bool Show)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SafeZoneStorm_C", "ShowStormScreenEffect");

	Params::BP_SafeZoneStorm_C_ShowStormScreenEffect Parms{};

	Parms.Show = Show;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SafeZoneStorm.BP_SafeZoneStorm_C.ShowClouds
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   Amount                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SafeZoneStorm_C::ShowClouds(float Amount)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SafeZoneStorm_C", "ShowClouds");

	Params::BP_SafeZoneStorm_C_ShowClouds Parms{};

	Parms.Amount = Amount;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SafeZoneStorm.BP_SafeZoneStorm_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_SafeZoneStorm_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SafeZoneStorm_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_SafeZoneStorm.BP_SafeZoneStorm_C.MobileClouds
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Mobile                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SafeZoneStorm_C::MobileClouds(bool Mobile)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SafeZoneStorm_C", "MobileClouds");

	Params::BP_SafeZoneStorm_C_MobileClouds Parms{};

	Parms.Mobile = Mobile;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SafeZoneStorm.BP_SafeZoneStorm_C.ExecuteUbergraph_BP_SafeZoneStorm
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SafeZoneStorm_C::ExecuteUbergraph_BP_SafeZoneStorm(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SafeZoneStorm_C", "ExecuteUbergraph_BP_SafeZoneStorm");

	Params::BP_SafeZoneStorm_C_ExecuteUbergraph_BP_SafeZoneStorm Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

