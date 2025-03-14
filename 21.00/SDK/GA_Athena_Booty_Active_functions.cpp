﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Athena_Booty_Active

#include "Basic.hpp"

#include "GA_Athena_Booty_Active_classes.hpp"
#include "GA_Athena_Booty_Active_parameters.hpp"


namespace SDK
{

// Function GA_Athena_Booty_Active.GA_Athena_Booty_Active_C.AutoTriggerDirectionalMarker
// (BlueprintCallable, BlueprintEvent)

void UGA_Athena_Booty_Active_C::AutoTriggerDirectionalMarker()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Athena_Booty_Active_C", "AutoTriggerDirectionalMarker");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_Athena_Booty_Active.GA_Athena_Booty_Active_C.CheckCreative
// (Public, BlueprintCallable, BlueprintEvent)

void UGA_Athena_Booty_Active_C::CheckCreative()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Athena_Booty_Active_C", "CheckCreative");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_Athena_Booty_Active.GA_Athena_Booty_Active_C.CheckForValidLoc
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                          Location                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Index_0                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    HitValidActor                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Athena_Booty_Active_C::CheckForValidLoc(const struct FVector& Location, int32 Index_0, bool* HitValidActor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Athena_Booty_Active_C", "CheckForValidLoc");

	Params::GA_Athena_Booty_Active_C_CheckForValidLoc Parms{};

	Parms.Location = std::move(Location);
	Parms.Index_0 = Index_0;

	UObject::ProcessEvent(Func, &Parms);

	if (HitValidActor != nullptr)
		*HitValidActor = Parms.HitValidActor;
}


// Function GA_Athena_Booty_Active.GA_Athena_Booty_Active_C.CheckIfMapEquipped
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    MapEquipped                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Athena_Booty_Active_C::CheckIfMapEquipped(bool* MapEquipped)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Athena_Booty_Active_C", "CheckIfMapEquipped");

	Params::GA_Athena_Booty_Active_C_CheckIfMapEquipped Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (MapEquipped != nullptr)
		*MapEquipped = Parms.MapEquipped;
}


// Function GA_Athena_Booty_Active.GA_Athena_Booty_Active_C.CleanAndEndAbility
// (BlueprintCallable, BlueprintEvent)

void UGA_Athena_Booty_Active_C::CleanAndEndAbility()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Athena_Booty_Active_C", "CleanAndEndAbility");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_Athena_Booty_Active.GA_Athena_Booty_Active_C.ClientKillMarker
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)

void UGA_Athena_Booty_Active_C::ClientKillMarker()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Athena_Booty_Active_C", "ClientKillMarker");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_Athena_Booty_Active.GA_Athena_Booty_Active_C.ClientSpawnDirectionalParticle
// (Net, NetClient, BlueprintCallable, BlueprintEvent)

void UGA_Athena_Booty_Active_C::ClientSpawnDirectionalParticle()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Athena_Booty_Active_C", "ClientSpawnDirectionalParticle");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_Athena_Booty_Active.GA_Athena_Booty_Active_C.EndDirectionalMarkerTimer
// (BlueprintCallable, BlueprintEvent)

void UGA_Athena_Booty_Active_C::EndDirectionalMarkerTimer()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Athena_Booty_Active_C", "EndDirectionalMarkerTimer");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_Athena_Booty_Active.GA_Athena_Booty_Active_C.EQS Finished
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UEnvQueryInstanceBlueprintWrapper*QueryInstance                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EEnvQueryStatus                         QueryStatus                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Athena_Booty_Active_C::EQS_Finished(class UEnvQueryInstanceBlueprintWrapper* QueryInstance, EEnvQueryStatus QueryStatus)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Athena_Booty_Active_C", "EQS Finished");

	Params::GA_Athena_Booty_Active_C_EQS_Finished Parms{};

	Parms.QueryInstance = QueryInstance;
	Parms.QueryStatus = QueryStatus;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_Athena_Booty_Active.GA_Athena_Booty_Active_C.EventReceived_56A5C3424CC753390287B7992353AB78
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayEventData               Payload                                                (BlueprintVisible, BlueprintReadOnly, Parm)

