﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PostGameSpectatingPlayerName

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass PostGameSpectatingPlayerName.PostGameSpectatingPlayerName_C
// 0x0028 (0x0348 - 0x0320)
class UPostGameSpectatingPlayerName_C final : public UPostGameSpectatedPlayerName
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0320(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       IntroAnim;                                         // 0x0328(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UFortSimpleWidgetAnimationsPanel*       SimpleAnimation;                                   // 0x0330(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       Text_PlayerName;                                   // 0x0338(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Text_UserId;                                       // 0x0340(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_PostGameSpectatingPlayerName(int32 EntryPoint);
	void Intro();
	void ShowWidget(const class FString& PlayerName, const class FString& PlayerId);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"PostGameSpectatingPlayerName_C">();
	}
	static class UPostGameSpectatingPlayerName_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPostGameSpectatingPlayerName_C>();
	}
};
static_assert(alignof(UPostGameSpectatingPlayerName_C) == 0x000008, "Wrong alignment on UPostGameSpectatingPlayerName_C");
static_assert(sizeof(UPostGameSpectatingPlayerName_C) == 0x000348, "Wrong size on UPostGameSpectatingPlayerName_C");
static_assert(offsetof(UPostGameSpectatingPlayerName_C, UberGraphFrame) == 0x000320, "Member 'UPostGameSpectatingPlayerName_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UPostGameSpectatingPlayerName_C, IntroAnim) == 0x000328, "Member 'UPostGameSpectatingPlayerName_C::IntroAnim' has a wrong offset!");
static_assert(offsetof(UPostGameSpectatingPlayerName_C, SimpleAnimation) == 0x000330, "Member 'UPostGameSpectatingPlayerName_C::SimpleAnimation' has a wrong offset!");
static_assert(offsetof(UPostGameSpectatingPlayerName_C, Text_PlayerName) == 0x000338, "Member 'UPostGameSpectatingPlayerName_C::Text_PlayerName' has a wrong offset!");
static_assert(offsetof(UPostGameSpectatingPlayerName_C, Text_UserId) == 0x000340, "Member 'UPostGameSpectatingPlayerName_C::Text_UserId' has a wrong offset!");

}

