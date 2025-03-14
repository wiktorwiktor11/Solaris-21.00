﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: FN_NiagaraNotify

#include "Basic.hpp"

#include "NiagaraAnimNotifies_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass FN_NiagaraNotify.FN_NiagaraNotify_C
// 0x0010 (0x00E0 - 0x00D0)
#pragma pack(push, 0x1)
class alignas(0x10) UFN_NiagaraNotify_C : public UAnimNotify_PlayNiagaraEffect
{
public:
	uint8                                         Pad_C8[0x8];                                       // 0x00C8(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	bool                                          Set_in_Water_Niagara_Variable;                     // 0x00D0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Print_Debug;                                       // 0x00D1(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          is_Glider_Deploy_Notify;                           // 0x00D2(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsLargeBodyPawn;                                   // 0x00D3(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Add_to_Pawn_Highlight_Set;                         // 0x00D4(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	bool Received_Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, const struct FAnimNotifyEventReference& EventReference) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"FN_NiagaraNotify_C">();
	}
	static class UFN_NiagaraNotify_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFN_NiagaraNotify_C>();
	}
};
#pragma pack(pop)
static_assert(alignof(UFN_NiagaraNotify_C) == 0x000010, "Wrong alignment on UFN_NiagaraNotify_C");
static_assert(sizeof(UFN_NiagaraNotify_C) == 0x0000E0, "Wrong size on UFN_NiagaraNotify_C");
static_assert(offsetof(UFN_NiagaraNotify_C, Set_in_Water_Niagara_Variable) == 0x0000D0, "Member 'UFN_NiagaraNotify_C::Set_in_Water_Niagara_Variable' has a wrong offset!");
static_assert(offsetof(UFN_NiagaraNotify_C, Print_Debug) == 0x0000D1, "Member 'UFN_NiagaraNotify_C::Print_Debug' has a wrong offset!");
static_assert(offsetof(UFN_NiagaraNotify_C, is_Glider_Deploy_Notify) == 0x0000D2, "Member 'UFN_NiagaraNotify_C::is_Glider_Deploy_Notify' has a wrong offset!");
static_assert(offsetof(UFN_NiagaraNotify_C, IsLargeBodyPawn) == 0x0000D3, "Member 'UFN_NiagaraNotify_C::IsLargeBodyPawn' has a wrong offset!");
static_assert(offsetof(UFN_NiagaraNotify_C, Add_to_Pawn_Highlight_Set) == 0x0000D4, "Member 'UFN_NiagaraNotify_C::Add_to_Pawn_Highlight_Set' has a wrong offset!");

}

