﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Athena_HiThere

#include "Basic.hpp"

#include "BP_Athena_HiThere_classes.hpp"
#include "BP_Athena_HiThere_parameters.hpp"


namespace SDK
{

// Function BP_Athena_HiThere.BP_Athena_HiThere_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_Athena_HiThere_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Athena_HiThere_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Athena_HiThere.BP_Athena_HiThere_C.ExecuteUbergraph_BP_Athena_HiThere
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Athena_HiThere_C::ExecuteUbergraph_BP_Athena_HiThere(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Athena_HiThere_C", "ExecuteUbergraph_BP_Athena_HiThere");

	Params::BP_Athena_HiThere_C_ExecuteUbergraph_BP_Athena_HiThere Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

