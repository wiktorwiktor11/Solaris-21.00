﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: NPC_Pawn_Irwin_Prey_Burt

#include "Basic.hpp"

#include "FortniteGame_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function NPC_Pawn_Irwin_Prey_Burt.NPC_Pawn_Irwin_Prey_Burt_C.ExecuteUbergraph_NPC_Pawn_Irwin_Prey_Burt
// 0x0110 (0x0110 - 0x0000)
struct NPC_Pawn_Irwin_Prey_Burt_C_ExecuteUbergraph_NPC_Pawn_Irwin_Prey_Burt final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHitResult                             K2Node_Event_Hit;                                  // 0x0008(0x00E0)(ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	class AFortWaterBodyActor*                    K2Node_Event_WaterBody_1;                          // 0x00E8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_bIsFirstBody;                         // 0x00F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_F1[0x7];                                       // 0x00F1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UNiagaraComponent*                      CallFunc_SpawnSystemAttached_ReturnValue;          // 0x00F8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortWaterBodyActor*                    K2Node_Event_WaterBody;                            // 0x0100(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_bIsLastBody;                          // 0x0108(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(NPC_Pawn_Irwin_Prey_Burt_C_ExecuteUbergraph_NPC_Pawn_Irwin_Prey_Burt) == 0x000008, "Wrong alignment on NPC_Pawn_Irwin_Prey_Burt_C_ExecuteUbergraph_NPC_Pawn_Irwin_Prey_Burt");
static_assert(sizeof(NPC_Pawn_Irwin_Prey_Burt_C_ExecuteUbergraph_NPC_Pawn_Irwin_Prey_Burt) == 0x000110, "Wrong size on NPC_Pawn_Irwin_Prey_Burt_C_ExecuteUbergraph_NPC_Pawn_Irwin_Prey_Burt");
static_assert(offsetof(NPC_Pawn_Irwin_Prey_Burt_C_ExecuteUbergraph_NPC_Pawn_Irwin_Prey_Burt, EntryPoint) == 0x000000, "Member 'NPC_Pawn_Irwin_Prey_Burt_C_ExecuteUbergraph_NPC_Pawn_Irwin_Prey_Burt::EntryPoint' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Irwin_Prey_Burt_C_ExecuteUbergraph_NPC_Pawn_Irwin_Prey_Burt, K2Node_Event_Hit) == 0x000008, "Member 'NPC_Pawn_Irwin_Prey_Burt_C_ExecuteUbergraph_NPC_Pawn_Irwin_Prey_Burt::K2Node_Event_Hit' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Irwin_Prey_Burt_C_ExecuteUbergraph_NPC_Pawn_Irwin_Prey_Burt, K2Node_Event_WaterBody_1) == 0x0000E8, "Member 'NPC_Pawn_Irwin_Prey_Burt_C_ExecuteUbergraph_NPC_Pawn_Irwin_Prey_Burt::K2Node_Event_WaterBody_1' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Irwin_Prey_Burt_C_ExecuteUbergraph_NPC_Pawn_Irwin_Prey_Burt, K2Node_Event_bIsFirstBody) == 0x0000F0, "Member 'NPC_Pawn_Irwin_Prey_Burt_C_ExecuteUbergraph_NPC_Pawn_Irwin_Prey_Burt::K2Node_Event_bIsFirstBody' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Irwin_Prey_Burt_C_ExecuteUbergraph_NPC_Pawn_Irwin_Prey_Burt, CallFunc_SpawnSystemAttached_ReturnValue) == 0x0000F8, "Member 'NPC_Pawn_Irwin_Prey_Burt_C_ExecuteUbergraph_NPC_Pawn_Irwin_Prey_Burt::CallFunc_SpawnSystemAttached_ReturnValue' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Irwin_Prey_Burt_C_ExecuteUbergraph_NPC_Pawn_Irwin_Prey_Burt, K2Node_Event_WaterBody) == 0x000100, "Member 'NPC_Pawn_Irwin_Prey_Burt_C_ExecuteUbergraph_NPC_Pawn_Irwin_Prey_Burt::K2Node_Event_WaterBody' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Irwin_Prey_Burt_C_ExecuteUbergraph_NPC_Pawn_Irwin_Prey_Burt, K2Node_Event_bIsLastBody) == 0x000108, "Member 'NPC_Pawn_Irwin_Prey_Burt_C_ExecuteUbergraph_NPC_Pawn_Irwin_Prey_Burt::K2Node_Event_bIsLastBody' has a wrong offset!");

