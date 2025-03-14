﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: VersePlayspace_0

#include "Basic.hpp"

#include "PlayspaceSystem_classes.hpp"


namespace SDK
{

// Class VersePlayspace.PlayspaceComponentVerseWrapper
// 0x0008 (0x00A8 - 0x00A0)
class UPlayspaceComponentVerseWrapper final : public UPlayspaceComponent
{
public:
	uint8                                         Pad_A0[0x8];                                       // 0x00A0(0x0008)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PlayspaceComponentVerseWrapper">();
	}
	static class UPlayspaceComponentVerseWrapper* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPlayspaceComponentVerseWrapper>();
	}
};
static_assert(alignof(UPlayspaceComponentVerseWrapper) == 0x000008, "Wrong alignment on UPlayspaceComponentVerseWrapper");
static_assert(sizeof(UPlayspaceComponentVerseWrapper) == 0x0000A8, "Wrong size on UPlayspaceComponentVerseWrapper");

// Class VersePlayspace.PlayspaceConfigComponent
// 0x0020 (0x00C0 - 0x00A0)
class UPlayspaceConfigComponent final : public UPlayspaceComponent
{
public:
	TSubclassOf<class UEntityActorPlayerComponent> PlayerComponentClass;                              // 0x00A0(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_A8[0x18];                                      // 0x00A8(0x0018)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PlayspaceConfigComponent">();
	}
	static class UPlayspaceConfigComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPlayspaceConfigComponent>();
	}
};
static_assert(alignof(UPlayspaceConfigComponent) == 0x000008, "Wrong alignment on UPlayspaceConfigComponent");
static_assert(sizeof(UPlayspaceConfigComponent) == 0x0000C0, "Wrong size on UPlayspaceConfigComponent");
static_assert(offsetof(UPlayspaceConfigComponent, PlayerComponentClass) == 0x0000A0, "Member 'UPlayspaceConfigComponent::PlayerComponentClass' has a wrong offset!");

}

