﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Military_Target

#include "Basic.hpp"

#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Military_Target.Military_Target_C
// 0x0000 (0x0E70 - 0x0E70)
class AMilitary_Target_C final : public ABuildingProp
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Military_Target_C">();
	}
	static class AMilitary_Target_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AMilitary_Target_C>();
	}
};
static_assert(alignof(AMilitary_Target_C) == 0x000008, "Wrong alignment on AMilitary_Target_C");
static_assert(sizeof(AMilitary_Target_C) == 0x000E70, "Wrong size on AMilitary_Target_C");

}