// Function NPC_Pawn_Irwin_Prey_Burt.NPC_Pawn_Irwin_Prey_Burt_C.OnEnteredWaterBody
// 0x0010 (0x0010 - 0x0000)
struct NPC_Pawn_Irwin_Prey_Burt_C_OnEnteredWaterBody final
{
public:
	class AFortWaterBodyActor*                    WaterBody;                                         // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bIsFirstBody;                                      // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(NPC_Pawn_Irwin_Prey_Burt_C_OnEnteredWaterBody) == 0x000008, "Wrong alignment on NPC_Pawn_Irwin_Prey_Burt_C_OnEnteredWaterBody");
static_assert(sizeof(NPC_Pawn_Irwin_Prey_Burt_C_OnEnteredWaterBody) == 0x000010, "Wrong size on NPC_Pawn_Irwin_Prey_Burt_C_OnEnteredWaterBody");
static_assert(offsetof(NPC_Pawn_Irwin_Prey_Burt_C_OnEnteredWaterBody, WaterBody) == 0x000000, "Member 'NPC_Pawn_Irwin_Prey_Burt_C_OnEnteredWaterBody::WaterBody' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Irwin_Prey_Burt_C_OnEnteredWaterBody, bIsFirstBody) == 0x000008, "Member 'NPC_Pawn_Irwin_Prey_Burt_C_OnEnteredWaterBody::bIsFirstBody' has a wrong offset!");

// Function NPC_Pawn_Irwin_Prey_Burt.NPC_Pawn_Irwin_Prey_Burt_C.OnExitedWaterBody
// 0x0010 (0x0010 - 0x0000)
struct NPC_Pawn_Irwin_Prey_Burt_C_OnExitedWaterBody final
{
public:
	class AFortWaterBodyActor*                    WaterBody;                                         // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bIsLastBody;                                       // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(NPC_Pawn_Irwin_Prey_Burt_C_OnExitedWaterBody) == 0x000008, "Wrong alignment on NPC_Pawn_Irwin_Prey_Burt_C_OnExitedWaterBody");
static_assert(sizeof(NPC_Pawn_Irwin_Prey_Burt_C_OnExitedWaterBody) == 0x000010, "Wrong size on NPC_Pawn_Irwin_Prey_Burt_C_OnExitedWaterBody");
static_assert(offsetof(NPC_Pawn_Irwin_Prey_Burt_C_OnExitedWaterBody, WaterBody) == 0x000000, "Member 'NPC_Pawn_Irwin_Prey_Burt_C_OnExitedWaterBody::WaterBody' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Irwin_Prey_Burt_C_OnExitedWaterBody, bIsLastBody) == 0x000008, "Member 'NPC_Pawn_Irwin_Prey_Burt_C_OnExitedWaterBody::bIsLastBody' has a wrong offset!");

// Function NPC_Pawn_Irwin_Prey_Burt.NPC_Pawn_Irwin_Prey_Burt_C.OnLanded
// 0x00E0 (0x00E0 - 0x0000)
struct NPC_Pawn_Irwin_Prey_Burt_C_OnLanded final
{
public:
	struct FHitResult                             Hit;                                               // 0x0000(0x00E0)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};
static_assert(alignof(NPC_Pawn_Irwin_Prey_Burt_C_OnLanded) == 0x000008, "Wrong alignment on NPC_Pawn_Irwin_Prey_Burt_C_OnLanded");
static_assert(sizeof(NPC_Pawn_Irwin_Prey_Burt_C_OnLanded) == 0x0000E0, "Wrong size on NPC_Pawn_Irwin_Prey_Burt_C_OnLanded");
static_assert(offsetof(NPC_Pawn_Irwin_Prey_Burt_C_OnLanded, Hit) == 0x000000, "Member 'NPC_Pawn_Irwin_Prey_Burt_C_OnLanded::Hit' has a wrong offset!");

// Function NPC_Pawn_Irwin_Prey_Burt.NPC_Pawn_Irwin_Prey_Burt_C.BlueprintCanInteract
// 0x0040 (0x0040 - 0x0000)
struct NPC_Pawn_Irwin_Prey_Burt_C_BlueprintCanInteract final
{
public:
	const class AFortPawn*                        InteractingPawn;                                   // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EInteractionBeingAttempted                    InteractionBeingAttempted;                         // 0x0008(0x0001)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ReturnValue;                                       // 0x0009(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BlueprintCanInteract_ReturnValue;         // 0x000A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x000B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C[0x4];                                        // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AFortPlayerPawn*                        CallFunc_GetConverterPawn_ReturnValue;             // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_ObjectObject_ReturnValue;        // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x001A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x001B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1D[0x3];                                       // 0x001D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class IGameplayTagAssetInterface> CallFunc_HasAnyMatchingGameplayTags_self_CastInput; // 0x0020(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_HasAnyMatchingGameplayTags_ReturnValue;   // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue_1;                 // 0x0031(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0032(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue_1;                // 0x0033(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue_2;                 // 0x0034(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_HasAnyMatchingGameplayTags_ReturnValue_1; // 0x0035(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue_2;                // 0x0036(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue_3;                 // 0x0037(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue_4;                 // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(NPC_Pawn_Irwin_Prey_Burt_C_BlueprintCanInteract) == 0x000008, "Wrong alignment on NPC_Pawn_Irwin_Prey_Burt_C_BlueprintCanInteract");
static_assert(sizeof(NPC_Pawn_Irwin_Prey_Burt_C_BlueprintCanInteract) == 0x000040, "Wrong size on NPC_Pawn_Irwin_Prey_Burt_C_BlueprintCanInteract");
static_assert(offsetof(NPC_Pawn_Irwin_Prey_Burt_C_BlueprintCanInteract, InteractingPawn) == 0x000000, "Member 'NPC_Pawn_Irwin_Prey_Burt_C_BlueprintCanInteract::InteractingPawn' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Irwin_Prey_Burt_C_BlueprintCanInteract, InteractionBeingAttempted) == 0x000008, "Member 'NPC_Pawn_Irwin_Prey_Burt_C_BlueprintCanInteract::InteractionBeingAttempted' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Irwin_Prey_Burt_C_BlueprintCanInteract, ReturnValue) == 0x000009, "Member 'NPC_Pawn_Irwin_Prey_Burt_C_BlueprintCanInteract::ReturnValue' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Irwin_Prey_Burt_C_BlueprintCanInteract, CallFunc_BlueprintCanInteract_ReturnValue) == 0x00000A, "Member 'NPC_Pawn_Irwin_Prey_Burt_C_BlueprintCanInteract::CallFunc_BlueprintCanInteract_ReturnValue' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Irwin_Prey_Burt_C_BlueprintCanInteract, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x00000B, "Member 'NPC_Pawn_Irwin_Prey_Burt_C_BlueprintCanInteract::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Irwin_Prey_Burt_C_BlueprintCanInteract, CallFunc_GetConverterPawn_ReturnValue) == 0x000010, "Member 'NPC_Pawn_Irwin_Prey_Burt_C_BlueprintCanInteract::CallFunc_GetConverterPawn_ReturnValue' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Irwin_Prey_Burt_C_BlueprintCanInteract, CallFunc_EqualEqual_ByteByte_ReturnValue_1) == 0x000018, "Member 'NPC_Pawn_Irwin_Prey_Burt_C_BlueprintCanInteract::CallFunc_EqualEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Irwin_Prey_Burt_C_BlueprintCanInteract, CallFunc_NotEqual_ObjectObject_ReturnValue) == 0x000019, "Member 'NPC_Pawn_Irwin_Prey_Burt_C_BlueprintCanInteract::CallFunc_NotEqual_ObjectObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Irwin_Prey_Burt_C_BlueprintCanInteract, CallFunc_BooleanOR_ReturnValue) == 0x00001A, "Member 'NPC_Pawn_Irwin_Prey_Burt_C_BlueprintCanInteract::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Irwin_Prey_Burt_C_BlueprintCanInteract, CallFunc_IsValid_ReturnValue) == 0x00001B, "Member 'NPC_Pawn_Irwin_Prey_Burt_C_BlueprintCanInteract::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Irwin_Prey_Burt_C_BlueprintCanInteract, CallFunc_BooleanAND_ReturnValue) == 0x00001C, "Member 'NPC_Pawn_Irwin_Prey_Burt_C_BlueprintCanInteract::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Irwin_Prey_Burt_C_BlueprintCanInteract, CallFunc_HasAnyMatchingGameplayTags_self_CastInput) == 0x000020, "Member 'NPC_Pawn_Irwin_Prey_Burt_C_BlueprintCanInteract::CallFunc_HasAnyMatchingGameplayTags_self_CastInput' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Irwin_Prey_Burt_C_BlueprintCanInteract, CallFunc_HasAnyMatchingGameplayTags_ReturnValue) == 0x000030, "Member 'NPC_Pawn_Irwin_Prey_Burt_C_BlueprintCanInteract::CallFunc_HasAnyMatchingGameplayTags_ReturnValue' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Irwin_Prey_Burt_C_BlueprintCanInteract, CallFunc_BooleanAND_ReturnValue_1) == 0x000031, "Member 'NPC_Pawn_Irwin_Prey_Burt_C_BlueprintCanInteract::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Irwin_Prey_Burt_C_BlueprintCanInteract, CallFunc_Not_PreBool_ReturnValue) == 0x000032, "Member 'NPC_Pawn_Irwin_Prey_Burt_C_BlueprintCanInteract::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Irwin_Prey_Burt_C_BlueprintCanInteract, CallFunc_Not_PreBool_ReturnValue_1) == 0x000033, "Member 'NPC_Pawn_Irwin_Prey_Burt_C_BlueprintCanInteract::CallFunc_Not_PreBool_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Irwin_Prey_Burt_C_BlueprintCanInteract, CallFunc_BooleanAND_ReturnValue_2) == 0x000034, "Member 'NPC_Pawn_Irwin_Prey_Burt_C_BlueprintCanInteract::CallFunc_BooleanAND_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Irwin_Prey_Burt_C_BlueprintCanInteract, CallFunc_HasAnyMatchingGameplayTags_ReturnValue_1) == 0x000035, "Member 'NPC_Pawn_Irwin_Prey_Burt_C_BlueprintCanInteract::CallFunc_HasAnyMatchingGameplayTags_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Irwin_Prey_Burt_C_BlueprintCanInteract, CallFunc_Not_PreBool_ReturnValue_2) == 0x000036, "Member 'NPC_Pawn_Irwin_Prey_Burt_C_BlueprintCanInteract::CallFunc_Not_PreBool_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Irwin_Prey_Burt_C_BlueprintCanInteract, CallFunc_BooleanAND_ReturnValue_3) == 0x000037, "Member 'NPC_Pawn_Irwin_Prey_Burt_C_BlueprintCanInteract::CallFunc_BooleanAND_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Irwin_Prey_Burt_C_BlueprintCanInteract, CallFunc_BooleanAND_ReturnValue_4) == 0x000038, "Member 'NPC_Pawn_Irwin_Prey_Burt_C_BlueprintCanInteract::CallFunc_BooleanAND_ReturnValue_4' has a wrong offset!");

}

