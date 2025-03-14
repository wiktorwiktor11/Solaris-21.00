﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AthenaBroadcastStormStatus

#include "Basic.hpp"


namespace SDK::Params
{

// Function AthenaBroadcastStormStatus.AthenaBroadcastStormStatus_C.ExecuteUbergraph_AthenaBroadcastStormStatus
// 0x0030 (0x0030 - 0x0000)
struct AthenaBroadcastStormStatus_C_ExecuteUbergraph_AthenaBroadcastStormStatus final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AFortMinigame*                          K2Node_CustomEvent_MinigameOverride;               // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_Event_StormPhase;                           // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_14[0x4];                                       // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x0018(0x0018)()
};
static_assert(alignof(AthenaBroadcastStormStatus_C_ExecuteUbergraph_AthenaBroadcastStormStatus) == 0x000008, "Wrong alignment on AthenaBroadcastStormStatus_C_ExecuteUbergraph_AthenaBroadcastStormStatus");
static_assert(sizeof(AthenaBroadcastStormStatus_C_ExecuteUbergraph_AthenaBroadcastStormStatus) == 0x000030, "Wrong size on AthenaBroadcastStormStatus_C_ExecuteUbergraph_AthenaBroadcastStormStatus");
static_assert(offsetof(AthenaBroadcastStormStatus_C_ExecuteUbergraph_AthenaBroadcastStormStatus, EntryPoint) == 0x000000, "Member 'AthenaBroadcastStormStatus_C_ExecuteUbergraph_AthenaBroadcastStormStatus::EntryPoint' has a wrong offset!");
static_assert(offsetof(AthenaBroadcastStormStatus_C_ExecuteUbergraph_AthenaBroadcastStormStatus, K2Node_CustomEvent_MinigameOverride) == 0x000008, "Member 'AthenaBroadcastStormStatus_C_ExecuteUbergraph_AthenaBroadcastStormStatus::K2Node_CustomEvent_MinigameOverride' has a wrong offset!");
static_assert(offsetof(AthenaBroadcastStormStatus_C_ExecuteUbergraph_AthenaBroadcastStormStatus, K2Node_Event_StormPhase) == 0x000010, "Member 'AthenaBroadcastStormStatus_C_ExecuteUbergraph_AthenaBroadcastStormStatus::K2Node_Event_StormPhase' has a wrong offset!");
static_assert(offsetof(AthenaBroadcastStormStatus_C_ExecuteUbergraph_AthenaBroadcastStormStatus, CallFunc_Conv_IntToText_ReturnValue) == 0x000018, "Member 'AthenaBroadcastStormStatus_C_ExecuteUbergraph_AthenaBroadcastStormStatus::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");

// Function AthenaBroadcastStormStatus.AthenaBroadcastStormStatus_C.OnStormPhaseChanged
// 0x0004 (0x0004 - 0x0000)
struct AthenaBroadcastStormStatus_C_OnStormPhaseChanged final
{
public:
	int32                                         StormPhase;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(AthenaBroadcastStormStatus_C_OnStormPhaseChanged) == 0x000004, "Wrong alignment on AthenaBroadcastStormStatus_C_OnStormPhaseChanged");
static_assert(sizeof(AthenaBroadcastStormStatus_C_OnStormPhaseChanged) == 0x000004, "Wrong size on AthenaBroadcastStormStatus_C_OnStormPhaseChanged");
static_assert(offsetof(AthenaBroadcastStormStatus_C_OnStormPhaseChanged, StormPhase) == 0x000000, "Member 'AthenaBroadcastStormStatus_C_OnStormPhaseChanged::StormPhase' has a wrong offset!");

// Function AthenaBroadcastStormStatus.AthenaBroadcastStormStatus_C.SetMinigameOverride
// 0x0008 (0x0008 - 0x0000)
struct AthenaBroadcastStormStatus_C_SetMinigameOverride final
{
public:
	class AFortMinigame*                          MinigameOverride;                                  // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(AthenaBroadcastStormStatus_C_SetMinigameOverride) == 0x000008, "Wrong alignment on AthenaBroadcastStormStatus_C_SetMinigameOverride");
static_assert(sizeof(AthenaBroadcastStormStatus_C_SetMinigameOverride) == 0x000008, "Wrong size on AthenaBroadcastStormStatus_C_SetMinigameOverride");
static_assert(offsetof(AthenaBroadcastStormStatus_C_SetMinigameOverride, MinigameOverride) == 0x000000, "Member 'AthenaBroadcastStormStatus_C_SetMinigameOverride::MinigameOverride' has a wrong offset!");

}

