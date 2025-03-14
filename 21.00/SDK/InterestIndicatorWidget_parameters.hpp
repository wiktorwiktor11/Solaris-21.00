﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: InterestIndicatorWidget

#include "Basic.hpp"

#include "FortniteGame_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK::Params
{

// Function InterestIndicatorWidget.InterestIndicatorWidget_C.ExecuteUbergraph_InterestIndicatorWidget
// 0x0008 (0x0008 - 0x0000)
struct InterestIndicatorWidget_C_ExecuteUbergraph_InterestIndicatorWidget final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_bEnabled;                       // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(InterestIndicatorWidget_C_ExecuteUbergraph_InterestIndicatorWidget) == 0x000004, "Wrong alignment on InterestIndicatorWidget_C_ExecuteUbergraph_InterestIndicatorWidget");
static_assert(sizeof(InterestIndicatorWidget_C_ExecuteUbergraph_InterestIndicatorWidget) == 0x000008, "Wrong size on InterestIndicatorWidget_C_ExecuteUbergraph_InterestIndicatorWidget");
static_assert(offsetof(InterestIndicatorWidget_C_ExecuteUbergraph_InterestIndicatorWidget, EntryPoint) == 0x000000, "Member 'InterestIndicatorWidget_C_ExecuteUbergraph_InterestIndicatorWidget::EntryPoint' has a wrong offset!");
static_assert(offsetof(InterestIndicatorWidget_C_ExecuteUbergraph_InterestIndicatorWidget, K2Node_CustomEvent_bEnabled) == 0x000004, "Member 'InterestIndicatorWidget_C_ExecuteUbergraph_InterestIndicatorWidget::K2Node_CustomEvent_bEnabled' has a wrong offset!");

// Function InterestIndicatorWidget.InterestIndicatorWidget_C.InitPointOfInterest
// 0x0090 (0x0090 - 0x0000)
struct InterestIndicatorWidget_C_InitPointOfInterest final
{
public:
	class AActor*                                 PointOfInterest;                                   // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   DisplayText;                                       // 0x0008(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
	class UTexture2D*                             DisplayImage;                                      // 0x0020(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           ImageColor;                                        // 0x0028(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_ObjectObject_ReturnValue;        // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_41[0x7];                                       // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;              // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakColor_R;                             // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakColor_G;                             // 0x0054(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakColor_B;                             // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakColor_A;                             // 0x005C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakColor_R_1;                           // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakColor_G_1;                           // 0x0064(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakColor_B_1;                           // 0x0068(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakColor_A_1;                           // 0x006C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           K2Node_MakeStruct_LinearColor;                     // 0x0070(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           K2Node_MakeStruct_LinearColor_1;                   // 0x0080(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(InterestIndicatorWidget_C_InitPointOfInterest) == 0x000008, "Wrong alignment on InterestIndicatorWidget_C_InitPointOfInterest");
static_assert(sizeof(InterestIndicatorWidget_C_InitPointOfInterest) == 0x000090, "Wrong size on InterestIndicatorWidget_C_InitPointOfInterest");
static_assert(offsetof(InterestIndicatorWidget_C_InitPointOfInterest, PointOfInterest) == 0x000000, "Member 'InterestIndicatorWidget_C_InitPointOfInterest::PointOfInterest' has a wrong offset!");
static_assert(offsetof(InterestIndicatorWidget_C_InitPointOfInterest, DisplayText) == 0x000008, "Member 'InterestIndicatorWidget_C_InitPointOfInterest::DisplayText' has a wrong offset!");
static_assert(offsetof(InterestIndicatorWidget_C_InitPointOfInterest, DisplayImage) == 0x000020, "Member 'InterestIndicatorWidget_C_InitPointOfInterest::DisplayImage' has a wrong offset!");
static_assert(offsetof(InterestIndicatorWidget_C_InitPointOfInterest, ImageColor) == 0x000028, "Member 'InterestIndicatorWidget_C_InitPointOfInterest::ImageColor' has a wrong offset!");
static_assert(offsetof(InterestIndicatorWidget_C_InitPointOfInterest, CallFunc_PlayAnimation_ReturnValue) == 0x000038, "Member 'InterestIndicatorWidget_C_InitPointOfInterest::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(InterestIndicatorWidget_C_InitPointOfInterest, CallFunc_NotEqual_ObjectObject_ReturnValue) == 0x000040, "Member 'InterestIndicatorWidget_C_InitPointOfInterest::CallFunc_NotEqual_ObjectObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(InterestIndicatorWidget_C_InitPointOfInterest, CallFunc_PlayAnimation_ReturnValue_1) == 0x000048, "Member 'InterestIndicatorWidget_C_InitPointOfInterest::CallFunc_PlayAnimation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(InterestIndicatorWidget_C_InitPointOfInterest, CallFunc_BreakColor_R) == 0x000050, "Member 'InterestIndicatorWidget_C_InitPointOfInterest::CallFunc_BreakColor_R' has a wrong offset!");
static_assert(offsetof(InterestIndicatorWidget_C_InitPointOfInterest, CallFunc_BreakColor_G) == 0x000054, "Member 'InterestIndicatorWidget_C_InitPointOfInterest::CallFunc_BreakColor_G' has a wrong offset!");
static_assert(offsetof(InterestIndicatorWidget_C_InitPointOfInterest, CallFunc_BreakColor_B) == 0x000058, "Member 'InterestIndicatorWidget_C_InitPointOfInterest::CallFunc_BreakColor_B' has a wrong offset!");
static_assert(offsetof(InterestIndicatorWidget_C_InitPointOfInterest, CallFunc_BreakColor_A) == 0x00005C, "Member 'InterestIndicatorWidget_C_InitPointOfInterest::CallFunc_BreakColor_A' has a wrong offset!");
static_assert(offsetof(InterestIndicatorWidget_C_InitPointOfInterest, CallFunc_BreakColor_R_1) == 0x000060, "Member 'InterestIndicatorWidget_C_InitPointOfInterest::CallFunc_BreakColor_R_1' has a wrong offset!");
static_assert(offsetof(InterestIndicatorWidget_C_InitPointOfInterest, CallFunc_BreakColor_G_1) == 0x000064, "Member 'InterestIndicatorWidget_C_InitPointOfInterest::CallFunc_BreakColor_G_1' has a wrong offset!");
static_assert(offsetof(InterestIndicatorWidget_C_InitPointOfInterest, CallFunc_BreakColor_B_1) == 0x000068, "Member 'InterestIndicatorWidget_C_InitPointOfInterest::CallFunc_BreakColor_B_1' has a wrong offset!");
static_assert(offsetof(InterestIndicatorWidget_C_InitPointOfInterest, CallFunc_BreakColor_A_1) == 0x00006C, "Member 'InterestIndicatorWidget_C_InitPointOfInterest::CallFunc_BreakColor_A_1' has a wrong offset!");
static_assert(offsetof(InterestIndicatorWidget_C_InitPointOfInterest, K2Node_MakeStruct_LinearColor) == 0x000070, "Member 'InterestIndicatorWidget_C_InitPointOfInterest::K2Node_MakeStruct_LinearColor' has a wrong offset!");
static_assert(offsetof(InterestIndicatorWidget_C_InitPointOfInterest, K2Node_MakeStruct_LinearColor_1) == 0x000080, "Member 'InterestIndicatorWidget_C_InitPointOfInterest::K2Node_MakeStruct_LinearColor_1' has a wrong offset!");

// Function InterestIndicatorWidget.InterestIndicatorWidget_C.RemovePointOfInterest
// 0x0020 (0x0020 - 0x0000)
struct InterestIndicatorWidget_C_RemovePointOfInterest final
{
public:
	class AActor*                                 PointOfInterest;                                   // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Removed;                                           // 0x0008(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9[0x7];                                        // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetIndicatedActor_ReturnValue;            // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(InterestIndicatorWidget_C_RemovePointOfInterest) == 0x000008, "Wrong alignment on InterestIndicatorWidget_C_RemovePointOfInterest");
static_assert(sizeof(InterestIndicatorWidget_C_RemovePointOfInterest) == 0x000020, "Wrong size on InterestIndicatorWidget_C_RemovePointOfInterest");
static_assert(offsetof(InterestIndicatorWidget_C_RemovePointOfInterest, PointOfInterest) == 0x000000, "Member 'InterestIndicatorWidget_C_RemovePointOfInterest::PointOfInterest' has a wrong offset!");
static_assert(offsetof(InterestIndicatorWidget_C_RemovePointOfInterest, Removed) == 0x000008, "Member 'InterestIndicatorWidget_C_RemovePointOfInterest::Removed' has a wrong offset!");
static_assert(offsetof(InterestIndicatorWidget_C_RemovePointOfInterest, CallFunc_GetIndicatedActor_ReturnValue) == 0x000010, "Member 'InterestIndicatorWidget_C_RemovePointOfInterest::CallFunc_GetIndicatedActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(InterestIndicatorWidget_C_RemovePointOfInterest, CallFunc_EqualEqual_ObjectObject_ReturnValue) == 0x000018, "Member 'InterestIndicatorWidget_C_RemovePointOfInterest::CallFunc_EqualEqual_ObjectObject_ReturnValue' has a wrong offset!");

// Function InterestIndicatorWidget.InterestIndicatorWidget_C.SetDisplayImage
// 0x0010 (0x0010 - 0x0000)
struct InterestIndicatorWidget_C_SetDisplayImage final
{
public:
	class UTexture2D*                             Icon;                                              // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x000A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x000B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(InterestIndicatorWidget_C_SetDisplayImage) == 0x000008, "Wrong alignment on InterestIndicatorWidget_C_SetDisplayImage");
static_assert(sizeof(InterestIndicatorWidget_C_SetDisplayImage) == 0x000010, "Wrong size on InterestIndicatorWidget_C_SetDisplayImage");
static_assert(offsetof(InterestIndicatorWidget_C_SetDisplayImage, Icon) == 0x000000, "Member 'InterestIndicatorWidget_C_SetDisplayImage::Icon' has a wrong offset!");
static_assert(offsetof(InterestIndicatorWidget_C_SetDisplayImage, Temp_bool_Variable) == 0x000008, "Member 'InterestIndicatorWidget_C_SetDisplayImage::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(InterestIndicatorWidget_C_SetDisplayImage, CallFunc_EqualEqual_ObjectObject_ReturnValue) == 0x000009, "Member 'InterestIndicatorWidget_C_SetDisplayImage::CallFunc_EqualEqual_ObjectObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(InterestIndicatorWidget_C_SetDisplayImage, Temp_byte_Variable) == 0x00000A, "Member 'InterestIndicatorWidget_C_SetDisplayImage::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(InterestIndicatorWidget_C_SetDisplayImage, Temp_byte_Variable_1) == 0x00000B, "Member 'InterestIndicatorWidget_C_SetDisplayImage::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(InterestIndicatorWidget_C_SetDisplayImage, K2Node_Select_Default) == 0x00000C, "Member 'InterestIndicatorWidget_C_SetDisplayImage::K2Node_Select_Default' has a wrong offset!");

// Function InterestIndicatorWidget.InterestIndicatorWidget_C.SetDisplayText
// 0x0020 (0x0020 - 0x0000)
struct InterestIndicatorWidget_C_SetDisplayText final
{
public:
	class FText                                   Description;                                       // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                          Temp_bool_Variable;                                // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_TextIsEmpty_ReturnValue;                  // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x001A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x001B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(InterestIndicatorWidget_C_SetDisplayText) == 0x000008, "Wrong alignment on InterestIndicatorWidget_C_SetDisplayText");
static_assert(sizeof(InterestIndicatorWidget_C_SetDisplayText) == 0x000020, "Wrong size on InterestIndicatorWidget_C_SetDisplayText");
static_assert(offsetof(InterestIndicatorWidget_C_SetDisplayText, Description) == 0x000000, "Member 'InterestIndicatorWidget_C_SetDisplayText::Description' has a wrong offset!");
static_assert(offsetof(InterestIndicatorWidget_C_SetDisplayText, Temp_bool_Variable) == 0x000018, "Member 'InterestIndicatorWidget_C_SetDisplayText::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(InterestIndicatorWidget_C_SetDisplayText, CallFunc_TextIsEmpty_ReturnValue) == 0x000019, "Member 'InterestIndicatorWidget_C_SetDisplayText::CallFunc_TextIsEmpty_ReturnValue' has a wrong offset!");
static_assert(offsetof(InterestIndicatorWidget_C_SetDisplayText, Temp_byte_Variable) == 0x00001A, "Member 'InterestIndicatorWidget_C_SetDisplayText::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(InterestIndicatorWidget_C_SetDisplayText, Temp_byte_Variable_1) == 0x00001B, "Member 'InterestIndicatorWidget_C_SetDisplayText::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(InterestIndicatorWidget_C_SetDisplayText, K2Node_Select_Default) == 0x00001C, "Member 'InterestIndicatorWidget_C_SetDisplayText::K2Node_Select_Default' has a wrong offset!");

// Function InterestIndicatorWidget.InterestIndicatorWidget_C.SetScreenSpacePosition
// 0x0001 (0x0001 - 0x0000)
struct InterestIndicatorWidget_C_SetScreenSpacePosition final
{
public:
	bool                                          bEnabled;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(InterestIndicatorWidget_C_SetScreenSpacePosition) == 0x000001, "Wrong alignment on InterestIndicatorWidget_C_SetScreenSpacePosition");
static_assert(sizeof(InterestIndicatorWidget_C_SetScreenSpacePosition) == 0x000001, "Wrong size on InterestIndicatorWidget_C_SetScreenSpacePosition");
static_assert(offsetof(InterestIndicatorWidget_C_SetScreenSpacePosition, bEnabled) == 0x000000, "Member 'InterestIndicatorWidget_C_SetScreenSpacePosition::bEnabled' has a wrong offset!");

// Function InterestIndicatorWidget.InterestIndicatorWidget_C.GetCanvasPanelContainer
// 0x0018 (0x0018 - 0x0000)
struct InterestIndicatorWidget_C_GetCanvasPanelContainer final
{
public:
	EFortActorIndicatorContainerWidget            ContainerEnum;                                     // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UCanvasPanel*                           ReturnValue;                                       // 0x0008(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(InterestIndicatorWidget_C_GetCanvasPanelContainer) == 0x000008, "Wrong alignment on InterestIndicatorWidget_C_GetCanvasPanelContainer");
static_assert(sizeof(InterestIndicatorWidget_C_GetCanvasPanelContainer) == 0x000018, "Wrong size on InterestIndicatorWidget_C_GetCanvasPanelContainer");
static_assert(offsetof(InterestIndicatorWidget_C_GetCanvasPanelContainer, ContainerEnum) == 0x000000, "Member 'InterestIndicatorWidget_C_GetCanvasPanelContainer::ContainerEnum' has a wrong offset!");
static_assert(offsetof(InterestIndicatorWidget_C_GetCanvasPanelContainer, ReturnValue) == 0x000008, "Member 'InterestIndicatorWidget_C_GetCanvasPanelContainer::ReturnValue' has a wrong offset!");
static_assert(offsetof(InterestIndicatorWidget_C_GetCanvasPanelContainer, K2Node_SwitchEnum_CmpSuccess) == 0x000010, "Member 'InterestIndicatorWidget_C_GetCanvasPanelContainer::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");

}

