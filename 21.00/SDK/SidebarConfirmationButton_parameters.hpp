﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SidebarConfirmationButton

#include "Basic.hpp"


namespace SDK::Params
{

// Function SidebarConfirmationButton.SidebarConfirmationButton_C.ExecuteUbergraph_SidebarConfirmationButton
// 0x0020 (0x0020 - 0x0000)
struct SidebarConfirmationButton_C_ExecuteUbergraph_SidebarConfirmationButton final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;              // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(SidebarConfirmationButton_C_ExecuteUbergraph_SidebarConfirmationButton) == 0x000008, "Wrong alignment on SidebarConfirmationButton_C_ExecuteUbergraph_SidebarConfirmationButton");
static_assert(sizeof(SidebarConfirmationButton_C_ExecuteUbergraph_SidebarConfirmationButton) == 0x000020, "Wrong size on SidebarConfirmationButton_C_ExecuteUbergraph_SidebarConfirmationButton");
static_assert(offsetof(SidebarConfirmationButton_C_ExecuteUbergraph_SidebarConfirmationButton, EntryPoint) == 0x000000, "Member 'SidebarConfirmationButton_C_ExecuteUbergraph_SidebarConfirmationButton::EntryPoint' has a wrong offset!");
static_assert(offsetof(SidebarConfirmationButton_C_ExecuteUbergraph_SidebarConfirmationButton, CallFunc_PlayAnimation_ReturnValue) == 0x000008, "Member 'SidebarConfirmationButton_C_ExecuteUbergraph_SidebarConfirmationButton::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(SidebarConfirmationButton_C_ExecuteUbergraph_SidebarConfirmationButton, CallFunc_PlayAnimation_ReturnValue_1) == 0x000010, "Member 'SidebarConfirmationButton_C_ExecuteUbergraph_SidebarConfirmationButton::CallFunc_PlayAnimation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SidebarConfirmationButton_C_ExecuteUbergraph_SidebarConfirmationButton, K2Node_Event_IsDesignTime) == 0x000018, "Member 'SidebarConfirmationButton_C_ExecuteUbergraph_SidebarConfirmationButton::K2Node_Event_IsDesignTime' has a wrong offset!");

// Function SidebarConfirmationButton.SidebarConfirmationButton_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct SidebarConfirmationButton_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(SidebarConfirmationButton_C_PreConstruct) == 0x000001, "Wrong alignment on SidebarConfirmationButton_C_PreConstruct");
static_assert(sizeof(SidebarConfirmationButton_C_PreConstruct) == 0x000001, "Wrong size on SidebarConfirmationButton_C_PreConstruct");
static_assert(offsetof(SidebarConfirmationButton_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'SidebarConfirmationButton_C_PreConstruct::IsDesignTime' has a wrong offset!");

}

