﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Nightmare_JunglePlantGroup_A_01

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Nightmare_JunglePlantGroup_A_01.Nightmare_JunglePlantGroup_A_01_C
// 0x0048 (0x0EB8 - 0x0E70)
class ANightmare_JunglePlantGroup_A_01_C final : public ABuildingProp
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0E70(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UFortCollisionResponseSwapperComponent* FortCollisionResponseSwapper;                      // 0x0E78(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USphereComponent*                       OverlapSphere;                                     // 0x0E80(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 GE_CornField_GC;                                   // 0x0E88(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ShouldWobble;                                      // 0x0E90(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_E91[0x7];                                      // 0x0E91(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                PlayerVelocity;                                    // 0x0E98(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               Mid;                                               // 0x0EB0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void BndEvt__OverlapSphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void BndEvt__OverlapSphere_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
	void ExecuteUbergraph_Nightmare_JunglePlantGroup_A_01(int32 EntryPoint);
	void MaterialWobble(class AActor* Player);
	void ReceiveBeginPlay();
	void ReceiveEndPlay(EEndPlayReason EndPlayReason);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Nightmare_JunglePlantGroup_A_01_C">();
	}
	static class ANightmare_JunglePlantGroup_A_01_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ANightmare_JunglePlantGroup_A_01_C>();
	}
};
static_assert(alignof(ANightmare_JunglePlantGroup_A_01_C) == 0x000008, "Wrong alignment on ANightmare_JunglePlantGroup_A_01_C");
static_assert(sizeof(ANightmare_JunglePlantGroup_A_01_C) == 0x000EB8, "Wrong size on ANightmare_JunglePlantGroup_A_01_C");
static_assert(offsetof(ANightmare_JunglePlantGroup_A_01_C, UberGraphFrame) == 0x000E70, "Member 'ANightmare_JunglePlantGroup_A_01_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ANightmare_JunglePlantGroup_A_01_C, FortCollisionResponseSwapper) == 0x000E78, "Member 'ANightmare_JunglePlantGroup_A_01_C::FortCollisionResponseSwapper' has a wrong offset!");
static_assert(offsetof(ANightmare_JunglePlantGroup_A_01_C, OverlapSphere) == 0x000E80, "Member 'ANightmare_JunglePlantGroup_A_01_C::OverlapSphere' has a wrong offset!");
static_assert(offsetof(ANightmare_JunglePlantGroup_A_01_C, GE_CornField_GC) == 0x000E88, "Member 'ANightmare_JunglePlantGroup_A_01_C::GE_CornField_GC' has a wrong offset!");
static_assert(offsetof(ANightmare_JunglePlantGroup_A_01_C, ShouldWobble) == 0x000E90, "Member 'ANightmare_JunglePlantGroup_A_01_C::ShouldWobble' has a wrong offset!");
static_assert(offsetof(ANightmare_JunglePlantGroup_A_01_C, PlayerVelocity) == 0x000E98, "Member 'ANightmare_JunglePlantGroup_A_01_C::PlayerVelocity' has a wrong offset!");
static_assert(offsetof(ANightmare_JunglePlantGroup_A_01_C, Mid) == 0x000EB0, "Member 'ANightmare_JunglePlantGroup_A_01_C::Mid' has a wrong offset!");

}

