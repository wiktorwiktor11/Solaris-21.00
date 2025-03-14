﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Parent_StopLight

#include "Basic.hpp"

#include "Parent_StopLight_classes.hpp"
#include "Parent_StopLight_parameters.hpp"


namespace SDK
{

// Function Parent_StopLight.Parent_StopLight_C.Begin Working
// (BlueprintCallable, BlueprintEvent)

void AParent_StopLight_C::Begin_Working()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Parent_StopLight_C", "Begin Working");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Parent_StopLight.Parent_StopLight_C.ExecuteUbergraph_Parent_StopLight
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AParent_StopLight_C::ExecuteUbergraph_Parent_StopLight(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Parent_StopLight_C", "ExecuteUbergraph_Parent_StopLight");

	Params::Parent_StopLight_C_ExecuteUbergraph_Parent_StopLight Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Parent_StopLight.Parent_StopLight_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AParent_StopLight_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Parent_StopLight_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Parent_StopLight.Parent_StopLight_C.Switchlights
// (BlueprintCallable, BlueprintEvent)

void AParent_StopLight_C::Switchlights()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Parent_StopLight_C", "Switchlights");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Parent_StopLight.Parent_StopLight_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AParent_StopLight_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Parent_StopLight_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}

}

