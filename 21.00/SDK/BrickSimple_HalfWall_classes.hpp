﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BrickSimple_HalfWall

#include "Basic.hpp"

#include "Parent_BuildingWall_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BrickSimple_HalfWall.BrickSimple_HalfWall_C
// 0x0000 (0x0FB0 - 0x0FB0)
class ABrickSimple_HalfWall_C final : public AParent_BuildingWall_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BrickSimple_HalfWall_C">();
	}
	static class ABrickSimple_HalfWall_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABrickSimple_HalfWall_C>();
	}
};
static_assert(alignof(ABrickSimple_HalfWall_C) == 0x000008, "Wrong alignment on ABrickSimple_HalfWall_C");
static_assert(sizeof(ABrickSimple_HalfWall_C) == 0x000FB0, "Wrong size on ABrickSimple_HalfWall_C");

}

