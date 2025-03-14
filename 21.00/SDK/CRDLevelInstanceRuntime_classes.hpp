﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CRDLevelInstanceRuntime

#include "Basic.hpp"

#include "FortniteGame_structs.hpp"
#include "FortniteGame_classes.hpp"
#include "CoreUObject_structs.hpp"
#include "PlayspaceSystem_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// Class CRDLevelInstanceRuntime.FortAthenaMutator_LevelInstanceDevice
// 0x0008 (0x0320 - 0x0318)
class AFortAthenaMutator_LevelInstanceDevice final : public AFortAthenaMutator
{
public:
	class ALevelInstanceGameplayVolume*           CachedGameplayVolume;                              // 0x0318(0x0008)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAthenaMutator_LevelInstanceDevice">();
	}
	static class AFortAthenaMutator_LevelInstanceDevice* GetDefaultObj()
	{
		return GetDefaultObjImpl<AFortAthenaMutator_LevelInstanceDevice>();
	}
};
static_assert(alignof(AFortAthenaMutator_LevelInstanceDevice) == 0x000008, "Wrong alignment on AFortAthenaMutator_LevelInstanceDevice");
static_assert(sizeof(AFortAthenaMutator_LevelInstanceDevice) == 0x000320, "Wrong size on AFortAthenaMutator_LevelInstanceDevice");
static_assert(offsetof(AFortAthenaMutator_LevelInstanceDevice, CachedGameplayVolume) == 0x000318, "Member 'AFortAthenaMutator_LevelInstanceDevice::CachedGameplayVolume' has a wrong offset!");

