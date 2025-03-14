﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Repeat

#include "Basic.hpp"

#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Repeat.Repeat_C
// 0x0000 (0x01A0 - 0x01A0)
class URepeat_C final : public UFortConversationTaskNode_Back
{
public:
	struct FConversationTaskResult ExecuteTaskNode(const struct FConversationContext& Context) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Repeat_C">();
	}
	static class URepeat_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<URepeat_C>();
	}
};
static_assert(alignof(URepeat_C) == 0x000008, "Wrong alignment on URepeat_C");
static_assert(sizeof(URepeat_C) == 0x0001A0, "Wrong size on URepeat_C");

}

