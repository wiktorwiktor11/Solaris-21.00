﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AthenaTransientQuestStartedOverlay

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass AthenaTransientQuestStartedOverlay.AthenaTransientQuestStartedOverlay_C
// 0x00A0 (0x0410 - 0x0370)
class UAthenaTransientQuestStartedOverlay_C final : public UAthenaTransientQuestStartedOverlay
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0370(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Intro;                                             // 0x0378(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UFortLazyImage*                         Image_Details;                                     // 0x0380(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_Shadow;                                      // 0x0388(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_textglow;                                    // 0x0390(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               Overlay_Container;                                 // 0x0398(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFortSimpleWidgetAnimationsPanel*       SimpleAnimations;                                  // 0x03A0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonWidgetSwitcherLegacy*            Switcher_ClueText;                                 // 0x03A8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonWidgetSwitcherLegacy*            Switcher_MobileClueText;                           // 0x03B0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       Text_CollectionPrompt;                             // 0x03B8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       Text_Details;                                      // 0x03C0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       Text_MobileCollectionPrompt;                       // 0x03C8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       Text_NewClue;                                      // 0x03D0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       Text_NewClue_1;                                    // 0x03D8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FName                                   IntroAnim;                                         // 0x03E0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   FadeAnim;                                          // 0x03E4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                           TimerHandle;                                       // 0x03E8(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	TFieldPath<class FProperty>                   MobileClickCatcher;                                // 0x03F0(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)

public:
	void ClearActiveContent();
	void Construct();
	void ExecuteUbergraph_AthenaTransientQuestStartedOverlay(int32 EntryPoint);
	void OnPrioitizedActivated();
	void OnPrioitizedFinished();
	void OnTransientQuestStarted(const class UFortQuestItem* QuestItem);
	void Play_Audio_Intro();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AthenaTransientQuestStartedOverlay_C">();
	}
	static class UAthenaTransientQuestStartedOverlay_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAthenaTransientQuestStartedOverlay_C>();
	}
};
static_assert(alignof(UAthenaTransientQuestStartedOverlay_C) == 0x000008, "Wrong alignment on UAthenaTransientQuestStartedOverlay_C");
static_assert(sizeof(UAthenaTransientQuestStartedOverlay_C) == 0x000410, "Wrong size on UAthenaTransientQuestStartedOverlay_C");
static_assert(offsetof(UAthenaTransientQuestStartedOverlay_C, UberGraphFrame) == 0x000370, "Member 'UAthenaTransientQuestStartedOverlay_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UAthenaTransientQuestStartedOverlay_C, Intro) == 0x000378, "Member 'UAthenaTransientQuestStartedOverlay_C::Intro' has a wrong offset!");
static_assert(offsetof(UAthenaTransientQuestStartedOverlay_C, Image_Details) == 0x000380, "Member 'UAthenaTransientQuestStartedOverlay_C::Image_Details' has a wrong offset!");
static_assert(offsetof(UAthenaTransientQuestStartedOverlay_C, Image_Shadow) == 0x000388, "Member 'UAthenaTransientQuestStartedOverlay_C::Image_Shadow' has a wrong offset!");
static_assert(offsetof(UAthenaTransientQuestStartedOverlay_C, Image_textglow) == 0x000390, "Member 'UAthenaTransientQuestStartedOverlay_C::Image_textglow' has a wrong offset!");
static_assert(offsetof(UAthenaTransientQuestStartedOverlay_C, Overlay_Container) == 0x000398, "Member 'UAthenaTransientQuestStartedOverlay_C::Overlay_Container' has a wrong offset!");
static_assert(offsetof(UAthenaTransientQuestStartedOverlay_C, SimpleAnimations) == 0x0003A0, "Member 'UAthenaTransientQuestStartedOverlay_C::SimpleAnimations' has a wrong offset!");
static_assert(offsetof(UAthenaTransientQuestStartedOverlay_C, Switcher_ClueText) == 0x0003A8, "Member 'UAthenaTransientQuestStartedOverlay_C::Switcher_ClueText' has a wrong offset!");
static_assert(offsetof(UAthenaTransientQuestStartedOverlay_C, Switcher_MobileClueText) == 0x0003B0, "Member 'UAthenaTransientQuestStartedOverlay_C::Switcher_MobileClueText' has a wrong offset!");
static_assert(offsetof(UAthenaTransientQuestStartedOverlay_C, Text_CollectionPrompt) == 0x0003B8, "Member 'UAthenaTransientQuestStartedOverlay_C::Text_CollectionPrompt' has a wrong offset!");
static_assert(offsetof(UAthenaTransientQuestStartedOverlay_C, Text_Details) == 0x0003C0, "Member 'UAthenaTransientQuestStartedOverlay_C::Text_Details' has a wrong offset!");
static_assert(offsetof(UAthenaTransientQuestStartedOverlay_C, Text_MobileCollectionPrompt) == 0x0003C8, "Member 'UAthenaTransientQuestStartedOverlay_C::Text_MobileCollectionPrompt' has a wrong offset!");
static_assert(offsetof(UAthenaTransientQuestStartedOverlay_C, Text_NewClue) == 0x0003D0, "Member 'UAthenaTransientQuestStartedOverlay_C::Text_NewClue' has a wrong offset!");
static_assert(offsetof(UAthenaTransientQuestStartedOverlay_C, Text_NewClue_1) == 0x0003D8, "Member 'UAthenaTransientQuestStartedOverlay_C::Text_NewClue_1' has a wrong offset!");
static_assert(offsetof(UAthenaTransientQuestStartedOverlay_C, IntroAnim) == 0x0003E0, "Member 'UAthenaTransientQuestStartedOverlay_C::IntroAnim' has a wrong offset!");
static_assert(offsetof(UAthenaTransientQuestStartedOverlay_C, FadeAnim) == 0x0003E4, "Member 'UAthenaTransientQuestStartedOverlay_C::FadeAnim' has a wrong offset!");
static_assert(offsetof(UAthenaTransientQuestStartedOverlay_C, TimerHandle) == 0x0003E8, "Member 'UAthenaTransientQuestStartedOverlay_C::TimerHandle' has a wrong offset!");
static_assert(offsetof(UAthenaTransientQuestStartedOverlay_C, MobileClickCatcher) == 0x0003F0, "Member 'UAthenaTransientQuestStartedOverlay_C::MobileClickCatcher' has a wrong offset!");

}

