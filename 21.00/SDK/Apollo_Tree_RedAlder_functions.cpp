﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Apollo_Tree_RedAlder

#include "Basic.hpp"

#include "Apollo_Tree_RedAlder_classes.hpp"
#include "Apollo_Tree_RedAlder_parameters.hpp"


namespace SDK
{

// Function Apollo_Tree_RedAlder.Apollo_Tree_RedAlder_C.activateDeathFXOverride
// (Public, BlueprintCallable, BlueprintEvent)

void AApollo_Tree_RedAlder_C::activateDeathFXOverride()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Apollo_Tree_RedAlder_C", "activateDeathFXOverride");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Apollo_Tree_RedAlder.Apollo_Tree_RedAlder_C.ExecuteUbergraph_Apollo_Tree_RedAlder
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AApollo_Tree_RedAlder_C::ExecuteUbergraph_Apollo_Tree_RedAlder(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Apollo_Tree_RedAlder_C", "ExecuteUbergraph_Apollo_Tree_RedAlder");

	Params::Apollo_Tree_RedAlder_C_ExecuteUbergraph_Apollo_Tree_RedAlder Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Apollo_Tree_RedAlder.Apollo_Tree_RedAlder_C.initRandomUndergrowth
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AApollo_Tree_RedAlder_C::initRandomUndergrowth()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Apollo_Tree_RedAlder_C", "initRandomUndergrowth");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Apollo_Tree_RedAlder.Apollo_Tree_RedAlder_C.OnDeathPlayEffects
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// float                                   Damage                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer            DamageTags                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FVector                          Momentum                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                       HitInfo                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// class AFortPawn*                        InstigatedBy                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           DamageCauser                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEffectContextHandle     EffectContext                                          (BlueprintVisible, BlueprintReadOnly, Parm)

void AApollo_Tree_RedAlder_C::OnDeathPlayEffects(float Damage, const struct FGameplayTagContainer& DamageTags, const struct FVector& Momentum, const struct FHitResult& HitInfo, class AFortPawn* InstigatedBy, class AActor* DamageCauser, const struct FGameplayEffectContextHandle& EffectContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Apollo_Tree_RedAlder_C", "OnDeathPlayEffects");

	Params::Apollo_Tree_RedAlder_C_OnDeathPlayEffects Parms{};

	Parms.Damage = Damage;
	Parms.DamageTags = std::move(DamageTags);
	Parms.Momentum = std::move(Momentum);
	Parms.HitInfo = std::move(HitInfo);
	Parms.InstigatedBy = InstigatedBy;
	Parms.DamageCauser = DamageCauser;
	Parms.EffectContext = std::move(EffectContext);

	UObject::ProcessEvent(Func, &Parms);
}


// Function Apollo_Tree_RedAlder.Apollo_Tree_RedAlder_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AApollo_Tree_RedAlder_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Apollo_Tree_RedAlder_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}

}

