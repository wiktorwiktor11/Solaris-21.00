﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Apollo_Outdoor_SwingSet_02

#include "Basic.hpp"

#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Apollo_Outdoor_SwingSet_02.Apollo_Outdoor_SwingSet_02_C
// 0x0010 (0x0E80 - 0x0E70)
class AApollo_Outdoor_SwingSet_02_C final : public ABuildingProp
{
public:
	class UStaticMeshComponent*                   SM_Outdoor_Swings_01;                              // 0x0E70(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SM_Outdoor_Swings_02;                              // 0x0E78(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Apollo_Outdoor_SwingSet_02_C">();
	}
	static class AApollo_Outdoor_SwingSet_02_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AApollo_Outdoor_SwingSet_02_C>();
	}
};
static_assert(alignof(AApollo_Outdoor_SwingSet_02_C) == 0x000008, "Wrong alignment on AApollo_Outdoor_SwingSet_02_C");
static_assert(sizeof(AApollo_Outdoor_SwingSet_02_C) == 0x000E80, "Wrong size on AApollo_Outdoor_SwingSet_02_C");
static_assert(offsetof(AApollo_Outdoor_SwingSet_02_C, SM_Outdoor_Swings_01) == 0x000E70, "Member 'AApollo_Outdoor_SwingSet_02_C::SM_Outdoor_Swings_01' has a wrong offset!");
static_assert(offsetof(AApollo_Outdoor_SwingSet_02_C, SM_Outdoor_Swings_02) == 0x000E78, "Member 'AApollo_Outdoor_SwingSet_02_C::SM_Outdoor_Swings_02' has a wrong offset!");

}

