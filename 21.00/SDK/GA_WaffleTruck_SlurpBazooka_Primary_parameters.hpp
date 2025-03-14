﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_WaffleTruck_SlurpBazooka_Primary

#include "Basic.hpp"

#include "GameplayAbilities_structs.hpp"
#include "GameplayTags_structs.hpp"


namespace SDK::Params
{

// Function GA_WaffleTruck_SlurpBazooka_Primary.GA_WaffleTruck_SlurpBazooka_Primary_C.GetEventData
// 0x0210 (0x0210 - 0x0000)
struct GA_WaffleTruck_SlurpBazooka_Primary_C_GetEventData final
{
public:
	struct FGameplayTag                           EventTag;                                          // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayEventData                     GameplayEventData;                                 // 0x0008(0x00B0)(Parm, OutParm)
	struct FGameplayTagContainer                  GT_TargetTags;                                     // 0x00B8(0x0020)(Edit, BlueprintVisible)
	struct FGameplayTagContainer                  GT_InstigatorTags;                                 // 0x00D8(0x0020)(Edit, BlueprintVisible)
	class AFortWeapon*                            CallFunc_GetCurrentSourceWeapon_ReturnValue;       // 0x00F8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_GetOwningActorFromActorInfo_ReturnValue;  // 0x0100(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagContainer                  CallFunc_GetWeaponDataGameplayTags_GameplayTags;   // 0x0108(0x0020)()
	bool                                          CallFunc_WeaponDataIsValid_ReturnValue;            // 0x0128(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0129(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x012A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_12B[0x5];                                      // 0x012B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetOwningActorFromActorInfo_ReturnValue_1; // 0x0130(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortWeapon*                            CallFunc_GetCurrentSourceWeapon_ReturnValue_1;     // 0x0138(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerState*                       K2Node_DynamicCast_AsFort_Player_State;            // 0x0140(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0148(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_149[0x7];                                      // 0x0149(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayEventData                     K2Node_MakeStruct_GameplayEventData;               // 0x0150(0x00B0)()
	class AFortPlayerPawn*                        CallFunc_GetCurrentPawn_ReturnValue;               // 0x0200(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0208(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GA_WaffleTruck_SlurpBazooka_Primary_C_GetEventData) == 0x000008, "Wrong alignment on GA_WaffleTruck_SlurpBazooka_Primary_C_GetEventData");
static_assert(sizeof(GA_WaffleTruck_SlurpBazooka_Primary_C_GetEventData) == 0x000210, "Wrong size on GA_WaffleTruck_SlurpBazooka_Primary_C_GetEventData");
static_assert(offsetof(GA_WaffleTruck_SlurpBazooka_Primary_C_GetEventData, EventTag) == 0x000000, "Member 'GA_WaffleTruck_SlurpBazooka_Primary_C_GetEventData::EventTag' has a wrong offset!");
static_assert(offsetof(GA_WaffleTruck_SlurpBazooka_Primary_C_GetEventData, GameplayEventData) == 0x000008, "Member 'GA_WaffleTruck_SlurpBazooka_Primary_C_GetEventData::GameplayEventData' has a wrong offset!");
static_assert(offsetof(GA_WaffleTruck_SlurpBazooka_Primary_C_GetEventData, GT_TargetTags) == 0x0000B8, "Member 'GA_WaffleTruck_SlurpBazooka_Primary_C_GetEventData::GT_TargetTags' has a wrong offset!");
static_assert(offsetof(GA_WaffleTruck_SlurpBazooka_Primary_C_GetEventData, GT_InstigatorTags) == 0x0000D8, "Member 'GA_WaffleTruck_SlurpBazooka_Primary_C_GetEventData::GT_InstigatorTags' has a wrong offset!");
static_assert(offsetof(GA_WaffleTruck_SlurpBazooka_Primary_C_GetEventData, CallFunc_GetCurrentSourceWeapon_ReturnValue) == 0x0000F8, "Member 'GA_WaffleTruck_SlurpBazooka_Primary_C_GetEventData::CallFunc_GetCurrentSourceWeapon_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_WaffleTruck_SlurpBazooka_Primary_C_GetEventData, CallFunc_GetOwningActorFromActorInfo_ReturnValue) == 0x000100, "Member 'GA_WaffleTruck_SlurpBazooka_Primary_C_GetEventData::CallFunc_GetOwningActorFromActorInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_WaffleTruck_SlurpBazooka_Primary_C_GetEventData, CallFunc_GetWeaponDataGameplayTags_GameplayTags) == 0x000108, "Member 'GA_WaffleTruck_SlurpBazooka_Primary_C_GetEventData::CallFunc_GetWeaponDataGameplayTags_GameplayTags' has a wrong offset!");
static_assert(offsetof(GA_WaffleTruck_SlurpBazooka_Primary_C_GetEventData, CallFunc_WeaponDataIsValid_ReturnValue) == 0x000128, "Member 'GA_WaffleTruck_SlurpBazooka_Primary_C_GetEventData::CallFunc_WeaponDataIsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_WaffleTruck_SlurpBazooka_Primary_C_GetEventData, CallFunc_IsValid_ReturnValue) == 0x000129, "Member 'GA_WaffleTruck_SlurpBazooka_Primary_C_GetEventData::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_WaffleTruck_SlurpBazooka_Primary_C_GetEventData, CallFunc_BooleanAND_ReturnValue) == 0x00012A, "Member 'GA_WaffleTruck_SlurpBazooka_Primary_C_GetEventData::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_WaffleTruck_SlurpBazooka_Primary_C_GetEventData, CallFunc_GetOwningActorFromActorInfo_ReturnValue_1) == 0x000130, "Member 'GA_WaffleTruck_SlurpBazooka_Primary_C_GetEventData::CallFunc_GetOwningActorFromActorInfo_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GA_WaffleTruck_SlurpBazooka_Primary_C_GetEventData, CallFunc_GetCurrentSourceWeapon_ReturnValue_1) == 0x000138, "Member 'GA_WaffleTruck_SlurpBazooka_Primary_C_GetEventData::CallFunc_GetCurrentSourceWeapon_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GA_WaffleTruck_SlurpBazooka_Primary_C_GetEventData, K2Node_DynamicCast_AsFort_Player_State) == 0x000140, "Member 'GA_WaffleTruck_SlurpBazooka_Primary_C_GetEventData::K2Node_DynamicCast_AsFort_Player_State' has a wrong offset!");
static_assert(offsetof(GA_WaffleTruck_SlurpBazooka_Primary_C_GetEventData, K2Node_DynamicCast_bSuccess) == 0x000148, "Member 'GA_WaffleTruck_SlurpBazooka_Primary_C_GetEventData::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(GA_WaffleTruck_SlurpBazooka_Primary_C_GetEventData, K2Node_MakeStruct_GameplayEventData) == 0x000150, "Member 'GA_WaffleTruck_SlurpBazooka_Primary_C_GetEventData::K2Node_MakeStruct_GameplayEventData' has a wrong offset!");
static_assert(offsetof(GA_WaffleTruck_SlurpBazooka_Primary_C_GetEventData, CallFunc_GetCurrentPawn_ReturnValue) == 0x000200, "Member 'GA_WaffleTruck_SlurpBazooka_Primary_C_GetEventData::CallFunc_GetCurrentPawn_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_WaffleTruck_SlurpBazooka_Primary_C_GetEventData, CallFunc_IsValid_ReturnValue_1) == 0x000208, "Member 'GA_WaffleTruck_SlurpBazooka_Primary_C_GetEventData::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");

// Function GA_WaffleTruck_SlurpBazooka_Primary.GA_WaffleTruck_SlurpBazooka_Primary_C.K2_CommitExecute
// 0x0128 (0x0128 - 0x0000)
struct GA_WaffleTruck_SlurpBazooka_Primary_C_K2_CommitExecute final
{
public:
	bool                                          CallFunc_K2_HasAuthority_ReturnValue;              // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsServer_ReturnValue;                     // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2[0x6];                                        // 0x0002(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayEventData                     CallFunc_GetEventData_GameplayEventData;           // 0x0008(0x00B0)()
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x00B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_B9[0x3];                                       // 0x00B9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FActiveGameplayEffectHandle            CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue; // 0x00BC(0x0008)(NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C4[0x4];                                       // 0x00C4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetAvatarActorFromActorInfo_ReturnValue;  // 0x00C8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerPawn*                        K2Node_DynamicCast_AsFort_Player_Pawn;             // 0x00D0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x00D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_D9[0x7];                                       // 0x00D9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UAbilitySystemComponent*                CallFunc_GetAbilitySystemComponent_ReturnValue;    // 0x00E0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x00E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_E9[0x7];                                       // 0x00E9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayEffectContextHandle           CallFunc_MakeEffectContext_ReturnValue;            // 0x00F0(0x0018)()
	bool                                          CallFunc_InventoryOwnerHasInfiniteAmmo_ReturnValue; // 0x0108(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetFloatAttribute_bSuccessfullyFoundAttribute; // 0x0109(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_10A[0x2];                                      // 0x010A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_GetFloatAttribute_ReturnValue;            // 0x010C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_FloatFloat_ReturnValue;         // 0x0110(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_111[0x7];                                      // 0x0111(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_FloatToString_ReturnValue;           // 0x0118(0x0010)(ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(GA_WaffleTruck_SlurpBazooka_Primary_C_K2_CommitExecute) == 0x000008, "Wrong alignment on GA_WaffleTruck_SlurpBazooka_Primary_C_K2_CommitExecute");
static_assert(sizeof(GA_WaffleTruck_SlurpBazooka_Primary_C_K2_CommitExecute) == 0x000128, "Wrong size on GA_WaffleTruck_SlurpBazooka_Primary_C_K2_CommitExecute");
static_assert(offsetof(GA_WaffleTruck_SlurpBazooka_Primary_C_K2_CommitExecute, CallFunc_K2_HasAuthority_ReturnValue) == 0x000000, "Member 'GA_WaffleTruck_SlurpBazooka_Primary_C_K2_CommitExecute::CallFunc_K2_HasAuthority_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_WaffleTruck_SlurpBazooka_Primary_C_K2_CommitExecute, CallFunc_IsServer_ReturnValue) == 0x000001, "Member 'GA_WaffleTruck_SlurpBazooka_Primary_C_K2_CommitExecute::CallFunc_IsServer_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_WaffleTruck_SlurpBazooka_Primary_C_K2_CommitExecute, CallFunc_GetEventData_GameplayEventData) == 0x000008, "Member 'GA_WaffleTruck_SlurpBazooka_Primary_C_K2_CommitExecute::CallFunc_GetEventData_GameplayEventData' has a wrong offset!");
static_assert(offsetof(GA_WaffleTruck_SlurpBazooka_Primary_C_K2_CommitExecute, CallFunc_Not_PreBool_ReturnValue) == 0x0000B8, "Member 'GA_WaffleTruck_SlurpBazooka_Primary_C_K2_CommitExecute::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_WaffleTruck_SlurpBazooka_Primary_C_K2_CommitExecute, CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue) == 0x0000BC, "Member 'GA_WaffleTruck_SlurpBazooka_Primary_C_K2_CommitExecute::CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_WaffleTruck_SlurpBazooka_Primary_C_K2_CommitExecute, CallFunc_GetAvatarActorFromActorInfo_ReturnValue) == 0x0000C8, "Member 'GA_WaffleTruck_SlurpBazooka_Primary_C_K2_CommitExecute::CallFunc_GetAvatarActorFromActorInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_WaffleTruck_SlurpBazooka_Primary_C_K2_CommitExecute, K2Node_DynamicCast_AsFort_Player_Pawn) == 0x0000D0, "Member 'GA_WaffleTruck_SlurpBazooka_Primary_C_K2_CommitExecute::K2Node_DynamicCast_AsFort_Player_Pawn' has a wrong offset!");
static_assert(offsetof(GA_WaffleTruck_SlurpBazooka_Primary_C_K2_CommitExecute, K2Node_DynamicCast_bSuccess) == 0x0000D8, "Member 'GA_WaffleTruck_SlurpBazooka_Primary_C_K2_CommitExecute::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(GA_WaffleTruck_SlurpBazooka_Primary_C_K2_CommitExecute, CallFunc_GetAbilitySystemComponent_ReturnValue) == 0x0000E0, "Member 'GA_WaffleTruck_SlurpBazooka_Primary_C_K2_CommitExecute::CallFunc_GetAbilitySystemComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_WaffleTruck_SlurpBazooka_Primary_C_K2_CommitExecute, CallFunc_IsValid_ReturnValue) == 0x0000E8, "Member 'GA_WaffleTruck_SlurpBazooka_Primary_C_K2_CommitExecute::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_WaffleTruck_SlurpBazooka_Primary_C_K2_CommitExecute, CallFunc_MakeEffectContext_ReturnValue) == 0x0000F0, "Member 'GA_WaffleTruck_SlurpBazooka_Primary_C_K2_CommitExecute::CallFunc_MakeEffectContext_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_WaffleTruck_SlurpBazooka_Primary_C_K2_CommitExecute, CallFunc_InventoryOwnerHasInfiniteAmmo_ReturnValue) == 0x000108, "Member 'GA_WaffleTruck_SlurpBazooka_Primary_C_K2_CommitExecute::CallFunc_InventoryOwnerHasInfiniteAmmo_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_WaffleTruck_SlurpBazooka_Primary_C_K2_CommitExecute, CallFunc_GetFloatAttribute_bSuccessfullyFoundAttribute) == 0x000109, "Member 'GA_WaffleTruck_SlurpBazooka_Primary_C_K2_CommitExecute::CallFunc_GetFloatAttribute_bSuccessfullyFoundAttribute' has a wrong offset!");
static_assert(offsetof(GA_WaffleTruck_SlurpBazooka_Primary_C_K2_CommitExecute, CallFunc_GetFloatAttribute_ReturnValue) == 0x00010C, "Member 'GA_WaffleTruck_SlurpBazooka_Primary_C_K2_CommitExecute::CallFunc_GetFloatAttribute_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_WaffleTruck_SlurpBazooka_Primary_C_K2_CommitExecute, CallFunc_LessEqual_FloatFloat_ReturnValue) == 0x000110, "Member 'GA_WaffleTruck_SlurpBazooka_Primary_C_K2_CommitExecute::CallFunc_LessEqual_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_WaffleTruck_SlurpBazooka_Primary_C_K2_CommitExecute, CallFunc_Conv_FloatToString_ReturnValue) == 0x000118, "Member 'GA_WaffleTruck_SlurpBazooka_Primary_C_K2_CommitExecute::CallFunc_Conv_FloatToString_ReturnValue' has a wrong offset!");

// Function GA_WaffleTruck_SlurpBazooka_Primary.GA_WaffleTruck_SlurpBazooka_Primary_C.K2_CanActivateAbility
// 0x00C0 (0x00C0 - 0x0000)
struct GA_WaffleTruck_SlurpBazooka_Primary_C_K2_CanActivateAbility final
{
public:
	struct FGameplayAbilityActorInfo              ActorInfo;                                         // 0x0000(0x0048)(BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
	struct FGameplayAbilitySpecHandle             Handle;                                            // 0x0048(0x0004)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4C[0x4];                                       // 0x004C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayTagContainer                  RelevantTags;                                      // 0x0050(0x0020)(Parm, OutParm)
	bool                                          ReturnValue;                                       // 0x0070(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_71[0x7];                                       // 0x0071(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetAvatarActorFromActorInfo_ReturnValue;  // 0x0078(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerPawn*                        K2Node_DynamicCast_AsFort_Player_Pawn;             // 0x0080(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0088(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetFloatAttribute_bSuccessfullyFoundAttribute; // 0x0089(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8A[0x2];                                       // 0x008A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_GetFloatAttribute_ReturnValue;            // 0x008C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_FloatFloat_ReturnValue;      // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_91[0x7];                                       // 0x0091(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AB_WaffleTruck_Rocket_Slurp_C*          K2Node_DynamicCast_AsB_Waffle_Truck_Rocket_Slurp;  // 0x0098(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x00A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_FloatFloat_ReturnValue_1;    // 0x00A1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x00A2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_A3[0x5];                                       // 0x00A3(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class AFortPlayerPawn*                        K2Node_DynamicCast_AsFort_Player_Pawn_1;           // 0x00A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_2;                     // 0x00B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_B1[0x3];                                       // 0x00B1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_GetShieldPercentageFromPawn_ShieldPercentage; // 0x00B4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_FloatFloat_ReturnValue_2;    // 0x00B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GA_WaffleTruck_SlurpBazooka_Primary_C_K2_CanActivateAbility) == 0x000008, "Wrong alignment on GA_WaffleTruck_SlurpBazooka_Primary_C_K2_CanActivateAbility");
static_assert(sizeof(GA_WaffleTruck_SlurpBazooka_Primary_C_K2_CanActivateAbility) == 0x0000C0, "Wrong size on GA_WaffleTruck_SlurpBazooka_Primary_C_K2_CanActivateAbility");
static_assert(offsetof(GA_WaffleTruck_SlurpBazooka_Primary_C_K2_CanActivateAbility, ActorInfo) == 0x000000, "Member 'GA_WaffleTruck_SlurpBazooka_Primary_C_K2_CanActivateAbility::ActorInfo' has a wrong offset!");
static_assert(offsetof(GA_WaffleTruck_SlurpBazooka_Primary_C_K2_CanActivateAbility, Handle) == 0x000048, "Member 'GA_WaffleTruck_SlurpBazooka_Primary_C_K2_CanActivateAbility::Handle' has a wrong offset!");
static_assert(offsetof(GA_WaffleTruck_SlurpBazooka_Primary_C_K2_CanActivateAbility, RelevantTags) == 0x000050, "Member 'GA_WaffleTruck_SlurpBazooka_Primary_C_K2_CanActivateAbility::RelevantTags' has a wrong offset!");
static_assert(offsetof(GA_WaffleTruck_SlurpBazooka_Primary_C_K2_CanActivateAbility, ReturnValue) == 0x000070, "Member 'GA_WaffleTruck_SlurpBazooka_Primary_C_K2_CanActivateAbility::ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_WaffleTruck_SlurpBazooka_Primary_C_K2_CanActivateAbility, CallFunc_GetAvatarActorFromActorInfo_ReturnValue) == 0x000078, "Member 'GA_WaffleTruck_SlurpBazooka_Primary_C_K2_CanActivateAbility::CallFunc_GetAvatarActorFromActorInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_WaffleTruck_SlurpBazooka_Primary_C_K2_CanActivateAbility, K2Node_DynamicCast_AsFort_Player_Pawn) == 0x000080, "Member 'GA_WaffleTruck_SlurpBazooka_Primary_C_K2_CanActivateAbility::K2Node_DynamicCast_AsFort_Player_Pawn' has a wrong offset!");
static_assert(offsetof(GA_WaffleTruck_SlurpBazooka_Primary_C_K2_CanActivateAbility, K2Node_DynamicCast_bSuccess) == 0x000088, "Member 'GA_WaffleTruck_SlurpBazooka_Primary_C_K2_CanActivateAbility::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(GA_WaffleTruck_SlurpBazooka_Primary_C_K2_CanActivateAbility, CallFunc_GetFloatAttribute_bSuccessfullyFoundAttribute) == 0x000089, "Member 'GA_WaffleTruck_SlurpBazooka_Primary_C_K2_CanActivateAbility::CallFunc_GetFloatAttribute_bSuccessfullyFoundAttribute' has a wrong offset!");
static_assert(offsetof(GA_WaffleTruck_SlurpBazooka_Primary_C_K2_CanActivateAbility, CallFunc_GetFloatAttribute_ReturnValue) == 0x00008C, "Member 'GA_WaffleTruck_SlurpBazooka_Primary_C_K2_CanActivateAbility::CallFunc_GetFloatAttribute_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_WaffleTruck_SlurpBazooka_Primary_C_K2_CanActivateAbility, CallFunc_GreaterEqual_FloatFloat_ReturnValue) == 0x000090, "Member 'GA_WaffleTruck_SlurpBazooka_Primary_C_K2_CanActivateAbility::CallFunc_GreaterEqual_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_WaffleTruck_SlurpBazooka_Primary_C_K2_CanActivateAbility, K2Node_DynamicCast_AsB_Waffle_Truck_Rocket_Slurp) == 0x000098, "Member 'GA_WaffleTruck_SlurpBazooka_Primary_C_K2_CanActivateAbility::K2Node_DynamicCast_AsB_Waffle_Truck_Rocket_Slurp' has a wrong offset!");
static_assert(offsetof(GA_WaffleTruck_SlurpBazooka_Primary_C_K2_CanActivateAbility, K2Node_DynamicCast_bSuccess_1) == 0x0000A0, "Member 'GA_WaffleTruck_SlurpBazooka_Primary_C_K2_CanActivateAbility::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(GA_WaffleTruck_SlurpBazooka_Primary_C_K2_CanActivateAbility, CallFunc_GreaterEqual_FloatFloat_ReturnValue_1) == 0x0000A1, "Member 'GA_WaffleTruck_SlurpBazooka_Primary_C_K2_CanActivateAbility::CallFunc_GreaterEqual_FloatFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GA_WaffleTruck_SlurpBazooka_Primary_C_K2_CanActivateAbility, CallFunc_IsValid_ReturnValue) == 0x0000A2, "Member 'GA_WaffleTruck_SlurpBazooka_Primary_C_K2_CanActivateAbility::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_WaffleTruck_SlurpBazooka_Primary_C_K2_CanActivateAbility, K2Node_DynamicCast_AsFort_Player_Pawn_1) == 0x0000A8, "Member 'GA_WaffleTruck_SlurpBazooka_Primary_C_K2_CanActivateAbility::K2Node_DynamicCast_AsFort_Player_Pawn_1' has a wrong offset!");
static_assert(offsetof(GA_WaffleTruck_SlurpBazooka_Primary_C_K2_CanActivateAbility, K2Node_DynamicCast_bSuccess_2) == 0x0000B0, "Member 'GA_WaffleTruck_SlurpBazooka_Primary_C_K2_CanActivateAbility::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(GA_WaffleTruck_SlurpBazooka_Primary_C_K2_CanActivateAbility, CallFunc_GetShieldPercentageFromPawn_ShieldPercentage) == 0x0000B4, "Member 'GA_WaffleTruck_SlurpBazooka_Primary_C_K2_CanActivateAbility::CallFunc_GetShieldPercentageFromPawn_ShieldPercentage' has a wrong offset!");
static_assert(offsetof(GA_WaffleTruck_SlurpBazooka_Primary_C_K2_CanActivateAbility, CallFunc_GreaterEqual_FloatFloat_ReturnValue_2) == 0x0000B8, "Member 'GA_WaffleTruck_SlurpBazooka_Primary_C_K2_CanActivateAbility::CallFunc_GreaterEqual_FloatFloat_ReturnValue_2' has a wrong offset!");

}

