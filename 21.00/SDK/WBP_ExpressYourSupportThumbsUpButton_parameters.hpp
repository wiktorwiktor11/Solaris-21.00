﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_ExpressYourSupportThumbsUpButton

#include "Basic.hpp"


namespace SDK::Params
{

// Function WBP_ExpressYourSupportThumbsUpButton.WBP_ExpressYourSupportThumbsUpButton_C.ExecuteUbergraph_WBP_ExpressYourSupportThumbsUpButton
// 0x0028 (0x0028 - 0x0000)
struct WBP_ExpressYourSupportThumbsUpButton_C_ExecuteUbergraph_WBP_ExpressYourSupportThumbsUpButton final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsUsingTouch_ReturnValue;                 // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;              // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_2;              // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_3;              // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_ExpressYourSupportThumbsUpButton_C_ExecuteUbergraph_WBP_ExpressYourSupportThumbsUpButton) == 0x000008, "Wrong alignment on WBP_ExpressYourSupportThumbsUpButton_C_ExecuteUbergraph_WBP_ExpressYourSupportThumbsUpButton");
static_assert(sizeof(WBP_ExpressYourSupportThumbsUpButton_C_ExecuteUbergraph_WBP_ExpressYourSupportThumbsUpButton) == 0x000028, "Wrong size on WBP_ExpressYourSupportThumbsUpButton_C_ExecuteUbergraph_WBP_ExpressYourSupportThumbsUpButton");
static_assert(offsetof(WBP_ExpressYourSupportThumbsUpButton_C_ExecuteUbergraph_WBP_ExpressYourSupportThumbsUpButton, EntryPoint) == 0x000000, "Member 'WBP_ExpressYourSupportThumbsUpButton_C_ExecuteUbergraph_WBP_ExpressYourSupportThumbsUpButton::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_ExpressYourSupportThumbsUpButton_C_ExecuteUbergraph_WBP_ExpressYourSupportThumbsUpButton, CallFunc_IsUsingTouch_ReturnValue) == 0x000004, "Member 'WBP_ExpressYourSupportThumbsUpButton_C_ExecuteUbergraph_WBP_ExpressYourSupportThumbsUpButton::CallFunc_IsUsingTouch_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ExpressYourSupportThumbsUpButton_C_ExecuteUbergraph_WBP_ExpressYourSupportThumbsUpButton, CallFunc_PlayAnimation_ReturnValue) == 0x000008, "Member 'WBP_ExpressYourSupportThumbsUpButton_C_ExecuteUbergraph_WBP_ExpressYourSupportThumbsUpButton::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ExpressYourSupportThumbsUpButton_C_ExecuteUbergraph_WBP_ExpressYourSupportThumbsUpButton, CallFunc_PlayAnimation_ReturnValue_1) == 0x000010, "Member 'WBP_ExpressYourSupportThumbsUpButton_C_ExecuteUbergraph_WBP_ExpressYourSupportThumbsUpButton::CallFunc_PlayAnimation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_ExpressYourSupportThumbsUpButton_C_ExecuteUbergraph_WBP_ExpressYourSupportThumbsUpButton, CallFunc_PlayAnimation_ReturnValue_2) == 0x000018, "Member 'WBP_ExpressYourSupportThumbsUpButton_C_ExecuteUbergraph_WBP_ExpressYourSupportThumbsUpButton::CallFunc_PlayAnimation_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_ExpressYourSupportThumbsUpButton_C_ExecuteUbergraph_WBP_ExpressYourSupportThumbsUpButton, CallFunc_PlayAnimation_ReturnValue_3) == 0x000020, "Member 'WBP_ExpressYourSupportThumbsUpButton_C_ExecuteUbergraph_WBP_ExpressYourSupportThumbsUpButton::CallFunc_PlayAnimation_ReturnValue_3' has a wrong offset!");

// Function WBP_ExpressYourSupportThumbsUpButton.WBP_ExpressYourSupportThumbsUpButton_C.SetButtonHeight
// 0x0001 (0x0001 - 0x0000)
struct WBP_ExpressYourSupportThumbsUpButton_C_SetButtonHeight final
{
public:
	bool                                          IsTouch;                                           // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_ExpressYourSupportThumbsUpButton_C_SetButtonHeight) == 0x000001, "Wrong alignment on WBP_ExpressYourSupportThumbsUpButton_C_SetButtonHeight");
static_assert(sizeof(WBP_ExpressYourSupportThumbsUpButton_C_SetButtonHeight) == 0x000001, "Wrong size on WBP_ExpressYourSupportThumbsUpButton_C_SetButtonHeight");
static_assert(offsetof(WBP_ExpressYourSupportThumbsUpButton_C_SetButtonHeight, IsTouch) == 0x000000, "Member 'WBP_ExpressYourSupportThumbsUpButton_C_SetButtonHeight::IsTouch' has a wrong offset!");

}

