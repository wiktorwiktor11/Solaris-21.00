﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Apollo_TheOrder_Antennae

#include "Basic.hpp"

#include "Apollo_TheOrder_Antennae_classes.hpp"
#include "Apollo_TheOrder_Antennae_parameters.hpp"


namespace SDK
{

// Function Apollo_TheOrder_Antennae.Apollo_TheOrder_Antennae_C.ExecuteUbergraph_Apollo_TheOrder_Antennae
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AApollo_TheOrder_Antennae_C::ExecuteUbergraph_Apollo_TheOrder_Antennae(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Apollo_TheOrder_Antennae_C", "ExecuteUbergraph_Apollo_TheOrder_Antennae");

	Params::Apollo_TheOrder_Antennae_C_ExecuteUbergraph_Apollo_TheOrder_Antennae Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Apollo_TheOrder_Antennae.Apollo_TheOrder_Antennae_C.OnBeginSearch
// (BlueprintCallable, BlueprintEvent)

void AApollo_TheOrder_Antennae_C::OnBeginSearch()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Apollo_TheOrder_Antennae_C", "OnBeginSearch");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Apollo_TheOrder_Antennae.Apollo_TheOrder_Antennae_C.OnLootRepeat
// (BlueprintCallable, BlueprintEvent)

void AApollo_TheOrder_Antennae_C::OnLootRepeat()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Apollo_TheOrder_Antennae_C", "OnLootRepeat");

	UObject::ProcessEvent(Func, nullptr);
}

}

