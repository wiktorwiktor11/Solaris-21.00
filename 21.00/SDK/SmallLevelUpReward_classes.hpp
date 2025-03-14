﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SmallLevelUpReward

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass SmallLevelUpReward.SmallLevelUpReward_C
// 0x0018 (0x02D0 - 0x02B8)
class USmallLevelUpReward_C final : public UUserWidget
{
public:
	class UCommonTextBlock*                       MiniReward1CountTB;                                // 0x02B8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 MiniReward1Image;                                  // 0x02C0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         RewardContainer;                                   // 0x02C8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void SetupReward(bool HasReward, const struct FFortItemInstanceQuantityPair& RewardItem, int32 LevelRewarded);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SmallLevelUpReward_C">();
	}
	static class USmallLevelUpReward_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USmallLevelUpReward_C>();
	}
};
static_assert(alignof(USmallLevelUpReward_C) == 0x000008, "Wrong alignment on USmallLevelUpReward_C");
static_assert(sizeof(USmallLevelUpReward_C) == 0x0002D0, "Wrong size on USmallLevelUpReward_C");
static_assert(offsetof(USmallLevelUpReward_C, MiniReward1CountTB) == 0x0002B8, "Member 'USmallLevelUpReward_C::MiniReward1CountTB' has a wrong offset!");
static_assert(offsetof(USmallLevelUpReward_C, MiniReward1Image) == 0x0002C0, "Member 'USmallLevelUpReward_C::MiniReward1Image' has a wrong offset!");
static_assert(offsetof(USmallLevelUpReward_C, RewardContainer) == 0x0002C8, "Member 'USmallLevelUpReward_C::RewardContainer' has a wrong offset!");

}

