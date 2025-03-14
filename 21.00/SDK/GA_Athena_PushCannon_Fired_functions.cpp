﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Athena_PushCannon_Fired

#include "Basic.hpp"

#include "GA_Athena_PushCannon_Fired_classes.hpp"
#include "GA_Athena_PushCannon_Fired_parameters.hpp"


namespace SDK
{

// Function GA_Athena_PushCannon_Fired.GA_Athena_PushCannon_Fired_C.K2_OnEndAbility
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                                    bWasCancelled                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Athena_PushCannon_Fired_C::K2_OnEndAbility(bool bWasCancelled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Athena_PushCannon_Fired_C", "K2_OnEndAbility");

	Params::GA_Athena_PushCannon_Fired_C_K2_OnEndAbility Parms{};

	Parms.bWasCancelled = bWasCancelled;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_Athena_PushCannon_Fired.GA_Athena_PushCannon_Fired_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)

void UGA_Athena_PushCannon_Fired_C::K2_ActivateAbility()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Athena_PushCannon_Fired_C", "K2_ActivateAbility");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_Athena_PushCannon_Fired.GA_Athena_PushCannon_Fired_C.FailedToActivatePassiveAbility
// (Event, Public, BlueprintEvent)

void UGA_Athena_PushCannon_Fired_C::FailedToActivatePassiveAbility()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Athena_PushCannon_Fired_C", "FailedToActivatePassiveAbility");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_Athena_PushCannon_Fired.GA_Athena_PushCannon_Fired_C.ExecuteUbergraph_GA_Athena_PushCannon_Fired
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Athena_PushCannon_Fired_C::ExecuteUbergraph_GA_Athena_PushCannon_Fired(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Athena_PushCannon_Fired_C", "ExecuteUbergraph_GA_Athena_PushCannon_Fired");

	Params::GA_Athena_PushCannon_Fired_C_ExecuteUbergraph_GA_Athena_PushCannon_Fired Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_Athena_PushCannon_Fired.GA_Athena_PushCannon_Fired_C.EventReceived_754FCB724B0719D064732A99C8CBBF35
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayEventData               Payload                                                (BlueprintVisible, BlueprintReadOnly, Parm)

void UGA_Athena_PushCannon_Fired_C::EventReceived_754FCB724B0719D064732A99C8CBBF35(const struct FGameplayEventData& Payload)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Athena_PushCannon_Fired_C", "EventReceived_754FCB724B0719D064732A99C8CBBF35");

	Params::GA_Athena_PushCannon_Fired_C_EventReceived_754FCB724B0719D064732A99C8CBBF35 Parms{};

	Parms.Payload = std::move(Payload);

	UObject::ProcessEvent(Func, &Parms);
}

}

