﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SquadLock_HoloUI

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK::Params
{

// Function SquadLock_HoloUI.SquadLock_HoloUI_C.EventFail
// 0x0018 (0x0018 - 0x0000)
struct SquadLock_HoloUI_C_EventFail final
{
public:
	class FText                                   ScreenText;                                        // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(SquadLock_HoloUI_C_EventFail) == 0x000008, "Wrong alignment on SquadLock_HoloUI_C_EventFail");
static_assert(sizeof(SquadLock_HoloUI_C_EventFail) == 0x000018, "Wrong size on SquadLock_HoloUI_C_EventFail");
static_assert(offsetof(SquadLock_HoloUI_C_EventFail, ScreenText) == 0x000000, "Member 'SquadLock_HoloUI_C_EventFail::ScreenText' has a wrong offset!");

// Function SquadLock_HoloUI.SquadLock_HoloUI_C.EventSuccess
// 0x0018 (0x0018 - 0x0000)
struct SquadLock_HoloUI_C_EventSuccess final
{
public:
	class FText                                   ScreenText;                                        // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(SquadLock_HoloUI_C_EventSuccess) == 0x000008, "Wrong alignment on SquadLock_HoloUI_C_EventSuccess");
static_assert(sizeof(SquadLock_HoloUI_C_EventSuccess) == 0x000018, "Wrong size on SquadLock_HoloUI_C_EventSuccess");
static_assert(offsetof(SquadLock_HoloUI_C_EventSuccess, ScreenText) == 0x000000, "Member 'SquadLock_HoloUI_C_EventSuccess::ScreenText' has a wrong offset!");

// Function SquadLock_HoloUI.SquadLock_HoloUI_C.EventTargetLost
// 0x0018 (0x0018 - 0x0000)
struct SquadLock_HoloUI_C_EventTargetLost final
{
public:
	class FText                                   ScreenText;                                        // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(SquadLock_HoloUI_C_EventTargetLost) == 0x000008, "Wrong alignment on SquadLock_HoloUI_C_EventTargetLost");
static_assert(sizeof(SquadLock_HoloUI_C_EventTargetLost) == 0x000018, "Wrong size on SquadLock_HoloUI_C_EventTargetLost");
static_assert(offsetof(SquadLock_HoloUI_C_EventTargetLost, ScreenText) == 0x000000, "Member 'SquadLock_HoloUI_C_EventTargetLost::ScreenText' has a wrong offset!");

// Function SquadLock_HoloUI.SquadLock_HoloUI_C.ExecuteUbergraph_SquadLock_HoloUI
// 0x0130 (0x0130 - 0x0000)
struct SquadLock_HoloUI_C_ExecuteUbergraph_SquadLock_HoloUI final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   Temp_text_Variable;                                // 0x0008(0x0018)()
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_29[0x7];                                       // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   Temp_text_Variable_1;                              // 0x0030(0x0018)()
	bool                                          Temp_bool_Variable_1;                              // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_49[0x7];                                       // 0x0049(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   Temp_text_Variable_2;                              // 0x0050(0x0018)()
	bool                                          Temp_bool_Variable_2;                              // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0069(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x006A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6B[0x5];                                       // 0x006B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   K2Node_CustomEvent_ScreenText_2;                   // 0x0070(0x0018)()
	bool                                          CallFunc_TextIsEmpty_ReturnValue;                  // 0x0088(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_89[0x7];                                       // 0x0089(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;              // 0x0090(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   K2Node_Select_Default;                             // 0x0098(0x0018)()
	bool                                          Temp_bool_Variable_3;                              // 0x00B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_bVisible;                       // 0x00B1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_B2[0x6];                                       // 0x00B2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   K2Node_CustomEvent_ScreenText_1;                   // 0x00B8(0x0018)()
	bool                                          CallFunc_TextIsEmpty_ReturnValue_1;                // 0x00D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default_1;                           // 0x00D1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_D2[0x6];                                       // 0x00D2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   K2Node_Select_Default_2;                           // 0x00D8(0x0018)()
	class FText                                   K2Node_CustomEvent_ScreenText;                     // 0x00F0(0x0018)()
	bool                                          CallFunc_TextIsEmpty_ReturnValue_2;                // 0x0108(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_109[0x7];                                      // 0x0109(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   K2Node_Select_Default_3;                           // 0x0110(0x0018)()
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_2;              // 0x0128(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(SquadLock_HoloUI_C_ExecuteUbergraph_SquadLock_HoloUI) == 0x000008, "Wrong alignment on SquadLock_HoloUI_C_ExecuteUbergraph_SquadLock_HoloUI");
static_assert(sizeof(SquadLock_HoloUI_C_ExecuteUbergraph_SquadLock_HoloUI) == 0x000130, "Wrong size on SquadLock_HoloUI_C_ExecuteUbergraph_SquadLock_HoloUI");
static_assert(offsetof(SquadLock_HoloUI_C_ExecuteUbergraph_SquadLock_HoloUI, EntryPoint) == 0x000000, "Member 'SquadLock_HoloUI_C_ExecuteUbergraph_SquadLock_HoloUI::EntryPoint' has a wrong offset!");
static_assert(offsetof(SquadLock_HoloUI_C_ExecuteUbergraph_SquadLock_HoloUI, Temp_text_Variable) == 0x000008, "Member 'SquadLock_HoloUI_C_ExecuteUbergraph_SquadLock_HoloUI::Temp_text_Variable' has a wrong offset!");
static_assert(offsetof(SquadLock_HoloUI_C_ExecuteUbergraph_SquadLock_HoloUI, CallFunc_PlayAnimation_ReturnValue) == 0x000020, "Member 'SquadLock_HoloUI_C_ExecuteUbergraph_SquadLock_HoloUI::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(SquadLock_HoloUI_C_ExecuteUbergraph_SquadLock_HoloUI, Temp_bool_Variable) == 0x000028, "Member 'SquadLock_HoloUI_C_ExecuteUbergraph_SquadLock_HoloUI::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(SquadLock_HoloUI_C_ExecuteUbergraph_SquadLock_HoloUI, Temp_text_Variable_1) == 0x000030, "Member 'SquadLock_HoloUI_C_ExecuteUbergraph_SquadLock_HoloUI::Temp_text_Variable_1' has a wrong offset!");
static_assert(offsetof(SquadLock_HoloUI_C_ExecuteUbergraph_SquadLock_HoloUI, Temp_bool_Variable_1) == 0x000048, "Member 'SquadLock_HoloUI_C_ExecuteUbergraph_SquadLock_HoloUI::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(SquadLock_HoloUI_C_ExecuteUbergraph_SquadLock_HoloUI, Temp_text_Variable_2) == 0x000050, "Member 'SquadLock_HoloUI_C_ExecuteUbergraph_SquadLock_HoloUI::Temp_text_Variable_2' has a wrong offset!");
static_assert(offsetof(SquadLock_HoloUI_C_ExecuteUbergraph_SquadLock_HoloUI, Temp_bool_Variable_2) == 0x000068, "Member 'SquadLock_HoloUI_C_ExecuteUbergraph_SquadLock_HoloUI::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(SquadLock_HoloUI_C_ExecuteUbergraph_SquadLock_HoloUI, Temp_byte_Variable) == 0x000069, "Member 'SquadLock_HoloUI_C_ExecuteUbergraph_SquadLock_HoloUI::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(SquadLock_HoloUI_C_ExecuteUbergraph_SquadLock_HoloUI, Temp_byte_Variable_1) == 0x00006A, "Member 'SquadLock_HoloUI_C_ExecuteUbergraph_SquadLock_HoloUI::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(SquadLock_HoloUI_C_ExecuteUbergraph_SquadLock_HoloUI, K2Node_CustomEvent_ScreenText_2) == 0x000070, "Member 'SquadLock_HoloUI_C_ExecuteUbergraph_SquadLock_HoloUI::K2Node_CustomEvent_ScreenText_2' has a wrong offset!");
static_assert(offsetof(SquadLock_HoloUI_C_ExecuteUbergraph_SquadLock_HoloUI, CallFunc_TextIsEmpty_ReturnValue) == 0x000088, "Member 'SquadLock_HoloUI_C_ExecuteUbergraph_SquadLock_HoloUI::CallFunc_TextIsEmpty_ReturnValue' has a wrong offset!");
static_assert(offsetof(SquadLock_HoloUI_C_ExecuteUbergraph_SquadLock_HoloUI, CallFunc_PlayAnimation_ReturnValue_1) == 0x000090, "Member 'SquadLock_HoloUI_C_ExecuteUbergraph_SquadLock_HoloUI::CallFunc_PlayAnimation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SquadLock_HoloUI_C_ExecuteUbergraph_SquadLock_HoloUI, K2Node_Select_Default) == 0x000098, "Member 'SquadLock_HoloUI_C_ExecuteUbergraph_SquadLock_HoloUI::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(SquadLock_HoloUI_C_ExecuteUbergraph_SquadLock_HoloUI, Temp_bool_Variable_3) == 0x0000B0, "Member 'SquadLock_HoloUI_C_ExecuteUbergraph_SquadLock_HoloUI::Temp_bool_Variable_3' has a wrong offset!");
static_assert(offsetof(SquadLock_HoloUI_C_ExecuteUbergraph_SquadLock_HoloUI, K2Node_CustomEvent_bVisible) == 0x0000B1, "Member 'SquadLock_HoloUI_C_ExecuteUbergraph_SquadLock_HoloUI::K2Node_CustomEvent_bVisible' has a wrong offset!");
static_assert(offsetof(SquadLock_HoloUI_C_ExecuteUbergraph_SquadLock_HoloUI, K2Node_CustomEvent_ScreenText_1) == 0x0000B8, "Member 'SquadLock_HoloUI_C_ExecuteUbergraph_SquadLock_HoloUI::K2Node_CustomEvent_ScreenText_1' has a wrong offset!");
static_assert(offsetof(SquadLock_HoloUI_C_ExecuteUbergraph_SquadLock_HoloUI, CallFunc_TextIsEmpty_ReturnValue_1) == 0x0000D0, "Member 'SquadLock_HoloUI_C_ExecuteUbergraph_SquadLock_HoloUI::CallFunc_TextIsEmpty_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SquadLock_HoloUI_C_ExecuteUbergraph_SquadLock_HoloUI, K2Node_Select_Default_1) == 0x0000D1, "Member 'SquadLock_HoloUI_C_ExecuteUbergraph_SquadLock_HoloUI::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(SquadLock_HoloUI_C_ExecuteUbergraph_SquadLock_HoloUI, K2Node_Select_Default_2) == 0x0000D8, "Member 'SquadLock_HoloUI_C_ExecuteUbergraph_SquadLock_HoloUI::K2Node_Select_Default_2' has a wrong offset!");
static_assert(offsetof(SquadLock_HoloUI_C_ExecuteUbergraph_SquadLock_HoloUI, K2Node_CustomEvent_ScreenText) == 0x0000F0, "Member 'SquadLock_HoloUI_C_ExecuteUbergraph_SquadLock_HoloUI::K2Node_CustomEvent_ScreenText' has a wrong offset!");
static_assert(offsetof(SquadLock_HoloUI_C_ExecuteUbergraph_SquadLock_HoloUI, CallFunc_TextIsEmpty_ReturnValue_2) == 0x000108, "Member 'SquadLock_HoloUI_C_ExecuteUbergraph_SquadLock_HoloUI::CallFunc_TextIsEmpty_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(SquadLock_HoloUI_C_ExecuteUbergraph_SquadLock_HoloUI, K2Node_Select_Default_3) == 0x000110, "Member 'SquadLock_HoloUI_C_ExecuteUbergraph_SquadLock_HoloUI::K2Node_Select_Default_3' has a wrong offset!");
static_assert(offsetof(SquadLock_HoloUI_C_ExecuteUbergraph_SquadLock_HoloUI, CallFunc_PlayAnimation_ReturnValue_2) == 0x000128, "Member 'SquadLock_HoloUI_C_ExecuteUbergraph_SquadLock_HoloUI::CallFunc_PlayAnimation_ReturnValue_2' has a wrong offset!");

// Function SquadLock_HoloUI.SquadLock_HoloUI_C.SetMeepleVisibility
// 0x0001 (0x0001 - 0x0000)
struct SquadLock_HoloUI_C_SetMeepleVisibility final
{
public:
	bool                                          bVisible;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(SquadLock_HoloUI_C_SetMeepleVisibility) == 0x000001, "Wrong alignment on SquadLock_HoloUI_C_SetMeepleVisibility");
static_assert(sizeof(SquadLock_HoloUI_C_SetMeepleVisibility) == 0x000001, "Wrong size on SquadLock_HoloUI_C_SetMeepleVisibility");
static_assert(offsetof(SquadLock_HoloUI_C_SetMeepleVisibility, bVisible) == 0x000000, "Member 'SquadLock_HoloUI_C_SetMeepleVisibility::bVisible' has a wrong offset!");

// Function SquadLock_HoloUI.SquadLock_HoloUI_C.UpdateCurrentPlayerCount
// 0x0048 (0x0048 - 0x0000)
struct SquadLock_HoloUI_C_UpdateCurrentPlayerCount final
{
public:
	int32                                         NumPlayers;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         NumPendingPlayers;                                 // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          LocalPlayerIsPending;                              // 0x0008(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9[0x3];                                        // 0x0009(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         LocalPendingPlayerCount;                           // 0x000C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_19[0x3];                                       // 0x0019(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetChildrenCount_ReturnValue;             // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x002C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue_1;        // 0x002D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2E[0x2];                                       // 0x002E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                CallFunc_GetChildAt_ReturnValue;                   // 0x0030(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USquadLock_PlayerIndicator_C*           K2Node_DynamicCast_AsSquad_Lock_Player_Indicator;  // 0x0038(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(SquadLock_HoloUI_C_UpdateCurrentPlayerCount) == 0x000008, "Wrong alignment on SquadLock_HoloUI_C_UpdateCurrentPlayerCount");
static_assert(sizeof(SquadLock_HoloUI_C_UpdateCurrentPlayerCount) == 0x000048, "Wrong size on SquadLock_HoloUI_C_UpdateCurrentPlayerCount");
static_assert(offsetof(SquadLock_HoloUI_C_UpdateCurrentPlayerCount, NumPlayers) == 0x000000, "Member 'SquadLock_HoloUI_C_UpdateCurrentPlayerCount::NumPlayers' has a wrong offset!");
static_assert(offsetof(SquadLock_HoloUI_C_UpdateCurrentPlayerCount, NumPendingPlayers) == 0x000004, "Member 'SquadLock_HoloUI_C_UpdateCurrentPlayerCount::NumPendingPlayers' has a wrong offset!");
static_assert(offsetof(SquadLock_HoloUI_C_UpdateCurrentPlayerCount, LocalPlayerIsPending) == 0x000008, "Member 'SquadLock_HoloUI_C_UpdateCurrentPlayerCount::LocalPlayerIsPending' has a wrong offset!");
static_assert(offsetof(SquadLock_HoloUI_C_UpdateCurrentPlayerCount, LocalPendingPlayerCount) == 0x00000C, "Member 'SquadLock_HoloUI_C_UpdateCurrentPlayerCount::LocalPendingPlayerCount' has a wrong offset!");
static_assert(offsetof(SquadLock_HoloUI_C_UpdateCurrentPlayerCount, Temp_int_Variable) == 0x000010, "Member 'SquadLock_HoloUI_C_UpdateCurrentPlayerCount::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(SquadLock_HoloUI_C_UpdateCurrentPlayerCount, CallFunc_Add_IntInt_ReturnValue) == 0x000014, "Member 'SquadLock_HoloUI_C_UpdateCurrentPlayerCount::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(SquadLock_HoloUI_C_UpdateCurrentPlayerCount, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x000018, "Member 'SquadLock_HoloUI_C_UpdateCurrentPlayerCount::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(SquadLock_HoloUI_C_UpdateCurrentPlayerCount, CallFunc_Add_IntInt_ReturnValue_1) == 0x00001C, "Member 'SquadLock_HoloUI_C_UpdateCurrentPlayerCount::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SquadLock_HoloUI_C_UpdateCurrentPlayerCount, CallFunc_GetChildrenCount_ReturnValue) == 0x000020, "Member 'SquadLock_HoloUI_C_UpdateCurrentPlayerCount::CallFunc_GetChildrenCount_ReturnValue' has a wrong offset!");
static_assert(offsetof(SquadLock_HoloUI_C_UpdateCurrentPlayerCount, Temp_int_Variable_1) == 0x000024, "Member 'SquadLock_HoloUI_C_UpdateCurrentPlayerCount::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(SquadLock_HoloUI_C_UpdateCurrentPlayerCount, CallFunc_Subtract_IntInt_ReturnValue) == 0x000028, "Member 'SquadLock_HoloUI_C_UpdateCurrentPlayerCount::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(SquadLock_HoloUI_C_UpdateCurrentPlayerCount, CallFunc_LessEqual_IntInt_ReturnValue) == 0x00002C, "Member 'SquadLock_HoloUI_C_UpdateCurrentPlayerCount::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(SquadLock_HoloUI_C_UpdateCurrentPlayerCount, CallFunc_GreaterEqual_IntInt_ReturnValue_1) == 0x00002D, "Member 'SquadLock_HoloUI_C_UpdateCurrentPlayerCount::CallFunc_GreaterEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SquadLock_HoloUI_C_UpdateCurrentPlayerCount, CallFunc_GetChildAt_ReturnValue) == 0x000030, "Member 'SquadLock_HoloUI_C_UpdateCurrentPlayerCount::CallFunc_GetChildAt_ReturnValue' has a wrong offset!");
static_assert(offsetof(SquadLock_HoloUI_C_UpdateCurrentPlayerCount, K2Node_DynamicCast_AsSquad_Lock_Player_Indicator) == 0x000038, "Member 'SquadLock_HoloUI_C_UpdateCurrentPlayerCount::K2Node_DynamicCast_AsSquad_Lock_Player_Indicator' has a wrong offset!");
static_assert(offsetof(SquadLock_HoloUI_C_UpdateCurrentPlayerCount, K2Node_DynamicCast_bSuccess) == 0x000040, "Member 'SquadLock_HoloUI_C_UpdateCurrentPlayerCount::K2Node_DynamicCast_bSuccess' has a wrong offset!");

// Function SquadLock_HoloUI.SquadLock_HoloUI_C.UpdateMaxPlayerCount
// 0x0028 (0x0028 - 0x0000)
struct SquadLock_HoloUI_C_UpdateMaxPlayerCount final
{
public:
	int32                                         CountNeeded;                                       // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C[0x4];                                        // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USquadLock_PlayerIndicator_C*           CallFunc_Create_ReturnValue;                       // 0x0010(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWrapBoxSlot*                           CallFunc_AddChildToWrapBox_ReturnValue;            // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_21[0x3];                                       // 0x0021(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(SquadLock_HoloUI_C_UpdateMaxPlayerCount) == 0x000008, "Wrong alignment on SquadLock_HoloUI_C_UpdateMaxPlayerCount");
static_assert(sizeof(SquadLock_HoloUI_C_UpdateMaxPlayerCount) == 0x000028, "Wrong size on SquadLock_HoloUI_C_UpdateMaxPlayerCount");
static_assert(offsetof(SquadLock_HoloUI_C_UpdateMaxPlayerCount, CountNeeded) == 0x000000, "Member 'SquadLock_HoloUI_C_UpdateMaxPlayerCount::CountNeeded' has a wrong offset!");
static_assert(offsetof(SquadLock_HoloUI_C_UpdateMaxPlayerCount, CallFunc_Subtract_IntInt_ReturnValue) == 0x000004, "Member 'SquadLock_HoloUI_C_UpdateMaxPlayerCount::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(SquadLock_HoloUI_C_UpdateMaxPlayerCount, Temp_int_Variable) == 0x000008, "Member 'SquadLock_HoloUI_C_UpdateMaxPlayerCount::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(SquadLock_HoloUI_C_UpdateMaxPlayerCount, CallFunc_Create_ReturnValue) == 0x000010, "Member 'SquadLock_HoloUI_C_UpdateMaxPlayerCount::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(SquadLock_HoloUI_C_UpdateMaxPlayerCount, CallFunc_AddChildToWrapBox_ReturnValue) == 0x000018, "Member 'SquadLock_HoloUI_C_UpdateMaxPlayerCount::CallFunc_AddChildToWrapBox_ReturnValue' has a wrong offset!");
static_assert(offsetof(SquadLock_HoloUI_C_UpdateMaxPlayerCount, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000020, "Member 'SquadLock_HoloUI_C_UpdateMaxPlayerCount::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(SquadLock_HoloUI_C_UpdateMaxPlayerCount, CallFunc_Add_IntInt_ReturnValue) == 0x000024, "Member 'SquadLock_HoloUI_C_UpdateMaxPlayerCount::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");

// Function SquadLock_HoloUI.SquadLock_HoloUI_C.UpdateUnlockState
// 0x0014 (0x0014 - 0x0000)
struct SquadLock_HoloUI_C_UpdateUnlockState final
{
public:
	bool                                          bInLocked;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x3];                                        // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           CallFunc_SelectColor_ReturnValue;                  // 0x0004(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(SquadLock_HoloUI_C_UpdateUnlockState) == 0x000004, "Wrong alignment on SquadLock_HoloUI_C_UpdateUnlockState");
static_assert(sizeof(SquadLock_HoloUI_C_UpdateUnlockState) == 0x000014, "Wrong size on SquadLock_HoloUI_C_UpdateUnlockState");
static_assert(offsetof(SquadLock_HoloUI_C_UpdateUnlockState, bInLocked) == 0x000000, "Member 'SquadLock_HoloUI_C_UpdateUnlockState::bInLocked' has a wrong offset!");
static_assert(offsetof(SquadLock_HoloUI_C_UpdateUnlockState, CallFunc_SelectColor_ReturnValue) == 0x000004, "Member 'SquadLock_HoloUI_C_UpdateUnlockState::CallFunc_SelectColor_ReturnValue' has a wrong offset!");

}

