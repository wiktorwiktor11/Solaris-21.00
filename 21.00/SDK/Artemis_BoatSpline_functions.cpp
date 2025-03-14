﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Artemis_BoatSpline

#include "Basic.hpp"

#include "Artemis_BoatSpline_classes.hpp"
#include "Artemis_BoatSpline_parameters.hpp"


namespace SDK
{

// Function Artemis_BoatSpline.Artemis_BoatSpline_C.SnapToFortniteGrid
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                          Location                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          NewLocation                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AArtemis_BoatSpline_C::SnapToFortniteGrid(const struct FVector& Location, struct FVector* NewLocation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Artemis_BoatSpline_C", "SnapToFortniteGrid");

	Params::Artemis_BoatSpline_C_SnapToFortniteGrid Parms{};

	Parms.Location = std::move(Location);

	UObject::ProcessEvent(Func, &Parms);

	if (NewLocation != nullptr)
		*NewLocation = std::move(Parms.NewLocation);
}


// Function Artemis_BoatSpline.Artemis_BoatSpline_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AArtemis_BoatSpline_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Artemis_BoatSpline_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Artemis_BoatSpline.Artemis_BoatSpline_C.OnReady_C2E712E747854352C550DFAB72482F44
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortGameStateAthena*             GameState                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortPlaylist*                    Playlist                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer            PlaylistContextTags                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void AArtemis_BoatSpline_C::OnReady_C2E712E747854352C550DFAB72482F44(class AFortGameStateAthena* GameState, const class UFortPlaylist* Playlist, const struct FGameplayTagContainer& PlaylistContextTags)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Artemis_BoatSpline_C", "OnReady_C2E712E747854352C550DFAB72482F44");

	Params::Artemis_BoatSpline_C_OnReady_C2E712E747854352C550DFAB72482F44 Parms{};

	Parms.GameState = GameState;
	Parms.Playlist = Playlist;
	Parms.PlaylistContextTags = std::move(PlaylistContextTags);

	UObject::ProcessEvent(Func, &Parms);
}


// Function Artemis_BoatSpline.Artemis_BoatSpline_C.GetGridRotationOnSpline
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                                   ForwardVectorYawRotation                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USplineComponent*                 Spline                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   SplinePoint                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                         Rotation                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                                   Z__Yaw_                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AArtemis_BoatSpline_C::GetGridRotationOnSpline(float ForwardVectorYawRotation, class USplineComponent* Spline, int32 SplinePoint, struct FRotator* Rotation, float* Z__Yaw_)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Artemis_BoatSpline_C", "GetGridRotationOnSpline");

	Params::Artemis_BoatSpline_C_GetGridRotationOnSpline Parms{};

	Parms.ForwardVectorYawRotation = ForwardVectorYawRotation;
	Parms.Spline = Spline;
	Parms.SplinePoint = SplinePoint;

	UObject::ProcessEvent(Func, &Parms);

	if (Rotation != nullptr)
		*Rotation = std::move(Parms.Rotation);

	if (Z__Yaw_ != nullptr)
		*Z__Yaw_ = Parms.Z__Yaw_;
}


// Function Artemis_BoatSpline.Artemis_BoatSpline_C.ExecuteUbergraph_Artemis_BoatSpline
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AArtemis_BoatSpline_C::ExecuteUbergraph_Artemis_BoatSpline(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Artemis_BoatSpline_C", "ExecuteUbergraph_Artemis_BoatSpline");

	Params::Artemis_BoatSpline_C_ExecuteUbergraph_Artemis_BoatSpline Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

