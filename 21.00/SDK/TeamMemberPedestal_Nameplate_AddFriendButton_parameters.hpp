﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TeamMemberPedestal_Nameplate_AddFriendButton

#include "Basic.hpp"

#include "UMG_structs.hpp"


namespace SDK::Params
{

// Function TeamMemberPedestal_Nameplate_AddFriendButton.TeamMemberPedestal_Nameplate_AddFriendButton_C.ExecuteUbergraph_TeamMemberPedestal_Nameplate_AddFriendButton
// 0x0028 (0x0028 - 0x0000)
struct TeamMemberPedestal_Nameplate_AddFriendButton_C_ExecuteUbergraph_TeamMemberPedestal_Nameplate_AddFriendButton final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue;         // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_CustomEvent_InVisibility;                   // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_19[0x7];                                       // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue_1;       // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(TeamMemberPedestal_Nameplate_AddFriendButton_C_ExecuteUbergraph_TeamMemberPedestal_Nameplate_AddFriendButton) == 0x000008, "Wrong alignment on TeamMemberPedestal_Nameplate_AddFriendButton_C_ExecuteUbergraph_TeamMemberPedestal_Nameplate_AddFriendButton");
static_assert(sizeof(TeamMemberPedestal_Nameplate_AddFriendButton_C_ExecuteUbergraph_TeamMemberPedestal_Nameplate_AddFriendButton) == 0x000028, "Wrong size on TeamMemberPedestal_Nameplate_AddFriendButton_C_ExecuteUbergraph_TeamMemberPedestal_Nameplate_AddFriendButton");
static_assert(offsetof(TeamMemberPedestal_Nameplate_AddFriendButton_C_ExecuteUbergraph_TeamMemberPedestal_Nameplate_AddFriendButton, EntryPoint) == 0x000000, "Member 'TeamMemberPedestal_Nameplate_AddFriendButton_C_ExecuteUbergraph_TeamMemberPedestal_Nameplate_AddFriendButton::EntryPoint' has a wrong offset!");
static_assert(offsetof(TeamMemberPedestal_Nameplate_AddFriendButton_C_ExecuteUbergraph_TeamMemberPedestal_Nameplate_AddFriendButton, CallFunc_PlayAnimationForward_ReturnValue) == 0x000008, "Member 'TeamMemberPedestal_Nameplate_AddFriendButton_C_ExecuteUbergraph_TeamMemberPedestal_Nameplate_AddFriendButton::CallFunc_PlayAnimationForward_ReturnValue' has a wrong offset!");
static_assert(offsetof(TeamMemberPedestal_Nameplate_AddFriendButton_C_ExecuteUbergraph_TeamMemberPedestal_Nameplate_AddFriendButton, CallFunc_PlayAnimation_ReturnValue) == 0x000010, "Member 'TeamMemberPedestal_Nameplate_AddFriendButton_C_ExecuteUbergraph_TeamMemberPedestal_Nameplate_AddFriendButton::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(TeamMemberPedestal_Nameplate_AddFriendButton_C_ExecuteUbergraph_TeamMemberPedestal_Nameplate_AddFriendButton, K2Node_CustomEvent_InVisibility) == 0x000018, "Member 'TeamMemberPedestal_Nameplate_AddFriendButton_C_ExecuteUbergraph_TeamMemberPedestal_Nameplate_AddFriendButton::K2Node_CustomEvent_InVisibility' has a wrong offset!");
static_assert(offsetof(TeamMemberPedestal_Nameplate_AddFriendButton_C_ExecuteUbergraph_TeamMemberPedestal_Nameplate_AddFriendButton, CallFunc_PlayAnimationForward_ReturnValue_1) == 0x000020, "Member 'TeamMemberPedestal_Nameplate_AddFriendButton_C_ExecuteUbergraph_TeamMemberPedestal_Nameplate_AddFriendButton::CallFunc_PlayAnimationForward_ReturnValue_1' has a wrong offset!");

// Function TeamMemberPedestal_Nameplate_AddFriendButton.TeamMemberPedestal_Nameplate_AddFriendButton_C.SetButtonText
// 0x0018 (0x0018 - 0x0000)
struct TeamMemberPedestal_Nameplate_AddFriendButton_C_SetButtonText final
{
public:
	class FText                                   InText;                                            // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(TeamMemberPedestal_Nameplate_AddFriendButton_C_SetButtonText) == 0x000008, "Wrong alignment on TeamMemberPedestal_Nameplate_AddFriendButton_C_SetButtonText");
static_assert(sizeof(TeamMemberPedestal_Nameplate_AddFriendButton_C_SetButtonText) == 0x000018, "Wrong size on TeamMemberPedestal_Nameplate_AddFriendButton_C_SetButtonText");
static_assert(offsetof(TeamMemberPedestal_Nameplate_AddFriendButton_C_SetButtonText, InText) == 0x000000, "Member 'TeamMemberPedestal_Nameplate_AddFriendButton_C_SetButtonText::InText' has a wrong offset!");

// Function TeamMemberPedestal_Nameplate_AddFriendButton.TeamMemberPedestal_Nameplate_AddFriendButton_C.SetInputActionVisibility
// 0x0001 (0x0001 - 0x0000)
struct TeamMemberPedestal_Nameplate_AddFriendButton_C_SetInputActionVisibility final
{
public:
	ESlateVisibility                              InVisibility;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(TeamMemberPedestal_Nameplate_AddFriendButton_C_SetInputActionVisibility) == 0x000001, "Wrong alignment on TeamMemberPedestal_Nameplate_AddFriendButton_C_SetInputActionVisibility");
static_assert(sizeof(TeamMemberPedestal_Nameplate_AddFriendButton_C_SetInputActionVisibility) == 0x000001, "Wrong size on TeamMemberPedestal_Nameplate_AddFriendButton_C_SetInputActionVisibility");
static_assert(offsetof(TeamMemberPedestal_Nameplate_AddFriendButton_C_SetInputActionVisibility, InVisibility) == 0x000000, "Member 'TeamMemberPedestal_Nameplate_AddFriendButton_C_SetInputActionVisibility::InVisibility' has a wrong offset!");

}

