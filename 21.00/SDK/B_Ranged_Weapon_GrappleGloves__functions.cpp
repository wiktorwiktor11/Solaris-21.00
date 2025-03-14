﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_Ranged_Weapon_GrappleGloves_

#include "Basic.hpp"

#include "B_Ranged_Weapon_GrappleGloves__classes.hpp"
#include "B_Ranged_Weapon_GrappleGloves__parameters.hpp"


namespace SDK
{

// Function B_Ranged_Weapon_GrappleGloves_.B_Ranged_Weapon_GrappleGloves__C.ActuallyApplyCooldown
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)

void AB_Ranged_Weapon_GrappleGloves__C::ActuallyApplyCooldown()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Ranged_Weapon_GrappleGloves__C", "ActuallyApplyCooldown");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_Ranged_Weapon_GrappleGloves_.B_Ranged_Weapon_GrappleGloves__C.Added_E4B7BAE646AA7B303765EF96D16EDEBF
// (BlueprintCallable, BlueprintEvent)

void AB_Ranged_Weapon_GrappleGloves__C::Added_E4B7BAE646AA7B303765EF96D16EDEBF()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Ranged_Weapon_GrappleGloves__C", "Added_E4B7BAE646AA7B303765EF96D16EDEBF");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_Ranged_Weapon_GrappleGloves_.B_Ranged_Weapon_GrappleGloves__C.ADS_Pressed
// (BlueprintCallable, BlueprintEvent)

void AB_Ranged_Weapon_GrappleGloves__C::ADS_Pressed()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Ranged_Weapon_GrappleGloves__C", "ADS_Pressed");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_Ranged_Weapon_GrappleGloves_.B_Ranged_Weapon_GrappleGloves__C.ADS_Released
// (BlueprintCallable, BlueprintEvent)

void AB_Ranged_Weapon_GrappleGloves__C::ADS_Released()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Ranged_Weapon_GrappleGloves__C", "ADS_Released");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_Ranged_Weapon_GrappleGloves_.B_Ranged_Weapon_GrappleGloves__C.AllowStopSwinging
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    OutputPin                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_Ranged_Weapon_GrappleGloves__C::AllowStopSwinging(bool* OutputPin)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Ranged_Weapon_GrappleGloves__C", "AllowStopSwinging");

	Params::B_Ranged_Weapon_GrappleGloves__C_AllowStopSwinging Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (OutputPin != nullptr)
		*OutputPin = Parms.OutputPin;
}


// Function B_Ranged_Weapon_GrappleGloves_.B_Ranged_Weapon_GrappleGloves__C.ApplyCooldown
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Force                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_Ranged_Weapon_GrappleGloves__C::ApplyCooldown(bool Force)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Ranged_Weapon_GrappleGloves__C", "ApplyCooldown");

	Params::B_Ranged_Weapon_GrappleGloves__C_ApplyCooldown Parms{};

	Parms.Force = Force;

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_Ranged_Weapon_GrappleGloves_.B_Ranged_Weapon_GrappleGloves__C.ApplyCooldownNow
// (BlueprintCallable, BlueprintEvent)

void AB_Ranged_Weapon_GrappleGloves__C::ApplyCooldownNow()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Ranged_Weapon_GrappleGloves__C", "ApplyCooldownNow");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_Ranged_Weapon_GrappleGloves_.B_Ranged_Weapon_GrappleGloves__C.CalculateChargeTime
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                                   Time                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_Ranged_Weapon_GrappleGloves__C::CalculateChargeTime(float* Time)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Ranged_Weapon_GrappleGloves__C", "CalculateChargeTime");

	Params::B_Ranged_Weapon_GrappleGloves__C_CalculateChargeTime Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Time != nullptr)
		*Time = Parms.Time;
}


