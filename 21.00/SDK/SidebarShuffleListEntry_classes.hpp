﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SidebarShuffleListEntry

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SocialUMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass SidebarShuffleListEntry.SidebarShuffleListEntry_C
// 0x0050 (0x10A0 - 0x1050)
class USidebarShuffleListEntry_C final : public USocialListInteractableEntryBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x1050(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Selected;                                          // 0x1058(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Hovered;                                           // 0x1060(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UBorder*                                AnimatedInputBorder;                               // 0x1068(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Arrow;                                             // 0x1070(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                      EmptyButtonToEatOneMouseUpEvent;                   // 0x1078(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                                EntryBorder;                                       // 0x1080(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonRichTextBlock*                   Text_ShuffleText;                                  // 0x1088(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUserActionMenuInputButton_C*           UserActionMenuInputButton;                         // 0x1090(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void BndEvt__MenuAnchor_Actions_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature(bool bIsOpen);
	void BP_OnHovered();
	void BP_OnUnhovered();
	void ExecuteUbergraph_SidebarShuffleListEntry(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SidebarShuffleListEntry_C">();
	}
	static class USidebarShuffleListEntry_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USidebarShuffleListEntry_C>();
	}
};
static_assert(alignof(USidebarShuffleListEntry_C) == 0x000010, "Wrong alignment on USidebarShuffleListEntry_C");
static_assert(sizeof(USidebarShuffleListEntry_C) == 0x0010A0, "Wrong size on USidebarShuffleListEntry_C");
static_assert(offsetof(USidebarShuffleListEntry_C, UberGraphFrame) == 0x001050, "Member 'USidebarShuffleListEntry_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(USidebarShuffleListEntry_C, Selected) == 0x001058, "Member 'USidebarShuffleListEntry_C::Selected' has a wrong offset!");
static_assert(offsetof(USidebarShuffleListEntry_C, Hovered) == 0x001060, "Member 'USidebarShuffleListEntry_C::Hovered' has a wrong offset!");
static_assert(offsetof(USidebarShuffleListEntry_C, AnimatedInputBorder) == 0x001068, "Member 'USidebarShuffleListEntry_C::AnimatedInputBorder' has a wrong offset!");
static_assert(offsetof(USidebarShuffleListEntry_C, Arrow) == 0x001070, "Member 'USidebarShuffleListEntry_C::Arrow' has a wrong offset!");
static_assert(offsetof(USidebarShuffleListEntry_C, EmptyButtonToEatOneMouseUpEvent) == 0x001078, "Member 'USidebarShuffleListEntry_C::EmptyButtonToEatOneMouseUpEvent' has a wrong offset!");
static_assert(offsetof(USidebarShuffleListEntry_C, EntryBorder) == 0x001080, "Member 'USidebarShuffleListEntry_C::EntryBorder' has a wrong offset!");
static_assert(offsetof(USidebarShuffleListEntry_C, Text_ShuffleText) == 0x001088, "Member 'USidebarShuffleListEntry_C::Text_ShuffleText' has a wrong offset!");
static_assert(offsetof(USidebarShuffleListEntry_C, UserActionMenuInputButton) == 0x001090, "Member 'USidebarShuffleListEntry_C::UserActionMenuInputButton' has a wrong offset!");

}

