﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Bridge_Railing_01b

#include "Basic.hpp"

#include "Parent_BuildingPropWall_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Bridge_Railing_01b.Bridge_Railing_01b_C
// 0x0000 (0x0E88 - 0x0E88)
class ABridge_Railing_01b_C final : public AParent_BuildingPropWall_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Bridge_Railing_01b_C">();
	}
	static class ABridge_Railing_01b_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABridge_Railing_01b_C>();
	}
};
static_assert(alignof(ABridge_Railing_01b_C) == 0x000008, "Wrong alignment on ABridge_Railing_01b_C");
static_assert(sizeof(ABridge_Railing_01b_C) == 0x000E88, "Wrong size on ABridge_Railing_01b_C");

}

