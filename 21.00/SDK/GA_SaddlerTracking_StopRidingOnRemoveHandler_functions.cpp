﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_SaddlerTracking_StopRidingOnRemoveHandler

#include "Basic.hpp"

#include "GA_SaddlerTracking_StopRidingOnRemoveHandler_classes.hpp"
#include "GA_SaddlerTracking_StopRidingOnRemoveHandler_parameters.hpp"


namespace SDK
{

// Function GA_SaddlerTracking_StopRidingOnRemoveHandler.GA_SaddlerTracking_StopRidingOnRemoveHandler_C.ExecuteUbergraph_GA_SaddlerTracking_StopRidingOnRemoveHandler
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_SaddlerTracking_StopRidingOnRemoveHandler_C::ExecuteUbergraph_GA_SaddlerTracking_StopRidingOnRemoveHandler(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_SaddlerTracking_StopRidingOnRemoveHandler_C", "ExecuteUbergraph_GA_SaddlerTracking_StopRidingOnRemoveHandler");

	Params::GA_SaddlerTracking_StopRidingOnRemoveHandler_C_ExecuteUbergraph_GA_SaddlerTracking_StopRidingOnRemoveHandler Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_SaddlerTracking_StopRidingOnRemoveHandler.GA_SaddlerTracking_StopRidingOnRemoveHandler_C.K2_ActivateAbilityFromEvent
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// struct FGameplayEventData               EventData                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UGA_SaddlerTracking_StopRidingOnRemoveHandler_C::K2_ActivateAbilityFromEvent(const struct FGameplayEventData& EventData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_SaddlerTracking_StopRidingOnRemoveHandler_C", "K2_ActivateAbilityFromEvent");

	Params::GA_SaddlerTracking_StopRidingOnRemoveHandler_C_K2_ActivateAbilityFromEvent Parms{};

	Parms.EventData = std::move(EventData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_SaddlerTracking_StopRidingOnRemoveHandler.GA_SaddlerTracking_StopRidingOnRemoveHandler_C.TryStopRidingIfSaddlerRemoved
// (BlueprintCallable, BlueprintEvent)

void UGA_SaddlerTracking_StopRidingOnRemoveHandler_C::TryStopRidingIfSaddlerRemoved()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_SaddlerTracking_StopRidingOnRemoveHandler_C", "TryStopRidingIfSaddlerRemoved");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_SaddlerTracking_StopRidingOnRemoveHandler.GA_SaddlerTracking_StopRidingOnRemoveHandler_C.K2_ShouldAbilityRespondToEvent
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FGameplayAbilityActorInfo        ActorInfo                                              (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
// struct FGameplayEventData               Payload                                                (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UGA_SaddlerTracking_StopRidingOnRemoveHandler_C::K2_ShouldAbilityRespondToEvent(const struct FGameplayAbilityActorInfo& ActorInfo, const struct FGameplayEventData& Payload) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_SaddlerTracking_StopRidingOnRemoveHandler_C", "K2_ShouldAbilityRespondToEvent");

	Params::GA_SaddlerTracking_StopRidingOnRemoveHandler_C_K2_ShouldAbilityRespondToEvent Parms{};

	Parms.ActorInfo = std::move(ActorInfo);
	Parms.Payload = std::move(Payload);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

