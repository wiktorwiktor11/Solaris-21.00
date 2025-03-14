﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_LeaveTubeOnDBNO

#include "Basic.hpp"

#include "GA_LeaveTubeOnDBNO_classes.hpp"
#include "GA_LeaveTubeOnDBNO_parameters.hpp"


namespace SDK
{

// Function GA_LeaveTubeOnDBNO.GA_LeaveTubeOnDBNO_C.K2_OnEndAbility
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                                    bWasCancelled                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_LeaveTubeOnDBNO_C::K2_OnEndAbility(bool bWasCancelled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_LeaveTubeOnDBNO_C", "K2_OnEndAbility");

	Params::GA_LeaveTubeOnDBNO_C_K2_OnEndAbility Parms{};

	Parms.bWasCancelled = bWasCancelled;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_LeaveTubeOnDBNO.GA_LeaveTubeOnDBNO_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)

void UGA_LeaveTubeOnDBNO_C::K2_ActivateAbility()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_LeaveTubeOnDBNO_C", "K2_ActivateAbility");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_LeaveTubeOnDBNO.GA_LeaveTubeOnDBNO_C.ExecuteUbergraph_GA_LeaveTubeOnDBNO
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_LeaveTubeOnDBNO_C::ExecuteUbergraph_GA_LeaveTubeOnDBNO(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_LeaveTubeOnDBNO_C", "ExecuteUbergraph_GA_LeaveTubeOnDBNO");

	Params::GA_LeaveTubeOnDBNO_C_ExecuteUbergraph_GA_LeaveTubeOnDBNO Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_LeaveTubeOnDBNO.GA_LeaveTubeOnDBNO_C.DownButNotOut
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortPawn*                        FortPawn                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bInIsDBNO                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_LeaveTubeOnDBNO_C::DownButNotOut(class AFortPawn* FortPawn, bool bInIsDBNO)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_LeaveTubeOnDBNO_C", "DownButNotOut");

	Params::GA_LeaveTubeOnDBNO_C_DownButNotOut Parms{};

	Parms.FortPawn = FortPawn;
	Parms.bInIsDBNO = bInIsDBNO;

	UObject::ProcessEvent(Func, &Parms);
}

}

