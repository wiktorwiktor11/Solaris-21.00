﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_SMG_Recoil_Athena

#include "Basic.hpp"

#include "B_SMG_Recoil_Athena_classes.hpp"
#include "B_SMG_Recoil_Athena_parameters.hpp"


namespace SDK
{

// Function B_SMG_Recoil_Athena.B_SMG_Recoil_Athena_C.ExecuteUbergraph_B_SMG_Recoil_Athena
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_SMG_Recoil_Athena_C::ExecuteUbergraph_B_SMG_Recoil_Athena(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_SMG_Recoil_Athena_C", "ExecuteUbergraph_B_SMG_Recoil_Athena");

	Params::B_SMG_Recoil_Athena_C_ExecuteUbergraph_B_SMG_Recoil_Athena Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_SMG_Recoil_Athena.B_SMG_Recoil_Athena_C.OnPlayImpactFX
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// struct FHitResult                       HitResult                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// EPhysicalSurface                        ImpactPhysicalSurface                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFXSystemComponent*               SpawnedPSC                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_SMG_Recoil_Athena_C::OnPlayImpactFX(const struct FHitResult& HitResult, EPhysicalSurface ImpactPhysicalSurface, class UFXSystemComponent* SpawnedPSC)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_SMG_Recoil_Athena_C", "OnPlayImpactFX");

	Params::B_SMG_Recoil_Athena_C_OnPlayImpactFX Parms{};

	Parms.HitResult = std::move(HitResult);
	Parms.ImpactPhysicalSurface = ImpactPhysicalSurface;
	Parms.SpawnedPSC = SpawnedPSC;

	UObject::ProcessEvent(Func, &Parms);
}

}