// Function B_Ranged_Weapon_GrappleGloves_.B_Ranged_Weapon_GrappleGloves__C.CalculateCooldownTime
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                                   Output                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_Ranged_Weapon_GrappleGloves__C::CalculateCooldownTime(float* Output)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Ranged_Weapon_GrappleGloves__C", "CalculateCooldownTime");

	Params::B_Ranged_Weapon_GrappleGloves__C_CalculateCooldownTime Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Output != nullptr)
		*Output = Parms.Output;
}


// Function B_Ranged_Weapon_GrappleGloves_.B_Ranged_Weapon_GrappleGloves__C.CleanUpTimeOutAudio
// (BlueprintCallable, BlueprintEvent)

void AB_Ranged_Weapon_GrappleGloves__C::CleanUpTimeOutAudio()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Ranged_Weapon_GrappleGloves__C", "CleanUpTimeOutAudio");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_Ranged_Weapon_GrappleGloves_.B_Ranged_Weapon_GrappleGloves__C.ClearCooldownTimer
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)

void AB_Ranged_Weapon_GrappleGloves__C::ClearCooldownTimer()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Ranged_Weapon_GrappleGloves__C", "ClearCooldownTimer");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_Ranged_Weapon_GrappleGloves_.B_Ranged_Weapon_GrappleGloves__C.CorrectCooldownRaceCondition
// (Net, NetServer, BlueprintCallable, BlueprintEvent)

void AB_Ranged_Weapon_GrappleGloves__C::CorrectCooldownRaceCondition()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Ranged_Weapon_GrappleGloves__C", "CorrectCooldownRaceCondition");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_Ranged_Weapon_GrappleGloves_.B_Ranged_Weapon_GrappleGloves__C.DecreaseSpeedMulticast
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)

void AB_Ranged_Weapon_GrappleGloves__C::DecreaseSpeedMulticast()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Ranged_Weapon_GrappleGloves__C", "DecreaseSpeedMulticast");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_Ranged_Weapon_GrappleGloves_.B_Ranged_Weapon_GrappleGloves__C.ExecuteUbergraph_B_Ranged_Weapon_GrappleGloves_
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_Ranged_Weapon_GrappleGloves__C::ExecuteUbergraph_B_Ranged_Weapon_GrappleGloves_(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Ranged_Weapon_GrappleGloves__C", "ExecuteUbergraph_B_Ranged_Weapon_GrappleGloves_");

	Params::B_Ranged_Weapon_GrappleGloves__C_ExecuteUbergraph_B_Ranged_Weapon_GrappleGloves_ Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_Ranged_Weapon_GrappleGloves_.B_Ranged_Weapon_GrappleGloves__C.ExitSwinging
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    SkipRemovingSwingingGE                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_Ranged_Weapon_GrappleGloves__C::ExitSwinging(bool SkipRemovingSwingingGE)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Ranged_Weapon_GrappleGloves__C", "ExitSwinging");

	Params::B_Ranged_Weapon_GrappleGloves__C_ExitSwinging Parms{};

	Parms.SkipRemovingSwingingGE = SkipRemovingSwingingGE;

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_Ranged_Weapon_GrappleGloves_.B_Ranged_Weapon_GrappleGloves__C.FE_CooldownFX
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)

void AB_Ranged_Weapon_GrappleGloves__C::FE_CooldownFX()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Ranged_Weapon_GrappleGloves__C", "FE_CooldownFX");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_Ranged_Weapon_GrappleGloves_.B_Ranged_Weapon_GrappleGloves__C.Fire
// (BlueprintCallable, BlueprintEvent)

void AB_Ranged_Weapon_GrappleGloves__C::Fire()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Ranged_Weapon_GrappleGloves__C", "Fire");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_Ranged_Weapon_GrappleGloves_.B_Ranged_Weapon_GrappleGloves__C.FireReleased
// (BlueprintCallable, BlueprintEvent)

void AB_Ranged_Weapon_GrappleGloves__C::FireReleased()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Ranged_Weapon_GrappleGloves__C", "FireReleased");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_Ranged_Weapon_GrappleGloves_.B_Ranged_Weapon_GrappleGloves__C.ForceApplyCooldown
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)

