﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: DataDrivenGameplayEventRouter

#include "Basic.hpp"

#include "Engine_classes.hpp"
#include "CoreUObject_classes.hpp"


namespace SDK
{

// Class DataDrivenGameplayEventRouter.GameplayEventDescriptorLibrary
// 0x0000 (0x0028 - 0x0028)
class UGameplayEventDescriptorLibrary final : public UBlueprintFunctionLibrary
{
public:
	static void BroadcastEvent(const struct FGameplayEventDescriptor& EventDescriptor, class UObject* EventContext, const int32& event, class UClass* EventRouterScope, class AActor* RouterContextActor);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"GameplayEventDescriptorLibrary">();
	}
	static class UGameplayEventDescriptorLibrary* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGameplayEventDescriptorLibrary>();
	}
};
static_assert(alignof(UGameplayEventDescriptorLibrary) == 0x000008, "Wrong alignment on UGameplayEventDescriptorLibrary");
static_assert(sizeof(UGameplayEventDescriptorLibrary) == 0x000028, "Wrong size on UGameplayEventDescriptorLibrary");

// Class DataDrivenGameplayEventRouter.GameplayEventLegacyBroadcast
// 0x0000 (0x0028 - 0x0028)
class IGameplayEventLegacyBroadcast final : public IInterface
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"GameplayEventLegacyBroadcast">();
	}
	static class IGameplayEventLegacyBroadcast* GetDefaultObj()
	{
		return GetDefaultObjImpl<IGameplayEventLegacyBroadcast>();
	}
};
static_assert(alignof(IGameplayEventLegacyBroadcast) == 0x000008, "Wrong alignment on IGameplayEventLegacyBroadcast");
static_assert(sizeof(IGameplayEventLegacyBroadcast) == 0x000028, "Wrong size on IGameplayEventLegacyBroadcast");

}

