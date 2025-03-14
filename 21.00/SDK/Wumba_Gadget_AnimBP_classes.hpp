﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Wumba_Gadget_AnimBP

#include "Basic.hpp"

#include "AnimGraphRuntime_structs.hpp"
#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "Wumba_Gadget_AnimBP_structs.hpp"


namespace SDK
{

// AnimBlueprintGeneratedClass Wumba_Gadget_AnimBP.Wumba_Gadget_AnimBP_C
// 0x0470 (0x07C0 - 0x0350)
class UWumba_Gadget_AnimBP_C final : public UAnimInstance
{
public:
	uint8                                         Pad_348[0x8];                                      // 0x0348(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0350(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct Wumba_Gadget_AnimBP::FAnimBlueprintGeneratedMutableData __AnimBlueprintMutables;                           // 0x0358(0x0008)(HasGetValueTypeHash)
	struct FAnimSubsystemInstance                 AnimBlueprintExtension_PropertyAccess;             // 0x0360(0x0008)()
	struct FAnimSubsystemInstance                 AnimBlueprintExtension_Base;                       // 0x0368(0x0008)()
	struct FAnimNode_Root                         AnimGraphNode_Root;                                // 0x0370(0x0020)()
	struct FAnimNode_Slot                         AnimGraphNode_Slot;                                // 0x0390(0x0048)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult;                    // 0x03D8(0x0028)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_3;                    // 0x0400(0x0040)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_3;                       // 0x0440(0x0020)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_2;                    // 0x0460(0x0040)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_2;                       // 0x04A0(0x0020)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_1;                    // 0x04C0(0x0040)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_1;                       // 0x0500(0x0020)()
	struct FAnimNode_StateMachine                 AnimGraphNode_StateMachine_1;                      // 0x0520(0x00B8)()
	struct FAnimNode_ApplyAdditive                AnimGraphNode_ApplyAdditive;                       // 0x05D8(0x00C8)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer;                      // 0x06A0(0x0040)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult;                         // 0x06E0(0x0020)()
	struct FAnimNode_StateMachine                 AnimGraphNode_StateMachine;                        // 0x0700(0x00B8)()
	float                                         PegBoard_Speed;                                    // 0x07B8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bHasFinishedUpgrading;                             // 0x07BC(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void UpdateUpgradingVisuals(bool NewValue);
	void ExecuteUbergraph_Wumba_Gadget_AnimBP(int32 EntryPoint);
	void AnimGraph(struct FPoseLink* AnimGraph_0);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Wumba_Gadget_AnimBP_C">();
	}
	static class UWumba_Gadget_AnimBP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWumba_Gadget_AnimBP_C>();
	}
};
static_assert(alignof(UWumba_Gadget_AnimBP_C) == 0x000010, "Wrong alignment on UWumba_Gadget_AnimBP_C");
static_assert(sizeof(UWumba_Gadget_AnimBP_C) == 0x0007C0, "Wrong size on UWumba_Gadget_AnimBP_C");
static_assert(offsetof(UWumba_Gadget_AnimBP_C, UberGraphFrame) == 0x000350, "Member 'UWumba_Gadget_AnimBP_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWumba_Gadget_AnimBP_C, __AnimBlueprintMutables) == 0x000358, "Member 'UWumba_Gadget_AnimBP_C::__AnimBlueprintMutables' has a wrong offset!");
static_assert(offsetof(UWumba_Gadget_AnimBP_C, AnimBlueprintExtension_PropertyAccess) == 0x000360, "Member 'UWumba_Gadget_AnimBP_C::AnimBlueprintExtension_PropertyAccess' has a wrong offset!");
static_assert(offsetof(UWumba_Gadget_AnimBP_C, AnimBlueprintExtension_Base) == 0x000368, "Member 'UWumba_Gadget_AnimBP_C::AnimBlueprintExtension_Base' has a wrong offset!");
static_assert(offsetof(UWumba_Gadget_AnimBP_C, AnimGraphNode_Root) == 0x000370, "Member 'UWumba_Gadget_AnimBP_C::AnimGraphNode_Root' has a wrong offset!");
static_assert(offsetof(UWumba_Gadget_AnimBP_C, AnimGraphNode_Slot) == 0x000390, "Member 'UWumba_Gadget_AnimBP_C::AnimGraphNode_Slot' has a wrong offset!");
static_assert(offsetof(UWumba_Gadget_AnimBP_C, AnimGraphNode_TransitionResult) == 0x0003D8, "Member 'UWumba_Gadget_AnimBP_C::AnimGraphNode_TransitionResult' has a wrong offset!");
static_assert(offsetof(UWumba_Gadget_AnimBP_C, AnimGraphNode_SequencePlayer_3) == 0x000400, "Member 'UWumba_Gadget_AnimBP_C::AnimGraphNode_SequencePlayer_3' has a wrong offset!");
static_assert(offsetof(UWumba_Gadget_AnimBP_C, AnimGraphNode_StateResult_3) == 0x000440, "Member 'UWumba_Gadget_AnimBP_C::AnimGraphNode_StateResult_3' has a wrong offset!");
static_assert(offsetof(UWumba_Gadget_AnimBP_C, AnimGraphNode_SequencePlayer_2) == 0x000460, "Member 'UWumba_Gadget_AnimBP_C::AnimGraphNode_SequencePlayer_2' has a wrong offset!");
static_assert(offsetof(UWumba_Gadget_AnimBP_C, AnimGraphNode_StateResult_2) == 0x0004A0, "Member 'UWumba_Gadget_AnimBP_C::AnimGraphNode_StateResult_2' has a wrong offset!");
static_assert(offsetof(UWumba_Gadget_AnimBP_C, AnimGraphNode_SequencePlayer_1) == 0x0004C0, "Member 'UWumba_Gadget_AnimBP_C::AnimGraphNode_SequencePlayer_1' has a wrong offset!");
static_assert(offsetof(UWumba_Gadget_AnimBP_C, AnimGraphNode_StateResult_1) == 0x000500, "Member 'UWumba_Gadget_AnimBP_C::AnimGraphNode_StateResult_1' has a wrong offset!");
static_assert(offsetof(UWumba_Gadget_AnimBP_C, AnimGraphNode_StateMachine_1) == 0x000520, "Member 'UWumba_Gadget_AnimBP_C::AnimGraphNode_StateMachine_1' has a wrong offset!");
static_assert(offsetof(UWumba_Gadget_AnimBP_C, AnimGraphNode_ApplyAdditive) == 0x0005D8, "Member 'UWumba_Gadget_AnimBP_C::AnimGraphNode_ApplyAdditive' has a wrong offset!");
static_assert(offsetof(UWumba_Gadget_AnimBP_C, AnimGraphNode_SequencePlayer) == 0x0006A0, "Member 'UWumba_Gadget_AnimBP_C::AnimGraphNode_SequencePlayer' has a wrong offset!");
static_assert(offsetof(UWumba_Gadget_AnimBP_C, AnimGraphNode_StateResult) == 0x0006E0, "Member 'UWumba_Gadget_AnimBP_C::AnimGraphNode_StateResult' has a wrong offset!");
static_assert(offsetof(UWumba_Gadget_AnimBP_C, AnimGraphNode_StateMachine) == 0x000700, "Member 'UWumba_Gadget_AnimBP_C::AnimGraphNode_StateMachine' has a wrong offset!");
static_assert(offsetof(UWumba_Gadget_AnimBP_C, PegBoard_Speed) == 0x0007B8, "Member 'UWumba_Gadget_AnimBP_C::PegBoard_Speed' has a wrong offset!");
static_assert(offsetof(UWumba_Gadget_AnimBP_C, bHasFinishedUpgrading) == 0x0007BC, "Member 'UWumba_Gadget_AnimBP_C::bHasFinishedUpgrading' has a wrong offset!");

}

