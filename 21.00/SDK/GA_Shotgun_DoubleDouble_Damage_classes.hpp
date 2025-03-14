﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Shotgun_DoubleDouble_Damage

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "GA_Ranged_GenericDamage_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GA_Shotgun_DoubleDouble_Damage.GA_Shotgun_DoubleDouble_Damage_C
// 0x0010 (0x0B60 - 0x0B50)
class UGA_Shotgun_DoubleDouble_Damage_C final : public UGA_Ranged_GenericDamage_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0B50(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UClass*                                 GE_SelfKnock;                                      // 0x0B58(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_GA_Shotgun_DoubleDouble_Damage(int32 EntryPoint);
	void K2_CommitExecute();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_Shotgun_DoubleDouble_Damage_C">();
	}
	static class UGA_Shotgun_DoubleDouble_Damage_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_Shotgun_DoubleDouble_Damage_C>();
	}
};
static_assert(alignof(UGA_Shotgun_DoubleDouble_Damage_C) == 0x000008, "Wrong alignment on UGA_Shotgun_DoubleDouble_Damage_C");
static_assert(sizeof(UGA_Shotgun_DoubleDouble_Damage_C) == 0x000B60, "Wrong size on UGA_Shotgun_DoubleDouble_Damage_C");
static_assert(offsetof(UGA_Shotgun_DoubleDouble_Damage_C, UberGraphFrame) == 0x000B50, "Member 'UGA_Shotgun_DoubleDouble_Damage_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UGA_Shotgun_DoubleDouble_Damage_C, GE_SelfKnock) == 0x000B58, "Member 'UGA_Shotgun_DoubleDouble_Damage_C::GE_SelfKnock' has a wrong offset!");

}