void UGA_Athena_Booty_Active_C::EventReceived_56A5C3424CC753390287B7992353AB78(const struct FGameplayEventData& Payload)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Athena_Booty_Active_C", "EventReceived_56A5C3424CC753390287B7992353AB78");

	Params::GA_Athena_Booty_Active_C_EventReceived_56A5C3424CC753390287B7992353AB78 Parms{};

	Parms.Payload = std::move(Payload);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_Athena_Booty_Active.GA_Athena_Booty_Active_C.EventReceived_6C658CA0494656CA7C653C87337DFE16
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayEventData               Payload                                                (BlueprintVisible, BlueprintReadOnly, Parm)

void UGA_Athena_Booty_Active_C::EventReceived_6C658CA0494656CA7C653C87337DFE16(const struct FGameplayEventData& Payload)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Athena_Booty_Active_C", "EventReceived_6C658CA0494656CA7C653C87337DFE16");

	Params::GA_Athena_Booty_Active_C_EventReceived_6C658CA0494656CA7C653C87337DFE16 Parms{};

	Parms.Payload = std::move(Payload);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_Athena_Booty_Active.GA_Athena_Booty_Active_C.EventReceived_8DF61E954DBAB2322994A89D4A286438
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayEventData               Payload                                                (BlueprintVisible, BlueprintReadOnly, Parm)

void UGA_Athena_Booty_Active_C::EventReceived_8DF61E954DBAB2322994A89D4A286438(const struct FGameplayEventData& Payload)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Athena_Booty_Active_C", "EventReceived_8DF61E954DBAB2322994A89D4A286438");

	Params::GA_Athena_Booty_Active_C_EventReceived_8DF61E954DBAB2322994A89D4A286438 Parms{};

	Parms.Payload = std::move(Payload);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_Athena_Booty_Active.GA_Athena_Booty_Active_C.EventReceived_93DFCF6540A9FA0E487FC6BB235561E8
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayEventData               Payload                                                (BlueprintVisible, BlueprintReadOnly, Parm)

void UGA_Athena_Booty_Active_C::EventReceived_93DFCF6540A9FA0E487FC6BB235561E8(const struct FGameplayEventData& Payload)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Athena_Booty_Active_C", "EventReceived_93DFCF6540A9FA0E487FC6BB235561E8");

	Params::GA_Athena_Booty_Active_C_EventReceived_93DFCF6540A9FA0E487FC6BB235561E8 Parms{};

	Parms.Payload = std::move(Payload);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_Athena_Booty_Active.GA_Athena_Booty_Active_C.EventReceived_975793F6410FC23AA54412BF0652F860
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayEventData               Payload                                                (BlueprintVisible, BlueprintReadOnly, Parm)

void UGA_Athena_Booty_Active_C::EventReceived_975793F6410FC23AA54412BF0652F860(const struct FGameplayEventData& Payload)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Athena_Booty_Active_C", "EventReceived_975793F6410FC23AA54412BF0652F860");

	Params::GA_Athena_Booty_Active_C_EventReceived_975793F6410FC23AA54412BF0652F860 Parms{};

	Parms.Payload = std::move(Payload);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_Athena_Booty_Active.GA_Athena_Booty_Active_C.EventReceived_AA34C2DC4DCAE64BE17A3A84AE9870E7
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayEventData               Payload                                                (BlueprintVisible, BlueprintReadOnly, Parm)

void UGA_Athena_Booty_Active_C::EventReceived_AA34C2DC4DCAE64BE17A3A84AE9870E7(const struct FGameplayEventData& Payload)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Athena_Booty_Active_C", "EventReceived_AA34C2DC4DCAE64BE17A3A84AE9870E7");

	Params::GA_Athena_Booty_Active_C_EventReceived_AA34C2DC4DCAE64BE17A3A84AE9870E7 Parms{};

	Parms.Payload = std::move(Payload);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_Athena_Booty_Active.GA_Athena_Booty_Active_C.EventReceived_B299FF8241F2919701242A8492FAFE36
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayEventData               Payload                                                (BlueprintVisible, BlueprintReadOnly, Parm)

