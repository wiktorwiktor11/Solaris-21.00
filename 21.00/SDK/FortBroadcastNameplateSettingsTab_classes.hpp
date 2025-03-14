﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: FortBroadcastNameplateSettingsTab

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"
#include "UMG_structs.hpp"
#include "FortniteGame_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass FortBroadcastNameplateSettingsTab.FortBroadcastNameplateSettingsTab_C
// 0x00A0 (0x05D8 - 0x0538)
class UFortBroadcastNameplateSettingsTab_C final : public UFortSpectatorNameplateSettingsTab
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0538(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class URotatorSelectorReplaySettings_C*       ArrowColorEnabled;                                 // 0x0540(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOptionsMenuSliderReplay_C*             ArrowDistance;                                     // 0x0548(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOptionsMenuSliderReplay_C*             ArrowScaleMax;                                     // 0x0550(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOptionsMenuSliderReplay_C*             ArrowScaleMin;                                     // 0x0558(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOptionsMenuSliderReplay_C*             HighDetailScaleMax;                                // 0x0560(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOptionsMenuSliderReplay_C*             HighDetailScaleMin;                                // 0x0568(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOptionsMenuSliderReplay_C*             LowDetailDistance;                                 // 0x0570(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOptionsMenuSliderReplay_C*             LowDetailScaleMax;                                 // 0x0578(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOptionsMenuSliderReplay_C*             LowDetailScaleMin;                                 // 0x0580(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOptionsMenuSliderReplay_C*             OffDistance;                                       // 0x0588(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URotatorSelectorReplaySettings_C*       Rotator_DisplaySessionRanks;                       // 0x0590(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URotatorSelectorReplaySettings_C*       ScalingOptionsEnabled;                             // 0x0598(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URotatorSelectorReplaySettings_C*       SquadId;                                           // 0x05A0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URotatorSelectorReplaySettings_C*       TeamColor;                                         // 0x05A8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           VerticalBox;                                       // 0x05B0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<class UUserWidget*>                    NameplateSettingsWidgets;                          // 0x05B8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	TArray<class UUserWidget*>                    ScaleSettingsWidgets;                              // 0x05C8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)

public:
	void BndEvt__ArrowColorEnabled_K2Node_ComponentBoundEvent_11_Selection_Changed__DelegateSignature(int32 Selected_Index);
	void BndEvt__ArrowDistance_K2Node_ComponentBoundEvent_7_SliderChanged__DelegateSignature(float Slider_Value);
	void BndEvt__ArrowScaleMax_K2Node_ComponentBoundEvent_13_SliderChanged__DelegateSignature(float Slider_Value);
	void BndEvt__ArrowScaleMin_K2Node_ComponentBoundEvent_9_SliderChanged__DelegateSignature(float Slider_Value);
	void BndEvt__HighScaleMax_K2Node_ComponentBoundEvent_4_SliderChanged__DelegateSignature(float Slider_Value);
	void BndEvt__HighScaleMin_K2Node_ComponentBoundEvent_3_SliderChanged__DelegateSignature(float Slider_Value);
	void BndEvt__LowDetailDistance_K2Node_ComponentBoundEvent_6_SliderChanged__DelegateSignature(float Slider_Value);
	void BndEvt__LowScaleMax_K2Node_ComponentBoundEvent_12_SliderChanged__DelegateSignature(float Slider_Value);
	void BndEvt__LowScaleMin_K2Node_ComponentBoundEvent_8_SliderChanged__DelegateSignature(float Slider_Value);
	void BndEvt__NamePlates_K2Node_ComponentBoundEvent_1_Selection_Changed__DelegateSignature(int32 Selected_Index);
	void BndEvt__NameViewDistance_K2Node_ComponentBoundEvent_3_SliderChanged__DelegateSignature(float Slider_Value);
	void BndEvt__Rotator_DisplaySessionRanks_K2Node_ComponentBoundEvent_14_Selection_Changed__DelegateSignature(int32 Selected_Index);
	void BndEvt__ScalingAdjustment_K2Node_ComponentBoundEvent_5_Selection_Changed__DelegateSignature(int32 Selected_Index);
	void BndEvt__TeamColor_K2Node_ComponentBoundEvent_10_Selection_Changed__DelegateSignature(int32 Selected_Index);
	void BndEvt__TeamInfo_K2Node_ComponentBoundEvent_0_Selection_Changed__DelegateSignature(int32 Selected_Index);
	void CenterOnTab();
	void ExecuteUbergraph_FortBroadcastNameplateSettingsTab(int32 EntryPoint);
	void InitializeWidgets();
	void OnArrowColorEnabledChanged(bool bArrowColorEnabled);
	void OnArrowDistanceChanged(float ArrowDistance_0);
	void OnArrowScaleMaxChanged(float ArrowScaleMax_0);
	void OnArrowScaleMinChanged(float ArrowScaleMin_0);
	void OnDisplaySessionRanksChanged(bool bDisplaySessionRanks);
	void OnHighDetailScaleMaxChanged(float HighDetailScaleMax_0);
	void OnHighDetailScaleMinChanged(float HighDetailScaleMin_0);
	void OnLowDetailDistanceChanged(float LowDetailDistance_0);
	void OnLowDetailScaleMaxChanged(float LowDetailScaleMax_0);
	void OnLowDetailScaleMinChanged(float LowDetailScaleMin_0);
	void OnNameplatesEnabledChanged(bool bNamePlatesEnabled);
	void OnScalingOptionsEnabledChanged(bool bScalingOptionsEnabled);
	void OnShowTeamColorChanged(bool bShowTeamColor);
	void OnSquadIdModeChanged(ESpectatorSquadIdMode SquadIdMode);
	void OnViewDistanceChanged(float ViewDistance);
	void PreConstruct(bool IsDesignTime);
	void UpdateNameplateSettingsVisibilities(bool bNameplateSettingsEnabled);
	void UpdateScaleSettingsVisibilities(bool bScaleSettingsEnabled);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"FortBroadcastNameplateSettingsTab_C">();
	}
	static class UFortBroadcastNameplateSettingsTab_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortBroadcastNameplateSettingsTab_C>();
	}
};
static_assert(alignof(UFortBroadcastNameplateSettingsTab_C) == 0x000008, "Wrong alignment on UFortBroadcastNameplateSettingsTab_C");
static_assert(sizeof(UFortBroadcastNameplateSettingsTab_C) == 0x0005D8, "Wrong size on UFortBroadcastNameplateSettingsTab_C");
static_assert(offsetof(UFortBroadcastNameplateSettingsTab_C, UberGraphFrame) == 0x000538, "Member 'UFortBroadcastNameplateSettingsTab_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UFortBroadcastNameplateSettingsTab_C, ArrowColorEnabled) == 0x000540, "Member 'UFortBroadcastNameplateSettingsTab_C::ArrowColorEnabled' has a wrong offset!");
static_assert(offsetof(UFortBroadcastNameplateSettingsTab_C, ArrowDistance) == 0x000548, "Member 'UFortBroadcastNameplateSettingsTab_C::ArrowDistance' has a wrong offset!");
static_assert(offsetof(UFortBroadcastNameplateSettingsTab_C, ArrowScaleMax) == 0x000550, "Member 'UFortBroadcastNameplateSettingsTab_C::ArrowScaleMax' has a wrong offset!");
static_assert(offsetof(UFortBroadcastNameplateSettingsTab_C, ArrowScaleMin) == 0x000558, "Member 'UFortBroadcastNameplateSettingsTab_C::ArrowScaleMin' has a wrong offset!");
static_assert(offsetof(UFortBroadcastNameplateSettingsTab_C, HighDetailScaleMax) == 0x000560, "Member 'UFortBroadcastNameplateSettingsTab_C::HighDetailScaleMax' has a wrong offset!");
static_assert(offsetof(UFortBroadcastNameplateSettingsTab_C, HighDetailScaleMin) == 0x000568, "Member 'UFortBroadcastNameplateSettingsTab_C::HighDetailScaleMin' has a wrong offset!");
static_assert(offsetof(UFortBroadcastNameplateSettingsTab_C, LowDetailDistance) == 0x000570, "Member 'UFortBroadcastNameplateSettingsTab_C::LowDetailDistance' has a wrong offset!");
static_assert(offsetof(UFortBroadcastNameplateSettingsTab_C, LowDetailScaleMax) == 0x000578, "Member 'UFortBroadcastNameplateSettingsTab_C::LowDetailScaleMax' has a wrong offset!");
static_assert(offsetof(UFortBroadcastNameplateSettingsTab_C, LowDetailScaleMin) == 0x000580, "Member 'UFortBroadcastNameplateSettingsTab_C::LowDetailScaleMin' has a wrong offset!");
static_assert(offsetof(UFortBroadcastNameplateSettingsTab_C, OffDistance) == 0x000588, "Member 'UFortBroadcastNameplateSettingsTab_C::OffDistance' has a wrong offset!");
static_assert(offsetof(UFortBroadcastNameplateSettingsTab_C, Rotator_DisplaySessionRanks) == 0x000590, "Member 'UFortBroadcastNameplateSettingsTab_C::Rotator_DisplaySessionRanks' has a wrong offset!");
static_assert(offsetof(UFortBroadcastNameplateSettingsTab_C, ScalingOptionsEnabled) == 0x000598, "Member 'UFortBroadcastNameplateSettingsTab_C::ScalingOptionsEnabled' has a wrong offset!");
static_assert(offsetof(UFortBroadcastNameplateSettingsTab_C, SquadId) == 0x0005A0, "Member 'UFortBroadcastNameplateSettingsTab_C::SquadId' has a wrong offset!");
static_assert(offsetof(UFortBroadcastNameplateSettingsTab_C, TeamColor) == 0x0005A8, "Member 'UFortBroadcastNameplateSettingsTab_C::TeamColor' has a wrong offset!");
static_assert(offsetof(UFortBroadcastNameplateSettingsTab_C, VerticalBox) == 0x0005B0, "Member 'UFortBroadcastNameplateSettingsTab_C::VerticalBox' has a wrong offset!");
static_assert(offsetof(UFortBroadcastNameplateSettingsTab_C, NameplateSettingsWidgets) == 0x0005B8, "Member 'UFortBroadcastNameplateSettingsTab_C::NameplateSettingsWidgets' has a wrong offset!");
static_assert(offsetof(UFortBroadcastNameplateSettingsTab_C, ScaleSettingsWidgets) == 0x0005C8, "Member 'UFortBroadcastNameplateSettingsTab_C::ScaleSettingsWidgets' has a wrong offset!");

}

