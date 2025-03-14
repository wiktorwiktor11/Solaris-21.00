﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: FireSelfInteractHandler

#include "Basic.hpp"

#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass FireSelfInteractHandler.FireSelfInteractHandler_C
// 0x0000 (0x0030 - 0x0030)
class UFireSelfInteractHandler_C final : public UFortCurieElementInteractWithSameElementHandler
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"FireSelfInteractHandler_C">();
	}
	static class UFireSelfInteractHandler_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFireSelfInteractHandler_C>();
	}
};
static_assert(alignof(UFireSelfInteractHandler_C) == 0x000008, "Wrong alignment on UFireSelfInteractHandler_C");
static_assert(sizeof(UFireSelfInteractHandler_C) == 0x000030, "Wrong size on UFireSelfInteractHandler_C");

}

