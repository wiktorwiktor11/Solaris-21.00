﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PopupCenterMessageModalPanel

#include "Basic.hpp"

#include "FortniteUI_structs.hpp"
#include "FortniteUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass PopupCenterMessageModalPanel.PopupCenterMessageModalPanel_C
// 0x0040 (0x05B0 - 0x0570)
class UPopupCenterMessageModalPanel_C final : public UFortPopUpCenterMessageModalPanel
{
public:
	class UCommonTextBlock*                       CenterMessageText;                                 // 0x0570(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               MessageOverlay;                                    // 0x0578(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                   WaitingForPlayersText;                             // 0x0580(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                   WaitingForOutpostOwnerText;                        // 0x0598(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void LeaveZone();
	void UpdateState(ECenterPopupMessageStateEnum NewState);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"PopupCenterMessageModalPanel_C">();
	}
	static class UPopupCenterMessageModalPanel_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPopupCenterMessageModalPanel_C>();
	}
};
static_assert(alignof(UPopupCenterMessageModalPanel_C) == 0x000008, "Wrong alignment on UPopupCenterMessageModalPanel_C");
static_assert(sizeof(UPopupCenterMessageModalPanel_C) == 0x0005B0, "Wrong size on UPopupCenterMessageModalPanel_C");
static_assert(offsetof(UPopupCenterMessageModalPanel_C, CenterMessageText) == 0x000570, "Member 'UPopupCenterMessageModalPanel_C::CenterMessageText' has a wrong offset!");
static_assert(offsetof(UPopupCenterMessageModalPanel_C, MessageOverlay) == 0x000578, "Member 'UPopupCenterMessageModalPanel_C::MessageOverlay' has a wrong offset!");
static_assert(offsetof(UPopupCenterMessageModalPanel_C, WaitingForPlayersText) == 0x000580, "Member 'UPopupCenterMessageModalPanel_C::WaitingForPlayersText' has a wrong offset!");
static_assert(offsetof(UPopupCenterMessageModalPanel_C, WaitingForOutpostOwnerText) == 0x000598, "Member 'UPopupCenterMessageModalPanel_C::WaitingForOutpostOwnerText' has a wrong offset!");

}

