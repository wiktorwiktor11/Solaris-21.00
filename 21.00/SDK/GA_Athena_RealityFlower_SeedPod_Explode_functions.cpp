﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Athena_RealityFlower_SeedPod_Explode

#include "Basic.hpp"

#include "GA_Athena_RealityFlower_SeedPod_Explode_classes.hpp"
#include "GA_Athena_RealityFlower_SeedPod_Explode_parameters.hpp"


namespace SDK
{

// Function GA_Athena_RealityFlower_SeedPod_Explode.GA_Athena_RealityFlower_SeedPod_Explode_C.ApplyDamage
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           Actor                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Athena_RealityFlower_SeedPod_Explode_C::ApplyDamage(class AActor* Actor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Athena_RealityFlower_SeedPod_Explode_C", "ApplyDamage");

	Params::GA_Athena_RealityFlower_SeedPod_Explode_C_ApplyDamage Parms{};

	Parms.Actor = Actor;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_Athena_RealityFlower_SeedPod_Explode.GA_Athena_RealityFlower_SeedPod_Explode_C.ExecuteUbergraph_GA_Athena_RealityFlower_SeedPod_Explode
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Athena_RealityFlower_SeedPod_Explode_C::ExecuteUbergraph_GA_Athena_RealityFlower_SeedPod_Explode(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Athena_RealityFlower_SeedPod_Explode_C", "ExecuteUbergraph_GA_Athena_RealityFlower_SeedPod_Explode");

	Params::GA_Athena_RealityFlower_SeedPod_Explode_C_ExecuteUbergraph_GA_Athena_RealityFlower_SeedPod_Explode Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_Athena_RealityFlower_SeedPod_Explode.GA_Athena_RealityFlower_SeedPod_Explode_C.K2_ActivateAbilityFromEvent
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// struct FGameplayEventData               EventData                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UGA_Athena_RealityFlower_SeedPod_Explode_C::K2_ActivateAbilityFromEvent(const struct FGameplayEventData& EventData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Athena_RealityFlower_SeedPod_Explode_C", "K2_ActivateAbilityFromEvent");

	Params::GA_Athena_RealityFlower_SeedPod_Explode_C_K2_ActivateAbilityFromEvent Parms{};

	Parms.EventData = std::move(EventData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_Athena_RealityFlower_SeedPod_Explode.GA_Athena_RealityFlower_SeedPod_Explode_C.CalculateLaunchVelocity
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FVector                          PlayerPosition                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          MyPosition                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          Velocity                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Athena_RealityFlower_SeedPod_Explode_C::CalculateLaunchVelocity(const struct FVector& PlayerPosition, const struct FVector& MyPosition, struct FVector* Velocity) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Athena_RealityFlower_SeedPod_Explode_C", "CalculateLaunchVelocity");

	Params::GA_Athena_RealityFlower_SeedPod_Explode_C_CalculateLaunchVelocity Parms{};

	Parms.PlayerPosition = std::move(PlayerPosition);
	Parms.MyPosition = std::move(MyPosition);

	UObject::ProcessEvent(Func, &Parms);

	if (Velocity != nullptr)
		*Velocity = std::move(Parms.Velocity);
}


// Function GA_Athena_RealityFlower_SeedPod_Explode.GA_Athena_RealityFlower_SeedPod_Explode_C.GetCustomAbilitySourceTransform
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FTransform                       ReturnValue                                            (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor)

struct FTransform UGA_Athena_RealityFlower_SeedPod_Explode_C::GetCustomAbilitySourceTransform() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Athena_RealityFlower_SeedPod_Explode_C", "GetCustomAbilitySourceTransform");

	Params::GA_Athena_RealityFlower_SeedPod_Explode_C_GetCustomAbilitySourceTransform Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

