﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CampsiteRequirement_BuyTent

#include "Basic.hpp"

#include "CampsiteRequirement_BuyTent_classes.hpp"
#include "CampsiteRequirement_BuyTent_parameters.hpp"


namespace SDK
{

// Function CampsiteRequirement_BuyTent.CampsiteRequirement_BuyTent_C.IsRequirementMetInternal
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FControllerRequirementTestContextRequestContext                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UCampsiteRequirement_BuyTent_C::IsRequirementMetInternal(const struct FControllerRequirementTestContext& RequestContext) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CampsiteRequirement_BuyTent_C", "IsRequirementMetInternal");

	Params::CampsiteRequirement_BuyTent_C_IsRequirementMetInternal Parms{};

	Parms.RequestContext = std::move(RequestContext);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

