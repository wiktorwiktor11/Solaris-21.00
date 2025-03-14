﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Continue

#include "Basic.hpp"

#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Continue.Continue_C
// 0x0000 (0x01A0 - 0x01A0)
class UContinue_C final : public UFortConversationTaskNode
{
public:
	struct FConversationTaskResult ExecuteTaskNode(const struct FConversationContext& Context) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Continue_C">();
	}
	static class UContinue_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UContinue_C>();
	}
};
static_assert(alignof(UContinue_C) == 0x000008, "Wrong alignment on UContinue_C");
static_assert(sizeof(UContinue_C) == 0x0001A0, "Wrong size on UContinue_C");

}