// Class CRDLevelInstanceRuntime.LevelInstanceGameplayVolume
// 0x0160 (0x0458 - 0x02F8)
class ALevelInstanceGameplayVolume final : public AGameplayVolume
{
public:
	uint8                                         Pad_2F8[0x8];                                      // 0x02F8(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	TMulticastInlineDelegate<void(class ALevelInstanceGameplayVolume* LevelInstanceGameplayVolume)> OnLevelInstanceResolved;                           // 0x0300(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                         Pad_310[0x30];                                     // 0x0310(0x0030)(Fixing Size After Last Property [ Dumper-7 ])
	TMulticastInlineDelegate<void(bool bNewDisabled)> OnDisabledStateChanged;                            // 0x0340(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	TMulticastInlineDelegate<void(class ALevelInstanceGameplayVolume* LevelInstanceGameplayVolume, const struct FGuid& LevelInstanceGuid)> OnLevelInstanceGuidChanged;                        // 0x0350(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	TMulticastInlineDelegate<void(class ALevelInstanceGameplayVolume* LevelInstanceGameplayVolume, const class FString& LevelInstanceName)> OnLevelInstanceNameChanged;                        // 0x0360(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	TMulticastInlineDelegate<void(class ALevelInstanceGameplayVolume* LevelInstanceGameplayVolume, int32 SizeX, int32 SizeY, int32 Height)> OnLevelInstanceSizeChanged;                        // 0x0370(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	TMulticastInlineDelegate<void(class ALevelInstanceGameplayVolume* LevelInstanceGameplayVolume, TSoftObjectPtr<class UFortCreativeActorCollection> ContentCollection)> OnLevelInstanceContentCollectionChanged;           // 0x0380(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                         Pad_390[0x1];                                      // 0x0390(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	bool                                          bEditMode;                                         // 0x0391(0x0001)(Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                          bDisabled;                                         // 0x0392(0x0001)(Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	ESpatialLoadingState                          LoadingState;                                      // 0x0393(0x0001)(Net, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_394[0x4];                                      // 0x0394(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 LevelInstanceName;                                 // 0x0398(0x0010)(Net, ZeroConstructor, Transient, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                          bInstanceLoaded;                                   // 0x03A8(0x0001)(Net, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                          bWantsLevelLoaded;                                 // 0x03A9(0x0001)(Net, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_3AA[0x6];                                      // 0x03AA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class AFortMinigame*                          CachedMinigame;                                    // 0x03B0(0x0008)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortMutatorListComponent*              MutatorListComponent;                              // 0x03B8(0x0008)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortClassTrackerComponent*             ClassFilterComponent;                              // 0x03C0(0x0008)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class UClass*>                         BlacklistedClasses;                                // 0x03C8(0x0010)(Edit, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	uint8                                         Pad_3D8[0x50];                                     // 0x03D8(0x0050)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGuid                                  LevelInstanceSaveActorGuid;                        // 0x0428(0x0010)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class AFortLevelInstanceSaveActor*            LevelInstanceSaveActor;                            // 0x0438(0x0008)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_440[0x18];                                     // 0x0440(0x0018)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void CheckForOverlappingVolumes();
	class AFortLevelInstanceSaveActor* CreateLevelInstanceSaveActor();
	void HandleActorHealthChanged(class AActor* Actor, float NewHealth);
	void InstantiateFromLevelInstanceSaveActor();
	void LevelInstanceBeingDestroyed();
	void LevelInstanceContentChanged(const class AActor* InstigatorActor);
	void LevelInstanceContentCollectionChanged(const class AActor* InstigatorActor, TSoftObjectPtr<class UFortCreativeActorCollection> ContentCollection);
	void LevelInstanceNameChanged(const class FString& Name_0);
	void LevelInstanceSizeChanged(const class AActor* InstigatorActor);
	void OnMinigameStateChanged(class AFortMinigame* Minigame, EFortMinigameState MinigameState);
	void OnRep_EditMode();
	void OnRep_IsDisabled();
	void OnVolumeChanged();
	void RemoveActorWhenDied(class AActor* DamagedActor, float Damage, class AController* InstigatedBy, class AActor* DamageCauser, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, class FName BoneName, const struct FVector& Momentum);
	void RemoveActorWhenEndPlay(class AActor* Actor, const EEndPlayReason EndPlayReason);
	void SetEditMode(bool bInEditMode);
	void SetLevelInstanceActorGuid(const struct FGuid& InLevelInstanceActorGuid);
	void SetLevelInstanceContentCollection(TSoftObjectPtr<class UFortCreativeActorCollection> ContentCollection);
	void SetLevelInstanceName(const class FString& InName);
	void SetReadyForInstantiation(bool bReady);
	void SetWantsLevelLoaded(bool bInWantsLevelLoaded);

