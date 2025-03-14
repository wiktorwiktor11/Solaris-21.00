﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Athena_SkyTube_Base

#include "Basic.hpp"

#include "BP_Athena_SkyTube_Base_classes.hpp"
#include "BP_Athena_SkyTube_Base_parameters.hpp"


namespace SDK
{

// Function BP_Athena_SkyTube_Base.BP_Athena_SkyTube_Base_C.Actor Exit Skytube
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           OtherActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Athena_SkyTube_Base_C::Actor_Exit_Skytube(class AActor* OtherActor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Athena_SkyTube_Base_C", "Actor Exit Skytube");

	Params::BP_Athena_SkyTube_Base_C_Actor_Exit_Skytube Parms{};

	Parms.OtherActor = OtherActor;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Athena_SkyTube_Base.BP_Athena_SkyTube_Base_C.AddSplineMesh
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USplineMeshComponent*             NewSplineMesh                                          (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Athena_SkyTube_Base_C::AddSplineMesh(class USplineMeshComponent** NewSplineMesh)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Athena_SkyTube_Base_C", "AddSplineMesh");

	Params::BP_Athena_SkyTube_Base_C_AddSplineMesh Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (NewSplineMesh != nullptr)
		*NewSplineMesh = Parms.NewSplineMesh;
}


// Function BP_Athena_SkyTube_Base.BP_Athena_SkyTube_Base_C.CalculateLaunchForce
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortPlayerPawn*                  Pawn                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          Velocity                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          Out_Launch                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Athena_SkyTube_Base_C::CalculateLaunchForce(class AFortPlayerPawn* Pawn, const struct FVector& Velocity, struct FVector* Out_Launch)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Athena_SkyTube_Base_C", "CalculateLaunchForce");

	Params::BP_Athena_SkyTube_Base_C_CalculateLaunchForce Parms{};

	Parms.Pawn = Pawn;
	Parms.Velocity = std::move(Velocity);

	UObject::ProcessEvent(Func, &Parms);

	if (Out_Launch != nullptr)
		*Out_Launch = std::move(Parms.Out_Launch);
}


// Function BP_Athena_SkyTube_Base.BP_Athena_SkyTube_Base_C.CheckZDirection
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortPlayerPawn*                  Pawn                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          Velocity                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Athena_SkyTube_Base_C::CheckZDirection(class AFortPlayerPawn* Pawn, const struct FVector& Velocity)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Athena_SkyTube_Base_C", "CheckZDirection");

	Params::BP_Athena_SkyTube_Base_C_CheckZDirection Parms{};

