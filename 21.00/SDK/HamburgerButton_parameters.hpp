﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: HamburgerButton

#include "Basic.hpp"


namespace SDK::Params
{

// Function HamburgerButton.HamburgerButton_C.ExecuteUbergraph_HamburgerButton
// 0x0010 (0x0010 - 0x0000)
struct HamburgerButton_C_ExecuteUbergraph_HamburgerButton final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UFortHUDContext*                        CallFunc_GetContext_ReturnValue;                   // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(HamburgerButton_C_ExecuteUbergraph_HamburgerButton) == 0x000008, "Wrong alignment on HamburgerButton_C_ExecuteUbergraph_HamburgerButton");
static_assert(sizeof(HamburgerButton_C_ExecuteUbergraph_HamburgerButton) == 0x000010, "Wrong size on HamburgerButton_C_ExecuteUbergraph_HamburgerButton");
static_assert(offsetof(HamburgerButton_C_ExecuteUbergraph_HamburgerButton, EntryPoint) == 0x000000, "Member 'HamburgerButton_C_ExecuteUbergraph_HamburgerButton::EntryPoint' has a wrong offset!");
static_assert(offsetof(HamburgerButton_C_ExecuteUbergraph_HamburgerButton, CallFunc_GetContext_ReturnValue) == 0x000008, "Member 'HamburgerButton_C_ExecuteUbergraph_HamburgerButton::CallFunc_GetContext_ReturnValue' has a wrong offset!");

}

