﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: FortShotTitleScreen

#include "Basic.hpp"

#include "FortniteUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass FortShotTitleScreen.FortShotTitleScreen_C
// 0x0008 (0x0300 - 0x02F8)
class UFortShotTitleScreen_C final : public UFortShotTitleScreen
{
public:
	class UImage*                                 Image_88;                                          // 0x02F8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"FortShotTitleScreen_C">();
	}
	static class UFortShotTitleScreen_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortShotTitleScreen_C>();
	}
};
static_assert(alignof(UFortShotTitleScreen_C) == 0x000008, "Wrong alignment on UFortShotTitleScreen_C");
static_assert(sizeof(UFortShotTitleScreen_C) == 0x000300, "Wrong size on UFortShotTitleScreen_C");
static_assert(offsetof(UFortShotTitleScreen_C, Image_88) == 0x0002F8, "Member 'UFortShotTitleScreen_C::Image_88' has a wrong offset!");

}

