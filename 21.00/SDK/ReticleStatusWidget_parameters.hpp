﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ReticleStatusWidget

#include "Basic.hpp"

#include "GameplayTags_structs.hpp"


namespace SDK::Params
{

// Function ReticleStatusWidget.ReticleStatusWidget_C.ExecuteUbergraph_ReticleStatusWidget
// 0x00E0 (0x00E0 - 0x0000)
struct ReticleStatusWidget_C_ExecuteUbergraph_ReticleStatusWidget final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AFortGameStateAthena*                   K2Node_CustomEvent_GameState;                      // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	const class UFortPlaylist*                    K2Node_CustomEvent_Playlist;                       // 0x0010(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagContainer                  K2Node_CustomEvent_PlaylistContextTags;            // 0x0018(0x0020)(ConstParm)
	TDelegate<void(class AFortGameStateAthena* GameState, class UFortPlaylist* Playlist, struct FGameplayTagContainer& PlaylistContextTags)> K2Node_CreateDelegate_OutputDelegate;              // 0x0038(0x000C)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_44[0x4];                                       // 0x0044(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayTagContainer                  Temp_struct_Variable;                              // 0x0048(0x0020)()
	class UFortPlaylist*                          Temp_object_Variable;                              // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_HasTag_ReturnValue;                       // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_71[0x7];                                       // 0x0071(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AFortGameStateAthena*                   Temp_object_Variable_1;                            // 0x0078(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortAsyncAction_CurrentPlaylistReady*  CallFunc_PlaylistDataReadyAsync_ReturnValue;       // 0x0080(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortHUDContext*                        CallFunc_GetContext_ReturnValue;                   // 0x0088(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_91[0x7];                                       // 0x0091(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayTagContainer                  K2Node_CustomEvent_FailedReason;                   // 0x0098(0x0020)()
	class FText                                   K2Node_CustomEvent_FailureText;                    // 0x00B8(0x0018)(ConstParm)
	float                                         CallFunc_GetStatusDisplayDurationFromFailureReason_StatusDisplayDuration; // 0x00D0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(const struct FGameplayTagContainer& FailedReason, class FText& FailureText)> K2Node_CreateDelegate_OutputDelegate_1;            // 0x00D4(0x000C)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ReticleStatusWidget_C_ExecuteUbergraph_ReticleStatusWidget) == 0x000008, "Wrong alignment on ReticleStatusWidget_C_ExecuteUbergraph_ReticleStatusWidget");
static_assert(sizeof(ReticleStatusWidget_C_ExecuteUbergraph_ReticleStatusWidget) == 0x0000E0, "Wrong size on ReticleStatusWidget_C_ExecuteUbergraph_ReticleStatusWidget");
static_assert(offsetof(ReticleStatusWidget_C_ExecuteUbergraph_ReticleStatusWidget, EntryPoint) == 0x000000, "Member 'ReticleStatusWidget_C_ExecuteUbergraph_ReticleStatusWidget::EntryPoint' has a wrong offset!");
static_assert(offsetof(ReticleStatusWidget_C_ExecuteUbergraph_ReticleStatusWidget, K2Node_CustomEvent_GameState) == 0x000008, "Member 'ReticleStatusWidget_C_ExecuteUbergraph_ReticleStatusWidget::K2Node_CustomEvent_GameState' has a wrong offset!");
static_assert(offsetof(ReticleStatusWidget_C_ExecuteUbergraph_ReticleStatusWidget, K2Node_CustomEvent_Playlist) == 0x000010, "Member 'ReticleStatusWidget_C_ExecuteUbergraph_ReticleStatusWidget::K2Node_CustomEvent_Playlist' has a wrong offset!");
static_assert(offsetof(ReticleStatusWidget_C_ExecuteUbergraph_ReticleStatusWidget, K2Node_CustomEvent_PlaylistContextTags) == 0x000018, "Member 'ReticleStatusWidget_C_ExecuteUbergraph_ReticleStatusWidget::K2Node_CustomEvent_PlaylistContextTags' has a wrong offset!");
static_assert(offsetof(ReticleStatusWidget_C_ExecuteUbergraph_ReticleStatusWidget, K2Node_CreateDelegate_OutputDelegate) == 0x000038, "Member 'ReticleStatusWidget_C_ExecuteUbergraph_ReticleStatusWidget::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(ReticleStatusWidget_C_ExecuteUbergraph_ReticleStatusWidget, Temp_struct_Variable) == 0x000048, "Member 'ReticleStatusWidget_C_ExecuteUbergraph_ReticleStatusWidget::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(ReticleStatusWidget_C_ExecuteUbergraph_ReticleStatusWidget, Temp_object_Variable) == 0x000068, "Member 'ReticleStatusWidget_C_ExecuteUbergraph_ReticleStatusWidget::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(ReticleStatusWidget_C_ExecuteUbergraph_ReticleStatusWidget, CallFunc_HasTag_ReturnValue) == 0x000070, "Member 'ReticleStatusWidget_C_ExecuteUbergraph_ReticleStatusWidget::CallFunc_HasTag_ReturnValue' has a wrong offset!");
static_assert(offsetof(ReticleStatusWidget_C_ExecuteUbergraph_ReticleStatusWidget, Temp_object_Variable_1) == 0x000078, "Member 'ReticleStatusWidget_C_ExecuteUbergraph_ReticleStatusWidget::Temp_object_Variable_1' has a wrong offset!");
static_assert(offsetof(ReticleStatusWidget_C_ExecuteUbergraph_ReticleStatusWidget, CallFunc_PlaylistDataReadyAsync_ReturnValue) == 0x000080, "Member 'ReticleStatusWidget_C_ExecuteUbergraph_ReticleStatusWidget::CallFunc_PlaylistDataReadyAsync_ReturnValue' has a wrong offset!");
static_assert(offsetof(ReticleStatusWidget_C_ExecuteUbergraph_ReticleStatusWidget, CallFunc_GetContext_ReturnValue) == 0x000088, "Member 'ReticleStatusWidget_C_ExecuteUbergraph_ReticleStatusWidget::CallFunc_GetContext_ReturnValue' has a wrong offset!");
static_assert(offsetof(ReticleStatusWidget_C_ExecuteUbergraph_ReticleStatusWidget, CallFunc_IsValid_ReturnValue) == 0x000090, "Member 'ReticleStatusWidget_C_ExecuteUbergraph_ReticleStatusWidget::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(ReticleStatusWidget_C_ExecuteUbergraph_ReticleStatusWidget, K2Node_CustomEvent_FailedReason) == 0x000098, "Member 'ReticleStatusWidget_C_ExecuteUbergraph_ReticleStatusWidget::K2Node_CustomEvent_FailedReason' has a wrong offset!");
static_assert(offsetof(ReticleStatusWidget_C_ExecuteUbergraph_ReticleStatusWidget, K2Node_CustomEvent_FailureText) == 0x0000B8, "Member 'ReticleStatusWidget_C_ExecuteUbergraph_ReticleStatusWidget::K2Node_CustomEvent_FailureText' has a wrong offset!");
static_assert(offsetof(ReticleStatusWidget_C_ExecuteUbergraph_ReticleStatusWidget, CallFunc_GetStatusDisplayDurationFromFailureReason_StatusDisplayDuration) == 0x0000D0, "Member 'ReticleStatusWidget_C_ExecuteUbergraph_ReticleStatusWidget::CallFunc_GetStatusDisplayDurationFromFailureReason_StatusDisplayDuration' has a wrong offset!");
static_assert(offsetof(ReticleStatusWidget_C_ExecuteUbergraph_ReticleStatusWidget, K2Node_CreateDelegate_OutputDelegate_1) == 0x0000D4, "Member 'ReticleStatusWidget_C_ExecuteUbergraph_ReticleStatusWidget::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");

// Function ReticleStatusWidget.ReticleStatusWidget_C.GetStatusDisplayDurationFromFailureReason
// 0x0030 (0x0030 - 0x0000)
struct ReticleStatusWidget_C_GetStatusDisplayDurationFromFailureReason final
{
public:
	struct FGameplayTagContainer                  FailureReason;                                     // 0x0000(0x0020)(BlueprintVisible, BlueprintReadOnly, Parm)
	float                                         StatusDisplayDuration;                             // 0x0020(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0024(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_HasAnyTags_ReturnValue;                   // 0x0025(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_26[0x2];                                       // 0x0026(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         K2Node_Select_Default;                             // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ReticleStatusWidget_C_GetStatusDisplayDurationFromFailureReason) == 0x000008, "Wrong alignment on ReticleStatusWidget_C_GetStatusDisplayDurationFromFailureReason");
static_assert(sizeof(ReticleStatusWidget_C_GetStatusDisplayDurationFromFailureReason) == 0x000030, "Wrong size on ReticleStatusWidget_C_GetStatusDisplayDurationFromFailureReason");
static_assert(offsetof(ReticleStatusWidget_C_GetStatusDisplayDurationFromFailureReason, FailureReason) == 0x000000, "Member 'ReticleStatusWidget_C_GetStatusDisplayDurationFromFailureReason::FailureReason' has a wrong offset!");
static_assert(offsetof(ReticleStatusWidget_C_GetStatusDisplayDurationFromFailureReason, StatusDisplayDuration) == 0x000020, "Member 'ReticleStatusWidget_C_GetStatusDisplayDurationFromFailureReason::StatusDisplayDuration' has a wrong offset!");
static_assert(offsetof(ReticleStatusWidget_C_GetStatusDisplayDurationFromFailureReason, Temp_bool_Variable) == 0x000024, "Member 'ReticleStatusWidget_C_GetStatusDisplayDurationFromFailureReason::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(ReticleStatusWidget_C_GetStatusDisplayDurationFromFailureReason, CallFunc_HasAnyTags_ReturnValue) == 0x000025, "Member 'ReticleStatusWidget_C_GetStatusDisplayDurationFromFailureReason::CallFunc_HasAnyTags_ReturnValue' has a wrong offset!");
static_assert(offsetof(ReticleStatusWidget_C_GetStatusDisplayDurationFromFailureReason, K2Node_Select_Default) == 0x000028, "Member 'ReticleStatusWidget_C_GetStatusDisplayDurationFromFailureReason::K2Node_Select_Default' has a wrong offset!");

// Function ReticleStatusWidget.ReticleStatusWidget_C.OnReady_23885D3A4C287098F8536CB281CC33D6
// 0x0030 (0x0030 - 0x0000)
struct ReticleStatusWidget_C_OnReady_23885D3A4C287098F8536CB281CC33D6 final
{
public:
	class AFortGameStateAthena*                   GameState;                                         // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	const class UFortPlaylist*                    Playlist;                                          // 0x0008(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagContainer                  PlaylistContextTags;                               // 0x0010(0x0020)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(ReticleStatusWidget_C_OnReady_23885D3A4C287098F8536CB281CC33D6) == 0x000008, "Wrong alignment on ReticleStatusWidget_C_OnReady_23885D3A4C287098F8536CB281CC33D6");
static_assert(sizeof(ReticleStatusWidget_C_OnReady_23885D3A4C287098F8536CB281CC33D6) == 0x000030, "Wrong size on ReticleStatusWidget_C_OnReady_23885D3A4C287098F8536CB281CC33D6");
static_assert(offsetof(ReticleStatusWidget_C_OnReady_23885D3A4C287098F8536CB281CC33D6, GameState) == 0x000000, "Member 'ReticleStatusWidget_C_OnReady_23885D3A4C287098F8536CB281CC33D6::GameState' has a wrong offset!");
static_assert(offsetof(ReticleStatusWidget_C_OnReady_23885D3A4C287098F8536CB281CC33D6, Playlist) == 0x000008, "Member 'ReticleStatusWidget_C_OnReady_23885D3A4C287098F8536CB281CC33D6::Playlist' has a wrong offset!");
static_assert(offsetof(ReticleStatusWidget_C_OnReady_23885D3A4C287098F8536CB281CC33D6, PlaylistContextTags) == 0x000010, "Member 'ReticleStatusWidget_C_OnReady_23885D3A4C287098F8536CB281CC33D6::PlaylistContextTags' has a wrong offset!");

// Function ReticleStatusWidget.ReticleStatusWidget_C.OnUnableToPerformAction
// 0x0038 (0x0038 - 0x0000)
struct ReticleStatusWidget_C_OnUnableToPerformAction final
{
public:
	struct FGameplayTagContainer                  FailedReason;                                      // 0x0000(0x0020)(BlueprintVisible, BlueprintReadOnly, Parm)
	class FText                                   FailureText;                                       // 0x0020(0x0018)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(ReticleStatusWidget_C_OnUnableToPerformAction) == 0x000008, "Wrong alignment on ReticleStatusWidget_C_OnUnableToPerformAction");
static_assert(sizeof(ReticleStatusWidget_C_OnUnableToPerformAction) == 0x000038, "Wrong size on ReticleStatusWidget_C_OnUnableToPerformAction");
static_assert(offsetof(ReticleStatusWidget_C_OnUnableToPerformAction, FailedReason) == 0x000000, "Member 'ReticleStatusWidget_C_OnUnableToPerformAction::FailedReason' has a wrong offset!");
static_assert(offsetof(ReticleStatusWidget_C_OnUnableToPerformAction, FailureText) == 0x000020, "Member 'ReticleStatusWidget_C_OnUnableToPerformAction::FailureText' has a wrong offset!");

}