	Parms.Pawn = Pawn;
	Parms.Velocity = std::move(Velocity);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Athena_SkyTube_Base.BP_Athena_SkyTube_Base_C.ExecuteUbergraph_BP_Athena_SkyTube_Base
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Athena_SkyTube_Base_C::ExecuteUbergraph_BP_Athena_SkyTube_Base(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Athena_SkyTube_Base_C", "ExecuteUbergraph_BP_Athena_SkyTube_Base");

	Params::BP_Athena_SkyTube_Base_C_ExecuteUbergraph_BP_Athena_SkyTube_Base Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Athena_SkyTube_Base.BP_Athena_SkyTube_Base_C.HandleForcedExit
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor*                           ExitingPawn                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Athena_SkyTube_Base_C::HandleForcedExit(class AActor* ExitingPawn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Athena_SkyTube_Base_C", "HandleForcedExit");

	Params::BP_Athena_SkyTube_Base_C_HandleForcedExit Parms{};

	Parms.ExitingPawn = ExitingPawn;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Athena_SkyTube_Base.BP_Athena_SkyTube_Base_C.LaunchVehicle
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortAthenaVehicle*               Vehicle                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Athena_SkyTube_Base_C::LaunchVehicle(class AFortAthenaVehicle* Vehicle)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Athena_SkyTube_Base_C", "LaunchVehicle");

	Params::BP_Athena_SkyTube_Base_C_LaunchVehicle Parms{};

	Parms.Vehicle = Vehicle;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Athena_SkyTube_Base.BP_Athena_SkyTube_Base_C.OnEnabledChanged
// (Event, Public, BlueprintEvent)

void ABP_Athena_SkyTube_Base_C::OnEnabledChanged()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Athena_SkyTube_Base_C", "OnEnabledChanged");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Athena_SkyTube_Base.BP_Athena_SkyTube_Base_C.OnStartShuttingDown
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void ABP_Athena_SkyTube_Base_C::OnStartShuttingDown()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Athena_SkyTube_Base_C", "OnStartShuttingDown");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Athena_SkyTube_Base.BP_Athena_SkyTube_Base_C.PlaySkytubeEnterSound
// (BlueprintCallable, BlueprintEvent)

void ABP_Athena_SkyTube_Base_C::PlaySkytubeEnterSound()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Athena_SkyTube_Base_C", "PlaySkytubeEnterSound");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Athena_SkyTube_Base.BP_Athena_SkyTube_Base_C.PlaySkytubeExitSound
// (BlueprintCallable, BlueprintEvent)

void ABP_Athena_SkyTube_Base_C::PlaySkytubeExitSound()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Athena_SkyTube_Base_C", "PlaySkytubeExitSound");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Athena_SkyTube_Base.BP_Athena_SkyTube_Base_C.PlaySkytubeVehEnterSound
// (BlueprintCallable, BlueprintEvent)

void ABP_Athena_SkyTube_Base_C::PlaySkytubeVehEnterSound()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Athena_SkyTube_Base_C", "PlaySkytubeVehEnterSound");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Athena_SkyTube_Base.BP_Athena_SkyTube_Base_C.PlaySkytubeVehExitSound
// (BlueprintCallable, BlueprintEvent)

void ABP_Athena_SkyTube_Base_C::PlaySkytubeVehExitSound()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Athena_SkyTube_Base_C", "PlaySkytubeVehExitSound");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Athena_SkyTube_Base.BP_Athena_SkyTube_Base_C.ReceiveActorBeginOverlap
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor*                           OtherActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Athena_SkyTube_Base_C::ReceiveActorBeginOverlap(class AActor* OtherActor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Athena_SkyTube_Base_C", "ReceiveActorBeginOverlap");

	Params::BP_Athena_SkyTube_Base_C_ReceiveActorBeginOverlap Parms{};

	Parms.OtherActor = OtherActor;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Athena_SkyTube_Base.BP_Athena_SkyTube_Base_C.ReceiveActorEndOverlap
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor*                           OtherActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Athena_SkyTube_Base_C::ReceiveActorEndOverlap(class AActor* OtherActor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Athena_SkyTube_Base_C", "ReceiveActorEndOverlap");

	Params::BP_Athena_SkyTube_Base_C_ReceiveActorEndOverlap Parms{};

	Parms.OtherActor = OtherActor;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Athena_SkyTube_Base.BP_Athena_SkyTube_Base_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_Athena_SkyTube_Base_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Athena_SkyTube_Base_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Athena_SkyTube_Base.BP_Athena_SkyTube_Base_C.SmoothTangents
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                          Location_A                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          Tangent_A                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          Location_B                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          Tangent_B                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          Tangent_0                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          Tangent_1                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Athena_SkyTube_Base_C::SmoothTangents(const struct FVector& Location_A, const struct FVector& Tangent_A, const struct FVector& Location_B, const struct FVector& Tangent_B, struct FVector* Tangent_0, struct FVector* Tangent_1)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Athena_SkyTube_Base_C", "SmoothTangents");

	Params::BP_Athena_SkyTube_Base_C_SmoothTangents Parms{};

	Parms.Location_A = std::move(Location_A);
	Parms.Tangent_A = std::move(Tangent_A);
	Parms.Location_B = std::move(Location_B);
	Parms.Tangent_B = std::move(Tangent_B);

	UObject::ProcessEvent(Func, &Parms);

	if (Tangent_0 != nullptr)
		*Tangent_0 = std::move(Parms.Tangent_0);

	if (Tangent_1 != nullptr)
		*Tangent_1 = std::move(Parms.Tangent_1);
}


// Function BP_Athena_SkyTube_Base.BP_Athena_SkyTube_Base_C.UpdateSkyTubeDestructionGE
// (BlueprintCallable, BlueprintEvent)

void ABP_Athena_SkyTube_Base_C::UpdateSkyTubeDestructionGE()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Athena_SkyTube_Base_C", "UpdateSkyTubeDestructionGE");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Athena_SkyTube_Base.BP_Athena_SkyTube_Base_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_Athena_SkyTube_Base_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Athena_SkyTube_Base_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}

}

