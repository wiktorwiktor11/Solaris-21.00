﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: FortFeatUpdateEntry

#include "Basic.hpp"

#include "FortFeatUpdateEntry_classes.hpp"
#include "FortFeatUpdateEntry_parameters.hpp"


namespace SDK
{

// Function FortFeatUpdateEntry.FortFeatUpdateEntry_C.ExecuteUbergraph_FortFeatUpdateEntry
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFortFeatUpdateEntry_C::ExecuteUbergraph_FortFeatUpdateEntry(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortFeatUpdateEntry_C", "ExecuteUbergraph_FortFeatUpdateEntry");

	Params::FortFeatUpdateEntry_C_ExecuteUbergraph_FortFeatUpdateEntry Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function FortFeatUpdateEntry.FortFeatUpdateEntry_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UFortFeatUpdateEntry_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortFeatUpdateEntry_C", "OnInitialized");

	UObject::ProcessEvent(Func, nullptr);
}


// Function FortFeatUpdateEntry.FortFeatUpdateEntry_C.StartQuestIntro
// (Event, Public, BlueprintEvent)

void UFortFeatUpdateEntry_C::StartQuestIntro()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortFeatUpdateEntry_C", "StartQuestIntro");

	UObject::ProcessEvent(Func, nullptr);
}

}

