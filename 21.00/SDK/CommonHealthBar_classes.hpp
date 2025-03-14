﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CommonHealthBar

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CommonUI_classes.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass CommonHealthBar.CommonHealthBar_C
// 0x0068 (0x0348 - 0x02E0)
class UCommonHealthBar_C final : public UCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02E0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UHorizontalBox*                         _Horizontal_Box__Health_Stat_Text;                 // 0x02E8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               _Size_Box__HP_Bar;                                 // 0x02F0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       BuildModeHP;                                       // 0x02F8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       CurrentHealth;                                     // 0x0300(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       MaxHealth;                                         // 0x0308(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USimpleMaterialProgressBar_C*           ProgressBarDelta;                                  // 0x0310(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USimpleMaterialProgressBar_C*           ProgressBarFill;                                   // 0x0318(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonWidgetSwitcherLegacy*            SwitcherHPText;                                    // 0x0320(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	float                                         Current_HP_Value;                                  // 0x0328(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Max_HP_Value;                                      // 0x032C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Last_HP_Value;                                     // 0x0330(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_334[0x4];                                      // 0x0334(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           HP_Fade_Timer;                                     // 0x0338(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	float                                         HP_Fade_Update_Rate;                               // 0x0340(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_CommonHealthBar(int32 EntryPoint);
	void InitializeBar();
	void PreConstruct(bool IsDesignTime);
	void Set_Timer(bool InEnabled);
	void SetColors(const struct FLinearColor& Color_A, const struct FLinearColor& Color_B, const struct FLinearColor& Baseplate_Color);
	void SetDeltaVisibility(ESlateVisibility InVisibility);
	void SetSwitcherTextIndex(int32 Index_0);
	void Update();
	void Update_Current_HP_Value(float Current);
	void Update_HP_Delta_Bar();
	void Update_HP_Fill_Bar();
	void Update_Max_HP_Value(float Max);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"CommonHealthBar_C">();
	}
	static class UCommonHealthBar_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCommonHealthBar_C>();
	}
};
static_assert(alignof(UCommonHealthBar_C) == 0x000008, "Wrong alignment on UCommonHealthBar_C");
static_assert(sizeof(UCommonHealthBar_C) == 0x000348, "Wrong size on UCommonHealthBar_C");
static_assert(offsetof(UCommonHealthBar_C, UberGraphFrame) == 0x0002E0, "Member 'UCommonHealthBar_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UCommonHealthBar_C, _Horizontal_Box__Health_Stat_Text) == 0x0002E8, "Member 'UCommonHealthBar_C::_Horizontal_Box__Health_Stat_Text' has a wrong offset!");
static_assert(offsetof(UCommonHealthBar_C, _Size_Box__HP_Bar) == 0x0002F0, "Member 'UCommonHealthBar_C::_Size_Box__HP_Bar' has a wrong offset!");
static_assert(offsetof(UCommonHealthBar_C, BuildModeHP) == 0x0002F8, "Member 'UCommonHealthBar_C::BuildModeHP' has a wrong offset!");
static_assert(offsetof(UCommonHealthBar_C, CurrentHealth) == 0x000300, "Member 'UCommonHealthBar_C::CurrentHealth' has a wrong offset!");
static_assert(offsetof(UCommonHealthBar_C, MaxHealth) == 0x000308, "Member 'UCommonHealthBar_C::MaxHealth' has a wrong offset!");
static_assert(offsetof(UCommonHealthBar_C, ProgressBarDelta) == 0x000310, "Member 'UCommonHealthBar_C::ProgressBarDelta' has a wrong offset!");
static_assert(offsetof(UCommonHealthBar_C, ProgressBarFill) == 0x000318, "Member 'UCommonHealthBar_C::ProgressBarFill' has a wrong offset!");
static_assert(offsetof(UCommonHealthBar_C, SwitcherHPText) == 0x000320, "Member 'UCommonHealthBar_C::SwitcherHPText' has a wrong offset!");
static_assert(offsetof(UCommonHealthBar_C, Current_HP_Value) == 0x000328, "Member 'UCommonHealthBar_C::Current_HP_Value' has a wrong offset!");
static_assert(offsetof(UCommonHealthBar_C, Max_HP_Value) == 0x00032C, "Member 'UCommonHealthBar_C::Max_HP_Value' has a wrong offset!");
static_assert(offsetof(UCommonHealthBar_C, Last_HP_Value) == 0x000330, "Member 'UCommonHealthBar_C::Last_HP_Value' has a wrong offset!");
static_assert(offsetof(UCommonHealthBar_C, HP_Fade_Timer) == 0x000338, "Member 'UCommonHealthBar_C::HP_Fade_Timer' has a wrong offset!");
static_assert(offsetof(UCommonHealthBar_C, HP_Fade_Update_Rate) == 0x000340, "Member 'UCommonHealthBar_C::HP_Fade_Update_Rate' has a wrong offset!");

}

