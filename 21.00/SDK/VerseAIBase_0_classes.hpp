﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: VerseAIBase_0

#include "Basic.hpp"

#include "SolarisInterop_0_classes.hpp"
#include "CoreUObject_classes.hpp"
#include "VerseAIBase_classes.hpp"


namespace SDK
{

// SolarisGeneratedClass VerseAIBase.$SolarisSignatureFunctionOuter
// 0x0000 (0x0028 - 0x0028)
class VerseAIBase_0::U_SolarisSignatureFunctionOuter final : public UObject
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SolarisGeneratedClass VerseAIBase.$SolarisSignatureFunctionOuter", true>();
	}
	static class VerseAIBase_0::U_SolarisSignatureFunctionOuter* GetDefaultObj()
	{
		return GetDefaultObjImpl<VerseAIBase_0::U_SolarisSignatureFunctionOuter>();
	}
};
static_assert(alignof(VerseAIBase_0::U_SolarisSignatureFunctionOuter) == 0x000008, "Wrong alignment on VerseAIBase_0::U_SolarisSignatureFunctionOuter");
static_assert(sizeof(VerseAIBase_0::U_SolarisSignatureFunctionOuter) == 0x000028, "Wrong size on VerseAIBase_0::U_SolarisSignatureFunctionOuter");

// SolarisGeneratedClass VerseAIBase.ai_component
// 0x0020 (0x00B8 - 0x0098)
class Uai_component : public UAIComponentBase
{
public:
	uint8                                         Pad_98[0x10];                                      // 0x0098(0x0010)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(class Utask* __verse_0xC1E81372_CallingTask, int64 __verse_0xA3A00DDB_CallerResumeState, int64 __verse_0x2AC0E4D8_CallerCancelState, double __verse_0xB2CDDD72_Argument)> __verse_0x2AAE88FF_Wait_L_Nfloat_R;                // 0x00A8(0x000C)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_B4[0x4];                                       // 0x00B4(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void _InitCDO();
	void _InitInstance();
	class Utask* Wait_L_Nfloat_R(class Utask* __verse_0xC1E81372_CallingTask, int64 __verse_0xA3A00DDB_CallerResumeState, int64 __verse_0x2AC0E4D8_CallerCancelState, double __verse_0xB2CDDD72_Argument);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ai_component">();
	}
	static class Uai_component* GetDefaultObj()
	{
		return GetDefaultObjImpl<Uai_component>();
	}
};
static_assert(alignof(Uai_component) == 0x000008, "Wrong alignment on Uai_component");
static_assert(sizeof(Uai_component) == 0x0000B8, "Wrong size on Uai_component");
static_assert(offsetof(Uai_component, __verse_0x2AAE88FF_Wait_L_Nfloat_R) == 0x0000A8, "Member 'Uai_component::__verse_0x2AAE88FF_Wait_L_Nfloat_R' has a wrong offset!");

// SolarisGeneratedClass VerseAIBase.Context_ai_component$Wait_L_Nfloat_R
// 0x0010 (0x0140 - 0x0130)
class UContext_ai_component_Wait_L_Nfloat_R final : public Utask
{
public:
	class Uai_component*                          _Self;                                             // 0x0130(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        __verse_0xB2CDDD72_Argument;                       // 0x0138(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	int64 Update();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"Context_ai_component$Wait_L_Nfloat_R">();
	}
	static class UContext_ai_component_Wait_L_Nfloat_R* GetDefaultObj()
	{
		return GetDefaultObjImpl<UContext_ai_component_Wait_L_Nfloat_R>();
	}
};
static_assert(alignof(UContext_ai_component_Wait_L_Nfloat_R) == 0x000008, "Wrong alignment on UContext_ai_component_Wait_L_Nfloat_R");
static_assert(sizeof(UContext_ai_component_Wait_L_Nfloat_R) == 0x000140, "Wrong size on UContext_ai_component_Wait_L_Nfloat_R");
static_assert(offsetof(UContext_ai_component_Wait_L_Nfloat_R, _Self) == 0x000130, "Member 'UContext_ai_component_Wait_L_Nfloat_R::_Self' has a wrong offset!");
static_assert(offsetof(UContext_ai_component_Wait_L_Nfloat_R, __verse_0xB2CDDD72_Argument) == 0x000138, "Member 'UContext_ai_component_Wait_L_Nfloat_R::__verse_0xB2CDDD72_Argument' has a wrong offset!");

}

