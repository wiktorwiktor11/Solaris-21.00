﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GAB_CarryPlayer

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GAB_CarryPlayer.GAB_CarryPlayer_C
// 0x0038 (0x0B78 - 0x0B40)
class UGAB_CarryPlayer_C final : public UFortGameplayAbility_CarryPlayer
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0B40(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class AFortPlayerPawn*                        PlayerPawn;                                        // 0x0B48(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   DBNOCarryHolster;                                  // 0x0B50(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bCompletedPickup;                                  // 0x0B54(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_B55[0x3];                                      // 0x0B55(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                PickupLocation;                                    // 0x0B58(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CarryLongDistanceThreshold;                        // 0x0B70(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_GAB_CarryPlayer(int32 EntryPoint);
	void K2_ActivateAbility();
	void K2_OnEndAbility(bool bWasCancelled);
	void OnBlendOut_C4440F1640E9A8D79E44FD8C23525824();
	void OnCancelled_C4440F1640E9A8D79E44FD8C23525824();
	void OnCompleted_C4440F1640E9A8D79E44FD8C23525824();
	void OnInterrupted_C4440F1640E9A8D79E44FD8C23525824();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GAB_CarryPlayer_C">();
	}
	static class UGAB_CarryPlayer_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGAB_CarryPlayer_C>();
	}
};
static_assert(alignof(UGAB_CarryPlayer_C) == 0x000008, "Wrong alignment on UGAB_CarryPlayer_C");
static_assert(sizeof(UGAB_CarryPlayer_C) == 0x000B78, "Wrong size on UGAB_CarryPlayer_C");
static_assert(offsetof(UGAB_CarryPlayer_C, UberGraphFrame) == 0x000B40, "Member 'UGAB_CarryPlayer_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UGAB_CarryPlayer_C, PlayerPawn) == 0x000B48, "Member 'UGAB_CarryPlayer_C::PlayerPawn' has a wrong offset!");
static_assert(offsetof(UGAB_CarryPlayer_C, DBNOCarryHolster) == 0x000B50, "Member 'UGAB_CarryPlayer_C::DBNOCarryHolster' has a wrong offset!");
static_assert(offsetof(UGAB_CarryPlayer_C, bCompletedPickup) == 0x000B54, "Member 'UGAB_CarryPlayer_C::bCompletedPickup' has a wrong offset!");
static_assert(offsetof(UGAB_CarryPlayer_C, PickupLocation) == 0x000B58, "Member 'UGAB_CarryPlayer_C::PickupLocation' has a wrong offset!");
static_assert(offsetof(UGAB_CarryPlayer_C, CarryLongDistanceThreshold) == 0x000B70, "Member 'UGAB_CarryPlayer_C::CarryLongDistanceThreshold' has a wrong offset!");

}

