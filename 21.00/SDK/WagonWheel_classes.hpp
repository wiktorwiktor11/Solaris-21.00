﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WagonWheel

#include "Basic.hpp"

#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass WagonWheel.WagonWheel_C
// 0x0000 (0x0E70 - 0x0E70)
class AWagonWheel_C final : public ABuildingProp
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WagonWheel_C">();
	}
	static class AWagonWheel_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AWagonWheel_C>();
	}
};
static_assert(alignof(AWagonWheel_C) == 0x000008, "Wrong alignment on AWagonWheel_C");
static_assert(sizeof(AWagonWheel_C) == 0x000E70, "Wrong size on AWagonWheel_C");

}

