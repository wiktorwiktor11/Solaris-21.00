﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SidebarExitPopup

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"
#include "UMG_structs.hpp"
#include "CommonInput_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass SidebarExitPopup.SidebarExitPopup_C
// 0x00C0 (0x0590 - 0x04D0)
class USidebarExitPopup_C final : public UFortSidebarExitPopup
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x04D0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UBorder*                                Border_SpacingMobile;                              // 0x04D8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               Overlay_Favorite;                                  // 0x04E0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               Overlay_SAC;                                       // 0x04E8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       Text_AreYouSure;                                   // 0x04F0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                   LogoutAllowedNoButtonsText;                        // 0x04F8(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                   LogoutAndQuitNotAllowedNoButtonsText;              // 0x0510(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                   QuitAllowedNoButtonsText;                          // 0x0528(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          Is_A;                                              // 0x0540(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_541[0x7];                                      // 0x0541(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   LeaveExperienceConfirmationMessageText;            // 0x0548(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                   LogoutConfirmationMessageText;                     // 0x0560(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                   ExitConfirmationMessageText;                       // 0x0578(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void BndEvt__SidebarExitPopup_Button_AthenaMainMenuLeave_K2Node_ComponentBoundEvent_7_CommonButtonClicked__DelegateSignature(class UCommonButtonLegacy* Button);
	void BndEvt__SidebarExitPopup_Button_ExitGame_K2Node_ComponentBoundEvent_6_CommonButtonClicked__DelegateSignature(class UCommonButtonLegacy* Button);
	void BndEvt__SidebarExitPopup_Button_LeaveExperience_K2Node_ComponentBoundEvent_4_CommonButtonClicked__DelegateSignature(class UCommonButtonLegacy* Button);
	void BndEvt__SidebarExitPopup_Button_Logout_K2Node_ComponentBoundEvent_5_CommonButtonClicked__DelegateSignature(class UCommonButtonLegacy* Button);
	void BndEvt__SidebarExitPopup_Button_No_K2Node_ComponentBoundEvent_3_CommonButtonClicked__DelegateSignature(class UCommonButtonLegacy* Button);
	void BndEvt__SidebarExitPopup_Button_Yes_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature(class UCommonButtonLegacy* Button);
	void Construct();
	void ExecuteUbergraph_SidebarExitPopup(int32 EntryPoint);
	void OnInputMethodChanged(ECommonInputType NewInputType);
	void RefreshButtonsVisual(bool IsTouch);
	void UpdateNoEnabledButtonsText(const bool bAllowLogout, const bool bAllowQuit);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SidebarExitPopup_C">();
	}
	static class USidebarExitPopup_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USidebarExitPopup_C>();
	}
};
static_assert(alignof(USidebarExitPopup_C) == 0x000008, "Wrong alignment on USidebarExitPopup_C");
static_assert(sizeof(USidebarExitPopup_C) == 0x000590, "Wrong size on USidebarExitPopup_C");
static_assert(offsetof(USidebarExitPopup_C, UberGraphFrame) == 0x0004D0, "Member 'USidebarExitPopup_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(USidebarExitPopup_C, Border_SpacingMobile) == 0x0004D8, "Member 'USidebarExitPopup_C::Border_SpacingMobile' has a wrong offset!");
static_assert(offsetof(USidebarExitPopup_C, Overlay_Favorite) == 0x0004E0, "Member 'USidebarExitPopup_C::Overlay_Favorite' has a wrong offset!");
static_assert(offsetof(USidebarExitPopup_C, Overlay_SAC) == 0x0004E8, "Member 'USidebarExitPopup_C::Overlay_SAC' has a wrong offset!");
static_assert(offsetof(USidebarExitPopup_C, Text_AreYouSure) == 0x0004F0, "Member 'USidebarExitPopup_C::Text_AreYouSure' has a wrong offset!");
static_assert(offsetof(USidebarExitPopup_C, LogoutAllowedNoButtonsText) == 0x0004F8, "Member 'USidebarExitPopup_C::LogoutAllowedNoButtonsText' has a wrong offset!");
static_assert(offsetof(USidebarExitPopup_C, LogoutAndQuitNotAllowedNoButtonsText) == 0x000510, "Member 'USidebarExitPopup_C::LogoutAndQuitNotAllowedNoButtonsText' has a wrong offset!");
static_assert(offsetof(USidebarExitPopup_C, QuitAllowedNoButtonsText) == 0x000528, "Member 'USidebarExitPopup_C::QuitAllowedNoButtonsText' has a wrong offset!");
static_assert(offsetof(USidebarExitPopup_C, Is_A) == 0x000540, "Member 'USidebarExitPopup_C::Is_A' has a wrong offset!");
static_assert(offsetof(USidebarExitPopup_C, LeaveExperienceConfirmationMessageText) == 0x000548, "Member 'USidebarExitPopup_C::LeaveExperienceConfirmationMessageText' has a wrong offset!");
static_assert(offsetof(USidebarExitPopup_C, LogoutConfirmationMessageText) == 0x000560, "Member 'USidebarExitPopup_C::LogoutConfirmationMessageText' has a wrong offset!");
static_assert(offsetof(USidebarExitPopup_C, ExitConfirmationMessageText) == 0x000578, "Member 'USidebarExitPopup_C::ExitConfirmationMessageText' has a wrong offset!");

}

