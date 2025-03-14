﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MannequinRuntime

#include "Basic.hpp"

#include "MannequinRuntime_structs.hpp"


namespace SDK::Params
{

// Function MannequinRuntime.MannequinAnalyticsComponent.FireMannequinAnalytics_Interact
// 0x0020 (0x0020 - 0x0000)
struct MannequinAnalyticsComponent_FireMannequinAnalytics_Interact final
{
public:
	class AFortPlayerController*                  Controller;                                        // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ECreativeMannequinAnalyticsInteractType       InteractType;                                      // 0x0008(0x0001)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_9[0x7];                                        // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	const class UFortItemDefinition*              Character;                                         // 0x0010(0x0008)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	const class UFortItemDefinition*              BackBling;                                         // 0x0018(0x0008)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(MannequinAnalyticsComponent_FireMannequinAnalytics_Interact) == 0x000008, "Wrong alignment on MannequinAnalyticsComponent_FireMannequinAnalytics_Interact");
static_assert(sizeof(MannequinAnalyticsComponent_FireMannequinAnalytics_Interact) == 0x000020, "Wrong size on MannequinAnalyticsComponent_FireMannequinAnalytics_Interact");
static_assert(offsetof(MannequinAnalyticsComponent_FireMannequinAnalytics_Interact, Controller) == 0x000000, "Member 'MannequinAnalyticsComponent_FireMannequinAnalytics_Interact::Controller' has a wrong offset!");
static_assert(offsetof(MannequinAnalyticsComponent_FireMannequinAnalytics_Interact, InteractType) == 0x000008, "Member 'MannequinAnalyticsComponent_FireMannequinAnalytics_Interact::InteractType' has a wrong offset!");
static_assert(offsetof(MannequinAnalyticsComponent_FireMannequinAnalytics_Interact, Character) == 0x000010, "Member 'MannequinAnalyticsComponent_FireMannequinAnalytics_Interact::Character' has a wrong offset!");
static_assert(offsetof(MannequinAnalyticsComponent_FireMannequinAnalytics_Interact, BackBling) == 0x000018, "Member 'MannequinAnalyticsComponent_FireMannequinAnalytics_Interact::BackBling' has a wrong offset!");

}

