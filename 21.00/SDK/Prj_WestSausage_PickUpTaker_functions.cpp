﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Prj_WestSausage_PickUpTaker

#include "Basic.hpp"

#include "Prj_WestSausage_PickUpTaker_classes.hpp"
#include "Prj_WestSausage_PickUpTaker_parameters.hpp"


namespace SDK
{

// Function Prj_WestSausage_PickUpTaker.Prj_WestSausage_PickUpTaker_C.ExecuteUbergraph_Prj_WestSausage_PickUpTaker
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void APrj_WestSausage_PickUpTaker_C::ExecuteUbergraph_Prj_WestSausage_PickUpTaker(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Prj_WestSausage_PickUpTaker_C", "ExecuteUbergraph_Prj_WestSausage_PickUpTaker");

	Params::Prj_WestSausage_PickUpTaker_C_ExecuteUbergraph_Prj_WestSausage_PickUpTaker Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Prj_WestSausage_PickUpTaker.Prj_WestSausage_PickUpTaker_C.Init
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           AttachedPickup_0                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void APrj_WestSausage_PickUpTaker_C::Init(class AActor* AttachedPickup_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Prj_WestSausage_PickUpTaker_C", "Init");

	Params::Prj_WestSausage_PickUpTaker_C_Init Parms{};

	Parms.AttachedPickup_0 = AttachedPickup_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Prj_WestSausage_PickUpTaker.Prj_WestSausage_PickUpTaker_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void APrj_WestSausage_PickUpTaker_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Prj_WestSausage_PickUpTaker_C", "ReceiveTick");

	Params::Prj_WestSausage_PickUpTaker_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Prj_WestSausage_PickUpTaker.Prj_WestSausage_PickUpTaker_C.StartMoving
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)

void APrj_WestSausage_PickUpTaker_C::StartMoving()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Prj_WestSausage_PickUpTaker_C", "StartMoving");

	UObject::ProcessEvent(Func, nullptr);
}

}

