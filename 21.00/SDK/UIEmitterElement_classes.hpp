﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UIEmitterElement

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UIEmitterElement.UIEmitterElement_C
// 0x0088 (0x0340 - 0x02B8)
class UUIEmitterElement_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02B8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       SpanTranslate;                                     // 0x02C0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Span;                                              // 0x02C8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       TimeToFade;                                        // 0x02D0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       FadeOut;                                           // 0x02D8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       ScaleOut;                                          // 0x02E0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       SpinCCW;                                           // 0x02E8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       SpinCW;                                            // 0x02F0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Twinkle;                                           // 0x02F8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UCommonBorder*                          CommonBorder_SizeContainer;                        // 0x0300(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_EmitterMaterial;                             // 0x0308(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               SizeBox_Distance;                                  // 0x0310(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TMulticastInlineDelegate<void()>              EmitterBirth;                                      // 0x0318(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TMulticastInlineDelegate<void()>              EmitterDeath;                                      // 0x0328(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	float                                         LifeDuration;                                      // 0x0338(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         SpinSpeed;                                         // 0x033C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void Construct();
	void EndofLife();
	void EventDestroy();
	void ExecuteUbergraph_UIEmitterElement(int32 EntryPoint);
	void StartAnim();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UIEmitterElement_C">();
	}
	static class UUIEmitterElement_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUIEmitterElement_C>();
	}
};
static_assert(alignof(UUIEmitterElement_C) == 0x000008, "Wrong alignment on UUIEmitterElement_C");
static_assert(sizeof(UUIEmitterElement_C) == 0x000340, "Wrong size on UUIEmitterElement_C");
static_assert(offsetof(UUIEmitterElement_C, UberGraphFrame) == 0x0002B8, "Member 'UUIEmitterElement_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUIEmitterElement_C, SpanTranslate) == 0x0002C0, "Member 'UUIEmitterElement_C::SpanTranslate' has a wrong offset!");
static_assert(offsetof(UUIEmitterElement_C, Span) == 0x0002C8, "Member 'UUIEmitterElement_C::Span' has a wrong offset!");
static_assert(offsetof(UUIEmitterElement_C, TimeToFade) == 0x0002D0, "Member 'UUIEmitterElement_C::TimeToFade' has a wrong offset!");
static_assert(offsetof(UUIEmitterElement_C, FadeOut) == 0x0002D8, "Member 'UUIEmitterElement_C::FadeOut' has a wrong offset!");
static_assert(offsetof(UUIEmitterElement_C, ScaleOut) == 0x0002E0, "Member 'UUIEmitterElement_C::ScaleOut' has a wrong offset!");
static_assert(offsetof(UUIEmitterElement_C, SpinCCW) == 0x0002E8, "Member 'UUIEmitterElement_C::SpinCCW' has a wrong offset!");
static_assert(offsetof(UUIEmitterElement_C, SpinCW) == 0x0002F0, "Member 'UUIEmitterElement_C::SpinCW' has a wrong offset!");
static_assert(offsetof(UUIEmitterElement_C, Twinkle) == 0x0002F8, "Member 'UUIEmitterElement_C::Twinkle' has a wrong offset!");
static_assert(offsetof(UUIEmitterElement_C, CommonBorder_SizeContainer) == 0x000300, "Member 'UUIEmitterElement_C::CommonBorder_SizeContainer' has a wrong offset!");
static_assert(offsetof(UUIEmitterElement_C, Image_EmitterMaterial) == 0x000308, "Member 'UUIEmitterElement_C::Image_EmitterMaterial' has a wrong offset!");
static_assert(offsetof(UUIEmitterElement_C, SizeBox_Distance) == 0x000310, "Member 'UUIEmitterElement_C::SizeBox_Distance' has a wrong offset!");
static_assert(offsetof(UUIEmitterElement_C, EmitterBirth) == 0x000318, "Member 'UUIEmitterElement_C::EmitterBirth' has a wrong offset!");
static_assert(offsetof(UUIEmitterElement_C, EmitterDeath) == 0x000328, "Member 'UUIEmitterElement_C::EmitterDeath' has a wrong offset!");
static_assert(offsetof(UUIEmitterElement_C, LifeDuration) == 0x000338, "Member 'UUIEmitterElement_C::LifeDuration' has a wrong offset!");
static_assert(offsetof(UUIEmitterElement_C, SpinSpeed) == 0x00033C, "Member 'UUIEmitterElement_C::SpinSpeed' has a wrong offset!");

}

