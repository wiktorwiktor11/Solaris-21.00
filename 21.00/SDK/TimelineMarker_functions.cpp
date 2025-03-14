﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TimelineMarker

#include "Basic.hpp"

#include "TimelineMarker_classes.hpp"
#include "TimelineMarker_parameters.hpp"


namespace SDK
{

// Function TimelineMarker.TimelineMarker_C.BP_OnHovered
// (Event, Protected, BlueprintEvent)

void UTimelineMarker_C::BP_OnHovered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TimelineMarker_C", "BP_OnHovered");

	UObject::ProcessEvent(Func, nullptr);
}


// Function TimelineMarker.TimelineMarker_C.BP_OnUnhovered
// (Event, Protected, BlueprintEvent)

void UTimelineMarker_C::BP_OnUnhovered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TimelineMarker_C", "BP_OnUnhovered");

	UObject::ProcessEvent(Func, nullptr);
}


// Function TimelineMarker.TimelineMarker_C.ExecuteUbergraph_TimelineMarker
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTimelineMarker_C::ExecuteUbergraph_TimelineMarker(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TimelineMarker_C", "ExecuteUbergraph_TimelineMarker");

	Params::TimelineMarker_C_ExecuteUbergraph_TimelineMarker Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

