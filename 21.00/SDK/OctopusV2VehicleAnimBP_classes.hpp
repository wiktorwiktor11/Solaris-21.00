﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: OctopusV2VehicleAnimBP

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "OctopusV2VehicleAnimBP_structs.hpp"
#include "AnimGraphRuntime_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "FortniteGame_classes.hpp"


namespace SDK
{

// AnimBlueprintGeneratedClass OctopusV2VehicleAnimBP.OctopusV2VehicleAnimBP_C
// 0x0F70 (0x15E0 - 0x0670)
class UOctopusV2VehicleAnimBP_C final : public UFortOctopusVehicleAnimInstance
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0670(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct OctopusV2VehicleAnimBP::FAnimBlueprintGeneratedMutableData __AnimBlueprintMutables;                           // 0x0678(0x000C)(HasGetValueTypeHash)
	uint8                                         Pad_684[0x4];                                      // 0x0684(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FAnimSubsystemInstance                 AnimBlueprintExtension_PropertyAccess;             // 0x0688(0x0008)()
	struct FAnimSubsystemInstance                 AnimBlueprintExtension_Base;                       // 0x0690(0x0008)()
	struct FAnimNode_Root                         AnimGraphNode_Root;                                // 0x0698(0x0020)()
	struct FAnimNode_ModifyBone                   AnimGraphNode_ModifyBone_3;                        // 0x06B8(0x0128)()
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;               // 0x07E0(0x0020)()
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;               // 0x0800(0x0020)()
	struct FAnimNode_ModifyBone                   AnimGraphNode_ModifyBone_2;                        // 0x0820(0x0128)()
	struct FAnimNode_ModifyBone                   AnimGraphNode_ModifyBone_1;                        // 0x0948(0x0128)()
	struct FAnimNode_ModifyBone                   AnimGraphNode_ModifyBone;                          // 0x0A70(0x0128)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_19;                 // 0x0B98(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_18;                 // 0x0BC0(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_17;                 // 0x0BE8(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_16;                 // 0x0C10(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_15;                 // 0x0C38(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_14;                 // 0x0C60(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_13;                 // 0x0C88(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_12;                 // 0x0CB0(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_11;                 // 0x0CD8(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_10;                 // 0x0D00(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_9;                  // 0x0D28(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_8;                  // 0x0D50(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_7;                  // 0x0D78(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_6;                  // 0x0DA0(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_5;                  // 0x0DC8(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_4;                  // 0x0DF0(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_3;                  // 0x0E18(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_2;                  // 0x0E40(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_1;                  // 0x0E68(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult;                    // 0x0E90(0x0028)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_10;                   // 0x0EB8(0x0040)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_7;                       // 0x0EF8(0x0020)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_9;                    // 0x0F18(0x0040)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_8;                    // 0x0F58(0x0040)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_7;                    // 0x0F98(0x0040)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_6;                    // 0x0FD8(0x0040)()
	struct FAnimNode_BlendListByEnum              AnimGraphNode_BlendListByEnum;                     // 0x1018(0x0048)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_6;                       // 0x1060(0x0020)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_1;                     // 0x1080(0x0028)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_5;                       // 0x10A8(0x0020)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_5;                    // 0x10C8(0x0040)()
	struct FAnimNode_BlendListByBool              AnimGraphNode_BlendListByBool_1;                   // 0x1108(0x0048)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_4;                    // 0x1150(0x0040)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_4;                       // 0x1190(0x0020)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_3;                    // 0x11B0(0x0040)()
	struct FAnimNode_BlendListByBool              AnimGraphNode_BlendListByBool;                     // 0x11F0(0x0048)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_2;                    // 0x1238(0x0040)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_3;                       // 0x1278(0x0020)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_1;                    // 0x1298(0x0040)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_2;                       // 0x12D8(0x0020)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer;                      // 0x12F8(0x0040)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_1;                       // 0x1338(0x0020)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose;                       // 0x1358(0x0028)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult;                         // 0x1380(0x0020)()
	struct FAnimNode_StateMachine                 AnimGraphNode_StateMachine;                        // 0x13A0(0x00B8)()
	struct FAnimNode_BlendSpacePlayer             AnimGraphNode_BlendSpacePlayer;                    // 0x1458(0x0068)()
	struct FAnimNode_SaveCachedPose               AnimGraphNode_SaveCachedPose;                      // 0x14C0(0x0100)()
	struct FVector                                PlungerScaleVector;                                // 0x15C0(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void AnimGraph(struct FPoseLink* AnimGraph_0);
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void ExecuteUbergraph_OctopusV2VehicleAnimBP(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"OctopusV2VehicleAnimBP_C">();
	}
	static class UOctopusV2VehicleAnimBP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UOctopusV2VehicleAnimBP_C>();
	}
};
static_assert(alignof(UOctopusV2VehicleAnimBP_C) == 0x000010, "Wrong alignment on UOctopusV2VehicleAnimBP_C");
static_assert(sizeof(UOctopusV2VehicleAnimBP_C) == 0x0015E0, "Wrong size on UOctopusV2VehicleAnimBP_C");
static_assert(offsetof(UOctopusV2VehicleAnimBP_C, UberGraphFrame) == 0x000670, "Member 'UOctopusV2VehicleAnimBP_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UOctopusV2VehicleAnimBP_C, __AnimBlueprintMutables) == 0x000678, "Member 'UOctopusV2VehicleAnimBP_C::__AnimBlueprintMutables' has a wrong offset!");
static_assert(offsetof(UOctopusV2VehicleAnimBP_C, AnimBlueprintExtension_PropertyAccess) == 0x000688, "Member 'UOctopusV2VehicleAnimBP_C::AnimBlueprintExtension_PropertyAccess' has a wrong offset!");
static_assert(offsetof(UOctopusV2VehicleAnimBP_C, AnimBlueprintExtension_Base) == 0x000690, "Member 'UOctopusV2VehicleAnimBP_C::AnimBlueprintExtension_Base' has a wrong offset!");
static_assert(offsetof(UOctopusV2VehicleAnimBP_C, AnimGraphNode_Root) == 0x000698, "Member 'UOctopusV2VehicleAnimBP_C::AnimGraphNode_Root' has a wrong offset!");
static_assert(offsetof(UOctopusV2VehicleAnimBP_C, AnimGraphNode_ModifyBone_3) == 0x0006B8, "Member 'UOctopusV2VehicleAnimBP_C::AnimGraphNode_ModifyBone_3' has a wrong offset!");
static_assert(offsetof(UOctopusV2VehicleAnimBP_C, AnimGraphNode_LocalToComponentSpace) == 0x0007E0, "Member 'UOctopusV2VehicleAnimBP_C::AnimGraphNode_LocalToComponentSpace' has a wrong offset!");
static_assert(offsetof(UOctopusV2VehicleAnimBP_C, AnimGraphNode_ComponentToLocalSpace) == 0x000800, "Member 'UOctopusV2VehicleAnimBP_C::AnimGraphNode_ComponentToLocalSpace' has a wrong offset!");
static_assert(offsetof(UOctopusV2VehicleAnimBP_C, AnimGraphNode_ModifyBone_2) == 0x000820, "Member 'UOctopusV2VehicleAnimBP_C::AnimGraphNode_ModifyBone_2' has a wrong offset!");
static_assert(offsetof(UOctopusV2VehicleAnimBP_C, AnimGraphNode_ModifyBone_1) == 0x000948, "Member 'UOctopusV2VehicleAnimBP_C::AnimGraphNode_ModifyBone_1' has a wrong offset!");
static_assert(offsetof(UOctopusV2VehicleAnimBP_C, AnimGraphNode_ModifyBone) == 0x000A70, "Member 'UOctopusV2VehicleAnimBP_C::AnimGraphNode_ModifyBone' has a wrong offset!");
static_assert(offsetof(UOctopusV2VehicleAnimBP_C, AnimGraphNode_TransitionResult_19) == 0x000B98, "Member 'UOctopusV2VehicleAnimBP_C::AnimGraphNode_TransitionResult_19' has a wrong offset!");
static_assert(offsetof(UOctopusV2VehicleAnimBP_C, AnimGraphNode_TransitionResult_18) == 0x000BC0, "Member 'UOctopusV2VehicleAnimBP_C::AnimGraphNode_TransitionResult_18' has a wrong offset!");
static_assert(offsetof(UOctopusV2VehicleAnimBP_C, AnimGraphNode_TransitionResult_17) == 0x000BE8, "Member 'UOctopusV2VehicleAnimBP_C::AnimGraphNode_TransitionResult_17' has a wrong offset!");
static_assert(offsetof(UOctopusV2VehicleAnimBP_C, AnimGraphNode_TransitionResult_16) == 0x000C10, "Member 'UOctopusV2VehicleAnimBP_C::AnimGraphNode_TransitionResult_16' has a wrong offset!");
static_assert(offsetof(UOctopusV2VehicleAnimBP_C, AnimGraphNode_TransitionResult_15) == 0x000C38, "Member 'UOctopusV2VehicleAnimBP_C::AnimGraphNode_TransitionResult_15' has a wrong offset!");
static_assert(offsetof(UOctopusV2VehicleAnimBP_C, AnimGraphNode_TransitionResult_14) == 0x000C60, "Member 'UOctopusV2VehicleAnimBP_C::AnimGraphNode_TransitionResult_14' has a wrong offset!");
static_assert(offsetof(UOctopusV2VehicleAnimBP_C, AnimGraphNode_TransitionResult_13) == 0x000C88, "Member 'UOctopusV2VehicleAnimBP_C::AnimGraphNode_TransitionResult_13' has a wrong offset!");
static_assert(offsetof(UOctopusV2VehicleAnimBP_C, AnimGraphNode_TransitionResult_12) == 0x000CB0, "Member 'UOctopusV2VehicleAnimBP_C::AnimGraphNode_TransitionResult_12' has a wrong offset!");
static_assert(offsetof(UOctopusV2VehicleAnimBP_C, AnimGraphNode_TransitionResult_11) == 0x000CD8, "Member 'UOctopusV2VehicleAnimBP_C::AnimGraphNode_TransitionResult_11' has a wrong offset!");
static_assert(offsetof(UOctopusV2VehicleAnimBP_C, AnimGraphNode_TransitionResult_10) == 0x000D00, "Member 'UOctopusV2VehicleAnimBP_C::AnimGraphNode_TransitionResult_10' has a wrong offset!");
static_assert(offsetof(UOctopusV2VehicleAnimBP_C, AnimGraphNode_TransitionResult_9) == 0x000D28, "Member 'UOctopusV2VehicleAnimBP_C::AnimGraphNode_TransitionResult_9' has a wrong offset!");
static_assert(offsetof(UOctopusV2VehicleAnimBP_C, AnimGraphNode_TransitionResult_8) == 0x000D50, "Member 'UOctopusV2VehicleAnimBP_C::AnimGraphNode_TransitionResult_8' has a wrong offset!");
static_assert(offsetof(UOctopusV2VehicleAnimBP_C, AnimGraphNode_TransitionResult_7) == 0x000D78, "Member 'UOctopusV2VehicleAnimBP_C::AnimGraphNode_TransitionResult_7' has a wrong offset!");
static_assert(offsetof(UOctopusV2VehicleAnimBP_C, AnimGraphNode_TransitionResult_6) == 0x000DA0, "Member 'UOctopusV2VehicleAnimBP_C::AnimGraphNode_TransitionResult_6' has a wrong offset!");
static_assert(offsetof(UOctopusV2VehicleAnimBP_C, AnimGraphNode_TransitionResult_5) == 0x000DC8, "Member 'UOctopusV2VehicleAnimBP_C::AnimGraphNode_TransitionResult_5' has a wrong offset!");
static_assert(offsetof(UOctopusV2VehicleAnimBP_C, AnimGraphNode_TransitionResult_4) == 0x000DF0, "Member 'UOctopusV2VehicleAnimBP_C::AnimGraphNode_TransitionResult_4' has a wrong offset!");
static_assert(offsetof(UOctopusV2VehicleAnimBP_C, AnimGraphNode_TransitionResult_3) == 0x000E18, "Member 'UOctopusV2VehicleAnimBP_C::AnimGraphNode_TransitionResult_3' has a wrong offset!");
static_assert(offsetof(UOctopusV2VehicleAnimBP_C, AnimGraphNode_TransitionResult_2) == 0x000E40, "Member 'UOctopusV2VehicleAnimBP_C::AnimGraphNode_TransitionResult_2' has a wrong offset!");
static_assert(offsetof(UOctopusV2VehicleAnimBP_C, AnimGraphNode_TransitionResult_1) == 0x000E68, "Member 'UOctopusV2VehicleAnimBP_C::AnimGraphNode_TransitionResult_1' has a wrong offset!");
static_assert(offsetof(UOctopusV2VehicleAnimBP_C, AnimGraphNode_TransitionResult) == 0x000E90, "Member 'UOctopusV2VehicleAnimBP_C::AnimGraphNode_TransitionResult' has a wrong offset!");
static_assert(offsetof(UOctopusV2VehicleAnimBP_C, AnimGraphNode_SequencePlayer_10) == 0x000EB8, "Member 'UOctopusV2VehicleAnimBP_C::AnimGraphNode_SequencePlayer_10' has a wrong offset!");
static_assert(offsetof(UOctopusV2VehicleAnimBP_C, AnimGraphNode_StateResult_7) == 0x000EF8, "Member 'UOctopusV2VehicleAnimBP_C::AnimGraphNode_StateResult_7' has a wrong offset!");
static_assert(offsetof(UOctopusV2VehicleAnimBP_C, AnimGraphNode_SequencePlayer_9) == 0x000F18, "Member 'UOctopusV2VehicleAnimBP_C::AnimGraphNode_SequencePlayer_9' has a wrong offset!");
static_assert(offsetof(UOctopusV2VehicleAnimBP_C, AnimGraphNode_SequencePlayer_8) == 0x000F58, "Member 'UOctopusV2VehicleAnimBP_C::AnimGraphNode_SequencePlayer_8' has a wrong offset!");
static_assert(offsetof(UOctopusV2VehicleAnimBP_C, AnimGraphNode_SequencePlayer_7) == 0x000F98, "Member 'UOctopusV2VehicleAnimBP_C::AnimGraphNode_SequencePlayer_7' has a wrong offset!");
static_assert(offsetof(UOctopusV2VehicleAnimBP_C, AnimGraphNode_SequencePlayer_6) == 0x000FD8, "Member 'UOctopusV2VehicleAnimBP_C::AnimGraphNode_SequencePlayer_6' has a wrong offset!");
static_assert(offsetof(UOctopusV2VehicleAnimBP_C, AnimGraphNode_BlendListByEnum) == 0x001018, "Member 'UOctopusV2VehicleAnimBP_C::AnimGraphNode_BlendListByEnum' has a wrong offset!");
static_assert(offsetof(UOctopusV2VehicleAnimBP_C, AnimGraphNode_StateResult_6) == 0x001060, "Member 'UOctopusV2VehicleAnimBP_C::AnimGraphNode_StateResult_6' has a wrong offset!");
static_assert(offsetof(UOctopusV2VehicleAnimBP_C, AnimGraphNode_UseCachedPose_1) == 0x001080, "Member 'UOctopusV2VehicleAnimBP_C::AnimGraphNode_UseCachedPose_1' has a wrong offset!");
static_assert(offsetof(UOctopusV2VehicleAnimBP_C, AnimGraphNode_StateResult_5) == 0x0010A8, "Member 'UOctopusV2VehicleAnimBP_C::AnimGraphNode_StateResult_5' has a wrong offset!");
static_assert(offsetof(UOctopusV2VehicleAnimBP_C, AnimGraphNode_SequencePlayer_5) == 0x0010C8, "Member 'UOctopusV2VehicleAnimBP_C::AnimGraphNode_SequencePlayer_5' has a wrong offset!");
static_assert(offsetof(UOctopusV2VehicleAnimBP_C, AnimGraphNode_BlendListByBool_1) == 0x001108, "Member 'UOctopusV2VehicleAnimBP_C::AnimGraphNode_BlendListByBool_1' has a wrong offset!");
static_assert(offsetof(UOctopusV2VehicleAnimBP_C, AnimGraphNode_SequencePlayer_4) == 0x001150, "Member 'UOctopusV2VehicleAnimBP_C::AnimGraphNode_SequencePlayer_4' has a wrong offset!");
static_assert(offsetof(UOctopusV2VehicleAnimBP_C, AnimGraphNode_StateResult_4) == 0x001190, "Member 'UOctopusV2VehicleAnimBP_C::AnimGraphNode_StateResult_4' has a wrong offset!");
static_assert(offsetof(UOctopusV2VehicleAnimBP_C, AnimGraphNode_SequencePlayer_3) == 0x0011B0, "Member 'UOctopusV2VehicleAnimBP_C::AnimGraphNode_SequencePlayer_3' has a wrong offset!");
static_assert(offsetof(UOctopusV2VehicleAnimBP_C, AnimGraphNode_BlendListByBool) == 0x0011F0, "Member 'UOctopusV2VehicleAnimBP_C::AnimGraphNode_BlendListByBool' has a wrong offset!");
static_assert(offsetof(UOctopusV2VehicleAnimBP_C, AnimGraphNode_SequencePlayer_2) == 0x001238, "Member 'UOctopusV2VehicleAnimBP_C::AnimGraphNode_SequencePlayer_2' has a wrong offset!");
static_assert(offsetof(UOctopusV2VehicleAnimBP_C, AnimGraphNode_StateResult_3) == 0x001278, "Member 'UOctopusV2VehicleAnimBP_C::AnimGraphNode_StateResult_3' has a wrong offset!");
static_assert(offsetof(UOctopusV2VehicleAnimBP_C, AnimGraphNode_SequencePlayer_1) == 0x001298, "Member 'UOctopusV2VehicleAnimBP_C::AnimGraphNode_SequencePlayer_1' has a wrong offset!");
static_assert(offsetof(UOctopusV2VehicleAnimBP_C, AnimGraphNode_StateResult_2) == 0x0012D8, "Member 'UOctopusV2VehicleAnimBP_C::AnimGraphNode_StateResult_2' has a wrong offset!");
static_assert(offsetof(UOctopusV2VehicleAnimBP_C, AnimGraphNode_SequencePlayer) == 0x0012F8, "Member 'UOctopusV2VehicleAnimBP_C::AnimGraphNode_SequencePlayer' has a wrong offset!");
static_assert(offsetof(UOctopusV2VehicleAnimBP_C, AnimGraphNode_StateResult_1) == 0x001338, "Member 'UOctopusV2VehicleAnimBP_C::AnimGraphNode_StateResult_1' has a wrong offset!");
static_assert(offsetof(UOctopusV2VehicleAnimBP_C, AnimGraphNode_UseCachedPose) == 0x001358, "Member 'UOctopusV2VehicleAnimBP_C::AnimGraphNode_UseCachedPose' has a wrong offset!");
static_assert(offsetof(UOctopusV2VehicleAnimBP_C, AnimGraphNode_StateResult) == 0x001380, "Member 'UOctopusV2VehicleAnimBP_C::AnimGraphNode_StateResult' has a wrong offset!");
static_assert(offsetof(UOctopusV2VehicleAnimBP_C, AnimGraphNode_StateMachine) == 0x0013A0, "Member 'UOctopusV2VehicleAnimBP_C::AnimGraphNode_StateMachine' has a wrong offset!");
static_assert(offsetof(UOctopusV2VehicleAnimBP_C, AnimGraphNode_BlendSpacePlayer) == 0x001458, "Member 'UOctopusV2VehicleAnimBP_C::AnimGraphNode_BlendSpacePlayer' has a wrong offset!");
static_assert(offsetof(UOctopusV2VehicleAnimBP_C, AnimGraphNode_SaveCachedPose) == 0x0014C0, "Member 'UOctopusV2VehicleAnimBP_C::AnimGraphNode_SaveCachedPose' has a wrong offset!");
static_assert(offsetof(UOctopusV2VehicleAnimBP_C, PlungerScaleVector) == 0x0015C0, "Member 'UOctopusV2VehicleAnimBP_C::PlungerScaleVector' has a wrong offset!");

}

