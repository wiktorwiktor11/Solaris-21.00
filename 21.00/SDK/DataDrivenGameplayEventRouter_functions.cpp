﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: DataDrivenGameplayEventRouter

#include "Basic.hpp"

#include "DataDrivenGameplayEventRouter_classes.hpp"
#include "DataDrivenGameplayEventRouter_parameters.hpp"


namespace SDK
{

// Function DataDrivenGameplayEventRouter.GameplayEventDescriptorLibrary.BroadcastEvent
// (Final, Native, Static, Private, HasOutParams, BlueprintCallable)
// Parameters:
// struct FGameplayEventDescriptor         EventDescriptor                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class UObject*                          EventContext                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                                   event                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UClass*                           EventRouterScope                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                           RouterContextActor                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGameplayEventDescriptorLibrary::BroadcastEvent(const struct FGameplayEventDescriptor& EventDescriptor, class UObject* EventContext, const int32& event, class UClass* EventRouterScope, class AActor* RouterContextActor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("GameplayEventDescriptorLibrary", "BroadcastEvent");

	Params::GameplayEventDescriptorLibrary_BroadcastEvent Parms{};

	Parms.EventDescriptor = std::move(EventDescriptor);
	Parms.EventContext = EventContext;
	Parms.event = event;
	Parms.EventRouterScope = EventRouterScope;
	Parms.RouterContextActor = RouterContextActor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

}

