﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Apollo_Primal_Tarp

#include "Basic.hpp"

#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Apollo_Primal_Tarp.Apollo_Primal_Tarp_C
// 0x0008 (0x0E78 - 0x0E70)
class AApollo_Primal_Tarp_C final : public ABuildingProp
{
public:
	class UPrimitive_Structure_AmbAudioComponent_C* Primitive_Structure_AmbAudioComponent;             // 0x0E70(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Apollo_Primal_Tarp_C">();
	}
	static class AApollo_Primal_Tarp_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AApollo_Primal_Tarp_C>();
	}
};
static_assert(alignof(AApollo_Primal_Tarp_C) == 0x000008, "Wrong alignment on AApollo_Primal_Tarp_C");
static_assert(sizeof(AApollo_Primal_Tarp_C) == 0x000E78, "Wrong size on AApollo_Primal_Tarp_C");
static_assert(offsetof(AApollo_Primal_Tarp_C, Primitive_Structure_AmbAudioComponent) == 0x000E70, "Member 'AApollo_Primal_Tarp_C::Primitive_Structure_AmbAudioComponent' has a wrong offset!");

}

