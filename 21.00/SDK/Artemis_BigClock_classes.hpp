﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Artemis_BigClock

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Artemis_BigClock.Artemis_BigClock_C
// 0x0030 (0x0D98 - 0x0D68)
class AArtemis_BigClock_C final : public ABuildingDeco
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0D68(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UAudioComponent*                        Audio;                                             // 0x0D70(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   MinuteHandMesh;                                    // 0x0D78(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   HourHandMesh;                                      // 0x0D80(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                          BShouldUpdateTime;                                 // 0x0D88(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_D89[0x7];                                      // 0x0D89(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USoundBase*                             TickSound;                                         // 0x0D90(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Artemis_BigClock(int32 EntryPoint);
	void ReceiveBeginPlay();
	void SetTickingEnabled(bool Enabled);
	void UpdateTime();
	void UserConstructionScript();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Artemis_BigClock_C">();
	}
	static class AArtemis_BigClock_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AArtemis_BigClock_C>();
	}
};
static_assert(alignof(AArtemis_BigClock_C) == 0x000008, "Wrong alignment on AArtemis_BigClock_C");
static_assert(sizeof(AArtemis_BigClock_C) == 0x000D98, "Wrong size on AArtemis_BigClock_C");
static_assert(offsetof(AArtemis_BigClock_C, UberGraphFrame) == 0x000D68, "Member 'AArtemis_BigClock_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AArtemis_BigClock_C, Audio) == 0x000D70, "Member 'AArtemis_BigClock_C::Audio' has a wrong offset!");
static_assert(offsetof(AArtemis_BigClock_C, MinuteHandMesh) == 0x000D78, "Member 'AArtemis_BigClock_C::MinuteHandMesh' has a wrong offset!");
static_assert(offsetof(AArtemis_BigClock_C, HourHandMesh) == 0x000D80, "Member 'AArtemis_BigClock_C::HourHandMesh' has a wrong offset!");
static_assert(offsetof(AArtemis_BigClock_C, BShouldUpdateTime) == 0x000D88, "Member 'AArtemis_BigClock_C::BShouldUpdateTime' has a wrong offset!");
static_assert(offsetof(AArtemis_BigClock_C, TickSound) == 0x000D90, "Member 'AArtemis_BigClock_C::TickSound' has a wrong offset!");

}