	class FString GetLevelInstanceName() const;
	bool IsDisabled() const;
	bool IsInEditMode() const;
	bool IsPreviewActor() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"LevelInstanceGameplayVolume">();
	}
	static class ALevelInstanceGameplayVolume* GetDefaultObj()
	{
		return GetDefaultObjImpl<ALevelInstanceGameplayVolume>();
	}
};
static_assert(alignof(ALevelInstanceGameplayVolume) == 0x000008, "Wrong alignment on ALevelInstanceGameplayVolume");
static_assert(sizeof(ALevelInstanceGameplayVolume) == 0x000458, "Wrong size on ALevelInstanceGameplayVolume");
static_assert(offsetof(ALevelInstanceGameplayVolume, OnLevelInstanceResolved) == 0x000300, "Member 'ALevelInstanceGameplayVolume::OnLevelInstanceResolved' has a wrong offset!");
static_assert(offsetof(ALevelInstanceGameplayVolume, OnDisabledStateChanged) == 0x000340, "Member 'ALevelInstanceGameplayVolume::OnDisabledStateChanged' has a wrong offset!");
static_assert(offsetof(ALevelInstanceGameplayVolume, OnLevelInstanceGuidChanged) == 0x000350, "Member 'ALevelInstanceGameplayVolume::OnLevelInstanceGuidChanged' has a wrong offset!");
static_assert(offsetof(ALevelInstanceGameplayVolume, OnLevelInstanceNameChanged) == 0x000360, "Member 'ALevelInstanceGameplayVolume::OnLevelInstanceNameChanged' has a wrong offset!");
static_assert(offsetof(ALevelInstanceGameplayVolume, OnLevelInstanceSizeChanged) == 0x000370, "Member 'ALevelInstanceGameplayVolume::OnLevelInstanceSizeChanged' has a wrong offset!");
static_assert(offsetof(ALevelInstanceGameplayVolume, OnLevelInstanceContentCollectionChanged) == 0x000380, "Member 'ALevelInstanceGameplayVolume::OnLevelInstanceContentCollectionChanged' has a wrong offset!");
static_assert(offsetof(ALevelInstanceGameplayVolume, bEditMode) == 0x000391, "Member 'ALevelInstanceGameplayVolume::bEditMode' has a wrong offset!");
static_assert(offsetof(ALevelInstanceGameplayVolume, bDisabled) == 0x000392, "Member 'ALevelInstanceGameplayVolume::bDisabled' has a wrong offset!");
static_assert(offsetof(ALevelInstanceGameplayVolume, LoadingState) == 0x000393, "Member 'ALevelInstanceGameplayVolume::LoadingState' has a wrong offset!");
static_assert(offsetof(ALevelInstanceGameplayVolume, LevelInstanceName) == 0x000398, "Member 'ALevelInstanceGameplayVolume::LevelInstanceName' has a wrong offset!");
static_assert(offsetof(ALevelInstanceGameplayVolume, bInstanceLoaded) == 0x0003A8, "Member 'ALevelInstanceGameplayVolume::bInstanceLoaded' has a wrong offset!");
static_assert(offsetof(ALevelInstanceGameplayVolume, bWantsLevelLoaded) == 0x0003A9, "Member 'ALevelInstanceGameplayVolume::bWantsLevelLoaded' has a wrong offset!");
static_assert(offsetof(ALevelInstanceGameplayVolume, CachedMinigame) == 0x0003B0, "Member 'ALevelInstanceGameplayVolume::CachedMinigame' has a wrong offset!");
static_assert(offsetof(ALevelInstanceGameplayVolume, MutatorListComponent) == 0x0003B8, "Member 'ALevelInstanceGameplayVolume::MutatorListComponent' has a wrong offset!");
static_assert(offsetof(ALevelInstanceGameplayVolume, ClassFilterComponent) == 0x0003C0, "Member 'ALevelInstanceGameplayVolume::ClassFilterComponent' has a wrong offset!");
static_assert(offsetof(ALevelInstanceGameplayVolume, BlacklistedClasses) == 0x0003C8, "Member 'ALevelInstanceGameplayVolume::BlacklistedClasses' has a wrong offset!");
static_assert(offsetof(ALevelInstanceGameplayVolume, LevelInstanceSaveActorGuid) == 0x000428, "Member 'ALevelInstanceGameplayVolume::LevelInstanceSaveActorGuid' has a wrong offset!");
static_assert(offsetof(ALevelInstanceGameplayVolume, LevelInstanceSaveActor) == 0x000438, "Member 'ALevelInstanceGameplayVolume::LevelInstanceSaveActor' has a wrong offset!");

// Class CRDLevelInstanceRuntime.LevelInstanceItemListComponent
// 0x0000 (0x0128 - 0x0128)
class ULevelInstanceItemListComponent final : public UFortMinigameItemContainerComponent
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"LevelInstanceItemListComponent">();
	}
	static class ULevelInstanceItemListComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULevelInstanceItemListComponent>();
	}
};
static_assert(alignof(ULevelInstanceItemListComponent) == 0x000008, "Wrong alignment on ULevelInstanceItemListComponent");
static_assert(sizeof(ULevelInstanceItemListComponent) == 0x000128, "Wrong size on ULevelInstanceItemListComponent");

}

