﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Athena_Prop_Office_Desk_01

#include "Basic.hpp"

#include "Athena_Prop_ParentBuildingContainerBlueprint_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Athena_Prop_Office_Desk_01.Athena_Prop_Office_Desk_01_C
// 0x0008 (0x0F60 - 0x0F58)
class AAthena_Prop_Office_Desk_01_C final : public AAthena_Prop_ParentBuildingContainerBlueprint_C
{
public:
	class USpotLightComponent*                    SpotLight;                                         // 0x0F58(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	void UserConstructionScript();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Athena_Prop_Office_Desk_01_C">();
	}
	static class AAthena_Prop_Office_Desk_01_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AAthena_Prop_Office_Desk_01_C>();
	}
};
static_assert(alignof(AAthena_Prop_Office_Desk_01_C) == 0x000008, "Wrong alignment on AAthena_Prop_Office_Desk_01_C");
static_assert(sizeof(AAthena_Prop_Office_Desk_01_C) == 0x000F60, "Wrong size on AAthena_Prop_Office_Desk_01_C");
static_assert(offsetof(AAthena_Prop_Office_Desk_01_C, SpotLight) == 0x000F58, "Member 'AAthena_Prop_Office_Desk_01_C::SpotLight' has a wrong offset!");

}

