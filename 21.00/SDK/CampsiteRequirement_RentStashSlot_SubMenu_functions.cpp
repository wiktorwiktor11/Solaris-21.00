﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CampsiteRequirement_RentStashSlot_SubMenu

#include "Basic.hpp"

#include "CampsiteRequirement_RentStashSlot_SubMenu_classes.hpp"
#include "CampsiteRequirement_RentStashSlot_SubMenu_parameters.hpp"


namespace SDK
{

// Function CampsiteRequirement_RentStashSlot_SubMenu.CampsiteRequirement_RentStashSlot_SubMenu_C.IsRequirementSatisfied
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FConversationContext             Context                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// EConversationRequirementResult          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

EConversationRequirementResult UCampsiteRequirement_RentStashSlot_SubMenu_C::IsRequirementSatisfied(const struct FConversationContext& Context) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CampsiteRequirement_RentStashSlot_SubMenu_C", "IsRequirementSatisfied");

	Params::CampsiteRequirement_RentStashSlot_SubMenu_C_IsRequirementSatisfied Parms{};

	Parms.Context = std::move(Context);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

