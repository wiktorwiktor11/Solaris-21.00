﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: KillerKillsWidget

#include "Basic.hpp"


namespace SDK::Params
{

// Function KillerKillsWidget.KillerKillsWidget_C.ExecuteUbergraph_KillerKillsWidget
// 0x0020 (0x0020 - 0x0000)
struct KillerKillsWidget_C_ExecuteUbergraph_KillerKillsWidget final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_Num_Of_Kills;                   // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x0008(0x0018)()
};
static_assert(alignof(KillerKillsWidget_C_ExecuteUbergraph_KillerKillsWidget) == 0x000008, "Wrong alignment on KillerKillsWidget_C_ExecuteUbergraph_KillerKillsWidget");
static_assert(sizeof(KillerKillsWidget_C_ExecuteUbergraph_KillerKillsWidget) == 0x000020, "Wrong size on KillerKillsWidget_C_ExecuteUbergraph_KillerKillsWidget");
static_assert(offsetof(KillerKillsWidget_C_ExecuteUbergraph_KillerKillsWidget, EntryPoint) == 0x000000, "Member 'KillerKillsWidget_C_ExecuteUbergraph_KillerKillsWidget::EntryPoint' has a wrong offset!");
static_assert(offsetof(KillerKillsWidget_C_ExecuteUbergraph_KillerKillsWidget, K2Node_CustomEvent_Num_Of_Kills) == 0x000004, "Member 'KillerKillsWidget_C_ExecuteUbergraph_KillerKillsWidget::K2Node_CustomEvent_Num_Of_Kills' has a wrong offset!");
static_assert(offsetof(KillerKillsWidget_C_ExecuteUbergraph_KillerKillsWidget, CallFunc_Conv_IntToText_ReturnValue) == 0x000008, "Member 'KillerKillsWidget_C_ExecuteUbergraph_KillerKillsWidget::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");

// Function KillerKillsWidget.KillerKillsWidget_C.Set Num Of Kills
// 0x0004 (0x0004 - 0x0000)
struct KillerKillsWidget_C_Set_Num_Of_Kills final
{
public:
	int32                                         Num_Of_Kills;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(KillerKillsWidget_C_Set_Num_Of_Kills) == 0x000004, "Wrong alignment on KillerKillsWidget_C_Set_Num_Of_Kills");
static_assert(sizeof(KillerKillsWidget_C_Set_Num_Of_Kills) == 0x000004, "Wrong size on KillerKillsWidget_C_Set_Num_Of_Kills");
static_assert(offsetof(KillerKillsWidget_C_Set_Num_Of_Kills, Num_Of_Kills) == 0x000000, "Member 'KillerKillsWidget_C_Set_Num_Of_Kills::Num_Of_Kills' has a wrong offset!");

}

