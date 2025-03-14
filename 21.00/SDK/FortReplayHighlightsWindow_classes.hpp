﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: FortReplayHighlightsWindow

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass FortReplayHighlightsWindow.FortReplayHighlightsWindow_C
// 0x0010 (0x0588 - 0x0578)
class UFortReplayHighlightsWindow_C final : public UFortReplayHighlightsWindow
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0578(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UIconTextButton_C*                      CloseButton;                                       // 0x0580(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void BndEvt__CloseButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature(class UCommonButtonLegacy* Button);
	void BP_OnActivated();
	void ExecuteUbergraph_FortReplayHighlightsWindow(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"FortReplayHighlightsWindow_C">();
	}
	static class UFortReplayHighlightsWindow_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortReplayHighlightsWindow_C>();
	}
};
static_assert(alignof(UFortReplayHighlightsWindow_C) == 0x000008, "Wrong alignment on UFortReplayHighlightsWindow_C");
static_assert(sizeof(UFortReplayHighlightsWindow_C) == 0x000588, "Wrong size on UFortReplayHighlightsWindow_C");
static_assert(offsetof(UFortReplayHighlightsWindow_C, UberGraphFrame) == 0x000578, "Member 'UFortReplayHighlightsWindow_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UFortReplayHighlightsWindow_C, CloseButton) == 0x000580, "Member 'UFortReplayHighlightsWindow_C::CloseButton' has a wrong offset!");

}

