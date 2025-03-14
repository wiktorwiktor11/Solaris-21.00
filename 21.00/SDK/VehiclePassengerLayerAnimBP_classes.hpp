﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: VehiclePassengerLayerAnimBP

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "VehiclePassengerLayerAnimBP_structs.hpp"
#include "AnimGraphRuntime_structs.hpp"
#include "FortniteGame_classes.hpp"


namespace SDK
{

// AnimBlueprintGeneratedClass VehiclePassengerLayerAnimBP.VehiclePassengerLayerAnimBP_C
// 0x0AC0 (0x0F50 - 0x0490)
class UVehiclePassengerLayerAnimBP_C final : public UFortVehicleLayerAnimInstance
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0490(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct VehiclePassengerLayerAnimBP::FAnimBlueprintGeneratedMutableData __AnimBlueprintMutables;                           // 0x0498(0x0018)(HasGetValueTypeHash)
	struct FAnimSubsystemInstance                 AnimBlueprintExtension_PropertyAccess;             // 0x04B0(0x0008)()
	struct FAnimSubsystemInstance                 AnimBlueprintExtension_Base;                       // 0x04B8(0x0008)()
	struct FAnimNode_Root                         AnimGraphNode_Root_3;                              // 0x04C0(0x0020)()
	struct FAnimNode_LinkedInputPose              AnimGraphNode_LinkedInputPose_6;                   // 0x04E0(0x00C0)()
	struct FAnimNode_LinkedInputPose              AnimGraphNode_LinkedInputPose_5;                   // 0x05A0(0x00C0)()
	struct FAnimNode_Root                         AnimGraphNode_Root_2;                              // 0x0660(0x0020)()
	struct FAnimNode_LinkedInputPose              AnimGraphNode_LinkedInputPose_4;                   // 0x0680(0x00C0)()
	struct FAnimNode_LinkedInputPose              AnimGraphNode_LinkedInputPose_3;                   // 0x0740(0x00C0)()
	struct FAnimNode_Root                         AnimGraphNode_Root_1;                              // 0x0800(0x0020)()
	struct FAnimNode_LinkedInputPose              AnimGraphNode_LinkedInputPose_2;                   // 0x0820(0x00C0)()
	struct FAnimNode_RotationOffsetBlendSpace     AnimGraphNode_RotationOffsetBlendSpace_2;          // 0x08E0(0x0110)()
	struct FAnimNode_RotationOffsetBlendSpace     AnimGraphNode_RotationOffsetBlendSpace_1;          // 0x09F0(0x0110)()
	struct FAnimNode_RotationOffsetBlendSpace     AnimGraphNode_RotationOffsetBlendSpace;            // 0x0B00(0x0110)()
	struct FAnimNode_LinkedInputPose              AnimGraphNode_LinkedInputPose_1;                   // 0x0C10(0x00C0)()
	struct FAnimNode_BlendListByBool              AnimGraphNode_BlendListByBool;                     // 0x0CD0(0x0048)()
	struct FAnimNode_SaveCachedPose               AnimGraphNode_SaveCachedPose;                      // 0x0D18(0x0100)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_1;                     // 0x0E18(0x0028)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose;                       // 0x0E40(0x0028)()
	struct FAnimNode_LinkedInputPose              AnimGraphNode_LinkedInputPose;                     // 0x0E68(0x00C0)()
	struct FAnimNode_Root                         AnimGraphNode_Root;                                // 0x0F28(0x0020)()
	float                                         DisableNoise;                                      // 0x0F48(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void AnimGraph(struct FPoseLink* AnimGraph_0);
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void ExecuteUbergraph_VehiclePassengerLayerAnimBP(int32 EntryPoint);
	void VehicleFullBodyOverride(const struct FPoseLink& InPoseFullBody, const struct FPoseLink& InPoseUpperAndLowerCachePose, struct FPoseLink* VehicleFullBodyOverride_0);
	void VehicleLowerBodyOverride(const struct FPoseLink& InPoseLowerBodyDefault, const struct FPoseLink& InPoseUpperBody, struct FPoseLink* VehicleLowerBodyOverride_0);
	void VehicleSplitBodyOverride(const struct FPoseLink& InPoseSplitBody, const struct FPoseLink& InPoseUpperAndLowerBody, const struct FFortAnimInput_TurnInPlace& TurnInPlace, const struct FPoseLink& InPoseUpperAndLowerBodyRemoveRoot, struct FPoseLink* VehicleSplitBodyOverride_0);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"VehiclePassengerLayerAnimBP_C">();
	}
	static class UVehiclePassengerLayerAnimBP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UVehiclePassengerLayerAnimBP_C>();
	}
};
static_assert(alignof(UVehiclePassengerLayerAnimBP_C) == 0x000010, "Wrong alignment on UVehiclePassengerLayerAnimBP_C");
static_assert(sizeof(UVehiclePassengerLayerAnimBP_C) == 0x000F50, "Wrong size on UVehiclePassengerLayerAnimBP_C");
static_assert(offsetof(UVehiclePassengerLayerAnimBP_C, UberGraphFrame) == 0x000490, "Member 'UVehiclePassengerLayerAnimBP_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UVehiclePassengerLayerAnimBP_C, __AnimBlueprintMutables) == 0x000498, "Member 'UVehiclePassengerLayerAnimBP_C::__AnimBlueprintMutables' has a wrong offset!");
static_assert(offsetof(UVehiclePassengerLayerAnimBP_C, AnimBlueprintExtension_PropertyAccess) == 0x0004B0, "Member 'UVehiclePassengerLayerAnimBP_C::AnimBlueprintExtension_PropertyAccess' has a wrong offset!");
static_assert(offsetof(UVehiclePassengerLayerAnimBP_C, AnimBlueprintExtension_Base) == 0x0004B8, "Member 'UVehiclePassengerLayerAnimBP_C::AnimBlueprintExtension_Base' has a wrong offset!");
static_assert(offsetof(UVehiclePassengerLayerAnimBP_C, AnimGraphNode_Root_3) == 0x0004C0, "Member 'UVehiclePassengerLayerAnimBP_C::AnimGraphNode_Root_3' has a wrong offset!");
static_assert(offsetof(UVehiclePassengerLayerAnimBP_C, AnimGraphNode_LinkedInputPose_6) == 0x0004E0, "Member 'UVehiclePassengerLayerAnimBP_C::AnimGraphNode_LinkedInputPose_6' has a wrong offset!");
static_assert(offsetof(UVehiclePassengerLayerAnimBP_C, AnimGraphNode_LinkedInputPose_5) == 0x0005A0, "Member 'UVehiclePassengerLayerAnimBP_C::AnimGraphNode_LinkedInputPose_5' has a wrong offset!");
static_assert(offsetof(UVehiclePassengerLayerAnimBP_C, AnimGraphNode_Root_2) == 0x000660, "Member 'UVehiclePassengerLayerAnimBP_C::AnimGraphNode_Root_2' has a wrong offset!");
static_assert(offsetof(UVehiclePassengerLayerAnimBP_C, AnimGraphNode_LinkedInputPose_4) == 0x000680, "Member 'UVehiclePassengerLayerAnimBP_C::AnimGraphNode_LinkedInputPose_4' has a wrong offset!");
static_assert(offsetof(UVehiclePassengerLayerAnimBP_C, AnimGraphNode_LinkedInputPose_3) == 0x000740, "Member 'UVehiclePassengerLayerAnimBP_C::AnimGraphNode_LinkedInputPose_3' has a wrong offset!");
static_assert(offsetof(UVehiclePassengerLayerAnimBP_C, AnimGraphNode_Root_1) == 0x000800, "Member 'UVehiclePassengerLayerAnimBP_C::AnimGraphNode_Root_1' has a wrong offset!");
static_assert(offsetof(UVehiclePassengerLayerAnimBP_C, AnimGraphNode_LinkedInputPose_2) == 0x000820, "Member 'UVehiclePassengerLayerAnimBP_C::AnimGraphNode_LinkedInputPose_2' has a wrong offset!");
static_assert(offsetof(UVehiclePassengerLayerAnimBP_C, AnimGraphNode_RotationOffsetBlendSpace_2) == 0x0008E0, "Member 'UVehiclePassengerLayerAnimBP_C::AnimGraphNode_RotationOffsetBlendSpace_2' has a wrong offset!");
static_assert(offsetof(UVehiclePassengerLayerAnimBP_C, AnimGraphNode_RotationOffsetBlendSpace_1) == 0x0009F0, "Member 'UVehiclePassengerLayerAnimBP_C::AnimGraphNode_RotationOffsetBlendSpace_1' has a wrong offset!");
static_assert(offsetof(UVehiclePassengerLayerAnimBP_C, AnimGraphNode_RotationOffsetBlendSpace) == 0x000B00, "Member 'UVehiclePassengerLayerAnimBP_C::AnimGraphNode_RotationOffsetBlendSpace' has a wrong offset!");
static_assert(offsetof(UVehiclePassengerLayerAnimBP_C, AnimGraphNode_LinkedInputPose_1) == 0x000C10, "Member 'UVehiclePassengerLayerAnimBP_C::AnimGraphNode_LinkedInputPose_1' has a wrong offset!");
static_assert(offsetof(UVehiclePassengerLayerAnimBP_C, AnimGraphNode_BlendListByBool) == 0x000CD0, "Member 'UVehiclePassengerLayerAnimBP_C::AnimGraphNode_BlendListByBool' has a wrong offset!");
static_assert(offsetof(UVehiclePassengerLayerAnimBP_C, AnimGraphNode_SaveCachedPose) == 0x000D18, "Member 'UVehiclePassengerLayerAnimBP_C::AnimGraphNode_SaveCachedPose' has a wrong offset!");
static_assert(offsetof(UVehiclePassengerLayerAnimBP_C, AnimGraphNode_UseCachedPose_1) == 0x000E18, "Member 'UVehiclePassengerLayerAnimBP_C::AnimGraphNode_UseCachedPose_1' has a wrong offset!");
static_assert(offsetof(UVehiclePassengerLayerAnimBP_C, AnimGraphNode_UseCachedPose) == 0x000E40, "Member 'UVehiclePassengerLayerAnimBP_C::AnimGraphNode_UseCachedPose' has a wrong offset!");
static_assert(offsetof(UVehiclePassengerLayerAnimBP_C, AnimGraphNode_LinkedInputPose) == 0x000E68, "Member 'UVehiclePassengerLayerAnimBP_C::AnimGraphNode_LinkedInputPose' has a wrong offset!");
static_assert(offsetof(UVehiclePassengerLayerAnimBP_C, AnimGraphNode_Root) == 0x000F28, "Member 'UVehiclePassengerLayerAnimBP_C::AnimGraphNode_Root' has a wrong offset!");
static_assert(offsetof(UVehiclePassengerLayerAnimBP_C, DisableNoise) == 0x000F48, "Member 'UVehiclePassengerLayerAnimBP_C::DisableNoise' has a wrong offset!");

}

