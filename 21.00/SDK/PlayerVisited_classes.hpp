﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PlayerVisited

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass PlayerVisited.PlayerVisited_C
// 0x0050 (0x03D0 - 0x0380)
class UPlayerVisited_C final : public UAthenaVisitedAreaDisplay
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0380(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       BriefShow;                                         // 0x0388(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UCommonWidgetSwitcherLegacy*            CommonWidgetSwitcher_landmarkorPOI;                // 0x0390(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           MainBox;                                           // 0x0398(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       MainLocationText;                                  // 0x03A0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FTimerHandle                           BriefShowFallbackTimerHandle;                      // 0x03A8(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class FText                                   LastLocationVisited;                               // 0x03B0(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	float                                         TimeLastLocationVisited;                           // 0x03C8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         LocationVisitedCooldown;                           // 0x03CC(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void OnStompFailed();
	void OnStompedByOtherWidget();
	void OnNewVisited(const class FText& LocalizedLocationName, bool bIsNamedLocation);
	void OnAnimBackupTimerFinished();
	void K2_OnBecomeActive();
	void ExecuteUbergraph_PlayerVisited(int32 EntryPoint);
	void EndOfShow();
	void Construct();
	void Brief_Show_Finished();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"PlayerVisited_C">();
	}
	static class UPlayerVisited_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPlayerVisited_C>();
	}
};
static_assert(alignof(UPlayerVisited_C) == 0x000008, "Wrong alignment on UPlayerVisited_C");
static_assert(sizeof(UPlayerVisited_C) == 0x0003D0, "Wrong size on UPlayerVisited_C");
static_assert(offsetof(UPlayerVisited_C, UberGraphFrame) == 0x000380, "Member 'UPlayerVisited_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UPlayerVisited_C, BriefShow) == 0x000388, "Member 'UPlayerVisited_C::BriefShow' has a wrong offset!");
static_assert(offsetof(UPlayerVisited_C, CommonWidgetSwitcher_landmarkorPOI) == 0x000390, "Member 'UPlayerVisited_C::CommonWidgetSwitcher_landmarkorPOI' has a wrong offset!");
static_assert(offsetof(UPlayerVisited_C, MainBox) == 0x000398, "Member 'UPlayerVisited_C::MainBox' has a wrong offset!");
static_assert(offsetof(UPlayerVisited_C, MainLocationText) == 0x0003A0, "Member 'UPlayerVisited_C::MainLocationText' has a wrong offset!");
static_assert(offsetof(UPlayerVisited_C, BriefShowFallbackTimerHandle) == 0x0003A8, "Member 'UPlayerVisited_C::BriefShowFallbackTimerHandle' has a wrong offset!");
static_assert(offsetof(UPlayerVisited_C, LastLocationVisited) == 0x0003B0, "Member 'UPlayerVisited_C::LastLocationVisited' has a wrong offset!");
static_assert(offsetof(UPlayerVisited_C, TimeLastLocationVisited) == 0x0003C8, "Member 'UPlayerVisited_C::TimeLastLocationVisited' has a wrong offset!");
static_assert(offsetof(UPlayerVisited_C, LocationVisitedCooldown) == 0x0003CC, "Member 'UPlayerVisited_C::LocationVisitedCooldown' has a wrong offset!");

}

