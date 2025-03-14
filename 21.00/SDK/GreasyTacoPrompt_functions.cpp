﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GreasyTacoPrompt

#include "Basic.hpp"

#include "GreasyTacoPrompt_classes.hpp"
#include "GreasyTacoPrompt_parameters.hpp"


namespace SDK
{

// Function GreasyTacoPrompt.GreasyTacoPrompt_C.CloseWidget
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UGreasyTacoPrompt_C::CloseWidget()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GreasyTacoPrompt_C", "CloseWidget");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GreasyTacoPrompt.GreasyTacoPrompt_C.ExecuteUbergraph_GreasyTacoPrompt
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGreasyTacoPrompt_C::ExecuteUbergraph_GreasyTacoPrompt(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GreasyTacoPrompt_C", "ExecuteUbergraph_GreasyTacoPrompt");

	Params::GreasyTacoPrompt_C_ExecuteUbergraph_GreasyTacoPrompt Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GreasyTacoPrompt.GreasyTacoPrompt_C.OpenWidget
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FFortHUDTagPromptData            PrompData                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UGreasyTacoPrompt_C::OpenWidget(const struct FFortHUDTagPromptData& PrompData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GreasyTacoPrompt_C", "OpenWidget");

	Params::GreasyTacoPrompt_C_OpenWidget Parms{};

	Parms.PrompData = std::move(PrompData);

	UObject::ProcessEvent(Func, &Parms);
}

}

