﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Apollo_Boardwalk_Stair6

#include "Basic.hpp"

#include "Apollo_Boardwalk_Stair6_classes.hpp"
#include "Apollo_Boardwalk_Stair6_parameters.hpp"


namespace SDK
{

// Function Apollo_Boardwalk_Stair6.Apollo_Boardwalk_Stair6_C.ExecuteUbergraph_Apollo_Boardwalk_Stair6
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AApollo_Boardwalk_Stair6_C::ExecuteUbergraph_Apollo_Boardwalk_Stair6(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Apollo_Boardwalk_Stair6_C", "ExecuteUbergraph_Apollo_Boardwalk_Stair6");

	Params::Apollo_Boardwalk_Stair6_C_ExecuteUbergraph_Apollo_Boardwalk_Stair6 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Apollo_Boardwalk_Stair6.Apollo_Boardwalk_Stair6_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AApollo_Boardwalk_Stair6_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Apollo_Boardwalk_Stair6_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}

}

