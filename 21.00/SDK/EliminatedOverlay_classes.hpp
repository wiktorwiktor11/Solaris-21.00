﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: EliminatedOverlay

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"
#include "FortniteGame_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass EliminatedOverlay.EliminatedOverlay_C
// 0x0058 (0x0430 - 0x03D8)
class UEliminatedOverlay_C final : public UEliminatedOverlay
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x03D8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       MultiWinnerSwap;                                   // 0x03E0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       WinnerDetermined;                                  // 0x03E8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       PlacementOutro;                                    // 0x03F0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       PlacementIntro;                                    // 0x03F8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       EliminatedToSpectating;                            // 0x0400(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       EliminatedByIntro;                                 // 0x0408(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UCommonWidgetSwitcherLegacy*            CommonWidgetSwitcher_phasetype;                    // 0x0410(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPlayerRankEmblem_C*                    PlayerRankEmblem;                                  // 0x0418(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Text_Spectating;                                   // 0x0420(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           VerticalBoxEliminatedbySpectating;                 // 0x0428(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void AdjustVertical_BoxEliminatedPadding();
	void Construct();
	class FText DeathCauseToText(EDeathCause DeathCause);
	void ExecuteUbergraph_EliminatedOverlay(int32 EntryPoint);
	void Finished_2E2713B544F74046B6F0299A50CD9864();
	bool IsEliminatedByIntroAnimFinished();
	void On_UI_Extensions_Changed(class AFortMinigame* Minigame);
	void OnEliminatedByIntro();
	void OnResetSpectatingForCreative();
	void OnShowPlacementBox();
	void OnUpdateMultiwinner();
	void OnWinnerDetermined();
	void PlacementIntroComplete();
	void PlayPlacementOutro();
	void SetBannerInfo(const struct FPlayerBannerInfo& BannerInfo);
	void SetPlaceTextFont_TEMP();
	void WinnerSwapComplete();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"EliminatedOverlay_C">();
	}
	static class UEliminatedOverlay_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UEliminatedOverlay_C>();
	}
};
static_assert(alignof(UEliminatedOverlay_C) == 0x000008, "Wrong alignment on UEliminatedOverlay_C");
static_assert(sizeof(UEliminatedOverlay_C) == 0x000430, "Wrong size on UEliminatedOverlay_C");
static_assert(offsetof(UEliminatedOverlay_C, UberGraphFrame) == 0x0003D8, "Member 'UEliminatedOverlay_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UEliminatedOverlay_C, MultiWinnerSwap) == 0x0003E0, "Member 'UEliminatedOverlay_C::MultiWinnerSwap' has a wrong offset!");
static_assert(offsetof(UEliminatedOverlay_C, WinnerDetermined) == 0x0003E8, "Member 'UEliminatedOverlay_C::WinnerDetermined' has a wrong offset!");
static_assert(offsetof(UEliminatedOverlay_C, PlacementOutro) == 0x0003F0, "Member 'UEliminatedOverlay_C::PlacementOutro' has a wrong offset!");
static_assert(offsetof(UEliminatedOverlay_C, PlacementIntro) == 0x0003F8, "Member 'UEliminatedOverlay_C::PlacementIntro' has a wrong offset!");
static_assert(offsetof(UEliminatedOverlay_C, EliminatedToSpectating) == 0x000400, "Member 'UEliminatedOverlay_C::EliminatedToSpectating' has a wrong offset!");
static_assert(offsetof(UEliminatedOverlay_C, EliminatedByIntro) == 0x000408, "Member 'UEliminatedOverlay_C::EliminatedByIntro' has a wrong offset!");
static_assert(offsetof(UEliminatedOverlay_C, CommonWidgetSwitcher_phasetype) == 0x000410, "Member 'UEliminatedOverlay_C::CommonWidgetSwitcher_phasetype' has a wrong offset!");
static_assert(offsetof(UEliminatedOverlay_C, PlayerRankEmblem) == 0x000418, "Member 'UEliminatedOverlay_C::PlayerRankEmblem' has a wrong offset!");
static_assert(offsetof(UEliminatedOverlay_C, Text_Spectating) == 0x000420, "Member 'UEliminatedOverlay_C::Text_Spectating' has a wrong offset!");
static_assert(offsetof(UEliminatedOverlay_C, VerticalBoxEliminatedbySpectating) == 0x000428, "Member 'UEliminatedOverlay_C::VerticalBoxEliminatedbySpectating' has a wrong offset!");

}

