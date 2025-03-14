﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: JungleTemple_Face_Bottom

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function JungleTemple_Face_Bottom.JungleTemple_Face_Bottom_C.ExecuteUbergraph_JungleTemple_Face_Bottom
// 0x0108 (0x0108 - 0x0000)
struct JungleTemple_Face_Bottom_C_ExecuteUbergraph_JungleTemple_Face_Bottom final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsDedicatedServer_ReturnValue;            // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHitResult                             CallFunc_K2_AddLocalOffset_SweepHitResult;         // 0x0008(0x00E0)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	struct FVector                                CallFunc_Conv_LinearColorToVector_ReturnValue;     // 0x00E8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsDedicatedServer_ReturnValue_1;          // 0x0100(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(JungleTemple_Face_Bottom_C_ExecuteUbergraph_JungleTemple_Face_Bottom) == 0x000008, "Wrong alignment on JungleTemple_Face_Bottom_C_ExecuteUbergraph_JungleTemple_Face_Bottom");
static_assert(sizeof(JungleTemple_Face_Bottom_C_ExecuteUbergraph_JungleTemple_Face_Bottom) == 0x000108, "Wrong size on JungleTemple_Face_Bottom_C_ExecuteUbergraph_JungleTemple_Face_Bottom");
static_assert(offsetof(JungleTemple_Face_Bottom_C_ExecuteUbergraph_JungleTemple_Face_Bottom, EntryPoint) == 0x000000, "Member 'JungleTemple_Face_Bottom_C_ExecuteUbergraph_JungleTemple_Face_Bottom::EntryPoint' has a wrong offset!");
static_assert(offsetof(JungleTemple_Face_Bottom_C_ExecuteUbergraph_JungleTemple_Face_Bottom, CallFunc_IsDedicatedServer_ReturnValue) == 0x000004, "Member 'JungleTemple_Face_Bottom_C_ExecuteUbergraph_JungleTemple_Face_Bottom::CallFunc_IsDedicatedServer_ReturnValue' has a wrong offset!");
static_assert(offsetof(JungleTemple_Face_Bottom_C_ExecuteUbergraph_JungleTemple_Face_Bottom, CallFunc_K2_AddLocalOffset_SweepHitResult) == 0x000008, "Member 'JungleTemple_Face_Bottom_C_ExecuteUbergraph_JungleTemple_Face_Bottom::CallFunc_K2_AddLocalOffset_SweepHitResult' has a wrong offset!");
static_assert(offsetof(JungleTemple_Face_Bottom_C_ExecuteUbergraph_JungleTemple_Face_Bottom, CallFunc_Conv_LinearColorToVector_ReturnValue) == 0x0000E8, "Member 'JungleTemple_Face_Bottom_C_ExecuteUbergraph_JungleTemple_Face_Bottom::CallFunc_Conv_LinearColorToVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(JungleTemple_Face_Bottom_C_ExecuteUbergraph_JungleTemple_Face_Bottom, CallFunc_IsDedicatedServer_ReturnValue_1) == 0x000100, "Member 'JungleTemple_Face_Bottom_C_ExecuteUbergraph_JungleTemple_Face_Bottom::CallFunc_IsDedicatedServer_ReturnValue_1' has a wrong offset!");

// Function JungleTemple_Face_Bottom.JungleTemple_Face_Bottom_C.UserConstructionScript
// 0x0110 (0x0110 - 0x0000)
struct JungleTemple_Face_Bottom_C_UserConstructionScript final
{
public:
	bool                                          CallFunc_IsDedicatedServer_ReturnValue;            // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInterface*                     CallFunc_GetMaterial_ReturnValue;                  // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Conv_LinearColorToVector_ReturnValue;     // 0x0010(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               CallFunc_CreateDynamicMaterialInstance_ReturnValue; // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             CallFunc_K2_AddLocalOffset_SweepHitResult;         // 0x0030(0x00E0)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
};
static_assert(alignof(JungleTemple_Face_Bottom_C_UserConstructionScript) == 0x000008, "Wrong alignment on JungleTemple_Face_Bottom_C_UserConstructionScript");
static_assert(sizeof(JungleTemple_Face_Bottom_C_UserConstructionScript) == 0x000110, "Wrong size on JungleTemple_Face_Bottom_C_UserConstructionScript");
static_assert(offsetof(JungleTemple_Face_Bottom_C_UserConstructionScript, CallFunc_IsDedicatedServer_ReturnValue) == 0x000000, "Member 'JungleTemple_Face_Bottom_C_UserConstructionScript::CallFunc_IsDedicatedServer_ReturnValue' has a wrong offset!");
static_assert(offsetof(JungleTemple_Face_Bottom_C_UserConstructionScript, CallFunc_GetMaterial_ReturnValue) == 0x000008, "Member 'JungleTemple_Face_Bottom_C_UserConstructionScript::CallFunc_GetMaterial_ReturnValue' has a wrong offset!");
static_assert(offsetof(JungleTemple_Face_Bottom_C_UserConstructionScript, CallFunc_Conv_LinearColorToVector_ReturnValue) == 0x000010, "Member 'JungleTemple_Face_Bottom_C_UserConstructionScript::CallFunc_Conv_LinearColorToVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(JungleTemple_Face_Bottom_C_UserConstructionScript, CallFunc_CreateDynamicMaterialInstance_ReturnValue) == 0x000028, "Member 'JungleTemple_Face_Bottom_C_UserConstructionScript::CallFunc_CreateDynamicMaterialInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(JungleTemple_Face_Bottom_C_UserConstructionScript, CallFunc_K2_AddLocalOffset_SweepHitResult) == 0x000030, "Member 'JungleTemple_Face_Bottom_C_UserConstructionScript::CallFunc_K2_AddLocalOffset_SweepHitResult' has a wrong offset!");

}

