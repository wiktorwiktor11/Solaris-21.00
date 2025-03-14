﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PackTent_TaskNode

#include "Basic.hpp"

#include "CommonConversationRuntime_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function PackTent_TaskNode.PackTent_TaskNode_C.ExecuteTaskNode
// 0x0220 (0x0220 - 0x0000)
struct PackTent_TaskNode_C_ExecuteTaskNode final
{
public:
	struct FConversationContext                   Context;                                           // 0x0000(0x0038)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	struct FConversationTaskResult                ReturnValue;                                       // 0x0038(0x0080)(Parm, OutParm, ReturnParm)
	struct FVector                                CachedTentLocation;                                // 0x00B8(0x0018)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FConversationTaskResult                CallFunc_AbortConversation_ReturnValue;            // 0x00D0(0x0080)()
	struct FConversationTaskResult                CallFunc_ExecuteTaskNode_ReturnValue;              // 0x0150(0x0080)()
	class AActor*                                 CallFunc_GetParticipantActorNPC_ReturnValue;       // 0x01D0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_GetParticipantActorPlayer_ReturnValue;    // 0x01D8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AB_Tent_C*                              K2Node_DynamicCast_AsB_Tent;                       // 0x01E0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x01E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1E9[0x7];                                      // 0x01E9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AFortPlayerController*                  K2Node_DynamicCast_AsFort_Player_Controller;       // 0x01F0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x01F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1F9[0x7];                                      // 0x01F9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APawn*                                  CallFunc_K2_GetPawn_ReturnValue;                   // 0x0200(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0208(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_209[0x7];                                      // 0x0209(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AFortPlayerPawn*                        K2Node_DynamicCast_AsFort_Player_Pawn;             // 0x0210(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_2;                     // 0x0218(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PackTent_TaskNode_C_ExecuteTaskNode) == 0x000008, "Wrong alignment on PackTent_TaskNode_C_ExecuteTaskNode");
static_assert(sizeof(PackTent_TaskNode_C_ExecuteTaskNode) == 0x000220, "Wrong size on PackTent_TaskNode_C_ExecuteTaskNode");
static_assert(offsetof(PackTent_TaskNode_C_ExecuteTaskNode, Context) == 0x000000, "Member 'PackTent_TaskNode_C_ExecuteTaskNode::Context' has a wrong offset!");
static_assert(offsetof(PackTent_TaskNode_C_ExecuteTaskNode, ReturnValue) == 0x000038, "Member 'PackTent_TaskNode_C_ExecuteTaskNode::ReturnValue' has a wrong offset!");
static_assert(offsetof(PackTent_TaskNode_C_ExecuteTaskNode, CachedTentLocation) == 0x0000B8, "Member 'PackTent_TaskNode_C_ExecuteTaskNode::CachedTentLocation' has a wrong offset!");
static_assert(offsetof(PackTent_TaskNode_C_ExecuteTaskNode, CallFunc_AbortConversation_ReturnValue) == 0x0000D0, "Member 'PackTent_TaskNode_C_ExecuteTaskNode::CallFunc_AbortConversation_ReturnValue' has a wrong offset!");
static_assert(offsetof(PackTent_TaskNode_C_ExecuteTaskNode, CallFunc_ExecuteTaskNode_ReturnValue) == 0x000150, "Member 'PackTent_TaskNode_C_ExecuteTaskNode::CallFunc_ExecuteTaskNode_ReturnValue' has a wrong offset!");
static_assert(offsetof(PackTent_TaskNode_C_ExecuteTaskNode, CallFunc_GetParticipantActorNPC_ReturnValue) == 0x0001D0, "Member 'PackTent_TaskNode_C_ExecuteTaskNode::CallFunc_GetParticipantActorNPC_ReturnValue' has a wrong offset!");
static_assert(offsetof(PackTent_TaskNode_C_ExecuteTaskNode, CallFunc_GetParticipantActorPlayer_ReturnValue) == 0x0001D8, "Member 'PackTent_TaskNode_C_ExecuteTaskNode::CallFunc_GetParticipantActorPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(PackTent_TaskNode_C_ExecuteTaskNode, K2Node_DynamicCast_AsB_Tent) == 0x0001E0, "Member 'PackTent_TaskNode_C_ExecuteTaskNode::K2Node_DynamicCast_AsB_Tent' has a wrong offset!");
static_assert(offsetof(PackTent_TaskNode_C_ExecuteTaskNode, K2Node_DynamicCast_bSuccess) == 0x0001E8, "Member 'PackTent_TaskNode_C_ExecuteTaskNode::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(PackTent_TaskNode_C_ExecuteTaskNode, K2Node_DynamicCast_AsFort_Player_Controller) == 0x0001F0, "Member 'PackTent_TaskNode_C_ExecuteTaskNode::K2Node_DynamicCast_AsFort_Player_Controller' has a wrong offset!");
static_assert(offsetof(PackTent_TaskNode_C_ExecuteTaskNode, K2Node_DynamicCast_bSuccess_1) == 0x0001F8, "Member 'PackTent_TaskNode_C_ExecuteTaskNode::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(PackTent_TaskNode_C_ExecuteTaskNode, CallFunc_K2_GetPawn_ReturnValue) == 0x000200, "Member 'PackTent_TaskNode_C_ExecuteTaskNode::CallFunc_K2_GetPawn_ReturnValue' has a wrong offset!");
static_assert(offsetof(PackTent_TaskNode_C_ExecuteTaskNode, CallFunc_Not_PreBool_ReturnValue) == 0x000208, "Member 'PackTent_TaskNode_C_ExecuteTaskNode::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(PackTent_TaskNode_C_ExecuteTaskNode, K2Node_DynamicCast_AsFort_Player_Pawn) == 0x000210, "Member 'PackTent_TaskNode_C_ExecuteTaskNode::K2Node_DynamicCast_AsFort_Player_Pawn' has a wrong offset!");
static_assert(offsetof(PackTent_TaskNode_C_ExecuteTaskNode, K2Node_DynamicCast_bSuccess_2) == 0x000218, "Member 'PackTent_TaskNode_C_ExecuteTaskNode::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");

}

