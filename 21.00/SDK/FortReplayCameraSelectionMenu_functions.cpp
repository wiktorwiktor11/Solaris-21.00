﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: FortReplayCameraSelectionMenu

#include "Basic.hpp"

#include "FortReplayCameraSelectionMenu_classes.hpp"
#include "FortReplayCameraSelectionMenu_parameters.hpp"


namespace SDK
{

// Function FortReplayCameraSelectionMenu.FortReplayCameraSelectionMenu_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UFortReplayCameraSelectionMenu_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortReplayCameraSelectionMenu_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function FortReplayCameraSelectionMenu.FortReplayCameraSelectionMenu_C.ExecuteUbergraph_FortReplayCameraSelectionMenu
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFortReplayCameraSelectionMenu_C::ExecuteUbergraph_FortReplayCameraSelectionMenu(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortReplayCameraSelectionMenu_C", "ExecuteUbergraph_FortReplayCameraSelectionMenu");

	Params::FortReplayCameraSelectionMenu_C_ExecuteUbergraph_FortReplayCameraSelectionMenu Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

