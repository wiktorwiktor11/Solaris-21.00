﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Athena_Player_SneakySnowmanV2

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "GameplayAbilities_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Athena_Player_SneakySnowmanV2.Athena_Player_SneakySnowmanV2_C
// 0x0300 (0x0C90 - 0x0990)
class AAthena_Player_SneakySnowmanV2_C : public ABuildingGameplayActorBalloon
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0990(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                   Cylinder;                                          // 0x0998(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SM_SneakySnowman;                                  // 0x09A0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        Scene;                                             // 0x09A8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                         UpDOwn_NewTrack_0_BD67B22A4CF8433C66D2D5AAD822DE34; // 0x09B0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            UpDOwn__Direction_BD67B22A4CF8433C66D2D5AAD822DE34; // 0x09B4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9B5[0x3];                                      // 0x09B5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     UpDOwn;                                            // 0x09B8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         RotateToGroundTimeline_Rot_470A54CC466D5762D035668F5DF86D12; // 0x09C0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            RotateToGroundTimeline__Direction_470A54CC466D5762D035668F5DF86D12; // 0x09C4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9C5[0x3];                                      // 0x09C5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     RotateToGroundTimeline;                            // 0x09C8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         DropToFloor_Rot_129CAD134FB32339D63E11AA09B71F56;  // 0x09D0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         DropToFloor_Pos_129CAD134FB32339D63E11AA09B71F56;  // 0x09D4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            DropToFloor__Direction_129CAD134FB32339D63E11AA09B71F56; // 0x09D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9D9[0x7];                                      // 0x09D9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     DropToFloor;                                       // 0x09E0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         AdjustSnowman_Progress_F0A878244A424741C496E29D1303F240; // 0x09E8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            AdjustSnowman__Direction_F0A878244A424741C496E29D1303F240; // 0x09EC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9ED[0x3];                                      // 0x09ED(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     AdjustSnowman;                                     // 0x09F0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerPawn*                        PlayerPawn;                                        // 0x09F8(0x0008)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         TotalDamageTaken;                                  // 0x0A00(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_A04[0x4];                                      // 0x0A04(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FScalableFloat                         MaxHealth;                                         // 0x0A08(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRotator                               Adjust_StartZRot;                                  // 0x0A30(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FRotator                               Adjust_GoalRot;                                    // 0x0A48(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FVector                                Adjust_StartLocation;                              // 0x0A60(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          StartHidden;                                       // 0x0A78(0x0001)(Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                         Pad_A79[0x7];                                      // 0x0A79(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                Drop_StartPos;                                     // 0x0A80(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                Drop_GoalPos;                                      // 0x0A98(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               Drop_GoalRot;                                      // 0x0AB0(0x0018)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          Attached;                                          // 0x0AC8(0x0001)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_AC9[0x7];                                      // 0x0AC9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USoundBase*                             SoundOnJumpIn;                                     // 0x0AD0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             SoundOnJumpOut;                                    // 0x0AD8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ShouldSpawnDeathFX;                                // 0x0AE0(0x0001)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_AE1[0x7];                                      // 0x0AE1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                PropPosOffset;                                     // 0x0AE8(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                AttachmentOffset;                                  // 0x0B00(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                FakePosOffset;                                     // 0x0B18(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                RotationOffsetOnAttach;                            // 0x0B30(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 PropToSpawnOnExit;                                 // 0x0B48(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CurrentlyReplacedByFake;                           // 0x0B50(0x0001)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_B51[0x7];                                      // 0x0B51(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UClass*                                 FakeActorClass;                                    // 0x0B58(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 FakeActor;                                         // 0x0B60(0x0008)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ShouldMaintainRotationWhileHiding;                 // 0x0B68(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsPoppingOut;                                      // 0x0B69(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_B6A[0x6];                                      // 0x0B6A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TMulticastInlineDelegate<void()>              OnPopOut;                                          // 0x0B70(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TMulticastInlineDelegate<void()>              OnPopIn;                                           // 0x0B80(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UParticleSystem*                        P_JumpingOut;                                      // 0x0B90(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TMulticastInlineDelegate<void()>              OnJumpOut;                                         // 0x0B98(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          PlayerIsBeingForcedOut;                            // 0x0BA8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          SnapRotationToForwardOnStand;                      // 0x0BA9(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          RotateOnEnter;                                     // 0x0BAA(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_BAB[0x5];                                      // 0x0BAB(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class UParticleSystem*                        P_Death_Effects;                                   // 0x0BB0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             Death_SoundFX;                                     // 0x0BB8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsBeingReplacedWithProp;                           // 0x0BC0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_BC1[0x7];                                      // 0x0BC1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USoundBase*                             SoundOnCrouch;                                     // 0x0BC8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CurrentlyCrouching;                                // 0x0BD0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_BD1[0x7];                                      // 0x0BD1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FRotator                               Fake_GoalRot;                                      // 0x0BD8(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          RotateFakeToMatchGroundNormal;                     // 0x0BF0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_BF1[0x7];                                      // 0x0BF1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USoundBase*                             SoundOnStand;                                      // 0x0BF8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          SelfHidden;                                        // 0x0C00(0x0001)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	bool                                          PlayerHidden;                                      // 0x0C01(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C02[0x6];                                      // 0x0C02(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FRotator                               Fake_StartRot;                                     // 0x0C08(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                         Wobble_OriginalZ;                                  // 0x0C20(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C24[0x4];                                      // 0x0C24(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TMulticastInlineDelegate<void(class AActor* Prop)> OnSpawnProp;                                       // 0x0C28(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          Interacting;                                       // 0x0C38(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Swimming;                                          // 0x0C39(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C3A[0x6];                                      // 0x0C3A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                PreviousLocation;                                  // 0x0C40(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AAthena_SneakySnowmanV2_InteractSphere_C* InteractSphereRef;                                 // 0x0C58(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          RotatePropToMatchGroundNormal;                     // 0x0C60(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          RemoveTags;                                        // 0x0C61(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C62[0x2];                                      // 0x0C62(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         JumpOut_LateralSpeed;                              // 0x0C64(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         JumpOut_VerticalSpeed;                             // 0x0C68(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          TFS_HidePlayerIfUsingFake;                         // 0x0C6C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C6D[0x3];                                      // 0x0C6D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                TFS_CrouchedLocation;                              // 0x0C70(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          TFS_RotateFakeToGroundAngle;                       // 0x0C88(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          AllowFakeWhileMoving;                              // 0x0C89(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ForceKeepFakeOn;                                   // 0x0C8A(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void Added_EC27A22C40C7C9AD04DD8C8B05BB903A();
	void AdjustSnowman__FinishedFunc();
	void AdjustSnowman__UpdateFunc();
	void CheckForClipping_(bool* Clipping);
	void CheckIfCanJumpOut(class UObject* InteractingPawn, bool* CanInteract);
	void CrouchedCheck();
	void DBNO(class AFortPawn* FortPawn, bool bInIsDBNO);
	void Destroy();
	void Destroyed(class AActor* DestroyedActor);
	void DropToFloor__FinishedFunc();
	void DropToFloor__UpdateFunc();
	void ExecuteUbergraph_Athena_Player_SneakySnowmanV2(int32 EntryPoint);
	void FlattestHitResult(TArray<struct FHitResult>& NewParam, struct FHitResult* Flattest);
	struct FVector GetCrouchedLoc();
	struct FRotator GetFakeRotation();
	void IsMeshHeightScalePositive(bool* bReturnValue);
	void JustAttached();
	void MovementUpdated(float DeltaSeconds, const struct FVector& OldLocation, const struct FVector& OldVelocity);
	void OnBeginInteractWithSphere();
	void OnBlendOut_260935FE4E6B93550ACE848A0EA63F7B(class FName NotifyName);
	void OnClientExitVolume_Event_0(class APlayerState* Client, class AFortVolume* Volume);
	void OnCompleted_260935FE4E6B93550ACE848A0EA63F7B(class FName NotifyName);
	void OnDamageServer(float Damage, const struct FGameplayTagContainer& DamageTags, const struct FVector& Momentum, const struct FHitResult& HitInfo, class AController* InstigatedBy, class AActor* DamageCauser, const struct FGameplayEffectContextHandle& EffectContext);
	void OnDeathServer(float Damage, const struct FGameplayTagContainer& DamageTags, const struct FVector& Momentum, const struct FHitResult& HitInfo, class AController* InstigatedBy, class AActor* DamageCauser, const struct FGameplayEffectContextHandle& EffectContext);
	void OnEnterVehicle();
	void OnInteractWithFake(const class AFortPawn* InteractingPawn);
	void OnInterrupted_260935FE4E6B93550ACE848A0EA63F7B(class FName NotifyName);
	void OnInterruptInteractWithSphere();
	void OnNotifyBegin_260935FE4E6B93550ACE848A0EA63F7B(class FName NotifyName);
	void OnNotifyEnd_260935FE4E6B93550ACE848A0EA63F7B(class FName NotifyName);
	void OnPlayerGotSnowman();
	void OnRep_PlayerHidden();
	void OnRep_SelfHidden();
	void OnStartedUsingFake();
	void OnStoppedUsingFake();
	void OnWeaponChange();
	void PlayerDied(class AActor* DamagedActor, float Damage, class AController* InstigatedBy, class AActor* DamageCauser, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, class FName BoneName, const struct FVector& Momentum);
	void ReceiveBeginPlay();
	void RotateToGround();
	void RotateToGroundTimeline__FinishedFunc();
	void RotateToGroundTimeline__UpdateFunc();
	void RotateToStraight();
	void SetFakeActor(class ABuildingGameplayActor* FakeActor_0);
	void SetPlayerHidden(bool PlayerHidden_0);
	void SetPrevLocation();
	void SetSnowmanHidden(bool Hidden, bool InstantOnAll);
	void ShowFakeActor();
	void SpawnEffects();
	void SpawnProp(bool PlayMontage, bool RemoveTags_0);
	void StateChangedDelegate_Event_0(class AFortMinigame* Minigame, EFortMinigameState MinigameState);
	void StopHiding(bool LaunchPlayer);
	void StopRotatingFake();
	void ToggleFakeSnowman(bool ToggleFakeOn, bool HidePlayerIfTrue, const struct FVector& CrouchedLoc, bool RotateToGround_0, bool SetPoppingOut, bool CanReplaceWithProp);
	void ToggleFakeSnowman_Multicast(bool ToggleFakeOn, const struct FVector& CrouchedLoc, bool RotateToGround, bool SetPoppingOut, bool CanReplaceWithProp);
	void UpDOwn__FinishedFunc();
	void UpDOwn__UpdateFunc();
	void UserConstructionScript();
	void Wobble(float Strength, bool MoveUpAndDown);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Athena_Player_SneakySnowmanV2_C">();
	}
	static class AAthena_Player_SneakySnowmanV2_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AAthena_Player_SneakySnowmanV2_C>();
	}
};
static_assert(alignof(AAthena_Player_SneakySnowmanV2_C) == 0x000008, "Wrong alignment on AAthena_Player_SneakySnowmanV2_C");
static_assert(sizeof(AAthena_Player_SneakySnowmanV2_C) == 0x000C90, "Wrong size on AAthena_Player_SneakySnowmanV2_C");
static_assert(offsetof(AAthena_Player_SneakySnowmanV2_C, UberGraphFrame) == 0x000990, "Member 'AAthena_Player_SneakySnowmanV2_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AAthena_Player_SneakySnowmanV2_C, Cylinder) == 0x000998, "Member 'AAthena_Player_SneakySnowmanV2_C::Cylinder' has a wrong offset!");
static_assert(offsetof(AAthena_Player_SneakySnowmanV2_C, SM_SneakySnowman) == 0x0009A0, "Member 'AAthena_Player_SneakySnowmanV2_C::SM_SneakySnowman' has a wrong offset!");
static_assert(offsetof(AAthena_Player_SneakySnowmanV2_C, Scene) == 0x0009A8, "Member 'AAthena_Player_SneakySnowmanV2_C::Scene' has a wrong offset!");
static_assert(offsetof(AAthena_Player_SneakySnowmanV2_C, UpDOwn_NewTrack_0_BD67B22A4CF8433C66D2D5AAD822DE34) == 0x0009B0, "Member 'AAthena_Player_SneakySnowmanV2_C::UpDOwn_NewTrack_0_BD67B22A4CF8433C66D2D5AAD822DE34' has a wrong offset!");
static_assert(offsetof(AAthena_Player_SneakySnowmanV2_C, UpDOwn__Direction_BD67B22A4CF8433C66D2D5AAD822DE34) == 0x0009B4, "Member 'AAthena_Player_SneakySnowmanV2_C::UpDOwn__Direction_BD67B22A4CF8433C66D2D5AAD822DE34' has a wrong offset!");
static_assert(offsetof(AAthena_Player_SneakySnowmanV2_C, UpDOwn) == 0x0009B8, "Member 'AAthena_Player_SneakySnowmanV2_C::UpDOwn' has a wrong offset!");
static_assert(offsetof(AAthena_Player_SneakySnowmanV2_C, RotateToGroundTimeline_Rot_470A54CC466D5762D035668F5DF86D12) == 0x0009C0, "Member 'AAthena_Player_SneakySnowmanV2_C::RotateToGroundTimeline_Rot_470A54CC466D5762D035668F5DF86D12' has a wrong offset!");
static_assert(offsetof(AAthena_Player_SneakySnowmanV2_C, RotateToGroundTimeline__Direction_470A54CC466D5762D035668F5DF86D12) == 0x0009C4, "Member 'AAthena_Player_SneakySnowmanV2_C::RotateToGroundTimeline__Direction_470A54CC466D5762D035668F5DF86D12' has a wrong offset!");
static_assert(offsetof(AAthena_Player_SneakySnowmanV2_C, RotateToGroundTimeline) == 0x0009C8, "Member 'AAthena_Player_SneakySnowmanV2_C::RotateToGroundTimeline' has a wrong offset!");
static_assert(offsetof(AAthena_Player_SneakySnowmanV2_C, DropToFloor_Rot_129CAD134FB32339D63E11AA09B71F56) == 0x0009D0, "Member 'AAthena_Player_SneakySnowmanV2_C::DropToFloor_Rot_129CAD134FB32339D63E11AA09B71F56' has a wrong offset!");
static_assert(offsetof(AAthena_Player_SneakySnowmanV2_C, DropToFloor_Pos_129CAD134FB32339D63E11AA09B71F56) == 0x0009D4, "Member 'AAthena_Player_SneakySnowmanV2_C::DropToFloor_Pos_129CAD134FB32339D63E11AA09B71F56' has a wrong offset!");
static_assert(offsetof(AAthena_Player_SneakySnowmanV2_C, DropToFloor__Direction_129CAD134FB32339D63E11AA09B71F56) == 0x0009D8, "Member 'AAthena_Player_SneakySnowmanV2_C::DropToFloor__Direction_129CAD134FB32339D63E11AA09B71F56' has a wrong offset!");
static_assert(offsetof(AAthena_Player_SneakySnowmanV2_C, DropToFloor) == 0x0009E0, "Member 'AAthena_Player_SneakySnowmanV2_C::DropToFloor' has a wrong offset!");
static_assert(offsetof(AAthena_Player_SneakySnowmanV2_C, AdjustSnowman_Progress_F0A878244A424741C496E29D1303F240) == 0x0009E8, "Member 'AAthena_Player_SneakySnowmanV2_C::AdjustSnowman_Progress_F0A878244A424741C496E29D1303F240' has a wrong offset!");
static_assert(offsetof(AAthena_Player_SneakySnowmanV2_C, AdjustSnowman__Direction_F0A878244A424741C496E29D1303F240) == 0x0009EC, "Member 'AAthena_Player_SneakySnowmanV2_C::AdjustSnowman__Direction_F0A878244A424741C496E29D1303F240' has a wrong offset!");
static_assert(offsetof(AAthena_Player_SneakySnowmanV2_C, AdjustSnowman) == 0x0009F0, "Member 'AAthena_Player_SneakySnowmanV2_C::AdjustSnowman' has a wrong offset!");
static_assert(offsetof(AAthena_Player_SneakySnowmanV2_C, PlayerPawn) == 0x0009F8, "Member 'AAthena_Player_SneakySnowmanV2_C::PlayerPawn' has a wrong offset!");
static_assert(offsetof(AAthena_Player_SneakySnowmanV2_C, TotalDamageTaken) == 0x000A00, "Member 'AAthena_Player_SneakySnowmanV2_C::TotalDamageTaken' has a wrong offset!");
static_assert(offsetof(AAthena_Player_SneakySnowmanV2_C, MaxHealth) == 0x000A08, "Member 'AAthena_Player_SneakySnowmanV2_C::MaxHealth' has a wrong offset!");
static_assert(offsetof(AAthena_Player_SneakySnowmanV2_C, Adjust_StartZRot) == 0x000A30, "Member 'AAthena_Player_SneakySnowmanV2_C::Adjust_StartZRot' has a wrong offset!");
static_assert(offsetof(AAthena_Player_SneakySnowmanV2_C, Adjust_GoalRot) == 0x000A48, "Member 'AAthena_Player_SneakySnowmanV2_C::Adjust_GoalRot' has a wrong offset!");
static_assert(offsetof(AAthena_Player_SneakySnowmanV2_C, Adjust_StartLocation) == 0x000A60, "Member 'AAthena_Player_SneakySnowmanV2_C::Adjust_StartLocation' has a wrong offset!");
static_assert(offsetof(AAthena_Player_SneakySnowmanV2_C, StartHidden) == 0x000A78, "Member 'AAthena_Player_SneakySnowmanV2_C::StartHidden' has a wrong offset!");
static_assert(offsetof(AAthena_Player_SneakySnowmanV2_C, Drop_StartPos) == 0x000A80, "Member 'AAthena_Player_SneakySnowmanV2_C::Drop_StartPos' has a wrong offset!");
static_assert(offsetof(AAthena_Player_SneakySnowmanV2_C, Drop_GoalPos) == 0x000A98, "Member 'AAthena_Player_SneakySnowmanV2_C::Drop_GoalPos' has a wrong offset!");
static_assert(offsetof(AAthena_Player_SneakySnowmanV2_C, Drop_GoalRot) == 0x000AB0, "Member 'AAthena_Player_SneakySnowmanV2_C::Drop_GoalRot' has a wrong offset!");
static_assert(offsetof(AAthena_Player_SneakySnowmanV2_C, Attached) == 0x000AC8, "Member 'AAthena_Player_SneakySnowmanV2_C::Attached' has a wrong offset!");
static_assert(offsetof(AAthena_Player_SneakySnowmanV2_C, SoundOnJumpIn) == 0x000AD0, "Member 'AAthena_Player_SneakySnowmanV2_C::SoundOnJumpIn' has a wrong offset!");
static_assert(offsetof(AAthena_Player_SneakySnowmanV2_C, SoundOnJumpOut) == 0x000AD8, "Member 'AAthena_Player_SneakySnowmanV2_C::SoundOnJumpOut' has a wrong offset!");
static_assert(offsetof(AAthena_Player_SneakySnowmanV2_C, ShouldSpawnDeathFX) == 0x000AE0, "Member 'AAthena_Player_SneakySnowmanV2_C::ShouldSpawnDeathFX' has a wrong offset!");
static_assert(offsetof(AAthena_Player_SneakySnowmanV2_C, PropPosOffset) == 0x000AE8, "Member 'AAthena_Player_SneakySnowmanV2_C::PropPosOffset' has a wrong offset!");
static_assert(offsetof(AAthena_Player_SneakySnowmanV2_C, AttachmentOffset) == 0x000B00, "Member 'AAthena_Player_SneakySnowmanV2_C::AttachmentOffset' has a wrong offset!");
static_assert(offsetof(AAthena_Player_SneakySnowmanV2_C, FakePosOffset) == 0x000B18, "Member 'AAthena_Player_SneakySnowmanV2_C::FakePosOffset' has a wrong offset!");
static_assert(offsetof(AAthena_Player_SneakySnowmanV2_C, RotationOffsetOnAttach) == 0x000B30, "Member 'AAthena_Player_SneakySnowmanV2_C::RotationOffsetOnAttach' has a wrong offset!");
static_assert(offsetof(AAthena_Player_SneakySnowmanV2_C, PropToSpawnOnExit) == 0x000B48, "Member 'AAthena_Player_SneakySnowmanV2_C::PropToSpawnOnExit' has a wrong offset!");
static_assert(offsetof(AAthena_Player_SneakySnowmanV2_C, CurrentlyReplacedByFake) == 0x000B50, "Member 'AAthena_Player_SneakySnowmanV2_C::CurrentlyReplacedByFake' has a wrong offset!");
static_assert(offsetof(AAthena_Player_SneakySnowmanV2_C, FakeActorClass) == 0x000B58, "Member 'AAthena_Player_SneakySnowmanV2_C::FakeActorClass' has a wrong offset!");
static_assert(offsetof(AAthena_Player_SneakySnowmanV2_C, FakeActor) == 0x000B60, "Member 'AAthena_Player_SneakySnowmanV2_C::FakeActor' has a wrong offset!");
static_assert(offsetof(AAthena_Player_SneakySnowmanV2_C, ShouldMaintainRotationWhileHiding) == 0x000B68, "Member 'AAthena_Player_SneakySnowmanV2_C::ShouldMaintainRotationWhileHiding' has a wrong offset!");
static_assert(offsetof(AAthena_Player_SneakySnowmanV2_C, IsPoppingOut) == 0x000B69, "Member 'AAthena_Player_SneakySnowmanV2_C::IsPoppingOut' has a wrong offset!");
static_assert(offsetof(AAthena_Player_SneakySnowmanV2_C, OnPopOut) == 0x000B70, "Member 'AAthena_Player_SneakySnowmanV2_C::OnPopOut' has a wrong offset!");
static_assert(offsetof(AAthena_Player_SneakySnowmanV2_C, OnPopIn) == 0x000B80, "Member 'AAthena_Player_SneakySnowmanV2_C::OnPopIn' has a wrong offset!");
static_assert(offsetof(AAthena_Player_SneakySnowmanV2_C, P_JumpingOut) == 0x000B90, "Member 'AAthena_Player_SneakySnowmanV2_C::P_JumpingOut' has a wrong offset!");
static_assert(offsetof(AAthena_Player_SneakySnowmanV2_C, OnJumpOut) == 0x000B98, "Member 'AAthena_Player_SneakySnowmanV2_C::OnJumpOut' has a wrong offset!");
static_assert(offsetof(AAthena_Player_SneakySnowmanV2_C, PlayerIsBeingForcedOut) == 0x000BA8, "Member 'AAthena_Player_SneakySnowmanV2_C::PlayerIsBeingForcedOut' has a wrong offset!");
static_assert(offsetof(AAthena_Player_SneakySnowmanV2_C, SnapRotationToForwardOnStand) == 0x000BA9, "Member 'AAthena_Player_SneakySnowmanV2_C::SnapRotationToForwardOnStand' has a wrong offset!");
static_assert(offsetof(AAthena_Player_SneakySnowmanV2_C, RotateOnEnter) == 0x000BAA, "Member 'AAthena_Player_SneakySnowmanV2_C::RotateOnEnter' has a wrong offset!");
static_assert(offsetof(AAthena_Player_SneakySnowmanV2_C, P_Death_Effects) == 0x000BB0, "Member 'AAthena_Player_SneakySnowmanV2_C::P_Death_Effects' has a wrong offset!");
static_assert(offsetof(AAthena_Player_SneakySnowmanV2_C, Death_SoundFX) == 0x000BB8, "Member 'AAthena_Player_SneakySnowmanV2_C::Death_SoundFX' has a wrong offset!");
static_assert(offsetof(AAthena_Player_SneakySnowmanV2_C, IsBeingReplacedWithProp) == 0x000BC0, "Member 'AAthena_Player_SneakySnowmanV2_C::IsBeingReplacedWithProp' has a wrong offset!");
static_assert(offsetof(AAthena_Player_SneakySnowmanV2_C, SoundOnCrouch) == 0x000BC8, "Member 'AAthena_Player_SneakySnowmanV2_C::SoundOnCrouch' has a wrong offset!");
static_assert(offsetof(AAthena_Player_SneakySnowmanV2_C, CurrentlyCrouching) == 0x000BD0, "Member 'AAthena_Player_SneakySnowmanV2_C::CurrentlyCrouching' has a wrong offset!");
static_assert(offsetof(AAthena_Player_SneakySnowmanV2_C, Fake_GoalRot) == 0x000BD8, "Member 'AAthena_Player_SneakySnowmanV2_C::Fake_GoalRot' has a wrong offset!");
static_assert(offsetof(AAthena_Player_SneakySnowmanV2_C, RotateFakeToMatchGroundNormal) == 0x000BF0, "Member 'AAthena_Player_SneakySnowmanV2_C::RotateFakeToMatchGroundNormal' has a wrong offset!");
static_assert(offsetof(AAthena_Player_SneakySnowmanV2_C, SoundOnStand) == 0x000BF8, "Member 'AAthena_Player_SneakySnowmanV2_C::SoundOnStand' has a wrong offset!");
static_assert(offsetof(AAthena_Player_SneakySnowmanV2_C, SelfHidden) == 0x000C00, "Member 'AAthena_Player_SneakySnowmanV2_C::SelfHidden' has a wrong offset!");
static_assert(offsetof(AAthena_Player_SneakySnowmanV2_C, PlayerHidden) == 0x000C01, "Member 'AAthena_Player_SneakySnowmanV2_C::PlayerHidden' has a wrong offset!");
static_assert(offsetof(AAthena_Player_SneakySnowmanV2_C, Fake_StartRot) == 0x000C08, "Member 'AAthena_Player_SneakySnowmanV2_C::Fake_StartRot' has a wrong offset!");
static_assert(offsetof(AAthena_Player_SneakySnowmanV2_C, Wobble_OriginalZ) == 0x000C20, "Member 'AAthena_Player_SneakySnowmanV2_C::Wobble_OriginalZ' has a wrong offset!");
static_assert(offsetof(AAthena_Player_SneakySnowmanV2_C, OnSpawnProp) == 0x000C28, "Member 'AAthena_Player_SneakySnowmanV2_C::OnSpawnProp' has a wrong offset!");
static_assert(offsetof(AAthena_Player_SneakySnowmanV2_C, Interacting) == 0x000C38, "Member 'AAthena_Player_SneakySnowmanV2_C::Interacting' has a wrong offset!");
static_assert(offsetof(AAthena_Player_SneakySnowmanV2_C, Swimming) == 0x000C39, "Member 'AAthena_Player_SneakySnowmanV2_C::Swimming' has a wrong offset!");
static_assert(offsetof(AAthena_Player_SneakySnowmanV2_C, PreviousLocation) == 0x000C40, "Member 'AAthena_Player_SneakySnowmanV2_C::PreviousLocation' has a wrong offset!");
static_assert(offsetof(AAthena_Player_SneakySnowmanV2_C, InteractSphereRef) == 0x000C58, "Member 'AAthena_Player_SneakySnowmanV2_C::InteractSphereRef' has a wrong offset!");
static_assert(offsetof(AAthena_Player_SneakySnowmanV2_C, RotatePropToMatchGroundNormal) == 0x000C60, "Member 'AAthena_Player_SneakySnowmanV2_C::RotatePropToMatchGroundNormal' has a wrong offset!");
static_assert(offsetof(AAthena_Player_SneakySnowmanV2_C, RemoveTags) == 0x000C61, "Member 'AAthena_Player_SneakySnowmanV2_C::RemoveTags' has a wrong offset!");
static_assert(offsetof(AAthena_Player_SneakySnowmanV2_C, JumpOut_LateralSpeed) == 0x000C64, "Member 'AAthena_Player_SneakySnowmanV2_C::JumpOut_LateralSpeed' has a wrong offset!");
static_assert(offsetof(AAthena_Player_SneakySnowmanV2_C, JumpOut_VerticalSpeed) == 0x000C68, "Member 'AAthena_Player_SneakySnowmanV2_C::JumpOut_VerticalSpeed' has a wrong offset!");
static_assert(offsetof(AAthena_Player_SneakySnowmanV2_C, TFS_HidePlayerIfUsingFake) == 0x000C6C, "Member 'AAthena_Player_SneakySnowmanV2_C::TFS_HidePlayerIfUsingFake' has a wrong offset!");
static_assert(offsetof(AAthena_Player_SneakySnowmanV2_C, TFS_CrouchedLocation) == 0x000C70, "Member 'AAthena_Player_SneakySnowmanV2_C::TFS_CrouchedLocation' has a wrong offset!");
static_assert(offsetof(AAthena_Player_SneakySnowmanV2_C, TFS_RotateFakeToGroundAngle) == 0x000C88, "Member 'AAthena_Player_SneakySnowmanV2_C::TFS_RotateFakeToGroundAngle' has a wrong offset!");
static_assert(offsetof(AAthena_Player_SneakySnowmanV2_C, AllowFakeWhileMoving) == 0x000C89, "Member 'AAthena_Player_SneakySnowmanV2_C::AllowFakeWhileMoving' has a wrong offset!");
static_assert(offsetof(AAthena_Player_SneakySnowmanV2_C, ForceKeepFakeOn) == 0x000C8A, "Member 'AAthena_Player_SneakySnowmanV2_C::ForceKeepFakeOn' has a wrong offset!");

}