void AB_Ranged_Weapon_GrappleGloves__C::ForceApplyCooldown()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Ranged_Weapon_GrappleGloves__C", "ForceApplyCooldown");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_Ranged_Weapon_GrappleGloves_.B_Ranged_Weapon_GrappleGloves__C.HandleDangleAudio
// (BlueprintCallable, BlueprintEvent)

void AB_Ranged_Weapon_GrappleGloves__C::HandleDangleAudio()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Ranged_Weapon_GrappleGloves__C", "HandleDangleAudio");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_Ranged_Weapon_GrappleGloves_.B_Ranged_Weapon_GrappleGloves__C.HandleTimeoutAudio
// (BlueprintCallable, BlueprintEvent)

void AB_Ranged_Weapon_GrappleGloves__C::HandleTimeoutAudio()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Ranged_Weapon_GrappleGloves__C", "HandleTimeoutAudio");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_Ranged_Weapon_GrappleGloves_.B_Ranged_Weapon_GrappleGloves__C.HandleTimeoutAudioStopped
// (BlueprintCallable, BlueprintEvent)

void AB_Ranged_Weapon_GrappleGloves__C::HandleTimeoutAudioStopped()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Ranged_Weapon_GrappleGloves__C", "HandleTimeoutAudioStopped");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_Ranged_Weapon_GrappleGloves_.B_Ranged_Weapon_GrappleGloves__C.InitialJumpMultiplier
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                                   OutputPin                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_Ranged_Weapon_GrappleGloves__C::InitialJumpMultiplier(float* OutputPin)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Ranged_Weapon_GrappleGloves__C", "InitialJumpMultiplier");

	Params::B_Ranged_Weapon_GrappleGloves__C_InitialJumpMultiplier Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (OutputPin != nullptr)
		*OutputPin = Parms.OutputPin;
}


// Function B_Ranged_Weapon_GrappleGloves_.B_Ranged_Weapon_GrappleGloves__C.JustTouchedGround
// (BlueprintCallable, BlueprintEvent)

void AB_Ranged_Weapon_GrappleGloves__C::JustTouchedGround()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Ranged_Weapon_GrappleGloves__C", "JustTouchedGround");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_Ranged_Weapon_GrappleGloves_.B_Ranged_Weapon_GrappleGloves__C.OnAttach
// (BlueprintCallable, BlueprintEvent)

void AB_Ranged_Weapon_GrappleGloves__C::OnAttach()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Ranged_Weapon_GrappleGloves__C", "OnAttach");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_Ranged_Weapon_GrappleGloves_.B_Ranged_Weapon_GrappleGloves__C.OnCooldownApplied
// (BlueprintCallable, BlueprintEvent)

void AB_Ranged_Weapon_GrappleGloves__C::OnCooldownApplied()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Ranged_Weapon_GrappleGloves__C", "OnCooldownApplied");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_Ranged_Weapon_GrappleGloves_.B_Ranged_Weapon_GrappleGloves__C.OnDetach
// (BlueprintCallable, BlueprintEvent)

void AB_Ranged_Weapon_GrappleGloves__C::OnDetach()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Ranged_Weapon_GrappleGloves__C", "OnDetach");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_Ranged_Weapon_GrappleGloves_.B_Ranged_Weapon_GrappleGloves__C.OnRopeStartFadeOut
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)

