#pragma once
#include "pch.h"
#include "Utils.h"


class Player {
private:
	DefUHookOg(ServerLoadingScreenDropped);
	static void ServerAcknowledgePossession(UObject*, FFrame&);
	DefHookOg(void, GetPlayerViewPoint, AFortPlayerController*, FVector&, FRotator&);
	static void ServerExecuteInventoryItem(UObject*, FFrame&);
	static void ServerReturnToMainMenu(UObject*, FFrame&);
	static void ServerPlayEmoteItem(UObject*, FFrame&);
	DefUHookOg(ServerAttemptAircraftJump);
	DefUHookOg(ServerSendZiplineState);
	DefUHookOg(ServerHandlePickupInfo);
	static void MovingEmoteStopped(UObject*, FFrame&);
public:
	static void InternalPickup(AFortPlayerControllerAthena*, FFortItemEntry);
private:
	DefHookOg(bool, CompletePickupAnimation, AFortPickup*);
	DefHookOg(void, NetMulticast_Athena_BatchedDamageCues, AFortPlayerPawnAthena*, FAthenaBatchedDamageGameplayCues_Shared, FAthenaBatchedDamageGameplayCues_NonShared);
	static void ReloadWeapon(AFortWeapon*, int);
	DefHookOg(void, ClientOnPawnDied, AFortPlayerControllerAthena*, FFortPlayerDeathReport&);
	static void ServerAttemptInventoryDrop(UObject*, FFrame&);

	DefHookOg(void, OnCapsuleBeginOverlap, UObject*, FFrame&);

	DefHookOg(void, ServerAttemptInteract, UFortControllerComponent_Interaction* InteractionComp, AActor* ReceivingActor, UPrimitiveComponent* InteractComponent,
		ETInteractionType InteractType, UObject* OptionalObjectData, EInteractionBeingAttempted InteractionBeingAttempted, int32 RequestId);

	DefHookOg(AFortAthenaVehicle*, ServerOnExitVehicle, AFortPlayerPawn* PlayerPawn, ETryExitVehicleBehavior ExitForceBehavior, const bool bDestroyVehicleWhenForced);

	InitHooks;
};