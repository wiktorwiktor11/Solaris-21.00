﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Athena_Meat

#include "Basic.hpp"

#include "GA_Athena_MedConsumable_Parent_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GA_Athena_Meat.GA_Athena_Meat_C
// 0x0000 (0x0CF8 - 0x0CF8)
class UGA_Athena_Meat_C final : public UGA_Athena_MedConsumable_Parent_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_Athena_Meat_C">();
	}
	static class UGA_Athena_Meat_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_Athena_Meat_C>();
	}
};
static_assert(alignof(UGA_Athena_Meat_C) == 0x000008, "Wrong alignment on UGA_Athena_Meat_C");
static_assert(sizeof(UGA_Athena_Meat_C) == 0x000CF8, "Wrong size on UGA_Athena_Meat_C");

}

