﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Athena_Bush_AimBlocker

#include "Basic.hpp"

#include "GA_Athena_Bush_AimBlocker_classes.hpp"
#include "GA_Athena_Bush_AimBlocker_parameters.hpp"


namespace SDK
{

// Function GA_Athena_Bush_AimBlocker.GA_Athena_Bush_AimBlocker_C.ExecuteUbergraph_GA_Athena_Bush_AimBlocker
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Athena_Bush_AimBlocker_C::ExecuteUbergraph_GA_Athena_Bush_AimBlocker(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Athena_Bush_AimBlocker_C", "ExecuteUbergraph_GA_Athena_Bush_AimBlocker");

	Params::GA_Athena_Bush_AimBlocker_C_ExecuteUbergraph_GA_Athena_Bush_AimBlocker Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_Athena_Bush_AimBlocker.GA_Athena_Bush_AimBlocker_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)

void UGA_Athena_Bush_AimBlocker_C::K2_ActivateAbility()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Athena_Bush_AimBlocker_C", "K2_ActivateAbility");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_Athena_Bush_AimBlocker.GA_Athena_Bush_AimBlocker_C.K2_OnEndAbility
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                                    bWasCancelled                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Athena_Bush_AimBlocker_C::K2_OnEndAbility(bool bWasCancelled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Athena_Bush_AimBlocker_C", "K2_OnEndAbility");

	Params::GA_Athena_Bush_AimBlocker_C_K2_OnEndAbility Parms{};

	Parms.bWasCancelled = bWasCancelled;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_Athena_Bush_AimBlocker.GA_Athena_Bush_AimBlocker_C.OnAutoAimConditionFailed_DAE3D7A14BF375522FC0189336FE18CC
// (BlueprintCallable, BlueprintEvent)

void UGA_Athena_Bush_AimBlocker_C::OnAutoAimConditionFailed_DAE3D7A14BF375522FC0189336FE18CC()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Athena_Bush_AimBlocker_C", "OnAutoAimConditionFailed_DAE3D7A14BF375522FC0189336FE18CC");

	UObject::ProcessEvent(Func, nullptr);
}

}

