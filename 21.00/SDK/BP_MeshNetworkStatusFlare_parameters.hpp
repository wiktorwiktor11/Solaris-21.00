﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_MeshNetworkStatusFlare

#include "Basic.hpp"

#include "MeshNetwork_structs.hpp"


namespace SDK::Params
{

// Function BP_MeshNetworkStatusFlare.BP_MeshNetworkStatusFlare_C.OnReady_47F7843043630A3532872A80DCAB82DE
// 0x0001 (0x0001 - 0x0000)
struct BP_MeshNetworkStatusFlare_C_OnReady_47F7843043630A3532872A80DCAB82DE final
{
public:
	EMeshNetworkNodeType                          NodeType;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_MeshNetworkStatusFlare_C_OnReady_47F7843043630A3532872A80DCAB82DE) == 0x000001, "Wrong alignment on BP_MeshNetworkStatusFlare_C_OnReady_47F7843043630A3532872A80DCAB82DE");
static_assert(sizeof(BP_MeshNetworkStatusFlare_C_OnReady_47F7843043630A3532872A80DCAB82DE) == 0x000001, "Wrong size on BP_MeshNetworkStatusFlare_C_OnReady_47F7843043630A3532872A80DCAB82DE");
static_assert(offsetof(BP_MeshNetworkStatusFlare_C_OnReady_47F7843043630A3532872A80DCAB82DE, NodeType) == 0x000000, "Member 'BP_MeshNetworkStatusFlare_C_OnReady_47F7843043630A3532872A80DCAB82DE::NodeType' has a wrong offset!");

