﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SettingsPanel

#include "Basic.hpp"

#include "FortniteUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass SettingsPanel.SettingsPanel_C
// 0x0008 (0x0730 - 0x0728)
class USettingsPanel_C final : public UFortSettingsPanel
{
public:
	class USafeZone*                              SafeZone_0;                                        // 0x0728(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SettingsPanel_C">();
	}
	static class USettingsPanel_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USettingsPanel_C>();
	}
};
static_assert(alignof(USettingsPanel_C) == 0x000008, "Wrong alignment on USettingsPanel_C");
static_assert(sizeof(USettingsPanel_C) == 0x000730, "Wrong size on USettingsPanel_C");
static_assert(offsetof(USettingsPanel_C, SafeZone_0) == 0x000728, "Member 'USettingsPanel_C::SafeZone_0' has a wrong offset!");

}

