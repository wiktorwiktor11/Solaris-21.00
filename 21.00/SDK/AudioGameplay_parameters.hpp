﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AudioGameplay

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function AudioGameplay.AudioGameplayCondition.ConditionMet
// 0x0001 (0x0001 - 0x0000)
struct AudioGameplayCondition_ConditionMet final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(AudioGameplayCondition_ConditionMet) == 0x000001, "Wrong alignment on AudioGameplayCondition_ConditionMet");
static_assert(sizeof(AudioGameplayCondition_ConditionMet) == 0x000001, "Wrong size on AudioGameplayCondition_ConditionMet");
static_assert(offsetof(AudioGameplayCondition_ConditionMet, ReturnValue) == 0x000000, "Member 'AudioGameplayCondition_ConditionMet::ReturnValue' has a wrong offset!");

// Function AudioGameplay.AudioGameplayCondition.ConditionMet_Position
// 0x0020 (0x0020 - 0x0000)
struct AudioGameplayCondition_ConditionMet_Position final
{
public:
	struct FVector                                Position;                                          // 0x0000(0x0018)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0018(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_19[0x7];                                       // 0x0019(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(AudioGameplayCondition_ConditionMet_Position) == 0x000008, "Wrong alignment on AudioGameplayCondition_ConditionMet_Position");
static_assert(sizeof(AudioGameplayCondition_ConditionMet_Position) == 0x000020, "Wrong size on AudioGameplayCondition_ConditionMet_Position");
static_assert(offsetof(AudioGameplayCondition_ConditionMet_Position, Position) == 0x000000, "Member 'AudioGameplayCondition_ConditionMet_Position::Position' has a wrong offset!");
static_assert(offsetof(AudioGameplayCondition_ConditionMet_Position, ReturnValue) == 0x000018, "Member 'AudioGameplayCondition_ConditionMet_Position::ReturnValue' has a wrong offset!");

}

