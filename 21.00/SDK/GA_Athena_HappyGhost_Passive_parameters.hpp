﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Athena_HappyGhost_Passive

#include "Basic.hpp"

#include "GameplayAbilities_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function GA_Athena_HappyGhost_Passive.GA_Athena_HappyGhost_Passive_C.ExecuteUbergraph_GA_Athena_HappyGhost_Passive
// 0x01A8 (0x01A8 - 0x0000)
struct GA_Athena_HappyGhost_Passive_C_ExecuteUbergraph_GA_Athena_HappyGhost_Passive final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   K2Node_CustomEvent_NotifyName_3;                   // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   K2Node_CustomEvent_NotifyName_2;                   // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class FName NotifyName)>       K2Node_CreateDelegate_OutputDelegate;              // 0x000C(0x000C)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FName                                   K2Node_CustomEvent_NotifyName_1;                   // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class FName NotifyName)>       K2Node_CreateDelegate_OutputDelegate_1;            // 0x001C(0x000C)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FName                                   K2Node_CustomEvent_NotifyName;                     // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class FName NotifyName)>       K2Node_CreateDelegate_OutputDelegate_2;            // 0x002C(0x000C)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable;                                // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_3;            // 0x003C(0x000C)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FActiveGameplayEffectHandle            CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue; // 0x0048(0x0008)(NoDestructor, HasGetValueTypeHash)
	struct FGameplayEventData                     K2Node_Event_EventData;                            // 0x0050(0x00B0)(ConstParm)
	bool                                          GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess;   // 0x0100(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_bWasCancelled;                        // 0x0101(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_102[0x2];                                      // 0x0102(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(class FName NotifyName)>       K2Node_CreateDelegate_OutputDelegate_4;            // 0x0104(0x000C)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_GetAvatarActorFromActorInfo_ReturnValue;  // 0x0110(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerPawn*                        K2Node_DynamicCast_AsFort_Player_Pawn;             // 0x0118(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0120(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0121(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_122[0x6];                                      // 0x0122(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class AB_HappyGhost_Athena_C*                 K2Node_DynamicCast_AsB_Happy_Ghost_Athena;         // 0x0128(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0130(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_131[0x7];                                      // 0x0131(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AFortWeapon*                            CallFunc_GetCurrentSourceWeapon_ReturnValue;       // 0x0138(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGuid                                  CallFunc_GetInventoryGUID_ReturnValue;             // 0x0140(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0150(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPlayMontageCallbackProxy*              CallFunc_CreateProxyObjectForPlayMontage_ReturnValue; // 0x0168(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerController*                  CallFunc_GetFortPlayerControllerFromActor_ReturnValue; // 0x0170(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_K2_RemoveItemFromPlayerByGuid_ReturnValue; // 0x0178(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x017C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_17D[0x3];                                      // 0x017D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   K2Node_CustomEvent_NotifyName_4;                   // 0x0180(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_184[0x4];                                      // 0x0184(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x0188(0x0008)(NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x0190(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_191[0x3];                                      // 0x0191(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetRemainingAmmo_ReturnValue;             // 0x0194(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0198(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_199[0x3];                                      // 0x0199(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(class FName NotifyName)>       K2Node_CreateDelegate_OutputDelegate_5;            // 0x019C(0x000C)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GA_Athena_HappyGhost_Passive_C_ExecuteUbergraph_GA_Athena_HappyGhost_Passive) == 0x000008, "Wrong alignment on GA_Athena_HappyGhost_Passive_C_ExecuteUbergraph_GA_Athena_HappyGhost_Passive");
