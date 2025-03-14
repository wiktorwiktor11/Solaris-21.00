﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SafeZoneIndicatorMaterial_Interface

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass SafeZoneIndicatorMaterial_Interface.SafeZoneIndicatorMaterial_Interface_C
// 0x0000 (0x0028 - 0x0028)
class ISafeZoneIndicatorMaterial_Interface_C final : public IInterface
{
public:
	void GetSafeZoneIndicatorMID(class UMaterialInstanceDynamic** Mid);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SafeZoneIndicatorMaterial_Interface_C">();
	}
	static class ISafeZoneIndicatorMaterial_Interface_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ISafeZoneIndicatorMaterial_Interface_C>();
	}
};
static_assert(alignof(ISafeZoneIndicatorMaterial_Interface_C) == 0x000008, "Wrong alignment on ISafeZoneIndicatorMaterial_Interface_C");
static_assert(sizeof(ISafeZoneIndicatorMaterial_Interface_C) == 0x000028, "Wrong size on ISafeZoneIndicatorMaterial_Interface_C");

}

