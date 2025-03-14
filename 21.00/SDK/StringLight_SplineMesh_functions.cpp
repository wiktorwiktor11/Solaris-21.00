﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: StringLight_SplineMesh

#include "Basic.hpp"

#include "StringLight_SplineMesh_classes.hpp"
#include "StringLight_SplineMesh_parameters.hpp"


namespace SDK
{

// Function StringLight_SplineMesh.StringLight_SplineMesh_C.ExecuteUbergraph_StringLight_SplineMesh
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AStringLight_SplineMesh_C::ExecuteUbergraph_StringLight_SplineMesh(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StringLight_SplineMesh_C", "ExecuteUbergraph_StringLight_SplineMesh");

	Params::StringLight_SplineMesh_C_ExecuteUbergraph_StringLight_SplineMesh Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function StringLight_SplineMesh.StringLight_SplineMesh_C.IReallyDied
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

void AStringLight_SplineMesh_C::IReallyDied(class AActor* DamagedActor, float Damage, class AController* InstigatedBy, class AActor* DamageCauser, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, class FName BoneName, const struct FVector& Momentum)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StringLight_SplineMesh_C", "IReallyDied");

	Params::StringLight_SplineMesh_C_IReallyDied Parms{};

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


// Function StringLight_SplineMesh.StringLight_SplineMesh_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AStringLight_SplineMesh_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StringLight_SplineMesh_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function StringLight_SplineMesh.StringLight_SplineMesh_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AStringLight_SplineMesh_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StringLight_SplineMesh_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}


// Function StringLight_SplineMesh.StringLight_SplineMesh_C.ValidateSplineMesh
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AStringLight_SplineMesh_C::ValidateSplineMesh()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StringLight_SplineMesh_C", "ValidateSplineMesh");

	UObject::ProcessEvent(Func, nullptr);
}

}

