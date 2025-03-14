﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Blueprint_Paper_VIM

#include "Basic.hpp"

#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function Blueprint_Paper_VIM.Blueprint_Paper_VIM_C.AnimGraph
// 0x0010 (0x0010 - 0x0000)
struct Blueprint_Paper_VIM_C_AnimGraph final
{
public:
	struct FPoseLink                              AnimGraph_0;                                       // 0x0000(0x0010)(Parm, OutParm, NoDestructor)
};
static_assert(alignof(Blueprint_Paper_VIM_C_AnimGraph) == 0x000008, "Wrong alignment on Blueprint_Paper_VIM_C_AnimGraph");
static_assert(sizeof(Blueprint_Paper_VIM_C_AnimGraph) == 0x000010, "Wrong size on Blueprint_Paper_VIM_C_AnimGraph");
static_assert(offsetof(Blueprint_Paper_VIM_C_AnimGraph, AnimGraph_0) == 0x000000, "Member 'Blueprint_Paper_VIM_C_AnimGraph::AnimGraph_0' has a wrong offset!");

// Function Blueprint_Paper_VIM.Blueprint_Paper_VIM_C.ExecuteUbergraph_Blueprint_Paper_VIM
// 0x0008 (0x0008 - 0x0000)
struct Blueprint_Paper_VIM_C_ExecuteUbergraph_Blueprint_Paper_VIM final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Add_FloatFloat_ReturnValue;               // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Blueprint_Paper_VIM_C_ExecuteUbergraph_Blueprint_Paper_VIM) == 0x000004, "Wrong alignment on Blueprint_Paper_VIM_C_ExecuteUbergraph_Blueprint_Paper_VIM");
static_assert(sizeof(Blueprint_Paper_VIM_C_ExecuteUbergraph_Blueprint_Paper_VIM) == 0x000008, "Wrong size on Blueprint_Paper_VIM_C_ExecuteUbergraph_Blueprint_Paper_VIM");
static_assert(offsetof(Blueprint_Paper_VIM_C_ExecuteUbergraph_Blueprint_Paper_VIM, EntryPoint) == 0x000000, "Member 'Blueprint_Paper_VIM_C_ExecuteUbergraph_Blueprint_Paper_VIM::EntryPoint' has a wrong offset!");
static_assert(offsetof(Blueprint_Paper_VIM_C_ExecuteUbergraph_Blueprint_Paper_VIM, CallFunc_Add_FloatFloat_ReturnValue) == 0x000004, "Member 'Blueprint_Paper_VIM_C_ExecuteUbergraph_Blueprint_Paper_VIM::CallFunc_Add_FloatFloat_ReturnValue' has a wrong offset!");

}