void UGA_Athena_Booty_Active_C::EventReceived_B299FF8241F2919701242A8492FAFE36(const struct FGameplayEventData& Payload)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Athena_Booty_Active_C", "EventReceived_B299FF8241F2919701242A8492FAFE36");

	Params::GA_Athena_Booty_Active_C_EventReceived_B299FF8241F2919701242A8492FAFE36 Parms{};

	Parms.Payload = std::move(Payload);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_Athena_Booty_Active.GA_Athena_Booty_Active_C.EventReceived_D3DEC61B4DF9F77608633EB12160B6EE
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayEventData               Payload                                                (BlueprintVisible, BlueprintReadOnly, Parm)

void UGA_Athena_Booty_Active_C::EventReceived_D3DEC61B4DF9F77608633EB12160B6EE(const struct FGameplayEventData& Payload)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Athena_Booty_Active_C", "EventReceived_D3DEC61B4DF9F77608633EB12160B6EE");

	Params::GA_Athena_Booty_Active_C_EventReceived_D3DEC61B4DF9F77608633EB12160B6EE Parms{};

	Parms.Payload = std::move(Payload);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_Athena_Booty_Active.GA_Athena_Booty_Active_C.EventReceived_F684FC3943A4405DB3C2E8A8B930975D
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayEventData               Payload                                                (BlueprintVisible, BlueprintReadOnly, Parm)

