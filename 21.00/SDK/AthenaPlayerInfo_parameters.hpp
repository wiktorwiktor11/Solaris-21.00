﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AthenaPlayerInfo

#include "Basic.hpp"

#include "FortniteGame_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK::Params
{

// Function AthenaPlayerInfo.AthenaPlayerInfo_C.ExecuteUbergraph_AthenaPlayerInfo
// 0x04A0 (0x04A0 - 0x0000)
struct AthenaPlayerInfo_C_ExecuteUbergraph_AthenaPlayerInfo final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(struct FFortTeamMemberInfo& PlayerInfo)> K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x000C)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FFortTeamMemberInfo                    K2Node_CustomEvent_PlayerInfo;                     // 0x0010(0x0240)(ConstParm, HasGetValueTypeHash)
	class UFortPartyContext*                      CallFunc_GetContext_ReturnValue;                   // 0x0250(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_258[0x8];                                      // 0x0258(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFortTeamMemberInfo                    CallFunc_GetLocalPlayerTeamMemberInfo_LocalPlayerInfo; // 0x0260(0x0240)(HasGetValueTypeHash)
};
static_assert(alignof(AthenaPlayerInfo_C_ExecuteUbergraph_AthenaPlayerInfo) == 0x000010, "Wrong alignment on AthenaPlayerInfo_C_ExecuteUbergraph_AthenaPlayerInfo");
static_assert(sizeof(AthenaPlayerInfo_C_ExecuteUbergraph_AthenaPlayerInfo) == 0x0004A0, "Wrong size on AthenaPlayerInfo_C_ExecuteUbergraph_AthenaPlayerInfo");
static_assert(offsetof(AthenaPlayerInfo_C_ExecuteUbergraph_AthenaPlayerInfo, EntryPoint) == 0x000000, "Member 'AthenaPlayerInfo_C_ExecuteUbergraph_AthenaPlayerInfo::EntryPoint' has a wrong offset!");
static_assert(offsetof(AthenaPlayerInfo_C_ExecuteUbergraph_AthenaPlayerInfo, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'AthenaPlayerInfo_C_ExecuteUbergraph_AthenaPlayerInfo::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(AthenaPlayerInfo_C_ExecuteUbergraph_AthenaPlayerInfo, K2Node_CustomEvent_PlayerInfo) == 0x000010, "Member 'AthenaPlayerInfo_C_ExecuteUbergraph_AthenaPlayerInfo::K2Node_CustomEvent_PlayerInfo' has a wrong offset!");
static_assert(offsetof(AthenaPlayerInfo_C_ExecuteUbergraph_AthenaPlayerInfo, CallFunc_GetContext_ReturnValue) == 0x000250, "Member 'AthenaPlayerInfo_C_ExecuteUbergraph_AthenaPlayerInfo::CallFunc_GetContext_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaPlayerInfo_C_ExecuteUbergraph_AthenaPlayerInfo, CallFunc_GetLocalPlayerTeamMemberInfo_LocalPlayerInfo) == 0x000260, "Member 'AthenaPlayerInfo_C_ExecuteUbergraph_AthenaPlayerInfo::CallFunc_GetLocalPlayerTeamMemberInfo_LocalPlayerInfo' has a wrong offset!");

// Function AthenaPlayerInfo.AthenaPlayerInfo_C.HandlePlayerStateChanged
// 0x0240 (0x0240 - 0x0000)
struct AthenaPlayerInfo_C_HandlePlayerStateChanged final
{
public:
	struct FFortTeamMemberInfo                    PlayerInfo;                                        // 0x0000(0x0240)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
};
static_assert(alignof(AthenaPlayerInfo_C_HandlePlayerStateChanged) == 0x000010, "Wrong alignment on AthenaPlayerInfo_C_HandlePlayerStateChanged");
static_assert(sizeof(AthenaPlayerInfo_C_HandlePlayerStateChanged) == 0x000240, "Wrong size on AthenaPlayerInfo_C_HandlePlayerStateChanged");
static_assert(offsetof(AthenaPlayerInfo_C_HandlePlayerStateChanged, PlayerInfo) == 0x000000, "Member 'AthenaPlayerInfo_C_HandlePlayerStateChanged::PlayerInfo' has a wrong offset!");

// Function AthenaPlayerInfo.AthenaPlayerInfo_C.UpdateLocalPlayerInfo
// 0x0260 (0x0260 - 0x0000)
struct AthenaPlayerInfo_C_UpdateLocalPlayerInfo final
{
public:
	struct FFortTeamMemberInfo                    Player_Info;                                       // 0x0000(0x0240)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0240(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0241(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0242(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_243[0x5];                                      // 0x0243(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class UFortPartyContext*                      CallFunc_GetContext_ReturnValue;                   // 0x0248(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_1;                              // 0x0250(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_251[0x3];                                      // 0x0251(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetNumPlayersInLocalParty_ReturnValue;    // 0x0254(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0258(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsLocalPlayerPartyLeader_ReturnValue;     // 0x0259(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_2;                              // 0x025A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x025B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_3;                              // 0x025C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x025D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default_1;                           // 0x025E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(AthenaPlayerInfo_C_UpdateLocalPlayerInfo) == 0x000010, "Wrong alignment on AthenaPlayerInfo_C_UpdateLocalPlayerInfo");
static_assert(sizeof(AthenaPlayerInfo_C_UpdateLocalPlayerInfo) == 0x000260, "Wrong size on AthenaPlayerInfo_C_UpdateLocalPlayerInfo");
static_assert(offsetof(AthenaPlayerInfo_C_UpdateLocalPlayerInfo, Player_Info) == 0x000000, "Member 'AthenaPlayerInfo_C_UpdateLocalPlayerInfo::Player_Info' has a wrong offset!");
static_assert(offsetof(AthenaPlayerInfo_C_UpdateLocalPlayerInfo, Temp_bool_Variable) == 0x000240, "Member 'AthenaPlayerInfo_C_UpdateLocalPlayerInfo::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(AthenaPlayerInfo_C_UpdateLocalPlayerInfo, Temp_byte_Variable) == 0x000241, "Member 'AthenaPlayerInfo_C_UpdateLocalPlayerInfo::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(AthenaPlayerInfo_C_UpdateLocalPlayerInfo, Temp_byte_Variable_1) == 0x000242, "Member 'AthenaPlayerInfo_C_UpdateLocalPlayerInfo::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(AthenaPlayerInfo_C_UpdateLocalPlayerInfo, CallFunc_GetContext_ReturnValue) == 0x000248, "Member 'AthenaPlayerInfo_C_UpdateLocalPlayerInfo::CallFunc_GetContext_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaPlayerInfo_C_UpdateLocalPlayerInfo, Temp_bool_Variable_1) == 0x000250, "Member 'AthenaPlayerInfo_C_UpdateLocalPlayerInfo::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(AthenaPlayerInfo_C_UpdateLocalPlayerInfo, CallFunc_GetNumPlayersInLocalParty_ReturnValue) == 0x000254, "Member 'AthenaPlayerInfo_C_UpdateLocalPlayerInfo::CallFunc_GetNumPlayersInLocalParty_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaPlayerInfo_C_UpdateLocalPlayerInfo, CallFunc_Greater_IntInt_ReturnValue) == 0x000258, "Member 'AthenaPlayerInfo_C_UpdateLocalPlayerInfo::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaPlayerInfo_C_UpdateLocalPlayerInfo, CallFunc_IsLocalPlayerPartyLeader_ReturnValue) == 0x000259, "Member 'AthenaPlayerInfo_C_UpdateLocalPlayerInfo::CallFunc_IsLocalPlayerPartyLeader_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaPlayerInfo_C_UpdateLocalPlayerInfo, Temp_byte_Variable_2) == 0x00025A, "Member 'AthenaPlayerInfo_C_UpdateLocalPlayerInfo::Temp_byte_Variable_2' has a wrong offset!");
static_assert(offsetof(AthenaPlayerInfo_C_UpdateLocalPlayerInfo, CallFunc_BooleanAND_ReturnValue) == 0x00025B, "Member 'AthenaPlayerInfo_C_UpdateLocalPlayerInfo::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaPlayerInfo_C_UpdateLocalPlayerInfo, Temp_byte_Variable_3) == 0x00025C, "Member 'AthenaPlayerInfo_C_UpdateLocalPlayerInfo::Temp_byte_Variable_3' has a wrong offset!");
static_assert(offsetof(AthenaPlayerInfo_C_UpdateLocalPlayerInfo, K2Node_Select_Default) == 0x00025D, "Member 'AthenaPlayerInfo_C_UpdateLocalPlayerInfo::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(AthenaPlayerInfo_C_UpdateLocalPlayerInfo, K2Node_Select_Default_1) == 0x00025E, "Member 'AthenaPlayerInfo_C_UpdateLocalPlayerInfo::K2Node_Select_Default_1' has a wrong offset!");

}

