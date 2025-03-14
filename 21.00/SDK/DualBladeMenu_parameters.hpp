﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: DualBladeMenu

#include "Basic.hpp"

#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function DualBladeMenu.DualBladeMenu_C.ExecuteUbergraph_DualBladeMenu
// 0x0038 (0x0038 - 0x0000)
struct DualBladeMenu_C_ExecuteUbergraph_DualBladeMenu final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FMargin                                K2Node_MakeStruct_Margin;                          // 0x0004(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_14[0x4];                                       // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UHorizontalBoxSlot*                     CallFunc_SlotAsHorizontalBoxSlot_ReturnValue;      // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsMobileGame_ReturnValue;                 // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_21[0x7];                                       // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                K2Node_Event_NewWidget;                            // 0x0028(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UOverlaySlot*                           CallFunc_AddChildToOverlay_ReturnValue;            // 0x0030(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(DualBladeMenu_C_ExecuteUbergraph_DualBladeMenu) == 0x000008, "Wrong alignment on DualBladeMenu_C_ExecuteUbergraph_DualBladeMenu");
static_assert(sizeof(DualBladeMenu_C_ExecuteUbergraph_DualBladeMenu) == 0x000038, "Wrong size on DualBladeMenu_C_ExecuteUbergraph_DualBladeMenu");
static_assert(offsetof(DualBladeMenu_C_ExecuteUbergraph_DualBladeMenu, EntryPoint) == 0x000000, "Member 'DualBladeMenu_C_ExecuteUbergraph_DualBladeMenu::EntryPoint' has a wrong offset!");
static_assert(offsetof(DualBladeMenu_C_ExecuteUbergraph_DualBladeMenu, K2Node_MakeStruct_Margin) == 0x000004, "Member 'DualBladeMenu_C_ExecuteUbergraph_DualBladeMenu::K2Node_MakeStruct_Margin' has a wrong offset!");
static_assert(offsetof(DualBladeMenu_C_ExecuteUbergraph_DualBladeMenu, CallFunc_SlotAsHorizontalBoxSlot_ReturnValue) == 0x000018, "Member 'DualBladeMenu_C_ExecuteUbergraph_DualBladeMenu::CallFunc_SlotAsHorizontalBoxSlot_ReturnValue' has a wrong offset!");
static_assert(offsetof(DualBladeMenu_C_ExecuteUbergraph_DualBladeMenu, CallFunc_IsMobileGame_ReturnValue) == 0x000020, "Member 'DualBladeMenu_C_ExecuteUbergraph_DualBladeMenu::CallFunc_IsMobileGame_ReturnValue' has a wrong offset!");
static_assert(offsetof(DualBladeMenu_C_ExecuteUbergraph_DualBladeMenu, K2Node_Event_NewWidget) == 0x000028, "Member 'DualBladeMenu_C_ExecuteUbergraph_DualBladeMenu::K2Node_Event_NewWidget' has a wrong offset!");
static_assert(offsetof(DualBladeMenu_C_ExecuteUbergraph_DualBladeMenu, CallFunc_AddChildToOverlay_ReturnValue) == 0x000030, "Member 'DualBladeMenu_C_ExecuteUbergraph_DualBladeMenu::CallFunc_AddChildToOverlay_ReturnValue' has a wrong offset!");

// Function DualBladeMenu.DualBladeMenu_C.OnFullScreenWidgetCreated
// 0x0008 (0x0008 - 0x0000)
struct DualBladeMenu_C_OnFullScreenWidgetCreated final
{
public:
	class UWidget*                                NewWidget;                                         // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(DualBladeMenu_C_OnFullScreenWidgetCreated) == 0x000008, "Wrong alignment on DualBladeMenu_C_OnFullScreenWidgetCreated");
static_assert(sizeof(DualBladeMenu_C_OnFullScreenWidgetCreated) == 0x000008, "Wrong size on DualBladeMenu_C_OnFullScreenWidgetCreated");
static_assert(offsetof(DualBladeMenu_C_OnFullScreenWidgetCreated, NewWidget) == 0x000000, "Member 'DualBladeMenu_C_OnFullScreenWidgetCreated::NewWidget' has a wrong offset!");

}

