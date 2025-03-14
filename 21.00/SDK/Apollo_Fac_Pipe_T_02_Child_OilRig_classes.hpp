﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Apollo_Fac_Pipe_T_02_Child_OilRig

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Apollo_Fac_Pipe_T_02_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Apollo_Fac_Pipe_T_02_Child_OilRig.Apollo_Fac_Pipe_T_02_Child_OilRig_C
// 0x0010 (0x0E80 - 0x0E70)
class AApollo_Fac_Pipe_T_02_Child_OilRig_C final : public AApollo_Fac_Pipe_T_02_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0E70(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	bool                                          Is_Oil_Dripping;                                   // 0x0E78(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Apollo_Fac_Pipe_T_02_Child_OilRig(int32 EntryPoint);
	void ReceiveBeginPlay();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Apollo_Fac_Pipe_T_02_Child_OilRig_C">();
	}
	static class AApollo_Fac_Pipe_T_02_Child_OilRig_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AApollo_Fac_Pipe_T_02_Child_OilRig_C>();
	}
};
static_assert(alignof(AApollo_Fac_Pipe_T_02_Child_OilRig_C) == 0x000008, "Wrong alignment on AApollo_Fac_Pipe_T_02_Child_OilRig_C");
static_assert(sizeof(AApollo_Fac_Pipe_T_02_Child_OilRig_C) == 0x000E80, "Wrong size on AApollo_Fac_Pipe_T_02_Child_OilRig_C");
static_assert(offsetof(AApollo_Fac_Pipe_T_02_Child_OilRig_C, UberGraphFrame) == 0x000E70, "Member 'AApollo_Fac_Pipe_T_02_Child_OilRig_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AApollo_Fac_Pipe_T_02_Child_OilRig_C, Is_Oil_Dripping) == 0x000E78, "Member 'AApollo_Fac_Pipe_T_02_Child_OilRig_C::Is_Oil_Dripping' has a wrong offset!");

}

