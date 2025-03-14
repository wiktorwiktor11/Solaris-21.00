﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AthenaPlayerActionAlert

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_structs.hpp"
#include "FortniteUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass AthenaPlayerActionAlert.AthenaPlayerActionAlert_C
// 0x0050 (0x0390 - 0x0340)
class UAthenaPlayerActionAlert_C final : public UAthenaHUDPlayerActionAlertBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0340(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       CrawlDown2;                                        // 0x0348(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       CrawlDown;                                         // 0x0350(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Elimination;                                       // 0x0358(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       ShowAlert;                                         // 0x0360(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       FlashRun;                                          // 0x0368(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UCommonTextBlock*                       JumpLeaderText;                                    // 0x0370(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonVisibilitySwitcher*              MessageSwitcher;                                   // 0x0378(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       PlayerDownText;                                    // 0x0380(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       PlayerEliminatedText;                              // 0x0388(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void BP_OnAlertsCleared();
	void BP_ShowAlert(EAthenaPlayerActionAlert Alert, const class FText& DetailText);
	void ExecuteUbergraph_AthenaPlayerActionAlert(int32 EntryPoint);
	void WidgetAnimationEvt_ShowAlert_K2Node_WidgetAnimationEvent_1();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AthenaPlayerActionAlert_C">();
	}
	static class UAthenaPlayerActionAlert_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAthenaPlayerActionAlert_C>();
	}
};
static_assert(alignof(UAthenaPlayerActionAlert_C) == 0x000008, "Wrong alignment on UAthenaPlayerActionAlert_C");
static_assert(sizeof(UAthenaPlayerActionAlert_C) == 0x000390, "Wrong size on UAthenaPlayerActionAlert_C");
static_assert(offsetof(UAthenaPlayerActionAlert_C, UberGraphFrame) == 0x000340, "Member 'UAthenaPlayerActionAlert_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UAthenaPlayerActionAlert_C, CrawlDown2) == 0x000348, "Member 'UAthenaPlayerActionAlert_C::CrawlDown2' has a wrong offset!");
static_assert(offsetof(UAthenaPlayerActionAlert_C, CrawlDown) == 0x000350, "Member 'UAthenaPlayerActionAlert_C::CrawlDown' has a wrong offset!");
static_assert(offsetof(UAthenaPlayerActionAlert_C, Elimination) == 0x000358, "Member 'UAthenaPlayerActionAlert_C::Elimination' has a wrong offset!");
static_assert(offsetof(UAthenaPlayerActionAlert_C, ShowAlert) == 0x000360, "Member 'UAthenaPlayerActionAlert_C::ShowAlert' has a wrong offset!");
static_assert(offsetof(UAthenaPlayerActionAlert_C, FlashRun) == 0x000368, "Member 'UAthenaPlayerActionAlert_C::FlashRun' has a wrong offset!");
static_assert(offsetof(UAthenaPlayerActionAlert_C, JumpLeaderText) == 0x000370, "Member 'UAthenaPlayerActionAlert_C::JumpLeaderText' has a wrong offset!");
static_assert(offsetof(UAthenaPlayerActionAlert_C, MessageSwitcher) == 0x000378, "Member 'UAthenaPlayerActionAlert_C::MessageSwitcher' has a wrong offset!");
static_assert(offsetof(UAthenaPlayerActionAlert_C, PlayerDownText) == 0x000380, "Member 'UAthenaPlayerActionAlert_C::PlayerDownText' has a wrong offset!");
static_assert(offsetof(UAthenaPlayerActionAlert_C, PlayerEliminatedText) == 0x000388, "Member 'UAthenaPlayerActionAlert_C::PlayerEliminatedText' has a wrong offset!");

}

