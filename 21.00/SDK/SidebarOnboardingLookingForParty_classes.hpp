﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SidebarOnboardingLookingForParty

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass SidebarOnboardingLookingForParty.SidebarOnboardingLookingForParty_C
// 0x0038 (0x0490 - 0x0458)
class USidebarOnboardingLookingForParty_C final : public UFortSidebarOnboardTooltipWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0458(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Outro;                                             // 0x0460(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Pulse;                                             // 0x0468(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UCommonRichTextBlock*                   CommonRichTextBlock_106;                           // 0x0470(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonRichTextBlock*                   CommonRichTextBlock_140;                           // 0x0478(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_Arrow;                                       // 0x0480(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ImageBurst;                                        // 0x0488(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_SidebarOnboardingLookingForParty(int32 EntryPoint);
	void Finished_469BDD0E45CC38F76A797EB7FC304743();
	void Finished_852B268C46273AE00023FBA7560B3CDA();
	void OnEndTooltip();
	void OnShowTooltip();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SidebarOnboardingLookingForParty_C">();
	}
	static class USidebarOnboardingLookingForParty_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USidebarOnboardingLookingForParty_C>();
	}
};
static_assert(alignof(USidebarOnboardingLookingForParty_C) == 0x000008, "Wrong alignment on USidebarOnboardingLookingForParty_C");
static_assert(sizeof(USidebarOnboardingLookingForParty_C) == 0x000490, "Wrong size on USidebarOnboardingLookingForParty_C");
static_assert(offsetof(USidebarOnboardingLookingForParty_C, UberGraphFrame) == 0x000458, "Member 'USidebarOnboardingLookingForParty_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(USidebarOnboardingLookingForParty_C, Outro) == 0x000460, "Member 'USidebarOnboardingLookingForParty_C::Outro' has a wrong offset!");
static_assert(offsetof(USidebarOnboardingLookingForParty_C, Pulse) == 0x000468, "Member 'USidebarOnboardingLookingForParty_C::Pulse' has a wrong offset!");
static_assert(offsetof(USidebarOnboardingLookingForParty_C, CommonRichTextBlock_106) == 0x000470, "Member 'USidebarOnboardingLookingForParty_C::CommonRichTextBlock_106' has a wrong offset!");
static_assert(offsetof(USidebarOnboardingLookingForParty_C, CommonRichTextBlock_140) == 0x000478, "Member 'USidebarOnboardingLookingForParty_C::CommonRichTextBlock_140' has a wrong offset!");
static_assert(offsetof(USidebarOnboardingLookingForParty_C, Image_Arrow) == 0x000480, "Member 'USidebarOnboardingLookingForParty_C::Image_Arrow' has a wrong offset!");
static_assert(offsetof(USidebarOnboardingLookingForParty_C, ImageBurst) == 0x000488, "Member 'USidebarOnboardingLookingForParty_C::ImageBurst' has a wrong offset!");

}

