﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: XpReasonFeed

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass XpReasonFeed.XpReasonFeed_C
// 0x0018 (0x02D0 - 0x02B8)
class UXpReasonFeed_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02B8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UDynamicEntryBox*                       DynamicXpFeed;                                     // 0x02C0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          Animating;                                         // 0x02C8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void Destruct();
	void ExecuteUbergraph_XpReasonFeed(int32 EntryPoint);
	void ImmediatelyShowXpRewards(TArray<struct FAthenaMatchXpReward>& XpRewards);
	void IsReadyForNextXpReward(bool* Ready);
	void Play_Xp_Reward(const struct FAthenaMatchXpReward& Reward);
	void Reset_Feed();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"XpReasonFeed_C">();
	}
	static class UXpReasonFeed_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UXpReasonFeed_C>();
	}
};
static_assert(alignof(UXpReasonFeed_C) == 0x000008, "Wrong alignment on UXpReasonFeed_C");
static_assert(sizeof(UXpReasonFeed_C) == 0x0002D0, "Wrong size on UXpReasonFeed_C");
static_assert(offsetof(UXpReasonFeed_C, UberGraphFrame) == 0x0002B8, "Member 'UXpReasonFeed_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UXpReasonFeed_C, DynamicXpFeed) == 0x0002C0, "Member 'UXpReasonFeed_C::DynamicXpFeed' has a wrong offset!");
static_assert(offsetof(UXpReasonFeed_C, Animating) == 0x0002C8, "Member 'UXpReasonFeed_C::Animating' has a wrong offset!");

}

