#include "pch.h"
#include "Vehicles.h"

#include "Inventory.h"

void Vehicles::ServerMove(UObject* Context, FFrame& Stack)
{
    FReplicatedPhysicsPawnState State;
    Stack.StepCompiledIn(&State);
    Stack.IncrementCode();
    auto Pawn = (AFortPhysicsPawn*)Context;

    UPrimitiveComponent* RootComponent = Pawn->RootComponent->Cast<UPrimitiveComponent>();

    if (RootComponent)
    {
        FRotator RealRotation = State.Rotation.Rotator();

        RealRotation.Yaw = FRotator::UnwindDegrees(RealRotation.Yaw);

        RealRotation.Pitch = 0;
        RealRotation.Roll = 0;

        RootComponent->K2_SetWorldLocationAndRotation(State.Translation, RealRotation, false, nullptr, true);
        RootComponent->SetPhysicsLinearVelocity(State.LinearVelocity, 0, FName(0));
        RootComponent->SetPhysicsAngularVelocityInDegrees(State.AngularVelocity, 0, FName(0));
    }
}

void Vehicles::EquipVehicleWeapon(APawn* Vehicle, AFortPlayerPawn* PlayerPawn, int32 SeatIdx)
{
    Log(L"Called!");

    if (!PlayerPawn)
    {
        Log(L"No PlayerPawn!");
        return;
    }

    AFortPlayerController* PlayerController = PlayerPawn->Controller->Cast<AFortPlayerController>();

    if (!PlayerController)
    {
        Log(L"No PlayerController!");
        return;
    }

    UFortVehicleSeatWeaponComponent* SeatWeaponComponent = (UFortVehicleSeatWeaponComponent*)Vehicle->GetComponentByClass(UFortVehicleSeatWeaponComponent::StaticClass());

    if (!SeatWeaponComponent)
    {
        Log(L"No SeatWeaponComponent!");
        return;
    }
    else if (!SeatWeaponComponent->WeaponSeatDefinitions.IsValidIndex(SeatIdx))
    {
        Log(L"Invalid SeatIdx!");
        return;
    }

    FWeaponSeatDefinition& WeaponSeatDefinition = SeatWeaponComponent->WeaponSeatDefinitions[SeatIdx]; // ik this might look skunked, but they get filled in order of seat idx

    UFortWeaponItemDefinition* VehicleWeapon = WeaponSeatDefinition.VehicleWeapon ? WeaponSeatDefinition.VehicleWeapon : WeaponSeatDefinition.VehicleWeaponOverride;

    if (WeaponSeatDefinition.SeatIndex != SeatIdx || !VehicleWeapon) // still make sure tho
    {
        Log(L"No VehicleWeapon or invalid SeatIdx found!");
        return;
    }

    UFortWorldItem* VehicleWeaponInstance = Inventory::GiveItem(PlayerController, VehicleWeapon, 1, 99999, 0, false, true);

    if (!VehicleWeaponInstance)
    {
        Log(L"No VehicleWeaponInstance!");
        return;
    }

    AFortInventory* WorldInventory = PlayerController->WorldInventory;

    if (WorldInventory)
    {
        for (auto& ReplicatedEntry : WorldInventory->Inventory.ReplicatedEntries)
        {
            if (ReplicatedEntry.ItemGuid == VehicleWeaponInstance->GetItemGuid())
            {
                WorldInventory->Inventory.MarkItemDirty(ReplicatedEntry);
                WorldInventory->Inventory.MarkItemDirty(VehicleWeaponInstance->ItemEntry);
                WorldInventory->HandleInventoryLocalUpdate();
            }
        }
    }

    AFortWeaponRangedForVehicle* EquippedWeapon = PlayerPawn->EquipWeaponDefinition(VehicleWeapon, VehicleWeaponInstance->GetItemGuid(), VehicleWeaponInstance->GetTrackerGuid(), false)->Cast<AFortWeaponRangedForVehicle>();

    if (!EquippedWeapon)
    {
        Log(L"No EquippedWeapon!");
        return;
    }

    // PlayerController->ClientEquipItem(VehicleWeaponInstance->GetItemGuid(), true);

    FName& MuzzleSocketName = SeatWeaponComponent->MuzzleSocketNames[SeatIdx];
    TScriptInterface<IFortVehicleInterface> VehicleUInterface = PlayerPawn->GetVehicleUInterface();

    EquippedWeapon->MuzzleSocketName = MuzzleSocketName;
    EquippedWeapon->MuzzleFalloffSocketName = MuzzleSocketName;
    EquippedWeapon->WeaponHandSocketNameOverride = MuzzleSocketName;
    EquippedWeapon->LeftHandWeaponHandSocketNameOverride = MuzzleSocketName;
    EquippedWeapon->bIsEquippingWeapon = true;
    EquippedWeapon->MountedWeaponInfo.bNeedsVehicleAttachment = true;
    EquippedWeapon->MountedWeaponInfo.bTargetSourceFromVehicleMuzzle = true;
    EquippedWeapon->MountedWeaponInfoRepped.HostVehicleCached = VehicleUInterface;
    EquippedWeapon->MountedWeaponInfoRepped.HostVehicleSeatIndexCached = SeatIdx;
    EquippedWeapon->OnRep_MountedWeaponInfoRepped();
    EquippedWeapon->OnHostVehicleSetup();
    EquippedWeapon->ServerSetMuzzleTraceNearWall(false);
}

void Vehicles::Hook()
{
    Utils::ExecHook("/Script/FortniteGame.FortPhysicsPawn.ServerMove", ServerMove);
    Utils::ExecHook("/Script/FortniteGame.FortPhysicsPawn.ServerMoveReliable", ServerMove);
    // Utils::ExecHook("/Script/FortniteGame.FortAthenaVehicle.OnPawnEnterVehicle", OnPawnEnterVehicle, OnPawnEnterVehicleOriginal);
    //Utils::ExecHook("/Script/FortniteGame.FortCharacterVehicle.OnPawnEnterVehicle", OnPawnEnterVehicle, OnPawnEnterVehicleOriginal);

    //Utils::ExecHookEvery<AFortAthenaVehicle>("OnPawnEnterVehicle", OnPawnEnterVehicle, OnPawnEnterVehicleOriginal);
    //Utils::ExecHookEvery<AFortCharacterVehicle>("OnPawnEnterVehicle", OnPawnEnterVehicle, OnPawnEnterVehicleOriginal);
}
