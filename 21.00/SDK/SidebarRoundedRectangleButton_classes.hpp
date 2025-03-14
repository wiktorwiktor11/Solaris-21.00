﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SidebarRoundedRectangleButton

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass SidebarRoundedRectangleButton.SidebarRoundedRectangleButton_C
// 0x0030 (0x1180 - 0x1150)
class USidebarRoundedRectangleButton_C final : public UFortMainMenuButton
{
public:
	uint8                                         Pad_1148[0x8];                                     // 0x1148(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x1150(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Hovered;                                           // 0x1158(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UBorder*                                ButtonBackground;                                  // 0x1160(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNamedSlot*                             SubSlot;                                           // 0x1168(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMaterialInterface*                     ButtonMaterial;                                    // 0x1170(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void BP_OnHovered();
	void BP_OnUnhovered();
	void ExecuteUbergraph_SidebarRoundedRectangleButton(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SidebarRoundedRectangleButton_C">();
	}
	static class USidebarRoundedRectangleButton_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USidebarRoundedRectangleButton_C>();
	}
};
static_assert(alignof(USidebarRoundedRectangleButton_C) == 0x000010, "Wrong alignment on USidebarRoundedRectangleButton_C");
static_assert(sizeof(USidebarRoundedRectangleButton_C) == 0x001180, "Wrong size on USidebarRoundedRectangleButton_C");
static_assert(offsetof(USidebarRoundedRectangleButton_C, UberGraphFrame) == 0x001150, "Member 'USidebarRoundedRectangleButton_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(USidebarRoundedRectangleButton_C, Hovered) == 0x001158, "Member 'USidebarRoundedRectangleButton_C::Hovered' has a wrong offset!");
static_assert(offsetof(USidebarRoundedRectangleButton_C, ButtonBackground) == 0x001160, "Member 'USidebarRoundedRectangleButton_C::ButtonBackground' has a wrong offset!");
static_assert(offsetof(USidebarRoundedRectangleButton_C, SubSlot) == 0x001168, "Member 'USidebarRoundedRectangleButton_C::SubSlot' has a wrong offset!");
static_assert(offsetof(USidebarRoundedRectangleButton_C, ButtonMaterial) == 0x001170, "Member 'USidebarRoundedRectangleButton_C::ButtonMaterial' has a wrong offset!");

}

