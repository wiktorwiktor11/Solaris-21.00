﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MultiInteractDisplayWidget

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CommonUI_classes.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass MultiInteractDisplayWidget.MultiInteractDisplayWidget_C
// 0x0050 (0x0330 - 0x02E0)
class UMultiInteractDisplayWidget_C final : public UCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02E0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 InteractIcon;                                      // 0x02E8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 InteractIcon_1;                                    // 0x02F0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 InteractIcon2;                                     // 0x02F8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 InteractIcon3;                                     // 0x0300(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 InteractIcon4;                                     // 0x0308(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         Interaction_HBox;                                  // 0x0310(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       Text_InteractionCount;                             // 0x0318(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonVisibilitySwitcher*              VisibilitySwitcher;                                // 0x0320(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          bTextVersion;                                      // 0x0328(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

public:
	void CheckSquadSize();
	void Construct();
	void CurrentInteractionCount(int32 CurrentCount);
	void ExecuteUbergraph_MultiInteractDisplayWidget(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"MultiInteractDisplayWidget_C">();
	}
	static class UMultiInteractDisplayWidget_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMultiInteractDisplayWidget_C>();
	}
};
static_assert(alignof(UMultiInteractDisplayWidget_C) == 0x000008, "Wrong alignment on UMultiInteractDisplayWidget_C");
static_assert(sizeof(UMultiInteractDisplayWidget_C) == 0x000330, "Wrong size on UMultiInteractDisplayWidget_C");
static_assert(offsetof(UMultiInteractDisplayWidget_C, UberGraphFrame) == 0x0002E0, "Member 'UMultiInteractDisplayWidget_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UMultiInteractDisplayWidget_C, InteractIcon) == 0x0002E8, "Member 'UMultiInteractDisplayWidget_C::InteractIcon' has a wrong offset!");
static_assert(offsetof(UMultiInteractDisplayWidget_C, InteractIcon_1) == 0x0002F0, "Member 'UMultiInteractDisplayWidget_C::InteractIcon_1' has a wrong offset!");
static_assert(offsetof(UMultiInteractDisplayWidget_C, InteractIcon2) == 0x0002F8, "Member 'UMultiInteractDisplayWidget_C::InteractIcon2' has a wrong offset!");
static_assert(offsetof(UMultiInteractDisplayWidget_C, InteractIcon3) == 0x000300, "Member 'UMultiInteractDisplayWidget_C::InteractIcon3' has a wrong offset!");
static_assert(offsetof(UMultiInteractDisplayWidget_C, InteractIcon4) == 0x000308, "Member 'UMultiInteractDisplayWidget_C::InteractIcon4' has a wrong offset!");
static_assert(offsetof(UMultiInteractDisplayWidget_C, Interaction_HBox) == 0x000310, "Member 'UMultiInteractDisplayWidget_C::Interaction_HBox' has a wrong offset!");
static_assert(offsetof(UMultiInteractDisplayWidget_C, Text_InteractionCount) == 0x000318, "Member 'UMultiInteractDisplayWidget_C::Text_InteractionCount' has a wrong offset!");
static_assert(offsetof(UMultiInteractDisplayWidget_C, VisibilitySwitcher) == 0x000320, "Member 'UMultiInteractDisplayWidget_C::VisibilitySwitcher' has a wrong offset!");
static_assert(offsetof(UMultiInteractDisplayWidget_C, bTextVersion) == 0x000328, "Member 'UMultiInteractDisplayWidget_C::bTextVersion' has a wrong offset!");

}

