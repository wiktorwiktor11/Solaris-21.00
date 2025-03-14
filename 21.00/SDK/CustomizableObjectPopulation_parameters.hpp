﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CustomizableObjectPopulation

#include "Basic.hpp"


namespace SDK::Params
{

// Function CustomizableObjectPopulation.CustomizableObjectPopulation.GeneratePopulation
// 0x0018 (0x0018 - 0x0000)
struct CustomizableObjectPopulation_GeneratePopulation final
{
public:
	TArray<class UCustomizableObjectInstance*>    OutInstances;                                      // 0x0000(0x0010)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	int32                                         NumInstancesToGenerate;                            // 0x0010(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         ReturnValue;                                       // 0x0014(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(CustomizableObjectPopulation_GeneratePopulation) == 0x000008, "Wrong alignment on CustomizableObjectPopulation_GeneratePopulation");
static_assert(sizeof(CustomizableObjectPopulation_GeneratePopulation) == 0x000018, "Wrong size on CustomizableObjectPopulation_GeneratePopulation");
static_assert(offsetof(CustomizableObjectPopulation_GeneratePopulation, OutInstances) == 0x000000, "Member 'CustomizableObjectPopulation_GeneratePopulation::OutInstances' has a wrong offset!");
static_assert(offsetof(CustomizableObjectPopulation_GeneratePopulation, NumInstancesToGenerate) == 0x000010, "Member 'CustomizableObjectPopulation_GeneratePopulation::NumInstancesToGenerate' has a wrong offset!");
static_assert(offsetof(CustomizableObjectPopulation_GeneratePopulation, ReturnValue) == 0x000014, "Member 'CustomizableObjectPopulation_GeneratePopulation::ReturnValue' has a wrong offset!");

// Function CustomizableObjectPopulation.CustomizableObjectPopulation.RegeneratePopulation
// 0x0020 (0x0020 - 0x0000)
struct CustomizableObjectPopulation_RegeneratePopulation final
{
public:
	int32                                         Seed;                                              // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UCustomizableObjectInstance*>    OutInstances;                                      // 0x0008(0x0010)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	int32                                         NumInstancesToGenerate;                            // 0x0018(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x001C(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1D[0x3];                                       // 0x001D(0x0003)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(CustomizableObjectPopulation_RegeneratePopulation) == 0x000008, "Wrong alignment on CustomizableObjectPopulation_RegeneratePopulation");
static_assert(sizeof(CustomizableObjectPopulation_RegeneratePopulation) == 0x000020, "Wrong size on CustomizableObjectPopulation_RegeneratePopulation");
static_assert(offsetof(CustomizableObjectPopulation_RegeneratePopulation, Seed) == 0x000000, "Member 'CustomizableObjectPopulation_RegeneratePopulation::Seed' has a wrong offset!");
static_assert(offsetof(CustomizableObjectPopulation_RegeneratePopulation, OutInstances) == 0x000008, "Member 'CustomizableObjectPopulation_RegeneratePopulation::OutInstances' has a wrong offset!");
static_assert(offsetof(CustomizableObjectPopulation_RegeneratePopulation, NumInstancesToGenerate) == 0x000018, "Member 'CustomizableObjectPopulation_RegeneratePopulation::NumInstancesToGenerate' has a wrong offset!");
static_assert(offsetof(CustomizableObjectPopulation_RegeneratePopulation, ReturnValue) == 0x00001C, "Member 'CustomizableObjectPopulation_RegeneratePopulation::ReturnValue' has a wrong offset!");

}

