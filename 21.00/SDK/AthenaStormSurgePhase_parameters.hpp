﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AthenaStormSurgePhase

#include "Basic.hpp"

#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function AthenaStormSurgePhase.AthenaStormSurgePhase_C.Anim_Load
// 0x0008 (0x0008 - 0x0000)
struct AthenaStormSurgePhase_C_Anim_Load final
{
public:
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(AthenaStormSurgePhase_C_Anim_Load) == 0x000008, "Wrong alignment on AthenaStormSurgePhase_C_Anim_Load");
static_assert(sizeof(AthenaStormSurgePhase_C_Anim_Load) == 0x000008, "Wrong size on AthenaStormSurgePhase_C_Anim_Load");
static_assert(offsetof(AthenaStormSurgePhase_C_Anim_Load, CallFunc_PlayAnimation_ReturnValue) == 0x000000, "Member 'AthenaStormSurgePhase_C_Anim_Load::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");

// Function AthenaStormSurgePhase.AthenaStormSurgePhase_C.ExecuteUbergraph_AthenaStormSurgePhase
// 0x0050 (0x0050 - 0x0000)
struct AthenaStormSurgePhase_C_ExecuteUbergraph_AthenaStormSurgePhase final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x000C)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x0010(0x0008)(NoDestructor, HasGetValueTypeHash)
	class FText                                   K2Node_Event_TitleText;                            // 0x0018(0x0018)(ConstParm)
	class FText                                   K2Node_Event_SubTitleText;                         // 0x0030(0x0018)(ConstParm)
	bool                                          K2Node_Event_bDisplaySubtitle;                     // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_bPlayDamageActiveSound;               // 0x0049(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(AthenaStormSurgePhase_C_ExecuteUbergraph_AthenaStormSurgePhase) == 0x000008, "Wrong alignment on AthenaStormSurgePhase_C_ExecuteUbergraph_AthenaStormSurgePhase");
static_assert(sizeof(AthenaStormSurgePhase_C_ExecuteUbergraph_AthenaStormSurgePhase) == 0x000050, "Wrong size on AthenaStormSurgePhase_C_ExecuteUbergraph_AthenaStormSurgePhase");
static_assert(offsetof(AthenaStormSurgePhase_C_ExecuteUbergraph_AthenaStormSurgePhase, EntryPoint) == 0x000000, "Member 'AthenaStormSurgePhase_C_ExecuteUbergraph_AthenaStormSurgePhase::EntryPoint' has a wrong offset!");
static_assert(offsetof(AthenaStormSurgePhase_C_ExecuteUbergraph_AthenaStormSurgePhase, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'AthenaStormSurgePhase_C_ExecuteUbergraph_AthenaStormSurgePhase::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(AthenaStormSurgePhase_C_ExecuteUbergraph_AthenaStormSurgePhase, CallFunc_K2_SetTimerDelegate_ReturnValue) == 0x000010, "Member 'AthenaStormSurgePhase_C_ExecuteUbergraph_AthenaStormSurgePhase::CallFunc_K2_SetTimerDelegate_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaStormSurgePhase_C_ExecuteUbergraph_AthenaStormSurgePhase, K2Node_Event_TitleText) == 0x000018, "Member 'AthenaStormSurgePhase_C_ExecuteUbergraph_AthenaStormSurgePhase::K2Node_Event_TitleText' has a wrong offset!");
static_assert(offsetof(AthenaStormSurgePhase_C_ExecuteUbergraph_AthenaStormSurgePhase, K2Node_Event_SubTitleText) == 0x000030, "Member 'AthenaStormSurgePhase_C_ExecuteUbergraph_AthenaStormSurgePhase::K2Node_Event_SubTitleText' has a wrong offset!");
static_assert(offsetof(AthenaStormSurgePhase_C_ExecuteUbergraph_AthenaStormSurgePhase, K2Node_Event_bDisplaySubtitle) == 0x000048, "Member 'AthenaStormSurgePhase_C_ExecuteUbergraph_AthenaStormSurgePhase::K2Node_Event_bDisplaySubtitle' has a wrong offset!");
static_assert(offsetof(AthenaStormSurgePhase_C_ExecuteUbergraph_AthenaStormSurgePhase, K2Node_Event_bPlayDamageActiveSound) == 0x000049, "Member 'AthenaStormSurgePhase_C_ExecuteUbergraph_AthenaStormSurgePhase::K2Node_Event_bPlayDamageActiveSound' has a wrong offset!");

// Function AthenaStormSurgePhase.AthenaStormSurgePhase_C.OnStartDisplaying
// 0x0038 (0x0038 - 0x0000)
struct AthenaStormSurgePhase_C_OnStartDisplaying final
{
public:
	class FText                                   TitleText;                                         // 0x0000(0x0018)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class FText                                   SubTitleText;                                      // 0x0018(0x0018)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                          bDisplaySubtitle;                                  // 0x0030(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bPlayDamageActiveSound;                            // 0x0031(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(AthenaStormSurgePhase_C_OnStartDisplaying) == 0x000008, "Wrong alignment on AthenaStormSurgePhase_C_OnStartDisplaying");
static_assert(sizeof(AthenaStormSurgePhase_C_OnStartDisplaying) == 0x000038, "Wrong size on AthenaStormSurgePhase_C_OnStartDisplaying");
static_assert(offsetof(AthenaStormSurgePhase_C_OnStartDisplaying, TitleText) == 0x000000, "Member 'AthenaStormSurgePhase_C_OnStartDisplaying::TitleText' has a wrong offset!");
static_assert(offsetof(AthenaStormSurgePhase_C_OnStartDisplaying, SubTitleText) == 0x000018, "Member 'AthenaStormSurgePhase_C_OnStartDisplaying::SubTitleText' has a wrong offset!");
static_assert(offsetof(AthenaStormSurgePhase_C_OnStartDisplaying, bDisplaySubtitle) == 0x000030, "Member 'AthenaStormSurgePhase_C_OnStartDisplaying::bDisplaySubtitle' has a wrong offset!");
static_assert(offsetof(AthenaStormSurgePhase_C_OnStartDisplaying, bPlayDamageActiveSound) == 0x000031, "Member 'AthenaStormSurgePhase_C_OnStartDisplaying::bPlayDamageActiveSound' has a wrong offset!");

}

