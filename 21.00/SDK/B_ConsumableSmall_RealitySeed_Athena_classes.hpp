﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_ConsumableSmall_RealitySeed_Athena

#include "Basic.hpp"

#include "GameplayTags_structs.hpp"
#include "Engine_structs.hpp"
#include "B_ConsumableSmall_Athena_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass B_ConsumableSmall_RealitySeed_Athena.B_ConsumableSmall_RealitySeed_Athena_C
// 0x0020 (0x1008 - 0x0FE8)
class AB_ConsumableSmall_RealitySeed_Athena_C final : public AB_ConsumableSmall_Athena_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_B_ConsumableSmall_RealitySeed_Athena_C; // 0x0FE8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UNiagaraComponent*                      NS_RealitySeed_Trail;                              // 0x0FF0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   StaticMesh;                                        // 0x0FF8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           GC_Held;                                           // 0x1000(0x0004)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_B_ConsumableSmall_RealitySeed_Athena(int32 EntryPoint);
	void OnWeaponVisibilityChanged(bool bVisible, bool bSetForLocalControllerOnly);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"B_ConsumableSmall_RealitySeed_Athena_C">();
	}
	static class AB_ConsumableSmall_RealitySeed_Athena_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AB_ConsumableSmall_RealitySeed_Athena_C>();
	}
};
static_assert(alignof(AB_ConsumableSmall_RealitySeed_Athena_C) == 0x000008, "Wrong alignment on AB_ConsumableSmall_RealitySeed_Athena_C");
static_assert(sizeof(AB_ConsumableSmall_RealitySeed_Athena_C) == 0x001008, "Wrong size on AB_ConsumableSmall_RealitySeed_Athena_C");
static_assert(offsetof(AB_ConsumableSmall_RealitySeed_Athena_C, UberGraphFrame_B_ConsumableSmall_RealitySeed_Athena_C) == 0x000FE8, "Member 'AB_ConsumableSmall_RealitySeed_Athena_C::UberGraphFrame_B_ConsumableSmall_RealitySeed_Athena_C' has a wrong offset!");
static_assert(offsetof(AB_ConsumableSmall_RealitySeed_Athena_C, NS_RealitySeed_Trail) == 0x000FF0, "Member 'AB_ConsumableSmall_RealitySeed_Athena_C::NS_RealitySeed_Trail' has a wrong offset!");
static_assert(offsetof(AB_ConsumableSmall_RealitySeed_Athena_C, StaticMesh) == 0x000FF8, "Member 'AB_ConsumableSmall_RealitySeed_Athena_C::StaticMesh' has a wrong offset!");
static_assert(offsetof(AB_ConsumableSmall_RealitySeed_Athena_C, GC_Held) == 0x001000, "Member 'AB_ConsumableSmall_RealitySeed_Athena_C::GC_Held' has a wrong offset!");

}

