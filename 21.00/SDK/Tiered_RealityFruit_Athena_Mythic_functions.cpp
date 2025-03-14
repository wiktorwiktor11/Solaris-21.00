﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Tiered_RealityFruit_Athena_Mythic

#include "Basic.hpp"

#include "Tiered_RealityFruit_Athena_Mythic_classes.hpp"
#include "Tiered_RealityFruit_Athena_Mythic_parameters.hpp"


namespace SDK
{

// Function Tiered_RealityFruit_Athena_Mythic.Tiered_RealityFruit_Athena_Mythic_C.BlueprintOnLocalInteract
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortPlayerPawn*                  InteractingPawn                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EInteractionBeingAttempted              InteractionBeingAttempted                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool ATiered_RealityFruit_Athena_Mythic_C::BlueprintOnLocalInteract(class AFortPlayerPawn* InteractingPawn, const EInteractionBeingAttempted InteractionBeingAttempted)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Tiered_RealityFruit_Athena_Mythic_C", "BlueprintOnLocalInteract");

	Params::Tiered_RealityFruit_Athena_Mythic_C_BlueprintOnLocalInteract Parms{};

	Parms.InteractingPawn = InteractingPawn;
	Parms.InteractionBeingAttempted = InteractionBeingAttempted;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function Tiered_RealityFruit_Athena_Mythic.Tiered_RealityFruit_Athena_Mythic_C.ExecuteUbergraph_Tiered_RealityFruit_Athena_Mythic
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ATiered_RealityFruit_Athena_Mythic_C::ExecuteUbergraph_Tiered_RealityFruit_Athena_Mythic(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Tiered_RealityFruit_Athena_Mythic_C", "ExecuteUbergraph_Tiered_RealityFruit_Athena_Mythic");

	Params::Tiered_RealityFruit_Athena_Mythic_C_ExecuteUbergraph_Tiered_RealityFruit_Athena_Mythic Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Tiered_RealityFruit_Athena_Mythic.Tiered_RealityFruit_Athena_Mythic_C.Increment Growth State
// (Public, BlueprintCallable, BlueprintEvent)

void ATiered_RealityFruit_Athena_Mythic_C::Increment_Growth_State()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Tiered_RealityFruit_Athena_Mythic_C", "Increment Growth State");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Tiered_RealityFruit_Athena_Mythic.Tiered_RealityFruit_Athena_Mythic_C.OnFruitLooted
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)

void ATiered_RealityFruit_Athena_Mythic_C::OnFruitLooted()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Tiered_RealityFruit_Athena_Mythic_C", "OnFruitLooted");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Tiered_RealityFruit_Athena_Mythic.Tiered_RealityFruit_Athena_Mythic_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ATiered_RealityFruit_Athena_Mythic_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Tiered_RealityFruit_Athena_Mythic_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Tiered_RealityFruit_Athena_Mythic.Tiered_RealityFruit_Athena_Mythic_C.Set Loot Tier Group From Rarity
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ATiered_RealityFruit_Athena_Mythic_C::Set_Loot_Tier_Group_From_Rarity()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Tiered_RealityFruit_Athena_Mythic_C", "Set Loot Tier Group From Rarity");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Tiered_RealityFruit_Athena_Mythic.Tiered_RealityFruit_Athena_Mythic_C.BlueprintCanInteract
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AFortPawn*                        InteractingPawn                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EInteractionBeingAttempted              InteractionBeingAttempted                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// ETInteractionType                       InteractionType                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool ATiered_RealityFruit_Athena_Mythic_C::BlueprintCanInteract(const class AFortPawn* InteractingPawn, const EInteractionBeingAttempted InteractionBeingAttempted, const ETInteractionType InteractionType) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Tiered_RealityFruit_Athena_Mythic_C", "BlueprintCanInteract");

	Params::Tiered_RealityFruit_Athena_Mythic_C_BlueprintCanInteract Parms{};

	Parms.InteractingPawn = InteractingPawn;
	Parms.InteractionBeingAttempted = InteractionBeingAttempted;
	Parms.InteractionType = InteractionType;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function Tiered_RealityFruit_Athena_Mythic.Tiered_RealityFruit_Athena_Mythic_C.BlueprintGetFailedInteractionString
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class AFortPawn*                        InteractingPawn                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EInteractionBeingAttempted              InteractionBeingAttempted                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                             ReturnValue                                            (Parm, OutParm, ReturnParm)

class FText ATiered_RealityFruit_Athena_Mythic_C::BlueprintGetFailedInteractionString(const class AFortPawn* InteractingPawn, const EInteractionBeingAttempted InteractionBeingAttempted) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Tiered_RealityFruit_Athena_Mythic_C", "BlueprintGetFailedInteractionString");

	Params::Tiered_RealityFruit_Athena_Mythic_C_BlueprintGetFailedInteractionString Parms{};

	Parms.InteractingPawn = InteractingPawn;
	Parms.InteractionBeingAttempted = InteractionBeingAttempted;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function Tiered_RealityFruit_Athena_Mythic.Tiered_RealityFruit_Athena_Mythic_C.BlueprintGetInteractionString
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class AFortPawn*                        InteractingPawn                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EInteractionBeingAttempted              InteractionBeingAttempted                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                             ReturnValue                                            (Parm, OutParm, ReturnParm)

class FText ATiered_RealityFruit_Athena_Mythic_C::BlueprintGetInteractionString(const class AFortPawn* InteractingPawn, const EInteractionBeingAttempted InteractionBeingAttempted) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Tiered_RealityFruit_Athena_Mythic_C", "BlueprintGetInteractionString");

	Params::Tiered_RealityFruit_Athena_Mythic_C_BlueprintGetInteractionString Parms{};

	Parms.InteractingPawn = InteractingPawn;
	Parms.InteractionBeingAttempted = InteractionBeingAttempted;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function Tiered_RealityFruit_Athena_Mythic.Tiered_RealityFruit_Athena_Mythic_C.Is Owning Player Pawn
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class AFortPawn*                        InteractingPawn                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool ATiered_RealityFruit_Athena_Mythic_C::Is_Owning_Player_Pawn(class AFortPawn* InteractingPawn) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Tiered_RealityFruit_Athena_Mythic_C", "Is Owning Player Pawn");

	Params::Tiered_RealityFruit_Athena_Mythic_C_Is_Owning_Player_Pawn Parms{};

	Parms.InteractingPawn = InteractingPawn;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

