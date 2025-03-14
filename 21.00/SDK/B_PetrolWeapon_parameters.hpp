﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_PetrolWeapon

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "FortniteGame_structs.hpp"


namespace SDK::Params
{

// Function B_PetrolWeapon.B_PetrolWeapon_C.ExecuteUbergraph_B_PetrolWeapon
// 0x02F8 (0x02F8 - 0x0000)
struct B_PetrolWeapon_C_ExecuteUbergraph_B_PetrolWeapon final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHitResult                             CallFunc_K2_SetActorRelativeTransform_SweepHitResult; // 0x0008(0x00E0)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x00E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_HasAuthority_ReturnValue;                 // 0x00E9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_HasAuthority_ReturnValue_1;               // 0x00EA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_EB[0x5];                                       // 0x00EB(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x00F0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_HasAuthority_ReturnValue_2;               // 0x0108(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_109[0x7];                                      // 0x0109(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHitResult                             CallFunc_MakeHitResult_ReturnValue;                // 0x0110(0x00E0)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	class AFortProjectileBase*                    K2Node_Event_SpawnProjectile;                      // 0x01F0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_AddPreviousSource_ReturnValue;            // 0x01F8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x01FC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_bPersistentFire;                      // 0x01FD(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_bSecondaryFire;                       // 0x01FE(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1FF[0x1];                                      // 0x01FF(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	class UNiagaraComponent*                      CallFunc_SpawnSystemAttached_ReturnValue;          // 0x0200(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FWeaponHudKeyActionVisibility          K2Node_MakeStruct_WeaponHudKeyActionVisibility;    // 0x0208(0x0008)(NoDestructor)
	struct FWeaponHudKeyActionVisibility          K2Node_MakeStruct_WeaponHudKeyActionVisibility_1;  // 0x0210(0x0008)(NoDestructor)
	TArray<struct FWeaponHudKeyActionVisibility>  K2Node_MakeArray_Array;                            // 0x0218(0x0010)(ConstParm, ReferenceParm)
	bool                                          K2Node_CustomEvent_IsTargeting;                    // 0x0228(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_229[0x3];                                      // 0x0229(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FWeaponHudKeyActionVisibility          K2Node_MakeStruct_WeaponHudKeyActionVisibility_2;  // 0x022C(0x0008)(NoDestructor)
	struct FWeaponHudKeyActionVisibility          K2Node_MakeStruct_WeaponHudKeyActionVisibility_3;  // 0x0234(0x0008)(NoDestructor)
	struct FWeaponHudKeyActionVisibility          K2Node_MakeStruct_WeaponHudKeyActionVisibility_4;  // 0x023C(0x0008)(NoDestructor)
	uint8                                         Pad_244[0x4];                                      // 0x0244(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FWeaponHudKeyActionVisibility>  K2Node_MakeArray_Array_1;                          // 0x0248(0x0010)(ConstParm, ReferenceParm)
	struct FWeaponHudKeyActionVisibility          K2Node_MakeStruct_WeaponHudKeyActionVisibility_5;  // 0x0258(0x0008)(NoDestructor)
	TArray<struct FWeaponHudKeyActionVisibility>  K2Node_MakeArray_Array_2;                          // 0x0260(0x0010)(ConstParm, ReferenceParm)
	class APawn*                                  CallFunc_GetInstigator_ReturnValue;                // 0x0270(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPawn*                              K2Node_DynamicCast_AsFort_Pawn;                    // 0x0278(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0280(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_281[0x3];                                      // 0x0281(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0284(0x000C)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_1;            // 0x0290(0x000C)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_2;            // 0x029C(0x000C)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x02A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2A9[0x7];                                      // 0x02A9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APawn*                                  CallFunc_GetInstigator_ReturnValue_1;              // 0x02B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPawn*                              K2Node_DynamicCast_AsFort_Pawn_1;                  // 0x02B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x02C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2C1[0x3];                                      // 0x02C1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_3;            // 0x02C4(0x000C)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  CallFunc_GetInstigator_ReturnValue_2;              // 0x02D0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAbilityAsync_WaitGameplayTagAdded*     CallFunc_WaitGameplayTagAddToActor_ReturnValue;    // 0x02D8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  CallFunc_GetInstigator_ReturnValue_3;              // 0x02E0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAbilityAsync_WaitGameplayTagRemoved*   CallFunc_WaitGameplayTagRemoveFromActor_ReturnValue; // 0x02E8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x02F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_3;                    // 0x02F1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(B_PetrolWeapon_C_ExecuteUbergraph_B_PetrolWeapon) == 0x000008, "Wrong alignment on B_PetrolWeapon_C_ExecuteUbergraph_B_PetrolWeapon");
static_assert(sizeof(B_PetrolWeapon_C_ExecuteUbergraph_B_PetrolWeapon) == 0x0002F8, "Wrong size on B_PetrolWeapon_C_ExecuteUbergraph_B_PetrolWeapon");
static_assert(offsetof(B_PetrolWeapon_C_ExecuteUbergraph_B_PetrolWeapon, EntryPoint) == 0x000000, "Member 'B_PetrolWeapon_C_ExecuteUbergraph_B_PetrolWeapon::EntryPoint' has a wrong offset!");
static_assert(offsetof(B_PetrolWeapon_C_ExecuteUbergraph_B_PetrolWeapon, CallFunc_K2_SetActorRelativeTransform_SweepHitResult) == 0x000008, "Member 'B_PetrolWeapon_C_ExecuteUbergraph_B_PetrolWeapon::CallFunc_K2_SetActorRelativeTransform_SweepHitResult' has a wrong offset!");
static_assert(offsetof(B_PetrolWeapon_C_ExecuteUbergraph_B_PetrolWeapon, CallFunc_IsValid_ReturnValue) == 0x0000E8, "Member 'B_PetrolWeapon_C_ExecuteUbergraph_B_PetrolWeapon::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_PetrolWeapon_C_ExecuteUbergraph_B_PetrolWeapon, CallFunc_HasAuthority_ReturnValue) == 0x0000E9, "Member 'B_PetrolWeapon_C_ExecuteUbergraph_B_PetrolWeapon::CallFunc_HasAuthority_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_PetrolWeapon_C_ExecuteUbergraph_B_PetrolWeapon, CallFunc_HasAuthority_ReturnValue_1) == 0x0000EA, "Member 'B_PetrolWeapon_C_ExecuteUbergraph_B_PetrolWeapon::CallFunc_HasAuthority_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(B_PetrolWeapon_C_ExecuteUbergraph_B_PetrolWeapon, CallFunc_K2_GetActorLocation_ReturnValue) == 0x0000F0, "Member 'B_PetrolWeapon_C_ExecuteUbergraph_B_PetrolWeapon::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_PetrolWeapon_C_ExecuteUbergraph_B_PetrolWeapon, CallFunc_HasAuthority_ReturnValue_2) == 0x000108, "Member 'B_PetrolWeapon_C_ExecuteUbergraph_B_PetrolWeapon::CallFunc_HasAuthority_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(B_PetrolWeapon_C_ExecuteUbergraph_B_PetrolWeapon, CallFunc_MakeHitResult_ReturnValue) == 0x000110, "Member 'B_PetrolWeapon_C_ExecuteUbergraph_B_PetrolWeapon::CallFunc_MakeHitResult_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_PetrolWeapon_C_ExecuteUbergraph_B_PetrolWeapon, K2Node_Event_SpawnProjectile) == 0x0001F0, "Member 'B_PetrolWeapon_C_ExecuteUbergraph_B_PetrolWeapon::K2Node_Event_SpawnProjectile' has a wrong offset!");
static_assert(offsetof(B_PetrolWeapon_C_ExecuteUbergraph_B_PetrolWeapon, CallFunc_AddPreviousSource_ReturnValue) == 0x0001F8, "Member 'B_PetrolWeapon_C_ExecuteUbergraph_B_PetrolWeapon::CallFunc_AddPreviousSource_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_PetrolWeapon_C_ExecuteUbergraph_B_PetrolWeapon, CallFunc_Not_PreBool_ReturnValue) == 0x0001FC, "Member 'B_PetrolWeapon_C_ExecuteUbergraph_B_PetrolWeapon::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_PetrolWeapon_C_ExecuteUbergraph_B_PetrolWeapon, K2Node_Event_bPersistentFire) == 0x0001FD, "Member 'B_PetrolWeapon_C_ExecuteUbergraph_B_PetrolWeapon::K2Node_Event_bPersistentFire' has a wrong offset!");
static_assert(offsetof(B_PetrolWeapon_C_ExecuteUbergraph_B_PetrolWeapon, K2Node_Event_bSecondaryFire) == 0x0001FE, "Member 'B_PetrolWeapon_C_ExecuteUbergraph_B_PetrolWeapon::K2Node_Event_bSecondaryFire' has a wrong offset!");
static_assert(offsetof(B_PetrolWeapon_C_ExecuteUbergraph_B_PetrolWeapon, CallFunc_SpawnSystemAttached_ReturnValue) == 0x000200, "Member 'B_PetrolWeapon_C_ExecuteUbergraph_B_PetrolWeapon::CallFunc_SpawnSystemAttached_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_PetrolWeapon_C_ExecuteUbergraph_B_PetrolWeapon, K2Node_MakeStruct_WeaponHudKeyActionVisibility) == 0x000208, "Member 'B_PetrolWeapon_C_ExecuteUbergraph_B_PetrolWeapon::K2Node_MakeStruct_WeaponHudKeyActionVisibility' has a wrong offset!");
static_assert(offsetof(B_PetrolWeapon_C_ExecuteUbergraph_B_PetrolWeapon, K2Node_MakeStruct_WeaponHudKeyActionVisibility_1) == 0x000210, "Member 'B_PetrolWeapon_C_ExecuteUbergraph_B_PetrolWeapon::K2Node_MakeStruct_WeaponHudKeyActionVisibility_1' has a wrong offset!");
static_assert(offsetof(B_PetrolWeapon_C_ExecuteUbergraph_B_PetrolWeapon, K2Node_MakeArray_Array) == 0x000218, "Member 'B_PetrolWeapon_C_ExecuteUbergraph_B_PetrolWeapon::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(B_PetrolWeapon_C_ExecuteUbergraph_B_PetrolWeapon, K2Node_CustomEvent_IsTargeting) == 0x000228, "Member 'B_PetrolWeapon_C_ExecuteUbergraph_B_PetrolWeapon::K2Node_CustomEvent_IsTargeting' has a wrong offset!");
static_assert(offsetof(B_PetrolWeapon_C_ExecuteUbergraph_B_PetrolWeapon, K2Node_MakeStruct_WeaponHudKeyActionVisibility_2) == 0x00022C, "Member 'B_PetrolWeapon_C_ExecuteUbergraph_B_PetrolWeapon::K2Node_MakeStruct_WeaponHudKeyActionVisibility_2' has a wrong offset!");
static_assert(offsetof(B_PetrolWeapon_C_ExecuteUbergraph_B_PetrolWeapon, K2Node_MakeStruct_WeaponHudKeyActionVisibility_3) == 0x000234, "Member 'B_PetrolWeapon_C_ExecuteUbergraph_B_PetrolWeapon::K2Node_MakeStruct_WeaponHudKeyActionVisibility_3' has a wrong offset!");
static_assert(offsetof(B_PetrolWeapon_C_ExecuteUbergraph_B_PetrolWeapon, K2Node_MakeStruct_WeaponHudKeyActionVisibility_4) == 0x00023C, "Member 'B_PetrolWeapon_C_ExecuteUbergraph_B_PetrolWeapon::K2Node_MakeStruct_WeaponHudKeyActionVisibility_4' has a wrong offset!");
static_assert(offsetof(B_PetrolWeapon_C_ExecuteUbergraph_B_PetrolWeapon, K2Node_MakeArray_Array_1) == 0x000248, "Member 'B_PetrolWeapon_C_ExecuteUbergraph_B_PetrolWeapon::K2Node_MakeArray_Array_1' has a wrong offset!");
static_assert(offsetof(B_PetrolWeapon_C_ExecuteUbergraph_B_PetrolWeapon, K2Node_MakeStruct_WeaponHudKeyActionVisibility_5) == 0x000258, "Member 'B_PetrolWeapon_C_ExecuteUbergraph_B_PetrolWeapon::K2Node_MakeStruct_WeaponHudKeyActionVisibility_5' has a wrong offset!");
static_assert(offsetof(B_PetrolWeapon_C_ExecuteUbergraph_B_PetrolWeapon, K2Node_MakeArray_Array_2) == 0x000260, "Member 'B_PetrolWeapon_C_ExecuteUbergraph_B_PetrolWeapon::K2Node_MakeArray_Array_2' has a wrong offset!");
static_assert(offsetof(B_PetrolWeapon_C_ExecuteUbergraph_B_PetrolWeapon, CallFunc_GetInstigator_ReturnValue) == 0x000270, "Member 'B_PetrolWeapon_C_ExecuteUbergraph_B_PetrolWeapon::CallFunc_GetInstigator_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_PetrolWeapon_C_ExecuteUbergraph_B_PetrolWeapon, K2Node_DynamicCast_AsFort_Pawn) == 0x000278, "Member 'B_PetrolWeapon_C_ExecuteUbergraph_B_PetrolWeapon::K2Node_DynamicCast_AsFort_Pawn' has a wrong offset!");
static_assert(offsetof(B_PetrolWeapon_C_ExecuteUbergraph_B_PetrolWeapon, K2Node_DynamicCast_bSuccess) == 0x000280, "Member 'B_PetrolWeapon_C_ExecuteUbergraph_B_PetrolWeapon::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(B_PetrolWeapon_C_ExecuteUbergraph_B_PetrolWeapon, K2Node_CreateDelegate_OutputDelegate) == 0x000284, "Member 'B_PetrolWeapon_C_ExecuteUbergraph_B_PetrolWeapon::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(B_PetrolWeapon_C_ExecuteUbergraph_B_PetrolWeapon, K2Node_CreateDelegate_OutputDelegate_1) == 0x000290, "Member 'B_PetrolWeapon_C_ExecuteUbergraph_B_PetrolWeapon::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(B_PetrolWeapon_C_ExecuteUbergraph_B_PetrolWeapon, K2Node_CreateDelegate_OutputDelegate_2) == 0x00029C, "Member 'B_PetrolWeapon_C_ExecuteUbergraph_B_PetrolWeapon::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(B_PetrolWeapon_C_ExecuteUbergraph_B_PetrolWeapon, CallFunc_IsValid_ReturnValue_1) == 0x0002A8, "Member 'B_PetrolWeapon_C_ExecuteUbergraph_B_PetrolWeapon::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(B_PetrolWeapon_C_ExecuteUbergraph_B_PetrolWeapon, CallFunc_GetInstigator_ReturnValue_1) == 0x0002B0, "Member 'B_PetrolWeapon_C_ExecuteUbergraph_B_PetrolWeapon::CallFunc_GetInstigator_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(B_PetrolWeapon_C_ExecuteUbergraph_B_PetrolWeapon, K2Node_DynamicCast_AsFort_Pawn_1) == 0x0002B8, "Member 'B_PetrolWeapon_C_ExecuteUbergraph_B_PetrolWeapon::K2Node_DynamicCast_AsFort_Pawn_1' has a wrong offset!");
static_assert(offsetof(B_PetrolWeapon_C_ExecuteUbergraph_B_PetrolWeapon, K2Node_DynamicCast_bSuccess_1) == 0x0002C0, "Member 'B_PetrolWeapon_C_ExecuteUbergraph_B_PetrolWeapon::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(B_PetrolWeapon_C_ExecuteUbergraph_B_PetrolWeapon, K2Node_CreateDelegate_OutputDelegate_3) == 0x0002C4, "Member 'B_PetrolWeapon_C_ExecuteUbergraph_B_PetrolWeapon::K2Node_CreateDelegate_OutputDelegate_3' has a wrong offset!");
static_assert(offsetof(B_PetrolWeapon_C_ExecuteUbergraph_B_PetrolWeapon, CallFunc_GetInstigator_ReturnValue_2) == 0x0002D0, "Member 'B_PetrolWeapon_C_ExecuteUbergraph_B_PetrolWeapon::CallFunc_GetInstigator_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(B_PetrolWeapon_C_ExecuteUbergraph_B_PetrolWeapon, CallFunc_WaitGameplayTagAddToActor_ReturnValue) == 0x0002D8, "Member 'B_PetrolWeapon_C_ExecuteUbergraph_B_PetrolWeapon::CallFunc_WaitGameplayTagAddToActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_PetrolWeapon_C_ExecuteUbergraph_B_PetrolWeapon, CallFunc_GetInstigator_ReturnValue_3) == 0x0002E0, "Member 'B_PetrolWeapon_C_ExecuteUbergraph_B_PetrolWeapon::CallFunc_GetInstigator_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(B_PetrolWeapon_C_ExecuteUbergraph_B_PetrolWeapon, CallFunc_WaitGameplayTagRemoveFromActor_ReturnValue) == 0x0002E8, "Member 'B_PetrolWeapon_C_ExecuteUbergraph_B_PetrolWeapon::CallFunc_WaitGameplayTagRemoveFromActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_PetrolWeapon_C_ExecuteUbergraph_B_PetrolWeapon, CallFunc_IsValid_ReturnValue_2) == 0x0002F0, "Member 'B_PetrolWeapon_C_ExecuteUbergraph_B_PetrolWeapon::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(B_PetrolWeapon_C_ExecuteUbergraph_B_PetrolWeapon, CallFunc_IsValid_ReturnValue_3) == 0x0002F1, "Member 'B_PetrolWeapon_C_ExecuteUbergraph_B_PetrolWeapon::CallFunc_IsValid_ReturnValue_3' has a wrong offset!");

// Function B_PetrolWeapon.B_PetrolWeapon_C.HUDKeyAction_Targeting
// 0x0001 (0x0001 - 0x0000)
struct B_PetrolWeapon_C_HUDKeyAction_Targeting final
{
public:
	bool                                          IsTargeting;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(B_PetrolWeapon_C_HUDKeyAction_Targeting) == 0x000001, "Wrong alignment on B_PetrolWeapon_C_HUDKeyAction_Targeting");
static_assert(sizeof(B_PetrolWeapon_C_HUDKeyAction_Targeting) == 0x000001, "Wrong size on B_PetrolWeapon_C_HUDKeyAction_Targeting");
static_assert(offsetof(B_PetrolWeapon_C_HUDKeyAction_Targeting, IsTargeting) == 0x000000, "Member 'B_PetrolWeapon_C_HUDKeyAction_Targeting::IsTargeting' has a wrong offset!");

// Function B_PetrolWeapon.B_PetrolWeapon_C.OnPlayWeaponFireFX
// 0x0002 (0x0002 - 0x0000)
struct B_PetrolWeapon_C_OnPlayWeaponFireFX final
{
public:
	bool                                          bPersistentFire;                                   // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bSecondaryFire;                                    // 0x0001(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(B_PetrolWeapon_C_OnPlayWeaponFireFX) == 0x000001, "Wrong alignment on B_PetrolWeapon_C_OnPlayWeaponFireFX");
static_assert(sizeof(B_PetrolWeapon_C_OnPlayWeaponFireFX) == 0x000002, "Wrong size on B_PetrolWeapon_C_OnPlayWeaponFireFX");
static_assert(offsetof(B_PetrolWeapon_C_OnPlayWeaponFireFX, bPersistentFire) == 0x000000, "Member 'B_PetrolWeapon_C_OnPlayWeaponFireFX::bPersistentFire' has a wrong offset!");
static_assert(offsetof(B_PetrolWeapon_C_OnPlayWeaponFireFX, bSecondaryFire) == 0x000001, "Member 'B_PetrolWeapon_C_OnPlayWeaponFireFX::bSecondaryFire' has a wrong offset!");

// Function B_PetrolWeapon.B_PetrolWeapon_C.OnSpawnProjectile
// 0x0008 (0x0008 - 0x0000)
struct B_PetrolWeapon_C_OnSpawnProjectile final
{
public:
	class AFortProjectileBase*                    SpawnProjectile;                                   // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(B_PetrolWeapon_C_OnSpawnProjectile) == 0x000008, "Wrong alignment on B_PetrolWeapon_C_OnSpawnProjectile");
static_assert(sizeof(B_PetrolWeapon_C_OnSpawnProjectile) == 0x000008, "Wrong size on B_PetrolWeapon_C_OnSpawnProjectile");
static_assert(offsetof(B_PetrolWeapon_C_OnSpawnProjectile, SpawnProjectile) == 0x000000, "Member 'B_PetrolWeapon_C_OnSpawnProjectile::SpawnProjectile' has a wrong offset!");

}

