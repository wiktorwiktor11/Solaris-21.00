﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Athena_Soccerball

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function Athena_Soccerball.Athena_Soccerball_C.ExecuteUbergraph_Athena_Soccerball
// 0x00A8 (0x00A8 - 0x0000)
struct Athena_Soccerball_C_ExecuteUbergraph_Athena_Soccerball final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AFortPlayerController*                  CallFunc_GetFortPlayerControllerFromActor_ReturnValue; // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 K2Node_Event_OtherActor;                           // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1A[0x6];                                       // 0x001A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class AFortPawn*                              K2Node_DynamicCast_AsFort_Pawn;                    // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_29[0x7];                                       // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UFortQuestManager*                      CallFunc_GetQuestManager_ReturnValue;              // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_39[0x7];                                       // 0x0039(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0040(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Vector_Distance2D_ReturnValue;            // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Abs_ReturnValue;                          // 0x005C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Divide_FloatFloat_ReturnValue;            // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_FTrunc_ReturnValue;                       // 0x0064(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_InRange_FloatFloat_ReturnValue;           // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_3;                    // 0x0069(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6A[0x2];                                       // 0x006A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x006C(0x000C)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x0078(0x0008)(NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue_1;        // 0x0080(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortGameStateAthena*                   CallFunc_GetGameStateAthena_ReturnValue;           // 0x0098(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Athena_CheckQuestAndObjectiveCompletion_QuestIsValid; // 0x00A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Athena_CheckQuestAndObjectiveCompletion_QuestCompleted; // 0x00A1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Athena_CheckQuestAndObjectiveCompletion_ObjectiveCompleted; // 0x00A2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsCreativeModePlaylist_ReturnValue;       // 0x00A3(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x00A4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x00A5(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Athena_Soccerball_C_ExecuteUbergraph_Athena_Soccerball) == 0x000008, "Wrong alignment on Athena_Soccerball_C_ExecuteUbergraph_Athena_Soccerball");
static_assert(sizeof(Athena_Soccerball_C_ExecuteUbergraph_Athena_Soccerball) == 0x0000A8, "Wrong size on Athena_Soccerball_C_ExecuteUbergraph_Athena_Soccerball");
static_assert(offsetof(Athena_Soccerball_C_ExecuteUbergraph_Athena_Soccerball, EntryPoint) == 0x000000, "Member 'Athena_Soccerball_C_ExecuteUbergraph_Athena_Soccerball::EntryPoint' has a wrong offset!");
static_assert(offsetof(Athena_Soccerball_C_ExecuteUbergraph_Athena_Soccerball, CallFunc_GetFortPlayerControllerFromActor_ReturnValue) == 0x000008, "Member 'Athena_Soccerball_C_ExecuteUbergraph_Athena_Soccerball::CallFunc_GetFortPlayerControllerFromActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(Athena_Soccerball_C_ExecuteUbergraph_Athena_Soccerball, K2Node_Event_OtherActor) == 0x000010, "Member 'Athena_Soccerball_C_ExecuteUbergraph_Athena_Soccerball::K2Node_Event_OtherActor' has a wrong offset!");
static_assert(offsetof(Athena_Soccerball_C_ExecuteUbergraph_Athena_Soccerball, CallFunc_IsValid_ReturnValue) == 0x000018, "Member 'Athena_Soccerball_C_ExecuteUbergraph_Athena_Soccerball::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(Athena_Soccerball_C_ExecuteUbergraph_Athena_Soccerball, CallFunc_IsValid_ReturnValue_1) == 0x000019, "Member 'Athena_Soccerball_C_ExecuteUbergraph_Athena_Soccerball::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Athena_Soccerball_C_ExecuteUbergraph_Athena_Soccerball, K2Node_DynamicCast_AsFort_Pawn) == 0x000020, "Member 'Athena_Soccerball_C_ExecuteUbergraph_Athena_Soccerball::K2Node_DynamicCast_AsFort_Pawn' has a wrong offset!");
static_assert(offsetof(Athena_Soccerball_C_ExecuteUbergraph_Athena_Soccerball, K2Node_DynamicCast_bSuccess) == 0x000028, "Member 'Athena_Soccerball_C_ExecuteUbergraph_Athena_Soccerball::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(Athena_Soccerball_C_ExecuteUbergraph_Athena_Soccerball, CallFunc_GetQuestManager_ReturnValue) == 0x000030, "Member 'Athena_Soccerball_C_ExecuteUbergraph_Athena_Soccerball::CallFunc_GetQuestManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(Athena_Soccerball_C_ExecuteUbergraph_Athena_Soccerball, CallFunc_IsValid_ReturnValue_2) == 0x000038, "Member 'Athena_Soccerball_C_ExecuteUbergraph_Athena_Soccerball::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(Athena_Soccerball_C_ExecuteUbergraph_Athena_Soccerball, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000040, "Member 'Athena_Soccerball_C_ExecuteUbergraph_Athena_Soccerball::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(Athena_Soccerball_C_ExecuteUbergraph_Athena_Soccerball, CallFunc_Vector_Distance2D_ReturnValue) == 0x000058, "Member 'Athena_Soccerball_C_ExecuteUbergraph_Athena_Soccerball::CallFunc_Vector_Distance2D_ReturnValue' has a wrong offset!");
static_assert(offsetof(Athena_Soccerball_C_ExecuteUbergraph_Athena_Soccerball, CallFunc_Abs_ReturnValue) == 0x00005C, "Member 'Athena_Soccerball_C_ExecuteUbergraph_Athena_Soccerball::CallFunc_Abs_ReturnValue' has a wrong offset!");
static_assert(offsetof(Athena_Soccerball_C_ExecuteUbergraph_Athena_Soccerball, CallFunc_Divide_FloatFloat_ReturnValue) == 0x000060, "Member 'Athena_Soccerball_C_ExecuteUbergraph_Athena_Soccerball::CallFunc_Divide_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(Athena_Soccerball_C_ExecuteUbergraph_Athena_Soccerball, CallFunc_FTrunc_ReturnValue) == 0x000064, "Member 'Athena_Soccerball_C_ExecuteUbergraph_Athena_Soccerball::CallFunc_FTrunc_ReturnValue' has a wrong offset!");
static_assert(offsetof(Athena_Soccerball_C_ExecuteUbergraph_Athena_Soccerball, CallFunc_InRange_FloatFloat_ReturnValue) == 0x000068, "Member 'Athena_Soccerball_C_ExecuteUbergraph_Athena_Soccerball::CallFunc_InRange_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(Athena_Soccerball_C_ExecuteUbergraph_Athena_Soccerball, CallFunc_IsValid_ReturnValue_3) == 0x000069, "Member 'Athena_Soccerball_C_ExecuteUbergraph_Athena_Soccerball::CallFunc_IsValid_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(Athena_Soccerball_C_ExecuteUbergraph_Athena_Soccerball, K2Node_CreateDelegate_OutputDelegate) == 0x00006C, "Member 'Athena_Soccerball_C_ExecuteUbergraph_Athena_Soccerball::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(Athena_Soccerball_C_ExecuteUbergraph_Athena_Soccerball, CallFunc_K2_SetTimerDelegate_ReturnValue) == 0x000078, "Member 'Athena_Soccerball_C_ExecuteUbergraph_Athena_Soccerball::CallFunc_K2_SetTimerDelegate_ReturnValue' has a wrong offset!");
static_assert(offsetof(Athena_Soccerball_C_ExecuteUbergraph_Athena_Soccerball, CallFunc_K2_GetActorLocation_ReturnValue_1) == 0x000080, "Member 'Athena_Soccerball_C_ExecuteUbergraph_Athena_Soccerball::CallFunc_K2_GetActorLocation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Athena_Soccerball_C_ExecuteUbergraph_Athena_Soccerball, CallFunc_GetGameStateAthena_ReturnValue) == 0x000098, "Member 'Athena_Soccerball_C_ExecuteUbergraph_Athena_Soccerball::CallFunc_GetGameStateAthena_ReturnValue' has a wrong offset!");
static_assert(offsetof(Athena_Soccerball_C_ExecuteUbergraph_Athena_Soccerball, CallFunc_Athena_CheckQuestAndObjectiveCompletion_QuestIsValid) == 0x0000A0, "Member 'Athena_Soccerball_C_ExecuteUbergraph_Athena_Soccerball::CallFunc_Athena_CheckQuestAndObjectiveCompletion_QuestIsValid' has a wrong offset!");
static_assert(offsetof(Athena_Soccerball_C_ExecuteUbergraph_Athena_Soccerball, CallFunc_Athena_CheckQuestAndObjectiveCompletion_QuestCompleted) == 0x0000A1, "Member 'Athena_Soccerball_C_ExecuteUbergraph_Athena_Soccerball::CallFunc_Athena_CheckQuestAndObjectiveCompletion_QuestCompleted' has a wrong offset!");
static_assert(offsetof(Athena_Soccerball_C_ExecuteUbergraph_Athena_Soccerball, CallFunc_Athena_CheckQuestAndObjectiveCompletion_ObjectiveCompleted) == 0x0000A2, "Member 'Athena_Soccerball_C_ExecuteUbergraph_Athena_Soccerball::CallFunc_Athena_CheckQuestAndObjectiveCompletion_ObjectiveCompleted' has a wrong offset!");
static_assert(offsetof(Athena_Soccerball_C_ExecuteUbergraph_Athena_Soccerball, CallFunc_IsCreativeModePlaylist_ReturnValue) == 0x0000A3, "Member 'Athena_Soccerball_C_ExecuteUbergraph_Athena_Soccerball::CallFunc_IsCreativeModePlaylist_ReturnValue' has a wrong offset!");
static_assert(offsetof(Athena_Soccerball_C_ExecuteUbergraph_Athena_Soccerball, CallFunc_Not_PreBool_ReturnValue) == 0x0000A4, "Member 'Athena_Soccerball_C_ExecuteUbergraph_Athena_Soccerball::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(Athena_Soccerball_C_ExecuteUbergraph_Athena_Soccerball, CallFunc_BooleanAND_ReturnValue) == 0x0000A5, "Member 'Athena_Soccerball_C_ExecuteUbergraph_Athena_Soccerball::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");

// Function Athena_Soccerball.Athena_Soccerball_C.ReceiveActorBeginOverlap
// 0x0008 (0x0008 - 0x0000)
struct Athena_Soccerball_C_ReceiveActorBeginOverlap final
{
public:
	class AActor*                                 OtherActor;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Athena_Soccerball_C_ReceiveActorBeginOverlap) == 0x000008, "Wrong alignment on Athena_Soccerball_C_ReceiveActorBeginOverlap");
static_assert(sizeof(Athena_Soccerball_C_ReceiveActorBeginOverlap) == 0x000008, "Wrong size on Athena_Soccerball_C_ReceiveActorBeginOverlap");
static_assert(offsetof(Athena_Soccerball_C_ReceiveActorBeginOverlap, OtherActor) == 0x000000, "Member 'Athena_Soccerball_C_ReceiveActorBeginOverlap::OtherActor' has a wrong offset!");

}

