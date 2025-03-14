﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Meat_Gadget_Skeleton_AnimBlueprint

#include "Basic.hpp"

#include "Meat_Gadget_Skeleton_AnimBlueprint_classes.hpp"
#include "Meat_Gadget_Skeleton_AnimBlueprint_parameters.hpp"


namespace SDK
{

// Function Meat_Gadget_Skeleton_AnimBlueprint.Meat_Gadget_Skeleton_AnimBlueprint_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                        InPose                                                 (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                        AnimGraph_0                                            (Parm, OutParm, NoDestructor)

void UMeat_Gadget_Skeleton_AnimBlueprint_C::AnimGraph(const struct FPoseLink& InPose, struct FPoseLink* AnimGraph_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Meat_Gadget_Skeleton_AnimBlueprint_C", "AnimGraph");

	Params::Meat_Gadget_Skeleton_AnimBlueprint_C_AnimGraph Parms{};

	Parms.InPose = std::move(InPose);

	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph_0 != nullptr)
		*AnimGraph_0 = std::move(Parms.AnimGraph_0);
}


// Function Meat_Gadget_Skeleton_AnimBlueprint.Meat_Gadget_Skeleton_AnimBlueprint_C.ExecuteUbergraph_Meat_Gadget_Skeleton_AnimBlueprint
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMeat_Gadget_Skeleton_AnimBlueprint_C::ExecuteUbergraph_Meat_Gadget_Skeleton_AnimBlueprint(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Meat_Gadget_Skeleton_AnimBlueprint_C", "ExecuteUbergraph_Meat_Gadget_Skeleton_AnimBlueprint");

	Params::Meat_Gadget_Skeleton_AnimBlueprint_C_ExecuteUbergraph_Meat_Gadget_Skeleton_AnimBlueprint Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

