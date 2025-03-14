﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: FortBTService_SendGameplayEvents

#include "Basic.hpp"

#include "GameplayTags_0_structs.hpp"
#include "Engine_structs.hpp"
#include "AIModule_structs.hpp"
#include "AIModule_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass FortBTService_SendGameplayEvents.FortBTService_SendGameplayEvents_C
// 0x0118 (0x01B0 - 0x0098)
class UFortBTService_SendGameplayEvents_C final : public UBTService_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0098(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class AFortAIPawn*                            ActivatingPawn;                                    // 0x00A0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAbilitySystemComponent*                ActivatingPawnAbilitySystemComponent;              // 0x00A8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAbilitySystemComponent*                TargetAbilitySystemComponent;                      // 0x00B0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 GoalActor;                                         // 0x00B8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TMap<struct FGameplayTag, struct FBlackboardKeySelector> ActivationEvents;                                  // 0x00C0(0x0050)(Edit, BlueprintVisible)
	TArray<struct FBlackboardKeySelector>         ActivationEventValuesBlackboards;                  // 0x0110(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FGameplayTag>                   ActivationEventKeysTags;                           // 0x0120(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TMap<struct FGameplayTag, struct FBlackboardKeySelector> DeactivationEvents;                                // 0x0130(0x0050)(Edit, BlueprintVisible)
	TArray<struct FGameplayTag>                   DeactivationEventKeysTags;                         // 0x0180(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FBlackboardKeySelector>         DeactivationEventsValuesBlackboards;               // 0x0190(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	class AActor*                                 OwnerActor;                                        // 0x01A0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          UseEventTickLogic;                                 // 0x01A8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_FortBTService_SendGameplayEvents(int32 EntryPoint);
	void ReceiveActivation(class AActor* OwnerActor_0);
	void ReceiveDeactivation(class AActor* OwnerActor_0);
	void ReceiveTick(class AActor* OwnerActor_0, float DeltaSeconds);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"FortBTService_SendGameplayEvents_C">();
	}
	static class UFortBTService_SendGameplayEvents_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortBTService_SendGameplayEvents_C>();
	}
};
static_assert(alignof(UFortBTService_SendGameplayEvents_C) == 0x000008, "Wrong alignment on UFortBTService_SendGameplayEvents_C");
static_assert(sizeof(UFortBTService_SendGameplayEvents_C) == 0x0001B0, "Wrong size on UFortBTService_SendGameplayEvents_C");
static_assert(offsetof(UFortBTService_SendGameplayEvents_C, UberGraphFrame) == 0x000098, "Member 'UFortBTService_SendGameplayEvents_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UFortBTService_SendGameplayEvents_C, ActivatingPawn) == 0x0000A0, "Member 'UFortBTService_SendGameplayEvents_C::ActivatingPawn' has a wrong offset!");
static_assert(offsetof(UFortBTService_SendGameplayEvents_C, ActivatingPawnAbilitySystemComponent) == 0x0000A8, "Member 'UFortBTService_SendGameplayEvents_C::ActivatingPawnAbilitySystemComponent' has a wrong offset!");
static_assert(offsetof(UFortBTService_SendGameplayEvents_C, TargetAbilitySystemComponent) == 0x0000B0, "Member 'UFortBTService_SendGameplayEvents_C::TargetAbilitySystemComponent' has a wrong offset!");
static_assert(offsetof(UFortBTService_SendGameplayEvents_C, GoalActor) == 0x0000B8, "Member 'UFortBTService_SendGameplayEvents_C::GoalActor' has a wrong offset!");
static_assert(offsetof(UFortBTService_SendGameplayEvents_C, ActivationEvents) == 0x0000C0, "Member 'UFortBTService_SendGameplayEvents_C::ActivationEvents' has a wrong offset!");
static_assert(offsetof(UFortBTService_SendGameplayEvents_C, ActivationEventValuesBlackboards) == 0x000110, "Member 'UFortBTService_SendGameplayEvents_C::ActivationEventValuesBlackboards' has a wrong offset!");
static_assert(offsetof(UFortBTService_SendGameplayEvents_C, ActivationEventKeysTags) == 0x000120, "Member 'UFortBTService_SendGameplayEvents_C::ActivationEventKeysTags' has a wrong offset!");
static_assert(offsetof(UFortBTService_SendGameplayEvents_C, DeactivationEvents) == 0x000130, "Member 'UFortBTService_SendGameplayEvents_C::DeactivationEvents' has a wrong offset!");
static_assert(offsetof(UFortBTService_SendGameplayEvents_C, DeactivationEventKeysTags) == 0x000180, "Member 'UFortBTService_SendGameplayEvents_C::DeactivationEventKeysTags' has a wrong offset!");
static_assert(offsetof(UFortBTService_SendGameplayEvents_C, DeactivationEventsValuesBlackboards) == 0x000190, "Member 'UFortBTService_SendGameplayEvents_C::DeactivationEventsValuesBlackboards' has a wrong offset!");
static_assert(offsetof(UFortBTService_SendGameplayEvents_C, OwnerActor) == 0x0001A0, "Member 'UFortBTService_SendGameplayEvents_C::OwnerActor' has a wrong offset!");
static_assert(offsetof(UFortBTService_SendGameplayEvents_C, UseEventTickLogic) == 0x0001A8, "Member 'UFortBTService_SendGameplayEvents_C::UseEventTickLogic' has a wrong offset!");

}

