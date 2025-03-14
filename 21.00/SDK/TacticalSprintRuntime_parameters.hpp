﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TacticalSprintRuntime

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "TacticalSprintRuntime_structs.hpp"


namespace SDK::Params
{

// Function TacticalSprintRuntime.FortPlayerControllerComponent_TacticalSprint.LogAndVisualLog
// 0x0020 (0x0020 - 0x0000)
struct FortPlayerControllerComponent_TacticalSprint_LogAndVisualLog final
{
public:
	class UObject*                                LoggingSource;                                     // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ESprintLoggingVerbosityLevel                  Verbosity;                                         // 0x0008(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_9[0x7];                                        // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 LogString;                                         // 0x0010(0x0010)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FortPlayerControllerComponent_TacticalSprint_LogAndVisualLog) == 0x000008, "Wrong alignment on FortPlayerControllerComponent_TacticalSprint_LogAndVisualLog");
static_assert(sizeof(FortPlayerControllerComponent_TacticalSprint_LogAndVisualLog) == 0x000020, "Wrong size on FortPlayerControllerComponent_TacticalSprint_LogAndVisualLog");
static_assert(offsetof(FortPlayerControllerComponent_TacticalSprint_LogAndVisualLog, LoggingSource) == 0x000000, "Member 'FortPlayerControllerComponent_TacticalSprint_LogAndVisualLog::LoggingSource' has a wrong offset!");
static_assert(offsetof(FortPlayerControllerComponent_TacticalSprint_LogAndVisualLog, Verbosity) == 0x000008, "Member 'FortPlayerControllerComponent_TacticalSprint_LogAndVisualLog::Verbosity' has a wrong offset!");
static_assert(offsetof(FortPlayerControllerComponent_TacticalSprint_LogAndVisualLog, LogString) == 0x000010, "Member 'FortPlayerControllerComponent_TacticalSprint_LogAndVisualLog::LogString' has a wrong offset!");

// Function TacticalSprintRuntime.FortPlayerControllerComponent_TacticalSprint.OnAutoRunChanged
// 0x0001 (0x0001 - 0x0000)
struct FortPlayerControllerComponent_TacticalSprint_OnAutoRunChanged final
{
public:
	bool                                          bAutoRunIsOn;                                      // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FortPlayerControllerComponent_TacticalSprint_OnAutoRunChanged) == 0x000001, "Wrong alignment on FortPlayerControllerComponent_TacticalSprint_OnAutoRunChanged");
static_assert(sizeof(FortPlayerControllerComponent_TacticalSprint_OnAutoRunChanged) == 0x000001, "Wrong size on FortPlayerControllerComponent_TacticalSprint_OnAutoRunChanged");
static_assert(offsetof(FortPlayerControllerComponent_TacticalSprint_OnAutoRunChanged, bAutoRunIsOn) == 0x000000, "Member 'FortPlayerControllerComponent_TacticalSprint_OnAutoRunChanged::bAutoRunIsOn' has a wrong offset!");

// Function TacticalSprintRuntime.FortPlayerControllerComponent_TacticalSprint.OnMovementModeChanged
// 0x0010 (0x0010 - 0x0000)
struct FortPlayerControllerComponent_TacticalSprint_OnMovementModeChanged final
{
public:
	class ACharacter*                             Character;                                         // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EMovementMode                                 PrevMovementMode;                                  // 0x0008(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         PreviousCustomMode;                                // 0x0009(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_A[0x6];                                        // 0x000A(0x0006)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FortPlayerControllerComponent_TacticalSprint_OnMovementModeChanged) == 0x000008, "Wrong alignment on FortPlayerControllerComponent_TacticalSprint_OnMovementModeChanged");
static_assert(sizeof(FortPlayerControllerComponent_TacticalSprint_OnMovementModeChanged) == 0x000010, "Wrong size on FortPlayerControllerComponent_TacticalSprint_OnMovementModeChanged");
static_assert(offsetof(FortPlayerControllerComponent_TacticalSprint_OnMovementModeChanged, Character) == 0x000000, "Member 'FortPlayerControllerComponent_TacticalSprint_OnMovementModeChanged::Character' has a wrong offset!");
static_assert(offsetof(FortPlayerControllerComponent_TacticalSprint_OnMovementModeChanged, PrevMovementMode) == 0x000008, "Member 'FortPlayerControllerComponent_TacticalSprint_OnMovementModeChanged::PrevMovementMode' has a wrong offset!");
static_assert(offsetof(FortPlayerControllerComponent_TacticalSprint_OnMovementModeChanged, PreviousCustomMode) == 0x000009, "Member 'FortPlayerControllerComponent_TacticalSprint_OnMovementModeChanged::PreviousCustomMode' has a wrong offset!");

// Function TacticalSprintRuntime.FortPlayerControllerComponent_TacticalSprint.OnPawnChanged
// 0x0008 (0x0008 - 0x0000)
struct FortPlayerControllerComponent_TacticalSprint_OnPawnChanged final
{
public:
	class AFortPawn*                              InPawn;                                            // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FortPlayerControllerComponent_TacticalSprint_OnPawnChanged) == 0x000008, "Wrong alignment on FortPlayerControllerComponent_TacticalSprint_OnPawnChanged");
static_assert(sizeof(FortPlayerControllerComponent_TacticalSprint_OnPawnChanged) == 0x000008, "Wrong size on FortPlayerControllerComponent_TacticalSprint_OnPawnChanged");
static_assert(offsetof(FortPlayerControllerComponent_TacticalSprint_OnPawnChanged, InPawn) == 0x000000, "Member 'FortPlayerControllerComponent_TacticalSprint_OnPawnChanged::InPawn' has a wrong offset!");

// Function TacticalSprintRuntime.FortPlayerControllerComponent_TacticalSprint.OnWeaponEquipped
// 0x0010 (0x0010 - 0x0000)
struct FortPlayerControllerComponent_TacticalSprint_OnWeaponEquipped final
{
public:
	class AFortWeapon*                            NewWeapon;                                         // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AFortWeapon*                            PreviousWeapon;                                    // 0x0008(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FortPlayerControllerComponent_TacticalSprint_OnWeaponEquipped) == 0x000008, "Wrong alignment on FortPlayerControllerComponent_TacticalSprint_OnWeaponEquipped");
static_assert(sizeof(FortPlayerControllerComponent_TacticalSprint_OnWeaponEquipped) == 0x000010, "Wrong size on FortPlayerControllerComponent_TacticalSprint_OnWeaponEquipped");
static_assert(offsetof(FortPlayerControllerComponent_TacticalSprint_OnWeaponEquipped, NewWeapon) == 0x000000, "Member 'FortPlayerControllerComponent_TacticalSprint_OnWeaponEquipped::NewWeapon' has a wrong offset!");
static_assert(offsetof(FortPlayerControllerComponent_TacticalSprint_OnWeaponEquipped, PreviousWeapon) == 0x000008, "Member 'FortPlayerControllerComponent_TacticalSprint_OnWeaponEquipped::PreviousWeapon' has a wrong offset!");

// Function TacticalSprintRuntime.FortPlayerControllerComponent_TacticalSprint.SetIsSprinting
// 0x0001 (0x0001 - 0x0000)
struct FortPlayerControllerComponent_TacticalSprint_SetIsSprinting final
{
public:
	bool                                          bNewIsSprinting;                                   // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FortPlayerControllerComponent_TacticalSprint_SetIsSprinting) == 0x000001, "Wrong alignment on FortPlayerControllerComponent_TacticalSprint_SetIsSprinting");
static_assert(sizeof(FortPlayerControllerComponent_TacticalSprint_SetIsSprinting) == 0x000001, "Wrong size on FortPlayerControllerComponent_TacticalSprint_SetIsSprinting");
static_assert(offsetof(FortPlayerControllerComponent_TacticalSprint_SetIsSprinting, bNewIsSprinting) == 0x000000, "Member 'FortPlayerControllerComponent_TacticalSprint_SetIsSprinting::bNewIsSprinting' has a wrong offset!");

}

