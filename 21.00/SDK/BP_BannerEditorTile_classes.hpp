﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_BannerEditorTile

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass BP_BannerEditorTile.BP_BannerEditorTile_C
// 0x0050 (0x1090 - 0x1040)
class UBP_BannerEditorTile_C final : public UFortPlayerProfileBannerEditorTile
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x1040(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 ColorImage;                                        // 0x1048(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonWidgetSwitcherLegacy*            CommonWidgetSwitcher_0;                            // 0x1050(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 IconImage;                                         // 0x1058(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonLoadGuard*                       IconLoadGuard;                                     // 0x1060(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_BannerEditBorder;                            // 0x1068(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNormalBangWrapper_C*                   NormalBangWrapper;                                 // 0x1070(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               ColorMID;                                          // 0x1078(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TMulticastInlineDelegate<void()>              BannerTileBangUpdated;                             // 0x1080(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void BP_OnHovered();
	void BP_OnSelected();
	void Construct();
	void ExecuteUbergraph_BP_BannerEditorTile(int32 EntryPoint);
	void HandleBannerIconLoadGuardFinished(class UObject* Object);
	void Mark_Item_As_Seen();
	void OnListItemObjectSet(class UObject* ListItemObject);
	void Update_Bang_State();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_BannerEditorTile_C">();
	}
	static class UBP_BannerEditorTile_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_BannerEditorTile_C>();
	}
};
static_assert(alignof(UBP_BannerEditorTile_C) == 0x000010, "Wrong alignment on UBP_BannerEditorTile_C");
static_assert(sizeof(UBP_BannerEditorTile_C) == 0x001090, "Wrong size on UBP_BannerEditorTile_C");
static_assert(offsetof(UBP_BannerEditorTile_C, UberGraphFrame) == 0x001040, "Member 'UBP_BannerEditorTile_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_BannerEditorTile_C, ColorImage) == 0x001048, "Member 'UBP_BannerEditorTile_C::ColorImage' has a wrong offset!");
static_assert(offsetof(UBP_BannerEditorTile_C, CommonWidgetSwitcher_0) == 0x001050, "Member 'UBP_BannerEditorTile_C::CommonWidgetSwitcher_0' has a wrong offset!");
static_assert(offsetof(UBP_BannerEditorTile_C, IconImage) == 0x001058, "Member 'UBP_BannerEditorTile_C::IconImage' has a wrong offset!");
static_assert(offsetof(UBP_BannerEditorTile_C, IconLoadGuard) == 0x001060, "Member 'UBP_BannerEditorTile_C::IconLoadGuard' has a wrong offset!");
static_assert(offsetof(UBP_BannerEditorTile_C, Image_BannerEditBorder) == 0x001068, "Member 'UBP_BannerEditorTile_C::Image_BannerEditBorder' has a wrong offset!");
static_assert(offsetof(UBP_BannerEditorTile_C, NormalBangWrapper) == 0x001070, "Member 'UBP_BannerEditorTile_C::NormalBangWrapper' has a wrong offset!");
static_assert(offsetof(UBP_BannerEditorTile_C, ColorMID) == 0x001078, "Member 'UBP_BannerEditorTile_C::ColorMID' has a wrong offset!");
static_assert(offsetof(UBP_BannerEditorTile_C, BannerTileBangUpdated) == 0x001080, "Member 'UBP_BannerEditorTile_C::BannerTileBangUpdated' has a wrong offset!");

}

