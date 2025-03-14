﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PawnsInSquadLockVolume

#include "Basic.hpp"


namespace SDK
{

// UserDefinedStruct PawnsInSquadLockVolume.PawnsInSquadLockVolume
// 0x0018 (0x0018 - 0x0000)
struct FPawnsInSquadLockVolume final
{
public:
	class AFortPawn*                              Pawn_17_CA2911E448C8191BD27FA28C945C96FA;          // 0x0000(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                      NiagaraSystem_27_9161E59C4F3629E93C3B238AA11CB77B; // 0x0008(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          HasBeenScanned_30_B6428DF645EEAFB560161C979F7736EB; // 0x0010(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_11[0x3];                                       // 0x0011(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         TimeEntered_33_303C236C49DE09444CD74D8BB850E2B0;   // 0x0014(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(FPawnsInSquadLockVolume) == 0x000008, "Wrong alignment on FPawnsInSquadLockVolume");
static_assert(sizeof(FPawnsInSquadLockVolume) == 0x000018, "Wrong size on FPawnsInSquadLockVolume");
static_assert(offsetof(FPawnsInSquadLockVolume, Pawn_17_CA2911E448C8191BD27FA28C945C96FA) == 0x000000, "Member 'FPawnsInSquadLockVolume::Pawn_17_CA2911E448C8191BD27FA28C945C96FA' has a wrong offset!");
static_assert(offsetof(FPawnsInSquadLockVolume, NiagaraSystem_27_9161E59C4F3629E93C3B238AA11CB77B) == 0x000008, "Member 'FPawnsInSquadLockVolume::NiagaraSystem_27_9161E59C4F3629E93C3B238AA11CB77B' has a wrong offset!");
static_assert(offsetof(FPawnsInSquadLockVolume, HasBeenScanned_30_B6428DF645EEAFB560161C979F7736EB) == 0x000010, "Member 'FPawnsInSquadLockVolume::HasBeenScanned_30_B6428DF645EEAFB560161C979F7736EB' has a wrong offset!");
static_assert(offsetof(FPawnsInSquadLockVolume, TimeEntered_33_303C236C49DE09444CD74D8BB850E2B0) == 0x000014, "Member 'FPawnsInSquadLockVolume::TimeEntered_33_303C236C49DE09444CD74D8BB850E2B0' has a wrong offset!");

}

