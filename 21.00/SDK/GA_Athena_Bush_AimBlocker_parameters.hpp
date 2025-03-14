﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Athena_Bush_AimBlocker

#include "Basic.hpp"

#include "GameplayTags_structs.hpp"
#include "GameplayAbilities_structs.hpp"


namespace SDK::Params
{

// Function GA_Athena_Bush_AimBlocker.GA_Athena_Bush_AimBlocker_C.ExecuteUbergraph_GA_Athena_Bush_AimBlocker
// 0x00E8 (0x00E8 - 0x0000)
struct GA_Athena_Bush_AimBlocker_C_ExecuteUbergraph_GA_Athena_Bush_AimBlocker final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayTagContainer                  CallFunc_MakeGameplayTagContainerFromTag_ReturnValue; // 0x0008(0x0020)()
	class UFortAbilityTask_AutoAimConditionFailed* CallFunc_CreateAutoAimConditionFailed_ReturnValue; // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_31[0x3];                                       // 0x0031(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0034(0x000C)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameplayAbilityActorInfo              CallFunc_GetActorInfo_ReturnValue;                 // 0x0040(0x0048)(ContainsInstancedReference)
	class AFortPlayerPawn*                        K2Node_DynamicCast_AsFort_Player_Pawn;             // 0x0088(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_91[0x7];                                       // 0x0091(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayAbilityTargetDataHandle       CallFunc_AbilityTargetDataFromActor_ReturnValue;   // 0x0098(0x0028)()
	bool                                          CallFunc_K2_CommitAbility_ReturnValue;             // 0x00C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C1[0x7];                                       // 0x00C1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FActiveGameplayEffectHandle>    CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue; // 0x00C8(0x0010)(ReferenceParm)
	bool                                          K2Node_Event_bWasCancelled;                        // 0x00D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_D9[0x3];                                       // 0x00D9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FActiveGameplayEffectHandle            CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue; // 0x00DC(0x0008)(NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GA_Athena_Bush_AimBlocker_C_ExecuteUbergraph_GA_Athena_Bush_AimBlocker) == 0x000008, "Wrong alignment on GA_Athena_Bush_AimBlocker_C_ExecuteUbergraph_GA_Athena_Bush_AimBlocker");
static_assert(sizeof(GA_Athena_Bush_AimBlocker_C_ExecuteUbergraph_GA_Athena_Bush_AimBlocker) == 0x0000E8, "Wrong size on GA_Athena_Bush_AimBlocker_C_ExecuteUbergraph_GA_Athena_Bush_AimBlocker");
static_assert(offsetof(GA_Athena_Bush_AimBlocker_C_ExecuteUbergraph_GA_Athena_Bush_AimBlocker, EntryPoint) == 0x000000, "Member 'GA_Athena_Bush_AimBlocker_C_ExecuteUbergraph_GA_Athena_Bush_AimBlocker::EntryPoint' has a wrong offset!");
static_assert(offsetof(GA_Athena_Bush_AimBlocker_C_ExecuteUbergraph_GA_Athena_Bush_AimBlocker, CallFunc_MakeGameplayTagContainerFromTag_ReturnValue) == 0x000008, "Member 'GA_Athena_Bush_AimBlocker_C_ExecuteUbergraph_GA_Athena_Bush_AimBlocker::CallFunc_MakeGameplayTagContainerFromTag_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_Bush_AimBlocker_C_ExecuteUbergraph_GA_Athena_Bush_AimBlocker, CallFunc_CreateAutoAimConditionFailed_ReturnValue) == 0x000028, "Member 'GA_Athena_Bush_AimBlocker_C_ExecuteUbergraph_GA_Athena_Bush_AimBlocker::CallFunc_CreateAutoAimConditionFailed_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_Bush_AimBlocker_C_ExecuteUbergraph_GA_Athena_Bush_AimBlocker, CallFunc_IsValid_ReturnValue) == 0x000030, "Member 'GA_Athena_Bush_AimBlocker_C_ExecuteUbergraph_GA_Athena_Bush_AimBlocker::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_Bush_AimBlocker_C_ExecuteUbergraph_GA_Athena_Bush_AimBlocker, K2Node_CreateDelegate_OutputDelegate) == 0x000034, "Member 'GA_Athena_Bush_AimBlocker_C_ExecuteUbergraph_GA_Athena_Bush_AimBlocker::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(GA_Athena_Bush_AimBlocker_C_ExecuteUbergraph_GA_Athena_Bush_AimBlocker, CallFunc_GetActorInfo_ReturnValue) == 0x000040, "Member 'GA_Athena_Bush_AimBlocker_C_ExecuteUbergraph_GA_Athena_Bush_AimBlocker::CallFunc_GetActorInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_Bush_AimBlocker_C_ExecuteUbergraph_GA_Athena_Bush_AimBlocker, K2Node_DynamicCast_AsFort_Player_Pawn) == 0x000088, "Member 'GA_Athena_Bush_AimBlocker_C_ExecuteUbergraph_GA_Athena_Bush_AimBlocker::K2Node_DynamicCast_AsFort_Player_Pawn' has a wrong offset!");
static_assert(offsetof(GA_Athena_Bush_AimBlocker_C_ExecuteUbergraph_GA_Athena_Bush_AimBlocker, K2Node_DynamicCast_bSuccess) == 0x000090, "Member 'GA_Athena_Bush_AimBlocker_C_ExecuteUbergraph_GA_Athena_Bush_AimBlocker::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(GA_Athena_Bush_AimBlocker_C_ExecuteUbergraph_GA_Athena_Bush_AimBlocker, CallFunc_AbilityTargetDataFromActor_ReturnValue) == 0x000098, "Member 'GA_Athena_Bush_AimBlocker_C_ExecuteUbergraph_GA_Athena_Bush_AimBlocker::CallFunc_AbilityTargetDataFromActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_Bush_AimBlocker_C_ExecuteUbergraph_GA_Athena_Bush_AimBlocker, CallFunc_K2_CommitAbility_ReturnValue) == 0x0000C0, "Member 'GA_Athena_Bush_AimBlocker_C_ExecuteUbergraph_GA_Athena_Bush_AimBlocker::CallFunc_K2_CommitAbility_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_Bush_AimBlocker_C_ExecuteUbergraph_GA_Athena_Bush_AimBlocker, CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue) == 0x0000C8, "Member 'GA_Athena_Bush_AimBlocker_C_ExecuteUbergraph_GA_Athena_Bush_AimBlocker::CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_Bush_AimBlocker_C_ExecuteUbergraph_GA_Athena_Bush_AimBlocker, K2Node_Event_bWasCancelled) == 0x0000D8, "Member 'GA_Athena_Bush_AimBlocker_C_ExecuteUbergraph_GA_Athena_Bush_AimBlocker::K2Node_Event_bWasCancelled' has a wrong offset!");
static_assert(offsetof(GA_Athena_Bush_AimBlocker_C_ExecuteUbergraph_GA_Athena_Bush_AimBlocker, CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue) == 0x0000DC, "Member 'GA_Athena_Bush_AimBlocker_C_ExecuteUbergraph_GA_Athena_Bush_AimBlocker::CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue' has a wrong offset!");

// Function GA_Athena_Bush_AimBlocker.GA_Athena_Bush_AimBlocker_C.K2_OnEndAbility
// 0x0001 (0x0001 - 0x0000)
struct GA_Athena_Bush_AimBlocker_C_K2_OnEndAbility final
{
public:
	bool                                          bWasCancelled;                                     // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GA_Athena_Bush_AimBlocker_C_K2_OnEndAbility) == 0x000001, "Wrong alignment on GA_Athena_Bush_AimBlocker_C_K2_OnEndAbility");
static_assert(sizeof(GA_Athena_Bush_AimBlocker_C_K2_OnEndAbility) == 0x000001, "Wrong size on GA_Athena_Bush_AimBlocker_C_K2_OnEndAbility");
static_assert(offsetof(GA_Athena_Bush_AimBlocker_C_K2_OnEndAbility, bWasCancelled) == 0x000000, "Member 'GA_Athena_Bush_AimBlocker_C_K2_OnEndAbility::bWasCancelled' has a wrong offset!");

}

