﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: FortMaterialStyle_VendMonitor

#include "Basic.hpp"

#include "FortMaterialStyle_VendMonitor_classes.hpp"
#include "FortMaterialStyle_VendMonitor_parameters.hpp"


namespace SDK
{

// Function FortMaterialStyle_VendMonitor.FortMaterialStyle_VendMonitor_C.ApplyMaterialStyleToVendingMachine
// (Public, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UObject*                          Target                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVendingMachineMaterialStyle     DesiredStyleProperties                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFortMaterialStyle_VendMonitor_C::ApplyMaterialStyleToVendingMachine(class UObject* Target, const struct FVendingMachineMaterialStyle& DesiredStyleProperties) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortMaterialStyle_VendMonitor_C", "ApplyMaterialStyleToVendingMachine");

	Params::FortMaterialStyle_VendMonitor_C_ApplyMaterialStyleToVendingMachine Parms{};

	Parms.Target = Target;
	Parms.DesiredStyleProperties = std::move(DesiredStyleProperties);

	UObject::ProcessEvent(Func, &Parms);
}


// Function FortMaterialStyle_VendMonitor.FortMaterialStyle_VendMonitor_C.ApplyTo
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FFortMaterialStyleApplyParams    Params_0                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference)

void UFortMaterialStyle_VendMonitor_C::ApplyTo(const struct FFortMaterialStyleApplyParams& Params_0) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortMaterialStyle_VendMonitor_C", "ApplyTo");

	Params::FortMaterialStyle_VendMonitor_C_ApplyTo Parms{};

	Parms.Params_0 = std::move(Params_0);

	UObject::ProcessEvent(Func, &Parms);
}

}

