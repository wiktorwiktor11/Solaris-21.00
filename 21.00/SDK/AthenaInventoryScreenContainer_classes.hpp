﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AthenaInventoryScreenContainer

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"
#include "UMG_structs.hpp"
#include "AthenaDragDropAction_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass AthenaInventoryScreenContainer.AthenaInventoryScreenContainer_C
// 0x0048 (0x05F8 - 0x05B0)
class UAthenaInventoryScreenContainer_C final : public UAthenaInventoryScreenContainer
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x05B0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       FadeScreenFill;                                    // 0x05B8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       IntroPanel;                                        // 0x05C0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UAthenaInventoryPanelContainer_C*       AthenaInventoryPanelContainer;                     // 0x05C8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBackgroundBlur*                        BackgroundBlur_Header;                             // 0x05D0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 HeaderBackground;                                  // 0x05D8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_FarBackPlate;                                // 0x05E0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               Overlay_HeaderBacking;                             // 0x05E8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ScreenFIll;                                        // 0x05F0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void BndEvt__TabsMajor_K2Node_ComponentBoundEvent_0_OnTabSelected__DelegateSignature(class FName TabId);
	void BP_OnActivated();
	void BP_OnDeactivated();
	void ExecuteUbergraph_AthenaInventoryScreenContainer(int32 EntryPoint);
	void IsDragItemDroppable(class UDragDropOperation* DragDropOperation, bool* bIsDroppable);
	bool OnDragOver(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation);
	bool OnDrop(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation);
	void OnInitialized();
	void UpdateHeaderStyle();

	class UAthenaInventoryPanelContainer* GetPlayerInventoryWidget() const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AthenaInventoryScreenContainer_C">();
	}
	static class UAthenaInventoryScreenContainer_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAthenaInventoryScreenContainer_C>();
	}
};
static_assert(alignof(UAthenaInventoryScreenContainer_C) == 0x000008, "Wrong alignment on UAthenaInventoryScreenContainer_C");
static_assert(sizeof(UAthenaInventoryScreenContainer_C) == 0x0005F8, "Wrong size on UAthenaInventoryScreenContainer_C");
static_assert(offsetof(UAthenaInventoryScreenContainer_C, UberGraphFrame) == 0x0005B0, "Member 'UAthenaInventoryScreenContainer_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UAthenaInventoryScreenContainer_C, FadeScreenFill) == 0x0005B8, "Member 'UAthenaInventoryScreenContainer_C::FadeScreenFill' has a wrong offset!");
static_assert(offsetof(UAthenaInventoryScreenContainer_C, IntroPanel) == 0x0005C0, "Member 'UAthenaInventoryScreenContainer_C::IntroPanel' has a wrong offset!");
static_assert(offsetof(UAthenaInventoryScreenContainer_C, AthenaInventoryPanelContainer) == 0x0005C8, "Member 'UAthenaInventoryScreenContainer_C::AthenaInventoryPanelContainer' has a wrong offset!");
static_assert(offsetof(UAthenaInventoryScreenContainer_C, BackgroundBlur_Header) == 0x0005D0, "Member 'UAthenaInventoryScreenContainer_C::BackgroundBlur_Header' has a wrong offset!");
static_assert(offsetof(UAthenaInventoryScreenContainer_C, HeaderBackground) == 0x0005D8, "Member 'UAthenaInventoryScreenContainer_C::HeaderBackground' has a wrong offset!");
static_assert(offsetof(UAthenaInventoryScreenContainer_C, Image_FarBackPlate) == 0x0005E0, "Member 'UAthenaInventoryScreenContainer_C::Image_FarBackPlate' has a wrong offset!");
static_assert(offsetof(UAthenaInventoryScreenContainer_C, Overlay_HeaderBacking) == 0x0005E8, "Member 'UAthenaInventoryScreenContainer_C::Overlay_HeaderBacking' has a wrong offset!");
static_assert(offsetof(UAthenaInventoryScreenContainer_C, ScreenFIll) == 0x0005F0, "Member 'UAthenaInventoryScreenContainer_C::ScreenFIll' has a wrong offset!");

}

