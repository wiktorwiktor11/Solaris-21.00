﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: NetDebugUI

#include "Basic.hpp"

#include "NetUI_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass NetDebugUI.NetDebugUI_C
// 0x0030 (0x03D0 - 0x03A0)
class UNetDebugUI_C final : public UNetDebugWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x03A0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 Image_1;                                           // 0x03A8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_2;                                           // 0x03B0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           VerticalBox_2;                                     // 0x03B8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<class UCommonTextBlock*>               NetDisplayText;                                    // 0x03C0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)

public:
	void Construct();
	void ExecuteUbergraph_NetDebugUI(int32 EntryPoint);
	void SetTextStyleForMobile(bool bIsMobile);
	void TestMobileNetHUDAdjustments();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"NetDebugUI_C">();
	}
	static class UNetDebugUI_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNetDebugUI_C>();
	}
};
static_assert(alignof(UNetDebugUI_C) == 0x000008, "Wrong alignment on UNetDebugUI_C");
static_assert(sizeof(UNetDebugUI_C) == 0x0003D0, "Wrong size on UNetDebugUI_C");
static_assert(offsetof(UNetDebugUI_C, UberGraphFrame) == 0x0003A0, "Member 'UNetDebugUI_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UNetDebugUI_C, Image_1) == 0x0003A8, "Member 'UNetDebugUI_C::Image_1' has a wrong offset!");
static_assert(offsetof(UNetDebugUI_C, Image_2) == 0x0003B0, "Member 'UNetDebugUI_C::Image_2' has a wrong offset!");
static_assert(offsetof(UNetDebugUI_C, VerticalBox_2) == 0x0003B8, "Member 'UNetDebugUI_C::VerticalBox_2' has a wrong offset!");
static_assert(offsetof(UNetDebugUI_C, NetDisplayText) == 0x0003C0, "Member 'UNetDebugUI_C::NetDisplayText' has a wrong offset!");

}

