﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: RidingPlayerLayerAnimBP

#include "Basic.hpp"

#include "RidingPlayerLayerAnimBP_structs.hpp"
#include "Engine_structs.hpp"
#include "ValetRuntime_classes.hpp"
#include "AnimGraphRuntime_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK
{

// AnimBlueprintGeneratedClass RidingPlayerLayerAnimBP.RidingPlayerLayerAnimBP_C
// 0x1A20 (0x2250 - 0x0830)
class URidingPlayerLayerAnimBP_C final : public UFortValetPassengerAnimInstance
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0830(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct RidingPlayerLayerAnimBP::FAnimBlueprintGeneratedMutableData __AnimBlueprintMutables;                           // 0x0838(0x001C)(HasGetValueTypeHash)
	uint8                                         Pad_854[0x4];                                      // 0x0854(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FAnimSubsystemInstance                 AnimBlueprintExtension_PropertyAccess;             // 0x0858(0x0008)()
	struct FAnimSubsystemInstance                 AnimBlueprintExtension_Base;                       // 0x0860(0x0008)()
	struct FAnimNode_LinkedInputPose              AnimGraphNode_LinkedInputPose_6;                   // 0x0868(0x00C0)()
	struct FAnimNode_SaveCachedPose               AnimGraphNode_SaveCachedPose_2;                    // 0x0928(0x0100)()
	struct FAnimNode_LayeredBoneBlend             AnimGraphNode_LayeredBoneBlend;                    // 0x0A28(0x00E0)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_6;                     // 0x0B08(0x0028)()
	struct FAnimNode_ModifyBone                   AnimGraphNode_ModifyBone_4;                        // 0x0B30(0x0128)()
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;               // 0x0C58(0x0020)()
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;               // 0x0C78(0x0020)()
	struct FAnimNode_SaveCachedPose               AnimGraphNode_SaveCachedPose_1;                    // 0x0C98(0x0100)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_5;                     // 0x0D98(0x0028)()
	struct FAnimNode_BlendListByBool              AnimGraphNode_BlendListByBool_7;                   // 0x0DC0(0x0048)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_4;                     // 0x0E08(0x0028)()
	struct FAnimNode_RotateRootBone               AnimGraphNode_RotateRootBone_1;                    // 0x0E30(0x00A8)()
	struct FAnimNode_Slot                         AnimGraphNode_Slot_1;                              // 0x0ED8(0x0048)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_3;                    // 0x0F20(0x0040)()
	struct FAnimNode_RotationOffsetBlendSpace     AnimGraphNode_RotationOffsetBlendSpace_1;          // 0x0F60(0x0110)()
	struct FAnimNode_BlendSpacePlayer             AnimGraphNode_BlendSpacePlayer_1;                  // 0x1070(0x0068)()
	struct FAnimNode_ApplyAdditive                AnimGraphNode_ApplyAdditive;                       // 0x10D8(0x00C8)()
	struct FAnimNode_ModifyBone                   AnimGraphNode_ModifyBone_3;                        // 0x11A0(0x0128)()
	struct FAnimNode_LinkedInputPose              AnimGraphNode_LinkedInputPose_5;                   // 0x12C8(0x00C0)()
	struct FAnimNode_Root                         AnimGraphNode_Root_3;                              // 0x1388(0x0020)()
	struct FAnimNode_Slot                         AnimGraphNode_Slot;                                // 0x13A8(0x0048)()
	struct FAnimNode_BlendListByBool              AnimGraphNode_BlendListByBool_6;                   // 0x13F0(0x0048)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_2;                    // 0x1438(0x0040)()
	struct FAnimNode_BlendListByBool              AnimGraphNode_BlendListByBool_5;                   // 0x1478(0x0048)()
	struct FAnimNode_SaveCachedPose               AnimGraphNode_SaveCachedPose;                      // 0x14C0(0x0100)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_3;                     // 0x15C0(0x0028)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_2;                     // 0x15E8(0x0028)()
	struct FAnimNode_BlendListByBool              AnimGraphNode_BlendListByBool_4;                   // 0x1610(0x0048)()
	struct FAnimNode_BlendSpacePlayer             AnimGraphNode_BlendSpacePlayer;                    // 0x1658(0x0068)()
	struct FAnimNode_BlendListByBool              AnimGraphNode_BlendListByBool_3;                   // 0x16C0(0x0048)()
	struct FAnimNode_RotateRootBone               AnimGraphNode_RotateRootBone;                      // 0x1708(0x00A8)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_1;                    // 0x17B0(0x0040)()
	struct FAnimNode_BlendListByBool              AnimGraphNode_BlendListByBool_2;                   // 0x17F0(0x0048)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_1;                     // 0x1838(0x0028)()
	struct FAnimNode_BlendListByBool              AnimGraphNode_BlendListByBool_1;                   // 0x1860(0x0048)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer;                      // 0x18A8(0x0040)()
	struct FAnimNode_BlendListByBool              AnimGraphNode_BlendListByBool;                     // 0x18E8(0x0048)()
	struct FAnimNode_RotationOffsetBlendSpace     AnimGraphNode_RotationOffsetBlendSpace;            // 0x1930(0x0110)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose;                       // 0x1A40(0x0028)()
	struct FAnimNode_ModifyBone                   AnimGraphNode_ModifyBone_2;                        // 0x1A68(0x0128)()
	struct FAnimNode_ModifyBone                   AnimGraphNode_ModifyBone_1;                        // 0x1B90(0x0128)()
	struct FAnimNode_ModifyBone                   AnimGraphNode_ModifyBone;                          // 0x1CB8(0x0128)()
	struct FAnimNode_Root                         AnimGraphNode_Root_2;                              // 0x1DE0(0x0020)()
	struct FAnimNode_LinkedInputPose              AnimGraphNode_LinkedInputPose_4;                   // 0x1E00(0x00C0)()
	struct FAnimNode_LinkedInputPose              AnimGraphNode_LinkedInputPose_3;                   // 0x1EC0(0x00C0)()
	struct FAnimNode_Root                         AnimGraphNode_Root_1;                              // 0x1F80(0x0020)()
	struct FAnimNode_LinkedInputPose              AnimGraphNode_LinkedInputPose_2;                   // 0x1FA0(0x00C0)()
	struct FAnimNode_LinkedInputPose              AnimGraphNode_LinkedInputPose_1;                   // 0x2060(0x00C0)()
	struct FAnimNode_LinkedInputPose              AnimGraphNode_LinkedInputPose;                     // 0x2120(0x00C0)()
	struct FAnimNode_Root                         AnimGraphNode_Root;                                // 0x21E0(0x0020)()
	struct FRotator                               MatchRootYaw;                                      // 0x2200(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          Is_Targeting;                                      // 0x2218(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2219[0x7];                                     // 0x2219(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AFortPlayerPawn*                        FortPlayer;                                        // 0x2220(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Timer;                                             // 0x2228(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ShouldTransitionToRiding;                          // 0x222C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_222D[0x3];                                     // 0x222D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         LowerBodyYaw;                                      // 0x2230(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsRideMode;                                        // 0x2234(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsSprinting;                                       // 0x2235(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsStandingStill;                                   // 0x2236(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsInCombat;                                        // 0x2237(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ANPC_Pawn_Wildlife_Parent_C*            WildlifePawn;                                      // 0x2238(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsSmackie;                                         // 0x2240(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2241[0x3];                                     // 0x2241(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         Velocity;                                          // 0x2244(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsNug;                                             // 0x2248(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void AnimGraph(struct FPoseLink* AnimGraph_0);
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_RidingPlayerLayerAnimBP_AnimGraphNode_BlendListByBool_D1B22730415169A7290CBFAD6C915976();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_RidingPlayerLayerAnimBP_AnimGraphNode_RotateRootBone_D73766CE4BF0C956278D7FA8259A40CA();
	void ExecuteUbergraph_RidingPlayerLayerAnimBP(int32 EntryPoint);
	void VehicleFullBodyOverride(const struct FPoseLink& InPoseFullBody, const struct FPoseLink& InPoseUpperAndLowerCachePose, struct FPoseLink* VehicleFullBodyOverride_0);
	void VehicleLowerBodyOverride(const struct FPoseLink& InPoseLowerBodyDefault, const struct FPoseLink& InPoseUpperBody, struct FPoseLink* VehicleLowerBodyOverride_0);
	void VehicleSplitBodyOverride(const struct FPoseLink& InPoseSplitBody, const struct FPoseLink& InPoseUpperAndLowerBody, const struct FFortAnimInput_TurnInPlace& TurnInPlace, const struct FPoseLink& InPoseUpperAndLowerBodyRemoveRoot, struct FPoseLink* VehicleSplitBodyOverride_0);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"RidingPlayerLayerAnimBP_C">();
	}
	static class URidingPlayerLayerAnimBP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<URidingPlayerLayerAnimBP_C>();
	}
};
static_assert(alignof(URidingPlayerLayerAnimBP_C) == 0x000010, "Wrong alignment on URidingPlayerLayerAnimBP_C");
static_assert(sizeof(URidingPlayerLayerAnimBP_C) == 0x002250, "Wrong size on URidingPlayerLayerAnimBP_C");
static_assert(offsetof(URidingPlayerLayerAnimBP_C, UberGraphFrame) == 0x000830, "Member 'URidingPlayerLayerAnimBP_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(URidingPlayerLayerAnimBP_C, __AnimBlueprintMutables) == 0x000838, "Member 'URidingPlayerLayerAnimBP_C::__AnimBlueprintMutables' has a wrong offset!");
static_assert(offsetof(URidingPlayerLayerAnimBP_C, AnimBlueprintExtension_PropertyAccess) == 0x000858, "Member 'URidingPlayerLayerAnimBP_C::AnimBlueprintExtension_PropertyAccess' has a wrong offset!");
static_assert(offsetof(URidingPlayerLayerAnimBP_C, AnimBlueprintExtension_Base) == 0x000860, "Member 'URidingPlayerLayerAnimBP_C::AnimBlueprintExtension_Base' has a wrong offset!");
static_assert(offsetof(URidingPlayerLayerAnimBP_C, AnimGraphNode_LinkedInputPose_6) == 0x000868, "Member 'URidingPlayerLayerAnimBP_C::AnimGraphNode_LinkedInputPose_6' has a wrong offset!");
static_assert(offsetof(URidingPlayerLayerAnimBP_C, AnimGraphNode_SaveCachedPose_2) == 0x000928, "Member 'URidingPlayerLayerAnimBP_C::AnimGraphNode_SaveCachedPose_2' has a wrong offset!");
static_assert(offsetof(URidingPlayerLayerAnimBP_C, AnimGraphNode_LayeredBoneBlend) == 0x000A28, "Member 'URidingPlayerLayerAnimBP_C::AnimGraphNode_LayeredBoneBlend' has a wrong offset!");
static_assert(offsetof(URidingPlayerLayerAnimBP_C, AnimGraphNode_UseCachedPose_6) == 0x000B08, "Member 'URidingPlayerLayerAnimBP_C::AnimGraphNode_UseCachedPose_6' has a wrong offset!");
static_assert(offsetof(URidingPlayerLayerAnimBP_C, AnimGraphNode_ModifyBone_4) == 0x000B30, "Member 'URidingPlayerLayerAnimBP_C::AnimGraphNode_ModifyBone_4' has a wrong offset!");
static_assert(offsetof(URidingPlayerLayerAnimBP_C, AnimGraphNode_LocalToComponentSpace) == 0x000C58, "Member 'URidingPlayerLayerAnimBP_C::AnimGraphNode_LocalToComponentSpace' has a wrong offset!");
static_assert(offsetof(URidingPlayerLayerAnimBP_C, AnimGraphNode_ComponentToLocalSpace) == 0x000C78, "Member 'URidingPlayerLayerAnimBP_C::AnimGraphNode_ComponentToLocalSpace' has a wrong offset!");
static_assert(offsetof(URidingPlayerLayerAnimBP_C, AnimGraphNode_SaveCachedPose_1) == 0x000C98, "Member 'URidingPlayerLayerAnimBP_C::AnimGraphNode_SaveCachedPose_1' has a wrong offset!");
static_assert(offsetof(URidingPlayerLayerAnimBP_C, AnimGraphNode_UseCachedPose_5) == 0x000D98, "Member 'URidingPlayerLayerAnimBP_C::AnimGraphNode_UseCachedPose_5' has a wrong offset!");
static_assert(offsetof(URidingPlayerLayerAnimBP_C, AnimGraphNode_BlendListByBool_7) == 0x000DC0, "Member 'URidingPlayerLayerAnimBP_C::AnimGraphNode_BlendListByBool_7' has a wrong offset!");
static_assert(offsetof(URidingPlayerLayerAnimBP_C, AnimGraphNode_UseCachedPose_4) == 0x000E08, "Member 'URidingPlayerLayerAnimBP_C::AnimGraphNode_UseCachedPose_4' has a wrong offset!");
static_assert(offsetof(URidingPlayerLayerAnimBP_C, AnimGraphNode_RotateRootBone_1) == 0x000E30, "Member 'URidingPlayerLayerAnimBP_C::AnimGraphNode_RotateRootBone_1' has a wrong offset!");
static_assert(offsetof(URidingPlayerLayerAnimBP_C, AnimGraphNode_Slot_1) == 0x000ED8, "Member 'URidingPlayerLayerAnimBP_C::AnimGraphNode_Slot_1' has a wrong offset!");
static_assert(offsetof(URidingPlayerLayerAnimBP_C, AnimGraphNode_SequencePlayer_3) == 0x000F20, "Member 'URidingPlayerLayerAnimBP_C::AnimGraphNode_SequencePlayer_3' has a wrong offset!");
static_assert(offsetof(URidingPlayerLayerAnimBP_C, AnimGraphNode_RotationOffsetBlendSpace_1) == 0x000F60, "Member 'URidingPlayerLayerAnimBP_C::AnimGraphNode_RotationOffsetBlendSpace_1' has a wrong offset!");
static_assert(offsetof(URidingPlayerLayerAnimBP_C, AnimGraphNode_BlendSpacePlayer_1) == 0x001070, "Member 'URidingPlayerLayerAnimBP_C::AnimGraphNode_BlendSpacePlayer_1' has a wrong offset!");
static_assert(offsetof(URidingPlayerLayerAnimBP_C, AnimGraphNode_ApplyAdditive) == 0x0010D8, "Member 'URidingPlayerLayerAnimBP_C::AnimGraphNode_ApplyAdditive' has a wrong offset!");
static_assert(offsetof(URidingPlayerLayerAnimBP_C, AnimGraphNode_ModifyBone_3) == 0x0011A0, "Member 'URidingPlayerLayerAnimBP_C::AnimGraphNode_ModifyBone_3' has a wrong offset!");
static_assert(offsetof(URidingPlayerLayerAnimBP_C, AnimGraphNode_LinkedInputPose_5) == 0x0012C8, "Member 'URidingPlayerLayerAnimBP_C::AnimGraphNode_LinkedInputPose_5' has a wrong offset!");
static_assert(offsetof(URidingPlayerLayerAnimBP_C, AnimGraphNode_Root_3) == 0x001388, "Member 'URidingPlayerLayerAnimBP_C::AnimGraphNode_Root_3' has a wrong offset!");
static_assert(offsetof(URidingPlayerLayerAnimBP_C, AnimGraphNode_Slot) == 0x0013A8, "Member 'URidingPlayerLayerAnimBP_C::AnimGraphNode_Slot' has a wrong offset!");
static_assert(offsetof(URidingPlayerLayerAnimBP_C, AnimGraphNode_BlendListByBool_6) == 0x0013F0, "Member 'URidingPlayerLayerAnimBP_C::AnimGraphNode_BlendListByBool_6' has a wrong offset!");
static_assert(offsetof(URidingPlayerLayerAnimBP_C, AnimGraphNode_SequencePlayer_2) == 0x001438, "Member 'URidingPlayerLayerAnimBP_C::AnimGraphNode_SequencePlayer_2' has a wrong offset!");
static_assert(offsetof(URidingPlayerLayerAnimBP_C, AnimGraphNode_BlendListByBool_5) == 0x001478, "Member 'URidingPlayerLayerAnimBP_C::AnimGraphNode_BlendListByBool_5' has a wrong offset!");
static_assert(offsetof(URidingPlayerLayerAnimBP_C, AnimGraphNode_SaveCachedPose) == 0x0014C0, "Member 'URidingPlayerLayerAnimBP_C::AnimGraphNode_SaveCachedPose' has a wrong offset!");
static_assert(offsetof(URidingPlayerLayerAnimBP_C, AnimGraphNode_UseCachedPose_3) == 0x0015C0, "Member 'URidingPlayerLayerAnimBP_C::AnimGraphNode_UseCachedPose_3' has a wrong offset!");
static_assert(offsetof(URidingPlayerLayerAnimBP_C, AnimGraphNode_UseCachedPose_2) == 0x0015E8, "Member 'URidingPlayerLayerAnimBP_C::AnimGraphNode_UseCachedPose_2' has a wrong offset!");
static_assert(offsetof(URidingPlayerLayerAnimBP_C, AnimGraphNode_BlendListByBool_4) == 0x001610, "Member 'URidingPlayerLayerAnimBP_C::AnimGraphNode_BlendListByBool_4' has a wrong offset!");
static_assert(offsetof(URidingPlayerLayerAnimBP_C, AnimGraphNode_BlendSpacePlayer) == 0x001658, "Member 'URidingPlayerLayerAnimBP_C::AnimGraphNode_BlendSpacePlayer' has a wrong offset!");
static_assert(offsetof(URidingPlayerLayerAnimBP_C, AnimGraphNode_BlendListByBool_3) == 0x0016C0, "Member 'URidingPlayerLayerAnimBP_C::AnimGraphNode_BlendListByBool_3' has a wrong offset!");
static_assert(offsetof(URidingPlayerLayerAnimBP_C, AnimGraphNode_RotateRootBone) == 0x001708, "Member 'URidingPlayerLayerAnimBP_C::AnimGraphNode_RotateRootBone' has a wrong offset!");
static_assert(offsetof(URidingPlayerLayerAnimBP_C, AnimGraphNode_SequencePlayer_1) == 0x0017B0, "Member 'URidingPlayerLayerAnimBP_C::AnimGraphNode_SequencePlayer_1' has a wrong offset!");
static_assert(offsetof(URidingPlayerLayerAnimBP_C, AnimGraphNode_BlendListByBool_2) == 0x0017F0, "Member 'URidingPlayerLayerAnimBP_C::AnimGraphNode_BlendListByBool_2' has a wrong offset!");
static_assert(offsetof(URidingPlayerLayerAnimBP_C, AnimGraphNode_UseCachedPose_1) == 0x001838, "Member 'URidingPlayerLayerAnimBP_C::AnimGraphNode_UseCachedPose_1' has a wrong offset!");
static_assert(offsetof(URidingPlayerLayerAnimBP_C, AnimGraphNode_BlendListByBool_1) == 0x001860, "Member 'URidingPlayerLayerAnimBP_C::AnimGraphNode_BlendListByBool_1' has a wrong offset!");
static_assert(offsetof(URidingPlayerLayerAnimBP_C, AnimGraphNode_SequencePlayer) == 0x0018A8, "Member 'URidingPlayerLayerAnimBP_C::AnimGraphNode_SequencePlayer' has a wrong offset!");
static_assert(offsetof(URidingPlayerLayerAnimBP_C, AnimGraphNode_BlendListByBool) == 0x0018E8, "Member 'URidingPlayerLayerAnimBP_C::AnimGraphNode_BlendListByBool' has a wrong offset!");
static_assert(offsetof(URidingPlayerLayerAnimBP_C, AnimGraphNode_RotationOffsetBlendSpace) == 0x001930, "Member 'URidingPlayerLayerAnimBP_C::AnimGraphNode_RotationOffsetBlendSpace' has a wrong offset!");
static_assert(offsetof(URidingPlayerLayerAnimBP_C, AnimGraphNode_UseCachedPose) == 0x001A40, "Member 'URidingPlayerLayerAnimBP_C::AnimGraphNode_UseCachedPose' has a wrong offset!");
static_assert(offsetof(URidingPlayerLayerAnimBP_C, AnimGraphNode_ModifyBone_2) == 0x001A68, "Member 'URidingPlayerLayerAnimBP_C::AnimGraphNode_ModifyBone_2' has a wrong offset!");
static_assert(offsetof(URidingPlayerLayerAnimBP_C, AnimGraphNode_ModifyBone_1) == 0x001B90, "Member 'URidingPlayerLayerAnimBP_C::AnimGraphNode_ModifyBone_1' has a wrong offset!");
static_assert(offsetof(URidingPlayerLayerAnimBP_C, AnimGraphNode_ModifyBone) == 0x001CB8, "Member 'URidingPlayerLayerAnimBP_C::AnimGraphNode_ModifyBone' has a wrong offset!");
static_assert(offsetof(URidingPlayerLayerAnimBP_C, AnimGraphNode_Root_2) == 0x001DE0, "Member 'URidingPlayerLayerAnimBP_C::AnimGraphNode_Root_2' has a wrong offset!");
static_assert(offsetof(URidingPlayerLayerAnimBP_C, AnimGraphNode_LinkedInputPose_4) == 0x001E00, "Member 'URidingPlayerLayerAnimBP_C::AnimGraphNode_LinkedInputPose_4' has a wrong offset!");
static_assert(offsetof(URidingPlayerLayerAnimBP_C, AnimGraphNode_LinkedInputPose_3) == 0x001EC0, "Member 'URidingPlayerLayerAnimBP_C::AnimGraphNode_LinkedInputPose_3' has a wrong offset!");
static_assert(offsetof(URidingPlayerLayerAnimBP_C, AnimGraphNode_Root_1) == 0x001F80, "Member 'URidingPlayerLayerAnimBP_C::AnimGraphNode_Root_1' has a wrong offset!");
static_assert(offsetof(URidingPlayerLayerAnimBP_C, AnimGraphNode_LinkedInputPose_2) == 0x001FA0, "Member 'URidingPlayerLayerAnimBP_C::AnimGraphNode_LinkedInputPose_2' has a wrong offset!");
static_assert(offsetof(URidingPlayerLayerAnimBP_C, AnimGraphNode_LinkedInputPose_1) == 0x002060, "Member 'URidingPlayerLayerAnimBP_C::AnimGraphNode_LinkedInputPose_1' has a wrong offset!");
static_assert(offsetof(URidingPlayerLayerAnimBP_C, AnimGraphNode_LinkedInputPose) == 0x002120, "Member 'URidingPlayerLayerAnimBP_C::AnimGraphNode_LinkedInputPose' has a wrong offset!");
static_assert(offsetof(URidingPlayerLayerAnimBP_C, AnimGraphNode_Root) == 0x0021E0, "Member 'URidingPlayerLayerAnimBP_C::AnimGraphNode_Root' has a wrong offset!");
static_assert(offsetof(URidingPlayerLayerAnimBP_C, MatchRootYaw) == 0x002200, "Member 'URidingPlayerLayerAnimBP_C::MatchRootYaw' has a wrong offset!");
static_assert(offsetof(URidingPlayerLayerAnimBP_C, Is_Targeting) == 0x002218, "Member 'URidingPlayerLayerAnimBP_C::Is_Targeting' has a wrong offset!");
static_assert(offsetof(URidingPlayerLayerAnimBP_C, FortPlayer) == 0x002220, "Member 'URidingPlayerLayerAnimBP_C::FortPlayer' has a wrong offset!");
static_assert(offsetof(URidingPlayerLayerAnimBP_C, Timer) == 0x002228, "Member 'URidingPlayerLayerAnimBP_C::Timer' has a wrong offset!");
static_assert(offsetof(URidingPlayerLayerAnimBP_C, ShouldTransitionToRiding) == 0x00222C, "Member 'URidingPlayerLayerAnimBP_C::ShouldTransitionToRiding' has a wrong offset!");
static_assert(offsetof(URidingPlayerLayerAnimBP_C, LowerBodyYaw) == 0x002230, "Member 'URidingPlayerLayerAnimBP_C::LowerBodyYaw' has a wrong offset!");
static_assert(offsetof(URidingPlayerLayerAnimBP_C, IsRideMode) == 0x002234, "Member 'URidingPlayerLayerAnimBP_C::IsRideMode' has a wrong offset!");
static_assert(offsetof(URidingPlayerLayerAnimBP_C, IsSprinting) == 0x002235, "Member 'URidingPlayerLayerAnimBP_C::IsSprinting' has a wrong offset!");
static_assert(offsetof(URidingPlayerLayerAnimBP_C, IsStandingStill) == 0x002236, "Member 'URidingPlayerLayerAnimBP_C::IsStandingStill' has a wrong offset!");
static_assert(offsetof(URidingPlayerLayerAnimBP_C, IsInCombat) == 0x002237, "Member 'URidingPlayerLayerAnimBP_C::IsInCombat' has a wrong offset!");
static_assert(offsetof(URidingPlayerLayerAnimBP_C, WildlifePawn) == 0x002238, "Member 'URidingPlayerLayerAnimBP_C::WildlifePawn' has a wrong offset!");
static_assert(offsetof(URidingPlayerLayerAnimBP_C, IsSmackie) == 0x002240, "Member 'URidingPlayerLayerAnimBP_C::IsSmackie' has a wrong offset!");
static_assert(offsetof(URidingPlayerLayerAnimBP_C, Velocity) == 0x002244, "Member 'URidingPlayerLayerAnimBP_C::Velocity' has a wrong offset!");
static_assert(offsetof(URidingPlayerLayerAnimBP_C, IsNug) == 0x002248, "Member 'URidingPlayerLayerAnimBP_C::IsNug' has a wrong offset!");

}

