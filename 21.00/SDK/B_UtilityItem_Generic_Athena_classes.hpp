﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_UtilityItem_Generic_Athena

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "B_UtilityItem_Generic_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass B_UtilityItem_Generic_Athena.B_UtilityItem_Generic_Athena_C
// 0x0010 (0x0FE8 - 0x0FD8)
class AB_UtilityItem_Generic_Athena_C : public AB_UtilityItem_Generic_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0FD8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	bool                                          UseThrowConsumableHudKeyActions;                   // 0x0FE0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ThrowConsumableHudActionKey_Visible(bool Visible);
	void ThrowConsumableHudActionKey_Targeting(bool Targeting);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_B_UtilityItem_Generic_Athena(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"B_UtilityItem_Generic_Athena_C">();
	}
	static class AB_UtilityItem_Generic_Athena_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AB_UtilityItem_Generic_Athena_C>();
	}
};
static_assert(alignof(AB_UtilityItem_Generic_Athena_C) == 0x000008, "Wrong alignment on AB_UtilityItem_Generic_Athena_C");
static_assert(sizeof(AB_UtilityItem_Generic_Athena_C) == 0x000FE8, "Wrong size on AB_UtilityItem_Generic_Athena_C");
static_assert(offsetof(AB_UtilityItem_Generic_Athena_C, UberGraphFrame) == 0x000FD8, "Member 'AB_UtilityItem_Generic_Athena_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AB_UtilityItem_Generic_Athena_C, UseThrowConsumableHudKeyActions) == 0x000FE0, "Member 'AB_UtilityItem_Generic_Athena_C::UseThrowConsumableHudKeyActions' has a wrong offset!");

}

