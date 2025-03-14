﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: VehicleInfoIndicator

#include "Basic.hpp"

#include "VehicleInfoIndicator_classes.hpp"
#include "VehicleInfoIndicator_parameters.hpp"


namespace SDK
{

// Function VehicleInfoIndicator.VehicleInfoIndicator_C.ExecuteUbergraph_VehicleInfoIndicator
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UVehicleInfoIndicator_C::ExecuteUbergraph_VehicleInfoIndicator(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VehicleInfoIndicator_C", "ExecuteUbergraph_VehicleInfoIndicator");

	Params::VehicleInfoIndicator_C_ExecuteUbergraph_VehicleInfoIndicator Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function VehicleInfoIndicator.VehicleInfoIndicator_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UVehicleInfoIndicator_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VehicleInfoIndicator_C", "OnInitialized");

	UObject::ProcessEvent(Func, nullptr);
}


// Function VehicleInfoIndicator.VehicleInfoIndicator_C.OnPlayerVehicleStateChanged_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortPlayerPawn*                  PlayerPawn                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           NewVehicle                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           OldVehicle                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UVehicleInfoIndicator_C::OnPlayerVehicleStateChanged_Event(class AFortPlayerPawn* PlayerPawn, class AActor* NewVehicle, class AActor* OldVehicle)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VehicleInfoIndicator_C", "OnPlayerVehicleStateChanged_Event");

	Params::VehicleInfoIndicator_C_OnPlayerVehicleStateChanged_Event Parms{};

	Parms.PlayerPawn = PlayerPawn;
	Parms.NewVehicle = NewVehicle;
	Parms.OldVehicle = OldVehicle;

	UObject::ProcessEvent(Func, &Parms);
}


// Function VehicleInfoIndicator.VehicleInfoIndicator_C.OnVehicleChanged
// (Event, Public, BlueprintEvent)

void UVehicleInfoIndicator_C::OnVehicleChanged()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VehicleInfoIndicator_C", "OnVehicleChanged");

	UObject::ProcessEvent(Func, nullptr);
}


// Function VehicleInfoIndicator.VehicleInfoIndicator_C.OnVehicleHealthChanged
// (Event, Public, BlueprintEvent)

void UVehicleInfoIndicator_C::OnVehicleHealthChanged()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VehicleInfoIndicator_C", "OnVehicleHealthChanged");

	UObject::ProcessEvent(Func, nullptr);
}

}

