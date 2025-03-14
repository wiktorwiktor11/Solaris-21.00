﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GhostPrompt

#include "Basic.hpp"

#include "ShadowPrompt_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass GhostPrompt.GhostPrompt_C
// 0x0000 (0x03A0 - 0x03A0)
class UGhostPrompt_C final : public UShadowPrompt_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GhostPrompt_C">();
	}
	static class UGhostPrompt_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGhostPrompt_C>();
	}
};
static_assert(alignof(UGhostPrompt_C) == 0x000008, "Wrong alignment on UGhostPrompt_C");
static_assert(sizeof(UGhostPrompt_C) == 0x0003A0, "Wrong size on UGhostPrompt_C");

}