static_assert(sizeof(GA_Athena_HappyGhost_Passive_C_ExecuteUbergraph_GA_Athena_HappyGhost_Passive) == 0x0001A8, "Wrong size on GA_Athena_HappyGhost_Passive_C_ExecuteUbergraph_GA_Athena_HappyGhost_Passive");
static_assert(offsetof(GA_Athena_HappyGhost_Passive_C_ExecuteUbergraph_GA_Athena_HappyGhost_Passive, EntryPoint) == 0x000000, "Member 'GA_Athena_HappyGhost_Passive_C_ExecuteUbergraph_GA_Athena_HappyGhost_Passive::EntryPoint' has a wrong offset!");
static_assert(offsetof(GA_Athena_HappyGhost_Passive_C_ExecuteUbergraph_GA_Athena_HappyGhost_Passive, K2Node_CustomEvent_NotifyName_3) == 0x000004, "Member 'GA_Athena_HappyGhost_Passive_C_ExecuteUbergraph_GA_Athena_HappyGhost_Passive::K2Node_CustomEvent_NotifyName_3' has a wrong offset!");
static_assert(offsetof(GA_Athena_HappyGhost_Passive_C_ExecuteUbergraph_GA_Athena_HappyGhost_Passive, K2Node_CustomEvent_NotifyName_2) == 0x000008, "Member 'GA_Athena_HappyGhost_Passive_C_ExecuteUbergraph_GA_Athena_HappyGhost_Passive::K2Node_CustomEvent_NotifyName_2' has a wrong offset!");
static_assert(offsetof(GA_Athena_HappyGhost_Passive_C_ExecuteUbergraph_GA_Athena_HappyGhost_Passive, K2Node_CreateDelegate_OutputDelegate) == 0x00000C, "Member 'GA_Athena_HappyGhost_Passive_C_ExecuteUbergraph_GA_Athena_HappyGhost_Passive::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(GA_Athena_HappyGhost_Passive_C_ExecuteUbergraph_GA_Athena_HappyGhost_Passive, K2Node_CustomEvent_NotifyName_1) == 0x000018, "Member 'GA_Athena_HappyGhost_Passive_C_ExecuteUbergraph_GA_Athena_HappyGhost_Passive::K2Node_CustomEvent_NotifyName_1' has a wrong offset!");
static_assert(offsetof(GA_Athena_HappyGhost_Passive_C_ExecuteUbergraph_GA_Athena_HappyGhost_Passive, K2Node_CreateDelegate_OutputDelegate_1) == 0x00001C, "Member 'GA_Athena_HappyGhost_Passive_C_ExecuteUbergraph_GA_Athena_HappyGhost_Passive::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(GA_Athena_HappyGhost_Passive_C_ExecuteUbergraph_GA_Athena_HappyGhost_Passive, K2Node_CustomEvent_NotifyName) == 0x000028, "Member 'GA_Athena_HappyGhost_Passive_C_ExecuteUbergraph_GA_Athena_HappyGhost_Passive::K2Node_CustomEvent_NotifyName' has a wrong offset!");
static_assert(offsetof(GA_Athena_HappyGhost_Passive_C_ExecuteUbergraph_GA_Athena_HappyGhost_Passive, K2Node_CreateDelegate_OutputDelegate_2) == 0x00002C, "Member 'GA_Athena_HappyGhost_Passive_C_ExecuteUbergraph_GA_Athena_HappyGhost_Passive::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(GA_Athena_HappyGhost_Passive_C_ExecuteUbergraph_GA_Athena_HappyGhost_Passive, Temp_name_Variable) == 0x000038, "Member 'GA_Athena_HappyGhost_Passive_C_ExecuteUbergraph_GA_Athena_HappyGhost_Passive::Temp_name_Variable' has a wrong offset!");
static_assert(offsetof(GA_Athena_HappyGhost_Passive_C_ExecuteUbergraph_GA_Athena_HappyGhost_Passive, K2Node_CreateDelegate_OutputDelegate_3) == 0x00003C, "Member 'GA_Athena_HappyGhost_Passive_C_ExecuteUbergraph_GA_Athena_HappyGhost_Passive::K2Node_CreateDelegate_OutputDelegate_3' has a wrong offset!");
static_assert(offsetof(GA_Athena_HappyGhost_Passive_C_ExecuteUbergraph_GA_Athena_HappyGhost_Passive, CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue) == 0x000048, "Member 'GA_Athena_HappyGhost_Passive_C_ExecuteUbergraph_GA_Athena_HappyGhost_Passive::CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_HappyGhost_Passive_C_ExecuteUbergraph_GA_Athena_HappyGhost_Passive, K2Node_Event_EventData) == 0x000050, "Member 'GA_Athena_HappyGhost_Passive_C_ExecuteUbergraph_GA_Athena_HappyGhost_Passive::K2Node_Event_EventData' has a wrong offset!");
static_assert(offsetof(GA_Athena_HappyGhost_Passive_C_ExecuteUbergraph_GA_Athena_HappyGhost_Passive, GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess) == 0x000100, "Member 'GA_Athena_HappyGhost_Passive_C_ExecuteUbergraph_GA_Athena_HappyGhost_Passive::GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess' has a wrong offset!");
static_assert(offsetof(GA_Athena_HappyGhost_Passive_C_ExecuteUbergraph_GA_Athena_HappyGhost_Passive, K2Node_Event_bWasCancelled) == 0x000101, "Member 'GA_Athena_HappyGhost_Passive_C_ExecuteUbergraph_GA_Athena_HappyGhost_Passive::K2Node_Event_bWasCancelled' has a wrong offset!");
static_assert(offsetof(GA_Athena_HappyGhost_Passive_C_ExecuteUbergraph_GA_Athena_HappyGhost_Passive, K2Node_CreateDelegate_OutputDelegate_4) == 0x000104, "Member 'GA_Athena_HappyGhost_Passive_C_ExecuteUbergraph_GA_Athena_HappyGhost_Passive::K2Node_CreateDelegate_OutputDelegate_4' has a wrong offset!");
static_assert(offsetof(GA_Athena_HappyGhost_Passive_C_ExecuteUbergraph_GA_Athena_HappyGhost_Passive, CallFunc_GetAvatarActorFromActorInfo_ReturnValue) == 0x000110, "Member 'GA_Athena_HappyGhost_Passive_C_ExecuteUbergraph_GA_Athena_HappyGhost_Passive::CallFunc_GetAvatarActorFromActorInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_HappyGhost_Passive_C_ExecuteUbergraph_GA_Athena_HappyGhost_Passive, K2Node_DynamicCast_AsFort_Player_Pawn) == 0x000118, "Member 'GA_Athena_HappyGhost_Passive_C_ExecuteUbergraph_GA_Athena_HappyGhost_Passive::K2Node_DynamicCast_AsFort_Player_Pawn' has a wrong offset!");
static_assert(offsetof(GA_Athena_HappyGhost_Passive_C_ExecuteUbergraph_GA_Athena_HappyGhost_Passive, K2Node_DynamicCast_bSuccess) == 0x000120, "Member 'GA_Athena_HappyGhost_Passive_C_ExecuteUbergraph_GA_Athena_HappyGhost_Passive::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(GA_Athena_HappyGhost_Passive_C_ExecuteUbergraph_GA_Athena_HappyGhost_Passive, CallFunc_IsValid_ReturnValue) == 0x000121, "Member 'GA_Athena_HappyGhost_Passive_C_ExecuteUbergraph_GA_Athena_HappyGhost_Passive::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_HappyGhost_Passive_C_ExecuteUbergraph_GA_Athena_HappyGhost_Passive, K2Node_DynamicCast_AsB_Happy_Ghost_Athena) == 0x000128, "Member 'GA_Athena_HappyGhost_Passive_C_ExecuteUbergraph_GA_Athena_HappyGhost_Passive::K2Node_DynamicCast_AsB_Happy_Ghost_Athena' has a wrong offset!");
static_assert(offsetof(GA_Athena_HappyGhost_Passive_C_ExecuteUbergraph_GA_Athena_HappyGhost_Passive, K2Node_DynamicCast_bSuccess_1) == 0x000130, "Member 'GA_Athena_HappyGhost_Passive_C_ExecuteUbergraph_GA_Athena_HappyGhost_Passive::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(GA_Athena_HappyGhost_Passive_C_ExecuteUbergraph_GA_Athena_HappyGhost_Passive, CallFunc_GetCurrentSourceWeapon_ReturnValue) == 0x000138, "Member 'GA_Athena_HappyGhost_Passive_C_ExecuteUbergraph_GA_Athena_HappyGhost_Passive::CallFunc_GetCurrentSourceWeapon_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_HappyGhost_Passive_C_ExecuteUbergraph_GA_Athena_HappyGhost_Passive, CallFunc_GetInventoryGUID_ReturnValue) == 0x000140, "Member 'GA_Athena_HappyGhost_Passive_C_ExecuteUbergraph_GA_Athena_HappyGhost_Passive::CallFunc_GetInventoryGUID_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_HappyGhost_Passive_C_ExecuteUbergraph_GA_Athena_HappyGhost_Passive, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000150, "Member 'GA_Athena_HappyGhost_Passive_C_ExecuteUbergraph_GA_Athena_HappyGhost_Passive::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_HappyGhost_Passive_C_ExecuteUbergraph_GA_Athena_HappyGhost_Passive, CallFunc_CreateProxyObjectForPlayMontage_ReturnValue) == 0x000168, "Member 'GA_Athena_HappyGhost_Passive_C_ExecuteUbergraph_GA_Athena_HappyGhost_Passive::CallFunc_CreateProxyObjectForPlayMontage_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_HappyGhost_Passive_C_ExecuteUbergraph_GA_Athena_HappyGhost_Passive, CallFunc_GetFortPlayerControllerFromActor_ReturnValue) == 0x000170, "Member 'GA_Athena_HappyGhost_Passive_C_ExecuteUbergraph_GA_Athena_HappyGhost_Passive::CallFunc_GetFortPlayerControllerFromActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_HappyGhost_Passive_C_ExecuteUbergraph_GA_Athena_HappyGhost_Passive, CallFunc_K2_RemoveItemFromPlayerByGuid_ReturnValue) == 0x000178, "Member 'GA_Athena_HappyGhost_Passive_C_ExecuteUbergraph_GA_Athena_HappyGhost_Passive::CallFunc_K2_RemoveItemFromPlayerByGuid_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_HappyGhost_Passive_C_ExecuteUbergraph_GA_Athena_HappyGhost_Passive, CallFunc_IsValid_ReturnValue_1) == 0x00017C, "Member 'GA_Athena_HappyGhost_Passive_C_ExecuteUbergraph_GA_Athena_HappyGhost_Passive::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GA_Athena_HappyGhost_Passive_C_ExecuteUbergraph_GA_Athena_HappyGhost_Passive, K2Node_CustomEvent_NotifyName_4) == 0x000180, "Member 'GA_Athena_HappyGhost_Passive_C_ExecuteUbergraph_GA_Athena_HappyGhost_Passive::K2Node_CustomEvent_NotifyName_4' has a wrong offset!");
static_assert(offsetof(GA_Athena_HappyGhost_Passive_C_ExecuteUbergraph_GA_Athena_HappyGhost_Passive, CallFunc_K2_SetTimerDelegate_ReturnValue) == 0x000188, "Member 'GA_Athena_HappyGhost_Passive_C_ExecuteUbergraph_GA_Athena_HappyGhost_Passive::CallFunc_K2_SetTimerDelegate_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_HappyGhost_Passive_C_ExecuteUbergraph_GA_Athena_HappyGhost_Passive, CallFunc_IsValid_ReturnValue_2) == 0x000190, "Member 'GA_Athena_HappyGhost_Passive_C_ExecuteUbergraph_GA_Athena_HappyGhost_Passive::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(GA_Athena_HappyGhost_Passive_C_ExecuteUbergraph_GA_Athena_HappyGhost_Passive, CallFunc_GetRemainingAmmo_ReturnValue) == 0x000194, "Member 'GA_Athena_HappyGhost_Passive_C_ExecuteUbergraph_GA_Athena_HappyGhost_Passive::CallFunc_GetRemainingAmmo_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_HappyGhost_Passive_C_ExecuteUbergraph_GA_Athena_HappyGhost_Passive, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000198, "Member 'GA_Athena_HappyGhost_Passive_C_ExecuteUbergraph_GA_Athena_HappyGhost_Passive::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_HappyGhost_Passive_C_ExecuteUbergraph_GA_Athena_HappyGhost_Passive, K2Node_CreateDelegate_OutputDelegate_5) == 0x00019C, "Member 'GA_Athena_HappyGhost_Passive_C_ExecuteUbergraph_GA_Athena_HappyGhost_Passive::K2Node_CreateDelegate_OutputDelegate_5' has a wrong offset!");

// Function GA_Athena_HappyGhost_Passive.GA_Athena_HappyGhost_Passive_C.K2_ActivateAbilityFromEvent
// 0x00B0 (0x00B0 - 0x0000)
struct GA_Athena_HappyGhost_Passive_C_K2_ActivateAbilityFromEvent final
{
public:
	struct FGameplayEventData                     EventData;                                         // 0x0000(0x00B0)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(GA_Athena_HappyGhost_Passive_C_K2_ActivateAbilityFromEvent) == 0x000008, "Wrong alignment on GA_Athena_HappyGhost_Passive_C_K2_ActivateAbilityFromEvent");
static_assert(sizeof(GA_Athena_HappyGhost_Passive_C_K2_ActivateAbilityFromEvent) == 0x0000B0, "Wrong size on GA_Athena_HappyGhost_Passive_C_K2_ActivateAbilityFromEvent");
static_assert(offsetof(GA_Athena_HappyGhost_Passive_C_K2_ActivateAbilityFromEvent, EventData) == 0x000000, "Member 'GA_Athena_HappyGhost_Passive_C_K2_ActivateAbilityFromEvent::EventData' has a wrong offset!");

// Function GA_Athena_HappyGhost_Passive.GA_Athena_HappyGhost_Passive_C.K2_OnEndAbility
// 0x0001 (0x0001 - 0x0000)
struct GA_Athena_HappyGhost_Passive_C_K2_OnEndAbility final
{
public:
	bool                                          bWasCancelled;                                     // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GA_Athena_HappyGhost_Passive_C_K2_OnEndAbility) == 0x000001, "Wrong alignment on GA_Athena_HappyGhost_Passive_C_K2_OnEndAbility");
static_assert(sizeof(GA_Athena_HappyGhost_Passive_C_K2_OnEndAbility) == 0x000001, "Wrong size on GA_Athena_HappyGhost_Passive_C_K2_OnEndAbility");
static_assert(offsetof(GA_Athena_HappyGhost_Passive_C_K2_OnEndAbility, bWasCancelled) == 0x000000, "Member 'GA_Athena_HappyGhost_Passive_C_K2_OnEndAbility::bWasCancelled' has a wrong offset!");

// Function GA_Athena_HappyGhost_Passive.GA_Athena_HappyGhost_Passive_C.OnBlendOut_7857FA3D409C8FB0381EC7B9126A8525
// 0x0004 (0x0004 - 0x0000)
struct GA_Athena_HappyGhost_Passive_C_OnBlendOut_7857FA3D409C8FB0381EC7B9126A8525 final
{
public:
	class FName                                   NotifyName;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GA_Athena_HappyGhost_Passive_C_OnBlendOut_7857FA3D409C8FB0381EC7B9126A8525) == 0x000004, "Wrong alignment on GA_Athena_HappyGhost_Passive_C_OnBlendOut_7857FA3D409C8FB0381EC7B9126A8525");
static_assert(sizeof(GA_Athena_HappyGhost_Passive_C_OnBlendOut_7857FA3D409C8FB0381EC7B9126A8525) == 0x000004, "Wrong size on GA_Athena_HappyGhost_Passive_C_OnBlendOut_7857FA3D409C8FB0381EC7B9126A8525");
static_assert(offsetof(GA_Athena_HappyGhost_Passive_C_OnBlendOut_7857FA3D409C8FB0381EC7B9126A8525, NotifyName) == 0x000000, "Member 'GA_Athena_HappyGhost_Passive_C_OnBlendOut_7857FA3D409C8FB0381EC7B9126A8525::NotifyName' has a wrong offset!");

// Function GA_Athena_HappyGhost_Passive.GA_Athena_HappyGhost_Passive_C.OnCompleted_7857FA3D409C8FB0381EC7B9126A8525
// 0x0004 (0x0004 - 0x0000)
struct GA_Athena_HappyGhost_Passive_C_OnCompleted_7857FA3D409C8FB0381EC7B9126A8525 final
{
public:
	class FName                                   NotifyName;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GA_Athena_HappyGhost_Passive_C_OnCompleted_7857FA3D409C8FB0381EC7B9126A8525) == 0x000004, "Wrong alignment on GA_Athena_HappyGhost_Passive_C_OnCompleted_7857FA3D409C8FB0381EC7B9126A8525");
static_assert(sizeof(GA_Athena_HappyGhost_Passive_C_OnCompleted_7857FA3D409C8FB0381EC7B9126A8525) == 0x000004, "Wrong size on GA_Athena_HappyGhost_Passive_C_OnCompleted_7857FA3D409C8FB0381EC7B9126A8525");
static_assert(offsetof(GA_Athena_HappyGhost_Passive_C_OnCompleted_7857FA3D409C8FB0381EC7B9126A8525, NotifyName) == 0x000000, "Member 'GA_Athena_HappyGhost_Passive_C_OnCompleted_7857FA3D409C8FB0381EC7B9126A8525::NotifyName' has a wrong offset!");

// Function GA_Athena_HappyGhost_Passive.GA_Athena_HappyGhost_Passive_C.OnInterrupted_7857FA3D409C8FB0381EC7B9126A8525
// 0x0004 (0x0004 - 0x0000)
struct GA_Athena_HappyGhost_Passive_C_OnInterrupted_7857FA3D409C8FB0381EC7B9126A8525 final
{
public:
	class FName                                   NotifyName;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GA_Athena_HappyGhost_Passive_C_OnInterrupted_7857FA3D409C8FB0381EC7B9126A8525) == 0x000004, "Wrong alignment on GA_Athena_HappyGhost_Passive_C_OnInterrupted_7857FA3D409C8FB0381EC7B9126A8525");
static_assert(sizeof(GA_Athena_HappyGhost_Passive_C_OnInterrupted_7857FA3D409C8FB0381EC7B9126A8525) == 0x000004, "Wrong size on GA_Athena_HappyGhost_Passive_C_OnInterrupted_7857FA3D409C8FB0381EC7B9126A8525");
static_assert(offsetof(GA_Athena_HappyGhost_Passive_C_OnInterrupted_7857FA3D409C8FB0381EC7B9126A8525, NotifyName) == 0x000000, "Member 'GA_Athena_HappyGhost_Passive_C_OnInterrupted_7857FA3D409C8FB0381EC7B9126A8525::NotifyName' has a wrong offset!");

// Function GA_Athena_HappyGhost_Passive.GA_Athena_HappyGhost_Passive_C.OnNotifyBegin_7857FA3D409C8FB0381EC7B9126A8525
// 0x0004 (0x0004 - 0x0000)
struct GA_Athena_HappyGhost_Passive_C_OnNotifyBegin_7857FA3D409C8FB0381EC7B9126A8525 final
{
public:
	class FName                                   NotifyName;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GA_Athena_HappyGhost_Passive_C_OnNotifyBegin_7857FA3D409C8FB0381EC7B9126A8525) == 0x000004, "Wrong alignment on GA_Athena_HappyGhost_Passive_C_OnNotifyBegin_7857FA3D409C8FB0381EC7B9126A8525");
static_assert(sizeof(GA_Athena_HappyGhost_Passive_C_OnNotifyBegin_7857FA3D409C8FB0381EC7B9126A8525) == 0x000004, "Wrong size on GA_Athena_HappyGhost_Passive_C_OnNotifyBegin_7857FA3D409C8FB0381EC7B9126A8525");
static_assert(offsetof(GA_Athena_HappyGhost_Passive_C_OnNotifyBegin_7857FA3D409C8FB0381EC7B9126A8525, NotifyName) == 0x000000, "Member 'GA_Athena_HappyGhost_Passive_C_OnNotifyBegin_7857FA3D409C8FB0381EC7B9126A8525::NotifyName' has a wrong offset!");

// Function GA_Athena_HappyGhost_Passive.GA_Athena_HappyGhost_Passive_C.OnNotifyEnd_7857FA3D409C8FB0381EC7B9126A8525
// 0x0004 (0x0004 - 0x0000)
struct GA_Athena_HappyGhost_Passive_C_OnNotifyEnd_7857FA3D409C8FB0381EC7B9126A8525 final
{
public:
	class FName                                   NotifyName;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GA_Athena_HappyGhost_Passive_C_OnNotifyEnd_7857FA3D409C8FB0381EC7B9126A8525) == 0x000004, "Wrong alignment on GA_Athena_HappyGhost_Passive_C_OnNotifyEnd_7857FA3D409C8FB0381EC7B9126A8525");
static_assert(sizeof(GA_Athena_HappyGhost_Passive_C_OnNotifyEnd_7857FA3D409C8FB0381EC7B9126A8525) == 0x000004, "Wrong size on GA_Athena_HappyGhost_Passive_C_OnNotifyEnd_7857FA3D409C8FB0381EC7B9126A8525");
static_assert(offsetof(GA_Athena_HappyGhost_Passive_C_OnNotifyEnd_7857FA3D409C8FB0381EC7B9126A8525, NotifyName) == 0x000000, "Member 'GA_Athena_HappyGhost_Passive_C_OnNotifyEnd_7857FA3D409C8FB0381EC7B9126A8525::NotifyName' has a wrong offset!");

}

