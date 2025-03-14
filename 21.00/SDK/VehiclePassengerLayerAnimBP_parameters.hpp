﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: VehiclePassengerLayerAnimBP

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteGame_structs.hpp"


namespace SDK::Params
{

// Function VehiclePassengerLayerAnimBP.VehiclePassengerLayerAnimBP_C.AnimGraph
// 0x0010 (0x0010 - 0x0000)
struct VehiclePassengerLayerAnimBP_C_AnimGraph final
{
public:
	struct FPoseLink                              AnimGraph_0;                                       // 0x0000(0x0010)(Parm, OutParm, NoDestructor)
};
static_assert(alignof(VehiclePassengerLayerAnimBP_C_AnimGraph) == 0x000008, "Wrong alignment on VehiclePassengerLayerAnimBP_C_AnimGraph");
static_assert(sizeof(VehiclePassengerLayerAnimBP_C_AnimGraph) == 0x000010, "Wrong size on VehiclePassengerLayerAnimBP_C_AnimGraph");
static_assert(offsetof(VehiclePassengerLayerAnimBP_C_AnimGraph, AnimGraph_0) == 0x000000, "Member 'VehiclePassengerLayerAnimBP_C_AnimGraph::AnimGraph_0' has a wrong offset!");

// Function VehiclePassengerLayerAnimBP.VehiclePassengerLayerAnimBP_C.BlueprintUpdateAnimation
// 0x0004 (0x0004 - 0x0000)
struct VehiclePassengerLayerAnimBP_C_BlueprintUpdateAnimation final
{
public:
	float                                         DeltaTimeX;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(VehiclePassengerLayerAnimBP_C_BlueprintUpdateAnimation) == 0x000004, "Wrong alignment on VehiclePassengerLayerAnimBP_C_BlueprintUpdateAnimation");
static_assert(sizeof(VehiclePassengerLayerAnimBP_C_BlueprintUpdateAnimation) == 0x000004, "Wrong size on VehiclePassengerLayerAnimBP_C_BlueprintUpdateAnimation");
static_assert(offsetof(VehiclePassengerLayerAnimBP_C_BlueprintUpdateAnimation, DeltaTimeX) == 0x000000, "Member 'VehiclePassengerLayerAnimBP_C_BlueprintUpdateAnimation::DeltaTimeX' has a wrong offset!");

// Function VehiclePassengerLayerAnimBP.VehiclePassengerLayerAnimBP_C.ExecuteUbergraph_VehiclePassengerLayerAnimBP
// 0x0008 (0x0008 - 0x0000)
struct VehiclePassengerLayerAnimBP_C_ExecuteUbergraph_VehiclePassengerLayerAnimBP final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_DeltaTimeX;                           // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(VehiclePassengerLayerAnimBP_C_ExecuteUbergraph_VehiclePassengerLayerAnimBP) == 0x000004, "Wrong alignment on VehiclePassengerLayerAnimBP_C_ExecuteUbergraph_VehiclePassengerLayerAnimBP");
static_assert(sizeof(VehiclePassengerLayerAnimBP_C_ExecuteUbergraph_VehiclePassengerLayerAnimBP) == 0x000008, "Wrong size on VehiclePassengerLayerAnimBP_C_ExecuteUbergraph_VehiclePassengerLayerAnimBP");
static_assert(offsetof(VehiclePassengerLayerAnimBP_C_ExecuteUbergraph_VehiclePassengerLayerAnimBP, EntryPoint) == 0x000000, "Member 'VehiclePassengerLayerAnimBP_C_ExecuteUbergraph_VehiclePassengerLayerAnimBP::EntryPoint' has a wrong offset!");
static_assert(offsetof(VehiclePassengerLayerAnimBP_C_ExecuteUbergraph_VehiclePassengerLayerAnimBP, K2Node_Event_DeltaTimeX) == 0x000004, "Member 'VehiclePassengerLayerAnimBP_C_ExecuteUbergraph_VehiclePassengerLayerAnimBP::K2Node_Event_DeltaTimeX' has a wrong offset!");

// Function VehiclePassengerLayerAnimBP.VehiclePassengerLayerAnimBP_C.VehicleFullBodyOverride
// 0x0030 (0x0030 - 0x0000)
struct VehiclePassengerLayerAnimBP_C_VehicleFullBodyOverride final
{
public:
	struct FPoseLink                              InPoseFullBody;                                    // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FPoseLink                              InPoseUpperAndLowerCachePose;                      // 0x0010(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FPoseLink                              VehicleFullBodyOverride_0;                         // 0x0020(0x0010)(Parm, OutParm, NoDestructor)
};
static_assert(alignof(VehiclePassengerLayerAnimBP_C_VehicleFullBodyOverride) == 0x000008, "Wrong alignment on VehiclePassengerLayerAnimBP_C_VehicleFullBodyOverride");
static_assert(sizeof(VehiclePassengerLayerAnimBP_C_VehicleFullBodyOverride) == 0x000030, "Wrong size on VehiclePassengerLayerAnimBP_C_VehicleFullBodyOverride");
static_assert(offsetof(VehiclePassengerLayerAnimBP_C_VehicleFullBodyOverride, InPoseFullBody) == 0x000000, "Member 'VehiclePassengerLayerAnimBP_C_VehicleFullBodyOverride::InPoseFullBody' has a wrong offset!");
static_assert(offsetof(VehiclePassengerLayerAnimBP_C_VehicleFullBodyOverride, InPoseUpperAndLowerCachePose) == 0x000010, "Member 'VehiclePassengerLayerAnimBP_C_VehicleFullBodyOverride::InPoseUpperAndLowerCachePose' has a wrong offset!");
static_assert(offsetof(VehiclePassengerLayerAnimBP_C_VehicleFullBodyOverride, VehicleFullBodyOverride_0) == 0x000020, "Member 'VehiclePassengerLayerAnimBP_C_VehicleFullBodyOverride::VehicleFullBodyOverride_0' has a wrong offset!");

// Function VehiclePassengerLayerAnimBP.VehiclePassengerLayerAnimBP_C.VehicleLowerBodyOverride
// 0x0030 (0x0030 - 0x0000)
struct VehiclePassengerLayerAnimBP_C_VehicleLowerBodyOverride final
{
public:
	struct FPoseLink                              InPoseLowerBodyDefault;                            // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FPoseLink                              InPoseUpperBody;                                   // 0x0010(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FPoseLink                              VehicleLowerBodyOverride_0;                        // 0x0020(0x0010)(Parm, OutParm, NoDestructor)
};
static_assert(alignof(VehiclePassengerLayerAnimBP_C_VehicleLowerBodyOverride) == 0x000008, "Wrong alignment on VehiclePassengerLayerAnimBP_C_VehicleLowerBodyOverride");
static_assert(sizeof(VehiclePassengerLayerAnimBP_C_VehicleLowerBodyOverride) == 0x000030, "Wrong size on VehiclePassengerLayerAnimBP_C_VehicleLowerBodyOverride");
static_assert(offsetof(VehiclePassengerLayerAnimBP_C_VehicleLowerBodyOverride, InPoseLowerBodyDefault) == 0x000000, "Member 'VehiclePassengerLayerAnimBP_C_VehicleLowerBodyOverride::InPoseLowerBodyDefault' has a wrong offset!");
static_assert(offsetof(VehiclePassengerLayerAnimBP_C_VehicleLowerBodyOverride, InPoseUpperBody) == 0x000010, "Member 'VehiclePassengerLayerAnimBP_C_VehicleLowerBodyOverride::InPoseUpperBody' has a wrong offset!");
static_assert(offsetof(VehiclePassengerLayerAnimBP_C_VehicleLowerBodyOverride, VehicleLowerBodyOverride_0) == 0x000020, "Member 'VehiclePassengerLayerAnimBP_C_VehicleLowerBodyOverride::VehicleLowerBodyOverride_0' has a wrong offset!");

// Function VehiclePassengerLayerAnimBP.VehiclePassengerLayerAnimBP_C.VehicleSplitBodyOverride
// 0x00B8 (0x00B8 - 0x0000)
struct VehiclePassengerLayerAnimBP_C_VehicleSplitBodyOverride final
{
public:
	struct FPoseLink                              InPoseSplitBody;                                   // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FPoseLink                              InPoseUpperAndLowerBody;                           // 0x0010(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FFortAnimInput_TurnInPlace             TurnInPlace;                                       // 0x0020(0x0078)(BlueprintVisible, BlueprintReadOnly, Parm)
	struct FPoseLink                              InPoseUpperAndLowerBodyRemoveRoot;                 // 0x0098(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FPoseLink                              VehicleSplitBodyOverride_0;                        // 0x00A8(0x0010)(Parm, OutParm, NoDestructor)
};
static_assert(alignof(VehiclePassengerLayerAnimBP_C_VehicleSplitBodyOverride) == 0x000008, "Wrong alignment on VehiclePassengerLayerAnimBP_C_VehicleSplitBodyOverride");
static_assert(sizeof(VehiclePassengerLayerAnimBP_C_VehicleSplitBodyOverride) == 0x0000B8, "Wrong size on VehiclePassengerLayerAnimBP_C_VehicleSplitBodyOverride");
static_assert(offsetof(VehiclePassengerLayerAnimBP_C_VehicleSplitBodyOverride, InPoseSplitBody) == 0x000000, "Member 'VehiclePassengerLayerAnimBP_C_VehicleSplitBodyOverride::InPoseSplitBody' has a wrong offset!");
static_assert(offsetof(VehiclePassengerLayerAnimBP_C_VehicleSplitBodyOverride, InPoseUpperAndLowerBody) == 0x000010, "Member 'VehiclePassengerLayerAnimBP_C_VehicleSplitBodyOverride::InPoseUpperAndLowerBody' has a wrong offset!");
static_assert(offsetof(VehiclePassengerLayerAnimBP_C_VehicleSplitBodyOverride, TurnInPlace) == 0x000020, "Member 'VehiclePassengerLayerAnimBP_C_VehicleSplitBodyOverride::TurnInPlace' has a wrong offset!");
static_assert(offsetof(VehiclePassengerLayerAnimBP_C_VehicleSplitBodyOverride, InPoseUpperAndLowerBodyRemoveRoot) == 0x000098, "Member 'VehiclePassengerLayerAnimBP_C_VehicleSplitBodyOverride::InPoseUpperAndLowerBodyRemoveRoot' has a wrong offset!");
static_assert(offsetof(VehiclePassengerLayerAnimBP_C_VehicleSplitBodyOverride, VehicleSplitBodyOverride_0) == 0x0000A8, "Member 'VehiclePassengerLayerAnimBP_C_VehicleSplitBodyOverride::VehicleSplitBodyOverride_0' has a wrong offset!");

}

