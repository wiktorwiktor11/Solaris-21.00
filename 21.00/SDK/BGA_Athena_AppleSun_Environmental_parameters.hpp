﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BGA_Athena_AppleSun_Environmental

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "GameplayTags_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function BGA_Athena_AppleSun_Environmental.BGA_Athena_AppleSun_Environmental_C.ExecuteUbergraph_BGA_Athena_AppleSun_Environmental
// 0x01D0 (0x01D0 - 0x0000)
struct BGA_Athena_AppleSun_Environmental_C_ExecuteUbergraph_BGA_Athena_AppleSun_Environmental final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_RandomFloatInRange_ReturnValue;           // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortPlaylist*                          Temp_object_Variable;                              // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortGameStateAthena*                   Temp_object_Variable_1;                            // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortAsyncAction_CurrentPlaylistReady*  CallFunc_PlaylistDataReadyAsync_ReturnValue;       // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWaterSubsystem*                        CallFunc_GetWorldSubsystem_ReturnValue;            // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetOceanBaseHeight_ReturnValue;           // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetOceanTotalHeight_ReturnValue;          // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_31[0x3];                                       // 0x0031(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Subtract_FloatFloat_ReturnValue;          // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Divide_FloatFloat_ReturnValue;            // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsServer_ReturnValue;                     // 0x003C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_RowToBool_ReturnValue;                    // 0x003D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3E[0x2];                                       // 0x003E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_RandomFloatInRange_ReturnValue_1;         // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_44[0x4];                                       // 0x0044(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayTagContainer                  Temp_struct_Variable;                              // 0x0048(0x0020)()
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0068(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_X;                            // 0x0080(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Y;                            // 0x0084(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Z;                            // 0x0088(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8C[0x4];                                       // 0x008C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_MakeVector_ReturnValue;                   // 0x0090(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             CallFunc_K2_SetActorLocation_SweepHitResult;       // 0x00A8(0x00E0)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                          CallFunc_K2_SetActorLocation_ReturnValue;          // 0x0188(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_189[0x3];                                      // 0x0189(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Conv_IntToFloat_ReturnValue;              // 0x018C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortGameStateAthena*                   K2Node_CustomEvent_GameState;                      // 0x0190(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	const class UFortPlaylist*                    K2Node_CustomEvent_Playlist;                       // 0x0198(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagContainer                  K2Node_CustomEvent_PlaylistContextTags;            // 0x01A0(0x0020)(ConstParm)
	bool                                          CallFunc_GreaterEqual_FloatFloat_ReturnValue;      // 0x01C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1C1[0x3];                                      // 0x01C1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(class AFortGameStateAthena* GameState, class UFortPlaylist* Playlist, struct FGameplayTagContainer& PlaylistContextTags)> K2Node_CreateDelegate_OutputDelegate;              // 0x01C4(0x000C)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BGA_Athena_AppleSun_Environmental_C_ExecuteUbergraph_BGA_Athena_AppleSun_Environmental) == 0x000008, "Wrong alignment on BGA_Athena_AppleSun_Environmental_C_ExecuteUbergraph_BGA_Athena_AppleSun_Environmental");
static_assert(sizeof(BGA_Athena_AppleSun_Environmental_C_ExecuteUbergraph_BGA_Athena_AppleSun_Environmental) == 0x0001D0, "Wrong size on BGA_Athena_AppleSun_Environmental_C_ExecuteUbergraph_BGA_Athena_AppleSun_Environmental");
static_assert(offsetof(BGA_Athena_AppleSun_Environmental_C_ExecuteUbergraph_BGA_Athena_AppleSun_Environmental, EntryPoint) == 0x000000, "Member 'BGA_Athena_AppleSun_Environmental_C_ExecuteUbergraph_BGA_Athena_AppleSun_Environmental::EntryPoint' has a wrong offset!");
static_assert(offsetof(BGA_Athena_AppleSun_Environmental_C_ExecuteUbergraph_BGA_Athena_AppleSun_Environmental, CallFunc_RandomFloatInRange_ReturnValue) == 0x000004, "Member 'BGA_Athena_AppleSun_Environmental_C_ExecuteUbergraph_BGA_Athena_AppleSun_Environmental::CallFunc_RandomFloatInRange_ReturnValue' has a wrong offset!");
static_assert(offsetof(BGA_Athena_AppleSun_Environmental_C_ExecuteUbergraph_BGA_Athena_AppleSun_Environmental, Temp_object_Variable) == 0x000008, "Member 'BGA_Athena_AppleSun_Environmental_C_ExecuteUbergraph_BGA_Athena_AppleSun_Environmental::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(BGA_Athena_AppleSun_Environmental_C_ExecuteUbergraph_BGA_Athena_AppleSun_Environmental, Temp_object_Variable_1) == 0x000010, "Member 'BGA_Athena_AppleSun_Environmental_C_ExecuteUbergraph_BGA_Athena_AppleSun_Environmental::Temp_object_Variable_1' has a wrong offset!");
static_assert(offsetof(BGA_Athena_AppleSun_Environmental_C_ExecuteUbergraph_BGA_Athena_AppleSun_Environmental, CallFunc_PlaylistDataReadyAsync_ReturnValue) == 0x000018, "Member 'BGA_Athena_AppleSun_Environmental_C_ExecuteUbergraph_BGA_Athena_AppleSun_Environmental::CallFunc_PlaylistDataReadyAsync_ReturnValue' has a wrong offset!");
static_assert(offsetof(BGA_Athena_AppleSun_Environmental_C_ExecuteUbergraph_BGA_Athena_AppleSun_Environmental, CallFunc_GetWorldSubsystem_ReturnValue) == 0x000020, "Member 'BGA_Athena_AppleSun_Environmental_C_ExecuteUbergraph_BGA_Athena_AppleSun_Environmental::CallFunc_GetWorldSubsystem_ReturnValue' has a wrong offset!");
static_assert(offsetof(BGA_Athena_AppleSun_Environmental_C_ExecuteUbergraph_BGA_Athena_AppleSun_Environmental, CallFunc_GetOceanBaseHeight_ReturnValue) == 0x000028, "Member 'BGA_Athena_AppleSun_Environmental_C_ExecuteUbergraph_BGA_Athena_AppleSun_Environmental::CallFunc_GetOceanBaseHeight_ReturnValue' has a wrong offset!");
static_assert(offsetof(BGA_Athena_AppleSun_Environmental_C_ExecuteUbergraph_BGA_Athena_AppleSun_Environmental, CallFunc_GetOceanTotalHeight_ReturnValue) == 0x00002C, "Member 'BGA_Athena_AppleSun_Environmental_C_ExecuteUbergraph_BGA_Athena_AppleSun_Environmental::CallFunc_GetOceanTotalHeight_ReturnValue' has a wrong offset!");
static_assert(offsetof(BGA_Athena_AppleSun_Environmental_C_ExecuteUbergraph_BGA_Athena_AppleSun_Environmental, CallFunc_IsValid_ReturnValue) == 0x000030, "Member 'BGA_Athena_AppleSun_Environmental_C_ExecuteUbergraph_BGA_Athena_AppleSun_Environmental::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BGA_Athena_AppleSun_Environmental_C_ExecuteUbergraph_BGA_Athena_AppleSun_Environmental, CallFunc_Subtract_FloatFloat_ReturnValue) == 0x000034, "Member 'BGA_Athena_AppleSun_Environmental_C_ExecuteUbergraph_BGA_Athena_AppleSun_Environmental::CallFunc_Subtract_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BGA_Athena_AppleSun_Environmental_C_ExecuteUbergraph_BGA_Athena_AppleSun_Environmental, CallFunc_Divide_FloatFloat_ReturnValue) == 0x000038, "Member 'BGA_Athena_AppleSun_Environmental_C_ExecuteUbergraph_BGA_Athena_AppleSun_Environmental::CallFunc_Divide_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BGA_Athena_AppleSun_Environmental_C_ExecuteUbergraph_BGA_Athena_AppleSun_Environmental, CallFunc_IsServer_ReturnValue) == 0x00003C, "Member 'BGA_Athena_AppleSun_Environmental_C_ExecuteUbergraph_BGA_Athena_AppleSun_Environmental::CallFunc_IsServer_ReturnValue' has a wrong offset!");
static_assert(offsetof(BGA_Athena_AppleSun_Environmental_C_ExecuteUbergraph_BGA_Athena_AppleSun_Environmental, CallFunc_RowToBool_ReturnValue) == 0x00003D, "Member 'BGA_Athena_AppleSun_Environmental_C_ExecuteUbergraph_BGA_Athena_AppleSun_Environmental::CallFunc_RowToBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(BGA_Athena_AppleSun_Environmental_C_ExecuteUbergraph_BGA_Athena_AppleSun_Environmental, CallFunc_RandomFloatInRange_ReturnValue_1) == 0x000040, "Member 'BGA_Athena_AppleSun_Environmental_C_ExecuteUbergraph_BGA_Athena_AppleSun_Environmental::CallFunc_RandomFloatInRange_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BGA_Athena_AppleSun_Environmental_C_ExecuteUbergraph_BGA_Athena_AppleSun_Environmental, Temp_struct_Variable) == 0x000048, "Member 'BGA_Athena_AppleSun_Environmental_C_ExecuteUbergraph_BGA_Athena_AppleSun_Environmental::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(BGA_Athena_AppleSun_Environmental_C_ExecuteUbergraph_BGA_Athena_AppleSun_Environmental, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000068, "Member 'BGA_Athena_AppleSun_Environmental_C_ExecuteUbergraph_BGA_Athena_AppleSun_Environmental::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BGA_Athena_AppleSun_Environmental_C_ExecuteUbergraph_BGA_Athena_AppleSun_Environmental, CallFunc_BreakVector_X) == 0x000080, "Member 'BGA_Athena_AppleSun_Environmental_C_ExecuteUbergraph_BGA_Athena_AppleSun_Environmental::CallFunc_BreakVector_X' has a wrong offset!");
static_assert(offsetof(BGA_Athena_AppleSun_Environmental_C_ExecuteUbergraph_BGA_Athena_AppleSun_Environmental, CallFunc_BreakVector_Y) == 0x000084, "Member 'BGA_Athena_AppleSun_Environmental_C_ExecuteUbergraph_BGA_Athena_AppleSun_Environmental::CallFunc_BreakVector_Y' has a wrong offset!");
static_assert(offsetof(BGA_Athena_AppleSun_Environmental_C_ExecuteUbergraph_BGA_Athena_AppleSun_Environmental, CallFunc_BreakVector_Z) == 0x000088, "Member 'BGA_Athena_AppleSun_Environmental_C_ExecuteUbergraph_BGA_Athena_AppleSun_Environmental::CallFunc_BreakVector_Z' has a wrong offset!");
static_assert(offsetof(BGA_Athena_AppleSun_Environmental_C_ExecuteUbergraph_BGA_Athena_AppleSun_Environmental, CallFunc_MakeVector_ReturnValue) == 0x000090, "Member 'BGA_Athena_AppleSun_Environmental_C_ExecuteUbergraph_BGA_Athena_AppleSun_Environmental::CallFunc_MakeVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BGA_Athena_AppleSun_Environmental_C_ExecuteUbergraph_BGA_Athena_AppleSun_Environmental, CallFunc_K2_SetActorLocation_SweepHitResult) == 0x0000A8, "Member 'BGA_Athena_AppleSun_Environmental_C_ExecuteUbergraph_BGA_Athena_AppleSun_Environmental::CallFunc_K2_SetActorLocation_SweepHitResult' has a wrong offset!");
static_assert(offsetof(BGA_Athena_AppleSun_Environmental_C_ExecuteUbergraph_BGA_Athena_AppleSun_Environmental, CallFunc_K2_SetActorLocation_ReturnValue) == 0x000188, "Member 'BGA_Athena_AppleSun_Environmental_C_ExecuteUbergraph_BGA_Athena_AppleSun_Environmental::CallFunc_K2_SetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BGA_Athena_AppleSun_Environmental_C_ExecuteUbergraph_BGA_Athena_AppleSun_Environmental, CallFunc_Conv_IntToFloat_ReturnValue) == 0x00018C, "Member 'BGA_Athena_AppleSun_Environmental_C_ExecuteUbergraph_BGA_Athena_AppleSun_Environmental::CallFunc_Conv_IntToFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BGA_Athena_AppleSun_Environmental_C_ExecuteUbergraph_BGA_Athena_AppleSun_Environmental, K2Node_CustomEvent_GameState) == 0x000190, "Member 'BGA_Athena_AppleSun_Environmental_C_ExecuteUbergraph_BGA_Athena_AppleSun_Environmental::K2Node_CustomEvent_GameState' has a wrong offset!");
static_assert(offsetof(BGA_Athena_AppleSun_Environmental_C_ExecuteUbergraph_BGA_Athena_AppleSun_Environmental, K2Node_CustomEvent_Playlist) == 0x000198, "Member 'BGA_Athena_AppleSun_Environmental_C_ExecuteUbergraph_BGA_Athena_AppleSun_Environmental::K2Node_CustomEvent_Playlist' has a wrong offset!");
static_assert(offsetof(BGA_Athena_AppleSun_Environmental_C_ExecuteUbergraph_BGA_Athena_AppleSun_Environmental, K2Node_CustomEvent_PlaylistContextTags) == 0x0001A0, "Member 'BGA_Athena_AppleSun_Environmental_C_ExecuteUbergraph_BGA_Athena_AppleSun_Environmental::K2Node_CustomEvent_PlaylistContextTags' has a wrong offset!");
static_assert(offsetof(BGA_Athena_AppleSun_Environmental_C_ExecuteUbergraph_BGA_Athena_AppleSun_Environmental, CallFunc_GreaterEqual_FloatFloat_ReturnValue) == 0x0001C0, "Member 'BGA_Athena_AppleSun_Environmental_C_ExecuteUbergraph_BGA_Athena_AppleSun_Environmental::CallFunc_GreaterEqual_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BGA_Athena_AppleSun_Environmental_C_ExecuteUbergraph_BGA_Athena_AppleSun_Environmental, K2Node_CreateDelegate_OutputDelegate) == 0x0001C4, "Member 'BGA_Athena_AppleSun_Environmental_C_ExecuteUbergraph_BGA_Athena_AppleSun_Environmental::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");

// Function BGA_Athena_AppleSun_Environmental.BGA_Athena_AppleSun_Environmental_C.OnReady_EBCD47AE48F39DEDCFC1DCAF8CFB0EC4
// 0x0030 (0x0030 - 0x0000)
struct BGA_Athena_AppleSun_Environmental_C_OnReady_EBCD47AE48F39DEDCFC1DCAF8CFB0EC4 final
{
public:
	class AFortGameStateAthena*                   GameState;                                         // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	const class UFortPlaylist*                    Playlist;                                          // 0x0008(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagContainer                  PlaylistContextTags;                               // 0x0010(0x0020)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(BGA_Athena_AppleSun_Environmental_C_OnReady_EBCD47AE48F39DEDCFC1DCAF8CFB0EC4) == 0x000008, "Wrong alignment on BGA_Athena_AppleSun_Environmental_C_OnReady_EBCD47AE48F39DEDCFC1DCAF8CFB0EC4");
static_assert(sizeof(BGA_Athena_AppleSun_Environmental_C_OnReady_EBCD47AE48F39DEDCFC1DCAF8CFB0EC4) == 0x000030, "Wrong size on BGA_Athena_AppleSun_Environmental_C_OnReady_EBCD47AE48F39DEDCFC1DCAF8CFB0EC4");
static_assert(offsetof(BGA_Athena_AppleSun_Environmental_C_OnReady_EBCD47AE48F39DEDCFC1DCAF8CFB0EC4, GameState) == 0x000000, "Member 'BGA_Athena_AppleSun_Environmental_C_OnReady_EBCD47AE48F39DEDCFC1DCAF8CFB0EC4::GameState' has a wrong offset!");
static_assert(offsetof(BGA_Athena_AppleSun_Environmental_C_OnReady_EBCD47AE48F39DEDCFC1DCAF8CFB0EC4, Playlist) == 0x000008, "Member 'BGA_Athena_AppleSun_Environmental_C_OnReady_EBCD47AE48F39DEDCFC1DCAF8CFB0EC4::Playlist' has a wrong offset!");
static_assert(offsetof(BGA_Athena_AppleSun_Environmental_C_OnReady_EBCD47AE48F39DEDCFC1DCAF8CFB0EC4, PlaylistContextTags) == 0x000010, "Member 'BGA_Athena_AppleSun_Environmental_C_OnReady_EBCD47AE48F39DEDCFC1DCAF8CFB0EC4::PlaylistContextTags' has a wrong offset!");

}

