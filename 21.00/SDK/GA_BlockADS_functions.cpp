﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_BlockADS

#include "Basic.hpp"

#include "GA_BlockADS_classes.hpp"
#include "GA_BlockADS_parameters.hpp"


namespace SDK
{

// Function GA_BlockADS.GA_BlockADS_C.ExecuteUbergraph_GA_BlockADS
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_BlockADS_C::ExecuteUbergraph_GA_BlockADS(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_BlockADS_C", "ExecuteUbergraph_GA_BlockADS");

	Params::GA_BlockADS_C_ExecuteUbergraph_GA_BlockADS Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_BlockADS.GA_BlockADS_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)

void UGA_BlockADS_C::K2_ActivateAbility()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_BlockADS_C", "K2_ActivateAbility");

	UObject::ProcessEvent(Func, nullptr);
}

}

