﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_ScannerScreen

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UI_ScannerScreen.UI_ScannerScreen_C
// 0x0050 (0x0308 - 0x02B8)
class UUI_ScannerScreen_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02B8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       FlashText;                                         // 0x02C0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UCommonWidgetSwitcherLegacy*            CommonWidgetSwitcher_States;                       // 0x02C8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image;                                             // 0x02D0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_100;                                         // 0x02D8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_ScreenBorder;                                // 0x02E0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               Overlay_BGIdle;                                    // 0x02E8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       Text_Failure;                                      // 0x02F0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       Text_Misc;                                         // 0x02F8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       Text_Success;                                      // 0x0300(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_UI_ScannerScreen(int32 EntryPoint);
	void EventTargetLost(const class FText& ScreenText);
	void EventSuccess(const class FText& ScreenText);
	void EventScanning();
	void EventFail(const class FText& ScreenText);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UI_ScannerScreen_C">();
	}
	static class UUI_ScannerScreen_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUI_ScannerScreen_C>();
	}
};
static_assert(alignof(UUI_ScannerScreen_C) == 0x000008, "Wrong alignment on UUI_ScannerScreen_C");
static_assert(sizeof(UUI_ScannerScreen_C) == 0x000308, "Wrong size on UUI_ScannerScreen_C");
static_assert(offsetof(UUI_ScannerScreen_C, UberGraphFrame) == 0x0002B8, "Member 'UUI_ScannerScreen_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUI_ScannerScreen_C, FlashText) == 0x0002C0, "Member 'UUI_ScannerScreen_C::FlashText' has a wrong offset!");
static_assert(offsetof(UUI_ScannerScreen_C, CommonWidgetSwitcher_States) == 0x0002C8, "Member 'UUI_ScannerScreen_C::CommonWidgetSwitcher_States' has a wrong offset!");
static_assert(offsetof(UUI_ScannerScreen_C, Image) == 0x0002D0, "Member 'UUI_ScannerScreen_C::Image' has a wrong offset!");
static_assert(offsetof(UUI_ScannerScreen_C, Image_100) == 0x0002D8, "Member 'UUI_ScannerScreen_C::Image_100' has a wrong offset!");
static_assert(offsetof(UUI_ScannerScreen_C, Image_ScreenBorder) == 0x0002E0, "Member 'UUI_ScannerScreen_C::Image_ScreenBorder' has a wrong offset!");
static_assert(offsetof(UUI_ScannerScreen_C, Overlay_BGIdle) == 0x0002E8, "Member 'UUI_ScannerScreen_C::Overlay_BGIdle' has a wrong offset!");
static_assert(offsetof(UUI_ScannerScreen_C, Text_Failure) == 0x0002F0, "Member 'UUI_ScannerScreen_C::Text_Failure' has a wrong offset!");
static_assert(offsetof(UUI_ScannerScreen_C, Text_Misc) == 0x0002F8, "Member 'UUI_ScannerScreen_C::Text_Misc' has a wrong offset!");
static_assert(offsetof(UUI_ScannerScreen_C, Text_Success) == 0x000300, "Member 'UUI_ScannerScreen_C::Text_Success' has a wrong offset!");

}

