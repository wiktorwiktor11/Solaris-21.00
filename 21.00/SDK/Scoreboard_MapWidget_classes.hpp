﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Scoreboard_MapWidget

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CommonUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass Scoreboard_MapWidget.Scoreboard_MapWidget_C
// 0x0030 (0x0428 - 0x03F8)
class UScoreboard_MapWidget_C final : public UCommonActivatableWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x03F8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UBackgroundBlur*                        BackgroundBlur_89;                                 // 0x0400(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 MapFalloff;                                        // 0x0408(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       NotAvailableText;                                  // 0x0410(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScoreboard_UI_C*                       Scoreboard_UI;                                     // 0x0418(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonVisibilitySwitcher*              ScoreboardEnabledSwitcher;                         // 0x0420(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void BP_OnActivated();
	void BP_OnDeactivated();
	void Construct();
	void ExecuteUbergraph_Scoreboard_MapWidget(int32 EntryPoint);
	void IsScoreboardEnabled(bool* bIsEnabled_0);
	void SetIsCareerScoreboard(bool bIsCareerScoreboard);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Scoreboard_MapWidget_C">();
	}
	static class UScoreboard_MapWidget_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UScoreboard_MapWidget_C>();
	}
};
static_assert(alignof(UScoreboard_MapWidget_C) == 0x000008, "Wrong alignment on UScoreboard_MapWidget_C");
static_assert(sizeof(UScoreboard_MapWidget_C) == 0x000428, "Wrong size on UScoreboard_MapWidget_C");
static_assert(offsetof(UScoreboard_MapWidget_C, UberGraphFrame) == 0x0003F8, "Member 'UScoreboard_MapWidget_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UScoreboard_MapWidget_C, BackgroundBlur_89) == 0x000400, "Member 'UScoreboard_MapWidget_C::BackgroundBlur_89' has a wrong offset!");
static_assert(offsetof(UScoreboard_MapWidget_C, MapFalloff) == 0x000408, "Member 'UScoreboard_MapWidget_C::MapFalloff' has a wrong offset!");
static_assert(offsetof(UScoreboard_MapWidget_C, NotAvailableText) == 0x000410, "Member 'UScoreboard_MapWidget_C::NotAvailableText' has a wrong offset!");
static_assert(offsetof(UScoreboard_MapWidget_C, Scoreboard_UI) == 0x000418, "Member 'UScoreboard_MapWidget_C::Scoreboard_UI' has a wrong offset!");
static_assert(offsetof(UScoreboard_MapWidget_C, ScoreboardEnabledSwitcher) == 0x000420, "Member 'UScoreboard_MapWidget_C::ScoreboardEnabledSwitcher' has a wrong offset!");

}