void UGA_Athena_Booty_Active_C::EventReceived_F684FC3943A4405DB3C2E8A8B930975D(const struct FGameplayEventData& Payload)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Athena_Booty_Active_C", "EventReceived_F684FC3943A4405DB3C2E8A8B930975D");

	Params::GA_Athena_Booty_Active_C_EventReceived_F684FC3943A4405DB3C2E8A8B930975D Parms{};

	Parms.Payload = std::move(Payload);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_Athena_Booty_Active.GA_Athena_Booty_Active_C.ExecuteUbergraph_GA_Athena_Booty_Active
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Athena_Booty_Active_C::ExecuteUbergraph_GA_Athena_Booty_Active(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Athena_Booty_Active_C", "ExecuteUbergraph_GA_Athena_Booty_Active");

	Params::GA_Athena_Booty_Active_C_ExecuteUbergraph_GA_Athena_Booty_Active Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_Athena_Booty_Active.GA_Athena_Booty_Active_C.FailedToActivatePassiveAbility
// (Event, Public, BlueprintEvent)

void UGA_Athena_Booty_Active_C::FailedToActivatePassiveAbility()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Athena_Booty_Active_C", "FailedToActivatePassiveAbility");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_Athena_Booty_Active.GA_Athena_Booty_Active_C.HandleSwap
// (BlueprintCallable, BlueprintEvent)

void UGA_Athena_Booty_Active_C::HandleSwap()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Athena_Booty_Active_C", "HandleSwap");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_Athena_Booty_Active.GA_Athena_Booty_Active_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)

void UGA_Athena_Booty_Active_C::K2_ActivateAbility()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Athena_Booty_Active_C", "K2_ActivateAbility");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_Athena_Booty_Active.GA_Athena_Booty_Active_C.K2_OnEndAbility
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                                    bWasCancelled                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Athena_Booty_Active_C::K2_OnEndAbility(bool bWasCancelled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Athena_Booty_Active_C", "K2_OnEndAbility");

	Params::GA_Athena_Booty_Active_C_K2_OnEndAbility Parms{};

	Parms.bWasCancelled = bWasCancelled;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_Athena_Booty_Active.GA_Athena_Booty_Active_C.LootTaken
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)

void UGA_Athena_Booty_Active_C::LootTaken()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Athena_Booty_Active_C", "LootTaken");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_Athena_Booty_Active.GA_Athena_Booty_Active_C.NewChestIncoming
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AProp_Athena_Booty_C*             NewPropIn                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Athena_Booty_Active_C::NewChestIncoming(class AProp_Athena_Booty_C* NewPropIn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Athena_Booty_Active_C", "NewChestIncoming");

	Params::GA_Athena_Booty_Active_C_NewChestIncoming Parms{};

	Parms.NewPropIn = NewPropIn;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_Athena_Booty_Active.GA_Athena_Booty_Active_C.OnPickupCreated
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortPlayerController*            PlayerController                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPickup*                      PickUp                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Athena_Booty_Active_C::OnPickupCreated(const class AFortPlayerController* PlayerController, class AFortPickup* PickUp)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Athena_Booty_Active_C", "OnPickupCreated");

	Params::GA_Athena_Booty_Active_C_OnPickupCreated Parms{};

	Parms.PlayerController = PlayerController;
	Parms.PickUp = PickUp;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_Athena_Booty_Active.GA_Athena_Booty_Active_C.SaveOutPlayer
// (Public, BlueprintCallable, BlueprintEvent)

void UGA_Athena_Booty_Active_C::SaveOutPlayer()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Athena_Booty_Active_C", "SaveOutPlayer");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_Athena_Booty_Active.GA_Athena_Booty_Active_C.SeatChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   SeatIndex                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Athena_Booty_Active_C::SeatChanged(int32 SeatIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Athena_Booty_Active_C", "SeatChanged");

	Params::GA_Athena_Booty_Active_C_SeatChanged Parms{};

	Parms.SeatIndex = SeatIndex;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_Athena_Booty_Active.GA_Athena_Booty_Active_C.SpawnChest
// (BlueprintCallable, BlueprintEvent)

void UGA_Athena_Booty_Active_C::SpawnChest()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Athena_Booty_Active_C", "SpawnChest");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_Athena_Booty_Active.GA_Athena_Booty_Active_C.SpawnChestAfterTime
// (BlueprintCallable, BlueprintEvent)

void UGA_Athena_Booty_Active_C::SpawnChestAfterTime()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Athena_Booty_Active_C", "SpawnChestAfterTime");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_Athena_Booty_Active.GA_Athena_Booty_Active_C.SpawnMarkerOnClient
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTransform                       Transform                                              (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)

void UGA_Athena_Booty_Active_C::SpawnMarkerOnClient(const struct FTransform& Transform)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Athena_Booty_Active_C", "SpawnMarkerOnClient");

	Params::GA_Athena_Booty_Active_C_SpawnMarkerOnClient Parms{};

	Parms.Transform = std::move(Transform);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_Athena_Booty_Active.GA_Athena_Booty_Active_C.SpawnNewMap
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortPickup*                      DroppedItem                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Athena_Booty_Active_C::SpawnNewMap(class AFortPickup* DroppedItem)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Athena_Booty_Active_C", "SpawnNewMap");

	Params::GA_Athena_Booty_Active_C_SpawnNewMap Parms{};

	Parms.DroppedItem = DroppedItem;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_Athena_Booty_Active.GA_Athena_Booty_Active_C.StartDirectionalMarkerTimer
// (BlueprintCallable, BlueprintEvent)

void UGA_Athena_Booty_Active_C::StartDirectionalMarkerTimer()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Athena_Booty_Active_C", "StartDirectionalMarkerTimer");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_Athena_Booty_Active.GA_Athena_Booty_Active_C.ToggleHideClientSkyMarker
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Hide                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Athena_Booty_Active_C::ToggleHideClientSkyMarker(bool Hide)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Athena_Booty_Active_C", "ToggleHideClientSkyMarker");

	Params::GA_Athena_Booty_Active_C_ToggleHideClientSkyMarker Parms{};

	Parms.Hide = Hide;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_Athena_Booty_Active.GA_Athena_Booty_Active_C.WaitForDropEvents
// (BlueprintCallable, BlueprintEvent)

void UGA_Athena_Booty_Active_C::WaitForDropEvents()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Athena_Booty_Active_C", "WaitForDropEvents");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_Athena_Booty_Active.GA_Athena_Booty_Active_C.WaitForOverlapEvents
// (BlueprintCallable, BlueprintEvent)

void UGA_Athena_Booty_Active_C::WaitForOverlapEvents()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Athena_Booty_Active_C", "WaitForOverlapEvents");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_Athena_Booty_Active.GA_Athena_Booty_Active_C.WaitForVehicle
// (BlueprintCallable, BlueprintEvent)

void UGA_Athena_Booty_Active_C::WaitForVehicle()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Athena_Booty_Active_C", "WaitForVehicle");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_Athena_Booty_Active.GA_Athena_Booty_Active_C.WaitForVisualFXEvents
// (BlueprintCallable, BlueprintEvent)

void UGA_Athena_Booty_Active_C::WaitForVisualFXEvents()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Athena_Booty_Active_C", "WaitForVisualFXEvents");

	UObject::ProcessEvent(Func, nullptr);
}

}