void AB_Ranged_Weapon_GrappleGloves__C::OnRopeStartFadeOut()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Ranged_Weapon_GrappleGloves__C", "OnRopeStartFadeOut");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_Ranged_Weapon_GrappleGloves_.B_Ranged_Weapon_GrappleGloves__C.OnSpawnProjectile
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AFortProjectileBase*              SpawnProjectile_0                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_Ranged_Weapon_GrappleGloves__C::OnSpawnProjectile(class AFortProjectileBase* SpawnProjectile_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Ranged_Weapon_GrappleGloves__C", "OnSpawnProjectile");

	Params::B_Ranged_Weapon_GrappleGloves__C_OnSpawnProjectile Parms{};

	Parms.SpawnProjectile_0 = SpawnProjectile_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_Ranged_Weapon_GrappleGloves_.B_Ranged_Weapon_GrappleGloves__C.OnWeaponAttached
// (Event, Public, BlueprintEvent)

void AB_Ranged_Weapon_GrappleGloves__C::OnWeaponAttached()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Ranged_Weapon_GrappleGloves__C", "OnWeaponAttached");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_Ranged_Weapon_GrappleGloves_.B_Ranged_Weapon_GrappleGloves__C.OnWeaponDetached
// (Event, Public, BlueprintEvent)

void AB_Ranged_Weapon_GrappleGloves__C::OnWeaponDetached()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Ranged_Weapon_GrappleGloves__C", "OnWeaponDetached");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_Ranged_Weapon_GrappleGloves_.B_Ranged_Weapon_GrappleGloves__C.Re-enableFiring
// (BlueprintCallable, BlueprintEvent)

void AB_Ranged_Weapon_GrappleGloves__C::Re_enableFiring()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Ranged_Weapon_GrappleGloves__C", "Re-enableFiring");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_Ranged_Weapon_GrappleGloves_.B_Ranged_Weapon_GrappleGloves__C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AB_Ranged_Weapon_GrappleGloves__C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Ranged_Weapon_GrappleGloves__C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_Ranged_Weapon_GrappleGloves_.B_Ranged_Weapon_GrappleGloves__C.Removed_268E961145EAEBFDD801ECBE7194AEF8
// (BlueprintCallable, BlueprintEvent)

void AB_Ranged_Weapon_GrappleGloves__C::Removed_268E961145EAEBFDD801ECBE7194AEF8()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Ranged_Weapon_GrappleGloves__C", "Removed_268E961145EAEBFDD801ECBE7194AEF8");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_Ranged_Weapon_GrappleGloves_.B_Ranged_Weapon_GrappleGloves__C.Removed_9652491549D81673ACC0A59692315F21
// (BlueprintCallable, BlueprintEvent)

void AB_Ranged_Weapon_GrappleGloves__C::Removed_9652491549D81673ACC0A59692315F21()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Ranged_Weapon_GrappleGloves__C", "Removed_9652491549D81673ACC0A59692315F21");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_Ranged_Weapon_GrappleGloves_.B_Ranged_Weapon_GrappleGloves__C.ResetHeat
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)

void AB_Ranged_Weapon_GrappleGloves__C::ResetHeat()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Ranged_Weapon_GrappleGloves__C", "ResetHeat");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_Ranged_Weapon_GrappleGloves_.B_Ranged_Weapon_GrappleGloves__C.SetRange
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   Range                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_Ranged_Weapon_GrappleGloves__C::SetRange(float Range)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Ranged_Weapon_GrappleGloves__C", "SetRange");

	Params::B_Ranged_Weapon_GrappleGloves__C_SetRange Parms{};

	Parms.Range = Range;

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_Ranged_Weapon_GrappleGloves_.B_Ranged_Weapon_GrappleGloves__C.SetState
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// EGrappleGlovesState                     State_0                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_Ranged_Weapon_GrappleGloves__C::SetState(EGrappleGlovesState State_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Ranged_Weapon_GrappleGloves__C", "SetState");

	Params::B_Ranged_Weapon_GrappleGloves__C_SetState Parms{};

	Parms.State_0 = State_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_Ranged_Weapon_GrappleGloves_.B_Ranged_Weapon_GrappleGloves__C.SetStateOff_Server
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)

void AB_Ranged_Weapon_GrappleGloves__C::SetStateOff_Server()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Ranged_Weapon_GrappleGloves__C", "SetStateOff_Server");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_Ranged_Weapon_GrappleGloves_.B_Ranged_Weapon_GrappleGloves__C.ShouldAutoSlide
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    Result                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_Ranged_Weapon_GrappleGloves__C::ShouldAutoSlide(bool* Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Ranged_Weapon_GrappleGloves__C", "ShouldAutoSlide");

	Params::B_Ranged_Weapon_GrappleGloves__C_ShouldAutoSlide Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;
}


