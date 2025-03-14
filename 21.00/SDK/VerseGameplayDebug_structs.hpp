﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: VerseGameplayDebug

#include "Basic.hpp"


namespace SDK
{

// ScriptStruct VerseGameplayDebug.VerseGameplayStringDebugMessage
// 0x0018 (0x0018 - 0x0000)
struct FVerseGameplayStringDebugMessage final
{
public:
	class FName                                   Name;                                              // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 String;                                            // 0x0008(0x0010)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FVerseGameplayStringDebugMessage) == 0x000008, "Wrong alignment on FVerseGameplayStringDebugMessage");
static_assert(sizeof(FVerseGameplayStringDebugMessage) == 0x000018, "Wrong size on FVerseGameplayStringDebugMessage");
static_assert(offsetof(FVerseGameplayStringDebugMessage, Name) == 0x000000, "Member 'FVerseGameplayStringDebugMessage::Name' has a wrong offset!");
static_assert(offsetof(FVerseGameplayStringDebugMessage, String) == 0x000008, "Member 'FVerseGameplayStringDebugMessage::String' has a wrong offset!");

}

