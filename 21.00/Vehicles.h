#pragma once
#include "pch.h"
#include "Utils.h"

class Vehicles
{
private:
	static inline void (*OnPawnEnterVehicleOriginal)(UObject* Context, FFrame& Stack);

	static void ServerMove(UObject*, FFrame&);

public:
	static void EquipVehicleWeapon(APawn* Vehicle, AFortPlayerPawn* PlayerPawn, int32 SeatIdx);

	InitHooks;
};