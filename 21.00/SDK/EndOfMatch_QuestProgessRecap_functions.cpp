﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: EndOfMatch_QuestProgessRecap

#include "Basic.hpp"

#include "EndOfMatch_QuestProgessRecap_classes.hpp"
#include "EndOfMatch_QuestProgessRecap_parameters.hpp"


namespace SDK
{

// Function EndOfMatch_QuestProgessRecap.EndOfMatch_QuestProgessRecap_C.ExecuteUbergraph_EndOfMatch_QuestProgessRecap
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEndOfMatch_QuestProgessRecap_C::ExecuteUbergraph_EndOfMatch_QuestProgessRecap(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EndOfMatch_QuestProgessRecap_C", "ExecuteUbergraph_EndOfMatch_QuestProgessRecap");

	Params::EndOfMatch_QuestProgessRecap_C_ExecuteUbergraph_EndOfMatch_QuestProgessRecap Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function EndOfMatch_QuestProgessRecap.EndOfMatch_QuestProgessRecap_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEndOfMatch_QuestProgessRecap_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EndOfMatch_QuestProgessRecap_C", "PreConstruct");

	Params::EndOfMatch_QuestProgessRecap_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function EndOfMatch_QuestProgessRecap.EndOfMatch_QuestProgessRecap_C.RunIntroAnim
// (Event, Public, BlueprintEvent)

void UEndOfMatch_QuestProgessRecap_C::RunIntroAnim()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EndOfMatch_QuestProgessRecap_C", "RunIntroAnim");

	UObject::ProcessEvent(Func, nullptr);
}

}

