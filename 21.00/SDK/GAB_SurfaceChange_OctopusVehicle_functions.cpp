﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GAB_SurfaceChange_OctopusVehicle

#include "Basic.hpp"

#include "GAB_SurfaceChange_OctopusVehicle_classes.hpp"
#include "GAB_SurfaceChange_OctopusVehicle_parameters.hpp"


namespace SDK
{

// Function GAB_SurfaceChange_OctopusVehicle.GAB_SurfaceChange_OctopusVehicle_C.ExecuteUbergraph_GAB_SurfaceChange_OctopusVehicle
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGAB_SurfaceChange_OctopusVehicle_C::ExecuteUbergraph_GAB_SurfaceChange_OctopusVehicle(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GAB_SurfaceChange_OctopusVehicle_C", "ExecuteUbergraph_GAB_SurfaceChange_OctopusVehicle");

	Params::GAB_SurfaceChange_OctopusVehicle_C_ExecuteUbergraph_GAB_SurfaceChange_OctopusVehicle Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GAB_SurfaceChange_OctopusVehicle.GAB_SurfaceChange_OctopusVehicle_C.HotfixableGEApplication
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FScalableFloat                   Input                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class UClass*                           GameplayEffectAppliedOnTrue                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                           GameplayEffectAppliedOnFalse                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGAB_SurfaceChange_OctopusVehicle_C::HotfixableGEApplication(const struct FScalableFloat& Input, class UClass* GameplayEffectAppliedOnTrue, class UClass* GameplayEffectAppliedOnFalse)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GAB_SurfaceChange_OctopusVehicle_C", "HotfixableGEApplication");

	Params::GAB_SurfaceChange_OctopusVehicle_C_HotfixableGEApplication Parms{};

	Parms.Input = std::move(Input);
	Parms.GameplayEffectAppliedOnTrue = GameplayEffectAppliedOnTrue;
	Parms.GameplayEffectAppliedOnFalse = GameplayEffectAppliedOnFalse;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GAB_SurfaceChange_OctopusVehicle.GAB_SurfaceChange_OctopusVehicle_C.K2_ActivateAbilityFromEvent
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// struct FGameplayEventData               EventData                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UGAB_SurfaceChange_OctopusVehicle_C::K2_ActivateAbilityFromEvent(const struct FGameplayEventData& EventData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GAB_SurfaceChange_OctopusVehicle_C", "K2_ActivateAbilityFromEvent");

	Params::GAB_SurfaceChange_OctopusVehicle_C_K2_ActivateAbilityFromEvent Parms{};

	Parms.EventData = std::move(EventData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GAB_SurfaceChange_OctopusVehicle.GAB_SurfaceChange_OctopusVehicle_C.LavaBounce
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          AvatarActor                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGAB_SurfaceChange_OctopusVehicle_C::LavaBounce(class UObject* AvatarActor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GAB_SurfaceChange_OctopusVehicle_C", "LavaBounce");

	Params::GAB_SurfaceChange_OctopusVehicle_C_LavaBounce Parms{};

	Parms.AvatarActor = AvatarActor;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GAB_SurfaceChange_OctopusVehicle.GAB_SurfaceChange_OctopusVehicle_C.MulticastLavaBounce
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          AvatarActor                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGAB_SurfaceChange_OctopusVehicle_C::MulticastLavaBounce(class UObject* AvatarActor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GAB_SurfaceChange_OctopusVehicle_C", "MulticastLavaBounce");

	Params::GAB_SurfaceChange_OctopusVehicle_C_MulticastLavaBounce Parms{};

	Parms.AvatarActor = AvatarActor;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GAB_SurfaceChange_OctopusVehicle.GAB_SurfaceChange_OctopusVehicle_C.RemoveGameplayEffects
// (Public, BlueprintCallable, BlueprintEvent)

void UGAB_SurfaceChange_OctopusVehicle_C::RemoveGameplayEffects()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GAB_SurfaceChange_OctopusVehicle_C", "RemoveGameplayEffects");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GAB_SurfaceChange_OctopusVehicle.GAB_SurfaceChange_OctopusVehicle_C.SurfaceCleanup
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EPhysicalSurface                        SurfaceType                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGAB_SurfaceChange_OctopusVehicle_C::SurfaceCleanup(EPhysicalSurface SurfaceType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GAB_SurfaceChange_OctopusVehicle_C", "SurfaceCleanup");

	Params::GAB_SurfaceChange_OctopusVehicle_C_SurfaceCleanup Parms{};

	Parms.SurfaceType = SurfaceType;

	UObject::ProcessEvent(Func, &Parms);
}

}

