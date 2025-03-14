﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MatchXPTotalEntry

#include "Basic.hpp"

#include "MatchXPTotalEntry_classes.hpp"
#include "MatchXPTotalEntry_parameters.hpp"


namespace SDK
{

// Function MatchXPTotalEntry.MatchXPTotalEntry_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UMatchXPTotalEntry_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MatchXPTotalEntry_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MatchXPTotalEntry.MatchXPTotalEntry_C.ExecuteUbergraph_MatchXPTotalEntry
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMatchXPTotalEntry_C::ExecuteUbergraph_MatchXPTotalEntry(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MatchXPTotalEntry_C", "ExecuteUbergraph_MatchXPTotalEntry");

	Params::MatchXPTotalEntry_C_ExecuteUbergraph_MatchXPTotalEntry Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MatchXPTotalEntry.MatchXPTotalEntry_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMatchXPTotalEntry_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MatchXPTotalEntry_C", "PreConstruct");

	Params::MatchXPTotalEntry_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MatchXPTotalEntry.MatchXPTotalEntry_C.ResetAnim
// (BlueprintCallable, BlueprintEvent)

void UMatchXPTotalEntry_C::ResetAnim()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MatchXPTotalEntry_C", "ResetAnim");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MatchXPTotalEntry.MatchXPTotalEntry_C.StartIntro
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   InitialDelay                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMatchXPTotalEntry_C::StartIntro(float InitialDelay)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MatchXPTotalEntry_C", "StartIntro");

	Params::MatchXPTotalEntry_C_StartIntro Parms{};

	Parms.InitialDelay = InitialDelay;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MatchXPTotalEntry.MatchXPTotalEntry_C.StopXPAudio
// (BlueprintCallable, BlueprintEvent)

void UMatchXPTotalEntry_C::StopXPAudio()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MatchXPTotalEntry_C", "StopXPAudio");

	UObject::ProcessEvent(Func, nullptr);
}

}

