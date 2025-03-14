﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_Ceiling_Reinforced_Athena

#include "Basic.hpp"

#include "B_Ceiling_Reinforced_Athena_classes.hpp"
#include "B_Ceiling_Reinforced_Athena_parameters.hpp"


namespace SDK
{

// Function B_Ceiling_Reinforced_Athena.B_Ceiling_Reinforced_Athena_C.ExecuteUbergraph_B_Ceiling_Reinforced_Athena
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_Ceiling_Reinforced_Athena_C::ExecuteUbergraph_B_Ceiling_Reinforced_Athena(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Ceiling_Reinforced_Athena_C", "ExecuteUbergraph_B_Ceiling_Reinforced_Athena");

	Params::B_Ceiling_Reinforced_Athena_C_ExecuteUbergraph_B_Ceiling_Reinforced_Athena Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_Ceiling_Reinforced_Athena.B_Ceiling_Reinforced_Athena_C.OnBuildingCompleteCosmetic
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)

void AB_Ceiling_Reinforced_Athena_C::OnBuildingCompleteCosmetic()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Ceiling_Reinforced_Athena_C", "OnBuildingCompleteCosmetic");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_Ceiling_Reinforced_Athena.B_Ceiling_Reinforced_Athena_C.OnBuildingPlaced
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)

void AB_Ceiling_Reinforced_Athena_C::OnBuildingPlaced()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Ceiling_Reinforced_Athena_C", "OnBuildingPlaced");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_Ceiling_Reinforced_Athena.B_Ceiling_Reinforced_Athena_C.OnDeathPlayEffects
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// float                                   Damage                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer            DamageTags                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FVector                          Momentum                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                       HitInfo                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// class AFortPawn*                        InstigatedBy                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           DamageCauser                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEffectContextHandle     EffectContext                                          (BlueprintVisible, BlueprintReadOnly, Parm)

void AB_Ceiling_Reinforced_Athena_C::OnDeathPlayEffects(float Damage, const struct FGameplayTagContainer& DamageTags, const struct FVector& Momentum, const struct FHitResult& HitInfo, class AFortPawn* InstigatedBy, class AActor* DamageCauser, const struct FGameplayEffectContextHandle& EffectContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Ceiling_Reinforced_Athena_C", "OnDeathPlayEffects");

	Params::B_Ceiling_Reinforced_Athena_C_OnDeathPlayEffects Parms{};

	Parms.Damage = Damage;
	Parms.DamageTags = std::move(DamageTags);
	Parms.Momentum = std::move(Momentum);
	Parms.HitInfo = std::move(HitInfo);
	Parms.InstigatedBy = InstigatedBy;
	Parms.DamageCauser = DamageCauser;
	Parms.EffectContext = std::move(EffectContext);

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_Ceiling_Reinforced_Athena.B_Ceiling_Reinforced_Athena_C.IsInteractionAllowedInCreative
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UObjectInteractionBehavior*       InteractionBehavior                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool AB_Ceiling_Reinforced_Athena_C::IsInteractionAllowedInCreative(class UObjectInteractionBehavior* InteractionBehavior) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Ceiling_Reinforced_Athena_C", "IsInteractionAllowedInCreative");

	Params::B_Ceiling_Reinforced_Athena_C_IsInteractionAllowedInCreative Parms{};

	Parms.InteractionBehavior = InteractionBehavior;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function B_Ceiling_Reinforced_Athena.B_Ceiling_Reinforced_Athena_C.IsTargetableByLinearMover
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool AB_Ceiling_Reinforced_Athena_C::IsTargetableByLinearMover() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Ceiling_Reinforced_Athena_C", "IsTargetableByLinearMover");

	Params::B_Ceiling_Reinforced_Athena_C_IsTargetableByLinearMover Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

