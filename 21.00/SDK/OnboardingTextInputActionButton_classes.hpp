﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: OnboardingTextInputActionButton

#include "Basic.hpp"

#include "Slate_structs.hpp"
#include "Engine_structs.hpp"
#include "SlateCore_structs.hpp"
#include "CommonUILegacy_classes.hpp"
#include "UMG_structs.hpp"
#include "CommonInput_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass OnboardingTextInputActionButton.OnboardingTextInputActionButton_C
// 0x0140 (0x1170 - 0x1030)
class UOnboardingTextInputActionButton_C final : public UCommonButtonLegacy
{
public:
	uint8                                         Pad_1028[0x8];                                     // 0x1028(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x1030(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UCommonTextBlock*                       CenterButtonTextWidget;                            // 0x1038(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                                ContentBorder;                                     // 0x1040(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 LeftSideImage;                                     // 0x1048(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNamedSlot*                             RightExtraContentSlot;                             // 0x1050(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                   ButtonText;                                        // 0x1058(0x0018)(Edit, BlueprintVisible, ExposeOnSpawn)
	struct FSlateBrush                            IconBrush;                                         // 0x1070(0x00C0)(Edit, BlueprintVisible, ExposeOnSpawn)
	class UClass*                                 ControllerInputStyle;                              // 0x1130(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class UClass*                                 MouseKeyboardStyle;                                // 0x1138(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EHorizontalAlignment                          ContentAlignment;                                  // 0x1140(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bMouseKeyboardStyleSet;                            // 0x1141(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1142[0x6];                                     // 0x1142(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   OverrideButtonText;                                // 0x1148(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	ETextJustify                                  ButtonTextJustification;                           // 0x1160(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                          bDisplayAllCaps;                                   // 0x1161(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                         Pad_1162[0x2];                                     // 0x1162(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         PressProgress;                                     // 0x1164(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bIgnoreInputActionWidgetText;                      // 0x1168(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void Construct();
	void Destruct();
	void ExecuteUbergraph_OnboardingTextInputActionButton(int32 EntryPoint);
	void Get_Dynamic_Material(class UMaterialInstanceDynamic** Ret_Material);
	void GetPressProgress(float* Progress);
	void InitializeButton();
	void OnActionComplete();
	void OnActionProgress(float HeldPercent);
	void OnCurrentTextStyleChanged();
	void OnTriggeredInputActionChanged(const struct FDataTableRowHandle& NewTriggeredAction);
	void PreConstruct(bool IsDesignTime);
	void Set_Icon(const struct FSlateBrush& IconBrush_0);
	void Set_Text(const class FText& ButtonText_0);
	void SetContentAlignment(EHorizontalAlignment ContentAlignment_0);
	void SetControllerStyle(class UClass* ControllerInputStyle_0);
	void SetInitialMouseKeyboardStyle();
	void SetMouseKeyboardStyle(class UClass* ControllerInputStyle_0);
	void SetTabLabelInfo(const struct FFortTabButtonLabelInfo& TabLabelInfo);
	void SetTextInternal(const class FText& InButtonText);
	void ShowIcon(bool bShouldShow);
	void UpdateContentAlignment();
	void UpdateStyle(bool UsingGamepad);
	void UpdateText();
	void UpdateTextAndStyle(ECommonInputType InputType);
	void UpdateTextStyle();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"OnboardingTextInputActionButton_C">();
	}
	static class UOnboardingTextInputActionButton_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UOnboardingTextInputActionButton_C>();
	}
};
static_assert(alignof(UOnboardingTextInputActionButton_C) == 0x000010, "Wrong alignment on UOnboardingTextInputActionButton_C");
static_assert(sizeof(UOnboardingTextInputActionButton_C) == 0x001170, "Wrong size on UOnboardingTextInputActionButton_C");
static_assert(offsetof(UOnboardingTextInputActionButton_C, UberGraphFrame) == 0x001030, "Member 'UOnboardingTextInputActionButton_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UOnboardingTextInputActionButton_C, CenterButtonTextWidget) == 0x001038, "Member 'UOnboardingTextInputActionButton_C::CenterButtonTextWidget' has a wrong offset!");
static_assert(offsetof(UOnboardingTextInputActionButton_C, ContentBorder) == 0x001040, "Member 'UOnboardingTextInputActionButton_C::ContentBorder' has a wrong offset!");
static_assert(offsetof(UOnboardingTextInputActionButton_C, LeftSideImage) == 0x001048, "Member 'UOnboardingTextInputActionButton_C::LeftSideImage' has a wrong offset!");
static_assert(offsetof(UOnboardingTextInputActionButton_C, RightExtraContentSlot) == 0x001050, "Member 'UOnboardingTextInputActionButton_C::RightExtraContentSlot' has a wrong offset!");
static_assert(offsetof(UOnboardingTextInputActionButton_C, ButtonText) == 0x001058, "Member 'UOnboardingTextInputActionButton_C::ButtonText' has a wrong offset!");
static_assert(offsetof(UOnboardingTextInputActionButton_C, IconBrush) == 0x001070, "Member 'UOnboardingTextInputActionButton_C::IconBrush' has a wrong offset!");
static_assert(offsetof(UOnboardingTextInputActionButton_C, ControllerInputStyle) == 0x001130, "Member 'UOnboardingTextInputActionButton_C::ControllerInputStyle' has a wrong offset!");
static_assert(offsetof(UOnboardingTextInputActionButton_C, MouseKeyboardStyle) == 0x001138, "Member 'UOnboardingTextInputActionButton_C::MouseKeyboardStyle' has a wrong offset!");
static_assert(offsetof(UOnboardingTextInputActionButton_C, ContentAlignment) == 0x001140, "Member 'UOnboardingTextInputActionButton_C::ContentAlignment' has a wrong offset!");
static_assert(offsetof(UOnboardingTextInputActionButton_C, bMouseKeyboardStyleSet) == 0x001141, "Member 'UOnboardingTextInputActionButton_C::bMouseKeyboardStyleSet' has a wrong offset!");
static_assert(offsetof(UOnboardingTextInputActionButton_C, OverrideButtonText) == 0x001148, "Member 'UOnboardingTextInputActionButton_C::OverrideButtonText' has a wrong offset!");
static_assert(offsetof(UOnboardingTextInputActionButton_C, ButtonTextJustification) == 0x001160, "Member 'UOnboardingTextInputActionButton_C::ButtonTextJustification' has a wrong offset!");
static_assert(offsetof(UOnboardingTextInputActionButton_C, bDisplayAllCaps) == 0x001161, "Member 'UOnboardingTextInputActionButton_C::bDisplayAllCaps' has a wrong offset!");
static_assert(offsetof(UOnboardingTextInputActionButton_C, PressProgress) == 0x001164, "Member 'UOnboardingTextInputActionButton_C::PressProgress' has a wrong offset!");
static_assert(offsetof(UOnboardingTextInputActionButton_C, bIgnoreInputActionWidgetText) == 0x001168, "Member 'UOnboardingTextInputActionButton_C::bIgnoreInputActionWidgetText' has a wrong offset!");

}

