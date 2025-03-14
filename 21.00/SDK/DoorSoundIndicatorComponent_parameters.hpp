﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: DoorSoundIndicatorComponent

#include "Basic.hpp"

#include "FortniteGame_structs.hpp"


namespace SDK::Params
{

// Function DoorSoundIndicatorComponent.DoorSoundIndicatorComponent_C.GetAffiliationsToShowFor
// 0x0020 (0x0020 - 0x0000)
struct DoorSoundIndicatorComponent_C_GetAffiliationsToShowFor final
{
public:
	TArray<EFortTeamAffiliation>                  ReturnValue;                                       // 0x0000(0x0010)(Parm, OutParm, ReturnParm)
	TArray<EFortTeamAffiliation>                  K2Node_MakeArray_Array;                            // 0x0010(0x0010)(ReferenceParm)
};
static_assert(alignof(DoorSoundIndicatorComponent_C_GetAffiliationsToShowFor) == 0x000008, "Wrong alignment on DoorSoundIndicatorComponent_C_GetAffiliationsToShowFor");
static_assert(sizeof(DoorSoundIndicatorComponent_C_GetAffiliationsToShowFor) == 0x000020, "Wrong size on DoorSoundIndicatorComponent_C_GetAffiliationsToShowFor");
static_assert(offsetof(DoorSoundIndicatorComponent_C_GetAffiliationsToShowFor, ReturnValue) == 0x000000, "Member 'DoorSoundIndicatorComponent_C_GetAffiliationsToShowFor::ReturnValue' has a wrong offset!");
static_assert(offsetof(DoorSoundIndicatorComponent_C_GetAffiliationsToShowFor, K2Node_MakeArray_Array) == 0x000010, "Member 'DoorSoundIndicatorComponent_C_GetAffiliationsToShowFor::K2Node_MakeArray_Array' has a wrong offset!");

// Function DoorSoundIndicatorComponent.DoorSoundIndicatorComponent_C.ShouldShowSoundIndicator
// 0x0040 (0x0040 - 0x0000)
struct DoorSoundIndicatorComponent_C_ShouldShowSoundIndicator final
{
public:
	class AFortPlayerController*                  PlayerController;                                  // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ReturnValue;                                       // 0x0008(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9[0x7];                                        // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APawn*                                  CallFunc_GetPawn_ReturnValue;                      // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerPawn*                        CallFunc_GetPlayerPawn_ReturnValue;                // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_GetOwner_ReturnValue;                     // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_ObjectObject_ReturnValue;        // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_29[0x7];                                       // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ABuildingWall*                          K2Node_DynamicCast_AsBuilding_Wall;                // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(DoorSoundIndicatorComponent_C_ShouldShowSoundIndicator) == 0x000008, "Wrong alignment on DoorSoundIndicatorComponent_C_ShouldShowSoundIndicator");
static_assert(sizeof(DoorSoundIndicatorComponent_C_ShouldShowSoundIndicator) == 0x000040, "Wrong size on DoorSoundIndicatorComponent_C_ShouldShowSoundIndicator");
static_assert(offsetof(DoorSoundIndicatorComponent_C_ShouldShowSoundIndicator, PlayerController) == 0x000000, "Member 'DoorSoundIndicatorComponent_C_ShouldShowSoundIndicator::PlayerController' has a wrong offset!");
static_assert(offsetof(DoorSoundIndicatorComponent_C_ShouldShowSoundIndicator, ReturnValue) == 0x000008, "Member 'DoorSoundIndicatorComponent_C_ShouldShowSoundIndicator::ReturnValue' has a wrong offset!");
static_assert(offsetof(DoorSoundIndicatorComponent_C_ShouldShowSoundIndicator, CallFunc_GetPawn_ReturnValue) == 0x000010, "Member 'DoorSoundIndicatorComponent_C_ShouldShowSoundIndicator::CallFunc_GetPawn_ReturnValue' has a wrong offset!");
static_assert(offsetof(DoorSoundIndicatorComponent_C_ShouldShowSoundIndicator, CallFunc_GetPlayerPawn_ReturnValue) == 0x000018, "Member 'DoorSoundIndicatorComponent_C_ShouldShowSoundIndicator::CallFunc_GetPlayerPawn_ReturnValue' has a wrong offset!");
static_assert(offsetof(DoorSoundIndicatorComponent_C_ShouldShowSoundIndicator, CallFunc_GetOwner_ReturnValue) == 0x000020, "Member 'DoorSoundIndicatorComponent_C_ShouldShowSoundIndicator::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(DoorSoundIndicatorComponent_C_ShouldShowSoundIndicator, CallFunc_NotEqual_ObjectObject_ReturnValue) == 0x000028, "Member 'DoorSoundIndicatorComponent_C_ShouldShowSoundIndicator::CallFunc_NotEqual_ObjectObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(DoorSoundIndicatorComponent_C_ShouldShowSoundIndicator, K2Node_DynamicCast_AsBuilding_Wall) == 0x000030, "Member 'DoorSoundIndicatorComponent_C_ShouldShowSoundIndicator::K2Node_DynamicCast_AsBuilding_Wall' has a wrong offset!");
static_assert(offsetof(DoorSoundIndicatorComponent_C_ShouldShowSoundIndicator, K2Node_DynamicCast_bSuccess) == 0x000038, "Member 'DoorSoundIndicatorComponent_C_ShouldShowSoundIndicator::K2Node_DynamicCast_bSuccess' has a wrong offset!");

}

