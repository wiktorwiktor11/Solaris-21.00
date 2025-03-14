﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CalloutEntry

#include "Basic.hpp"

#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass CalloutEntry.CalloutEntry_C
// 0x0010 (0x02C8 - 0x02B8)
class UCalloutEntry_C final : public UUserWidget
{
public:
	class UWidgetAnimation*                       Intro;                                             // 0x02B8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UCommonTextBlock*                       Callout;                                           // 0x02C0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void SetCallout(const class FText& InText);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"CalloutEntry_C">();
	}
	static class UCalloutEntry_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCalloutEntry_C>();
	}
};
static_assert(alignof(UCalloutEntry_C) == 0x000008, "Wrong alignment on UCalloutEntry_C");
static_assert(sizeof(UCalloutEntry_C) == 0x0002C8, "Wrong size on UCalloutEntry_C");
static_assert(offsetof(UCalloutEntry_C, Intro) == 0x0002B8, "Member 'UCalloutEntry_C::Intro' has a wrong offset!");
static_assert(offsetof(UCalloutEntry_C, Callout) == 0x0002C0, "Member 'UCalloutEntry_C::Callout' has a wrong offset!");

}

