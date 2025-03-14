﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Artemis_Suburban_Plant_03

#include "Basic.hpp"

#include "Athena_Prop_ParentBuildingContainerBlueprint_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Artemis_Suburban_Plant_03.Artemis_Suburban_Plant_03_C
// 0x0008 (0x0F60 - 0x0F58)
class AArtemis_Suburban_Plant_03_C final : public AAthena_Prop_ParentBuildingContainerBlueprint_C
{
public:
	class UParticleSystemComponent*               Loot_Effect;                                       // 0x0F58(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Artemis_Suburban_Plant_03_C">();
	}
	static class AArtemis_Suburban_Plant_03_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AArtemis_Suburban_Plant_03_C>();
	}
};
static_assert(alignof(AArtemis_Suburban_Plant_03_C) == 0x000008, "Wrong alignment on AArtemis_Suburban_Plant_03_C");
static_assert(sizeof(AArtemis_Suburban_Plant_03_C) == 0x000F60, "Wrong size on AArtemis_Suburban_Plant_03_C");
static_assert(offsetof(AArtemis_Suburban_Plant_03_C, Loot_Effect) == 0x000F58, "Member 'AArtemis_Suburban_Plant_03_C::Loot_Effect' has a wrong offset!");

}

