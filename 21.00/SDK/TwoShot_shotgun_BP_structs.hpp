﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TwoShot_shotgun_BP

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "AnimGraphRuntime_structs.hpp"


namespace SDK
{

// ScriptStruct TwoShot_shotgun_BP.TwoShot_shotgun_BP_C.AnimBlueprintGeneratedConstantData
// 0x00BF (0x00C0 - 0x0001)
struct TwoShot_shotgun_BP::FAnimBlueprintGeneratedConstantData final : public FAnimBlueprintConstantData
{
public:
	uint8                                         Pad_1[0x3];                                        // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   __NameProperty_16;                                 // 0x0004(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   __NameProperty_17;                                 // 0x0008(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ERefPoseType                                  __ByteProperty_18;                                 // 0x000C(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_D[0x3];                                        // 0x000D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FAnimNodeFunctionRef                   __StructProperty_19;                               // 0x0010(0x0018)(BlueprintVisible, NoDestructor)
	struct FAnimSubsystem_PropertyAccess          AnimBlueprintExtension_PropertyAccess;             // 0x0028(0x0080)()
	struct FAnimSubsystem_Base                    AnimBlueprintExtension_Base;                       // 0x00A8(0x0018)()
};
static_assert(alignof(TwoShot_shotgun_BP::FAnimBlueprintGeneratedConstantData) == 0x000008, "Wrong alignment on TwoShot_shotgun_BP::FAnimBlueprintGeneratedConstantData");
static_assert(sizeof(TwoShot_shotgun_BP::FAnimBlueprintGeneratedConstantData) == 0x0000C0, "Wrong size on TwoShot_shotgun_BP::FAnimBlueprintGeneratedConstantData");
static_assert(offsetof(TwoShot_shotgun_BP::FAnimBlueprintGeneratedConstantData, __NameProperty_16) == 0x000004, "Member 'TwoShot_shotgun_BP::FAnimBlueprintGeneratedConstantData::__NameProperty_16' has a wrong offset!");
static_assert(offsetof(TwoShot_shotgun_BP::FAnimBlueprintGeneratedConstantData, __NameProperty_17) == 0x000008, "Member 'TwoShot_shotgun_BP::FAnimBlueprintGeneratedConstantData::__NameProperty_17' has a wrong offset!");
static_assert(offsetof(TwoShot_shotgun_BP::FAnimBlueprintGeneratedConstantData, __ByteProperty_18) == 0x00000C, "Member 'TwoShot_shotgun_BP::FAnimBlueprintGeneratedConstantData::__ByteProperty_18' has a wrong offset!");
static_assert(offsetof(TwoShot_shotgun_BP::FAnimBlueprintGeneratedConstantData, __StructProperty_19) == 0x000010, "Member 'TwoShot_shotgun_BP::FAnimBlueprintGeneratedConstantData::__StructProperty_19' has a wrong offset!");
static_assert(offsetof(TwoShot_shotgun_BP::FAnimBlueprintGeneratedConstantData, AnimBlueprintExtension_PropertyAccess) == 0x000028, "Member 'TwoShot_shotgun_BP::FAnimBlueprintGeneratedConstantData::AnimBlueprintExtension_PropertyAccess' has a wrong offset!");
static_assert(offsetof(TwoShot_shotgun_BP::FAnimBlueprintGeneratedConstantData, AnimBlueprintExtension_Base) == 0x0000A8, "Member 'TwoShot_shotgun_BP::FAnimBlueprintGeneratedConstantData::AnimBlueprintExtension_Base' has a wrong offset!");

}

