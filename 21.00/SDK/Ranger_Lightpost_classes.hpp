﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Ranger_Lightpost

#include "Basic.hpp"

#include "Parent_BuildingPropActor_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Ranger_Lightpost.Ranger_Lightpost_C
// 0x0008 (0x0F80 - 0x0F78)
class ARanger_Lightpost_C final : public AParent_BuildingPropActor_C
{
public:
	class UPointLightComponent*                   PointLight;                                        // 0x0F78(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Ranger_Lightpost_C">();
	}
	static class ARanger_Lightpost_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ARanger_Lightpost_C>();
	}
};
static_assert(alignof(ARanger_Lightpost_C) == 0x000008, "Wrong alignment on ARanger_Lightpost_C");
static_assert(sizeof(ARanger_Lightpost_C) == 0x000F80, "Wrong size on ARanger_Lightpost_C");
static_assert(offsetof(ARanger_Lightpost_C, PointLight) == 0x000F78, "Member 'ARanger_Lightpost_C::PointLight' has a wrong offset!");

}

