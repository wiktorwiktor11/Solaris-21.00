﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: KeepPlayingTogetherOverlay

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass KeepPlayingTogetherOverlay.KeepPlayingTogetherOverlay_C
// 0x0058 (0x03E8 - 0x0390)
class UKeepPlayingTogetherOverlay_C final : public UAthenaKeepPlayingTogetherScreenOverlay
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0390(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       InitialCountdownState;                             // 0x0398(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Countdown;                                         // 0x03A0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UAthenaServerShutdownWidget_C*          AthenaServerShutdownWidget;                        // 0x03A8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPostGameBottomBarWidget_C*             PostGameBottomBarWidget;                           // 0x03B0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         SquadBox;                                          // 0x03B8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       Text_ErrorHeader;                                  // 0x03C0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       Text_Waiting;                                      // 0x03C8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                   CachedErrorText;                                   // 0x03D0(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void Destruct();
	void ExecuteUbergraph_KeepPlayingTogetherOverlay(int32 EntryPoint);
	void OnExitToLobbyCountdownProgressed(float CountdownValue);
	void OnKeepPlayingTogetherScreenOverlayActivated();
	void OnKeepPlayingTogetherScreenOverlayDeactivated();
	void OnMatchmakingFinished(bool bSuccess);
	void OnMatchmakingStarted();
	void OnPreMatchmakingCountdownProgressed();
	void OnPreMatchmakingCountdownStarted();
	void PreConstruct(bool IsDesignTime);
	void UpdateExitToLobbyCountdownText(float CountdownValue);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"KeepPlayingTogetherOverlay_C">();
	}
	static class UKeepPlayingTogetherOverlay_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UKeepPlayingTogetherOverlay_C>();
	}
};
static_assert(alignof(UKeepPlayingTogetherOverlay_C) == 0x000008, "Wrong alignment on UKeepPlayingTogetherOverlay_C");
static_assert(sizeof(UKeepPlayingTogetherOverlay_C) == 0x0003E8, "Wrong size on UKeepPlayingTogetherOverlay_C");
static_assert(offsetof(UKeepPlayingTogetherOverlay_C, UberGraphFrame) == 0x000390, "Member 'UKeepPlayingTogetherOverlay_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UKeepPlayingTogetherOverlay_C, InitialCountdownState) == 0x000398, "Member 'UKeepPlayingTogetherOverlay_C::InitialCountdownState' has a wrong offset!");
static_assert(offsetof(UKeepPlayingTogetherOverlay_C, Countdown) == 0x0003A0, "Member 'UKeepPlayingTogetherOverlay_C::Countdown' has a wrong offset!");
static_assert(offsetof(UKeepPlayingTogetherOverlay_C, AthenaServerShutdownWidget) == 0x0003A8, "Member 'UKeepPlayingTogetherOverlay_C::AthenaServerShutdownWidget' has a wrong offset!");
static_assert(offsetof(UKeepPlayingTogetherOverlay_C, PostGameBottomBarWidget) == 0x0003B0, "Member 'UKeepPlayingTogetherOverlay_C::PostGameBottomBarWidget' has a wrong offset!");
static_assert(offsetof(UKeepPlayingTogetherOverlay_C, SquadBox) == 0x0003B8, "Member 'UKeepPlayingTogetherOverlay_C::SquadBox' has a wrong offset!");
static_assert(offsetof(UKeepPlayingTogetherOverlay_C, Text_ErrorHeader) == 0x0003C0, "Member 'UKeepPlayingTogetherOverlay_C::Text_ErrorHeader' has a wrong offset!");
static_assert(offsetof(UKeepPlayingTogetherOverlay_C, Text_Waiting) == 0x0003C8, "Member 'UKeepPlayingTogetherOverlay_C::Text_Waiting' has a wrong offset!");
static_assert(offsetof(UKeepPlayingTogetherOverlay_C, CachedErrorText) == 0x0003D0, "Member 'UKeepPlayingTogetherOverlay_C::CachedErrorText' has a wrong offset!");

}

