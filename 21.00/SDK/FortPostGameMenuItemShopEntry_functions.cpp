﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: FortPostGameMenuItemShopEntry

#include "Basic.hpp"

#include "FortPostGameMenuItemShopEntry_classes.hpp"
#include "FortPostGameMenuItemShopEntry_parameters.hpp"


namespace SDK
{

// Function FortPostGameMenuItemShopEntry.FortPostGameMenuItemShopEntry_C.BP_OnHovered
// (Event, Protected, BlueprintEvent)

void UFortPostGameMenuItemShopEntry_C::BP_OnHovered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortPostGameMenuItemShopEntry_C", "BP_OnHovered");

	UObject::ProcessEvent(Func, nullptr);
}


// Function FortPostGameMenuItemShopEntry.FortPostGameMenuItemShopEntry_C.BP_OnUnhovered
// (Event, Protected, BlueprintEvent)

void UFortPostGameMenuItemShopEntry_C::BP_OnUnhovered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortPostGameMenuItemShopEntry_C", "BP_OnUnhovered");

	UObject::ProcessEvent(Func, nullptr);
}


// Function FortPostGameMenuItemShopEntry.FortPostGameMenuItemShopEntry_C.ExecuteUbergraph_FortPostGameMenuItemShopEntry
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFortPostGameMenuItemShopEntry_C::ExecuteUbergraph_FortPostGameMenuItemShopEntry(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortPostGameMenuItemShopEntry_C", "ExecuteUbergraph_FortPostGameMenuItemShopEntry");

	Params::FortPostGameMenuItemShopEntry_C_ExecuteUbergraph_FortPostGameMenuItemShopEntry Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

