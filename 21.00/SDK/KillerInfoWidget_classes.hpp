﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: KillerInfoWidget

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"
#include "FortniteGame_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass KillerInfoWidget.KillerInfoWidget_C
// 0x0048 (0x0580 - 0x0538)
class UKillerInfoWidget_C final : public UAthenaLastKillerInfoWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0538(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UKillerHealthAndShield_C*               KillerHealthAndShield;                             // 0x0540(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UKillerInfoWeaponWidget_C*              KillerInfoWeaponWidget;                            // 0x0548(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UKillerKillsWidget_C*                   KillerKillsWidget;                                 // 0x0550(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           KillerNameVertBox;                                 // 0x0558(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               SizeBox_0;                                         // 0x0560(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               StatusOverlay;                                     // 0x0568(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       Text_KillerName;                                   // 0x0570(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Text_UserId;                                       // 0x0578(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void BP_HandleExtensionWidgetCreated(class UUserWidget* Widget, EUIExtensionSlot SlotType);
	void ExecuteUbergraph_KillerInfoWidget(int32 EntryPoint);
	void SetKillerHealthAndShield(float HealthPercent, float ShieldPercent, float OvershieldPercent);
	void SetKillerName(const class FString& PlayerName, const class FString& PlayerId);
	void SetKillerWeaponIconAndName(class UTexture2D* IconTexture, const class UFortWeaponItemDefinition* ItemDef);
	void SetNumOfKillerKills(int32 NumOfKillers);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"KillerInfoWidget_C">();
	}
	static class UKillerInfoWidget_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UKillerInfoWidget_C>();
	}
};
static_assert(alignof(UKillerInfoWidget_C) == 0x000008, "Wrong alignment on UKillerInfoWidget_C");
static_assert(sizeof(UKillerInfoWidget_C) == 0x000580, "Wrong size on UKillerInfoWidget_C");
static_assert(offsetof(UKillerInfoWidget_C, UberGraphFrame) == 0x000538, "Member 'UKillerInfoWidget_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UKillerInfoWidget_C, KillerHealthAndShield) == 0x000540, "Member 'UKillerInfoWidget_C::KillerHealthAndShield' has a wrong offset!");
static_assert(offsetof(UKillerInfoWidget_C, KillerInfoWeaponWidget) == 0x000548, "Member 'UKillerInfoWidget_C::KillerInfoWeaponWidget' has a wrong offset!");
static_assert(offsetof(UKillerInfoWidget_C, KillerKillsWidget) == 0x000550, "Member 'UKillerInfoWidget_C::KillerKillsWidget' has a wrong offset!");
static_assert(offsetof(UKillerInfoWidget_C, KillerNameVertBox) == 0x000558, "Member 'UKillerInfoWidget_C::KillerNameVertBox' has a wrong offset!");
static_assert(offsetof(UKillerInfoWidget_C, SizeBox_0) == 0x000560, "Member 'UKillerInfoWidget_C::SizeBox_0' has a wrong offset!");
static_assert(offsetof(UKillerInfoWidget_C, StatusOverlay) == 0x000568, "Member 'UKillerInfoWidget_C::StatusOverlay' has a wrong offset!");
static_assert(offsetof(UKillerInfoWidget_C, Text_KillerName) == 0x000570, "Member 'UKillerInfoWidget_C::Text_KillerName' has a wrong offset!");
static_assert(offsetof(UKillerInfoWidget_C, Text_UserId) == 0x000578, "Member 'UKillerInfoWidget_C::Text_UserId' has a wrong offset!");

}

