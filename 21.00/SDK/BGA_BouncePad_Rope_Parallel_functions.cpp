﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BGA_BouncePad_Rope_Parallel

#include "Basic.hpp"

#include "BGA_BouncePad_Rope_Parallel_classes.hpp"
#include "BGA_BouncePad_Rope_Parallel_parameters.hpp"


namespace SDK
{

// Function BGA_BouncePad_Rope_Parallel.BGA_BouncePad_Rope_Parallel_C.BndEvt__BGA_BouncePad_Rope_Parallel_FortLinkToActor_K2Node_ComponentBoundEvent_0_OnLinkedActorDestroyed__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class AActor*                           DamageCauser                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABGA_BouncePad_Rope_Parallel_C::BndEvt__BGA_BouncePad_Rope_Parallel_FortLinkToActor_K2Node_ComponentBoundEvent_0_OnLinkedActorDestroyed__DelegateSignature(class AActor* DamageCauser)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_BouncePad_Rope_Parallel_C", "BndEvt__BGA_BouncePad_Rope_Parallel_FortLinkToActor_K2Node_ComponentBoundEvent_0_OnLinkedActorDestroyed__DelegateSignature");

	Params::BGA_BouncePad_Rope_Parallel_C_BndEvt__BGA_BouncePad_Rope_Parallel_FortLinkToActor_K2Node_ComponentBoundEvent_0_OnLinkedActorDestroyed__DelegateSignature Parms{};

	Parms.DamageCauser = DamageCauser;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BGA_BouncePad_Rope_Parallel.BGA_BouncePad_Rope_Parallel_C.CalculateClosestSockets
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class FName>                     Socketlist_names1                                      (Parm, OutParm)

void ABGA_BouncePad_Rope_Parallel_C::CalculateClosestSockets(TArray<class FName>* Socketlist_names1)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_BouncePad_Rope_Parallel_C", "CalculateClosestSockets");

	Params::BGA_BouncePad_Rope_Parallel_C_CalculateClosestSockets Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Socketlist_names1 != nullptr)
		*Socketlist_names1 = std::move(Parms.Socketlist_names1);
}


// Function BGA_BouncePad_Rope_Parallel.BGA_BouncePad_Rope_Parallel_C.ConnectToSpiderweb
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABGA_BouncePad_Rope_Parallel_C::ConnectToSpiderweb()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_BouncePad_Rope_Parallel_C", "ConnectToSpiderweb");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BGA_BouncePad_Rope_Parallel.BGA_BouncePad_Rope_Parallel_C.ExecuteUbergraph_BGA_BouncePad_Rope_Parallel
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABGA_BouncePad_Rope_Parallel_C::ExecuteUbergraph_BGA_BouncePad_Rope_Parallel(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_BouncePad_Rope_Parallel_C", "ExecuteUbergraph_BGA_BouncePad_Rope_Parallel");

	Params::BGA_BouncePad_Rope_Parallel_C_ExecuteUbergraph_BGA_BouncePad_Rope_Parallel Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BGA_BouncePad_Rope_Parallel.BGA_BouncePad_Rope_Parallel_C.GetConnectedSocketLocation
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                          Left                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          Center                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          Right                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                             Center_Socket                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                             Left_Socket                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                             Right_Socket                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABGA_BouncePad_Rope_Parallel_C::GetConnectedSocketLocation(struct FVector* Left, struct FVector* Center, struct FVector* Right, class FName* Center_Socket, class FName* Left_Socket, class FName* Right_Socket)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_BouncePad_Rope_Parallel_C", "GetConnectedSocketLocation");

	Params::BGA_BouncePad_Rope_Parallel_C_GetConnectedSocketLocation Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Left != nullptr)
		*Left = std::move(Parms.Left);

	if (Center != nullptr)
		*Center = std::move(Parms.Center);

	if (Right != nullptr)
		*Right = std::move(Parms.Right);

	if (Center_Socket != nullptr)
		*Center_Socket = Parms.Center_Socket;

	if (Left_Socket != nullptr)
		*Left_Socket = Parms.Left_Socket;

	if (Right_Socket != nullptr)
		*Right_Socket = Parms.Right_Socket;
}


// Function BGA_BouncePad_Rope_Parallel.BGA_BouncePad_Rope_Parallel_C.SetMaterialParameters
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   MaxRadiusWPO                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          WindPlaneVector                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          CenterLocationWS                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          Direction                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   MasterScale                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABGA_BouncePad_Rope_Parallel_C::SetMaterialParameters(float MaxRadiusWPO, const struct FVector& WindPlaneVector, const struct FVector& CenterLocationWS, const struct FVector& Direction, float MasterScale)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_BouncePad_Rope_Parallel_C", "SetMaterialParameters");

	Params::BGA_BouncePad_Rope_Parallel_C_SetMaterialParameters Parms{};

	Parms.MaxRadiusWPO = MaxRadiusWPO;
	Parms.WindPlaneVector = std::move(WindPlaneVector);
	Parms.CenterLocationWS = std::move(CenterLocationWS);
	Parms.Direction = std::move(Direction);
	Parms.MasterScale = MasterScale;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BGA_BouncePad_Rope_Parallel.BGA_BouncePad_Rope_Parallel_C.UpdateConnection
// (Public, BlueprintCallable, BlueprintEvent)

void ABGA_BouncePad_Rope_Parallel_C::UpdateConnection()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_BouncePad_Rope_Parallel_C", "UpdateConnection");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BGA_BouncePad_Rope_Parallel.BGA_BouncePad_Rope_Parallel_C.UpdateMaterialOnBounce
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                          BouncePosition                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   BounceIntensity                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   GameTimeinSeconds                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABGA_BouncePad_Rope_Parallel_C::UpdateMaterialOnBounce(const struct FVector& BouncePosition, float BounceIntensity, float GameTimeinSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_BouncePad_Rope_Parallel_C", "UpdateMaterialOnBounce");

	Params::BGA_BouncePad_Rope_Parallel_C_UpdateMaterialOnBounce Parms{};

	Parms.BouncePosition = std::move(BouncePosition);
	Parms.BounceIntensity = BounceIntensity;
	Parms.GameTimeinSeconds = GameTimeinSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BGA_BouncePad_Rope_Parallel.BGA_BouncePad_Rope_Parallel_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABGA_BouncePad_Rope_Parallel_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_BouncePad_Rope_Parallel_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}

}

