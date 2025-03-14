﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Coaster_BreakBuildings

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GA_Coaster_BreakBuildings.GA_Coaster_BreakBuildings_C
// 0x0048 (0x0B58 - 0x0B10)
class UGA_Coaster_BreakBuildings_C final : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0B10(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class AFortPlayerPawn*                        OLD_PLAYER_VARIABLE_DELETE;                        // 0x0B18(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                HitLocation;                                       // 0x0B20(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                HitNormal;                                         // 0x0B38(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AOctopusVehicle_V2_C*                   Octopus_Actor;                                     // 0x0B50(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void BallerEventHit(const struct FVector& Location, const struct FVector& Normal, float Force, class AActor* Hit_Actor);
	void ExecuteUbergraph_GA_Coaster_BreakBuildings(int32 EntryPoint);
	void FailedToActivatePassiveAbility();
	void K2_ActivateAbility();
	void K2_OnEndAbility(bool bWasCancelled);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_Coaster_BreakBuildings_C">();
	}
	static class UGA_Coaster_BreakBuildings_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_Coaster_BreakBuildings_C>();
	}
};
static_assert(alignof(UGA_Coaster_BreakBuildings_C) == 0x000008, "Wrong alignment on UGA_Coaster_BreakBuildings_C");
static_assert(sizeof(UGA_Coaster_BreakBuildings_C) == 0x000B58, "Wrong size on UGA_Coaster_BreakBuildings_C");
static_assert(offsetof(UGA_Coaster_BreakBuildings_C, UberGraphFrame) == 0x000B10, "Member 'UGA_Coaster_BreakBuildings_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UGA_Coaster_BreakBuildings_C, OLD_PLAYER_VARIABLE_DELETE) == 0x000B18, "Member 'UGA_Coaster_BreakBuildings_C::OLD_PLAYER_VARIABLE_DELETE' has a wrong offset!");
static_assert(offsetof(UGA_Coaster_BreakBuildings_C, HitLocation) == 0x000B20, "Member 'UGA_Coaster_BreakBuildings_C::HitLocation' has a wrong offset!");
static_assert(offsetof(UGA_Coaster_BreakBuildings_C, HitNormal) == 0x000B38, "Member 'UGA_Coaster_BreakBuildings_C::HitNormal' has a wrong offset!");
static_assert(offsetof(UGA_Coaster_BreakBuildings_C, Octopus_Actor) == 0x000B50, "Member 'UGA_Coaster_BreakBuildings_C::Octopus_Actor' has a wrong offset!");

}

