﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_GrappleGloves_InSwingingMovementMode

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function GA_GrappleGloves_InSwingingMovementMode.GA_GrappleGloves_InSwingingMovementMode_C.ExecuteUbergraph_GA_GrappleGloves_InSwingingMovementMode
// 0x0130 (0x0130 - 0x0000)
struct GA_GrappleGloves_InSwingingMovementMode_C_ExecuteUbergraph_GA_GrappleGloves_InSwingingMovementMode final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_bWasCancelled;                        // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetAvatarActorFromActorInfo_ReturnValue;  // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTransform                             CallFunc_GetTransform_ReturnValue;                 // 0x0010(0x0060)(ConstParm, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_BreakTransform_Location;                  // 0x0070(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_BreakTransform_Rotation;                  // 0x0088(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_BreakTransform_Scale;                     // 0x00A0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_B8[0x8];                                       // 0x00B8(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_MakeTransform_ReturnValue;                // 0x00C0(0x0060)(IsPlainOldData, NoDestructor)
	class ABuildingGameplayActor*                 CallFunc_SpawnBuildingGameplayActor_ReturnValue;   // 0x0120(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GA_GrappleGloves_InSwingingMovementMode_C_ExecuteUbergraph_GA_GrappleGloves_InSwingingMovementMode) == 0x000010, "Wrong alignment on GA_GrappleGloves_InSwingingMovementMode_C_ExecuteUbergraph_GA_GrappleGloves_InSwingingMovementMode");
static_assert(sizeof(GA_GrappleGloves_InSwingingMovementMode_C_ExecuteUbergraph_GA_GrappleGloves_InSwingingMovementMode) == 0x000130, "Wrong size on GA_GrappleGloves_InSwingingMovementMode_C_ExecuteUbergraph_GA_GrappleGloves_InSwingingMovementMode");
static_assert(offsetof(GA_GrappleGloves_InSwingingMovementMode_C_ExecuteUbergraph_GA_GrappleGloves_InSwingingMovementMode, EntryPoint) == 0x000000, "Member 'GA_GrappleGloves_InSwingingMovementMode_C_ExecuteUbergraph_GA_GrappleGloves_InSwingingMovementMode::EntryPoint' has a wrong offset!");
static_assert(offsetof(GA_GrappleGloves_InSwingingMovementMode_C_ExecuteUbergraph_GA_GrappleGloves_InSwingingMovementMode, K2Node_Event_bWasCancelled) == 0x000004, "Member 'GA_GrappleGloves_InSwingingMovementMode_C_ExecuteUbergraph_GA_GrappleGloves_InSwingingMovementMode::K2Node_Event_bWasCancelled' has a wrong offset!");
static_assert(offsetof(GA_GrappleGloves_InSwingingMovementMode_C_ExecuteUbergraph_GA_GrappleGloves_InSwingingMovementMode, CallFunc_GetAvatarActorFromActorInfo_ReturnValue) == 0x000008, "Member 'GA_GrappleGloves_InSwingingMovementMode_C_ExecuteUbergraph_GA_GrappleGloves_InSwingingMovementMode::CallFunc_GetAvatarActorFromActorInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_GrappleGloves_InSwingingMovementMode_C_ExecuteUbergraph_GA_GrappleGloves_InSwingingMovementMode, CallFunc_GetTransform_ReturnValue) == 0x000010, "Member 'GA_GrappleGloves_InSwingingMovementMode_C_ExecuteUbergraph_GA_GrappleGloves_InSwingingMovementMode::CallFunc_GetTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_GrappleGloves_InSwingingMovementMode_C_ExecuteUbergraph_GA_GrappleGloves_InSwingingMovementMode, CallFunc_BreakTransform_Location) == 0x000070, "Member 'GA_GrappleGloves_InSwingingMovementMode_C_ExecuteUbergraph_GA_GrappleGloves_InSwingingMovementMode::CallFunc_BreakTransform_Location' has a wrong offset!");
static_assert(offsetof(GA_GrappleGloves_InSwingingMovementMode_C_ExecuteUbergraph_GA_GrappleGloves_InSwingingMovementMode, CallFunc_BreakTransform_Rotation) == 0x000088, "Member 'GA_GrappleGloves_InSwingingMovementMode_C_ExecuteUbergraph_GA_GrappleGloves_InSwingingMovementMode::CallFunc_BreakTransform_Rotation' has a wrong offset!");
static_assert(offsetof(GA_GrappleGloves_InSwingingMovementMode_C_ExecuteUbergraph_GA_GrappleGloves_InSwingingMovementMode, CallFunc_BreakTransform_Scale) == 0x0000A0, "Member 'GA_GrappleGloves_InSwingingMovementMode_C_ExecuteUbergraph_GA_GrappleGloves_InSwingingMovementMode::CallFunc_BreakTransform_Scale' has a wrong offset!");
static_assert(offsetof(GA_GrappleGloves_InSwingingMovementMode_C_ExecuteUbergraph_GA_GrappleGloves_InSwingingMovementMode, CallFunc_MakeTransform_ReturnValue) == 0x0000C0, "Member 'GA_GrappleGloves_InSwingingMovementMode_C_ExecuteUbergraph_GA_GrappleGloves_InSwingingMovementMode::CallFunc_MakeTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_GrappleGloves_InSwingingMovementMode_C_ExecuteUbergraph_GA_GrappleGloves_InSwingingMovementMode, CallFunc_SpawnBuildingGameplayActor_ReturnValue) == 0x000120, "Member 'GA_GrappleGloves_InSwingingMovementMode_C_ExecuteUbergraph_GA_GrappleGloves_InSwingingMovementMode::CallFunc_SpawnBuildingGameplayActor_ReturnValue' has a wrong offset!");

// Function GA_GrappleGloves_InSwingingMovementMode.GA_GrappleGloves_InSwingingMovementMode_C.K2_OnEndAbility
// 0x0001 (0x0001 - 0x0000)
struct GA_GrappleGloves_InSwingingMovementMode_C_K2_OnEndAbility final
{
public:
	bool                                          bWasCancelled;                                     // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GA_GrappleGloves_InSwingingMovementMode_C_K2_OnEndAbility) == 0x000001, "Wrong alignment on GA_GrappleGloves_InSwingingMovementMode_C_K2_OnEndAbility");
static_assert(sizeof(GA_GrappleGloves_InSwingingMovementMode_C_K2_OnEndAbility) == 0x000001, "Wrong size on GA_GrappleGloves_InSwingingMovementMode_C_K2_OnEndAbility");
static_assert(offsetof(GA_GrappleGloves_InSwingingMovementMode_C_K2_OnEndAbility, bWasCancelled) == 0x000000, "Member 'GA_GrappleGloves_InSwingingMovementMode_C_K2_OnEndAbility::bWasCancelled' has a wrong offset!");

}

