﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: NPC_Pawn_Irwin_Simple_Smackie

#include "Basic.hpp"

#include "NPC_Pawn_Irwin_Simple_Smackie_classes.hpp"
#include "NPC_Pawn_Irwin_Simple_Smackie_parameters.hpp"


namespace SDK
{

// Function NPC_Pawn_Irwin_Simple_Smackie.NPC_Pawn_Irwin_Simple_Smackie_C.ExecuteUbergraph_NPC_Pawn_Irwin_Simple_Smackie
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ANPC_Pawn_Irwin_Simple_Smackie_C::ExecuteUbergraph_NPC_Pawn_Irwin_Simple_Smackie(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NPC_Pawn_Irwin_Simple_Smackie_C", "ExecuteUbergraph_NPC_Pawn_Irwin_Simple_Smackie");

	Params::NPC_Pawn_Irwin_Simple_Smackie_C_ExecuteUbergraph_NPC_Pawn_Irwin_Simple_Smackie Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function NPC_Pawn_Irwin_Simple_Smackie.NPC_Pawn_Irwin_Simple_Smackie_C.OnSmackieLanded
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FHitResult                       HitResult                                              (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void ANPC_Pawn_Irwin_Simple_Smackie_C::OnSmackieLanded(const struct FHitResult& HitResult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NPC_Pawn_Irwin_Simple_Smackie_C", "OnSmackieLanded");

	Params::NPC_Pawn_Irwin_Simple_Smackie_C_OnSmackieLanded Parms{};

	Parms.HitResult = std::move(HitResult);

	UObject::ProcessEvent(Func, &Parms);
}


// Function NPC_Pawn_Irwin_Simple_Smackie.NPC_Pawn_Irwin_Simple_Smackie_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ANPC_Pawn_Irwin_Simple_Smackie_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NPC_Pawn_Irwin_Simple_Smackie_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function NPC_Pawn_Irwin_Simple_Smackie.NPC_Pawn_Irwin_Simple_Smackie_C.SmackieLanded
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FHitResult                       Hit                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void ANPC_Pawn_Irwin_Simple_Smackie_C::SmackieLanded(const struct FHitResult& Hit)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NPC_Pawn_Irwin_Simple_Smackie_C", "SmackieLanded");

	Params::NPC_Pawn_Irwin_Simple_Smackie_C_SmackieLanded Parms{};

	Parms.Hit = std::move(Hit);

	UObject::ProcessEvent(Func, &Parms);
}

}

