﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AthenaGameOverWidget

#include "Basic.hpp"

#include "FortniteUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass AthenaGameOverWidget.AthenaGameOverWidget_C
// 0x0000 (0x0648 - 0x0648)
class UAthenaGameOverWidget_C final : public UAthenaGameOverDisplay
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AthenaGameOverWidget_C">();
	}
	static class UAthenaGameOverWidget_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAthenaGameOverWidget_C>();
	}
};
static_assert(alignof(UAthenaGameOverWidget_C) == 0x000008, "Wrong alignment on UAthenaGameOverWidget_C");
static_assert(sizeof(UAthenaGameOverWidget_C) == 0x000648, "Wrong size on UAthenaGameOverWidget_C");

}

