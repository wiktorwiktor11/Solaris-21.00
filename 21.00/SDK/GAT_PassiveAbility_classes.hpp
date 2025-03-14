﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GAT_PassiveAbility

#include "Basic.hpp"

#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GAT_PassiveAbility.GAT_PassiveAbility_C
// 0x0000 (0x0B10 - 0x0B10)
class UGAT_PassiveAbility_C : public UFortGameplayAbility
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GAT_PassiveAbility_C">();
	}
	static class UGAT_PassiveAbility_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGAT_PassiveAbility_C>();
	}
};
static_assert(alignof(UGAT_PassiveAbility_C) == 0x000008, "Wrong alignment on UGAT_PassiveAbility_C");
static_assert(sizeof(UGAT_PassiveAbility_C) == 0x000B10, "Wrong size on UGAT_PassiveAbility_C");

}

