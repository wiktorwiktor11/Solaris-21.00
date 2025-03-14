﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MeatBallVehicle_Driver_AnimBP

#include "Basic.hpp"

#include "AnimGraphRuntime_structs.hpp"
#include "Engine_structs.hpp"
#include "MeatBallVehicle_Driver_AnimBP_structs.hpp"
#include "FortniteGame_classes.hpp"


namespace SDK
{

// AnimBlueprintGeneratedClass MeatBallVehicle_Driver_AnimBP.MeatBallVehicle_Driver_AnimBP_C
// 0x1FA0 (0x2760 - 0x07C0)
class UMeatBallVehicle_Driver_AnimBP_C final : public UFortVehicleOccupantAnimInstance
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x07C0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct MeatBallVehicle_Driver_AnimBP::FAnimBlueprintGeneratedMutableData __AnimBlueprintMutables;                           // 0x07C8(0x0020)(HasGetValueTypeHash)
	struct FAnimSubsystemInstance                 AnimBlueprintExtension_PropertyAccess;             // 0x07E8(0x0008)()
	struct FAnimSubsystemInstance                 AnimBlueprintExtension_Base;                       // 0x07F0(0x0008)()
	struct FAnimNode_Root                         AnimGraphNode_Root;                                // 0x07F8(0x0020)()
	struct FAnimNode_LegIK                        AnimGraphNode_LegIK_2;                             // 0x0818(0x00F8)()
	struct FAnimNode_LegIK                        AnimGraphNode_LegIK_1;                             // 0x0910(0x00F8)()
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;               // 0x0A08(0x0020)()
	struct FAnimNode_ModifyBone                   AnimGraphNode_ModifyBone_2;                        // 0x0A28(0x0128)()
	struct FAnimNode_LegIK                        AnimGraphNode_LegIK;                               // 0x0B50(0x00F8)()
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;               // 0x0C48(0x0020)()
	struct FAnimNode_ModifyBone                   AnimGraphNode_ModifyBone_1;                        // 0x0C68(0x0128)()
	struct FAnimNode_ModifyBone                   AnimGraphNode_ModifyBone;                          // 0x0D90(0x0128)()
	struct FAnimNode_Slot                         AnimGraphNode_Slot;                                // 0x0EB8(0x0048)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_25;                 // 0x0F00(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_24;                 // 0x0F28(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_23;                 // 0x0F50(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_22;                 // 0x0F78(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_21;                 // 0x0FA0(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_20;                 // 0x0FC8(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_19;                 // 0x0FF0(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_18;                 // 0x1018(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_17;                 // 0x1040(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_16;                 // 0x1068(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_15;                 // 0x1090(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_14;                 // 0x10B8(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_13;                 // 0x10E0(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_12;                 // 0x1108(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_11;                 // 0x1130(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_10;                 // 0x1158(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_9;                  // 0x1180(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_8;                  // 0x11A8(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_7;                  // 0x11D0(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_6;                  // 0x11F8(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_5;                  // 0x1220(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_4;                  // 0x1248(0x0028)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_19;                   // 0x1270(0x0040)()
	struct FAnimNode_RotationOffsetBlendSpace     AnimGraphNode_RotationOffsetBlendSpace_1;          // 0x12B0(0x0110)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_13;                      // 0x13C0(0x0020)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_18;                   // 0x13E0(0x0040)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_12;                      // 0x1420(0x0020)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_17;                   // 0x1440(0x0040)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_11;                      // 0x1480(0x0020)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_16;                   // 0x14A0(0x0040)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_10;                      // 0x14E0(0x0020)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_15;                   // 0x1500(0x0040)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_9;                       // 0x1540(0x0020)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_14;                   // 0x1560(0x0040)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_8;                       // 0x15A0(0x0020)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_13;                   // 0x15C0(0x0040)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_7;                       // 0x1600(0x0020)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_12;                   // 0x1620(0x0040)()
	struct FAnimNode_BlendListByBool              AnimGraphNode_BlendListByBool_5;                   // 0x1660(0x0048)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_11;                   // 0x16A8(0x0040)()
	struct FAnimNode_BlendListByBool              AnimGraphNode_BlendListByBool_4;                   // 0x16E8(0x0048)()
	struct FAnimNode_ApplyAdditive                AnimGraphNode_ApplyAdditive_5;                     // 0x1730(0x00C8)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_10;                   // 0x17F8(0x0040)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_4;                     // 0x1838(0x0028)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_6;                       // 0x1860(0x0020)()
	struct FAnimNode_ApplyAdditive                AnimGraphNode_ApplyAdditive_4;                     // 0x1880(0x00C8)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_9;                    // 0x1948(0x0040)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_3;                     // 0x1988(0x0028)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_5;                       // 0x19B0(0x0020)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_2;                     // 0x19D0(0x0028)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_4;                       // 0x19F8(0x0020)()
	struct FAnimNode_StateMachine                 AnimGraphNode_StateMachine_2;                      // 0x1A18(0x00B8)()
	struct FAnimNode_RotationOffsetBlendSpace     AnimGraphNode_RotationOffsetBlendSpace;            // 0x1AD0(0x0110)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_1;                     // 0x1BE0(0x0028)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose;                       // 0x1C08(0x0028)()
	struct FAnimNode_ApplyAdditive                AnimGraphNode_ApplyAdditive_3;                     // 0x1C30(0x00C8)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_8;                    // 0x1CF8(0x0040)()
	struct FAnimNode_BlendListByBool              AnimGraphNode_BlendListByBool_3;                   // 0x1D38(0x0048)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_7;                    // 0x1D80(0x0040)()
	struct FAnimNode_BlendListByBool              AnimGraphNode_BlendListByBool_2;                   // 0x1DC0(0x0048)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_3;                       // 0x1E08(0x0020)()
	struct FAnimNode_StateMachine                 AnimGraphNode_StateMachine_1;                      // 0x1E28(0x00B8)()
	struct FAnimNode_SaveCachedPose               AnimGraphNode_SaveCachedPose_1;                    // 0x1EE0(0x0100)()
	struct FAnimNode_ApplyAdditive                AnimGraphNode_ApplyAdditive_2;                     // 0x1FE0(0x00C8)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_6;                    // 0x20A8(0x0040)()
	struct FAnimNode_ApplyAdditive                AnimGraphNode_ApplyAdditive_1;                     // 0x20E8(0x00C8)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_5;                    // 0x21B0(0x0040)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_3;                  // 0x21F0(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_2;                  // 0x2218(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_1;                  // 0x2240(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult;                    // 0x2268(0x0028)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_4;                    // 0x2290(0x0040)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_2;                       // 0x22D0(0x0020)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_3;                    // 0x22F0(0x0040)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_1;                       // 0x2330(0x0020)()
	struct FAnimNode_RefPose                      AnimGraphNode_IdentityPose;                        // 0x2350(0x0010)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult;                         // 0x2360(0x0020)()
	struct FAnimNode_StateMachine                 AnimGraphNode_StateMachine;                        // 0x2380(0x00B8)()
	struct FAnimNode_ApplyAdditive                AnimGraphNode_ApplyAdditive;                       // 0x2438(0x00C8)()
	struct FAnimNode_BlendListByBool              AnimGraphNode_BlendListByBool_1;                   // 0x2500(0x0048)()
	struct FAnimNode_BlendListByBool              AnimGraphNode_BlendListByBool;                     // 0x2548(0x0048)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_2;                    // 0x2590(0x0040)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_1;                    // 0x25D0(0x0040)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer;                      // 0x2610(0x0040)()
	struct FAnimNode_SaveCachedPose               AnimGraphNode_SaveCachedPose;                      // 0x2650(0x0100)()
	float                                         StartPosition;                                     // 0x2750(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          AimOffsetEnable;                                   // 0x2754(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void AnimGraph(struct FPoseLink* AnimGraph_0);
	void AnimNotify_OnDisableAimOffset();
	void AnimNotify_OnEnableAimOffset();
	void ExecuteUbergraph_MeatBallVehicle_Driver_AnimBP(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"MeatBallVehicle_Driver_AnimBP_C">();
	}
	static class UMeatBallVehicle_Driver_AnimBP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMeatBallVehicle_Driver_AnimBP_C>();
	}
};
static_assert(alignof(UMeatBallVehicle_Driver_AnimBP_C) == 0x000010, "Wrong alignment on UMeatBallVehicle_Driver_AnimBP_C");
static_assert(sizeof(UMeatBallVehicle_Driver_AnimBP_C) == 0x002760, "Wrong size on UMeatBallVehicle_Driver_AnimBP_C");
static_assert(offsetof(UMeatBallVehicle_Driver_AnimBP_C, UberGraphFrame) == 0x0007C0, "Member 'UMeatBallVehicle_Driver_AnimBP_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UMeatBallVehicle_Driver_AnimBP_C, __AnimBlueprintMutables) == 0x0007C8, "Member 'UMeatBallVehicle_Driver_AnimBP_C::__AnimBlueprintMutables' has a wrong offset!");
static_assert(offsetof(UMeatBallVehicle_Driver_AnimBP_C, AnimBlueprintExtension_PropertyAccess) == 0x0007E8, "Member 'UMeatBallVehicle_Driver_AnimBP_C::AnimBlueprintExtension_PropertyAccess' has a wrong offset!");
static_assert(offsetof(UMeatBallVehicle_Driver_AnimBP_C, AnimBlueprintExtension_Base) == 0x0007F0, "Member 'UMeatBallVehicle_Driver_AnimBP_C::AnimBlueprintExtension_Base' has a wrong offset!");
static_assert(offsetof(UMeatBallVehicle_Driver_AnimBP_C, AnimGraphNode_Root) == 0x0007F8, "Member 'UMeatBallVehicle_Driver_AnimBP_C::AnimGraphNode_Root' has a wrong offset!");
static_assert(offsetof(UMeatBallVehicle_Driver_AnimBP_C, AnimGraphNode_LegIK_2) == 0x000818, "Member 'UMeatBallVehicle_Driver_AnimBP_C::AnimGraphNode_LegIK_2' has a wrong offset!");
static_assert(offsetof(UMeatBallVehicle_Driver_AnimBP_C, AnimGraphNode_LegIK_1) == 0x000910, "Member 'UMeatBallVehicle_Driver_AnimBP_C::AnimGraphNode_LegIK_1' has a wrong offset!");
static_assert(offsetof(UMeatBallVehicle_Driver_AnimBP_C, AnimGraphNode_ComponentToLocalSpace) == 0x000A08, "Member 'UMeatBallVehicle_Driver_AnimBP_C::AnimGraphNode_ComponentToLocalSpace' has a wrong offset!");
static_assert(offsetof(UMeatBallVehicle_Driver_AnimBP_C, AnimGraphNode_ModifyBone_2) == 0x000A28, "Member 'UMeatBallVehicle_Driver_AnimBP_C::AnimGraphNode_ModifyBone_2' has a wrong offset!");
static_assert(offsetof(UMeatBallVehicle_Driver_AnimBP_C, AnimGraphNode_LegIK) == 0x000B50, "Member 'UMeatBallVehicle_Driver_AnimBP_C::AnimGraphNode_LegIK' has a wrong offset!");
static_assert(offsetof(UMeatBallVehicle_Driver_AnimBP_C, AnimGraphNode_LocalToComponentSpace) == 0x000C48, "Member 'UMeatBallVehicle_Driver_AnimBP_C::AnimGraphNode_LocalToComponentSpace' has a wrong offset!");
static_assert(offsetof(UMeatBallVehicle_Driver_AnimBP_C, AnimGraphNode_ModifyBone_1) == 0x000C68, "Member 'UMeatBallVehicle_Driver_AnimBP_C::AnimGraphNode_ModifyBone_1' has a wrong offset!");
static_assert(offsetof(UMeatBallVehicle_Driver_AnimBP_C, AnimGraphNode_ModifyBone) == 0x000D90, "Member 'UMeatBallVehicle_Driver_AnimBP_C::AnimGraphNode_ModifyBone' has a wrong offset!");
static_assert(offsetof(UMeatBallVehicle_Driver_AnimBP_C, AnimGraphNode_Slot) == 0x000EB8, "Member 'UMeatBallVehicle_Driver_AnimBP_C::AnimGraphNode_Slot' has a wrong offset!");
static_assert(offsetof(UMeatBallVehicle_Driver_AnimBP_C, AnimGraphNode_TransitionResult_25) == 0x000F00, "Member 'UMeatBallVehicle_Driver_AnimBP_C::AnimGraphNode_TransitionResult_25' has a wrong offset!");
static_assert(offsetof(UMeatBallVehicle_Driver_AnimBP_C, AnimGraphNode_TransitionResult_24) == 0x000F28, "Member 'UMeatBallVehicle_Driver_AnimBP_C::AnimGraphNode_TransitionResult_24' has a wrong offset!");
static_assert(offsetof(UMeatBallVehicle_Driver_AnimBP_C, AnimGraphNode_TransitionResult_23) == 0x000F50, "Member 'UMeatBallVehicle_Driver_AnimBP_C::AnimGraphNode_TransitionResult_23' has a wrong offset!");
static_assert(offsetof(UMeatBallVehicle_Driver_AnimBP_C, AnimGraphNode_TransitionResult_22) == 0x000F78, "Member 'UMeatBallVehicle_Driver_AnimBP_C::AnimGraphNode_TransitionResult_22' has a wrong offset!");
static_assert(offsetof(UMeatBallVehicle_Driver_AnimBP_C, AnimGraphNode_TransitionResult_21) == 0x000FA0, "Member 'UMeatBallVehicle_Driver_AnimBP_C::AnimGraphNode_TransitionResult_21' has a wrong offset!");
static_assert(offsetof(UMeatBallVehicle_Driver_AnimBP_C, AnimGraphNode_TransitionResult_20) == 0x000FC8, "Member 'UMeatBallVehicle_Driver_AnimBP_C::AnimGraphNode_TransitionResult_20' has a wrong offset!");
static_assert(offsetof(UMeatBallVehicle_Driver_AnimBP_C, AnimGraphNode_TransitionResult_19) == 0x000FF0, "Member 'UMeatBallVehicle_Driver_AnimBP_C::AnimGraphNode_TransitionResult_19' has a wrong offset!");
static_assert(offsetof(UMeatBallVehicle_Driver_AnimBP_C, AnimGraphNode_TransitionResult_18) == 0x001018, "Member 'UMeatBallVehicle_Driver_AnimBP_C::AnimGraphNode_TransitionResult_18' has a wrong offset!");
static_assert(offsetof(UMeatBallVehicle_Driver_AnimBP_C, AnimGraphNode_TransitionResult_17) == 0x001040, "Member 'UMeatBallVehicle_Driver_AnimBP_C::AnimGraphNode_TransitionResult_17' has a wrong offset!");
static_assert(offsetof(UMeatBallVehicle_Driver_AnimBP_C, AnimGraphNode_TransitionResult_16) == 0x001068, "Member 'UMeatBallVehicle_Driver_AnimBP_C::AnimGraphNode_TransitionResult_16' has a wrong offset!");
static_assert(offsetof(UMeatBallVehicle_Driver_AnimBP_C, AnimGraphNode_TransitionResult_15) == 0x001090, "Member 'UMeatBallVehicle_Driver_AnimBP_C::AnimGraphNode_TransitionResult_15' has a wrong offset!");
static_assert(offsetof(UMeatBallVehicle_Driver_AnimBP_C, AnimGraphNode_TransitionResult_14) == 0x0010B8, "Member 'UMeatBallVehicle_Driver_AnimBP_C::AnimGraphNode_TransitionResult_14' has a wrong offset!");
static_assert(offsetof(UMeatBallVehicle_Driver_AnimBP_C, AnimGraphNode_TransitionResult_13) == 0x0010E0, "Member 'UMeatBallVehicle_Driver_AnimBP_C::AnimGraphNode_TransitionResult_13' has a wrong offset!");
static_assert(offsetof(UMeatBallVehicle_Driver_AnimBP_C, AnimGraphNode_TransitionResult_12) == 0x001108, "Member 'UMeatBallVehicle_Driver_AnimBP_C::AnimGraphNode_TransitionResult_12' has a wrong offset!");
static_assert(offsetof(UMeatBallVehicle_Driver_AnimBP_C, AnimGraphNode_TransitionResult_11) == 0x001130, "Member 'UMeatBallVehicle_Driver_AnimBP_C::AnimGraphNode_TransitionResult_11' has a wrong offset!");
static_assert(offsetof(UMeatBallVehicle_Driver_AnimBP_C, AnimGraphNode_TransitionResult_10) == 0x001158, "Member 'UMeatBallVehicle_Driver_AnimBP_C::AnimGraphNode_TransitionResult_10' has a wrong offset!");
static_assert(offsetof(UMeatBallVehicle_Driver_AnimBP_C, AnimGraphNode_TransitionResult_9) == 0x001180, "Member 'UMeatBallVehicle_Driver_AnimBP_C::AnimGraphNode_TransitionResult_9' has a wrong offset!");
static_assert(offsetof(UMeatBallVehicle_Driver_AnimBP_C, AnimGraphNode_TransitionResult_8) == 0x0011A8, "Member 'UMeatBallVehicle_Driver_AnimBP_C::AnimGraphNode_TransitionResult_8' has a wrong offset!");
static_assert(offsetof(UMeatBallVehicle_Driver_AnimBP_C, AnimGraphNode_TransitionResult_7) == 0x0011D0, "Member 'UMeatBallVehicle_Driver_AnimBP_C::AnimGraphNode_TransitionResult_7' has a wrong offset!");
static_assert(offsetof(UMeatBallVehicle_Driver_AnimBP_C, AnimGraphNode_TransitionResult_6) == 0x0011F8, "Member 'UMeatBallVehicle_Driver_AnimBP_C::AnimGraphNode_TransitionResult_6' has a wrong offset!");
static_assert(offsetof(UMeatBallVehicle_Driver_AnimBP_C, AnimGraphNode_TransitionResult_5) == 0x001220, "Member 'UMeatBallVehicle_Driver_AnimBP_C::AnimGraphNode_TransitionResult_5' has a wrong offset!");
static_assert(offsetof(UMeatBallVehicle_Driver_AnimBP_C, AnimGraphNode_TransitionResult_4) == 0x001248, "Member 'UMeatBallVehicle_Driver_AnimBP_C::AnimGraphNode_TransitionResult_4' has a wrong offset!");
static_assert(offsetof(UMeatBallVehicle_Driver_AnimBP_C, AnimGraphNode_SequencePlayer_19) == 0x001270, "Member 'UMeatBallVehicle_Driver_AnimBP_C::AnimGraphNode_SequencePlayer_19' has a wrong offset!");
static_assert(offsetof(UMeatBallVehicle_Driver_AnimBP_C, AnimGraphNode_RotationOffsetBlendSpace_1) == 0x0012B0, "Member 'UMeatBallVehicle_Driver_AnimBP_C::AnimGraphNode_RotationOffsetBlendSpace_1' has a wrong offset!");
static_assert(offsetof(UMeatBallVehicle_Driver_AnimBP_C, AnimGraphNode_StateResult_13) == 0x0013C0, "Member 'UMeatBallVehicle_Driver_AnimBP_C::AnimGraphNode_StateResult_13' has a wrong offset!");
static_assert(offsetof(UMeatBallVehicle_Driver_AnimBP_C, AnimGraphNode_SequencePlayer_18) == 0x0013E0, "Member 'UMeatBallVehicle_Driver_AnimBP_C::AnimGraphNode_SequencePlayer_18' has a wrong offset!");
static_assert(offsetof(UMeatBallVehicle_Driver_AnimBP_C, AnimGraphNode_StateResult_12) == 0x001420, "Member 'UMeatBallVehicle_Driver_AnimBP_C::AnimGraphNode_StateResult_12' has a wrong offset!");
static_assert(offsetof(UMeatBallVehicle_Driver_AnimBP_C, AnimGraphNode_SequencePlayer_17) == 0x001440, "Member 'UMeatBallVehicle_Driver_AnimBP_C::AnimGraphNode_SequencePlayer_17' has a wrong offset!");
static_assert(offsetof(UMeatBallVehicle_Driver_AnimBP_C, AnimGraphNode_StateResult_11) == 0x001480, "Member 'UMeatBallVehicle_Driver_AnimBP_C::AnimGraphNode_StateResult_11' has a wrong offset!");
static_assert(offsetof(UMeatBallVehicle_Driver_AnimBP_C, AnimGraphNode_SequencePlayer_16) == 0x0014A0, "Member 'UMeatBallVehicle_Driver_AnimBP_C::AnimGraphNode_SequencePlayer_16' has a wrong offset!");
static_assert(offsetof(UMeatBallVehicle_Driver_AnimBP_C, AnimGraphNode_StateResult_10) == 0x0014E0, "Member 'UMeatBallVehicle_Driver_AnimBP_C::AnimGraphNode_StateResult_10' has a wrong offset!");
static_assert(offsetof(UMeatBallVehicle_Driver_AnimBP_C, AnimGraphNode_SequencePlayer_15) == 0x001500, "Member 'UMeatBallVehicle_Driver_AnimBP_C::AnimGraphNode_SequencePlayer_15' has a wrong offset!");
static_assert(offsetof(UMeatBallVehicle_Driver_AnimBP_C, AnimGraphNode_StateResult_9) == 0x001540, "Member 'UMeatBallVehicle_Driver_AnimBP_C::AnimGraphNode_StateResult_9' has a wrong offset!");
static_assert(offsetof(UMeatBallVehicle_Driver_AnimBP_C, AnimGraphNode_SequencePlayer_14) == 0x001560, "Member 'UMeatBallVehicle_Driver_AnimBP_C::AnimGraphNode_SequencePlayer_14' has a wrong offset!");
static_assert(offsetof(UMeatBallVehicle_Driver_AnimBP_C, AnimGraphNode_StateResult_8) == 0x0015A0, "Member 'UMeatBallVehicle_Driver_AnimBP_C::AnimGraphNode_StateResult_8' has a wrong offset!");
static_assert(offsetof(UMeatBallVehicle_Driver_AnimBP_C, AnimGraphNode_SequencePlayer_13) == 0x0015C0, "Member 'UMeatBallVehicle_Driver_AnimBP_C::AnimGraphNode_SequencePlayer_13' has a wrong offset!");
static_assert(offsetof(UMeatBallVehicle_Driver_AnimBP_C, AnimGraphNode_StateResult_7) == 0x001600, "Member 'UMeatBallVehicle_Driver_AnimBP_C::AnimGraphNode_StateResult_7' has a wrong offset!");
static_assert(offsetof(UMeatBallVehicle_Driver_AnimBP_C, AnimGraphNode_SequencePlayer_12) == 0x001620, "Member 'UMeatBallVehicle_Driver_AnimBP_C::AnimGraphNode_SequencePlayer_12' has a wrong offset!");
static_assert(offsetof(UMeatBallVehicle_Driver_AnimBP_C, AnimGraphNode_BlendListByBool_5) == 0x001660, "Member 'UMeatBallVehicle_Driver_AnimBP_C::AnimGraphNode_BlendListByBool_5' has a wrong offset!");
static_assert(offsetof(UMeatBallVehicle_Driver_AnimBP_C, AnimGraphNode_SequencePlayer_11) == 0x0016A8, "Member 'UMeatBallVehicle_Driver_AnimBP_C::AnimGraphNode_SequencePlayer_11' has a wrong offset!");
static_assert(offsetof(UMeatBallVehicle_Driver_AnimBP_C, AnimGraphNode_BlendListByBool_4) == 0x0016E8, "Member 'UMeatBallVehicle_Driver_AnimBP_C::AnimGraphNode_BlendListByBool_4' has a wrong offset!");
static_assert(offsetof(UMeatBallVehicle_Driver_AnimBP_C, AnimGraphNode_ApplyAdditive_5) == 0x001730, "Member 'UMeatBallVehicle_Driver_AnimBP_C::AnimGraphNode_ApplyAdditive_5' has a wrong offset!");
static_assert(offsetof(UMeatBallVehicle_Driver_AnimBP_C, AnimGraphNode_SequencePlayer_10) == 0x0017F8, "Member 'UMeatBallVehicle_Driver_AnimBP_C::AnimGraphNode_SequencePlayer_10' has a wrong offset!");
static_assert(offsetof(UMeatBallVehicle_Driver_AnimBP_C, AnimGraphNode_UseCachedPose_4) == 0x001838, "Member 'UMeatBallVehicle_Driver_AnimBP_C::AnimGraphNode_UseCachedPose_4' has a wrong offset!");
static_assert(offsetof(UMeatBallVehicle_Driver_AnimBP_C, AnimGraphNode_StateResult_6) == 0x001860, "Member 'UMeatBallVehicle_Driver_AnimBP_C::AnimGraphNode_StateResult_6' has a wrong offset!");
static_assert(offsetof(UMeatBallVehicle_Driver_AnimBP_C, AnimGraphNode_ApplyAdditive_4) == 0x001880, "Member 'UMeatBallVehicle_Driver_AnimBP_C::AnimGraphNode_ApplyAdditive_4' has a wrong offset!");
static_assert(offsetof(UMeatBallVehicle_Driver_AnimBP_C, AnimGraphNode_SequencePlayer_9) == 0x001948, "Member 'UMeatBallVehicle_Driver_AnimBP_C::AnimGraphNode_SequencePlayer_9' has a wrong offset!");
static_assert(offsetof(UMeatBallVehicle_Driver_AnimBP_C, AnimGraphNode_UseCachedPose_3) == 0x001988, "Member 'UMeatBallVehicle_Driver_AnimBP_C::AnimGraphNode_UseCachedPose_3' has a wrong offset!");
static_assert(offsetof(UMeatBallVehicle_Driver_AnimBP_C, AnimGraphNode_StateResult_5) == 0x0019B0, "Member 'UMeatBallVehicle_Driver_AnimBP_C::AnimGraphNode_StateResult_5' has a wrong offset!");
static_assert(offsetof(UMeatBallVehicle_Driver_AnimBP_C, AnimGraphNode_UseCachedPose_2) == 0x0019D0, "Member 'UMeatBallVehicle_Driver_AnimBP_C::AnimGraphNode_UseCachedPose_2' has a wrong offset!");
static_assert(offsetof(UMeatBallVehicle_Driver_AnimBP_C, AnimGraphNode_StateResult_4) == 0x0019F8, "Member 'UMeatBallVehicle_Driver_AnimBP_C::AnimGraphNode_StateResult_4' has a wrong offset!");
static_assert(offsetof(UMeatBallVehicle_Driver_AnimBP_C, AnimGraphNode_StateMachine_2) == 0x001A18, "Member 'UMeatBallVehicle_Driver_AnimBP_C::AnimGraphNode_StateMachine_2' has a wrong offset!");
static_assert(offsetof(UMeatBallVehicle_Driver_AnimBP_C, AnimGraphNode_RotationOffsetBlendSpace) == 0x001AD0, "Member 'UMeatBallVehicle_Driver_AnimBP_C::AnimGraphNode_RotationOffsetBlendSpace' has a wrong offset!");
static_assert(offsetof(UMeatBallVehicle_Driver_AnimBP_C, AnimGraphNode_UseCachedPose_1) == 0x001BE0, "Member 'UMeatBallVehicle_Driver_AnimBP_C::AnimGraphNode_UseCachedPose_1' has a wrong offset!");
static_assert(offsetof(UMeatBallVehicle_Driver_AnimBP_C, AnimGraphNode_UseCachedPose) == 0x001C08, "Member 'UMeatBallVehicle_Driver_AnimBP_C::AnimGraphNode_UseCachedPose' has a wrong offset!");
static_assert(offsetof(UMeatBallVehicle_Driver_AnimBP_C, AnimGraphNode_ApplyAdditive_3) == 0x001C30, "Member 'UMeatBallVehicle_Driver_AnimBP_C::AnimGraphNode_ApplyAdditive_3' has a wrong offset!");
static_assert(offsetof(UMeatBallVehicle_Driver_AnimBP_C, AnimGraphNode_SequencePlayer_8) == 0x001CF8, "Member 'UMeatBallVehicle_Driver_AnimBP_C::AnimGraphNode_SequencePlayer_8' has a wrong offset!");
static_assert(offsetof(UMeatBallVehicle_Driver_AnimBP_C, AnimGraphNode_BlendListByBool_3) == 0x001D38, "Member 'UMeatBallVehicle_Driver_AnimBP_C::AnimGraphNode_BlendListByBool_3' has a wrong offset!");
static_assert(offsetof(UMeatBallVehicle_Driver_AnimBP_C, AnimGraphNode_SequencePlayer_7) == 0x001D80, "Member 'UMeatBallVehicle_Driver_AnimBP_C::AnimGraphNode_SequencePlayer_7' has a wrong offset!");
static_assert(offsetof(UMeatBallVehicle_Driver_AnimBP_C, AnimGraphNode_BlendListByBool_2) == 0x001DC0, "Member 'UMeatBallVehicle_Driver_AnimBP_C::AnimGraphNode_BlendListByBool_2' has a wrong offset!");
static_assert(offsetof(UMeatBallVehicle_Driver_AnimBP_C, AnimGraphNode_StateResult_3) == 0x001E08, "Member 'UMeatBallVehicle_Driver_AnimBP_C::AnimGraphNode_StateResult_3' has a wrong offset!");
static_assert(offsetof(UMeatBallVehicle_Driver_AnimBP_C, AnimGraphNode_StateMachine_1) == 0x001E28, "Member 'UMeatBallVehicle_Driver_AnimBP_C::AnimGraphNode_StateMachine_1' has a wrong offset!");
static_assert(offsetof(UMeatBallVehicle_Driver_AnimBP_C, AnimGraphNode_SaveCachedPose_1) == 0x001EE0, "Member 'UMeatBallVehicle_Driver_AnimBP_C::AnimGraphNode_SaveCachedPose_1' has a wrong offset!");
static_assert(offsetof(UMeatBallVehicle_Driver_AnimBP_C, AnimGraphNode_ApplyAdditive_2) == 0x001FE0, "Member 'UMeatBallVehicle_Driver_AnimBP_C::AnimGraphNode_ApplyAdditive_2' has a wrong offset!");
static_assert(offsetof(UMeatBallVehicle_Driver_AnimBP_C, AnimGraphNode_SequencePlayer_6) == 0x0020A8, "Member 'UMeatBallVehicle_Driver_AnimBP_C::AnimGraphNode_SequencePlayer_6' has a wrong offset!");
static_assert(offsetof(UMeatBallVehicle_Driver_AnimBP_C, AnimGraphNode_ApplyAdditive_1) == 0x0020E8, "Member 'UMeatBallVehicle_Driver_AnimBP_C::AnimGraphNode_ApplyAdditive_1' has a wrong offset!");
static_assert(offsetof(UMeatBallVehicle_Driver_AnimBP_C, AnimGraphNode_SequencePlayer_5) == 0x0021B0, "Member 'UMeatBallVehicle_Driver_AnimBP_C::AnimGraphNode_SequencePlayer_5' has a wrong offset!");
static_assert(offsetof(UMeatBallVehicle_Driver_AnimBP_C, AnimGraphNode_TransitionResult_3) == 0x0021F0, "Member 'UMeatBallVehicle_Driver_AnimBP_C::AnimGraphNode_TransitionResult_3' has a wrong offset!");
static_assert(offsetof(UMeatBallVehicle_Driver_AnimBP_C, AnimGraphNode_TransitionResult_2) == 0x002218, "Member 'UMeatBallVehicle_Driver_AnimBP_C::AnimGraphNode_TransitionResult_2' has a wrong offset!");
static_assert(offsetof(UMeatBallVehicle_Driver_AnimBP_C, AnimGraphNode_TransitionResult_1) == 0x002240, "Member 'UMeatBallVehicle_Driver_AnimBP_C::AnimGraphNode_TransitionResult_1' has a wrong offset!");
static_assert(offsetof(UMeatBallVehicle_Driver_AnimBP_C, AnimGraphNode_TransitionResult) == 0x002268, "Member 'UMeatBallVehicle_Driver_AnimBP_C::AnimGraphNode_TransitionResult' has a wrong offset!");
static_assert(offsetof(UMeatBallVehicle_Driver_AnimBP_C, AnimGraphNode_SequencePlayer_4) == 0x002290, "Member 'UMeatBallVehicle_Driver_AnimBP_C::AnimGraphNode_SequencePlayer_4' has a wrong offset!");
static_assert(offsetof(UMeatBallVehicle_Driver_AnimBP_C, AnimGraphNode_StateResult_2) == 0x0022D0, "Member 'UMeatBallVehicle_Driver_AnimBP_C::AnimGraphNode_StateResult_2' has a wrong offset!");
static_assert(offsetof(UMeatBallVehicle_Driver_AnimBP_C, AnimGraphNode_SequencePlayer_3) == 0x0022F0, "Member 'UMeatBallVehicle_Driver_AnimBP_C::AnimGraphNode_SequencePlayer_3' has a wrong offset!");
static_assert(offsetof(UMeatBallVehicle_Driver_AnimBP_C, AnimGraphNode_StateResult_1) == 0x002330, "Member 'UMeatBallVehicle_Driver_AnimBP_C::AnimGraphNode_StateResult_1' has a wrong offset!");
static_assert(offsetof(UMeatBallVehicle_Driver_AnimBP_C, AnimGraphNode_IdentityPose) == 0x002350, "Member 'UMeatBallVehicle_Driver_AnimBP_C::AnimGraphNode_IdentityPose' has a wrong offset!");
static_assert(offsetof(UMeatBallVehicle_Driver_AnimBP_C, AnimGraphNode_StateResult) == 0x002360, "Member 'UMeatBallVehicle_Driver_AnimBP_C::AnimGraphNode_StateResult' has a wrong offset!");
static_assert(offsetof(UMeatBallVehicle_Driver_AnimBP_C, AnimGraphNode_StateMachine) == 0x002380, "Member 'UMeatBallVehicle_Driver_AnimBP_C::AnimGraphNode_StateMachine' has a wrong offset!");
static_assert(offsetof(UMeatBallVehicle_Driver_AnimBP_C, AnimGraphNode_ApplyAdditive) == 0x002438, "Member 'UMeatBallVehicle_Driver_AnimBP_C::AnimGraphNode_ApplyAdditive' has a wrong offset!");
static_assert(offsetof(UMeatBallVehicle_Driver_AnimBP_C, AnimGraphNode_BlendListByBool_1) == 0x002500, "Member 'UMeatBallVehicle_Driver_AnimBP_C::AnimGraphNode_BlendListByBool_1' has a wrong offset!");
static_assert(offsetof(UMeatBallVehicle_Driver_AnimBP_C, AnimGraphNode_BlendListByBool) == 0x002548, "Member 'UMeatBallVehicle_Driver_AnimBP_C::AnimGraphNode_BlendListByBool' has a wrong offset!");
static_assert(offsetof(UMeatBallVehicle_Driver_AnimBP_C, AnimGraphNode_SequencePlayer_2) == 0x002590, "Member 'UMeatBallVehicle_Driver_AnimBP_C::AnimGraphNode_SequencePlayer_2' has a wrong offset!");
static_assert(offsetof(UMeatBallVehicle_Driver_AnimBP_C, AnimGraphNode_SequencePlayer_1) == 0x0025D0, "Member 'UMeatBallVehicle_Driver_AnimBP_C::AnimGraphNode_SequencePlayer_1' has a wrong offset!");
static_assert(offsetof(UMeatBallVehicle_Driver_AnimBP_C, AnimGraphNode_SequencePlayer) == 0x002610, "Member 'UMeatBallVehicle_Driver_AnimBP_C::AnimGraphNode_SequencePlayer' has a wrong offset!");
static_assert(offsetof(UMeatBallVehicle_Driver_AnimBP_C, AnimGraphNode_SaveCachedPose) == 0x002650, "Member 'UMeatBallVehicle_Driver_AnimBP_C::AnimGraphNode_SaveCachedPose' has a wrong offset!");
static_assert(offsetof(UMeatBallVehicle_Driver_AnimBP_C, StartPosition) == 0x002750, "Member 'UMeatBallVehicle_Driver_AnimBP_C::StartPosition' has a wrong offset!");
static_assert(offsetof(UMeatBallVehicle_Driver_AnimBP_C, AimOffsetEnable) == 0x002754, "Member 'UMeatBallVehicle_Driver_AnimBP_C::AimOffsetEnable' has a wrong offset!");

}

