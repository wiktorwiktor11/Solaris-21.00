﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Parent_BuildingWall

#include "Basic.hpp"

#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Parent_BuildingWall.Parent_BuildingWall_C
// 0x0000 (0x0FB0 - 0x0FB0)
class AParent_BuildingWall_C : public ABuildingWall
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Parent_BuildingWall_C">();
	}
	static class AParent_BuildingWall_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AParent_BuildingWall_C>();
	}
};
static_assert(alignof(AParent_BuildingWall_C) == 0x000008, "Wrong alignment on AParent_BuildingWall_C");
static_assert(sizeof(AParent_BuildingWall_C) == 0x000FB0, "Wrong size on AParent_BuildingWall_C");

}

