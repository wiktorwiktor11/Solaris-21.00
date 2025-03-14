﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: RepairTool_Animbp

#include "Basic.hpp"

#include "RepairTool_Animbp_classes.hpp"
#include "RepairTool_Animbp_parameters.hpp"


namespace SDK
{

// Function RepairTool_Animbp.RepairTool_Animbp_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                        AnimGraph_0                                            (Parm, OutParm, NoDestructor)

void URepairTool_Animbp_C::AnimGraph(struct FPoseLink* AnimGraph_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RepairTool_Animbp_C", "AnimGraph");

	Params::RepairTool_Animbp_C_AnimGraph Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph_0 != nullptr)
		*AnimGraph_0 = std::move(Parms.AnimGraph_0);
}


// Function RepairTool_Animbp.RepairTool_Animbp_C.ExecuteUbergraph_RepairTool_Animbp
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void URepairTool_Animbp_C::ExecuteUbergraph_RepairTool_Animbp(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RepairTool_Animbp_C", "ExecuteUbergraph_RepairTool_Animbp");

	Params::RepairTool_Animbp_C_ExecuteUbergraph_RepairTool_Animbp Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

