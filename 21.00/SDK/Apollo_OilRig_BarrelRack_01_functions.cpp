﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Apollo_OilRig_BarrelRack_01

#include "Basic.hpp"

#include "Apollo_OilRig_BarrelRack_01_classes.hpp"
#include "Apollo_OilRig_BarrelRack_01_parameters.hpp"


namespace SDK
{

// Function Apollo_OilRig_BarrelRack_01.Apollo_OilRig_BarrelRack_01_C.ExecuteUbergraph_Apollo_OilRig_BarrelRack_01
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AApollo_OilRig_BarrelRack_01_C::ExecuteUbergraph_Apollo_OilRig_BarrelRack_01(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Apollo_OilRig_BarrelRack_01_C", "ExecuteUbergraph_Apollo_OilRig_BarrelRack_01");

	Params::Apollo_OilRig_BarrelRack_01_C_ExecuteUbergraph_Apollo_OilRig_BarrelRack_01 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Apollo_OilRig_BarrelRack_01.Apollo_OilRig_BarrelRack_01_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AApollo_OilRig_BarrelRack_01_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Apollo_OilRig_BarrelRack_01_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}

}

