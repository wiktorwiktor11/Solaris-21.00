﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Tiered_Safe_Athena

#include "Basic.hpp"

#include "Tiered_Safe_Athena_classes.hpp"
#include "Tiered_Safe_Athena_parameters.hpp"


namespace SDK
{

// Function Tiered_Safe_Athena.Tiered_Safe_Athena_C.ExecuteUbergraph_Tiered_Safe_Athena
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ATiered_Safe_Athena_C::ExecuteUbergraph_Tiered_Safe_Athena(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Tiered_Safe_Athena_C", "ExecuteUbergraph_Tiered_Safe_Athena");

	Params::Tiered_Safe_Athena_C_ExecuteUbergraph_Tiered_Safe_Athena Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Tiered_Safe_Athena.Tiered_Safe_Athena_C.OnReady_B7A198A744C78234CAA50C87908FCB42
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortGameStateAthena*             GameState                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortPlaylist*                    Playlist                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer            PlaylistContextTags                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ATiered_Safe_Athena_C::OnReady_B7A198A744C78234CAA50C87908FCB42(class AFortGameStateAthena* GameState, const class UFortPlaylist* Playlist, const struct FGameplayTagContainer& PlaylistContextTags)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Tiered_Safe_Athena_C", "OnReady_B7A198A744C78234CAA50C87908FCB42");

	Params::Tiered_Safe_Athena_C_OnReady_B7A198A744C78234CAA50C87908FCB42 Parms{};

	Parms.GameState = GameState;
	Parms.Playlist = Playlist;
	Parms.PlaylistContextTags = std::move(PlaylistContextTags);

	UObject::ProcessEvent(Func, &Parms);
}


// Function Tiered_Safe_Athena.Tiered_Safe_Athena_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ATiered_Safe_Athena_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Tiered_Safe_Athena_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}

}

