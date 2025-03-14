﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: LatencyContainer

#include "Basic.hpp"

#include "UMG_structs.hpp"


namespace SDK::Params
{

// Function LatencyContainer.LatencyContainer_C.ExecuteUbergraph_LatencyContainer
// 0x0008 (0x0008 - 0x0000)
struct LatencyContainer_C_ExecuteUbergraph_LatencyContainer final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Event_InVisibility;                         // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsMobileGame_ReturnValue;                 // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(LatencyContainer_C_ExecuteUbergraph_LatencyContainer) == 0x000004, "Wrong alignment on LatencyContainer_C_ExecuteUbergraph_LatencyContainer");
static_assert(sizeof(LatencyContainer_C_ExecuteUbergraph_LatencyContainer) == 0x000008, "Wrong size on LatencyContainer_C_ExecuteUbergraph_LatencyContainer");
static_assert(offsetof(LatencyContainer_C_ExecuteUbergraph_LatencyContainer, EntryPoint) == 0x000000, "Member 'LatencyContainer_C_ExecuteUbergraph_LatencyContainer::EntryPoint' has a wrong offset!");
static_assert(offsetof(LatencyContainer_C_ExecuteUbergraph_LatencyContainer, K2Node_Event_InVisibility) == 0x000004, "Member 'LatencyContainer_C_ExecuteUbergraph_LatencyContainer::K2Node_Event_InVisibility' has a wrong offset!");
static_assert(offsetof(LatencyContainer_C_ExecuteUbergraph_LatencyContainer, K2Node_SwitchEnum_CmpSuccess) == 0x000005, "Member 'LatencyContainer_C_ExecuteUbergraph_LatencyContainer::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(LatencyContainer_C_ExecuteUbergraph_LatencyContainer, CallFunc_IsMobileGame_ReturnValue) == 0x000006, "Member 'LatencyContainer_C_ExecuteUbergraph_LatencyContainer::CallFunc_IsMobileGame_ReturnValue' has a wrong offset!");

// Function LatencyContainer.LatencyContainer_C.OnVisibilitySetEvent
// 0x0001 (0x0001 - 0x0000)
struct LatencyContainer_C_OnVisibilitySetEvent final
{
public:
	ESlateVisibility                              InVisibility;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(LatencyContainer_C_OnVisibilitySetEvent) == 0x000001, "Wrong alignment on LatencyContainer_C_OnVisibilitySetEvent");
static_assert(sizeof(LatencyContainer_C_OnVisibilitySetEvent) == 0x000001, "Wrong size on LatencyContainer_C_OnVisibilitySetEvent");
static_assert(offsetof(LatencyContainer_C_OnVisibilitySetEvent, InVisibility) == 0x000000, "Member 'LatencyContainer_C_OnVisibilitySetEvent::InVisibility' has a wrong offset!");

}