// Function B_Ranged_Weapon_GrappleGloves_.B_Ranged_Weapon_GrappleGloves__C.ShouldDisableFiring
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    Result                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_Ranged_Weapon_GrappleGloves__C::ShouldDisableFiring(bool* Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Ranged_Weapon_GrappleGloves__C", "ShouldDisableFiring");

	Params::B_Ranged_Weapon_GrappleGloves__C_ShouldDisableFiring Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;
}


// Function B_Ranged_Weapon_GrappleGloves_.B_Ranged_Weapon_GrappleGloves__C.SlowerUpdate
// (BlueprintCallable, BlueprintEvent)

void AB_Ranged_Weapon_GrappleGloves__C::SlowerUpdate()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Ranged_Weapon_GrappleGloves__C", "SlowerUpdate");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_Ranged_Weapon_GrappleGloves_.B_Ranged_Weapon_GrappleGloves__C.SpawnAttachment
// (BlueprintCallable, BlueprintEvent)

void AB_Ranged_Weapon_GrappleGloves__C::SpawnAttachment()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Ranged_Weapon_GrappleGloves__C", "SpawnAttachment");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_Ranged_Weapon_GrappleGloves_.B_Ranged_Weapon_GrappleGloves__C.SpawnProjectile
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FHitResult                       TargetingHitResult_0                                   (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                                    FoundTarget                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    SpawnPrj                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_Ranged_Weapon_GrappleGloves__C::SpawnProjectile(const struct FHitResult& TargetingHitResult_0, bool FoundTarget, bool SpawnPrj)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Ranged_Weapon_GrappleGloves__C", "SpawnProjectile");

	Params::B_Ranged_Weapon_GrappleGloves__C_SpawnProjectile Parms{};

	Parms.TargetingHitResult_0 = std::move(TargetingHitResult_0);
	Parms.FoundTarget = FoundTarget;
	Parms.SpawnPrj = SpawnPrj;

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_Ranged_Weapon_GrappleGloves_.B_Ranged_Weapon_GrappleGloves__C.StartCharging
// (BlueprintCallable, BlueprintEvent)

void AB_Ranged_Weapon_GrappleGloves__C::StartCharging()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Ranged_Weapon_GrappleGloves__C", "StartCharging");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_Ranged_Weapon_GrappleGloves_.B_Ranged_Weapon_GrappleGloves__C.StartForgivenessTimer
// (BlueprintCallable, BlueprintEvent)

void AB_Ranged_Weapon_GrappleGloves__C::StartForgivenessTimer()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Ranged_Weapon_GrappleGloves__C", "StartForgivenessTimer");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_Ranged_Weapon_GrappleGloves_.B_Ranged_Weapon_GrappleGloves__C.StartForgivenessTimer_Multicast
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)

void AB_Ranged_Weapon_GrappleGloves__C::StartForgivenessTimer_Multicast()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Ranged_Weapon_GrappleGloves__C", "StartForgivenessTimer_Multicast");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_Ranged_Weapon_GrappleGloves_.B_Ranged_Weapon_GrappleGloves__C.StartTimeoutAudio
// (BlueprintCallable, BlueprintEvent)

