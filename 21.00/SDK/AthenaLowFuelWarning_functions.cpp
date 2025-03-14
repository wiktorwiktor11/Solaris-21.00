﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AthenaLowFuelWarning

#include "Basic.hpp"

#include "AthenaLowFuelWarning_classes.hpp"
#include "AthenaLowFuelWarning_parameters.hpp"


namespace SDK
{

// Function AthenaLowFuelWarning.AthenaLowFuelWarning_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UAthenaLowFuelWarning_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaLowFuelWarning_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AthenaLowFuelWarning.AthenaLowFuelWarning_C.ExecuteUbergraph_AthenaLowFuelWarning
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaLowFuelWarning_C::ExecuteUbergraph_AthenaLowFuelWarning(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaLowFuelWarning_C", "ExecuteUbergraph_AthenaLowFuelWarning");

	Params::AthenaLowFuelWarning_C_ExecuteUbergraph_AthenaLowFuelWarning Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AthenaLowFuelWarning.AthenaLowFuelWarning_C.OnEnterVehicleDriver_Bind
// (BlueprintCallable, BlueprintEvent)

void UAthenaLowFuelWarning_C::OnEnterVehicleDriver_Bind()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaLowFuelWarning_C", "OnEnterVehicleDriver_Bind");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AthenaLowFuelWarning.AthenaLowFuelWarning_C.OnEnterVehiclePassenger_Bind
// (BlueprintCallable, BlueprintEvent)

void UAthenaLowFuelWarning_C::OnEnterVehiclePassenger_Bind()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaLowFuelWarning_C", "OnEnterVehiclePassenger_Bind");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AthenaLowFuelWarning.AthenaLowFuelWarning_C.OnExitVehicle_Bind
// (BlueprintCallable, BlueprintEvent)

void UAthenaLowFuelWarning_C::OnExitVehicle_Bind()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaLowFuelWarning_C", "OnExitVehicle_Bind");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AthenaLowFuelWarning.AthenaLowFuelWarning_C.OnFuelAboveThreshold_Bind
// (BlueprintCallable, BlueprintEvent)

void UAthenaLowFuelWarning_C::OnFuelAboveThreshold_Bind()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaLowFuelWarning_C", "OnFuelAboveThreshold_Bind");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AthenaLowFuelWarning.AthenaLowFuelWarning_C.OnFuelBelowThreshold_Bind
// (BlueprintCallable, BlueprintEvent)

void UAthenaLowFuelWarning_C::OnFuelBelowThreshold_Bind()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaLowFuelWarning_C", "OnFuelBelowThreshold_Bind");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AthenaLowFuelWarning.AthenaLowFuelWarning_C.OnNotOutOfFuel_Bind
// (BlueprintCallable, BlueprintEvent)

void UAthenaLowFuelWarning_C::OnNotOutOfFuel_Bind()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaLowFuelWarning_C", "OnNotOutOfFuel_Bind");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AthenaLowFuelWarning.AthenaLowFuelWarning_C.OnOutOfFuel_Bind
// (BlueprintCallable, BlueprintEvent)

void UAthenaLowFuelWarning_C::OnOutOfFuel_Bind()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaLowFuelWarning_C", "OnOutOfFuel_Bind");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AthenaLowFuelWarning.AthenaLowFuelWarning_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaLowFuelWarning_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaLowFuelWarning_C", "PreConstruct");

	Params::AthenaLowFuelWarning_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AthenaLowFuelWarning.AthenaLowFuelWarning_C.UnbindDelegates
// (Public, BlueprintCallable, BlueprintEvent)

void UAthenaLowFuelWarning_C::UnbindDelegates()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaLowFuelWarning_C", "UnbindDelegates");

	UObject::ProcessEvent(Func, nullptr);
}

}

