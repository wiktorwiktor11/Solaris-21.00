﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CampsiteRequirement_HotfixEnabled

#include "Basic.hpp"

#include "FortniteGame_structs.hpp"


namespace SDK::Params
{

// Function CampsiteRequirement_HotfixEnabled.CampsiteRequirement_HotfixEnabled_C.IsRequirementMetInternal
// 0x0028 (0x0028 - 0x0000)
struct CampsiteRequirement_HotfixEnabled_C_IsRequirementMetInternal final
{
public:
	struct FControllerRequirementTestContext      RequestContext;                                    // 0x0000(0x0020)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	bool                                          ReturnValue;                                       // 0x0020(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetValueAsBool_ReturnValue;               // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CampsiteRequirement_HotfixEnabled_C_IsRequirementMetInternal) == 0x000008, "Wrong alignment on CampsiteRequirement_HotfixEnabled_C_IsRequirementMetInternal");
static_assert(sizeof(CampsiteRequirement_HotfixEnabled_C_IsRequirementMetInternal) == 0x000028, "Wrong size on CampsiteRequirement_HotfixEnabled_C_IsRequirementMetInternal");
static_assert(offsetof(CampsiteRequirement_HotfixEnabled_C_IsRequirementMetInternal, RequestContext) == 0x000000, "Member 'CampsiteRequirement_HotfixEnabled_C_IsRequirementMetInternal::RequestContext' has a wrong offset!");
static_assert(offsetof(CampsiteRequirement_HotfixEnabled_C_IsRequirementMetInternal, ReturnValue) == 0x000020, "Member 'CampsiteRequirement_HotfixEnabled_C_IsRequirementMetInternal::ReturnValue' has a wrong offset!");
static_assert(offsetof(CampsiteRequirement_HotfixEnabled_C_IsRequirementMetInternal, CallFunc_GetValueAsBool_ReturnValue) == 0x000021, "Member 'CampsiteRequirement_HotfixEnabled_C_IsRequirementMetInternal::CallFunc_GetValueAsBool_ReturnValue' has a wrong offset!");

}

