﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Lamp01

#include "Basic.hpp"

#include "Lamp01_classes.hpp"
#include "Lamp01_parameters.hpp"


namespace SDK
{

// Function Lamp01.Lamp01_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ALamp01_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Lamp01_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}

}

