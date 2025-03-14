﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_AudioAnalysis_FloatGraph

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "SlateCore_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function WB_AudioAnalysis_FloatGraph.WB_AudioAnalysis_FloatGraph_C.calcWidgetSize
// 0x0070 (0x0070 - 0x0000)
struct WB_AudioAnalysis_FloatGraph_C_calcWidgetSize final
{
public:
	struct FGeometry                              geom;                                              // 0x0000(0x0040)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FVector2D                              CallFunc_GetLocalSize_ReturnValue;                 // 0x0040(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector2D_X;                          // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector2D_Y;                          // 0x0054(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Subtract_FloatFloat_ReturnValue;          // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Subtract_FloatFloat_ReturnValue_1;        // 0x005C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_MakeVector2D_ReturnValue;                 // 0x0060(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WB_AudioAnalysis_FloatGraph_C_calcWidgetSize) == 0x000008, "Wrong alignment on WB_AudioAnalysis_FloatGraph_C_calcWidgetSize");
static_assert(sizeof(WB_AudioAnalysis_FloatGraph_C_calcWidgetSize) == 0x000070, "Wrong size on WB_AudioAnalysis_FloatGraph_C_calcWidgetSize");
static_assert(offsetof(WB_AudioAnalysis_FloatGraph_C_calcWidgetSize, geom) == 0x000000, "Member 'WB_AudioAnalysis_FloatGraph_C_calcWidgetSize::geom' has a wrong offset!");
static_assert(offsetof(WB_AudioAnalysis_FloatGraph_C_calcWidgetSize, CallFunc_GetLocalSize_ReturnValue) == 0x000040, "Member 'WB_AudioAnalysis_FloatGraph_C_calcWidgetSize::CallFunc_GetLocalSize_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_AudioAnalysis_FloatGraph_C_calcWidgetSize, CallFunc_BreakVector2D_X) == 0x000050, "Member 'WB_AudioAnalysis_FloatGraph_C_calcWidgetSize::CallFunc_BreakVector2D_X' has a wrong offset!");
static_assert(offsetof(WB_AudioAnalysis_FloatGraph_C_calcWidgetSize, CallFunc_BreakVector2D_Y) == 0x000054, "Member 'WB_AudioAnalysis_FloatGraph_C_calcWidgetSize::CallFunc_BreakVector2D_Y' has a wrong offset!");
static_assert(offsetof(WB_AudioAnalysis_FloatGraph_C_calcWidgetSize, CallFunc_Subtract_FloatFloat_ReturnValue) == 0x000058, "Member 'WB_AudioAnalysis_FloatGraph_C_calcWidgetSize::CallFunc_Subtract_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_AudioAnalysis_FloatGraph_C_calcWidgetSize, CallFunc_Subtract_FloatFloat_ReturnValue_1) == 0x00005C, "Member 'WB_AudioAnalysis_FloatGraph_C_calcWidgetSize::CallFunc_Subtract_FloatFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WB_AudioAnalysis_FloatGraph_C_calcWidgetSize, CallFunc_MakeVector2D_ReturnValue) == 0x000060, "Member 'WB_AudioAnalysis_FloatGraph_C_calcWidgetSize::CallFunc_MakeVector2D_ReturnValue' has a wrong offset!");

// Function WB_AudioAnalysis_FloatGraph.WB_AudioAnalysis_FloatGraph_C.ExecuteUbergraph_WB_AudioAnalysis_FloatGraph
// 0x0128 (0x0128 - 0x0000)
struct WB_AudioAnalysis_FloatGraph_C_ExecuteUbergraph_WB_AudioAnalysis_FloatGraph final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   K2Node_CustomEvent_Parameter;                      // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C[0x4];                                        // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialParameterCollection*           K2Node_CustomEvent_Collection;                     // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_VectorIndex;                    // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1C[0x4];                                       // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGeometry                              K2Node_Event_MyGeometry;                           // 0x0020(0x0040)(IsPlainOldData, NoDestructor)
	float                                         K2Node_Event_InDeltaTime;                          // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetScalarParameterValue_ReturnValue;      // 0x0064(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           CallFunc_GetVectorParameterValue_ReturnValue;      // 0x0068(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakColor_R;                             // 0x0078(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakColor_G;                             // 0x007C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakColor_B;                             // 0x0080(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakColor_A;                             // 0x0084(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_FloatToText_ReturnValue;             // 0x0088(0x0018)()
	int32                                         Temp_int_Variable;                                 // 0x00A0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Select_Default;                             // 0x00A4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x00A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_A9[0x7];                                       // 0x00A9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_FloatToText_ReturnValue_1;           // 0x00B0(0x0018)()
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue;              // 0x00C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C9[0x7];                                       // 0x00C9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_IntToString_ReturnValue;             // 0x00D0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_SelectString_ReturnValue;                 // 0x00E0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_NameToString_ReturnValue;            // 0x00F0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x0100(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0110(0x0018)()
};
static_assert(alignof(WB_AudioAnalysis_FloatGraph_C_ExecuteUbergraph_WB_AudioAnalysis_FloatGraph) == 0x000008, "Wrong alignment on WB_AudioAnalysis_FloatGraph_C_ExecuteUbergraph_WB_AudioAnalysis_FloatGraph");
static_assert(sizeof(WB_AudioAnalysis_FloatGraph_C_ExecuteUbergraph_WB_AudioAnalysis_FloatGraph) == 0x000128, "Wrong size on WB_AudioAnalysis_FloatGraph_C_ExecuteUbergraph_WB_AudioAnalysis_FloatGraph");
static_assert(offsetof(WB_AudioAnalysis_FloatGraph_C_ExecuteUbergraph_WB_AudioAnalysis_FloatGraph, EntryPoint) == 0x000000, "Member 'WB_AudioAnalysis_FloatGraph_C_ExecuteUbergraph_WB_AudioAnalysis_FloatGraph::EntryPoint' has a wrong offset!");
static_assert(offsetof(WB_AudioAnalysis_FloatGraph_C_ExecuteUbergraph_WB_AudioAnalysis_FloatGraph, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000004, "Member 'WB_AudioAnalysis_FloatGraph_C_ExecuteUbergraph_WB_AudioAnalysis_FloatGraph::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_AudioAnalysis_FloatGraph_C_ExecuteUbergraph_WB_AudioAnalysis_FloatGraph, K2Node_CustomEvent_Parameter) == 0x000008, "Member 'WB_AudioAnalysis_FloatGraph_C_ExecuteUbergraph_WB_AudioAnalysis_FloatGraph::K2Node_CustomEvent_Parameter' has a wrong offset!");
static_assert(offsetof(WB_AudioAnalysis_FloatGraph_C_ExecuteUbergraph_WB_AudioAnalysis_FloatGraph, K2Node_CustomEvent_Collection) == 0x000010, "Member 'WB_AudioAnalysis_FloatGraph_C_ExecuteUbergraph_WB_AudioAnalysis_FloatGraph::K2Node_CustomEvent_Collection' has a wrong offset!");
static_assert(offsetof(WB_AudioAnalysis_FloatGraph_C_ExecuteUbergraph_WB_AudioAnalysis_FloatGraph, K2Node_CustomEvent_VectorIndex) == 0x000018, "Member 'WB_AudioAnalysis_FloatGraph_C_ExecuteUbergraph_WB_AudioAnalysis_FloatGraph::K2Node_CustomEvent_VectorIndex' has a wrong offset!");
static_assert(offsetof(WB_AudioAnalysis_FloatGraph_C_ExecuteUbergraph_WB_AudioAnalysis_FloatGraph, K2Node_Event_MyGeometry) == 0x000020, "Member 'WB_AudioAnalysis_FloatGraph_C_ExecuteUbergraph_WB_AudioAnalysis_FloatGraph::K2Node_Event_MyGeometry' has a wrong offset!");
static_assert(offsetof(WB_AudioAnalysis_FloatGraph_C_ExecuteUbergraph_WB_AudioAnalysis_FloatGraph, K2Node_Event_InDeltaTime) == 0x000060, "Member 'WB_AudioAnalysis_FloatGraph_C_ExecuteUbergraph_WB_AudioAnalysis_FloatGraph::K2Node_Event_InDeltaTime' has a wrong offset!");
static_assert(offsetof(WB_AudioAnalysis_FloatGraph_C_ExecuteUbergraph_WB_AudioAnalysis_FloatGraph, CallFunc_GetScalarParameterValue_ReturnValue) == 0x000064, "Member 'WB_AudioAnalysis_FloatGraph_C_ExecuteUbergraph_WB_AudioAnalysis_FloatGraph::CallFunc_GetScalarParameterValue_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_AudioAnalysis_FloatGraph_C_ExecuteUbergraph_WB_AudioAnalysis_FloatGraph, CallFunc_GetVectorParameterValue_ReturnValue) == 0x000068, "Member 'WB_AudioAnalysis_FloatGraph_C_ExecuteUbergraph_WB_AudioAnalysis_FloatGraph::CallFunc_GetVectorParameterValue_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_AudioAnalysis_FloatGraph_C_ExecuteUbergraph_WB_AudioAnalysis_FloatGraph, CallFunc_BreakColor_R) == 0x000078, "Member 'WB_AudioAnalysis_FloatGraph_C_ExecuteUbergraph_WB_AudioAnalysis_FloatGraph::CallFunc_BreakColor_R' has a wrong offset!");
static_assert(offsetof(WB_AudioAnalysis_FloatGraph_C_ExecuteUbergraph_WB_AudioAnalysis_FloatGraph, CallFunc_BreakColor_G) == 0x00007C, "Member 'WB_AudioAnalysis_FloatGraph_C_ExecuteUbergraph_WB_AudioAnalysis_FloatGraph::CallFunc_BreakColor_G' has a wrong offset!");
static_assert(offsetof(WB_AudioAnalysis_FloatGraph_C_ExecuteUbergraph_WB_AudioAnalysis_FloatGraph, CallFunc_BreakColor_B) == 0x000080, "Member 'WB_AudioAnalysis_FloatGraph_C_ExecuteUbergraph_WB_AudioAnalysis_FloatGraph::CallFunc_BreakColor_B' has a wrong offset!");
static_assert(offsetof(WB_AudioAnalysis_FloatGraph_C_ExecuteUbergraph_WB_AudioAnalysis_FloatGraph, CallFunc_BreakColor_A) == 0x000084, "Member 'WB_AudioAnalysis_FloatGraph_C_ExecuteUbergraph_WB_AudioAnalysis_FloatGraph::CallFunc_BreakColor_A' has a wrong offset!");
static_assert(offsetof(WB_AudioAnalysis_FloatGraph_C_ExecuteUbergraph_WB_AudioAnalysis_FloatGraph, CallFunc_Conv_FloatToText_ReturnValue) == 0x000088, "Member 'WB_AudioAnalysis_FloatGraph_C_ExecuteUbergraph_WB_AudioAnalysis_FloatGraph::CallFunc_Conv_FloatToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_AudioAnalysis_FloatGraph_C_ExecuteUbergraph_WB_AudioAnalysis_FloatGraph, Temp_int_Variable) == 0x0000A0, "Member 'WB_AudioAnalysis_FloatGraph_C_ExecuteUbergraph_WB_AudioAnalysis_FloatGraph::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(WB_AudioAnalysis_FloatGraph_C_ExecuteUbergraph_WB_AudioAnalysis_FloatGraph, K2Node_Select_Default) == 0x0000A4, "Member 'WB_AudioAnalysis_FloatGraph_C_ExecuteUbergraph_WB_AudioAnalysis_FloatGraph::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(WB_AudioAnalysis_FloatGraph_C_ExecuteUbergraph_WB_AudioAnalysis_FloatGraph, K2Node_Event_IsDesignTime) == 0x0000A8, "Member 'WB_AudioAnalysis_FloatGraph_C_ExecuteUbergraph_WB_AudioAnalysis_FloatGraph::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(WB_AudioAnalysis_FloatGraph_C_ExecuteUbergraph_WB_AudioAnalysis_FloatGraph, CallFunc_Conv_FloatToText_ReturnValue_1) == 0x0000B0, "Member 'WB_AudioAnalysis_FloatGraph_C_ExecuteUbergraph_WB_AudioAnalysis_FloatGraph::CallFunc_Conv_FloatToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WB_AudioAnalysis_FloatGraph_C_ExecuteUbergraph_WB_AudioAnalysis_FloatGraph, CallFunc_NotEqual_IntInt_ReturnValue) == 0x0000C8, "Member 'WB_AudioAnalysis_FloatGraph_C_ExecuteUbergraph_WB_AudioAnalysis_FloatGraph::CallFunc_NotEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_AudioAnalysis_FloatGraph_C_ExecuteUbergraph_WB_AudioAnalysis_FloatGraph, CallFunc_Conv_IntToString_ReturnValue) == 0x0000D0, "Member 'WB_AudioAnalysis_FloatGraph_C_ExecuteUbergraph_WB_AudioAnalysis_FloatGraph::CallFunc_Conv_IntToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_AudioAnalysis_FloatGraph_C_ExecuteUbergraph_WB_AudioAnalysis_FloatGraph, CallFunc_SelectString_ReturnValue) == 0x0000E0, "Member 'WB_AudioAnalysis_FloatGraph_C_ExecuteUbergraph_WB_AudioAnalysis_FloatGraph::CallFunc_SelectString_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_AudioAnalysis_FloatGraph_C_ExecuteUbergraph_WB_AudioAnalysis_FloatGraph, CallFunc_Conv_NameToString_ReturnValue) == 0x0000F0, "Member 'WB_AudioAnalysis_FloatGraph_C_ExecuteUbergraph_WB_AudioAnalysis_FloatGraph::CallFunc_Conv_NameToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_AudioAnalysis_FloatGraph_C_ExecuteUbergraph_WB_AudioAnalysis_FloatGraph, CallFunc_Concat_StrStr_ReturnValue) == 0x000100, "Member 'WB_AudioAnalysis_FloatGraph_C_ExecuteUbergraph_WB_AudioAnalysis_FloatGraph::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_AudioAnalysis_FloatGraph_C_ExecuteUbergraph_WB_AudioAnalysis_FloatGraph, CallFunc_Conv_StringToText_ReturnValue) == 0x000110, "Member 'WB_AudioAnalysis_FloatGraph_C_ExecuteUbergraph_WB_AudioAnalysis_FloatGraph::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");

// Function WB_AudioAnalysis_FloatGraph.WB_AudioAnalysis_FloatGraph_C.Initialize MPC
// 0x0018 (0x0018 - 0x0000)
struct WB_AudioAnalysis_FloatGraph_C_Initialize_MPC final
{
public:
	class FName                                   Parameter_0;                                       // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialParameterCollection*           Collection_0;                                      // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         VectorIndex_0;                                     // 0x0010(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WB_AudioAnalysis_FloatGraph_C_Initialize_MPC) == 0x000008, "Wrong alignment on WB_AudioAnalysis_FloatGraph_C_Initialize_MPC");
static_assert(sizeof(WB_AudioAnalysis_FloatGraph_C_Initialize_MPC) == 0x000018, "Wrong size on WB_AudioAnalysis_FloatGraph_C_Initialize_MPC");
static_assert(offsetof(WB_AudioAnalysis_FloatGraph_C_Initialize_MPC, Parameter_0) == 0x000000, "Member 'WB_AudioAnalysis_FloatGraph_C_Initialize_MPC::Parameter_0' has a wrong offset!");
static_assert(offsetof(WB_AudioAnalysis_FloatGraph_C_Initialize_MPC, Collection_0) == 0x000008, "Member 'WB_AudioAnalysis_FloatGraph_C_Initialize_MPC::Collection_0' has a wrong offset!");
static_assert(offsetof(WB_AudioAnalysis_FloatGraph_C_Initialize_MPC, VectorIndex_0) == 0x000010, "Member 'WB_AudioAnalysis_FloatGraph_C_Initialize_MPC::VectorIndex_0' has a wrong offset!");

// Function WB_AudioAnalysis_FloatGraph.WB_AudioAnalysis_FloatGraph_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct WB_AudioAnalysis_FloatGraph_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WB_AudioAnalysis_FloatGraph_C_PreConstruct) == 0x000001, "Wrong alignment on WB_AudioAnalysis_FloatGraph_C_PreConstruct");
static_assert(sizeof(WB_AudioAnalysis_FloatGraph_C_PreConstruct) == 0x000001, "Wrong size on WB_AudioAnalysis_FloatGraph_C_PreConstruct");
static_assert(offsetof(WB_AudioAnalysis_FloatGraph_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'WB_AudioAnalysis_FloatGraph_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function WB_AudioAnalysis_FloatGraph.WB_AudioAnalysis_FloatGraph_C.Set Value
// 0x00B0 (0x00B0 - 0x0000)
struct WB_AudioAnalysis_FloatGraph_C_Set_Value final
{
public:
	float                                         Value_0;                                           // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Subtract_FloatFloat_ReturnValue;          // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector2D_X;                          // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector2D_Y;                          // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector2D_X_1;                        // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector2D_Y_1;                        // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue;          // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_MakeVector2D_ReturnValue;                 // 0x0028(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Conv_IntToFloat_ReturnValue;              // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Divide_FloatFloat_ReturnValue;            // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Conv_IntToFloat_ReturnValue_1;            // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_IntFloat_ReturnValue;            // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Divide_FloatFloat_ReturnValue_1;          // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4C[0x4];                                       // 0x004C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector2D                              CallFunc_Array_Get_Item;                           // 0x0050(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector2D_X_2;                        // 0x0064(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector2D_Y_2;                        // 0x0068(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6C[0x4];                                       // 0x006C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector2D                              CallFunc_MakeVector2D_ReturnValue_1;               // 0x0070(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0080(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Conv_IntToFloat_ReturnValue_2;            // 0x0084(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0088(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_89[0x3];                                       // 0x0089(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue_1;        // 0x008C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_MakeVector2D_ReturnValue_2;               // 0x0090(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x00A0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue_1;                  // 0x00A4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x00A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WB_AudioAnalysis_FloatGraph_C_Set_Value) == 0x000008, "Wrong alignment on WB_AudioAnalysis_FloatGraph_C_Set_Value");
static_assert(sizeof(WB_AudioAnalysis_FloatGraph_C_Set_Value) == 0x0000B0, "Wrong size on WB_AudioAnalysis_FloatGraph_C_Set_Value");
static_assert(offsetof(WB_AudioAnalysis_FloatGraph_C_Set_Value, Value_0) == 0x000000, "Member 'WB_AudioAnalysis_FloatGraph_C_Set_Value::Value_0' has a wrong offset!");
static_assert(offsetof(WB_AudioAnalysis_FloatGraph_C_Set_Value, CallFunc_Subtract_FloatFloat_ReturnValue) == 0x000004, "Member 'WB_AudioAnalysis_FloatGraph_C_Set_Value::CallFunc_Subtract_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_AudioAnalysis_FloatGraph_C_Set_Value, Temp_int_Array_Index_Variable) == 0x000008, "Member 'WB_AudioAnalysis_FloatGraph_C_Set_Value::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(WB_AudioAnalysis_FloatGraph_C_Set_Value, Temp_int_Loop_Counter_Variable) == 0x00000C, "Member 'WB_AudioAnalysis_FloatGraph_C_Set_Value::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(WB_AudioAnalysis_FloatGraph_C_Set_Value, CallFunc_Add_IntInt_ReturnValue) == 0x000010, "Member 'WB_AudioAnalysis_FloatGraph_C_Set_Value::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_AudioAnalysis_FloatGraph_C_Set_Value, CallFunc_BreakVector2D_X) == 0x000014, "Member 'WB_AudioAnalysis_FloatGraph_C_Set_Value::CallFunc_BreakVector2D_X' has a wrong offset!");
static_assert(offsetof(WB_AudioAnalysis_FloatGraph_C_Set_Value, CallFunc_BreakVector2D_Y) == 0x000018, "Member 'WB_AudioAnalysis_FloatGraph_C_Set_Value::CallFunc_BreakVector2D_Y' has a wrong offset!");
static_assert(offsetof(WB_AudioAnalysis_FloatGraph_C_Set_Value, CallFunc_BreakVector2D_X_1) == 0x00001C, "Member 'WB_AudioAnalysis_FloatGraph_C_Set_Value::CallFunc_BreakVector2D_X_1' has a wrong offset!");
static_assert(offsetof(WB_AudioAnalysis_FloatGraph_C_Set_Value, CallFunc_BreakVector2D_Y_1) == 0x000020, "Member 'WB_AudioAnalysis_FloatGraph_C_Set_Value::CallFunc_BreakVector2D_Y_1' has a wrong offset!");
static_assert(offsetof(WB_AudioAnalysis_FloatGraph_C_Set_Value, CallFunc_Multiply_FloatFloat_ReturnValue) == 0x000024, "Member 'WB_AudioAnalysis_FloatGraph_C_Set_Value::CallFunc_Multiply_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_AudioAnalysis_FloatGraph_C_Set_Value, CallFunc_MakeVector2D_ReturnValue) == 0x000028, "Member 'WB_AudioAnalysis_FloatGraph_C_Set_Value::CallFunc_MakeVector2D_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_AudioAnalysis_FloatGraph_C_Set_Value, CallFunc_Conv_IntToFloat_ReturnValue) == 0x000038, "Member 'WB_AudioAnalysis_FloatGraph_C_Set_Value::CallFunc_Conv_IntToFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_AudioAnalysis_FloatGraph_C_Set_Value, CallFunc_Divide_FloatFloat_ReturnValue) == 0x00003C, "Member 'WB_AudioAnalysis_FloatGraph_C_Set_Value::CallFunc_Divide_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_AudioAnalysis_FloatGraph_C_Set_Value, CallFunc_Conv_IntToFloat_ReturnValue_1) == 0x000040, "Member 'WB_AudioAnalysis_FloatGraph_C_Set_Value::CallFunc_Conv_IntToFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WB_AudioAnalysis_FloatGraph_C_Set_Value, CallFunc_Multiply_IntFloat_ReturnValue) == 0x000044, "Member 'WB_AudioAnalysis_FloatGraph_C_Set_Value::CallFunc_Multiply_IntFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_AudioAnalysis_FloatGraph_C_Set_Value, CallFunc_Divide_FloatFloat_ReturnValue_1) == 0x000048, "Member 'WB_AudioAnalysis_FloatGraph_C_Set_Value::CallFunc_Divide_FloatFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WB_AudioAnalysis_FloatGraph_C_Set_Value, CallFunc_Array_Get_Item) == 0x000050, "Member 'WB_AudioAnalysis_FloatGraph_C_Set_Value::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(WB_AudioAnalysis_FloatGraph_C_Set_Value, CallFunc_Array_Add_ReturnValue) == 0x000060, "Member 'WB_AudioAnalysis_FloatGraph_C_Set_Value::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_AudioAnalysis_FloatGraph_C_Set_Value, CallFunc_BreakVector2D_X_2) == 0x000064, "Member 'WB_AudioAnalysis_FloatGraph_C_Set_Value::CallFunc_BreakVector2D_X_2' has a wrong offset!");
static_assert(offsetof(WB_AudioAnalysis_FloatGraph_C_Set_Value, CallFunc_BreakVector2D_Y_2) == 0x000068, "Member 'WB_AudioAnalysis_FloatGraph_C_Set_Value::CallFunc_BreakVector2D_Y_2' has a wrong offset!");
static_assert(offsetof(WB_AudioAnalysis_FloatGraph_C_Set_Value, CallFunc_MakeVector2D_ReturnValue_1) == 0x000070, "Member 'WB_AudioAnalysis_FloatGraph_C_Set_Value::CallFunc_MakeVector2D_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WB_AudioAnalysis_FloatGraph_C_Set_Value, CallFunc_Array_Length_ReturnValue) == 0x000080, "Member 'WB_AudioAnalysis_FloatGraph_C_Set_Value::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_AudioAnalysis_FloatGraph_C_Set_Value, CallFunc_Conv_IntToFloat_ReturnValue_2) == 0x000084, "Member 'WB_AudioAnalysis_FloatGraph_C_Set_Value::CallFunc_Conv_IntToFloat_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WB_AudioAnalysis_FloatGraph_C_Set_Value, CallFunc_Greater_IntInt_ReturnValue) == 0x000088, "Member 'WB_AudioAnalysis_FloatGraph_C_Set_Value::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_AudioAnalysis_FloatGraph_C_Set_Value, CallFunc_Multiply_FloatFloat_ReturnValue_1) == 0x00008C, "Member 'WB_AudioAnalysis_FloatGraph_C_Set_Value::CallFunc_Multiply_FloatFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WB_AudioAnalysis_FloatGraph_C_Set_Value, CallFunc_MakeVector2D_ReturnValue_2) == 0x000090, "Member 'WB_AudioAnalysis_FloatGraph_C_Set_Value::CallFunc_MakeVector2D_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WB_AudioAnalysis_FloatGraph_C_Set_Value, CallFunc_Array_Length_ReturnValue_1) == 0x0000A0, "Member 'WB_AudioAnalysis_FloatGraph_C_Set_Value::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WB_AudioAnalysis_FloatGraph_C_Set_Value, CallFunc_Array_Add_ReturnValue_1) == 0x0000A4, "Member 'WB_AudioAnalysis_FloatGraph_C_Set_Value::CallFunc_Array_Add_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WB_AudioAnalysis_FloatGraph_C_Set_Value, CallFunc_Less_IntInt_ReturnValue) == 0x0000A8, "Member 'WB_AudioAnalysis_FloatGraph_C_Set_Value::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");

// Function WB_AudioAnalysis_FloatGraph.WB_AudioAnalysis_FloatGraph_C.Tick
// 0x0048 (0x0048 - 0x0000)
struct WB_AudioAnalysis_FloatGraph_C_Tick final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0040)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                         InDeltaTime;                                       // 0x0040(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WB_AudioAnalysis_FloatGraph_C_Tick) == 0x000008, "Wrong alignment on WB_AudioAnalysis_FloatGraph_C_Tick");
static_assert(sizeof(WB_AudioAnalysis_FloatGraph_C_Tick) == 0x000048, "Wrong size on WB_AudioAnalysis_FloatGraph_C_Tick");
static_assert(offsetof(WB_AudioAnalysis_FloatGraph_C_Tick, MyGeometry) == 0x000000, "Member 'WB_AudioAnalysis_FloatGraph_C_Tick::MyGeometry' has a wrong offset!");
static_assert(offsetof(WB_AudioAnalysis_FloatGraph_C_Tick, InDeltaTime) == 0x000040, "Member 'WB_AudioAnalysis_FloatGraph_C_Tick::InDeltaTime' has a wrong offset!");

// Function WB_AudioAnalysis_FloatGraph.WB_AudioAnalysis_FloatGraph_C.OnPaint
// 0x0030 (0x0030 - 0x0000)
struct WB_AudioAnalysis_FloatGraph_C_OnPaint final
{
public:
	struct FPaintContext                          Context;                                           // 0x0000(0x0030)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
};
static_assert(alignof(WB_AudioAnalysis_FloatGraph_C_OnPaint) == 0x000008, "Wrong alignment on WB_AudioAnalysis_FloatGraph_C_OnPaint");
static_assert(sizeof(WB_AudioAnalysis_FloatGraph_C_OnPaint) == 0x000030, "Wrong size on WB_AudioAnalysis_FloatGraph_C_OnPaint");
static_assert(offsetof(WB_AudioAnalysis_FloatGraph_C_OnPaint, Context) == 0x000000, "Member 'WB_AudioAnalysis_FloatGraph_C_OnPaint::Context' has a wrong offset!");

}

