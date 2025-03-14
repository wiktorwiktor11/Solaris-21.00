﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Continue

#include "Basic.hpp"

#include "Continue_classes.hpp"
#include "Continue_parameters.hpp"


namespace SDK
{

// Function Continue.Continue_C.ExecuteTaskNode
// (BlueprintAuthorityOnly, Event, Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FConversationContext             Context                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// struct FConversationTaskResult          ReturnValue                                            (Parm, OutParm, ReturnParm)

struct FConversationTaskResult UContinue_C::ExecuteTaskNode(const struct FConversationContext& Context) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Continue_C", "ExecuteTaskNode");

	Params::Continue_C_ExecuteTaskNode Parms{};

	Parms.Context = std::move(Context);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

