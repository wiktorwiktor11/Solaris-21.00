﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Artemis_War_Decal

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function BP_Artemis_War_Decal.BP_Artemis_War_Decal_C.ExecuteUbergraph_BP_Artemis_War_Decal
// 0x0058 (0x0058 - 0x0000)
struct BP_Artemis_War_Decal_C_ExecuteUbergraph_BP_Artemis_War_Decal final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Array_IsEmpty_ReturnValue;                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_15[0x3];                                       // 0x0015(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 K2Node_CustomEvent_DestroyedActor;                 // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AParent_BuildingWall_C*                 K2Node_DynamicCast_AsParent_Building_Wall;         // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_29[0x7];                                       // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AParent_BuildingWall_C*                 CallFunc_Array_Get_Item;                           // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Array_RemoveItem_ReturnValue;             // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0039(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3A[0x2];                                       // 0x003A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue_1;            // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Max_ReturnValue;                          // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class AActor* DestroyedActor)> K2Node_CreateDelegate_OutputDelegate;              // 0x0048(0x000C)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Array_RemoveItem_ReturnValue_1;           // 0x0054(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Artemis_War_Decal_C_ExecuteUbergraph_BP_Artemis_War_Decal) == 0x000008, "Wrong alignment on BP_Artemis_War_Decal_C_ExecuteUbergraph_BP_Artemis_War_Decal");
static_assert(sizeof(BP_Artemis_War_Decal_C_ExecuteUbergraph_BP_Artemis_War_Decal) == 0x000058, "Wrong size on BP_Artemis_War_Decal_C_ExecuteUbergraph_BP_Artemis_War_Decal");
static_assert(offsetof(BP_Artemis_War_Decal_C_ExecuteUbergraph_BP_Artemis_War_Decal, EntryPoint) == 0x000000, "Member 'BP_Artemis_War_Decal_C_ExecuteUbergraph_BP_Artemis_War_Decal::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_Artemis_War_Decal_C_ExecuteUbergraph_BP_Artemis_War_Decal, CallFunc_Array_IsEmpty_ReturnValue) == 0x000004, "Member 'BP_Artemis_War_Decal_C_ExecuteUbergraph_BP_Artemis_War_Decal::CallFunc_Array_IsEmpty_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Artemis_War_Decal_C_ExecuteUbergraph_BP_Artemis_War_Decal, Temp_int_Array_Index_Variable) == 0x000008, "Member 'BP_Artemis_War_Decal_C_ExecuteUbergraph_BP_Artemis_War_Decal::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_Artemis_War_Decal_C_ExecuteUbergraph_BP_Artemis_War_Decal, Temp_int_Loop_Counter_Variable) == 0x00000C, "Member 'BP_Artemis_War_Decal_C_ExecuteUbergraph_BP_Artemis_War_Decal::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_Artemis_War_Decal_C_ExecuteUbergraph_BP_Artemis_War_Decal, CallFunc_Subtract_IntInt_ReturnValue) == 0x000010, "Member 'BP_Artemis_War_Decal_C_ExecuteUbergraph_BP_Artemis_War_Decal::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Artemis_War_Decal_C_ExecuteUbergraph_BP_Artemis_War_Decal, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x000014, "Member 'BP_Artemis_War_Decal_C_ExecuteUbergraph_BP_Artemis_War_Decal::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Artemis_War_Decal_C_ExecuteUbergraph_BP_Artemis_War_Decal, K2Node_CustomEvent_DestroyedActor) == 0x000018, "Member 'BP_Artemis_War_Decal_C_ExecuteUbergraph_BP_Artemis_War_Decal::K2Node_CustomEvent_DestroyedActor' has a wrong offset!");
static_assert(offsetof(BP_Artemis_War_Decal_C_ExecuteUbergraph_BP_Artemis_War_Decal, K2Node_DynamicCast_AsParent_Building_Wall) == 0x000020, "Member 'BP_Artemis_War_Decal_C_ExecuteUbergraph_BP_Artemis_War_Decal::K2Node_DynamicCast_AsParent_Building_Wall' has a wrong offset!");
static_assert(offsetof(BP_Artemis_War_Decal_C_ExecuteUbergraph_BP_Artemis_War_Decal, K2Node_DynamicCast_bSuccess) == 0x000028, "Member 'BP_Artemis_War_Decal_C_ExecuteUbergraph_BP_Artemis_War_Decal::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_Artemis_War_Decal_C_ExecuteUbergraph_BP_Artemis_War_Decal, CallFunc_Array_Get_Item) == 0x000030, "Member 'BP_Artemis_War_Decal_C_ExecuteUbergraph_BP_Artemis_War_Decal::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_Artemis_War_Decal_C_ExecuteUbergraph_BP_Artemis_War_Decal, CallFunc_Array_RemoveItem_ReturnValue) == 0x000038, "Member 'BP_Artemis_War_Decal_C_ExecuteUbergraph_BP_Artemis_War_Decal::CallFunc_Array_RemoveItem_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Artemis_War_Decal_C_ExecuteUbergraph_BP_Artemis_War_Decal, CallFunc_IsValid_ReturnValue) == 0x000039, "Member 'BP_Artemis_War_Decal_C_ExecuteUbergraph_BP_Artemis_War_Decal::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Artemis_War_Decal_C_ExecuteUbergraph_BP_Artemis_War_Decal, CallFunc_Array_Length_ReturnValue) == 0x00003C, "Member 'BP_Artemis_War_Decal_C_ExecuteUbergraph_BP_Artemis_War_Decal::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Artemis_War_Decal_C_ExecuteUbergraph_BP_Artemis_War_Decal, CallFunc_Subtract_IntInt_ReturnValue_1) == 0x000040, "Member 'BP_Artemis_War_Decal_C_ExecuteUbergraph_BP_Artemis_War_Decal::CallFunc_Subtract_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Artemis_War_Decal_C_ExecuteUbergraph_BP_Artemis_War_Decal, CallFunc_Max_ReturnValue) == 0x000044, "Member 'BP_Artemis_War_Decal_C_ExecuteUbergraph_BP_Artemis_War_Decal::CallFunc_Max_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Artemis_War_Decal_C_ExecuteUbergraph_BP_Artemis_War_Decal, K2Node_CreateDelegate_OutputDelegate) == 0x000048, "Member 'BP_Artemis_War_Decal_C_ExecuteUbergraph_BP_Artemis_War_Decal::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_Artemis_War_Decal_C_ExecuteUbergraph_BP_Artemis_War_Decal, CallFunc_Array_RemoveItem_ReturnValue_1) == 0x000054, "Member 'BP_Artemis_War_Decal_C_ExecuteUbergraph_BP_Artemis_War_Decal::CallFunc_Array_RemoveItem_ReturnValue_1' has a wrong offset!");

