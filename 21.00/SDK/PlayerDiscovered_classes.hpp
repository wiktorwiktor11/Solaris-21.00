﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PlayerDiscovered

#include "Basic.hpp"

#include "GameplayTags_structs.hpp"
#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass PlayerDiscovered.PlayerDiscovered_C
// 0x0078 (0x03F0 - 0x0378)
class UPlayerDiscovered_C final : public UAthenaDiscoveredAreaOverlay
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0378(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       BriefShow;                                         // 0x0380(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UCommonTextBlock*                       CommonTextBlock_LandmarkName;                      // 0x0388(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_BulletLeft;                                  // 0x0390(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_BulletRight;                                 // 0x0398(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           MainBox;                                           // 0x03A0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           MainBox_Landmark;                                  // 0x03A8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       MainLocationText;                                  // 0x03B0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       MainLocationText_1;                                // 0x03B8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               Overlay_Container;                                 // 0x03C0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        WidgetSwitcher_LandmarkOrPOI;                      // 0x03C8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FGameplayTagContainer                  RelevantPlaylistTags;                              // 0x03D0(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void Play_Brief_Show_Sound();
	void OnStompFailed();
	void OnStompedByOtherWidget();
	void K2_OnBecomeActive();
	void OnNewDiscovery(const class FText& LocalizedLocationName, bool bIsNamedLocation);
	void ExecuteUbergraph_PlayerDiscovered(int32 EntryPoint);
	void EndOfShow();
	void Construct();
	void Brief_Show_Finished();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"PlayerDiscovered_C">();
	}
	static class UPlayerDiscovered_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPlayerDiscovered_C>();
	}
};
static_assert(alignof(UPlayerDiscovered_C) == 0x000008, "Wrong alignment on UPlayerDiscovered_C");
static_assert(sizeof(UPlayerDiscovered_C) == 0x0003F0, "Wrong size on UPlayerDiscovered_C");
static_assert(offsetof(UPlayerDiscovered_C, UberGraphFrame) == 0x000378, "Member 'UPlayerDiscovered_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UPlayerDiscovered_C, BriefShow) == 0x000380, "Member 'UPlayerDiscovered_C::BriefShow' has a wrong offset!");
static_assert(offsetof(UPlayerDiscovered_C, CommonTextBlock_LandmarkName) == 0x000388, "Member 'UPlayerDiscovered_C::CommonTextBlock_LandmarkName' has a wrong offset!");
static_assert(offsetof(UPlayerDiscovered_C, Image_BulletLeft) == 0x000390, "Member 'UPlayerDiscovered_C::Image_BulletLeft' has a wrong offset!");
static_assert(offsetof(UPlayerDiscovered_C, Image_BulletRight) == 0x000398, "Member 'UPlayerDiscovered_C::Image_BulletRight' has a wrong offset!");
static_assert(offsetof(UPlayerDiscovered_C, MainBox) == 0x0003A0, "Member 'UPlayerDiscovered_C::MainBox' has a wrong offset!");
static_assert(offsetof(UPlayerDiscovered_C, MainBox_Landmark) == 0x0003A8, "Member 'UPlayerDiscovered_C::MainBox_Landmark' has a wrong offset!");
static_assert(offsetof(UPlayerDiscovered_C, MainLocationText) == 0x0003B0, "Member 'UPlayerDiscovered_C::MainLocationText' has a wrong offset!");
static_assert(offsetof(UPlayerDiscovered_C, MainLocationText_1) == 0x0003B8, "Member 'UPlayerDiscovered_C::MainLocationText_1' has a wrong offset!");
static_assert(offsetof(UPlayerDiscovered_C, Overlay_Container) == 0x0003C0, "Member 'UPlayerDiscovered_C::Overlay_Container' has a wrong offset!");
static_assert(offsetof(UPlayerDiscovered_C, WidgetSwitcher_LandmarkOrPOI) == 0x0003C8, "Member 'UPlayerDiscovered_C::WidgetSwitcher_LandmarkOrPOI' has a wrong offset!");
static_assert(offsetof(UPlayerDiscovered_C, RelevantPlaylistTags) == 0x0003D0, "Member 'UPlayerDiscovered_C::RelevantPlaylistTags' has a wrong offset!");

}

