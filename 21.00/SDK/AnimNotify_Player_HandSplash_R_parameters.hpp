﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AnimNotify_Player_HandSplash_R

#include "Basic.hpp"

#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function AnimNotify_Player_HandSplash_R.AnimNotify_Player_HandSplash_R_C.Received_Notify
// 0x0090 (0x0090 - 0x0000)
struct AnimNotify_Player_HandSplash_R_C_Received_Notify final
{
public:
	class USkeletalMeshComponent*                 MeshComp;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimSequenceBase*                      Animation;                                         // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FAnimNotifyEventReference              EventReference;                                    // 0x0010(0x0028)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                          ReturnValue;                                       // 0x0038(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_39[0x7];                                       // 0x0039(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetOwner_ReturnValue;                     // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetDisplayName_ReturnValue;               // 0x0048(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class AFortPlayerPawnAthena*                  K2Node_DynamicCast_AsFort_Player_Pawn_Athena;      // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_61[0x7];                                       // 0x0061(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x0068(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class UFXSystemComponent*                     CallFunc_GetActivePlayerHandSplashInWaterComponent_ReturnValue; // 0x0078(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                      K2Node_DynamicCast_AsNiagara_Particle_System_Component; // 0x0080(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0088(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(AnimNotify_Player_HandSplash_R_C_Received_Notify) == 0x000008, "Wrong alignment on AnimNotify_Player_HandSplash_R_C_Received_Notify");
static_assert(sizeof(AnimNotify_Player_HandSplash_R_C_Received_Notify) == 0x000090, "Wrong size on AnimNotify_Player_HandSplash_R_C_Received_Notify");
static_assert(offsetof(AnimNotify_Player_HandSplash_R_C_Received_Notify, MeshComp) == 0x000000, "Member 'AnimNotify_Player_HandSplash_R_C_Received_Notify::MeshComp' has a wrong offset!");
static_assert(offsetof(AnimNotify_Player_HandSplash_R_C_Received_Notify, Animation) == 0x000008, "Member 'AnimNotify_Player_HandSplash_R_C_Received_Notify::Animation' has a wrong offset!");
static_assert(offsetof(AnimNotify_Player_HandSplash_R_C_Received_Notify, EventReference) == 0x000010, "Member 'AnimNotify_Player_HandSplash_R_C_Received_Notify::EventReference' has a wrong offset!");
static_assert(offsetof(AnimNotify_Player_HandSplash_R_C_Received_Notify, ReturnValue) == 0x000038, "Member 'AnimNotify_Player_HandSplash_R_C_Received_Notify::ReturnValue' has a wrong offset!");
static_assert(offsetof(AnimNotify_Player_HandSplash_R_C_Received_Notify, CallFunc_GetOwner_ReturnValue) == 0x000040, "Member 'AnimNotify_Player_HandSplash_R_C_Received_Notify::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(AnimNotify_Player_HandSplash_R_C_Received_Notify, CallFunc_GetDisplayName_ReturnValue) == 0x000048, "Member 'AnimNotify_Player_HandSplash_R_C_Received_Notify::CallFunc_GetDisplayName_ReturnValue' has a wrong offset!");
static_assert(offsetof(AnimNotify_Player_HandSplash_R_C_Received_Notify, K2Node_DynamicCast_AsFort_Player_Pawn_Athena) == 0x000058, "Member 'AnimNotify_Player_HandSplash_R_C_Received_Notify::K2Node_DynamicCast_AsFort_Player_Pawn_Athena' has a wrong offset!");
static_assert(offsetof(AnimNotify_Player_HandSplash_R_C_Received_Notify, K2Node_DynamicCast_bSuccess) == 0x000060, "Member 'AnimNotify_Player_HandSplash_R_C_Received_Notify::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(AnimNotify_Player_HandSplash_R_C_Received_Notify, CallFunc_Concat_StrStr_ReturnValue) == 0x000068, "Member 'AnimNotify_Player_HandSplash_R_C_Received_Notify::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(AnimNotify_Player_HandSplash_R_C_Received_Notify, CallFunc_GetActivePlayerHandSplashInWaterComponent_ReturnValue) == 0x000078, "Member 'AnimNotify_Player_HandSplash_R_C_Received_Notify::CallFunc_GetActivePlayerHandSplashInWaterComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(AnimNotify_Player_HandSplash_R_C_Received_Notify, K2Node_DynamicCast_AsNiagara_Particle_System_Component) == 0x000080, "Member 'AnimNotify_Player_HandSplash_R_C_Received_Notify::K2Node_DynamicCast_AsNiagara_Particle_System_Component' has a wrong offset!");
static_assert(offsetof(AnimNotify_Player_HandSplash_R_C_Received_Notify, K2Node_DynamicCast_bSuccess_1) == 0x000088, "Member 'AnimNotify_Player_HandSplash_R_C_Received_Notify::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");

}

