﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GE_Ascender_Ascending

#include "Basic.hpp"

#include "GameplayAbilities_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GE_Ascender_Ascending.GE_Ascender_Ascending_C
// 0x0000 (0x07F8 - 0x07F8)
class UGE_Ascender_Ascending_C final : public UGameplayEffect
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GE_Ascender_Ascending_C">();
	}
	static class UGE_Ascender_Ascending_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGE_Ascender_Ascending_C>();
	}
};
static_assert(alignof(UGE_Ascender_Ascending_C) == 0x000008, "Wrong alignment on UGE_Ascender_Ascending_C");
static_assert(sizeof(UGE_Ascender_Ascending_C) == 0x0007F8, "Wrong size on UGE_Ascender_Ascending_C");

}

