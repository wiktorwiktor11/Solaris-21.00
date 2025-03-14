﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ButterBarn_Audio_PA_Receiver

#include "Basic.hpp"

#include "ButterBarn_Audio_PA_Receiver_classes.hpp"
#include "ButterBarn_Audio_PA_Receiver_parameters.hpp"


namespace SDK
{

// Function ButterBarn_Audio_PA_Receiver.ButterBarn_Audio_PA_Receiver_C.ExecuteUbergraph_ButterBarn_Audio_PA_Receiver
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AButterBarn_Audio_PA_Receiver_C::ExecuteUbergraph_ButterBarn_Audio_PA_Receiver(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ButterBarn_Audio_PA_Receiver_C", "ExecuteUbergraph_ButterBarn_Audio_PA_Receiver");

	Params::ButterBarn_Audio_PA_Receiver_C_ExecuteUbergraph_ButterBarn_Audio_PA_Receiver Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ButterBarn_Audio_PA_Receiver.ButterBarn_Audio_PA_Receiver_C.On Owner Destroyed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           DestroyedActor                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AButterBarn_Audio_PA_Receiver_C::On_Owner_Destroyed(class AActor* DestroyedActor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ButterBarn_Audio_PA_Receiver_C", "On Owner Destroyed");

	Params::ButterBarn_Audio_PA_Receiver_C_On_Owner_Destroyed Parms{};

	Parms.DestroyedActor = DestroyedActor;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ButterBarn_Audio_PA_Receiver.ButterBarn_Audio_PA_Receiver_C.On Owner Died
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           DamagedActor                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   Damage                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AController*                      InstigatedBy                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           DamageCauser                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          HitLocation                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*              FHitComponent                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                             BoneName                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          Momentum                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AButterBarn_Audio_PA_Receiver_C::On_Owner_Died(class AActor* DamagedActor, float Damage, class AController* InstigatedBy, class AActor* DamageCauser, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, class FName BoneName, const struct FVector& Momentum)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ButterBarn_Audio_PA_Receiver_C", "On Owner Died");

	Params::ButterBarn_Audio_PA_Receiver_C_On_Owner_Died Parms{};

	Parms.DamagedActor = DamagedActor;
	Parms.Damage = Damage;
	Parms.InstigatedBy = InstigatedBy;
	Parms.DamageCauser = DamageCauser;
	Parms.HitLocation = std::move(HitLocation);
	Parms.FHitComponent = FHitComponent;
	Parms.BoneName = BoneName;
	Parms.Momentum = std::move(Momentum);

	UObject::ProcessEvent(Func, &Parms);
}


// Function ButterBarn_Audio_PA_Receiver.ButterBarn_Audio_PA_Receiver_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AButterBarn_Audio_PA_Receiver_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ButterBarn_Audio_PA_Receiver_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ButterBarn_Audio_PA_Receiver.ButterBarn_Audio_PA_Receiver_C.ReceiveEndPlay
// (Event, Protected, BlueprintEvent)
// Parameters:
// EEndPlayReason                          EndPlayReason                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AButterBarn_Audio_PA_Receiver_C::ReceiveEndPlay(EEndPlayReason EndPlayReason)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ButterBarn_Audio_PA_Receiver_C", "ReceiveEndPlay");

	Params::ButterBarn_Audio_PA_Receiver_C_ReceiveEndPlay Parms{};

	Parms.EndPlayReason = EndPlayReason;

	UObject::ProcessEvent(Func, &Parms);
}

}

