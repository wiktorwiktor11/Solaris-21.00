﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: NPC_Pawn_Irwin_Prey_Nug_Loot

#include "Basic.hpp"

#include "NPC_Pawn_Irwin_Prey_Nug_Loot_classes.hpp"
#include "NPC_Pawn_Irwin_Prey_Nug_Loot_parameters.hpp"


namespace SDK
{

// Function NPC_Pawn_Irwin_Prey_Nug_Loot.NPC_Pawn_Irwin_Prey_Nug_Loot_C.ExecuteUbergraph_NPC_Pawn_Irwin_Prey_Nug_Loot
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ANPC_Pawn_Irwin_Prey_Nug_Loot_C::ExecuteUbergraph_NPC_Pawn_Irwin_Prey_Nug_Loot(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NPC_Pawn_Irwin_Prey_Nug_Loot_C", "ExecuteUbergraph_NPC_Pawn_Irwin_Prey_Nug_Loot");

	Params::NPC_Pawn_Irwin_Prey_Nug_Loot_C_ExecuteUbergraph_NPC_Pawn_Irwin_Prey_Nug_Loot Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function NPC_Pawn_Irwin_Prey_Nug_Loot.NPC_Pawn_Irwin_Prey_Nug_Loot_C.MeshLoaded
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortPawn*                        ThisPawn                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ANPC_Pawn_Irwin_Prey_Nug_Loot_C::MeshLoaded(class AFortPawn* ThisPawn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NPC_Pawn_Irwin_Prey_Nug_Loot_C", "MeshLoaded");

	Params::NPC_Pawn_Irwin_Prey_Nug_Loot_C_MeshLoaded Parms{};

	Parms.ThisPawn = ThisPawn;

	UObject::ProcessEvent(Func, &Parms);
}


// Function NPC_Pawn_Irwin_Prey_Nug_Loot.NPC_Pawn_Irwin_Prey_Nug_Loot_C.NPC SendGameplayCuePickupGrabbed
// (Public, BlueprintCallable, BlueprintEvent)

void ANPC_Pawn_Irwin_Prey_Nug_Loot_C::NPC_SendGameplayCuePickupGrabbed()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NPC_Pawn_Irwin_Prey_Nug_Loot_C", "NPC SendGameplayCuePickupGrabbed");

	UObject::ProcessEvent(Func, nullptr);
}


// Function NPC_Pawn_Irwin_Prey_Nug_Loot.NPC_Pawn_Irwin_Prey_Nug_Loot_C.OnDeathPlayEffects
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// float                                   Damage                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer            DamageTags                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FVector                          Momentum                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                       HitInfo                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// class AFortPawn*                        InstigatedBy                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           DamageCauser                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEffectContextHandle     EffectContext                                          (BlueprintVisible, BlueprintReadOnly, Parm)

void ANPC_Pawn_Irwin_Prey_Nug_Loot_C::OnDeathPlayEffects(float Damage, const struct FGameplayTagContainer& DamageTags, const struct FVector& Momentum, const struct FHitResult& HitInfo, class AFortPawn* InstigatedBy, class AActor* DamageCauser, const struct FGameplayEffectContextHandle& EffectContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NPC_Pawn_Irwin_Prey_Nug_Loot_C", "OnDeathPlayEffects");

	Params::NPC_Pawn_Irwin_Prey_Nug_Loot_C_OnDeathPlayEffects Parms{};

	Parms.Damage = Damage;
	Parms.DamageTags = std::move(DamageTags);
	Parms.Momentum = std::move(Momentum);
	Parms.HitInfo = std::move(HitInfo);
	Parms.InstigatedBy = InstigatedBy;
	Parms.DamageCauser = DamageCauser;
	Parms.EffectContext = std::move(EffectContext);

	UObject::ProcessEvent(Func, &Parms);
}


// Function NPC_Pawn_Irwin_Prey_Nug_Loot.NPC_Pawn_Irwin_Prey_Nug_Loot_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ANPC_Pawn_Irwin_Prey_Nug_Loot_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NPC_Pawn_Irwin_Prey_Nug_Loot_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}

}

