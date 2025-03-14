﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Prj_Athena_Consumable_Thrown_Cabbage

#include "Basic.hpp"

#include "Prj_Athena_Consumable_Thrown_Cabbage_classes.hpp"
#include "Prj_Athena_Consumable_Thrown_Cabbage_parameters.hpp"


namespace SDK
{

// Function Prj_Athena_Consumable_Thrown_Cabbage.Prj_Athena_Consumable_Thrown_Cabbage_C.ExecuteUbergraph_Prj_Athena_Consumable_Thrown_Cabbage
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void APrj_Athena_Consumable_Thrown_Cabbage_C::ExecuteUbergraph_Prj_Athena_Consumable_Thrown_Cabbage(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Prj_Athena_Consumable_Thrown_Cabbage_C", "ExecuteUbergraph_Prj_Athena_Consumable_Thrown_Cabbage");

	Params::Prj_Athena_Consumable_Thrown_Cabbage_C_ExecuteUbergraph_Prj_Athena_Consumable_Thrown_Cabbage Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Prj_Athena_Consumable_Thrown_Cabbage.Prj_Athena_Consumable_Thrown_Cabbage_C.On Pickup Spawned
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortPickup*                      Spawned_Pickup                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void APrj_Athena_Consumable_Thrown_Cabbage_C::On_Pickup_Spawned(class AFortPickup* Spawned_Pickup)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Prj_Athena_Consumable_Thrown_Cabbage_C", "On Pickup Spawned");

	Params::Prj_Athena_Consumable_Thrown_Cabbage_C_On_Pickup_Spawned Parms{};

	Parms.Spawned_Pickup = Spawned_Pickup;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Prj_Athena_Consumable_Thrown_Cabbage.Prj_Athena_Consumable_Thrown_Cabbage_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void APrj_Athena_Consumable_Thrown_Cabbage_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Prj_Athena_Consumable_Thrown_Cabbage_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}

}

