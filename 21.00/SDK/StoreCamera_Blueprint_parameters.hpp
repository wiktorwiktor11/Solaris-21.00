﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: StoreCamera_Blueprint

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function StoreCamera_Blueprint.StoreCamera_Blueprint_C.UserConstructionScript
// 0x0060 (0x0060 - 0x0000)
struct StoreCamera_Blueprint_C_UserConstructionScript final
{
public:
	struct FRotator                               CallFunc_K2_GetComponentRotation_ReturnValue;      // 0x0000(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FRotator                               CallFunc_K2_GetComponentRotation_ReturnValue_1;    // 0x0018(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_K2_GetComponentLocation_ReturnValue;      // 0x0030(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetComponentLocation_ReturnValue_1;    // 0x0048(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(StoreCamera_Blueprint_C_UserConstructionScript) == 0x000008, "Wrong alignment on StoreCamera_Blueprint_C_UserConstructionScript");
static_assert(sizeof(StoreCamera_Blueprint_C_UserConstructionScript) == 0x000060, "Wrong size on StoreCamera_Blueprint_C_UserConstructionScript");
static_assert(offsetof(StoreCamera_Blueprint_C_UserConstructionScript, CallFunc_K2_GetComponentRotation_ReturnValue) == 0x000000, "Member 'StoreCamera_Blueprint_C_UserConstructionScript::CallFunc_K2_GetComponentRotation_ReturnValue' has a wrong offset!");
static_assert(offsetof(StoreCamera_Blueprint_C_UserConstructionScript, CallFunc_K2_GetComponentRotation_ReturnValue_1) == 0x000018, "Member 'StoreCamera_Blueprint_C_UserConstructionScript::CallFunc_K2_GetComponentRotation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(StoreCamera_Blueprint_C_UserConstructionScript, CallFunc_K2_GetComponentLocation_ReturnValue) == 0x000030, "Member 'StoreCamera_Blueprint_C_UserConstructionScript::CallFunc_K2_GetComponentLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(StoreCamera_Blueprint_C_UserConstructionScript, CallFunc_K2_GetComponentLocation_ReturnValue_1) == 0x000048, "Member 'StoreCamera_Blueprint_C_UserConstructionScript::CallFunc_K2_GetComponentLocation_ReturnValue_1' has a wrong offset!");

// Function StoreCamera_Blueprint.StoreCamera_Blueprint_C.ExecuteUbergraph_StoreCamera_Blueprint
// 0x01D8 (0x01D8 - 0x0000)
struct StoreCamera_Blueprint_C_ExecuteUbergraph_StoreCamera_Blueprint final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Lerp_ReturnValue;                         // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_14[0x4];                                       // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AFortPlayerController*                  K2Node_Event_PlayerController_1;                   // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerController*                  K2Node_Event_PlayerController;                     // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Lerp_ReturnValue_1;                       // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2C[0x4];                                       // 0x002C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FRotator                               CallFunc_RLerp_ReturnValue;                        // 0x0030(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_VLerp_ReturnValue;                        // 0x0048(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             CallFunc_K2_SetActorLocationAndRotation_SweepHitResult; // 0x0060(0x00E0)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                          CallFunc_K2_SetActorLocationAndRotation_ReturnValue; // 0x0140(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_141[0x3];                                      // 0x0141(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable_1;                   // 0x0144(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_Enable;                         // 0x0148(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_149[0x7];                                      // 0x0149(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class AStorePinataMaster_Parent_C*>    CallFunc_GetAllActorsOfClass_OutActors;            // 0x0150(0x0010)(ReferenceParm)
	class AStorePinataMaster_Parent_C*            CallFunc_Array_Get_Item;                           // 0x0160(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0168(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_16C[0x4];                                      // 0x016C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class AStoreCardReveal_Parent_C*>      CallFunc_GetAllActorsOfClass_OutActors_1;          // 0x0170(0x0010)(ReferenceParm)
	class AStoreCardReveal_Parent_C*              CallFunc_Array_Get_Item_1;                         // 0x0180(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x0188(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x018C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x018D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x018E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_18F[0x1];                                      // 0x018F(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class ATVPostProcessBP_C*>             CallFunc_GetAllActorsOfClass_OutActors_2;          // 0x0190(0x0010)(ReferenceParm)
	int32                                         Temp_int_Loop_Counter_Variable_1;                  // 0x01A0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_2;               // 0x01A4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x01A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1A9[0x3];                                      // 0x01A9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x01AC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortTimeOfDayManager*                  CallFunc_GetTimeOfDayManagerFromContext_ReturnValue; // 0x01B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable_2;                  // 0x01B8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_2;                // 0x01BC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1BD[0x3];                                      // 0x01BD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_2;                 // 0x01C0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable_2;                   // 0x01C4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ATVPostProcessBP_C*                     CallFunc_Array_Get_Item_2;                         // 0x01C8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x01D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(StoreCamera_Blueprint_C_ExecuteUbergraph_StoreCamera_Blueprint) == 0x000008, "Wrong alignment on StoreCamera_Blueprint_C_ExecuteUbergraph_StoreCamera_Blueprint");
static_assert(sizeof(StoreCamera_Blueprint_C_ExecuteUbergraph_StoreCamera_Blueprint) == 0x0001D8, "Wrong size on StoreCamera_Blueprint_C_ExecuteUbergraph_StoreCamera_Blueprint");
static_assert(offsetof(StoreCamera_Blueprint_C_ExecuteUbergraph_StoreCamera_Blueprint, EntryPoint) == 0x000000, "Member 'StoreCamera_Blueprint_C_ExecuteUbergraph_StoreCamera_Blueprint::EntryPoint' has a wrong offset!");
static_assert(offsetof(StoreCamera_Blueprint_C_ExecuteUbergraph_StoreCamera_Blueprint, Temp_int_Loop_Counter_Variable) == 0x000004, "Member 'StoreCamera_Blueprint_C_ExecuteUbergraph_StoreCamera_Blueprint::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(StoreCamera_Blueprint_C_ExecuteUbergraph_StoreCamera_Blueprint, CallFunc_Lerp_ReturnValue) == 0x000008, "Member 'StoreCamera_Blueprint_C_ExecuteUbergraph_StoreCamera_Blueprint::CallFunc_Lerp_ReturnValue' has a wrong offset!");
static_assert(offsetof(StoreCamera_Blueprint_C_ExecuteUbergraph_StoreCamera_Blueprint, CallFunc_Add_IntInt_ReturnValue) == 0x00000C, "Member 'StoreCamera_Blueprint_C_ExecuteUbergraph_StoreCamera_Blueprint::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(StoreCamera_Blueprint_C_ExecuteUbergraph_StoreCamera_Blueprint, Temp_int_Array_Index_Variable) == 0x000010, "Member 'StoreCamera_Blueprint_C_ExecuteUbergraph_StoreCamera_Blueprint::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(StoreCamera_Blueprint_C_ExecuteUbergraph_StoreCamera_Blueprint, K2Node_Event_PlayerController_1) == 0x000018, "Member 'StoreCamera_Blueprint_C_ExecuteUbergraph_StoreCamera_Blueprint::K2Node_Event_PlayerController_1' has a wrong offset!");
static_assert(offsetof(StoreCamera_Blueprint_C_ExecuteUbergraph_StoreCamera_Blueprint, K2Node_Event_PlayerController) == 0x000020, "Member 'StoreCamera_Blueprint_C_ExecuteUbergraph_StoreCamera_Blueprint::K2Node_Event_PlayerController' has a wrong offset!");
static_assert(offsetof(StoreCamera_Blueprint_C_ExecuteUbergraph_StoreCamera_Blueprint, CallFunc_Lerp_ReturnValue_1) == 0x000028, "Member 'StoreCamera_Blueprint_C_ExecuteUbergraph_StoreCamera_Blueprint::CallFunc_Lerp_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(StoreCamera_Blueprint_C_ExecuteUbergraph_StoreCamera_Blueprint, CallFunc_RLerp_ReturnValue) == 0x000030, "Member 'StoreCamera_Blueprint_C_ExecuteUbergraph_StoreCamera_Blueprint::CallFunc_RLerp_ReturnValue' has a wrong offset!");
static_assert(offsetof(StoreCamera_Blueprint_C_ExecuteUbergraph_StoreCamera_Blueprint, CallFunc_VLerp_ReturnValue) == 0x000048, "Member 'StoreCamera_Blueprint_C_ExecuteUbergraph_StoreCamera_Blueprint::CallFunc_VLerp_ReturnValue' has a wrong offset!");
static_assert(offsetof(StoreCamera_Blueprint_C_ExecuteUbergraph_StoreCamera_Blueprint, CallFunc_K2_SetActorLocationAndRotation_SweepHitResult) == 0x000060, "Member 'StoreCamera_Blueprint_C_ExecuteUbergraph_StoreCamera_Blueprint::CallFunc_K2_SetActorLocationAndRotation_SweepHitResult' has a wrong offset!");
static_assert(offsetof(StoreCamera_Blueprint_C_ExecuteUbergraph_StoreCamera_Blueprint, CallFunc_K2_SetActorLocationAndRotation_ReturnValue) == 0x000140, "Member 'StoreCamera_Blueprint_C_ExecuteUbergraph_StoreCamera_Blueprint::CallFunc_K2_SetActorLocationAndRotation_ReturnValue' has a wrong offset!");
static_assert(offsetof(StoreCamera_Blueprint_C_ExecuteUbergraph_StoreCamera_Blueprint, Temp_int_Array_Index_Variable_1) == 0x000144, "Member 'StoreCamera_Blueprint_C_ExecuteUbergraph_StoreCamera_Blueprint::Temp_int_Array_Index_Variable_1' has a wrong offset!");
static_assert(offsetof(StoreCamera_Blueprint_C_ExecuteUbergraph_StoreCamera_Blueprint, K2Node_CustomEvent_Enable) == 0x000148, "Member 'StoreCamera_Blueprint_C_ExecuteUbergraph_StoreCamera_Blueprint::K2Node_CustomEvent_Enable' has a wrong offset!");
static_assert(offsetof(StoreCamera_Blueprint_C_ExecuteUbergraph_StoreCamera_Blueprint, CallFunc_GetAllActorsOfClass_OutActors) == 0x000150, "Member 'StoreCamera_Blueprint_C_ExecuteUbergraph_StoreCamera_Blueprint::CallFunc_GetAllActorsOfClass_OutActors' has a wrong offset!");
static_assert(offsetof(StoreCamera_Blueprint_C_ExecuteUbergraph_StoreCamera_Blueprint, CallFunc_Array_Get_Item) == 0x000160, "Member 'StoreCamera_Blueprint_C_ExecuteUbergraph_StoreCamera_Blueprint::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(StoreCamera_Blueprint_C_ExecuteUbergraph_StoreCamera_Blueprint, CallFunc_Array_Length_ReturnValue) == 0x000168, "Member 'StoreCamera_Blueprint_C_ExecuteUbergraph_StoreCamera_Blueprint::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(StoreCamera_Blueprint_C_ExecuteUbergraph_StoreCamera_Blueprint, CallFunc_GetAllActorsOfClass_OutActors_1) == 0x000170, "Member 'StoreCamera_Blueprint_C_ExecuteUbergraph_StoreCamera_Blueprint::CallFunc_GetAllActorsOfClass_OutActors_1' has a wrong offset!");
static_assert(offsetof(StoreCamera_Blueprint_C_ExecuteUbergraph_StoreCamera_Blueprint, CallFunc_Array_Get_Item_1) == 0x000180, "Member 'StoreCamera_Blueprint_C_ExecuteUbergraph_StoreCamera_Blueprint::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(StoreCamera_Blueprint_C_ExecuteUbergraph_StoreCamera_Blueprint, CallFunc_Array_Length_ReturnValue_1) == 0x000188, "Member 'StoreCamera_Blueprint_C_ExecuteUbergraph_StoreCamera_Blueprint::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(StoreCamera_Blueprint_C_ExecuteUbergraph_StoreCamera_Blueprint, CallFunc_Less_IntInt_ReturnValue) == 0x00018C, "Member 'StoreCamera_Blueprint_C_ExecuteUbergraph_StoreCamera_Blueprint::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(StoreCamera_Blueprint_C_ExecuteUbergraph_StoreCamera_Blueprint, CallFunc_IsValid_ReturnValue) == 0x00018D, "Member 'StoreCamera_Blueprint_C_ExecuteUbergraph_StoreCamera_Blueprint::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(StoreCamera_Blueprint_C_ExecuteUbergraph_StoreCamera_Blueprint, CallFunc_IsValid_ReturnValue_1) == 0x00018E, "Member 'StoreCamera_Blueprint_C_ExecuteUbergraph_StoreCamera_Blueprint::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(StoreCamera_Blueprint_C_ExecuteUbergraph_StoreCamera_Blueprint, CallFunc_GetAllActorsOfClass_OutActors_2) == 0x000190, "Member 'StoreCamera_Blueprint_C_ExecuteUbergraph_StoreCamera_Blueprint::CallFunc_GetAllActorsOfClass_OutActors_2' has a wrong offset!");
static_assert(offsetof(StoreCamera_Blueprint_C_ExecuteUbergraph_StoreCamera_Blueprint, Temp_int_Loop_Counter_Variable_1) == 0x0001A0, "Member 'StoreCamera_Blueprint_C_ExecuteUbergraph_StoreCamera_Blueprint::Temp_int_Loop_Counter_Variable_1' has a wrong offset!");
static_assert(offsetof(StoreCamera_Blueprint_C_ExecuteUbergraph_StoreCamera_Blueprint, CallFunc_Array_Length_ReturnValue_2) == 0x0001A4, "Member 'StoreCamera_Blueprint_C_ExecuteUbergraph_StoreCamera_Blueprint::CallFunc_Array_Length_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(StoreCamera_Blueprint_C_ExecuteUbergraph_StoreCamera_Blueprint, CallFunc_Less_IntInt_ReturnValue_1) == 0x0001A8, "Member 'StoreCamera_Blueprint_C_ExecuteUbergraph_StoreCamera_Blueprint::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(StoreCamera_Blueprint_C_ExecuteUbergraph_StoreCamera_Blueprint, CallFunc_Add_IntInt_ReturnValue_1) == 0x0001AC, "Member 'StoreCamera_Blueprint_C_ExecuteUbergraph_StoreCamera_Blueprint::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(StoreCamera_Blueprint_C_ExecuteUbergraph_StoreCamera_Blueprint, CallFunc_GetTimeOfDayManagerFromContext_ReturnValue) == 0x0001B0, "Member 'StoreCamera_Blueprint_C_ExecuteUbergraph_StoreCamera_Blueprint::CallFunc_GetTimeOfDayManagerFromContext_ReturnValue' has a wrong offset!");
static_assert(offsetof(StoreCamera_Blueprint_C_ExecuteUbergraph_StoreCamera_Blueprint, Temp_int_Loop_Counter_Variable_2) == 0x0001B8, "Member 'StoreCamera_Blueprint_C_ExecuteUbergraph_StoreCamera_Blueprint::Temp_int_Loop_Counter_Variable_2' has a wrong offset!");
static_assert(offsetof(StoreCamera_Blueprint_C_ExecuteUbergraph_StoreCamera_Blueprint, CallFunc_Less_IntInt_ReturnValue_2) == 0x0001BC, "Member 'StoreCamera_Blueprint_C_ExecuteUbergraph_StoreCamera_Blueprint::CallFunc_Less_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(StoreCamera_Blueprint_C_ExecuteUbergraph_StoreCamera_Blueprint, CallFunc_Add_IntInt_ReturnValue_2) == 0x0001C0, "Member 'StoreCamera_Blueprint_C_ExecuteUbergraph_StoreCamera_Blueprint::CallFunc_Add_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(StoreCamera_Blueprint_C_ExecuteUbergraph_StoreCamera_Blueprint, Temp_int_Array_Index_Variable_2) == 0x0001C4, "Member 'StoreCamera_Blueprint_C_ExecuteUbergraph_StoreCamera_Blueprint::Temp_int_Array_Index_Variable_2' has a wrong offset!");
static_assert(offsetof(StoreCamera_Blueprint_C_ExecuteUbergraph_StoreCamera_Blueprint, CallFunc_Array_Get_Item_2) == 0x0001C8, "Member 'StoreCamera_Blueprint_C_ExecuteUbergraph_StoreCamera_Blueprint::CallFunc_Array_Get_Item_2' has a wrong offset!");
static_assert(offsetof(StoreCamera_Blueprint_C_ExecuteUbergraph_StoreCamera_Blueprint, CallFunc_IsValid_ReturnValue_2) == 0x0001D0, "Member 'StoreCamera_Blueprint_C_ExecuteUbergraph_StoreCamera_Blueprint::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");

// Function StoreCamera_Blueprint.StoreCamera_Blueprint_C.DarkenBGVisibility
// 0x0001 (0x0001 - 0x0000)
struct StoreCamera_Blueprint_C_DarkenBGVisibility final
{
public:
	bool                                          Enable;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(StoreCamera_Blueprint_C_DarkenBGVisibility) == 0x000001, "Wrong alignment on StoreCamera_Blueprint_C_DarkenBGVisibility");
static_assert(sizeof(StoreCamera_Blueprint_C_DarkenBGVisibility) == 0x000001, "Wrong size on StoreCamera_Blueprint_C_DarkenBGVisibility");
static_assert(offsetof(StoreCamera_Blueprint_C_DarkenBGVisibility, Enable) == 0x000000, "Member 'StoreCamera_Blueprint_C_DarkenBGVisibility::Enable' has a wrong offset!");

// Function StoreCamera_Blueprint.StoreCamera_Blueprint_C.BP_OnDeactivated
// 0x0008 (0x0008 - 0x0000)
struct StoreCamera_Blueprint_C_BP_OnDeactivated final
{
public:
	class AFortPlayerController*                  PlayerController;                                  // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(StoreCamera_Blueprint_C_BP_OnDeactivated) == 0x000008, "Wrong alignment on StoreCamera_Blueprint_C_BP_OnDeactivated");
static_assert(sizeof(StoreCamera_Blueprint_C_BP_OnDeactivated) == 0x000008, "Wrong size on StoreCamera_Blueprint_C_BP_OnDeactivated");
static_assert(offsetof(StoreCamera_Blueprint_C_BP_OnDeactivated, PlayerController) == 0x000000, "Member 'StoreCamera_Blueprint_C_BP_OnDeactivated::PlayerController' has a wrong offset!");

// Function StoreCamera_Blueprint.StoreCamera_Blueprint_C.BP_OnActivated
// 0x0008 (0x0008 - 0x0000)
struct StoreCamera_Blueprint_C_BP_OnActivated final
{
public:
	class AFortPlayerController*                  PlayerController;                                  // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(StoreCamera_Blueprint_C_BP_OnActivated) == 0x000008, "Wrong alignment on StoreCamera_Blueprint_C_BP_OnActivated");
static_assert(sizeof(StoreCamera_Blueprint_C_BP_OnActivated) == 0x000008, "Wrong size on StoreCamera_Blueprint_C_BP_OnActivated");
static_assert(offsetof(StoreCamera_Blueprint_C_BP_OnActivated, PlayerController) == 0x000000, "Member 'StoreCamera_Blueprint_C_BP_OnActivated::PlayerController' has a wrong offset!");

}

