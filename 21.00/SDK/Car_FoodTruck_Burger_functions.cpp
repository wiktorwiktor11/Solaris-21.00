﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Car_FoodTruck_Burger

#include "Basic.hpp"

#include "Car_FoodTruck_Burger_classes.hpp"
#include "Car_FoodTruck_Burger_parameters.hpp"


namespace SDK
{

// Function Car_FoodTruck_Burger.Car_FoodTruck_Burger_C.ExecuteUbergraph_Car_FoodTruck_Burger
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ACar_FoodTruck_Burger_C::ExecuteUbergraph_Car_FoodTruck_Burger(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Car_FoodTruck_Burger_C", "ExecuteUbergraph_Car_FoodTruck_Burger");

	Params::Car_FoodTruck_Burger_C_ExecuteUbergraph_Car_FoodTruck_Burger Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Car_FoodTruck_Burger.Car_FoodTruck_Burger_C.toggle light visibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bNewVisibility                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ACar_FoodTruck_Burger_C::toggle_light_visibility(bool bNewVisibility)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Car_FoodTruck_Burger_C", "toggle light visibility");

	Params::Car_FoodTruck_Burger_C_toggle_light_visibility Parms{};

	Parms.bNewVisibility = bNewVisibility;

	UObject::ProcessEvent(Func, &Parms);
}

}

