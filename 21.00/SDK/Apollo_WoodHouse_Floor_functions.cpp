﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Apollo_WoodHouse_Floor

#include "Basic.hpp"

#include "Apollo_WoodHouse_Floor_classes.hpp"
#include "Apollo_WoodHouse_Floor_parameters.hpp"


namespace SDK
{

// Function Apollo_WoodHouse_Floor.Apollo_WoodHouse_Floor_C.ExecuteUbergraph_Apollo_WoodHouse_Floor
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AApollo_WoodHouse_Floor_C::ExecuteUbergraph_Apollo_WoodHouse_Floor(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Apollo_WoodHouse_Floor_C", "ExecuteUbergraph_Apollo_WoodHouse_Floor");

	Params::Apollo_WoodHouse_Floor_C_ExecuteUbergraph_Apollo_WoodHouse_Floor Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Apollo_WoodHouse_Floor.Apollo_WoodHouse_Floor_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AApollo_WoodHouse_Floor_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Apollo_WoodHouse_Floor_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}

}

