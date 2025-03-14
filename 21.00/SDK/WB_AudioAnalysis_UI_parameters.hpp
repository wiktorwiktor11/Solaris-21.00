﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_AudioAnalysis_UI

#include "Basic.hpp"

#include "FortniteGame_structs.hpp"


namespace SDK::Params
{

// Function WB_AudioAnalysis_UI.WB_AudioAnalysis_UI_C.AddScalarParameter
// 0x00B0 (0x00B0 - 0x0000)
struct WB_AudioAnalysis_UI_C_AddScalarParameter final
{
public:
	struct FAudioAnalysisParameterScalar          Param;                                             // 0x0000(0x00B0)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(WB_AudioAnalysis_UI_C_AddScalarParameter) == 0x000010, "Wrong alignment on WB_AudioAnalysis_UI_C_AddScalarParameter");
static_assert(sizeof(WB_AudioAnalysis_UI_C_AddScalarParameter) == 0x0000B0, "Wrong size on WB_AudioAnalysis_UI_C_AddScalarParameter");
static_assert(offsetof(WB_AudioAnalysis_UI_C_AddScalarParameter, Param) == 0x000000, "Member 'WB_AudioAnalysis_UI_C_AddScalarParameter::Param' has a wrong offset!");

// Function WB_AudioAnalysis_UI.WB_AudioAnalysis_UI_C.AddVectorParameter
// 0x00C0 (0x00C0 - 0x0000)
struct WB_AudioAnalysis_UI_C_AddVectorParameter final
{
public:
	struct FAudioAnalysisParameterVector          Param;                                             // 0x0000(0x00C0)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(WB_AudioAnalysis_UI_C_AddVectorParameter) == 0x000010, "Wrong alignment on WB_AudioAnalysis_UI_C_AddVectorParameter");
static_assert(sizeof(WB_AudioAnalysis_UI_C_AddVectorParameter) == 0x0000C0, "Wrong size on WB_AudioAnalysis_UI_C_AddVectorParameter");
static_assert(offsetof(WB_AudioAnalysis_UI_C_AddVectorParameter, Param) == 0x000000, "Member 'WB_AudioAnalysis_UI_C_AddVectorParameter::Param' has a wrong offset!");

// Function WB_AudioAnalysis_UI.WB_AudioAnalysis_UI_C.ExecuteUbergraph_WB_AudioAnalysis_UI
// 0x01D0 (0x01D0 - 0x0000)
struct WB_AudioAnalysis_UI_C_ExecuteUbergraph_WB_AudioAnalysis_UI final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_15[0x3];                                       // 0x0015(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1C[0x4];                                       // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FAudioAnalysisParameterScalar          K2Node_Event_Param_1;                              // 0x0020(0x00B0)(ConstParm)
	class UWB_AudioAnalysis_FloatGraph_C*         CallFunc_Array_Get_Item;                           // 0x00D0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x00D8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_DC[0x4];                                       // 0x00DC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FAudioAnalysisParameterVector          K2Node_Event_Param;                                // 0x00E0(0x00C0)(ConstParm)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x01A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1A1[0x7];                                      // 0x01A1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UWB_AudioAnalysis_FloatGraph_C*         CallFunc_Create_ReturnValue;                       // 0x01A8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWB_AudioAnalysis_FloatGraph_C*         CallFunc_Create_ReturnValue_1;                     // 0x01B0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UVerticalBoxSlot*                       CallFunc_AddChildToVerticalBox_ReturnValue;        // 0x01B8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x01C0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue_1;                  // 0x01C4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UVerticalBoxSlot*                       CallFunc_AddChildToVerticalBox_ReturnValue_1;      // 0x01C8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WB_AudioAnalysis_UI_C_ExecuteUbergraph_WB_AudioAnalysis_UI) == 0x000010, "Wrong alignment on WB_AudioAnalysis_UI_C_ExecuteUbergraph_WB_AudioAnalysis_UI");
static_assert(sizeof(WB_AudioAnalysis_UI_C_ExecuteUbergraph_WB_AudioAnalysis_UI) == 0x0001D0, "Wrong size on WB_AudioAnalysis_UI_C_ExecuteUbergraph_WB_AudioAnalysis_UI");
static_assert(offsetof(WB_AudioAnalysis_UI_C_ExecuteUbergraph_WB_AudioAnalysis_UI, EntryPoint) == 0x000000, "Member 'WB_AudioAnalysis_UI_C_ExecuteUbergraph_WB_AudioAnalysis_UI::EntryPoint' has a wrong offset!");
static_assert(offsetof(WB_AudioAnalysis_UI_C_ExecuteUbergraph_WB_AudioAnalysis_UI, Temp_int_Loop_Counter_Variable) == 0x000004, "Member 'WB_AudioAnalysis_UI_C_ExecuteUbergraph_WB_AudioAnalysis_UI::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(WB_AudioAnalysis_UI_C_ExecuteUbergraph_WB_AudioAnalysis_UI, Temp_int_Array_Index_Variable) == 0x000008, "Member 'WB_AudioAnalysis_UI_C_ExecuteUbergraph_WB_AudioAnalysis_UI::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(WB_AudioAnalysis_UI_C_ExecuteUbergraph_WB_AudioAnalysis_UI, CallFunc_Add_IntInt_ReturnValue) == 0x00000C, "Member 'WB_AudioAnalysis_UI_C_ExecuteUbergraph_WB_AudioAnalysis_UI::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_AudioAnalysis_UI_C_ExecuteUbergraph_WB_AudioAnalysis_UI, Temp_int_Variable) == 0x000010, "Member 'WB_AudioAnalysis_UI_C_ExecuteUbergraph_WB_AudioAnalysis_UI::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(WB_AudioAnalysis_UI_C_ExecuteUbergraph_WB_AudioAnalysis_UI, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000014, "Member 'WB_AudioAnalysis_UI_C_ExecuteUbergraph_WB_AudioAnalysis_UI::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_AudioAnalysis_UI_C_ExecuteUbergraph_WB_AudioAnalysis_UI, CallFunc_Add_IntInt_ReturnValue_1) == 0x000018, "Member 'WB_AudioAnalysis_UI_C_ExecuteUbergraph_WB_AudioAnalysis_UI::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WB_AudioAnalysis_UI_C_ExecuteUbergraph_WB_AudioAnalysis_UI, K2Node_Event_Param_1) == 0x000020, "Member 'WB_AudioAnalysis_UI_C_ExecuteUbergraph_WB_AudioAnalysis_UI::K2Node_Event_Param_1' has a wrong offset!");
static_assert(offsetof(WB_AudioAnalysis_UI_C_ExecuteUbergraph_WB_AudioAnalysis_UI, CallFunc_Array_Get_Item) == 0x0000D0, "Member 'WB_AudioAnalysis_UI_C_ExecuteUbergraph_WB_AudioAnalysis_UI::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(WB_AudioAnalysis_UI_C_ExecuteUbergraph_WB_AudioAnalysis_UI, CallFunc_Array_Length_ReturnValue) == 0x0000D8, "Member 'WB_AudioAnalysis_UI_C_ExecuteUbergraph_WB_AudioAnalysis_UI::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_AudioAnalysis_UI_C_ExecuteUbergraph_WB_AudioAnalysis_UI, K2Node_Event_Param) == 0x0000E0, "Member 'WB_AudioAnalysis_UI_C_ExecuteUbergraph_WB_AudioAnalysis_UI::K2Node_Event_Param' has a wrong offset!");
static_assert(offsetof(WB_AudioAnalysis_UI_C_ExecuteUbergraph_WB_AudioAnalysis_UI, CallFunc_Less_IntInt_ReturnValue) == 0x0001A0, "Member 'WB_AudioAnalysis_UI_C_ExecuteUbergraph_WB_AudioAnalysis_UI::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_AudioAnalysis_UI_C_ExecuteUbergraph_WB_AudioAnalysis_UI, CallFunc_Create_ReturnValue) == 0x0001A8, "Member 'WB_AudioAnalysis_UI_C_ExecuteUbergraph_WB_AudioAnalysis_UI::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_AudioAnalysis_UI_C_ExecuteUbergraph_WB_AudioAnalysis_UI, CallFunc_Create_ReturnValue_1) == 0x0001B0, "Member 'WB_AudioAnalysis_UI_C_ExecuteUbergraph_WB_AudioAnalysis_UI::CallFunc_Create_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WB_AudioAnalysis_UI_C_ExecuteUbergraph_WB_AudioAnalysis_UI, CallFunc_AddChildToVerticalBox_ReturnValue) == 0x0001B8, "Member 'WB_AudioAnalysis_UI_C_ExecuteUbergraph_WB_AudioAnalysis_UI::CallFunc_AddChildToVerticalBox_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_AudioAnalysis_UI_C_ExecuteUbergraph_WB_AudioAnalysis_UI, CallFunc_Array_Add_ReturnValue) == 0x0001C0, "Member 'WB_AudioAnalysis_UI_C_ExecuteUbergraph_WB_AudioAnalysis_UI::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_AudioAnalysis_UI_C_ExecuteUbergraph_WB_AudioAnalysis_UI, CallFunc_Array_Add_ReturnValue_1) == 0x0001C4, "Member 'WB_AudioAnalysis_UI_C_ExecuteUbergraph_WB_AudioAnalysis_UI::CallFunc_Array_Add_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WB_AudioAnalysis_UI_C_ExecuteUbergraph_WB_AudioAnalysis_UI, CallFunc_AddChildToVerticalBox_ReturnValue_1) == 0x0001C8, "Member 'WB_AudioAnalysis_UI_C_ExecuteUbergraph_WB_AudioAnalysis_UI::CallFunc_AddChildToVerticalBox_ReturnValue_1' has a wrong offset!");

}

