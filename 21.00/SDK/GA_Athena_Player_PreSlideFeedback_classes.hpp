﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Athena_Player_PreSlideFeedback

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GA_Athena_Player_PreSlideFeedback.GA_Athena_Player_PreSlideFeedback_C
// 0x0008 (0x0B18 - 0x0B10)
class UGA_Athena_Player_PreSlideFeedback_C final : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0B10(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void CustomEvent_0();
	void ExecuteUbergraph_GA_Athena_Player_PreSlideFeedback(int32 EntryPoint);
	void FailedToActivatePassiveAbility();
	void K2_ActivateAbility();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_Athena_Player_PreSlideFeedback_C">();
	}
	static class UGA_Athena_Player_PreSlideFeedback_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_Athena_Player_PreSlideFeedback_C>();
	}
};
static_assert(alignof(UGA_Athena_Player_PreSlideFeedback_C) == 0x000008, "Wrong alignment on UGA_Athena_Player_PreSlideFeedback_C");
static_assert(sizeof(UGA_Athena_Player_PreSlideFeedback_C) == 0x000B18, "Wrong size on UGA_Athena_Player_PreSlideFeedback_C");
static_assert(offsetof(UGA_Athena_Player_PreSlideFeedback_C, UberGraphFrame) == 0x000B10, "Member 'UGA_Athena_Player_PreSlideFeedback_C::UberGraphFrame' has a wrong offset!");

}

