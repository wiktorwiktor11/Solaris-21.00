﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_DisplayShadowProxy_01

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function BP_DisplayShadowProxy_01.BP_DisplayShadowProxy_01_C.UpdateInstances
// 0x0080 (0x0080 - 0x0000)
struct BP_DisplayShadowProxy_01_C_UpdateInstances final
{
public:
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C[0x4];                                        // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_Array_Get_Item;                           // 0x0010(0x0060)(IsPlainOldData, NoDestructor)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0070(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_AddInstance_ReturnValue;                  // 0x0074(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_DisplayShadowProxy_01_C_UpdateInstances) == 0x000010, "Wrong alignment on BP_DisplayShadowProxy_01_C_UpdateInstances");
static_assert(sizeof(BP_DisplayShadowProxy_01_C_UpdateInstances) == 0x000080, "Wrong size on BP_DisplayShadowProxy_01_C_UpdateInstances");
static_assert(offsetof(BP_DisplayShadowProxy_01_C_UpdateInstances, Temp_int_Array_Index_Variable) == 0x000000, "Member 'BP_DisplayShadowProxy_01_C_UpdateInstances::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_DisplayShadowProxy_01_C_UpdateInstances, Temp_int_Loop_Counter_Variable) == 0x000004, "Member 'BP_DisplayShadowProxy_01_C_UpdateInstances::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_DisplayShadowProxy_01_C_UpdateInstances, CallFunc_Add_IntInt_ReturnValue) == 0x000008, "Member 'BP_DisplayShadowProxy_01_C_UpdateInstances::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DisplayShadowProxy_01_C_UpdateInstances, CallFunc_Array_Get_Item) == 0x000010, "Member 'BP_DisplayShadowProxy_01_C_UpdateInstances::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_DisplayShadowProxy_01_C_UpdateInstances, CallFunc_Array_Length_ReturnValue) == 0x000070, "Member 'BP_DisplayShadowProxy_01_C_UpdateInstances::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DisplayShadowProxy_01_C_UpdateInstances, CallFunc_AddInstance_ReturnValue) == 0x000074, "Member 'BP_DisplayShadowProxy_01_C_UpdateInstances::CallFunc_AddInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DisplayShadowProxy_01_C_UpdateInstances, CallFunc_Less_IntInt_ReturnValue) == 0x000078, "Member 'BP_DisplayShadowProxy_01_C_UpdateInstances::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");

// Function BP_DisplayShadowProxy_01.BP_DisplayShadowProxy_01_C.ExecuteUbergraph_BP_DisplayShadowProxy_01
// 0x0004 (0x0004 - 0x0000)
struct BP_DisplayShadowProxy_01_C_ExecuteUbergraph_BP_DisplayShadowProxy_01 final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_DisplayShadowProxy_01_C_ExecuteUbergraph_BP_DisplayShadowProxy_01) == 0x000004, "Wrong alignment on BP_DisplayShadowProxy_01_C_ExecuteUbergraph_BP_DisplayShadowProxy_01");
static_assert(sizeof(BP_DisplayShadowProxy_01_C_ExecuteUbergraph_BP_DisplayShadowProxy_01) == 0x000004, "Wrong size on BP_DisplayShadowProxy_01_C_ExecuteUbergraph_BP_DisplayShadowProxy_01");
static_assert(offsetof(BP_DisplayShadowProxy_01_C_ExecuteUbergraph_BP_DisplayShadowProxy_01, EntryPoint) == 0x000000, "Member 'BP_DisplayShadowProxy_01_C_ExecuteUbergraph_BP_DisplayShadowProxy_01::EntryPoint' has a wrong offset!");

}