// Function BP_MeshNetworkStatusFlare.BP_MeshNetworkStatusFlare_C.ExecuteUbergraph_BP_MeshNetworkStatusFlare
// 0x0040 (0x0040 - 0x0000)
struct BP_MeshNetworkStatusFlare_C_ExecuteUbergraph_BP_MeshNetworkStatusFlare final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UMeshNetworkSubsystem*                  CallFunc_GetGameInstanceSubsystem_ReturnValue;     // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetConnectedToRoot_ReturnValue;           // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_11[0x3];                                       // 0x0011(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(EMeshNetworkNodeType NodeType)> K2Node_CreateDelegate_OutputDelegate;              // 0x0014(0x000C)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	EMeshNetworkNodeType                          K2Node_CustomEvent_NodeType;                       // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EMeshNetworkNodeType                          Temp_byte_Variable;                                // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_22[0x6];                                       // 0x0022(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UFortAsyncAction_MeshNetworkReady*      CallFunc_MeshNetworkReadyAsync_ReturnValue;        // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0031(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_bConnected;                     // 0x0032(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_33[0x1];                                       // 0x0033(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(bool bConnected)>              K2Node_CreateDelegate_OutputDelegate_1;            // 0x0034(0x000C)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_MeshNetworkStatusFlare_C_ExecuteUbergraph_BP_MeshNetworkStatusFlare) == 0x000008, "Wrong alignment on BP_MeshNetworkStatusFlare_C_ExecuteUbergraph_BP_MeshNetworkStatusFlare");
static_assert(sizeof(BP_MeshNetworkStatusFlare_C_ExecuteUbergraph_BP_MeshNetworkStatusFlare) == 0x000040, "Wrong size on BP_MeshNetworkStatusFlare_C_ExecuteUbergraph_BP_MeshNetworkStatusFlare");
static_assert(offsetof(BP_MeshNetworkStatusFlare_C_ExecuteUbergraph_BP_MeshNetworkStatusFlare, EntryPoint) == 0x000000, "Member 'BP_MeshNetworkStatusFlare_C_ExecuteUbergraph_BP_MeshNetworkStatusFlare::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_MeshNetworkStatusFlare_C_ExecuteUbergraph_BP_MeshNetworkStatusFlare, CallFunc_GetGameInstanceSubsystem_ReturnValue) == 0x000008, "Member 'BP_MeshNetworkStatusFlare_C_ExecuteUbergraph_BP_MeshNetworkStatusFlare::CallFunc_GetGameInstanceSubsystem_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MeshNetworkStatusFlare_C_ExecuteUbergraph_BP_MeshNetworkStatusFlare, CallFunc_GetConnectedToRoot_ReturnValue) == 0x000010, "Member 'BP_MeshNetworkStatusFlare_C_ExecuteUbergraph_BP_MeshNetworkStatusFlare::CallFunc_GetConnectedToRoot_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MeshNetworkStatusFlare_C_ExecuteUbergraph_BP_MeshNetworkStatusFlare, K2Node_CreateDelegate_OutputDelegate) == 0x000014, "Member 'BP_MeshNetworkStatusFlare_C_ExecuteUbergraph_BP_MeshNetworkStatusFlare::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_MeshNetworkStatusFlare_C_ExecuteUbergraph_BP_MeshNetworkStatusFlare, K2Node_CustomEvent_NodeType) == 0x000020, "Member 'BP_MeshNetworkStatusFlare_C_ExecuteUbergraph_BP_MeshNetworkStatusFlare::K2Node_CustomEvent_NodeType' has a wrong offset!");
static_assert(offsetof(BP_MeshNetworkStatusFlare_C_ExecuteUbergraph_BP_MeshNetworkStatusFlare, Temp_byte_Variable) == 0x000021, "Member 'BP_MeshNetworkStatusFlare_C_ExecuteUbergraph_BP_MeshNetworkStatusFlare::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(BP_MeshNetworkStatusFlare_C_ExecuteUbergraph_BP_MeshNetworkStatusFlare, CallFunc_MeshNetworkReadyAsync_ReturnValue) == 0x000028, "Member 'BP_MeshNetworkStatusFlare_C_ExecuteUbergraph_BP_MeshNetworkStatusFlare::CallFunc_MeshNetworkReadyAsync_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MeshNetworkStatusFlare_C_ExecuteUbergraph_BP_MeshNetworkStatusFlare, CallFunc_IsValid_ReturnValue) == 0x000030, "Member 'BP_MeshNetworkStatusFlare_C_ExecuteUbergraph_BP_MeshNetworkStatusFlare::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MeshNetworkStatusFlare_C_ExecuteUbergraph_BP_MeshNetworkStatusFlare, K2Node_SwitchEnum_CmpSuccess) == 0x000031, "Member 'BP_MeshNetworkStatusFlare_C_ExecuteUbergraph_BP_MeshNetworkStatusFlare::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(BP_MeshNetworkStatusFlare_C_ExecuteUbergraph_BP_MeshNetworkStatusFlare, K2Node_CustomEvent_bConnected) == 0x000032, "Member 'BP_MeshNetworkStatusFlare_C_ExecuteUbergraph_BP_MeshNetworkStatusFlare::K2Node_CustomEvent_bConnected' has a wrong offset!");
static_assert(offsetof(BP_MeshNetworkStatusFlare_C_ExecuteUbergraph_BP_MeshNetworkStatusFlare, K2Node_CreateDelegate_OutputDelegate_1) == 0x000034, "Member 'BP_MeshNetworkStatusFlare_C_ExecuteUbergraph_BP_MeshNetworkStatusFlare::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");

// Function BP_MeshNetworkStatusFlare.BP_MeshNetworkStatusFlare_C.ConnectionToRootChanged
// 0x0001 (0x0001 - 0x0000)
struct BP_MeshNetworkStatusFlare_C_ConnectionToRootChanged final
{
public:
	bool                                          bConnected;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_MeshNetworkStatusFlare_C_ConnectionToRootChanged) == 0x000001, "Wrong alignment on BP_MeshNetworkStatusFlare_C_ConnectionToRootChanged");
static_assert(sizeof(BP_MeshNetworkStatusFlare_C_ConnectionToRootChanged) == 0x000001, "Wrong size on BP_MeshNetworkStatusFlare_C_ConnectionToRootChanged");
static_assert(offsetof(BP_MeshNetworkStatusFlare_C_ConnectionToRootChanged, bConnected) == 0x000000, "Member 'BP_MeshNetworkStatusFlare_C_ConnectionToRootChanged::bConnected' has a wrong offset!");

}

