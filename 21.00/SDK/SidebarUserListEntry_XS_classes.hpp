﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SidebarUserListEntry_XS

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass SidebarUserListEntry_XS.SidebarUserListEntry_XS_C
// 0x0090 (0x1160 - 0x10D0)
class USidebarUserListEntry_XS_C final : public UFortSocialUserListEntry
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x10D0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Unhovered;                                         // 0x10D8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Selected;                                          // 0x10E0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Hovered;                                           // 0x10E8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UIconTextButton_C*                      EmptyButtonToEatOneMouseUpEvent;                   // 0x10F0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScaleBox*                              ScaleBox_1;                                        // 0x10F8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonActivatableWidgetSwitcher*       Switcher_LastInteraction;                          // 0x1100(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonActivatableWidgetSwitcher*       Switcher_RichPresence;                             // 0x1108(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonActivatableWidgetSwitcher*       Switcher_SocialName;                               // 0x1110(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonRichTextBlock*                   Text_DisplayName;                                  // 0x1118(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUserActionMenuInputButton_C*           UserActionMenuInputButton;                         // 0x1120(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FLinearColor                           EncourageEpicFriend_IdleColor;                     // 0x1128(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           EncourageEpicFriend_HoveredColor;                  // 0x1138(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class USocialTagWidget*>               SidebarSocialTagWidgetArray;                       // 0x1148(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)

public:
	void BndEvt__MenuAnchor_Actions_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature(bool bIsOpen);
	void BP_OnHovered();
	void BP_OnUnhovered();
	void Construct();
	void ExecuteUbergraph_SidebarUserListEntry_XS(int32 EntryPoint);
	void OnFocusLost(const struct FFocusEvent& InFocusEvent);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SidebarUserListEntry_XS_C">();
	}
	static class USidebarUserListEntry_XS_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USidebarUserListEntry_XS_C>();
	}
};
static_assert(alignof(USidebarUserListEntry_XS_C) == 0x000010, "Wrong alignment on USidebarUserListEntry_XS_C");
static_assert(sizeof(USidebarUserListEntry_XS_C) == 0x001160, "Wrong size on USidebarUserListEntry_XS_C");
static_assert(offsetof(USidebarUserListEntry_XS_C, UberGraphFrame) == 0x0010D0, "Member 'USidebarUserListEntry_XS_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(USidebarUserListEntry_XS_C, Unhovered) == 0x0010D8, "Member 'USidebarUserListEntry_XS_C::Unhovered' has a wrong offset!");
static_assert(offsetof(USidebarUserListEntry_XS_C, Selected) == 0x0010E0, "Member 'USidebarUserListEntry_XS_C::Selected' has a wrong offset!");
static_assert(offsetof(USidebarUserListEntry_XS_C, Hovered) == 0x0010E8, "Member 'USidebarUserListEntry_XS_C::Hovered' has a wrong offset!");
static_assert(offsetof(USidebarUserListEntry_XS_C, EmptyButtonToEatOneMouseUpEvent) == 0x0010F0, "Member 'USidebarUserListEntry_XS_C::EmptyButtonToEatOneMouseUpEvent' has a wrong offset!");
static_assert(offsetof(USidebarUserListEntry_XS_C, ScaleBox_1) == 0x0010F8, "Member 'USidebarUserListEntry_XS_C::ScaleBox_1' has a wrong offset!");
static_assert(offsetof(USidebarUserListEntry_XS_C, Switcher_LastInteraction) == 0x001100, "Member 'USidebarUserListEntry_XS_C::Switcher_LastInteraction' has a wrong offset!");
static_assert(offsetof(USidebarUserListEntry_XS_C, Switcher_RichPresence) == 0x001108, "Member 'USidebarUserListEntry_XS_C::Switcher_RichPresence' has a wrong offset!");
static_assert(offsetof(USidebarUserListEntry_XS_C, Switcher_SocialName) == 0x001110, "Member 'USidebarUserListEntry_XS_C::Switcher_SocialName' has a wrong offset!");
static_assert(offsetof(USidebarUserListEntry_XS_C, Text_DisplayName) == 0x001118, "Member 'USidebarUserListEntry_XS_C::Text_DisplayName' has a wrong offset!");
static_assert(offsetof(USidebarUserListEntry_XS_C, UserActionMenuInputButton) == 0x001120, "Member 'USidebarUserListEntry_XS_C::UserActionMenuInputButton' has a wrong offset!");
static_assert(offsetof(USidebarUserListEntry_XS_C, EncourageEpicFriend_IdleColor) == 0x001128, "Member 'USidebarUserListEntry_XS_C::EncourageEpicFriend_IdleColor' has a wrong offset!");
static_assert(offsetof(USidebarUserListEntry_XS_C, EncourageEpicFriend_HoveredColor) == 0x001138, "Member 'USidebarUserListEntry_XS_C::EncourageEpicFriend_HoveredColor' has a wrong offset!");
static_assert(offsetof(USidebarUserListEntry_XS_C, SidebarSocialTagWidgetArray) == 0x001148, "Member 'USidebarUserListEntry_XS_C::SidebarSocialTagWidgetArray' has a wrong offset!");

}

