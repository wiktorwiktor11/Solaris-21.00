﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Factory_3

#include "Basic.hpp"

#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Factory_3.Factory_3_C
// 0x0000 (0x0D70 - 0x0D70)
class AFactory_3_C final : public ABuildingPropCorner
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Factory_3_C">();
	}
	static class AFactory_3_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AFactory_3_C>();
	}
};
static_assert(alignof(AFactory_3_C) == 0x000008, "Wrong alignment on AFactory_3_C");
static_assert(sizeof(AFactory_3_C) == 0x000D70, "Wrong size on AFactory_3_C");

}

