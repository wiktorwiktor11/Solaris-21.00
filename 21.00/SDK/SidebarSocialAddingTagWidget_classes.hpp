﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SidebarSocialAddingTagWidget

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CommonUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass SidebarSocialAddingTagWidget.SidebarSocialAddingTagWidget_C
// 0x0048 (0x0328 - 0x02E0)
class USidebarSocialAddingTagWidget_C final : public UCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02E0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       AddingTag;                                         // 0x02E8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UBorder*                                Border_AddingTagBorder;                            // 0x02F0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_AddingTagArrow;                              // 0x02F8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               Overlay_AddingTag;                                 // 0x0300(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       Text_AddingTagName;                                // 0x0308(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FString                                 TagCategory_AddTag;                                // 0x0310(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	class FName                                   Name_InnerColor;                                   // 0x0320(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   OuterColor;                                        // 0x0324(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void Construct();
	void EventSetTag();
	void ExecuteUbergraph_SidebarSocialAddingTagWidget(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SidebarSocialAddingTagWidget_C">();
	}
	static class USidebarSocialAddingTagWidget_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USidebarSocialAddingTagWidget_C>();
	}
};
static_assert(alignof(USidebarSocialAddingTagWidget_C) == 0x000008, "Wrong alignment on USidebarSocialAddingTagWidget_C");
static_assert(sizeof(USidebarSocialAddingTagWidget_C) == 0x000328, "Wrong size on USidebarSocialAddingTagWidget_C");
static_assert(offsetof(USidebarSocialAddingTagWidget_C, UberGraphFrame) == 0x0002E0, "Member 'USidebarSocialAddingTagWidget_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(USidebarSocialAddingTagWidget_C, AddingTag) == 0x0002E8, "Member 'USidebarSocialAddingTagWidget_C::AddingTag' has a wrong offset!");
static_assert(offsetof(USidebarSocialAddingTagWidget_C, Border_AddingTagBorder) == 0x0002F0, "Member 'USidebarSocialAddingTagWidget_C::Border_AddingTagBorder' has a wrong offset!");
static_assert(offsetof(USidebarSocialAddingTagWidget_C, Image_AddingTagArrow) == 0x0002F8, "Member 'USidebarSocialAddingTagWidget_C::Image_AddingTagArrow' has a wrong offset!");
static_assert(offsetof(USidebarSocialAddingTagWidget_C, Overlay_AddingTag) == 0x000300, "Member 'USidebarSocialAddingTagWidget_C::Overlay_AddingTag' has a wrong offset!");
static_assert(offsetof(USidebarSocialAddingTagWidget_C, Text_AddingTagName) == 0x000308, "Member 'USidebarSocialAddingTagWidget_C::Text_AddingTagName' has a wrong offset!");
static_assert(offsetof(USidebarSocialAddingTagWidget_C, TagCategory_AddTag) == 0x000310, "Member 'USidebarSocialAddingTagWidget_C::TagCategory_AddTag' has a wrong offset!");
static_assert(offsetof(USidebarSocialAddingTagWidget_C, Name_InnerColor) == 0x000320, "Member 'USidebarSocialAddingTagWidget_C::Name_InnerColor' has a wrong offset!");
static_assert(offsetof(USidebarSocialAddingTagWidget_C, OuterColor) == 0x000324, "Member 'USidebarSocialAddingTagWidget_C::OuterColor' has a wrong offset!");

}

