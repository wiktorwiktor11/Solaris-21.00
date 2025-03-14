﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BGA_BouncePad_Rope_Parallel

#include "Basic.hpp"

#include "Parent_BuildingPropActor_classes.hpp"
#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BGA_BouncePad_Rope_Parallel.BGA_BouncePad_Rope_Parallel_C
// 0x00A8 (0x1020 - 0x0F78)
class ABGA_BouncePad_Rope_Parallel_C final : public AParent_BuildingPropActor_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BGA_BouncePad_Rope_Parallel_C;      // 0x0F78(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UFortLinkToActorComponent*              FortLinkToActor;                                   // 0x0F80(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                        Env_Rope_Ambient;                                  // 0x0F88(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   EditorPlane;                                       // 0x0F90(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UArrowComponent*                        Arrow;                                             // 0x0F98(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UInstancedStaticMeshComponent*          InstancedStaticMesh;                               // 0x0FA0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Spiderweb_Anchor;                                  // 0x0FA8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TSoftObjectPtr<class ABuildingActor>          Attatched_to_BGA;                                  // 0x0FB0(0x0028)(Edit, BlueprintVisible, HasGetValueTypeHash)
	class ABGA_BouncePad_Parallel_C*              Attached_Web;                                      // 0x0FD8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Socket_To_Attach_To;                               // 0x0FE0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Auto_Snap_End_Point;                               // 0x0FE4(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_FE5[0x3];                                      // 0x0FE5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                ShaderOffsetDirection;                             // 0x0FE8(0x0018)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class FName>                           SocketlistForPad;                                  // 0x1000(0x0010)(Edit, BlueprintVisible)
	class UMaterialInstanceDynamic*               MID_ConnectionRopes;                               // 0x1010(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               MID_Anchor;                                        // 0x1018(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void BndEvt__BGA_BouncePad_Rope_Parallel_FortLinkToActor_K2Node_ComponentBoundEvent_0_OnLinkedActorDestroyed__DelegateSignature(class AActor* DamageCauser);
	void CalculateClosestSockets(TArray<class FName>* Socketlist_names1);
	void ConnectToSpiderweb();
	void ExecuteUbergraph_BGA_BouncePad_Rope_Parallel(int32 EntryPoint);
	void GetConnectedSocketLocation(struct FVector* Left, struct FVector* Center, struct FVector* Right, class FName* Center_Socket, class FName* Left_Socket, class FName* Right_Socket);
	void SetMaterialParameters(float MaxRadiusWPO, const struct FVector& WindPlaneVector, const struct FVector& CenterLocationWS, const struct FVector& Direction, float MasterScale);
	void UpdateConnection();
	void UpdateMaterialOnBounce(const struct FVector& BouncePosition, float BounceIntensity, float GameTimeinSeconds);
	void UserConstructionScript();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BGA_BouncePad_Rope_Parallel_C">();
	}
	static class ABGA_BouncePad_Rope_Parallel_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABGA_BouncePad_Rope_Parallel_C>();
	}
};
static_assert(alignof(ABGA_BouncePad_Rope_Parallel_C) == 0x000008, "Wrong alignment on ABGA_BouncePad_Rope_Parallel_C");
static_assert(sizeof(ABGA_BouncePad_Rope_Parallel_C) == 0x001020, "Wrong size on ABGA_BouncePad_Rope_Parallel_C");
static_assert(offsetof(ABGA_BouncePad_Rope_Parallel_C, UberGraphFrame_BGA_BouncePad_Rope_Parallel_C) == 0x000F78, "Member 'ABGA_BouncePad_Rope_Parallel_C::UberGraphFrame_BGA_BouncePad_Rope_Parallel_C' has a wrong offset!");
static_assert(offsetof(ABGA_BouncePad_Rope_Parallel_C, FortLinkToActor) == 0x000F80, "Member 'ABGA_BouncePad_Rope_Parallel_C::FortLinkToActor' has a wrong offset!");
static_assert(offsetof(ABGA_BouncePad_Rope_Parallel_C, Env_Rope_Ambient) == 0x000F88, "Member 'ABGA_BouncePad_Rope_Parallel_C::Env_Rope_Ambient' has a wrong offset!");
static_assert(offsetof(ABGA_BouncePad_Rope_Parallel_C, EditorPlane) == 0x000F90, "Member 'ABGA_BouncePad_Rope_Parallel_C::EditorPlane' has a wrong offset!");
static_assert(offsetof(ABGA_BouncePad_Rope_Parallel_C, Arrow) == 0x000F98, "Member 'ABGA_BouncePad_Rope_Parallel_C::Arrow' has a wrong offset!");
static_assert(offsetof(ABGA_BouncePad_Rope_Parallel_C, InstancedStaticMesh) == 0x000FA0, "Member 'ABGA_BouncePad_Rope_Parallel_C::InstancedStaticMesh' has a wrong offset!");
static_assert(offsetof(ABGA_BouncePad_Rope_Parallel_C, Spiderweb_Anchor) == 0x000FA8, "Member 'ABGA_BouncePad_Rope_Parallel_C::Spiderweb_Anchor' has a wrong offset!");
static_assert(offsetof(ABGA_BouncePad_Rope_Parallel_C, Attatched_to_BGA) == 0x000FB0, "Member 'ABGA_BouncePad_Rope_Parallel_C::Attatched_to_BGA' has a wrong offset!");
static_assert(offsetof(ABGA_BouncePad_Rope_Parallel_C, Attached_Web) == 0x000FD8, "Member 'ABGA_BouncePad_Rope_Parallel_C::Attached_Web' has a wrong offset!");
static_assert(offsetof(ABGA_BouncePad_Rope_Parallel_C, Socket_To_Attach_To) == 0x000FE0, "Member 'ABGA_BouncePad_Rope_Parallel_C::Socket_To_Attach_To' has a wrong offset!");
static_assert(offsetof(ABGA_BouncePad_Rope_Parallel_C, Auto_Snap_End_Point) == 0x000FE4, "Member 'ABGA_BouncePad_Rope_Parallel_C::Auto_Snap_End_Point' has a wrong offset!");
static_assert(offsetof(ABGA_BouncePad_Rope_Parallel_C, ShaderOffsetDirection) == 0x000FE8, "Member 'ABGA_BouncePad_Rope_Parallel_C::ShaderOffsetDirection' has a wrong offset!");
static_assert(offsetof(ABGA_BouncePad_Rope_Parallel_C, SocketlistForPad) == 0x001000, "Member 'ABGA_BouncePad_Rope_Parallel_C::SocketlistForPad' has a wrong offset!");
static_assert(offsetof(ABGA_BouncePad_Rope_Parallel_C, MID_ConnectionRopes) == 0x001010, "Member 'ABGA_BouncePad_Rope_Parallel_C::MID_ConnectionRopes' has a wrong offset!");
static_assert(offsetof(ABGA_BouncePad_Rope_Parallel_C, MID_Anchor) == 0x001018, "Member 'ABGA_BouncePad_Rope_Parallel_C::MID_Anchor' has a wrong offset!");

}

