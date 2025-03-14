﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SidebarEmptyPanelWidget

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass SidebarEmptyPanelWidget.SidebarEmptyPanelWidget_C
// 0x0010 (0x1080 - 0x1070)
class USidebarEmptyPanelWidget_C final : public USocialListEntryEmptyPanelBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x1070(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void BndEvt__SidebarEmptyPanelWidget_ButtonWidget_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void ExecuteUbergraph_SidebarEmptyPanelWidget(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SidebarEmptyPanelWidget_C">();
	}
	static class USidebarEmptyPanelWidget_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USidebarEmptyPanelWidget_C>();
	}
};
static_assert(alignof(USidebarEmptyPanelWidget_C) == 0x000010, "Wrong alignment on USidebarEmptyPanelWidget_C");
static_assert(sizeof(USidebarEmptyPanelWidget_C) == 0x001080, "Wrong size on USidebarEmptyPanelWidget_C");
static_assert(offsetof(USidebarEmptyPanelWidget_C, UberGraphFrame) == 0x001070, "Member 'USidebarEmptyPanelWidget_C::UberGraphFrame' has a wrong offset!");

}

