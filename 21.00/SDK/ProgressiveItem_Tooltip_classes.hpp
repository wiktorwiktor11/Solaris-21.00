﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ProgressiveItem_Tooltip

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SlateCore_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass ProgressiveItem_Tooltip.ProgressiveItem_Tooltip_C
// 0x0178 (0x0430 - 0x02B8)
class UProgressiveItem_Tooltip_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02B8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       FloatLoop;                                         // 0x02C0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       burstLoop;                                         // 0x02C8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Show;                                              // 0x02D0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UHorizontalBox*                         HorizontalBoxcontent;                              // 0x02D8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Icon;                                              // 0x02E0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_Arrow;                                       // 0x02E8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonRichTextBlock*                   Text_Tooltip;                                      // 0x02F0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                   Tooltip_Text;                                      // 0x02F8(0x0018)(Edit, BlueprintVisible, ExposeOnSpawn)
	struct FSlateBrush                            In_Brush;                                          // 0x0310(0x00C0)(Edit, BlueprintVisible, ExposeOnSpawn)
	EHorizontalAlignment                          In_Horizontal_Alignment;                           // 0x03D0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	EVerticalAlignment                            In_Vertical_Alignment;                             // 0x03D1(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                         Pad_3D2[0x6];                                      // 0x03D2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FWidgetTransform                       In_Transform;                                      // 0x03D8(0x0038)(Edit, BlueprintVisible, NoDestructor, ExposeOnSpawn)
	bool                                          Show_Icon;                                         // 0x0410(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_411[0x3];                                      // 0x0411(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FMargin                                Content_Padding;                                   // 0x0414(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	bool                                          ShouldShowToolTip;                                 // 0x0424(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          In_Auto_Wrap_Text;                                 // 0x0425(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_ProgressiveItem_Tooltip(int32 EntryPoint);
	void PreConstruct(bool IsDesignTime);
	void Update_Text(const class FText& InText);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ProgressiveItem_Tooltip_C">();
	}
	static class UProgressiveItem_Tooltip_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UProgressiveItem_Tooltip_C>();
	}
};
static_assert(alignof(UProgressiveItem_Tooltip_C) == 0x000010, "Wrong alignment on UProgressiveItem_Tooltip_C");
static_assert(sizeof(UProgressiveItem_Tooltip_C) == 0x000430, "Wrong size on UProgressiveItem_Tooltip_C");
static_assert(offsetof(UProgressiveItem_Tooltip_C, UberGraphFrame) == 0x0002B8, "Member 'UProgressiveItem_Tooltip_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UProgressiveItem_Tooltip_C, FloatLoop) == 0x0002C0, "Member 'UProgressiveItem_Tooltip_C::FloatLoop' has a wrong offset!");
static_assert(offsetof(UProgressiveItem_Tooltip_C, burstLoop) == 0x0002C8, "Member 'UProgressiveItem_Tooltip_C::burstLoop' has a wrong offset!");
static_assert(offsetof(UProgressiveItem_Tooltip_C, Show) == 0x0002D0, "Member 'UProgressiveItem_Tooltip_C::Show' has a wrong offset!");
static_assert(offsetof(UProgressiveItem_Tooltip_C, HorizontalBoxcontent) == 0x0002D8, "Member 'UProgressiveItem_Tooltip_C::HorizontalBoxcontent' has a wrong offset!");
static_assert(offsetof(UProgressiveItem_Tooltip_C, Icon) == 0x0002E0, "Member 'UProgressiveItem_Tooltip_C::Icon' has a wrong offset!");
static_assert(offsetof(UProgressiveItem_Tooltip_C, Image_Arrow) == 0x0002E8, "Member 'UProgressiveItem_Tooltip_C::Image_Arrow' has a wrong offset!");
static_assert(offsetof(UProgressiveItem_Tooltip_C, Text_Tooltip) == 0x0002F0, "Member 'UProgressiveItem_Tooltip_C::Text_Tooltip' has a wrong offset!");
static_assert(offsetof(UProgressiveItem_Tooltip_C, Tooltip_Text) == 0x0002F8, "Member 'UProgressiveItem_Tooltip_C::Tooltip_Text' has a wrong offset!");
static_assert(offsetof(UProgressiveItem_Tooltip_C, In_Brush) == 0x000310, "Member 'UProgressiveItem_Tooltip_C::In_Brush' has a wrong offset!");
static_assert(offsetof(UProgressiveItem_Tooltip_C, In_Horizontal_Alignment) == 0x0003D0, "Member 'UProgressiveItem_Tooltip_C::In_Horizontal_Alignment' has a wrong offset!");
static_assert(offsetof(UProgressiveItem_Tooltip_C, In_Vertical_Alignment) == 0x0003D1, "Member 'UProgressiveItem_Tooltip_C::In_Vertical_Alignment' has a wrong offset!");
static_assert(offsetof(UProgressiveItem_Tooltip_C, In_Transform) == 0x0003D8, "Member 'UProgressiveItem_Tooltip_C::In_Transform' has a wrong offset!");
static_assert(offsetof(UProgressiveItem_Tooltip_C, Show_Icon) == 0x000410, "Member 'UProgressiveItem_Tooltip_C::Show_Icon' has a wrong offset!");
static_assert(offsetof(UProgressiveItem_Tooltip_C, Content_Padding) == 0x000414, "Member 'UProgressiveItem_Tooltip_C::Content_Padding' has a wrong offset!");
static_assert(offsetof(UProgressiveItem_Tooltip_C, ShouldShowToolTip) == 0x000424, "Member 'UProgressiveItem_Tooltip_C::ShouldShowToolTip' has a wrong offset!");
static_assert(offsetof(UProgressiveItem_Tooltip_C, In_Auto_Wrap_Text) == 0x000425, "Member 'UProgressiveItem_Tooltip_C::In_Auto_Wrap_Text' has a wrong offset!");

}

