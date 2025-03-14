﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AthenaInventoryTabButton

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass AthenaInventoryTabButton.AthenaInventoryTabButton_C
// 0x00B0 (0x1130 - 0x1080)
class UAthenaInventoryTabButton_C final : public UFortTopBarTabTextIconButton
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x1080(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Hovered;                                           // 0x1088(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Selected;                                          // 0x1090(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class USizeBox*                               SizeBox_0;                                         // 0x1098(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               SizeBox_1;                                         // 0x10A0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               SizeBox_2;                                         // 0x10A8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           VerticalBox_0;                                     // 0x10B0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               MID_ButtonBorder;                                  // 0x10B8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          PreviewMobileStyle;                                // 0x10C0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_10C1[0x3];                                     // 0x10C1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFloatSpringState                      SpringState_ShapeChange;                           // 0x10C4(0x000C)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FFloatSpringState                      SpringState_Scale;                                 // 0x10D0(0x000C)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	float                                         Spring_Scale_Target;                               // 0x10DC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         MassMultiply;                                      // 0x10E0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         DampenMultiply;                                    // 0x10E4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         StiffnessMultiply;                                 // 0x10E8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          VisualSelectionState;                              // 0x10EC(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_10ED[0x3];                                     // 0x10ED(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         RandomFloat_Top;                                   // 0x10F0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         RandomFloat_Left;                                  // 0x10F4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         RandomFloat_Right;                                 // 0x10F8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         RandomFloat_Bottom;                                // 0x10FC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         ShapeChange_New;                                   // 0x1100(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         ShapeChange_Target;                                // 0x1104(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          UpdateSpring;                                      // 0x1108(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1109[0x7];                                     // 0x1109(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   ButtonText;                                        // 0x1110(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void BP_OnHovered();
	void BP_OnUnhovered();
	void Construct();
	void ExecuteUbergraph_AthenaInventoryTabButton(int32 EntryPoint);
	void HandleSelectionChangedVisuals(bool bIsSelected);
	void InitializeButtonBorderMID();
	void OnCurrentTextStyleChanged();
	void OnInitialized();
	void OnSelectedChangedEvent(class UCommonButtonLegacy* Button, bool Selected_0);
	void OverrideIcon(bool Show, const struct FSlateBrush& inSlateBrush);
	void PreConstruct(bool IsDesignTime);
	void SeedRandomValues();
	void SetText(const class FText& ButtonText_0);
	void UpdateMIDWithRandomValues();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AthenaInventoryTabButton_C">();
	}
	static class UAthenaInventoryTabButton_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAthenaInventoryTabButton_C>();
	}
};
static_assert(alignof(UAthenaInventoryTabButton_C) == 0x000010, "Wrong alignment on UAthenaInventoryTabButton_C");
static_assert(sizeof(UAthenaInventoryTabButton_C) == 0x001130, "Wrong size on UAthenaInventoryTabButton_C");
static_assert(offsetof(UAthenaInventoryTabButton_C, UberGraphFrame) == 0x001080, "Member 'UAthenaInventoryTabButton_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UAthenaInventoryTabButton_C, Hovered) == 0x001088, "Member 'UAthenaInventoryTabButton_C::Hovered' has a wrong offset!");
static_assert(offsetof(UAthenaInventoryTabButton_C, Selected) == 0x001090, "Member 'UAthenaInventoryTabButton_C::Selected' has a wrong offset!");
static_assert(offsetof(UAthenaInventoryTabButton_C, SizeBox_0) == 0x001098, "Member 'UAthenaInventoryTabButton_C::SizeBox_0' has a wrong offset!");
static_assert(offsetof(UAthenaInventoryTabButton_C, SizeBox_1) == 0x0010A0, "Member 'UAthenaInventoryTabButton_C::SizeBox_1' has a wrong offset!");
static_assert(offsetof(UAthenaInventoryTabButton_C, SizeBox_2) == 0x0010A8, "Member 'UAthenaInventoryTabButton_C::SizeBox_2' has a wrong offset!");
static_assert(offsetof(UAthenaInventoryTabButton_C, VerticalBox_0) == 0x0010B0, "Member 'UAthenaInventoryTabButton_C::VerticalBox_0' has a wrong offset!");
static_assert(offsetof(UAthenaInventoryTabButton_C, MID_ButtonBorder) == 0x0010B8, "Member 'UAthenaInventoryTabButton_C::MID_ButtonBorder' has a wrong offset!");
static_assert(offsetof(UAthenaInventoryTabButton_C, PreviewMobileStyle) == 0x0010C0, "Member 'UAthenaInventoryTabButton_C::PreviewMobileStyle' has a wrong offset!");
static_assert(offsetof(UAthenaInventoryTabButton_C, SpringState_ShapeChange) == 0x0010C4, "Member 'UAthenaInventoryTabButton_C::SpringState_ShapeChange' has a wrong offset!");
static_assert(offsetof(UAthenaInventoryTabButton_C, SpringState_Scale) == 0x0010D0, "Member 'UAthenaInventoryTabButton_C::SpringState_Scale' has a wrong offset!");
static_assert(offsetof(UAthenaInventoryTabButton_C, Spring_Scale_Target) == 0x0010DC, "Member 'UAthenaInventoryTabButton_C::Spring_Scale_Target' has a wrong offset!");
static_assert(offsetof(UAthenaInventoryTabButton_C, MassMultiply) == 0x0010E0, "Member 'UAthenaInventoryTabButton_C::MassMultiply' has a wrong offset!");
static_assert(offsetof(UAthenaInventoryTabButton_C, DampenMultiply) == 0x0010E4, "Member 'UAthenaInventoryTabButton_C::DampenMultiply' has a wrong offset!");
static_assert(offsetof(UAthenaInventoryTabButton_C, StiffnessMultiply) == 0x0010E8, "Member 'UAthenaInventoryTabButton_C::StiffnessMultiply' has a wrong offset!");
static_assert(offsetof(UAthenaInventoryTabButton_C, VisualSelectionState) == 0x0010EC, "Member 'UAthenaInventoryTabButton_C::VisualSelectionState' has a wrong offset!");
static_assert(offsetof(UAthenaInventoryTabButton_C, RandomFloat_Top) == 0x0010F0, "Member 'UAthenaInventoryTabButton_C::RandomFloat_Top' has a wrong offset!");
static_assert(offsetof(UAthenaInventoryTabButton_C, RandomFloat_Left) == 0x0010F4, "Member 'UAthenaInventoryTabButton_C::RandomFloat_Left' has a wrong offset!");
static_assert(offsetof(UAthenaInventoryTabButton_C, RandomFloat_Right) == 0x0010F8, "Member 'UAthenaInventoryTabButton_C::RandomFloat_Right' has a wrong offset!");
static_assert(offsetof(UAthenaInventoryTabButton_C, RandomFloat_Bottom) == 0x0010FC, "Member 'UAthenaInventoryTabButton_C::RandomFloat_Bottom' has a wrong offset!");
static_assert(offsetof(UAthenaInventoryTabButton_C, ShapeChange_New) == 0x001100, "Member 'UAthenaInventoryTabButton_C::ShapeChange_New' has a wrong offset!");
static_assert(offsetof(UAthenaInventoryTabButton_C, ShapeChange_Target) == 0x001104, "Member 'UAthenaInventoryTabButton_C::ShapeChange_Target' has a wrong offset!");
static_assert(offsetof(UAthenaInventoryTabButton_C, UpdateSpring) == 0x001108, "Member 'UAthenaInventoryTabButton_C::UpdateSpring' has a wrong offset!");
static_assert(offsetof(UAthenaInventoryTabButton_C, ButtonText) == 0x001110, "Member 'UAthenaInventoryTabButton_C::ButtonText' has a wrong offset!");

}

