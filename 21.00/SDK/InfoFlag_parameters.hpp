﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: InfoFlag

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "UMG_structs.hpp"
#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function InfoFlag.InfoFlag_C.UpdateTrimColor
// 0x0010 (0x0010 - 0x0000)
struct InfoFlag_C_UpdateTrimColor final
{
public:
	struct FLinearColor                           Color;                                             // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(InfoFlag_C_UpdateTrimColor) == 0x000004, "Wrong alignment on InfoFlag_C_UpdateTrimColor");
static_assert(sizeof(InfoFlag_C_UpdateTrimColor) == 0x000010, "Wrong size on InfoFlag_C_UpdateTrimColor");
static_assert(offsetof(InfoFlag_C_UpdateTrimColor, Color) == 0x000000, "Member 'InfoFlag_C_UpdateTrimColor::Color' has a wrong offset!");

// Function InfoFlag.InfoFlag_C.UpdateText
// 0x0018 (0x0018 - 0x0000)
struct InfoFlag_C_UpdateText final
{
public:
	class FText                                   Text;                                              // 0x0000(0x0018)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(InfoFlag_C_UpdateText) == 0x000008, "Wrong alignment on InfoFlag_C_UpdateText");
static_assert(sizeof(InfoFlag_C_UpdateText) == 0x000018, "Wrong size on InfoFlag_C_UpdateText");
static_assert(offsetof(InfoFlag_C_UpdateText, Text) == 0x000000, "Member 'InfoFlag_C_UpdateText::Text' has a wrong offset!");

// Function InfoFlag.InfoFlag_C.UpdateGradientColor
// 0x0010 (0x0010 - 0x0000)
struct InfoFlag_C_UpdateGradientColor final
{
public:
	struct FLinearColor                           Color;                                             // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(InfoFlag_C_UpdateGradientColor) == 0x000004, "Wrong alignment on InfoFlag_C_UpdateGradientColor");
static_assert(sizeof(InfoFlag_C_UpdateGradientColor) == 0x000010, "Wrong size on InfoFlag_C_UpdateGradientColor");
static_assert(offsetof(InfoFlag_C_UpdateGradientColor, Color) == 0x000000, "Member 'InfoFlag_C_UpdateGradientColor::Color' has a wrong offset!");

// Function InfoFlag.InfoFlag_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct InfoFlag_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(InfoFlag_C_PreConstruct) == 0x000001, "Wrong alignment on InfoFlag_C_PreConstruct");
static_assert(sizeof(InfoFlag_C_PreConstruct) == 0x000001, "Wrong size on InfoFlag_C_PreConstruct");
static_assert(offsetof(InfoFlag_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'InfoFlag_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function InfoFlag.InfoFlag_C.ExecuteUbergraph_InfoFlag
// 0x0130 (0x0130 - 0x0000)
struct InfoFlag_C_ExecuteUbergraph_InfoFlag final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0007(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_MakeVector2D_ReturnValue;                 // 0x0008(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_18[0x8];                                       // 0x0018(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateBrush                            K2Node_MakeStruct_SlateBrush;                      // 0x0020(0x00C0)()
	class UOverlaySlot*                           CallFunc_SlotAsOverlaySlot_ReturnValue;            // 0x00E0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue;          // 0x00E8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FMargin                                K2Node_MakeStruct_Margin;                          // 0x00EC(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_FC[0x4];                                       // 0x00FC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector2D                              CallFunc_MakeVector2D_ReturnValue_1;               // 0x0100(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NearlyEqual_FloatFloat_ReturnValue;       // 0x0110(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_111[0x7];                                      // 0x0111(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UFortRuntimeOptions*                    CallFunc_GetRuntimeOptions_ReturnValue;            // 0x0118(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0120(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(InfoFlag_C_ExecuteUbergraph_InfoFlag) == 0x000010, "Wrong alignment on InfoFlag_C_ExecuteUbergraph_InfoFlag");
static_assert(sizeof(InfoFlag_C_ExecuteUbergraph_InfoFlag) == 0x000130, "Wrong size on InfoFlag_C_ExecuteUbergraph_InfoFlag");
static_assert(offsetof(InfoFlag_C_ExecuteUbergraph_InfoFlag, EntryPoint) == 0x000000, "Member 'InfoFlag_C_ExecuteUbergraph_InfoFlag::EntryPoint' has a wrong offset!");
static_assert(offsetof(InfoFlag_C_ExecuteUbergraph_InfoFlag, Temp_bool_Variable) == 0x000004, "Member 'InfoFlag_C_ExecuteUbergraph_InfoFlag::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(InfoFlag_C_ExecuteUbergraph_InfoFlag, Temp_byte_Variable) == 0x000005, "Member 'InfoFlag_C_ExecuteUbergraph_InfoFlag::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(InfoFlag_C_ExecuteUbergraph_InfoFlag, Temp_byte_Variable_1) == 0x000006, "Member 'InfoFlag_C_ExecuteUbergraph_InfoFlag::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(InfoFlag_C_ExecuteUbergraph_InfoFlag, K2Node_Event_IsDesignTime) == 0x000007, "Member 'InfoFlag_C_ExecuteUbergraph_InfoFlag::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(InfoFlag_C_ExecuteUbergraph_InfoFlag, CallFunc_MakeVector2D_ReturnValue) == 0x000008, "Member 'InfoFlag_C_ExecuteUbergraph_InfoFlag::CallFunc_MakeVector2D_ReturnValue' has a wrong offset!");
static_assert(offsetof(InfoFlag_C_ExecuteUbergraph_InfoFlag, K2Node_MakeStruct_SlateBrush) == 0x000020, "Member 'InfoFlag_C_ExecuteUbergraph_InfoFlag::K2Node_MakeStruct_SlateBrush' has a wrong offset!");
static_assert(offsetof(InfoFlag_C_ExecuteUbergraph_InfoFlag, CallFunc_SlotAsOverlaySlot_ReturnValue) == 0x0000E0, "Member 'InfoFlag_C_ExecuteUbergraph_InfoFlag::CallFunc_SlotAsOverlaySlot_ReturnValue' has a wrong offset!");
static_assert(offsetof(InfoFlag_C_ExecuteUbergraph_InfoFlag, CallFunc_Multiply_FloatFloat_ReturnValue) == 0x0000E8, "Member 'InfoFlag_C_ExecuteUbergraph_InfoFlag::CallFunc_Multiply_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(InfoFlag_C_ExecuteUbergraph_InfoFlag, K2Node_MakeStruct_Margin) == 0x0000EC, "Member 'InfoFlag_C_ExecuteUbergraph_InfoFlag::K2Node_MakeStruct_Margin' has a wrong offset!");
static_assert(offsetof(InfoFlag_C_ExecuteUbergraph_InfoFlag, CallFunc_MakeVector2D_ReturnValue_1) == 0x000100, "Member 'InfoFlag_C_ExecuteUbergraph_InfoFlag::CallFunc_MakeVector2D_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(InfoFlag_C_ExecuteUbergraph_InfoFlag, CallFunc_NearlyEqual_FloatFloat_ReturnValue) == 0x000110, "Member 'InfoFlag_C_ExecuteUbergraph_InfoFlag::CallFunc_NearlyEqual_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(InfoFlag_C_ExecuteUbergraph_InfoFlag, CallFunc_GetRuntimeOptions_ReturnValue) == 0x000118, "Member 'InfoFlag_C_ExecuteUbergraph_InfoFlag::CallFunc_GetRuntimeOptions_ReturnValue' has a wrong offset!");
static_assert(offsetof(InfoFlag_C_ExecuteUbergraph_InfoFlag, K2Node_Select_Default) == 0x000120, "Member 'InfoFlag_C_ExecuteUbergraph_InfoFlag::K2Node_Select_Default' has a wrong offset!");

}

