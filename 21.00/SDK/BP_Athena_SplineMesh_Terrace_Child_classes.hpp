﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Athena_SplineMesh_Terrace_Child

#include "Basic.hpp"

#include "BP_Athena_SplineMesh_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_Athena_SplineMesh_Terrace_Child.BP_Athena_SplineMesh_Terrace_Child_C
// 0x0020 (0x02E0 - 0x02C0)
class ABP_Athena_SplineMesh_Terrace_Child_C final : public ABP_Athena_SplineMesh_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_Athena_SplineMesh_Terrace_Child_C; // 0x02C0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UHierarchicalInstancedStaticMeshComponent* HSIM_Rice_02;                                      // 0x02C8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UHierarchicalInstancedStaticMeshComponent* HSIM_Rice_03;                                      // 0x02D0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	int32                                         InstanceReductionAmount;                           // 0x02D8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_Athena_SplineMesh_Terrace_Child(int32 EntryPoint);
	void initInstances(class UInstancedStaticMeshComponent* Target, int32 Count);
	void ReceiveBeginPlay();
	void test_rice_reduction(int32 Count);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Athena_SplineMesh_Terrace_Child_C">();
	}
	static class ABP_Athena_SplineMesh_Terrace_Child_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_Athena_SplineMesh_Terrace_Child_C>();
	}
};
static_assert(alignof(ABP_Athena_SplineMesh_Terrace_Child_C) == 0x000008, "Wrong alignment on ABP_Athena_SplineMesh_Terrace_Child_C");
static_assert(sizeof(ABP_Athena_SplineMesh_Terrace_Child_C) == 0x0002E0, "Wrong size on ABP_Athena_SplineMesh_Terrace_Child_C");
static_assert(offsetof(ABP_Athena_SplineMesh_Terrace_Child_C, UberGraphFrame_BP_Athena_SplineMesh_Terrace_Child_C) == 0x0002C0, "Member 'ABP_Athena_SplineMesh_Terrace_Child_C::UberGraphFrame_BP_Athena_SplineMesh_Terrace_Child_C' has a wrong offset!");
static_assert(offsetof(ABP_Athena_SplineMesh_Terrace_Child_C, HSIM_Rice_02) == 0x0002C8, "Member 'ABP_Athena_SplineMesh_Terrace_Child_C::HSIM_Rice_02' has a wrong offset!");
static_assert(offsetof(ABP_Athena_SplineMesh_Terrace_Child_C, HSIM_Rice_03) == 0x0002D0, "Member 'ABP_Athena_SplineMesh_Terrace_Child_C::HSIM_Rice_03' has a wrong offset!");
static_assert(offsetof(ABP_Athena_SplineMesh_Terrace_Child_C, InstanceReductionAmount) == 0x0002D8, "Member 'ABP_Athena_SplineMesh_Terrace_Child_C::InstanceReductionAmount' has a wrong offset!");

}

