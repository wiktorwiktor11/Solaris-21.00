﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_VendAISpawner_Base

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_VendAISpawner_Base.BP_VendAISpawner_Base_C
// 0x0028 (0x0298 - 0x0270)
class ABP_VendAISpawner_Base_C : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0270(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UNiagaraComponent*                      Niagara;                                           // 0x0278(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                         SpawnDelay;                                        // 0x0280(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_284[0x4];                                      // 0x0284(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FDataTableRowHandle                    EventRowHandle;                                    // 0x0288(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)

public:
	void ExecuteUbergraph_BP_VendAISpawner_Base(int32 EntryPoint);
	void ReceiveBeginPlay();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_VendAISpawner_Base_C">();
	}
	static class ABP_VendAISpawner_Base_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_VendAISpawner_Base_C>();
	}
};
static_assert(alignof(ABP_VendAISpawner_Base_C) == 0x000008, "Wrong alignment on ABP_VendAISpawner_Base_C");
static_assert(sizeof(ABP_VendAISpawner_Base_C) == 0x000298, "Wrong size on ABP_VendAISpawner_Base_C");
static_assert(offsetof(ABP_VendAISpawner_Base_C, UberGraphFrame) == 0x000270, "Member 'ABP_VendAISpawner_Base_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_VendAISpawner_Base_C, Niagara) == 0x000278, "Member 'ABP_VendAISpawner_Base_C::Niagara' has a wrong offset!");
static_assert(offsetof(ABP_VendAISpawner_Base_C, SpawnDelay) == 0x000280, "Member 'ABP_VendAISpawner_Base_C::SpawnDelay' has a wrong offset!");
static_assert(offsetof(ABP_VendAISpawner_Base_C, EventRowHandle) == 0x000288, "Member 'ABP_VendAISpawner_Base_C::EventRowHandle' has a wrong offset!");

}

