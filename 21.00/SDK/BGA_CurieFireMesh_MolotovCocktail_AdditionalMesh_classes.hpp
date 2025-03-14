﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BGA_CurieFireMesh_MolotovCocktail_AdditionalMesh

#include "Basic.hpp"

#include "GameplayAbilities_structs.hpp"
#include "BGA_GenericCurieFuel_Parent_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BGA_CurieFireMesh_MolotovCocktail_AdditionalMesh.BGA_CurieFireMesh_MolotovCocktail_AdditionalMesh_C
// 0x0028 (0x0A28 - 0x0A00)
class ABGA_CurieFireMesh_MolotovCocktail_AdditionalMesh_C final : public ABGA_GenericCurieFuel_Parent_C
{
public:
	struct FScalableFloat                         SelfPropagationFuelRowValue;                       // 0x0A00(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void UserConstructionScript();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BGA_CurieFireMesh_MolotovCocktail_AdditionalMesh_C">();
	}
	static class ABGA_CurieFireMesh_MolotovCocktail_AdditionalMesh_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABGA_CurieFireMesh_MolotovCocktail_AdditionalMesh_C>();
	}
};
static_assert(alignof(ABGA_CurieFireMesh_MolotovCocktail_AdditionalMesh_C) == 0x000008, "Wrong alignment on ABGA_CurieFireMesh_MolotovCocktail_AdditionalMesh_C");
static_assert(sizeof(ABGA_CurieFireMesh_MolotovCocktail_AdditionalMesh_C) == 0x000A28, "Wrong size on ABGA_CurieFireMesh_MolotovCocktail_AdditionalMesh_C");
static_assert(offsetof(ABGA_CurieFireMesh_MolotovCocktail_AdditionalMesh_C, SelfPropagationFuelRowValue) == 0x000A00, "Member 'ABGA_CurieFireMesh_MolotovCocktail_AdditionalMesh_C::SelfPropagationFuelRowValue' has a wrong offset!");

}

