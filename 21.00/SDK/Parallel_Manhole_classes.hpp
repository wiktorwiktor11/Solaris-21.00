﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Parallel_Manhole

#include "Basic.hpp"

#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Parallel_Manhole.Parallel_Manhole_C
// 0x0008 (0x0E78 - 0x0E70)
class AParallel_Manhole_C final : public ABuildingProp
{
public:
	class UNiagaraComponent*                      NS_Parallel_Manhole_Steam;                         // 0x0E70(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Parallel_Manhole_C">();
	}
	static class AParallel_Manhole_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AParallel_Manhole_C>();
	}
};
static_assert(alignof(AParallel_Manhole_C) == 0x000008, "Wrong alignment on AParallel_Manhole_C");
static_assert(sizeof(AParallel_Manhole_C) == 0x000E78, "Wrong size on AParallel_Manhole_C");
static_assert(offsetof(AParallel_Manhole_C, NS_Parallel_Manhole_Steam) == 0x000E70, "Member 'AParallel_Manhole_C::NS_Parallel_Manhole_Steam' has a wrong offset!");

}

