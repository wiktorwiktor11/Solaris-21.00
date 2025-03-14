﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Ostrich_LoadSingleRocket

#include "Basic.hpp"

#include "GameplayAbilities_structs.hpp"


namespace SDK::Params
{

// Function GA_Ostrich_LoadSingleRocket.GA_Ostrich_LoadSingleRocket_C.ExecuteUbergraph_GA_Ostrich_LoadSingleRocket
// 0x00C8 (0x00C8 - 0x0000)
struct GA_Ostrich_LoadSingleRocket_C_ExecuteUbergraph_GA_Ostrich_LoadSingleRocket final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetAvatarActorFromActorInfo_ReturnValue;  // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_K2_CommitAbility_ReturnValue;             // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_11[0x7];                                       // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerPawn_Athena_C*                   K2Node_DynamicCast_AsPlayer_Pawn_Athena;           // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_21[0x7];                                       // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AFortWeaponRanged_Ostrich*              K2Node_DynamicCast_AsFort_Weapon_Ranged_Ostrich;   // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_31[0x7];                                       // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayAbilityActorInfo              CallFunc_GetActorInfo_ReturnValue;                 // 0x0038(0x0048)(ContainsInstancedReference)
	class AFortPlayerPawn*                        K2Node_DynamicCast_AsFort_Player_Pawn;             // 0x0080(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_2;                     // 0x0088(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_89[0x7];                                       // 0x0089(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayAbilityTargetDataHandle       CallFunc_AbilityTargetDataFromActor_ReturnValue;   // 0x0090(0x0028)()
	TArray<struct FActiveGameplayEffectHandle>    CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue; // 0x00B8(0x0010)(ReferenceParm)
};
static_assert(alignof(GA_Ostrich_LoadSingleRocket_C_ExecuteUbergraph_GA_Ostrich_LoadSingleRocket) == 0x000008, "Wrong alignment on GA_Ostrich_LoadSingleRocket_C_ExecuteUbergraph_GA_Ostrich_LoadSingleRocket");
static_assert(sizeof(GA_Ostrich_LoadSingleRocket_C_ExecuteUbergraph_GA_Ostrich_LoadSingleRocket) == 0x0000C8, "Wrong size on GA_Ostrich_LoadSingleRocket_C_ExecuteUbergraph_GA_Ostrich_LoadSingleRocket");
static_assert(offsetof(GA_Ostrich_LoadSingleRocket_C_ExecuteUbergraph_GA_Ostrich_LoadSingleRocket, EntryPoint) == 0x000000, "Member 'GA_Ostrich_LoadSingleRocket_C_ExecuteUbergraph_GA_Ostrich_LoadSingleRocket::EntryPoint' has a wrong offset!");
static_assert(offsetof(GA_Ostrich_LoadSingleRocket_C_ExecuteUbergraph_GA_Ostrich_LoadSingleRocket, CallFunc_GetAvatarActorFromActorInfo_ReturnValue) == 0x000008, "Member 'GA_Ostrich_LoadSingleRocket_C_ExecuteUbergraph_GA_Ostrich_LoadSingleRocket::CallFunc_GetAvatarActorFromActorInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Ostrich_LoadSingleRocket_C_ExecuteUbergraph_GA_Ostrich_LoadSingleRocket, CallFunc_K2_CommitAbility_ReturnValue) == 0x000010, "Member 'GA_Ostrich_LoadSingleRocket_C_ExecuteUbergraph_GA_Ostrich_LoadSingleRocket::CallFunc_K2_CommitAbility_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Ostrich_LoadSingleRocket_C_ExecuteUbergraph_GA_Ostrich_LoadSingleRocket, K2Node_DynamicCast_AsPlayer_Pawn_Athena) == 0x000018, "Member 'GA_Ostrich_LoadSingleRocket_C_ExecuteUbergraph_GA_Ostrich_LoadSingleRocket::K2Node_DynamicCast_AsPlayer_Pawn_Athena' has a wrong offset!");
static_assert(offsetof(GA_Ostrich_LoadSingleRocket_C_ExecuteUbergraph_GA_Ostrich_LoadSingleRocket, K2Node_DynamicCast_bSuccess) == 0x000020, "Member 'GA_Ostrich_LoadSingleRocket_C_ExecuteUbergraph_GA_Ostrich_LoadSingleRocket::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(GA_Ostrich_LoadSingleRocket_C_ExecuteUbergraph_GA_Ostrich_LoadSingleRocket, K2Node_DynamicCast_AsFort_Weapon_Ranged_Ostrich) == 0x000028, "Member 'GA_Ostrich_LoadSingleRocket_C_ExecuteUbergraph_GA_Ostrich_LoadSingleRocket::K2Node_DynamicCast_AsFort_Weapon_Ranged_Ostrich' has a wrong offset!");
static_assert(offsetof(GA_Ostrich_LoadSingleRocket_C_ExecuteUbergraph_GA_Ostrich_LoadSingleRocket, K2Node_DynamicCast_bSuccess_1) == 0x000030, "Member 'GA_Ostrich_LoadSingleRocket_C_ExecuteUbergraph_GA_Ostrich_LoadSingleRocket::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(GA_Ostrich_LoadSingleRocket_C_ExecuteUbergraph_GA_Ostrich_LoadSingleRocket, CallFunc_GetActorInfo_ReturnValue) == 0x000038, "Member 'GA_Ostrich_LoadSingleRocket_C_ExecuteUbergraph_GA_Ostrich_LoadSingleRocket::CallFunc_GetActorInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Ostrich_LoadSingleRocket_C_ExecuteUbergraph_GA_Ostrich_LoadSingleRocket, K2Node_DynamicCast_AsFort_Player_Pawn) == 0x000080, "Member 'GA_Ostrich_LoadSingleRocket_C_ExecuteUbergraph_GA_Ostrich_LoadSingleRocket::K2Node_DynamicCast_AsFort_Player_Pawn' has a wrong offset!");
static_assert(offsetof(GA_Ostrich_LoadSingleRocket_C_ExecuteUbergraph_GA_Ostrich_LoadSingleRocket, K2Node_DynamicCast_bSuccess_2) == 0x000088, "Member 'GA_Ostrich_LoadSingleRocket_C_ExecuteUbergraph_GA_Ostrich_LoadSingleRocket::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(GA_Ostrich_LoadSingleRocket_C_ExecuteUbergraph_GA_Ostrich_LoadSingleRocket, CallFunc_AbilityTargetDataFromActor_ReturnValue) == 0x000090, "Member 'GA_Ostrich_LoadSingleRocket_C_ExecuteUbergraph_GA_Ostrich_LoadSingleRocket::CallFunc_AbilityTargetDataFromActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Ostrich_LoadSingleRocket_C_ExecuteUbergraph_GA_Ostrich_LoadSingleRocket, CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue) == 0x0000B8, "Member 'GA_Ostrich_LoadSingleRocket_C_ExecuteUbergraph_GA_Ostrich_LoadSingleRocket::CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue' has a wrong offset!");

// Function GA_Ostrich_LoadSingleRocket.GA_Ostrich_LoadSingleRocket_C.SpawnFX
// 0x0060 (0x0060 - 0x0000)
struct GA_Ostrich_LoadSingleRocket_C_SpawnFX final
{
public:
	class AFortCharacterVehicle*                  Vehicle;                                           // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                 CallFunc_GetMechMesh_ReturnValue;                  // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               CallFunc_SpawnEmitterAttached_ReturnValue;         // 0x0010(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               CallFunc_SpawnEmitterAttached_ReturnValue_1;       // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               CallFunc_SpawnEmitterAttached_ReturnValue_2;       // 0x0020(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               CallFunc_SpawnEmitterAttached_ReturnValue_3;       // 0x0028(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               CallFunc_SpawnEmitterAttached_ReturnValue_4;       // 0x0030(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               CallFunc_SpawnEmitterAttached_ReturnValue_5;       // 0x0038(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               CallFunc_SpawnEmitterAttached_ReturnValue_6;       // 0x0040(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               CallFunc_SpawnEmitterAttached_ReturnValue_7;       // 0x0048(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               CallFunc_SpawnEmitterAttached_ReturnValue_8;       // 0x0050(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               CallFunc_SpawnEmitterAttached_ReturnValue_9;       // 0x0058(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GA_Ostrich_LoadSingleRocket_C_SpawnFX) == 0x000008, "Wrong alignment on GA_Ostrich_LoadSingleRocket_C_SpawnFX");
static_assert(sizeof(GA_Ostrich_LoadSingleRocket_C_SpawnFX) == 0x000060, "Wrong size on GA_Ostrich_LoadSingleRocket_C_SpawnFX");
static_assert(offsetof(GA_Ostrich_LoadSingleRocket_C_SpawnFX, Vehicle) == 0x000000, "Member 'GA_Ostrich_LoadSingleRocket_C_SpawnFX::Vehicle' has a wrong offset!");
static_assert(offsetof(GA_Ostrich_LoadSingleRocket_C_SpawnFX, CallFunc_GetMechMesh_ReturnValue) == 0x000008, "Member 'GA_Ostrich_LoadSingleRocket_C_SpawnFX::CallFunc_GetMechMesh_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Ostrich_LoadSingleRocket_C_SpawnFX, CallFunc_SpawnEmitterAttached_ReturnValue) == 0x000010, "Member 'GA_Ostrich_LoadSingleRocket_C_SpawnFX::CallFunc_SpawnEmitterAttached_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Ostrich_LoadSingleRocket_C_SpawnFX, CallFunc_SpawnEmitterAttached_ReturnValue_1) == 0x000018, "Member 'GA_Ostrich_LoadSingleRocket_C_SpawnFX::CallFunc_SpawnEmitterAttached_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GA_Ostrich_LoadSingleRocket_C_SpawnFX, CallFunc_SpawnEmitterAttached_ReturnValue_2) == 0x000020, "Member 'GA_Ostrich_LoadSingleRocket_C_SpawnFX::CallFunc_SpawnEmitterAttached_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(GA_Ostrich_LoadSingleRocket_C_SpawnFX, CallFunc_SpawnEmitterAttached_ReturnValue_3) == 0x000028, "Member 'GA_Ostrich_LoadSingleRocket_C_SpawnFX::CallFunc_SpawnEmitterAttached_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(GA_Ostrich_LoadSingleRocket_C_SpawnFX, CallFunc_SpawnEmitterAttached_ReturnValue_4) == 0x000030, "Member 'GA_Ostrich_LoadSingleRocket_C_SpawnFX::CallFunc_SpawnEmitterAttached_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(GA_Ostrich_LoadSingleRocket_C_SpawnFX, CallFunc_SpawnEmitterAttached_ReturnValue_5) == 0x000038, "Member 'GA_Ostrich_LoadSingleRocket_C_SpawnFX::CallFunc_SpawnEmitterAttached_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(GA_Ostrich_LoadSingleRocket_C_SpawnFX, CallFunc_SpawnEmitterAttached_ReturnValue_6) == 0x000040, "Member 'GA_Ostrich_LoadSingleRocket_C_SpawnFX::CallFunc_SpawnEmitterAttached_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(GA_Ostrich_LoadSingleRocket_C_SpawnFX, CallFunc_SpawnEmitterAttached_ReturnValue_7) == 0x000048, "Member 'GA_Ostrich_LoadSingleRocket_C_SpawnFX::CallFunc_SpawnEmitterAttached_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(GA_Ostrich_LoadSingleRocket_C_SpawnFX, CallFunc_SpawnEmitterAttached_ReturnValue_8) == 0x000050, "Member 'GA_Ostrich_LoadSingleRocket_C_SpawnFX::CallFunc_SpawnEmitterAttached_ReturnValue_8' has a wrong offset!");
static_assert(offsetof(GA_Ostrich_LoadSingleRocket_C_SpawnFX, CallFunc_SpawnEmitterAttached_ReturnValue_9) == 0x000058, "Member 'GA_Ostrich_LoadSingleRocket_C_SpawnFX::CallFunc_SpawnEmitterAttached_ReturnValue_9' has a wrong offset!");

}

