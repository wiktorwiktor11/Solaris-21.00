﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_ValetMod_OffRoadTire_TrajectoryPrimary

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "GA_Athena_Consumable_Throw_Parent_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GA_ValetMod_OffRoadTire_TrajectoryPrimary.GA_ValetMod_OffRoadTire_TrajectoryPrimary_C
// 0x0010 (0x0EE8 - 0x0ED8)
class UGA_ValetMod_OffRoadTire_TrajectoryPrimary_C final : public UGA_Athena_Consumable_Throw_Parent_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_GA_ValetMod_OffRoadTire_TrajectoryPrimary_C; // 0x0ED8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USoundBase*                             ThrowSFX;                                          // 0x0EE0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_GA_ValetMod_OffRoadTire_TrajectoryPrimary(int32 EntryPoint);
	void ThrowMontageStarted();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_ValetMod_OffRoadTire_TrajectoryPrimary_C">();
	}
	static class UGA_ValetMod_OffRoadTire_TrajectoryPrimary_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_ValetMod_OffRoadTire_TrajectoryPrimary_C>();
	}
};
static_assert(alignof(UGA_ValetMod_OffRoadTire_TrajectoryPrimary_C) == 0x000008, "Wrong alignment on UGA_ValetMod_OffRoadTire_TrajectoryPrimary_C");
static_assert(sizeof(UGA_ValetMod_OffRoadTire_TrajectoryPrimary_C) == 0x000EE8, "Wrong size on UGA_ValetMod_OffRoadTire_TrajectoryPrimary_C");
static_assert(offsetof(UGA_ValetMod_OffRoadTire_TrajectoryPrimary_C, UberGraphFrame_GA_ValetMod_OffRoadTire_TrajectoryPrimary_C) == 0x000ED8, "Member 'UGA_ValetMod_OffRoadTire_TrajectoryPrimary_C::UberGraphFrame_GA_ValetMod_OffRoadTire_TrajectoryPrimary_C' has a wrong offset!");
static_assert(offsetof(UGA_ValetMod_OffRoadTire_TrajectoryPrimary_C, ThrowSFX) == 0x000EE0, "Member 'UGA_ValetMod_OffRoadTire_TrajectoryPrimary_C::ThrowSFX' has a wrong offset!");

}

