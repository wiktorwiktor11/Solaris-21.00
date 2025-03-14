﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SubscriptionGiftBoxHeader

#include "Basic.hpp"

#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass SubscriptionGiftBoxHeader.SubscriptionGiftBoxHeader_C
// 0x0020 (0x02D8 - 0x02B8)
class USubscriptionGiftBoxHeader_C final : public UUserWidget
{
public:
	class UImage*                                 Badge_1;                                           // 0x02B8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonRichTextBlock*                   CommonRichTextBlock_41;                            // 0x02C0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_46;                                          // 0x02C8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Skin_Text_Bullet;                                  // 0x02D0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SubscriptionGiftBoxHeader_C">();
	}
	static class USubscriptionGiftBoxHeader_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USubscriptionGiftBoxHeader_C>();
	}
};
static_assert(alignof(USubscriptionGiftBoxHeader_C) == 0x000008, "Wrong alignment on USubscriptionGiftBoxHeader_C");
static_assert(sizeof(USubscriptionGiftBoxHeader_C) == 0x0002D8, "Wrong size on USubscriptionGiftBoxHeader_C");
static_assert(offsetof(USubscriptionGiftBoxHeader_C, Badge_1) == 0x0002B8, "Member 'USubscriptionGiftBoxHeader_C::Badge_1' has a wrong offset!");
static_assert(offsetof(USubscriptionGiftBoxHeader_C, CommonRichTextBlock_41) == 0x0002C0, "Member 'USubscriptionGiftBoxHeader_C::CommonRichTextBlock_41' has a wrong offset!");
static_assert(offsetof(USubscriptionGiftBoxHeader_C, Image_46) == 0x0002C8, "Member 'USubscriptionGiftBoxHeader_C::Image_46' has a wrong offset!");
static_assert(offsetof(USubscriptionGiftBoxHeader_C, Skin_Text_Bullet) == 0x0002D0, "Member 'USubscriptionGiftBoxHeader_C::Skin_Text_Bullet' has a wrong offset!");

}

