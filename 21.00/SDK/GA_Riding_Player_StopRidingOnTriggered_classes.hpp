﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Riding_Player_StopRidingOnTriggered

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GA_Riding_Player_StopRidingOnTriggered.GA_Riding_Player_StopRidingOnTriggered_C
// 0x0008 (0x0B18 - 0x0B10)
class UGA_Riding_Player_StopRidingOnTriggered_C final : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0B10(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_GA_Riding_Player_StopRidingOnTriggered(int32 EntryPoint);
	void K2_ActivateAbilityFromEvent(const struct FGameplayEventData& EventData);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_Riding_Player_StopRidingOnTriggered_C">();
	}
	static class UGA_Riding_Player_StopRidingOnTriggered_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_Riding_Player_StopRidingOnTriggered_C>();
	}
};
static_assert(alignof(UGA_Riding_Player_StopRidingOnTriggered_C) == 0x000008, "Wrong alignment on UGA_Riding_Player_StopRidingOnTriggered_C");
static_assert(sizeof(UGA_Riding_Player_StopRidingOnTriggered_C) == 0x000B18, "Wrong size on UGA_Riding_Player_StopRidingOnTriggered_C");
static_assert(offsetof(UGA_Riding_Player_StopRidingOnTriggered_C, UberGraphFrame) == 0x000B10, "Member 'UGA_Riding_Player_StopRidingOnTriggered_C::UberGraphFrame' has a wrong offset!");

}

