﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Agency_Planter_03

#include "Basic.hpp"

#include "Athena_Prop_ParentBuildingContainerBlueprint_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Agency_Planter_03.Agency_Planter_03_C
// 0x0008 (0x0F60 - 0x0F58)
class AAgency_Planter_03_C final : public AAthena_Prop_ParentBuildingContainerBlueprint_C
{
public:
	class UParticleSystemComponent*               Loot_Effect;                                       // 0x0F58(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Agency_Planter_03_C">();
	}
	static class AAgency_Planter_03_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AAgency_Planter_03_C>();
	}
};
static_assert(alignof(AAgency_Planter_03_C) == 0x000008, "Wrong alignment on AAgency_Planter_03_C");
static_assert(sizeof(AAgency_Planter_03_C) == 0x000F60, "Wrong size on AAgency_Planter_03_C");
static_assert(offsetof(AAgency_Planter_03_C, Loot_Effect) == 0x000F58, "Member 'AAgency_Planter_03_C::Loot_Effect' has a wrong offset!");

}

