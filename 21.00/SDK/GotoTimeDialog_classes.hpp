﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GotoTimeDialog

#include "Basic.hpp"

#include "FortniteUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass GotoTimeDialog.GotoTimeDialog_C
// 0x0000 (0x0560 - 0x0560)
class UGotoTimeDialog_C final : public UFortReplayGoToTimeDialogue
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GotoTimeDialog_C">();
	}
	static class UGotoTimeDialog_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGotoTimeDialog_C>();
	}
};
static_assert(alignof(UGotoTimeDialog_C) == 0x000008, "Wrong alignment on UGotoTimeDialog_C");
static_assert(sizeof(UGotoTimeDialog_C) == 0x000560, "Wrong size on UGotoTimeDialog_C");

}

