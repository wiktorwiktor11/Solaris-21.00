﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SrirachaRanchValet

#include "Basic.hpp"


namespace SDK::Params
{

// Function SrirachaRanchValet.StreamingRadioPlayerComponent_Valet.VehicleExploded
// 0x0010 (0x0010 - 0x0000)
struct StreamingRadioPlayerComponent_Valet_VehicleExploded final
{
public:
	const class AController*                      LastDamageInstigator;                              // 0x0000(0x0008)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AFortAthenaVehicle*                     Vehicle;                                           // 0x0008(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(StreamingRadioPlayerComponent_Valet_VehicleExploded) == 0x000008, "Wrong alignment on StreamingRadioPlayerComponent_Valet_VehicleExploded");
static_assert(sizeof(StreamingRadioPlayerComponent_Valet_VehicleExploded) == 0x000010, "Wrong size on StreamingRadioPlayerComponent_Valet_VehicleExploded");
static_assert(offsetof(StreamingRadioPlayerComponent_Valet_VehicleExploded, LastDamageInstigator) == 0x000000, "Member 'StreamingRadioPlayerComponent_Valet_VehicleExploded::LastDamageInstigator' has a wrong offset!");
static_assert(offsetof(StreamingRadioPlayerComponent_Valet_VehicleExploded, Vehicle) == 0x000008, "Member 'StreamingRadioPlayerComponent_Valet_VehicleExploded::Vehicle' has a wrong offset!");

}

