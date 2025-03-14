﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SK_ChillBronco_AnimBP

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "AnimGraphRuntime_structs.hpp"


namespace SDK
{

// AnimBlueprintGeneratedClass SK_ChillBronco_AnimBP.SK_ChillBronco_AnimBP_C
// 0x1100 (0x1450 - 0x0350)
class USK_ChillBronco_AnimBP_C final : public UAnimInstance
{
public:
	uint8                                         Pad_348[0x8];                                      // 0x0348(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0350(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimSubsystemInstance                 AnimBlueprintExtension_PropertyAccess;             // 0x0358(0x0008)()
	struct FAnimSubsystemInstance                 AnimBlueprintExtension_Base;                       // 0x0360(0x0008)()
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;               // 0x0368(0x0020)()
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;               // 0x0388(0x0020)()
	uint8                                         Pad_3A8[0x8];                                      // 0x03A8(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FAnimNode_AnimDynamics                 AnimGraphNode_AnimDynamics;                        // 0x03B0(0x0510)()
	struct FAnimNode_LinkedInputPose              AnimGraphNode_SubInput;                            // 0x08C0(0x00C0)()
	struct FAnimNode_Root                         AnimGraphNode_Root;                                // 0x0980(0x0020)()
	struct FAnimNode_RigidBody                    AnimGraphNode_RigidBody;                           // 0x09A0(0x0980)()
	struct FAnimNode_ModifyBone                   AnimGraphNode_ModifyBone;                          // 0x1320(0x0128)()

public:
	void AnimGraph(const struct FPoseLink& InPose, struct FPoseLink* AnimGraph_0);
	void ExecuteUbergraph_SK_ChillBronco_AnimBP(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SK_ChillBronco_AnimBP_C">();
	}
	static class USK_ChillBronco_AnimBP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USK_ChillBronco_AnimBP_C>();
	}
};
static_assert(alignof(USK_ChillBronco_AnimBP_C) == 0x000010, "Wrong alignment on USK_ChillBronco_AnimBP_C");
static_assert(sizeof(USK_ChillBronco_AnimBP_C) == 0x001450, "Wrong size on USK_ChillBronco_AnimBP_C");
static_assert(offsetof(USK_ChillBronco_AnimBP_C, UberGraphFrame) == 0x000350, "Member 'USK_ChillBronco_AnimBP_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(USK_ChillBronco_AnimBP_C, AnimBlueprintExtension_PropertyAccess) == 0x000358, "Member 'USK_ChillBronco_AnimBP_C::AnimBlueprintExtension_PropertyAccess' has a wrong offset!");
static_assert(offsetof(USK_ChillBronco_AnimBP_C, AnimBlueprintExtension_Base) == 0x000360, "Member 'USK_ChillBronco_AnimBP_C::AnimBlueprintExtension_Base' has a wrong offset!");
static_assert(offsetof(USK_ChillBronco_AnimBP_C, AnimGraphNode_ComponentToLocalSpace) == 0x000368, "Member 'USK_ChillBronco_AnimBP_C::AnimGraphNode_ComponentToLocalSpace' has a wrong offset!");
static_assert(offsetof(USK_ChillBronco_AnimBP_C, AnimGraphNode_LocalToComponentSpace) == 0x000388, "Member 'USK_ChillBronco_AnimBP_C::AnimGraphNode_LocalToComponentSpace' has a wrong offset!");
static_assert(offsetof(USK_ChillBronco_AnimBP_C, AnimGraphNode_AnimDynamics) == 0x0003B0, "Member 'USK_ChillBronco_AnimBP_C::AnimGraphNode_AnimDynamics' has a wrong offset!");
static_assert(offsetof(USK_ChillBronco_AnimBP_C, AnimGraphNode_SubInput) == 0x0008C0, "Member 'USK_ChillBronco_AnimBP_C::AnimGraphNode_SubInput' has a wrong offset!");
static_assert(offsetof(USK_ChillBronco_AnimBP_C, AnimGraphNode_Root) == 0x000980, "Member 'USK_ChillBronco_AnimBP_C::AnimGraphNode_Root' has a wrong offset!");
static_assert(offsetof(USK_ChillBronco_AnimBP_C, AnimGraphNode_RigidBody) == 0x0009A0, "Member 'USK_ChillBronco_AnimBP_C::AnimGraphNode_RigidBody' has a wrong offset!");
static_assert(offsetof(USK_ChillBronco_AnimBP_C, AnimGraphNode_ModifyBone) == 0x001320, "Member 'USK_ChillBronco_AnimBP_C::AnimGraphNode_ModifyBone' has a wrong offset!");

}

