﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: VictoryScreen

#include "Basic.hpp"

#include "FortniteUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass VictoryScreen.VictoryScreen_C
// 0x0000 (0x0458 - 0x0458)
class UVictoryScreen_C final : public UFortVictoryRoyaleScreen
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"VictoryScreen_C">();
	}
	static class UVictoryScreen_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UVictoryScreen_C>();
	}
};
static_assert(alignof(UVictoryScreen_C) == 0x000008, "Wrong alignment on UVictoryScreen_C");
static_assert(sizeof(UVictoryScreen_C) == 0x000458, "Wrong size on UVictoryScreen_C");

}

