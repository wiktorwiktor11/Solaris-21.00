﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PlayedBeforeSelect

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass PlayedBeforeSelect.PlayedBeforeSelect_C
// 0x0040 (0x0468 - 0x0428)
class UPlayedBeforeSelect_C final : public UFortPlayedBeforeSelect
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0428(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Intro;                                             // 0x0430(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UCommonTextBlock*                       CommonTextBlock_1;                                 // 0x0438(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       CommonTextBlock_6;                                 // 0x0440(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonWidgetSwitcherLegacy*            CommonWidgetSwitcher_InviteOnly;                   // 0x0448(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UInviteEventTitle_C*                    InviteEventTitle;                                  // 0x0450(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        LoginType_Switcher;                                // 0x0458(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USignInWidget_C*                        SignInWidget;                                      // 0x0460(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void OnActivated_1();
	void ExecuteUbergraph_PlayedBeforeSelect(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"PlayedBeforeSelect_C">();
	}
	static class UPlayedBeforeSelect_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPlayedBeforeSelect_C>();
	}
};
static_assert(alignof(UPlayedBeforeSelect_C) == 0x000008, "Wrong alignment on UPlayedBeforeSelect_C");
static_assert(sizeof(UPlayedBeforeSelect_C) == 0x000468, "Wrong size on UPlayedBeforeSelect_C");
static_assert(offsetof(UPlayedBeforeSelect_C, UberGraphFrame) == 0x000428, "Member 'UPlayedBeforeSelect_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UPlayedBeforeSelect_C, Intro) == 0x000430, "Member 'UPlayedBeforeSelect_C::Intro' has a wrong offset!");
static_assert(offsetof(UPlayedBeforeSelect_C, CommonTextBlock_1) == 0x000438, "Member 'UPlayedBeforeSelect_C::CommonTextBlock_1' has a wrong offset!");
static_assert(offsetof(UPlayedBeforeSelect_C, CommonTextBlock_6) == 0x000440, "Member 'UPlayedBeforeSelect_C::CommonTextBlock_6' has a wrong offset!");
static_assert(offsetof(UPlayedBeforeSelect_C, CommonWidgetSwitcher_InviteOnly) == 0x000448, "Member 'UPlayedBeforeSelect_C::CommonWidgetSwitcher_InviteOnly' has a wrong offset!");
static_assert(offsetof(UPlayedBeforeSelect_C, InviteEventTitle) == 0x000450, "Member 'UPlayedBeforeSelect_C::InviteEventTitle' has a wrong offset!");
static_assert(offsetof(UPlayedBeforeSelect_C, LoginType_Switcher) == 0x000458, "Member 'UPlayedBeforeSelect_C::LoginType_Switcher' has a wrong offset!");
static_assert(offsetof(UPlayedBeforeSelect_C, SignInWidget) == 0x000460, "Member 'UPlayedBeforeSelect_C::SignInWidget' has a wrong offset!");

}

