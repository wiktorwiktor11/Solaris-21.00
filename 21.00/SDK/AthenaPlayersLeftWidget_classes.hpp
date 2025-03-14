﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AthenaPlayersLeftWidget

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass AthenaPlayersLeftWidget.AthenaPlayersLeftWidget_C
// 0x0018 (0x0350 - 0x0338)
class UAthenaPlayersLeftWidget_C final : public UAthenaPlayersLeftBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0338(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 PlayersImage;                                      // 0x0340(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URichTextBlock*                         PlayersLeftText;                                   // 0x0348(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_AthenaPlayersLeftWidget(int32 EntryPoint);
	void SetPlayersLeftText(const class FText& PlayersText);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AthenaPlayersLeftWidget_C">();
	}
	static class UAthenaPlayersLeftWidget_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAthenaPlayersLeftWidget_C>();
	}
};
static_assert(alignof(UAthenaPlayersLeftWidget_C) == 0x000008, "Wrong alignment on UAthenaPlayersLeftWidget_C");
static_assert(sizeof(UAthenaPlayersLeftWidget_C) == 0x000350, "Wrong size on UAthenaPlayersLeftWidget_C");
static_assert(offsetof(UAthenaPlayersLeftWidget_C, UberGraphFrame) == 0x000338, "Member 'UAthenaPlayersLeftWidget_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UAthenaPlayersLeftWidget_C, PlayersImage) == 0x000340, "Member 'UAthenaPlayersLeftWidget_C::PlayersImage' has a wrong offset!");
static_assert(offsetof(UAthenaPlayersLeftWidget_C, PlayersLeftText) == 0x000348, "Member 'UAthenaPlayersLeftWidget_C::PlayersLeftText' has a wrong offset!");

}

