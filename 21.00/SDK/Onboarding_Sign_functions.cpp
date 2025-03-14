﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Onboarding_Sign

#include "Basic.hpp"

#include "Onboarding_Sign_classes.hpp"
#include "Onboarding_Sign_parameters.hpp"


namespace SDK
{

// Function Onboarding_Sign.Onboarding_Sign_C.ExecuteUbergraph_Onboarding_Sign
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AOnboarding_Sign_C::ExecuteUbergraph_Onboarding_Sign(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Onboarding_Sign_C", "ExecuteUbergraph_Onboarding_Sign");

	Params::Onboarding_Sign_C_ExecuteUbergraph_Onboarding_Sign Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Onboarding_Sign.Onboarding_Sign_C.HandleMissionEvent_OBJ_8_Activate
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGuid                            InMissionGuid                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer            ObjectiveHandle                                        (BlueprintVisible, BlueprintReadOnly, Parm)
// class UFortMissionEventParams*          Params_0                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    DO_NOT_USE_THIS_OR_VARIABLES_BELOW                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          EventFocus                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDataAsset*                       EventContent                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           EventInstigator                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   GenericInt                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   GenericFloat                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                             GenericText                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayTagContainer            GameplayTags                                           (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FFortMissionEvent                MissionEvent                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void AOnboarding_Sign_C::HandleMissionEvent_OBJ_8_Activate(const struct FGuid& InMissionGuid, const struct FGameplayTagContainer& ObjectiveHandle, class UFortMissionEventParams* Params_0, bool DO_NOT_USE_THIS_OR_VARIABLES_BELOW, class UObject* EventFocus, const class UDataAsset* EventContent, class AActor* EventInstigator, int32 GenericInt, float GenericFloat, const class FText& GenericText, const struct FGameplayTagContainer& GameplayTags, const struct FFortMissionEvent& MissionEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Onboarding_Sign_C", "HandleMissionEvent_OBJ_8_Activate");

	Params::Onboarding_Sign_C_HandleMissionEvent_OBJ_8_Activate Parms{};

	Parms.InMissionGuid = std::move(InMissionGuid);
	Parms.ObjectiveHandle = std::move(ObjectiveHandle);
	Parms.Params_0 = Params_0;
	Parms.DO_NOT_USE_THIS_OR_VARIABLES_BELOW = DO_NOT_USE_THIS_OR_VARIABLES_BELOW;
	Parms.EventFocus = EventFocus;
	Parms.EventContent = EventContent;
	Parms.EventInstigator = EventInstigator;
	Parms.GenericInt = GenericInt;
	Parms.GenericFloat = GenericFloat;
	Parms.GenericText = std::move(GenericText);
	Parms.GameplayTags = std::move(GameplayTags);
	Parms.MissionEvent = std::move(MissionEvent);

	UObject::ProcessEvent(Func, &Parms);
}


// Function Onboarding_Sign.Onboarding_Sign_C.OnRep_Glow
// (BlueprintCallable, BlueprintEvent)

void AOnboarding_Sign_C::OnRep_Glow()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Onboarding_Sign_C", "OnRep_Glow");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Onboarding_Sign.Onboarding_Sign_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AOnboarding_Sign_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Onboarding_Sign_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}

}

