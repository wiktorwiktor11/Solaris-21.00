﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Campsite_Improvement_Component

#include "Basic.hpp"

#include "Enum_Campsite_Improvements_structs.hpp"
#include "CampsiteRuntime_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Campsite_Improvement_Component.Campsite_Improvement_Component_C
// 0x0020 (0x0190 - 0x0170)
class UCampsite_Improvement_Component_C final : public UCampsiteImprovementComponent
{
public:
	Enum_Campsite_Improvements                    ImprovementType;                                   // 0x0170(0x0001)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_171[0x7];                                      // 0x0171(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ABGA_Campsite_C*                        OwningCampsite;                                    // 0x0178(0x0008)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerState*                           ImprovementOwner;                                  // 0x0180(0x0008)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void SetImprovementOwner(class APlayerState* InOwnerState);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Campsite_Improvement_Component_C">();
	}
	static class UCampsite_Improvement_Component_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCampsite_Improvement_Component_C>();
	}
};
static_assert(alignof(UCampsite_Improvement_Component_C) == 0x000010, "Wrong alignment on UCampsite_Improvement_Component_C");
static_assert(sizeof(UCampsite_Improvement_Component_C) == 0x000190, "Wrong size on UCampsite_Improvement_Component_C");
static_assert(offsetof(UCampsite_Improvement_Component_C, ImprovementType) == 0x000170, "Member 'UCampsite_Improvement_Component_C::ImprovementType' has a wrong offset!");
static_assert(offsetof(UCampsite_Improvement_Component_C, OwningCampsite) == 0x000178, "Member 'UCampsite_Improvement_Component_C::OwningCampsite' has a wrong offset!");
static_assert(offsetof(UCampsite_Improvement_Component_C, ImprovementOwner) == 0x000180, "Member 'UCampsite_Improvement_Component_C::ImprovementOwner' has a wrong offset!");

}

