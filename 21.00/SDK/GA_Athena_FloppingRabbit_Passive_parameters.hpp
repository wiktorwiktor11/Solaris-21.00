﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Athena_FloppingRabbit_Passive

#include "Basic.hpp"

#include "GameplayAbilities_structs.hpp"


namespace SDK::Params
{

// Function GA_Athena_FloppingRabbit_Passive.GA_Athena_FloppingRabbit_Passive_C.ExecuteUbergraph_GA_Athena_FloppingRabbit_Passive
// 0x0180 (0x0180 - 0x0000)
struct GA_Athena_FloppingRabbit_Passive_C_ExecuteUbergraph_GA_Athena_FloppingRabbit_Passive final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x000C)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AFortWeapon*                            CallFunc_SetBobberHidden_CurrentWeapon;            // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AB_FloppingRabbit_Weap_Athena_C*        CallFunc_SetBobberHidden_CastedToRabbitWeapon;     // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortWeapon*                            CallFunc_SetBobberHidden_CurrentWeapon_1;          // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AB_FloppingRabbit_Weap_Athena_C*        CallFunc_SetBobberHidden_CastedToRabbitWeapon_1;   // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0031(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_32[0x2];                                       // 0x0032(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FActiveGameplayEffectHandle            CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue; // 0x0034(0x0008)(NoDestructor, HasGetValueTypeHash)
	struct FActiveGameplayEffectHandle            CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue_1; // 0x003C(0x0008)(NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsServer_ReturnValue;                     // 0x0044(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsServer_ReturnValue_1;                   // 0x0045(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_46[0x2];                                       // 0x0046(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetAvatarActorFromActorInfo_ReturnValue;  // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_SeatIndex;                      // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_54[0x4];                                       // 0x0054(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AFortPlayerPawn*                        K2Node_DynamicCast_AsFort_Player_Pawn;             // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_bWasCancelled;                        // 0x0061(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_62[0x6];                                       // 0x0062(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class AFortPlayerController*                  CallFunc_GetFortPlayerControllerFromActor_ReturnValue; // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AAthena_PlayerController_C*             K2Node_DynamicCast_AsAthena_Player_Controller;     // 0x0070(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_79[0x7];                                       // 0x0079(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayEventData                     K2Node_Event_EventData;                            // 0x0080(0x00B0)(ConstParm)
	bool                                          GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess;   // 0x0130(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x0131(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_132[0x2];                                      // 0x0132(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FActiveGameplayEffectHandle            CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue_2; // 0x0134(0x0008)(NoDestructor, HasGetValueTypeHash)
	TDelegate<void(int32 SeatIndex)>              K2Node_CreateDelegate_OutputDelegate_1;            // 0x013C(0x000C)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UAbilityTask_WaitGameplayTagRemoved*    CallFunc_WaitGameplayTagRemove_ReturnValue;        // 0x0148(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_3;                    // 0x0150(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_151[0x7];                                      // 0x0151(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AFortWeapon*                            CallFunc_SetBobberHidden_CurrentWeapon_2;          // 0x0158(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AB_FloppingRabbit_Weap_Athena_C*        CallFunc_SetBobberHidden_CastedToRabbitWeapon_2;   // 0x0160(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortWeapon*                            CallFunc_SetBobberHidden_CurrentWeapon_3;          // 0x0168(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AB_FloppingRabbit_Weap_Athena_C*        CallFunc_SetBobberHidden_CastedToRabbitWeapon_3;   // 0x0170(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsMobilePlatform_ReturnValue;             // 0x0178(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GA_Athena_FloppingRabbit_Passive_C_ExecuteUbergraph_GA_Athena_FloppingRabbit_Passive) == 0x000008, "Wrong alignment on GA_Athena_FloppingRabbit_Passive_C_ExecuteUbergraph_GA_Athena_FloppingRabbit_Passive");
