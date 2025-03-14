﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AthenaItemTierPip

#include "Basic.hpp"

#include "FortniteUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass AthenaItemTierPip.AthenaItemTierPip_C
// 0x0008 (0x02E8 - 0x02E0)
class UAthenaItemTierPip_C final : public UAthenaItemTierPipWidget
{
public:
	class UImage*                                 Star;                                              // 0x02E0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void SetRarityColor(const struct FLinearColor& RarityColor);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AthenaItemTierPip_C">();
	}
	static class UAthenaItemTierPip_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAthenaItemTierPip_C>();
	}
};
static_assert(alignof(UAthenaItemTierPip_C) == 0x000008, "Wrong alignment on UAthenaItemTierPip_C");
static_assert(sizeof(UAthenaItemTierPip_C) == 0x0002E8, "Wrong size on UAthenaItemTierPip_C");
static_assert(offsetof(UAthenaItemTierPip_C, Star) == 0x0002E0, "Member 'UAthenaItemTierPip_C::Star' has a wrong offset!");

}

