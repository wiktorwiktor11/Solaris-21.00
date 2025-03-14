﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: NiagaraAnimNotifies

#include "Basic.hpp"


namespace SDK
{

// ScriptStruct NiagaraAnimNotifies.CurveParameterPair
// 0x0008 (0x0008 - 0x0000)
struct FCurveParameterPair final
{
public:
	class FName                                   AnimCurveName;                                     // 0x0000(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                   UserVariableName;                                  // 0x0004(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FCurveParameterPair) == 0x000004, "Wrong alignment on FCurveParameterPair");
static_assert(sizeof(FCurveParameterPair) == 0x000008, "Wrong size on FCurveParameterPair");
static_assert(offsetof(FCurveParameterPair, AnimCurveName) == 0x000000, "Member 'FCurveParameterPair::AnimCurveName' has a wrong offset!");
static_assert(offsetof(FCurveParameterPair, UserVariableName) == 0x000004, "Member 'FCurveParameterPair::UserVariableName' has a wrong offset!");

}