static_assert(sizeof(GA_Athena_FloppingRabbit_Passive_C_ExecuteUbergraph_GA_Athena_FloppingRabbit_Passive) == 0x000180, "Wrong size on GA_Athena_FloppingRabbit_Passive_C_ExecuteUbergraph_GA_Athena_FloppingRabbit_Passive");
static_assert(offsetof(GA_Athena_FloppingRabbit_Passive_C_ExecuteUbergraph_GA_Athena_FloppingRabbit_Passive, EntryPoint) == 0x000000, "Member 'GA_Athena_FloppingRabbit_Passive_C_ExecuteUbergraph_GA_Athena_FloppingRabbit_Passive::EntryPoint' has a wrong offset!");
static_assert(offsetof(GA_Athena_FloppingRabbit_Passive_C_ExecuteUbergraph_GA_Athena_FloppingRabbit_Passive, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'GA_Athena_FloppingRabbit_Passive_C_ExecuteUbergraph_GA_Athena_FloppingRabbit_Passive::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(GA_Athena_FloppingRabbit_Passive_C_ExecuteUbergraph_GA_Athena_FloppingRabbit_Passive, CallFunc_SetBobberHidden_CurrentWeapon) == 0x000010, "Member 'GA_Athena_FloppingRabbit_Passive_C_ExecuteUbergraph_GA_Athena_FloppingRabbit_Passive::CallFunc_SetBobberHidden_CurrentWeapon' has a wrong offset!");
static_assert(offsetof(GA_Athena_FloppingRabbit_Passive_C_ExecuteUbergraph_GA_Athena_FloppingRabbit_Passive, CallFunc_SetBobberHidden_CastedToRabbitWeapon) == 0x000018, "Member 'GA_Athena_FloppingRabbit_Passive_C_ExecuteUbergraph_GA_Athena_FloppingRabbit_Passive::CallFunc_SetBobberHidden_CastedToRabbitWeapon' has a wrong offset!");
static_assert(offsetof(GA_Athena_FloppingRabbit_Passive_C_ExecuteUbergraph_GA_Athena_FloppingRabbit_Passive, CallFunc_SetBobberHidden_CurrentWeapon_1) == 0x000020, "Member 'GA_Athena_FloppingRabbit_Passive_C_ExecuteUbergraph_GA_Athena_FloppingRabbit_Passive::CallFunc_SetBobberHidden_CurrentWeapon_1' has a wrong offset!");
static_assert(offsetof(GA_Athena_FloppingRabbit_Passive_C_ExecuteUbergraph_GA_Athena_FloppingRabbit_Passive, CallFunc_SetBobberHidden_CastedToRabbitWeapon_1) == 0x000028, "Member 'GA_Athena_FloppingRabbit_Passive_C_ExecuteUbergraph_GA_Athena_FloppingRabbit_Passive::CallFunc_SetBobberHidden_CastedToRabbitWeapon_1' has a wrong offset!");
static_assert(offsetof(GA_Athena_FloppingRabbit_Passive_C_ExecuteUbergraph_GA_Athena_FloppingRabbit_Passive, CallFunc_IsValid_ReturnValue) == 0x000030, "Member 'GA_Athena_FloppingRabbit_Passive_C_ExecuteUbergraph_GA_Athena_FloppingRabbit_Passive::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_FloppingRabbit_Passive_C_ExecuteUbergraph_GA_Athena_FloppingRabbit_Passive, CallFunc_IsValid_ReturnValue_1) == 0x000031, "Member 'GA_Athena_FloppingRabbit_Passive_C_ExecuteUbergraph_GA_Athena_FloppingRabbit_Passive::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GA_Athena_FloppingRabbit_Passive_C_ExecuteUbergraph_GA_Athena_FloppingRabbit_Passive, CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue) == 0x000034, "Member 'GA_Athena_FloppingRabbit_Passive_C_ExecuteUbergraph_GA_Athena_FloppingRabbit_Passive::CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_FloppingRabbit_Passive_C_ExecuteUbergraph_GA_Athena_FloppingRabbit_Passive, CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue_1) == 0x00003C, "Member 'GA_Athena_FloppingRabbit_Passive_C_ExecuteUbergraph_GA_Athena_FloppingRabbit_Passive::CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GA_Athena_FloppingRabbit_Passive_C_ExecuteUbergraph_GA_Athena_FloppingRabbit_Passive, CallFunc_IsServer_ReturnValue) == 0x000044, "Member 'GA_Athena_FloppingRabbit_Passive_C_ExecuteUbergraph_GA_Athena_FloppingRabbit_Passive::CallFunc_IsServer_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_FloppingRabbit_Passive_C_ExecuteUbergraph_GA_Athena_FloppingRabbit_Passive, CallFunc_IsServer_ReturnValue_1) == 0x000045, "Member 'GA_Athena_FloppingRabbit_Passive_C_ExecuteUbergraph_GA_Athena_FloppingRabbit_Passive::CallFunc_IsServer_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GA_Athena_FloppingRabbit_Passive_C_ExecuteUbergraph_GA_Athena_FloppingRabbit_Passive, CallFunc_GetAvatarActorFromActorInfo_ReturnValue) == 0x000048, "Member 'GA_Athena_FloppingRabbit_Passive_C_ExecuteUbergraph_GA_Athena_FloppingRabbit_Passive::CallFunc_GetAvatarActorFromActorInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_FloppingRabbit_Passive_C_ExecuteUbergraph_GA_Athena_FloppingRabbit_Passive, K2Node_CustomEvent_SeatIndex) == 0x000050, "Member 'GA_Athena_FloppingRabbit_Passive_C_ExecuteUbergraph_GA_Athena_FloppingRabbit_Passive::K2Node_CustomEvent_SeatIndex' has a wrong offset!");
static_assert(offsetof(GA_Athena_FloppingRabbit_Passive_C_ExecuteUbergraph_GA_Athena_FloppingRabbit_Passive, K2Node_DynamicCast_AsFort_Player_Pawn) == 0x000058, "Member 'GA_Athena_FloppingRabbit_Passive_C_ExecuteUbergraph_GA_Athena_FloppingRabbit_Passive::K2Node_DynamicCast_AsFort_Player_Pawn' has a wrong offset!");
static_assert(offsetof(GA_Athena_FloppingRabbit_Passive_C_ExecuteUbergraph_GA_Athena_FloppingRabbit_Passive, K2Node_DynamicCast_bSuccess) == 0x000060, "Member 'GA_Athena_FloppingRabbit_Passive_C_ExecuteUbergraph_GA_Athena_FloppingRabbit_Passive::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(GA_Athena_FloppingRabbit_Passive_C_ExecuteUbergraph_GA_Athena_FloppingRabbit_Passive, K2Node_Event_bWasCancelled) == 0x000061, "Member 'GA_Athena_FloppingRabbit_Passive_C_ExecuteUbergraph_GA_Athena_FloppingRabbit_Passive::K2Node_Event_bWasCancelled' has a wrong offset!");
static_assert(offsetof(GA_Athena_FloppingRabbit_Passive_C_ExecuteUbergraph_GA_Athena_FloppingRabbit_Passive, CallFunc_GetFortPlayerControllerFromActor_ReturnValue) == 0x000068, "Member 'GA_Athena_FloppingRabbit_Passive_C_ExecuteUbergraph_GA_Athena_FloppingRabbit_Passive::CallFunc_GetFortPlayerControllerFromActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_FloppingRabbit_Passive_C_ExecuteUbergraph_GA_Athena_FloppingRabbit_Passive, K2Node_DynamicCast_AsAthena_Player_Controller) == 0x000070, "Member 'GA_Athena_FloppingRabbit_Passive_C_ExecuteUbergraph_GA_Athena_FloppingRabbit_Passive::K2Node_DynamicCast_AsAthena_Player_Controller' has a wrong offset!");
static_assert(offsetof(GA_Athena_FloppingRabbit_Passive_C_ExecuteUbergraph_GA_Athena_FloppingRabbit_Passive, K2Node_DynamicCast_bSuccess_1) == 0x000078, "Member 'GA_Athena_FloppingRabbit_Passive_C_ExecuteUbergraph_GA_Athena_FloppingRabbit_Passive::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(GA_Athena_FloppingRabbit_Passive_C_ExecuteUbergraph_GA_Athena_FloppingRabbit_Passive, K2Node_Event_EventData) == 0x000080, "Member 'GA_Athena_FloppingRabbit_Passive_C_ExecuteUbergraph_GA_Athena_FloppingRabbit_Passive::K2Node_Event_EventData' has a wrong offset!");
static_assert(offsetof(GA_Athena_FloppingRabbit_Passive_C_ExecuteUbergraph_GA_Athena_FloppingRabbit_Passive, GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess) == 0x000130, "Member 'GA_Athena_FloppingRabbit_Passive_C_ExecuteUbergraph_GA_Athena_FloppingRabbit_Passive::GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess' has a wrong offset!");
static_assert(offsetof(GA_Athena_FloppingRabbit_Passive_C_ExecuteUbergraph_GA_Athena_FloppingRabbit_Passive, CallFunc_IsValid_ReturnValue_2) == 0x000131, "Member 'GA_Athena_FloppingRabbit_Passive_C_ExecuteUbergraph_GA_Athena_FloppingRabbit_Passive::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(GA_Athena_FloppingRabbit_Passive_C_ExecuteUbergraph_GA_Athena_FloppingRabbit_Passive, CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue_2) == 0x000134, "Member 'GA_Athena_FloppingRabbit_Passive_C_ExecuteUbergraph_GA_Athena_FloppingRabbit_Passive::CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(GA_Athena_FloppingRabbit_Passive_C_ExecuteUbergraph_GA_Athena_FloppingRabbit_Passive, K2Node_CreateDelegate_OutputDelegate_1) == 0x00013C, "Member 'GA_Athena_FloppingRabbit_Passive_C_ExecuteUbergraph_GA_Athena_FloppingRabbit_Passive::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(GA_Athena_FloppingRabbit_Passive_C_ExecuteUbergraph_GA_Athena_FloppingRabbit_Passive, CallFunc_WaitGameplayTagRemove_ReturnValue) == 0x000148, "Member 'GA_Athena_FloppingRabbit_Passive_C_ExecuteUbergraph_GA_Athena_FloppingRabbit_Passive::CallFunc_WaitGameplayTagRemove_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_FloppingRabbit_Passive_C_ExecuteUbergraph_GA_Athena_FloppingRabbit_Passive, CallFunc_IsValid_ReturnValue_3) == 0x000150, "Member 'GA_Athena_FloppingRabbit_Passive_C_ExecuteUbergraph_GA_Athena_FloppingRabbit_Passive::CallFunc_IsValid_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(GA_Athena_FloppingRabbit_Passive_C_ExecuteUbergraph_GA_Athena_FloppingRabbit_Passive, CallFunc_SetBobberHidden_CurrentWeapon_2) == 0x000158, "Member 'GA_Athena_FloppingRabbit_Passive_C_ExecuteUbergraph_GA_Athena_FloppingRabbit_Passive::CallFunc_SetBobberHidden_CurrentWeapon_2' has a wrong offset!");
static_assert(offsetof(GA_Athena_FloppingRabbit_Passive_C_ExecuteUbergraph_GA_Athena_FloppingRabbit_Passive, CallFunc_SetBobberHidden_CastedToRabbitWeapon_2) == 0x000160, "Member 'GA_Athena_FloppingRabbit_Passive_C_ExecuteUbergraph_GA_Athena_FloppingRabbit_Passive::CallFunc_SetBobberHidden_CastedToRabbitWeapon_2' has a wrong offset!");
static_assert(offsetof(GA_Athena_FloppingRabbit_Passive_C_ExecuteUbergraph_GA_Athena_FloppingRabbit_Passive, CallFunc_SetBobberHidden_CurrentWeapon_3) == 0x000168, "Member 'GA_Athena_FloppingRabbit_Passive_C_ExecuteUbergraph_GA_Athena_FloppingRabbit_Passive::CallFunc_SetBobberHidden_CurrentWeapon_3' has a wrong offset!");
static_assert(offsetof(GA_Athena_FloppingRabbit_Passive_C_ExecuteUbergraph_GA_Athena_FloppingRabbit_Passive, CallFunc_SetBobberHidden_CastedToRabbitWeapon_3) == 0x000170, "Member 'GA_Athena_FloppingRabbit_Passive_C_ExecuteUbergraph_GA_Athena_FloppingRabbit_Passive::CallFunc_SetBobberHidden_CastedToRabbitWeapon_3' has a wrong offset!");
static_assert(offsetof(GA_Athena_FloppingRabbit_Passive_C_ExecuteUbergraph_GA_Athena_FloppingRabbit_Passive, CallFunc_IsMobilePlatform_ReturnValue) == 0x000178, "Member 'GA_Athena_FloppingRabbit_Passive_C_ExecuteUbergraph_GA_Athena_FloppingRabbit_Passive::CallFunc_IsMobilePlatform_ReturnValue' has a wrong offset!");

// Function GA_Athena_FloppingRabbit_Passive.GA_Athena_FloppingRabbit_Passive_C.K2_ActivateAbilityFromEvent
// 0x00B0 (0x00B0 - 0x0000)
struct GA_Athena_FloppingRabbit_Passive_C_K2_ActivateAbilityFromEvent final
{
public:
	struct FGameplayEventData                     EventData;                                         // 0x0000(0x00B0)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(GA_Athena_FloppingRabbit_Passive_C_K2_ActivateAbilityFromEvent) == 0x000008, "Wrong alignment on GA_Athena_FloppingRabbit_Passive_C_K2_ActivateAbilityFromEvent");
static_assert(sizeof(GA_Athena_FloppingRabbit_Passive_C_K2_ActivateAbilityFromEvent) == 0x0000B0, "Wrong size on GA_Athena_FloppingRabbit_Passive_C_K2_ActivateAbilityFromEvent");
static_assert(offsetof(GA_Athena_FloppingRabbit_Passive_C_K2_ActivateAbilityFromEvent, EventData) == 0x000000, "Member 'GA_Athena_FloppingRabbit_Passive_C_K2_ActivateAbilityFromEvent::EventData' has a wrong offset!");

// Function GA_Athena_FloppingRabbit_Passive.GA_Athena_FloppingRabbit_Passive_C.K2_OnEndAbility
// 0x0001 (0x0001 - 0x0000)
struct GA_Athena_FloppingRabbit_Passive_C_K2_OnEndAbility final
{
public:
	bool                                          bWasCancelled;                                     // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GA_Athena_FloppingRabbit_Passive_C_K2_OnEndAbility) == 0x000001, "Wrong alignment on GA_Athena_FloppingRabbit_Passive_C_K2_OnEndAbility");
static_assert(sizeof(GA_Athena_FloppingRabbit_Passive_C_K2_OnEndAbility) == 0x000001, "Wrong size on GA_Athena_FloppingRabbit_Passive_C_K2_OnEndAbility");
static_assert(offsetof(GA_Athena_FloppingRabbit_Passive_C_K2_OnEndAbility, bWasCancelled) == 0x000000, "Member 'GA_Athena_FloppingRabbit_Passive_C_K2_OnEndAbility::bWasCancelled' has a wrong offset!");

// Function GA_Athena_FloppingRabbit_Passive.GA_Athena_FloppingRabbit_Passive_C.SaveOutRod
// 0x0028 (0x0028 - 0x0000)
struct GA_Athena_FloppingRabbit_Passive_C_SaveOutRod final
{
public:
	class AActor*                                 CallFunc_GetAvatarActorFromActorInfo_ReturnValue;  // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerPawn*                        K2Node_DynamicCast_AsFort_Player_Pawn;             // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_11[0x7];                                       // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AB_FloppingRabbit_Weap_Athena_C*        K2Node_DynamicCast_AsB_Flopping_Rabbit_Weap_Athena; // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GA_Athena_FloppingRabbit_Passive_C_SaveOutRod) == 0x000008, "Wrong alignment on GA_Athena_FloppingRabbit_Passive_C_SaveOutRod");
static_assert(sizeof(GA_Athena_FloppingRabbit_Passive_C_SaveOutRod) == 0x000028, "Wrong size on GA_Athena_FloppingRabbit_Passive_C_SaveOutRod");
static_assert(offsetof(GA_Athena_FloppingRabbit_Passive_C_SaveOutRod, CallFunc_GetAvatarActorFromActorInfo_ReturnValue) == 0x000000, "Member 'GA_Athena_FloppingRabbit_Passive_C_SaveOutRod::CallFunc_GetAvatarActorFromActorInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_FloppingRabbit_Passive_C_SaveOutRod, K2Node_DynamicCast_AsFort_Player_Pawn) == 0x000008, "Member 'GA_Athena_FloppingRabbit_Passive_C_SaveOutRod::K2Node_DynamicCast_AsFort_Player_Pawn' has a wrong offset!");
static_assert(offsetof(GA_Athena_FloppingRabbit_Passive_C_SaveOutRod, K2Node_DynamicCast_bSuccess) == 0x000010, "Member 'GA_Athena_FloppingRabbit_Passive_C_SaveOutRod::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(GA_Athena_FloppingRabbit_Passive_C_SaveOutRod, K2Node_DynamicCast_AsB_Flopping_Rabbit_Weap_Athena) == 0x000018, "Member 'GA_Athena_FloppingRabbit_Passive_C_SaveOutRod::K2Node_DynamicCast_AsB_Flopping_Rabbit_Weap_Athena' has a wrong offset!");
static_assert(offsetof(GA_Athena_FloppingRabbit_Passive_C_SaveOutRod, K2Node_DynamicCast_bSuccess_1) == 0x000020, "Member 'GA_Athena_FloppingRabbit_Passive_C_SaveOutRod::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");

// Function GA_Athena_FloppingRabbit_Passive.GA_Athena_FloppingRabbit_Passive_C.Seat Changed
// 0x0004 (0x0004 - 0x0000)
struct GA_Athena_FloppingRabbit_Passive_C_Seat_Changed final
{
public:
	int32                                         SeatIndex;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GA_Athena_FloppingRabbit_Passive_C_Seat_Changed) == 0x000004, "Wrong alignment on GA_Athena_FloppingRabbit_Passive_C_Seat_Changed");
static_assert(sizeof(GA_Athena_FloppingRabbit_Passive_C_Seat_Changed) == 0x000004, "Wrong size on GA_Athena_FloppingRabbit_Passive_C_Seat_Changed");
static_assert(offsetof(GA_Athena_FloppingRabbit_Passive_C_Seat_Changed, SeatIndex) == 0x000000, "Member 'GA_Athena_FloppingRabbit_Passive_C_Seat_Changed::SeatIndex' has a wrong offset!");

// Function GA_Athena_FloppingRabbit_Passive.GA_Athena_FloppingRabbit_Passive_C.SetBobberHidden
// 0x0040 (0x0040 - 0x0000)
struct GA_Athena_FloppingRabbit_Passive_C_SetBobberHidden final
{
public:
	bool                                          HideBobber;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AFortWeapon*                            CurrentWeapon;                                     // 0x0008(0x0008)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AB_FloppingRabbit_Weap_Athena_C*        CastedToRabbitWeapon;                              // 0x0010(0x0008)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_GetAvatarActorFromActorInfo_ReturnValue;  // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerPawn*                        K2Node_DynamicCast_AsFort_Player_Pawn;             // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_29[0x7];                                       // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AB_FloppingRabbit_Weap_Athena_C*        K2Node_DynamicCast_AsB_Flopping_Rabbit_Weap_Athena; // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GA_Athena_FloppingRabbit_Passive_C_SetBobberHidden) == 0x000008, "Wrong alignment on GA_Athena_FloppingRabbit_Passive_C_SetBobberHidden");
static_assert(sizeof(GA_Athena_FloppingRabbit_Passive_C_SetBobberHidden) == 0x000040, "Wrong size on GA_Athena_FloppingRabbit_Passive_C_SetBobberHidden");
static_assert(offsetof(GA_Athena_FloppingRabbit_Passive_C_SetBobberHidden, HideBobber) == 0x000000, "Member 'GA_Athena_FloppingRabbit_Passive_C_SetBobberHidden::HideBobber' has a wrong offset!");
static_assert(offsetof(GA_Athena_FloppingRabbit_Passive_C_SetBobberHidden, CurrentWeapon) == 0x000008, "Member 'GA_Athena_FloppingRabbit_Passive_C_SetBobberHidden::CurrentWeapon' has a wrong offset!");
static_assert(offsetof(GA_Athena_FloppingRabbit_Passive_C_SetBobberHidden, CastedToRabbitWeapon) == 0x000010, "Member 'GA_Athena_FloppingRabbit_Passive_C_SetBobberHidden::CastedToRabbitWeapon' has a wrong offset!");
static_assert(offsetof(GA_Athena_FloppingRabbit_Passive_C_SetBobberHidden, CallFunc_GetAvatarActorFromActorInfo_ReturnValue) == 0x000018, "Member 'GA_Athena_FloppingRabbit_Passive_C_SetBobberHidden::CallFunc_GetAvatarActorFromActorInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_FloppingRabbit_Passive_C_SetBobberHidden, K2Node_DynamicCast_AsFort_Player_Pawn) == 0x000020, "Member 'GA_Athena_FloppingRabbit_Passive_C_SetBobberHidden::K2Node_DynamicCast_AsFort_Player_Pawn' has a wrong offset!");
static_assert(offsetof(GA_Athena_FloppingRabbit_Passive_C_SetBobberHidden, K2Node_DynamicCast_bSuccess) == 0x000028, "Member 'GA_Athena_FloppingRabbit_Passive_C_SetBobberHidden::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(GA_Athena_FloppingRabbit_Passive_C_SetBobberHidden, K2Node_DynamicCast_AsB_Flopping_Rabbit_Weap_Athena) == 0x000030, "Member 'GA_Athena_FloppingRabbit_Passive_C_SetBobberHidden::K2Node_DynamicCast_AsB_Flopping_Rabbit_Weap_Athena' has a wrong offset!");
static_assert(offsetof(GA_Athena_FloppingRabbit_Passive_C_SetBobberHidden, K2Node_DynamicCast_bSuccess_1) == 0x000038, "Member 'GA_Athena_FloppingRabbit_Passive_C_SetBobberHidden::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");

}

