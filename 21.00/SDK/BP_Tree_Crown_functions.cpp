﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Tree_Crown

#include "Basic.hpp"

#include "BP_Tree_Crown_classes.hpp"
#include "BP_Tree_Crown_parameters.hpp"


namespace SDK
{

// Function BP_Tree_Crown.BP_Tree_Crown_C.ExecuteUbergraph_BP_Tree_Crown
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Tree_Crown_C::ExecuteUbergraph_BP_Tree_Crown(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Tree_Crown_C", "ExecuteUbergraph_BP_Tree_Crown");

	Params::BP_Tree_Crown_C_ExecuteUbergraph_BP_Tree_Crown Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Tree_Crown.BP_Tree_Crown_C.FallingTreeTop__FinishedFunc
// (BlueprintEvent)

void ABP_Tree_Crown_C::FallingTreeTop__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Tree_Crown_C", "FallingTreeTop__FinishedFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Tree_Crown.BP_Tree_Crown_C.FallingTreeTop__UpdateFunc
// (BlueprintEvent)

void ABP_Tree_Crown_C::FallingTreeTop__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Tree_Crown_C", "FallingTreeTop__UpdateFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Tree_Crown.BP_Tree_Crown_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_Tree_Crown_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Tree_Crown_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Tree_Crown.BP_Tree_Crown_C.Set NSTree Info
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   AxisRotationAngle_0                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   MinHeight_0                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   MaxHeight_0                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   BendAngle_0                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          FallVector_0                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Tree_Crown_C::Set_NSTree_Info(const float AxisRotationAngle_0, const float MinHeight_0, const float MaxHeight_0, const float BendAngle_0, const struct FVector& FallVector_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Tree_Crown_C", "Set NSTree Info");

	Params::BP_Tree_Crown_C_Set_NSTree_Info Parms{};

	Parms.AxisRotationAngle_0 = AxisRotationAngle_0;
	Parms.MinHeight_0 = MinHeight_0;
	Parms.MaxHeight_0 = MaxHeight_0;
	Parms.BendAngle_0 = BendAngle_0;
	Parms.FallVector_0 = std::move(FallVector_0);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Tree_Crown.BP_Tree_Crown_C.UpdateTreeData
// (BlueprintCallable, BlueprintEvent)

void ABP_Tree_Crown_C::UpdateTreeData()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Tree_Crown_C", "UpdateTreeData");

	UObject::ProcessEvent(Func, nullptr);
}

}