// Function BP_Artemis_War_Decal.BP_Artemis_War_Decal_C.ParentWallDestroyed 
// 0x0008 (0x0008 - 0x0000)
struct BP_Artemis_War_Decal_C_ParentWallDestroyed_ final
{
public:
	class AActor*                                 DestroyedActor;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Artemis_War_Decal_C_ParentWallDestroyed_) == 0x000008, "Wrong alignment on BP_Artemis_War_Decal_C_ParentWallDestroyed_");
static_assert(sizeof(BP_Artemis_War_Decal_C_ParentWallDestroyed_) == 0x000008, "Wrong size on BP_Artemis_War_Decal_C_ParentWallDestroyed_");
static_assert(offsetof(BP_Artemis_War_Decal_C_ParentWallDestroyed_, DestroyedActor) == 0x000000, "Member 'BP_Artemis_War_Decal_C_ParentWallDestroyed_::DestroyedActor' has a wrong offset!");

// Function BP_Artemis_War_Decal.BP_Artemis_War_Decal_C.UserConstructionScript
// 0x0078 (0x0078 - 0x0000)
struct BP_Artemis_War_Decal_C_UserConstructionScript final
{
public:
	struct FLinearColor                           K2Node_MakeStruct_LinearColor;                     // 0x0000(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           K2Node_MakeStruct_LinearColor_1;                   // 0x0010(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_24[0x4];                                       // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInterface*                     Temp_object_Variable;                              // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInterface*                     Temp_object_Variable_1;                            // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInterface*                     Temp_object_Variable_2;                            // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInterface*                     Temp_object_Variable_3;                            // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInterface*                     Temp_object_Variable_4;                            // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsDedicatedServer_ReturnValue;            // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_51[0x3];                                       // 0x0051(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_FClamp_ReturnValue;                       // 0x0054(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_FClamp_ReturnValue_1;                     // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_FClamp_ReturnValue_2;                     // 0x005C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               CallFunc_CreateDynamicMaterialInstance_ReturnValue; // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Clamp_ReturnValue;                        // 0x0068(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6C[0x4];                                       // 0x006C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInterface*                     K2Node_Select_Default;                             // 0x0070(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Artemis_War_Decal_C_UserConstructionScript) == 0x000008, "Wrong alignment on BP_Artemis_War_Decal_C_UserConstructionScript");
static_assert(sizeof(BP_Artemis_War_Decal_C_UserConstructionScript) == 0x000078, "Wrong size on BP_Artemis_War_Decal_C_UserConstructionScript");
static_assert(offsetof(BP_Artemis_War_Decal_C_UserConstructionScript, K2Node_MakeStruct_LinearColor) == 0x000000, "Member 'BP_Artemis_War_Decal_C_UserConstructionScript::K2Node_MakeStruct_LinearColor' has a wrong offset!");
static_assert(offsetof(BP_Artemis_War_Decal_C_UserConstructionScript, K2Node_MakeStruct_LinearColor_1) == 0x000010, "Member 'BP_Artemis_War_Decal_C_UserConstructionScript::K2Node_MakeStruct_LinearColor_1' has a wrong offset!");
static_assert(offsetof(BP_Artemis_War_Decal_C_UserConstructionScript, Temp_int_Variable) == 0x000020, "Member 'BP_Artemis_War_Decal_C_UserConstructionScript::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(BP_Artemis_War_Decal_C_UserConstructionScript, Temp_object_Variable) == 0x000028, "Member 'BP_Artemis_War_Decal_C_UserConstructionScript::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(BP_Artemis_War_Decal_C_UserConstructionScript, Temp_object_Variable_1) == 0x000030, "Member 'BP_Artemis_War_Decal_C_UserConstructionScript::Temp_object_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_Artemis_War_Decal_C_UserConstructionScript, Temp_object_Variable_2) == 0x000038, "Member 'BP_Artemis_War_Decal_C_UserConstructionScript::Temp_object_Variable_2' has a wrong offset!");
static_assert(offsetof(BP_Artemis_War_Decal_C_UserConstructionScript, Temp_object_Variable_3) == 0x000040, "Member 'BP_Artemis_War_Decal_C_UserConstructionScript::Temp_object_Variable_3' has a wrong offset!");
static_assert(offsetof(BP_Artemis_War_Decal_C_UserConstructionScript, Temp_object_Variable_4) == 0x000048, "Member 'BP_Artemis_War_Decal_C_UserConstructionScript::Temp_object_Variable_4' has a wrong offset!");
static_assert(offsetof(BP_Artemis_War_Decal_C_UserConstructionScript, CallFunc_IsDedicatedServer_ReturnValue) == 0x000050, "Member 'BP_Artemis_War_Decal_C_UserConstructionScript::CallFunc_IsDedicatedServer_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Artemis_War_Decal_C_UserConstructionScript, CallFunc_FClamp_ReturnValue) == 0x000054, "Member 'BP_Artemis_War_Decal_C_UserConstructionScript::CallFunc_FClamp_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Artemis_War_Decal_C_UserConstructionScript, CallFunc_FClamp_ReturnValue_1) == 0x000058, "Member 'BP_Artemis_War_Decal_C_UserConstructionScript::CallFunc_FClamp_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Artemis_War_Decal_C_UserConstructionScript, CallFunc_FClamp_ReturnValue_2) == 0x00005C, "Member 'BP_Artemis_War_Decal_C_UserConstructionScript::CallFunc_FClamp_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_Artemis_War_Decal_C_UserConstructionScript, CallFunc_CreateDynamicMaterialInstance_ReturnValue) == 0x000060, "Member 'BP_Artemis_War_Decal_C_UserConstructionScript::CallFunc_CreateDynamicMaterialInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Artemis_War_Decal_C_UserConstructionScript, CallFunc_Clamp_ReturnValue) == 0x000068, "Member 'BP_Artemis_War_Decal_C_UserConstructionScript::CallFunc_Clamp_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Artemis_War_Decal_C_UserConstructionScript, K2Node_Select_Default) == 0x000070, "Member 'BP_Artemis_War_Decal_C_UserConstructionScript::K2Node_Select_Default' has a wrong offset!");

}