void AB_Ranged_Weapon_GrappleGloves__C::StartTimeoutAudio()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Ranged_Weapon_GrappleGloves__C", "StartTimeoutAudio");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_Ranged_Weapon_GrappleGloves_.B_Ranged_Weapon_GrappleGloves__C.StartTimer_Server
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   Time                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   DistanceToTarget_0                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_Ranged_Weapon_GrappleGloves__C::StartTimer_Server(float Time, float DistanceToTarget_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Ranged_Weapon_GrappleGloves__C", "StartTimer_Server");

	Params::B_Ranged_Weapon_GrappleGloves__C_StartTimer_Server Parms{};

	Parms.Time = Time;
	Parms.DistanceToTarget_0 = DistanceToTarget_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_Ranged_Weapon_GrappleGloves_.B_Ranged_Weapon_GrappleGloves__C.StopCharging
// (BlueprintCallable, BlueprintEvent)

void AB_Ranged_Weapon_GrappleGloves__C::StopCharging()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Ranged_Weapon_GrappleGloves__C", "StopCharging");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_Ranged_Weapon_GrappleGloves_.B_Ranged_Weapon_GrappleGloves__C.TickCooldown
// (BlueprintCallable, BlueprintEvent)

void AB_Ranged_Weapon_GrappleGloves__C::TickCooldown()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Ranged_Weapon_GrappleGloves__C", "TickCooldown");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_Ranged_Weapon_GrappleGloves_.B_Ranged_Weapon_GrappleGloves__C.TickTimeoutSound
// (BlueprintCallable, BlueprintEvent)

void AB_Ranged_Weapon_GrappleGloves__C::TickTimeoutSound()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Ranged_Weapon_GrappleGloves__C", "TickTimeoutSound");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_Ranged_Weapon_GrappleGloves_.B_Ranged_Weapon_GrappleGloves__C.TryToCooldown
// (BlueprintCallable, BlueprintEvent)

void AB_Ranged_Weapon_GrappleGloves__C::TryToCooldown()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Ranged_Weapon_GrappleGloves__C", "TryToCooldown");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_Ranged_Weapon_GrappleGloves_.B_Ranged_Weapon_GrappleGloves__C.UnblockFiring_Multicast
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)

void AB_Ranged_Weapon_GrappleGloves__C::UnblockFiring_Multicast()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Ranged_Weapon_GrappleGloves__C", "UnblockFiring_Multicast");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_Ranged_Weapon_GrappleGloves_.B_Ranged_Weapon_GrappleGloves__C.UpdateReticleFromNative
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    HitSomething                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    BlockedUse                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    IsTargetAtAimLocation                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          TargetPosition                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_Ranged_Weapon_GrappleGloves__C::UpdateReticleFromNative(bool HitSomething, bool BlockedUse, bool IsTargetAtAimLocation, const struct FVector& TargetPosition)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Ranged_Weapon_GrappleGloves__C", "UpdateReticleFromNative");

	Params::B_Ranged_Weapon_GrappleGloves__C_UpdateReticleFromNative Parms{};

	Parms.HitSomething = HitSomething;
	Parms.BlockedUse = BlockedUse;
	Parms.IsTargetAtAimLocation = IsTargetAtAimLocation;
	Parms.TargetPosition = std::move(TargetPosition);

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_Ranged_Weapon_GrappleGloves_.B_Ranged_Weapon_GrappleGloves__C.UpdateSpeed
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSwingingControlParams           StructRef                                              (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void AB_Ranged_Weapon_GrappleGloves__C::UpdateSpeed(struct FSwingingControlParams& StructRef)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Ranged_Weapon_GrappleGloves__C", "UpdateSpeed");

	Params::B_Ranged_Weapon_GrappleGloves__C_UpdateSpeed Parms{};

	Parms.StructRef = std::move(StructRef);

	UObject::ProcessEvent(Func, &Parms);

	StructRef = std::move(Parms.StructRef);
}


// Function B_Ranged_Weapon_GrappleGloves_.B_Ranged_Weapon_GrappleGloves__C.UpdateSuperChargeState
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSwingingControlParams           StructRef                                              (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void AB_Ranged_Weapon_GrappleGloves__C::UpdateSuperChargeState(struct FSwingingControlParams& StructRef)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Ranged_Weapon_GrappleGloves__C", "UpdateSuperChargeState");

	Params::B_Ranged_Weapon_GrappleGloves__C_UpdateSuperChargeState Parms{};

	Parms.StructRef = std::move(StructRef);

	UObject::ProcessEvent(Func, &Parms);

	StructRef = std::move(Parms.StructRef);
}

}

