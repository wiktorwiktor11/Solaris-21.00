﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: FastFood_Counter_A

#include "Basic.hpp"

#include "Parent_BuildingPropWall_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass FastFood_Counter_A.FastFood_Counter_A_C
// 0x0000 (0x0E88 - 0x0E88)
class AFastFood_Counter_A_C final : public AParent_BuildingPropWall_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"FastFood_Counter_A_C">();
	}
	static class AFastFood_Counter_A_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AFastFood_Counter_A_C>();
	}
};
static_assert(alignof(AFastFood_Counter_A_C) == 0x000008, "Wrong alignment on AFastFood_Counter_A_C");
static_assert(sizeof(AFastFood_Counter_A_C) == 0x000E88, "Wrong size on AFastFood_Counter_A_C");

}

