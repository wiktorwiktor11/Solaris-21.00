﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SupportModal

#include "Basic.hpp"


namespace SDK::Params
{

// Function SupportModal.SupportModal_C.ExecuteUbergraph_SupportModal
// 0x0010 (0x0010 - 0x0000)
struct SupportModal_C_ExecuteUbergraph_SupportModal final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue;         // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(SupportModal_C_ExecuteUbergraph_SupportModal) == 0x000008, "Wrong alignment on SupportModal_C_ExecuteUbergraph_SupportModal");
static_assert(sizeof(SupportModal_C_ExecuteUbergraph_SupportModal) == 0x000010, "Wrong size on SupportModal_C_ExecuteUbergraph_SupportModal");
static_assert(offsetof(SupportModal_C_ExecuteUbergraph_SupportModal, EntryPoint) == 0x000000, "Member 'SupportModal_C_ExecuteUbergraph_SupportModal::EntryPoint' has a wrong offset!");
static_assert(offsetof(SupportModal_C_ExecuteUbergraph_SupportModal, CallFunc_PlayAnimationForward_ReturnValue) == 0x000008, "Member 'SupportModal_C_ExecuteUbergraph_SupportModal::CallFunc_PlayAnimationForward_ReturnValue' has a wrong offset!");

}

