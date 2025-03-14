﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ProgressiveStageWidget

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CrewUI_classes.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass ProgressiveStageWidget.ProgressiveStageWidget_C
// 0x0060 (0x0368 - 0x0308)
class UProgressiveStageWidget_C final : public UFortProgressiveStageWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0308(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Outro;                                             // 0x0310(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Intro;                                             // 0x0318(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UOverlay*                               CenterSeparator;                                   // 0x0320(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 DownArrow;                                         // 0x0328(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image;                                             // 0x0330(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               ItemLeftContainer;                                 // 0x0338(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               ItemRightContainer;                                // 0x0340(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UProgressiveItem_Tooltip_C*             ProgressiveItem_Tooltip;                           // 0x0348(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UProgressiveItemWidget_C*               ProgressiveItemWidget_Left;                        // 0x0350(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UProgressiveItemWidget_C*               ProgressiveItemWidget_Right;                       // 0x0358(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          Show_Top_Arrow;                                    // 0x0360(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

public:
	class UFortProgressiveItemWidget* AddStageItemWidget();
	void ClearStageItemWidgets();
	void Construct();
	void ExecuteUbergraph_ProgressiveStageWidget(int32 EntryPoint);
	void OnInitialized();
	void OnPeekStateChanged(bool bIsInPeekState);
	void OnSetTooltipText(const class FText& InToolTipText);
	void OnSetTooltipVisible(const bool bVisible);
	void PreConstruct(bool IsDesignTime);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ProgressiveStageWidget_C">();
	}
	static class UProgressiveStageWidget_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UProgressiveStageWidget_C>();
	}
};
static_assert(alignof(UProgressiveStageWidget_C) == 0x000008, "Wrong alignment on UProgressiveStageWidget_C");
static_assert(sizeof(UProgressiveStageWidget_C) == 0x000368, "Wrong size on UProgressiveStageWidget_C");
static_assert(offsetof(UProgressiveStageWidget_C, UberGraphFrame) == 0x000308, "Member 'UProgressiveStageWidget_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UProgressiveStageWidget_C, Outro) == 0x000310, "Member 'UProgressiveStageWidget_C::Outro' has a wrong offset!");
static_assert(offsetof(UProgressiveStageWidget_C, Intro) == 0x000318, "Member 'UProgressiveStageWidget_C::Intro' has a wrong offset!");
static_assert(offsetof(UProgressiveStageWidget_C, CenterSeparator) == 0x000320, "Member 'UProgressiveStageWidget_C::CenterSeparator' has a wrong offset!");
static_assert(offsetof(UProgressiveStageWidget_C, DownArrow) == 0x000328, "Member 'UProgressiveStageWidget_C::DownArrow' has a wrong offset!");
static_assert(offsetof(UProgressiveStageWidget_C, Image) == 0x000330, "Member 'UProgressiveStageWidget_C::Image' has a wrong offset!");
static_assert(offsetof(UProgressiveStageWidget_C, ItemLeftContainer) == 0x000338, "Member 'UProgressiveStageWidget_C::ItemLeftContainer' has a wrong offset!");
static_assert(offsetof(UProgressiveStageWidget_C, ItemRightContainer) == 0x000340, "Member 'UProgressiveStageWidget_C::ItemRightContainer' has a wrong offset!");
static_assert(offsetof(UProgressiveStageWidget_C, ProgressiveItem_Tooltip) == 0x000348, "Member 'UProgressiveStageWidget_C::ProgressiveItem_Tooltip' has a wrong offset!");
static_assert(offsetof(UProgressiveStageWidget_C, ProgressiveItemWidget_Left) == 0x000350, "Member 'UProgressiveStageWidget_C::ProgressiveItemWidget_Left' has a wrong offset!");
static_assert(offsetof(UProgressiveStageWidget_C, ProgressiveItemWidget_Right) == 0x000358, "Member 'UProgressiveStageWidget_C::ProgressiveItemWidget_Right' has a wrong offset!");
static_assert(offsetof(UProgressiveStageWidget_C, Show_Top_Arrow) == 0x000360, "Member 'UProgressiveStageWidget_C::Show_Top_Arrow' has a wrong offset!");

}

