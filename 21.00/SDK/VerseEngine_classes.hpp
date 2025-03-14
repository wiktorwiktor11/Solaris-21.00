﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: VerseEngine

#include "Basic.hpp"

#include "Engine_classes.hpp"
#include "SolarisInterop_classes.hpp"


namespace SDK
{

// Class VerseEngine.VerseAssetPtr
// 0x0038 (0x0068 - 0x0030)
class UVerseAssetPtr : public UVerseAsset
{
public:
	class FName                                   AssetPathName;                                     // 0x0030(0x0004)(Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_34[0x4];                                       // 0x0034(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                Object;                                            // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_40[0x28];                                      // 0x0040(0x0028)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void OnRep_AssetPathName();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"VerseAssetPtr">();
	}
	static class UVerseAssetPtr* GetDefaultObj()
	{
		return GetDefaultObjImpl<UVerseAssetPtr>();
	}
};
static_assert(alignof(UVerseAssetPtr) == 0x000008, "Wrong alignment on UVerseAssetPtr");
static_assert(sizeof(UVerseAssetPtr) == 0x000068, "Wrong size on UVerseAssetPtr");
static_assert(offsetof(UVerseAssetPtr, AssetPathName) == 0x000030, "Member 'UVerseAssetPtr::AssetPathName' has a wrong offset!");
static_assert(offsetof(UVerseAssetPtr, Object) == 0x000038, "Member 'UVerseAssetPtr::Object' has a wrong offset!");

// Class VerseEngine.VerseWorldSubsystem
// 0x0000 (0x0030 - 0x0030)
class UVerseWorldSubsystem final : public UWorldSubsystem
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"VerseWorldSubsystem">();
	}
	static class UVerseWorldSubsystem* GetDefaultObj()
	{
		return GetDefaultObjImpl<UVerseWorldSubsystem>();
	}
};
static_assert(alignof(UVerseWorldSubsystem) == 0x000008, "Wrong alignment on UVerseWorldSubsystem");
static_assert(sizeof(UVerseWorldSubsystem) == 0x000030, "Wrong size on UVerseWorldSubsystem");

}

