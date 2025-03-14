﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SoccerballSpawner

#include "Basic.hpp"

#include "SoccerballSpawner_classes.hpp"
#include "SoccerballSpawner_parameters.hpp"


namespace SDK
{

// Function SoccerballSpawner.SoccerballSpawner_C.ExecuteUbergraph_SoccerballSpawner
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ASoccerballSpawner_C::ExecuteUbergraph_SoccerballSpawner(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SoccerballSpawner_C", "ExecuteUbergraph_SoccerballSpawner");

	Params::SoccerballSpawner_C_ExecuteUbergraph_SoccerballSpawner Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SoccerballSpawner.SoccerballSpawner_C.ReceiveActorBeginOverlap
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor*                           OtherActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ASoccerballSpawner_C::ReceiveActorBeginOverlap(class AActor* OtherActor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SoccerballSpawner_C", "ReceiveActorBeginOverlap");

	Params::SoccerballSpawner_C_ReceiveActorBeginOverlap Parms{};

	Parms.OtherActor = OtherActor;

	UObject::ProcessEvent(Func, &Parms);
}

}

