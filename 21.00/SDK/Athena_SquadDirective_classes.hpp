﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Athena_SquadDirective

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_structs.hpp"
#include "FortniteUI_classes.hpp"
#include "UMG_structs.hpp"
#include "GameplayAbilities_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass Athena_SquadDirective.Athena_SquadDirective_C
// 0x00E8 (0x0420 - 0x0338)
class UAthena_SquadDirective_C final : public UAthenaRebootChipDirective
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0338(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       OutroAnim;                                         // 0x0340(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       UpdateTime;                                        // 0x0348(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Intro;                                             // 0x0350(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UCommonWidgetSwitcherLegacy*            CommonWidgetSwitcher_IconType;                     // 0x0358(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_ChipCarried;                                 // 0x0360(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_ChipDropped;                                 // 0x0368(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_FXParticles;                                 // 0x0370(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_Glow;                                        // 0x0378(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_Reboot;                                      // 0x0380(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_RebootGlow;                                  // 0x0388(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonRichTextBlock*                   RichText_DisplayedMessage;                         // 0x0390(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       Text_Time;                                         // 0x0398(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	EAthenaSquadListUpdateType                    CurrentDirective;                                  // 0x03A0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EAthenaSquadListUpdateType                    PendingDirective;                                  // 0x03A1(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3A2[0x6];                                      // 0x03A2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           OutroTimerHandle;                                  // 0x03A8(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	EAthenaSquadListUpdateType                    Test;                                              // 0x03B0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3B1[0x3];                                      // 0x03B1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CurDespawnTime;                                    // 0x03B4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                           TimerCountdown;                                    // 0x03B8(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class FText                                   CanResurrectText;                                  // 0x03C0(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                   FindResurrectChipText;                             // 0x03D8(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	class AFortPlayerStateAthena*                 CachedPlayerState;                                 // 0x03F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FScalableFloat                         Row_ExpirationLength;                              // 0x03F8(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void Cleanup_Directive_State_Anim_Event();
	void EventIntro(EAthenaSquadListUpdateType UpdateType);
	void ExecutePendingDirective();
	void ExecuteUbergraph_Athena_SquadDirective(int32 EntryPoint);
	void Outro();
	void TestChipUI();
	void UpdateChipCountdown();
	void UpdateCountdown();
	void UpdateSquadListDisplay(EAthenaSquadListUpdateType UpdateType, class AFortPlayerStateAthena* PS);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Athena_SquadDirective_C">();
	}
	static class UAthena_SquadDirective_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAthena_SquadDirective_C>();
	}
};
static_assert(alignof(UAthena_SquadDirective_C) == 0x000008, "Wrong alignment on UAthena_SquadDirective_C");
static_assert(sizeof(UAthena_SquadDirective_C) == 0x000420, "Wrong size on UAthena_SquadDirective_C");
static_assert(offsetof(UAthena_SquadDirective_C, UberGraphFrame) == 0x000338, "Member 'UAthena_SquadDirective_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UAthena_SquadDirective_C, OutroAnim) == 0x000340, "Member 'UAthena_SquadDirective_C::OutroAnim' has a wrong offset!");
static_assert(offsetof(UAthena_SquadDirective_C, UpdateTime) == 0x000348, "Member 'UAthena_SquadDirective_C::UpdateTime' has a wrong offset!");
static_assert(offsetof(UAthena_SquadDirective_C, Intro) == 0x000350, "Member 'UAthena_SquadDirective_C::Intro' has a wrong offset!");
static_assert(offsetof(UAthena_SquadDirective_C, CommonWidgetSwitcher_IconType) == 0x000358, "Member 'UAthena_SquadDirective_C::CommonWidgetSwitcher_IconType' has a wrong offset!");
static_assert(offsetof(UAthena_SquadDirective_C, Image_ChipCarried) == 0x000360, "Member 'UAthena_SquadDirective_C::Image_ChipCarried' has a wrong offset!");
static_assert(offsetof(UAthena_SquadDirective_C, Image_ChipDropped) == 0x000368, "Member 'UAthena_SquadDirective_C::Image_ChipDropped' has a wrong offset!");
static_assert(offsetof(UAthena_SquadDirective_C, Image_FXParticles) == 0x000370, "Member 'UAthena_SquadDirective_C::Image_FXParticles' has a wrong offset!");
static_assert(offsetof(UAthena_SquadDirective_C, Image_Glow) == 0x000378, "Member 'UAthena_SquadDirective_C::Image_Glow' has a wrong offset!");
static_assert(offsetof(UAthena_SquadDirective_C, Image_Reboot) == 0x000380, "Member 'UAthena_SquadDirective_C::Image_Reboot' has a wrong offset!");
static_assert(offsetof(UAthena_SquadDirective_C, Image_RebootGlow) == 0x000388, "Member 'UAthena_SquadDirective_C::Image_RebootGlow' has a wrong offset!");
static_assert(offsetof(UAthena_SquadDirective_C, RichText_DisplayedMessage) == 0x000390, "Member 'UAthena_SquadDirective_C::RichText_DisplayedMessage' has a wrong offset!");
static_assert(offsetof(UAthena_SquadDirective_C, Text_Time) == 0x000398, "Member 'UAthena_SquadDirective_C::Text_Time' has a wrong offset!");
static_assert(offsetof(UAthena_SquadDirective_C, CurrentDirective) == 0x0003A0, "Member 'UAthena_SquadDirective_C::CurrentDirective' has a wrong offset!");
static_assert(offsetof(UAthena_SquadDirective_C, PendingDirective) == 0x0003A1, "Member 'UAthena_SquadDirective_C::PendingDirective' has a wrong offset!");
static_assert(offsetof(UAthena_SquadDirective_C, OutroTimerHandle) == 0x0003A8, "Member 'UAthena_SquadDirective_C::OutroTimerHandle' has a wrong offset!");
static_assert(offsetof(UAthena_SquadDirective_C, Test) == 0x0003B0, "Member 'UAthena_SquadDirective_C::Test' has a wrong offset!");
static_assert(offsetof(UAthena_SquadDirective_C, CurDespawnTime) == 0x0003B4, "Member 'UAthena_SquadDirective_C::CurDespawnTime' has a wrong offset!");
static_assert(offsetof(UAthena_SquadDirective_C, TimerCountdown) == 0x0003B8, "Member 'UAthena_SquadDirective_C::TimerCountdown' has a wrong offset!");
static_assert(offsetof(UAthena_SquadDirective_C, CanResurrectText) == 0x0003C0, "Member 'UAthena_SquadDirective_C::CanResurrectText' has a wrong offset!");
static_assert(offsetof(UAthena_SquadDirective_C, FindResurrectChipText) == 0x0003D8, "Member 'UAthena_SquadDirective_C::FindResurrectChipText' has a wrong offset!");
static_assert(offsetof(UAthena_SquadDirective_C, CachedPlayerState) == 0x0003F0, "Member 'UAthena_SquadDirective_C::CachedPlayerState' has a wrong offset!");
static_assert(offsetof(UAthena_SquadDirective_C, Row_ExpirationLength) == 0x0003F8, "Member 'UAthena_SquadDirective_C::Row_ExpirationLength' has a wrong offset!");

}

