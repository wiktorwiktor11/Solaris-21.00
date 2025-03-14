﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: JungleTemple_Face_Bottom

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"
#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass JungleTemple_Face_Bottom.JungleTemple_Face_Bottom_C
// 0x00B0 (0x0F20 - 0x0E70)
class AJungleTemple_Face_Bottom_C final : public ABuildingProp
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0E70(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UAudioComponent*                        FireAudio;                                         // 0x0E78(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                        WaterAudio;                                        // 0x0E80(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPointLightComponent*                   PointLight;                                        // 0x0E88(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               P_Athena_Jungle_MouthDestroy_Flame;                // 0x0E90(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               P_JungleMouthDestroy_Water;                        // 0x0E98(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               P_Athena_Jungle_Mouth_Flame;                       // 0x0EA0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SM_FlameMouth;                                     // 0x0EA8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SM_JungleTempleMouthWater;                         // 0x0EB0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               P_WaterFall_JungleMouth;                           // 0x0EB8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                          UseWaterfall;                                      // 0x0EC0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                         Pad_EC1[0x7];                                      // 0x0EC1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                SetLocalOffset;                                    // 0x0EC8(0x0018)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	struct FLinearColor                           Foam_FX_Color;                                     // 0x0EE0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               WaterMID;                                          // 0x0EF0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           WaterDarkColor;                                    // 0x0EF8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           Water_Foam_Color;                                  // 0x0F08(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          UseFire;                                           // 0x0F18(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_JungleTemple_Face_Bottom(int32 EntryPoint);
	void OnRep_UseWaterfall();
	void ReceiveBeginPlay();
	void ReceiveDestroyed();
	void UserConstructionScript();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"JungleTemple_Face_Bottom_C">();
	}
	static class AJungleTemple_Face_Bottom_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AJungleTemple_Face_Bottom_C>();
	}
};
static_assert(alignof(AJungleTemple_Face_Bottom_C) == 0x000008, "Wrong alignment on AJungleTemple_Face_Bottom_C");
static_assert(sizeof(AJungleTemple_Face_Bottom_C) == 0x000F20, "Wrong size on AJungleTemple_Face_Bottom_C");
static_assert(offsetof(AJungleTemple_Face_Bottom_C, UberGraphFrame) == 0x000E70, "Member 'AJungleTemple_Face_Bottom_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AJungleTemple_Face_Bottom_C, FireAudio) == 0x000E78, "Member 'AJungleTemple_Face_Bottom_C::FireAudio' has a wrong offset!");
static_assert(offsetof(AJungleTemple_Face_Bottom_C, WaterAudio) == 0x000E80, "Member 'AJungleTemple_Face_Bottom_C::WaterAudio' has a wrong offset!");
static_assert(offsetof(AJungleTemple_Face_Bottom_C, PointLight) == 0x000E88, "Member 'AJungleTemple_Face_Bottom_C::PointLight' has a wrong offset!");
static_assert(offsetof(AJungleTemple_Face_Bottom_C, P_Athena_Jungle_MouthDestroy_Flame) == 0x000E90, "Member 'AJungleTemple_Face_Bottom_C::P_Athena_Jungle_MouthDestroy_Flame' has a wrong offset!");
static_assert(offsetof(AJungleTemple_Face_Bottom_C, P_JungleMouthDestroy_Water) == 0x000E98, "Member 'AJungleTemple_Face_Bottom_C::P_JungleMouthDestroy_Water' has a wrong offset!");
static_assert(offsetof(AJungleTemple_Face_Bottom_C, P_Athena_Jungle_Mouth_Flame) == 0x000EA0, "Member 'AJungleTemple_Face_Bottom_C::P_Athena_Jungle_Mouth_Flame' has a wrong offset!");
static_assert(offsetof(AJungleTemple_Face_Bottom_C, SM_FlameMouth) == 0x000EA8, "Member 'AJungleTemple_Face_Bottom_C::SM_FlameMouth' has a wrong offset!");
static_assert(offsetof(AJungleTemple_Face_Bottom_C, SM_JungleTempleMouthWater) == 0x000EB0, "Member 'AJungleTemple_Face_Bottom_C::SM_JungleTempleMouthWater' has a wrong offset!");
static_assert(offsetof(AJungleTemple_Face_Bottom_C, P_WaterFall_JungleMouth) == 0x000EB8, "Member 'AJungleTemple_Face_Bottom_C::P_WaterFall_JungleMouth' has a wrong offset!");
static_assert(offsetof(AJungleTemple_Face_Bottom_C, UseWaterfall) == 0x000EC0, "Member 'AJungleTemple_Face_Bottom_C::UseWaterfall' has a wrong offset!");
static_assert(offsetof(AJungleTemple_Face_Bottom_C, SetLocalOffset) == 0x000EC8, "Member 'AJungleTemple_Face_Bottom_C::SetLocalOffset' has a wrong offset!");
static_assert(offsetof(AJungleTemple_Face_Bottom_C, Foam_FX_Color) == 0x000EE0, "Member 'AJungleTemple_Face_Bottom_C::Foam_FX_Color' has a wrong offset!");
static_assert(offsetof(AJungleTemple_Face_Bottom_C, WaterMID) == 0x000EF0, "Member 'AJungleTemple_Face_Bottom_C::WaterMID' has a wrong offset!");
static_assert(offsetof(AJungleTemple_Face_Bottom_C, WaterDarkColor) == 0x000EF8, "Member 'AJungleTemple_Face_Bottom_C::WaterDarkColor' has a wrong offset!");
static_assert(offsetof(AJungleTemple_Face_Bottom_C, Water_Foam_Color) == 0x000F08, "Member 'AJungleTemple_Face_Bottom_C::Water_Foam_Color' has a wrong offset!");
static_assert(offsetof(AJungleTemple_Face_Bottom_C, UseFire) == 0x000F18, "Member 'AJungleTemple_Face_Bottom_C::UseFire' has a wrong offset!");

}

