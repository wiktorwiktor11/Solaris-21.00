﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GCN_Daisy_Geyser_Launch

#include "Basic.hpp"

#include "GameplayAbilities_structs.hpp"
#include "GameplayTags_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function GCN_Daisy_Geyser_Launch.GCN_Daisy_Geyser_Launch_C.ChooseSoundAsset
// 0x0060 (0x0060 - 0x0000)
struct GCN_Daisy_Geyser_Launch_C_ChooseSoundAsset final
{
public:
	class AActor*                                 TargetActor;                                       // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 Instigator;                                        // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             AudioAsset;                                        // 0x0010(0x0008)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        RootComponent;                                     // 0x0018(0x0008)(Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_21[0x7];                                       // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USceneComponent*                        CallFunc_K2_GetRootComponent_ReturnValue;          // 0x0028(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_31[0x7];                                       // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USceneComponent*                        CallFunc_K2_GetRootComponent_ReturnValue_1;        // 0x0038(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        CallFunc_K2_GetRootComponent_ReturnValue_2;        // 0x0040(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             CallFunc_GetAudioForPlayerEvent_AudioAsset;        // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_51[0x7];                                       // 0x0051(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USceneComponent*                        K2Node_Select_Default;                             // 0x0058(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GCN_Daisy_Geyser_Launch_C_ChooseSoundAsset) == 0x000008, "Wrong alignment on GCN_Daisy_Geyser_Launch_C_ChooseSoundAsset");
static_assert(sizeof(GCN_Daisy_Geyser_Launch_C_ChooseSoundAsset) == 0x000060, "Wrong size on GCN_Daisy_Geyser_Launch_C_ChooseSoundAsset");
static_assert(offsetof(GCN_Daisy_Geyser_Launch_C_ChooseSoundAsset, TargetActor) == 0x000000, "Member 'GCN_Daisy_Geyser_Launch_C_ChooseSoundAsset::TargetActor' has a wrong offset!");
static_assert(offsetof(GCN_Daisy_Geyser_Launch_C_ChooseSoundAsset, Instigator) == 0x000008, "Member 'GCN_Daisy_Geyser_Launch_C_ChooseSoundAsset::Instigator' has a wrong offset!");
static_assert(offsetof(GCN_Daisy_Geyser_Launch_C_ChooseSoundAsset, AudioAsset) == 0x000010, "Member 'GCN_Daisy_Geyser_Launch_C_ChooseSoundAsset::AudioAsset' has a wrong offset!");
static_assert(offsetof(GCN_Daisy_Geyser_Launch_C_ChooseSoundAsset, RootComponent) == 0x000018, "Member 'GCN_Daisy_Geyser_Launch_C_ChooseSoundAsset::RootComponent' has a wrong offset!");
static_assert(offsetof(GCN_Daisy_Geyser_Launch_C_ChooseSoundAsset, Temp_bool_Variable) == 0x000020, "Member 'GCN_Daisy_Geyser_Launch_C_ChooseSoundAsset::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(GCN_Daisy_Geyser_Launch_C_ChooseSoundAsset, CallFunc_K2_GetRootComponent_ReturnValue) == 0x000028, "Member 'GCN_Daisy_Geyser_Launch_C_ChooseSoundAsset::CallFunc_K2_GetRootComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_Daisy_Geyser_Launch_C_ChooseSoundAsset, CallFunc_IsValid_ReturnValue) == 0x000030, "Member 'GCN_Daisy_Geyser_Launch_C_ChooseSoundAsset::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_Daisy_Geyser_Launch_C_ChooseSoundAsset, CallFunc_K2_GetRootComponent_ReturnValue_1) == 0x000038, "Member 'GCN_Daisy_Geyser_Launch_C_ChooseSoundAsset::CallFunc_K2_GetRootComponent_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GCN_Daisy_Geyser_Launch_C_ChooseSoundAsset, CallFunc_K2_GetRootComponent_ReturnValue_2) == 0x000040, "Member 'GCN_Daisy_Geyser_Launch_C_ChooseSoundAsset::CallFunc_K2_GetRootComponent_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(GCN_Daisy_Geyser_Launch_C_ChooseSoundAsset, CallFunc_GetAudioForPlayerEvent_AudioAsset) == 0x000048, "Member 'GCN_Daisy_Geyser_Launch_C_ChooseSoundAsset::CallFunc_GetAudioForPlayerEvent_AudioAsset' has a wrong offset!");
static_assert(offsetof(GCN_Daisy_Geyser_Launch_C_ChooseSoundAsset, CallFunc_EqualEqual_ObjectObject_ReturnValue) == 0x000050, "Member 'GCN_Daisy_Geyser_Launch_C_ChooseSoundAsset::CallFunc_EqualEqual_ObjectObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_Daisy_Geyser_Launch_C_ChooseSoundAsset, K2Node_Select_Default) == 0x000058, "Member 'GCN_Daisy_Geyser_Launch_C_ChooseSoundAsset::K2Node_Select_Default' has a wrong offset!");

// Function GCN_Daisy_Geyser_Launch.GCN_Daisy_Geyser_Launch_C.OnBurstGeneric
// 0x01F0 (0x01F0 - 0x0000)
struct GCN_Daisy_Geyser_Launch_C_OnBurstGeneric final
{
public:
	class AActor*                                 MyTarget;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayCueParameters                 Parameters;                                        // 0x0008(0x00D0)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	TArray<class UFXSystemComponent*>             ParticleComponents;                                // 0x00D8(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	TArray<class UAudioComponent*>                AudioComponents;                                   // 0x00E8(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	class UMatineeCameraShake*                    BurstCameraShakeInstance;                          // 0x00F8(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ADecalActor*                            BurstDecalInstance;                                // 0x0100(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakGameplayCueParameters_NormalizedMagnitude; // 0x0108(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakGameplayCueParameters_RawMagnitude;  // 0x010C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayEffectContextHandle           CallFunc_BreakGameplayCueParameters_EffectContext; // 0x0110(0x0018)()
	struct FGameplayTag                           CallFunc_BreakGameplayCueParameters_MatchedTagName; // 0x0128(0x0004)(NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           CallFunc_BreakGameplayCueParameters_OriginalTag;   // 0x012C(0x0004)(NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagContainer                  CallFunc_BreakGameplayCueParameters_AggregatedSourceTags; // 0x0130(0x0020)()
	struct FGameplayTagContainer                  CallFunc_BreakGameplayCueParameters_AggregatedTargetTags; // 0x0150(0x0020)()
	struct FVector                                CallFunc_BreakGameplayCueParameters_Location;      // 0x0170(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakGameplayCueParameters_Normal;        // 0x0188(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_BreakGameplayCueParameters_Instigator;    // 0x01A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_BreakGameplayCueParameters_EffectCauser;  // 0x01A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                CallFunc_BreakGameplayCueParameters_SourceObject;  // 0x01B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPhysicalMaterial*                      CallFunc_BreakGameplayCueParameters_PhysicalMaterial; // 0x01B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakGameplayCueParameters_GameplayEffectLevel; // 0x01C0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakGameplayCueParameters_AbilityLevel;  // 0x01C4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        CallFunc_BreakGameplayCueParameters_TargetAttachComponent; // 0x01C8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BreakGameplayCueParameters_bReplicateLocationWhenUsingMinimalRepProxy; // 0x01D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1D1[0x7];                                      // 0x01D1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USoundBase*                             CallFunc_ChooseSoundAsset_AudioAsset;              // 0x01D8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        CallFunc_ChooseSoundAsset_RootComponent;           // 0x01E0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                        CallFunc_SpawnSoundAttached_ReturnValue;           // 0x01E8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GCN_Daisy_Geyser_Launch_C_OnBurstGeneric) == 0x000008, "Wrong alignment on GCN_Daisy_Geyser_Launch_C_OnBurstGeneric");
static_assert(sizeof(GCN_Daisy_Geyser_Launch_C_OnBurstGeneric) == 0x0001F0, "Wrong size on GCN_Daisy_Geyser_Launch_C_OnBurstGeneric");
static_assert(offsetof(GCN_Daisy_Geyser_Launch_C_OnBurstGeneric, MyTarget) == 0x000000, "Member 'GCN_Daisy_Geyser_Launch_C_OnBurstGeneric::MyTarget' has a wrong offset!");
static_assert(offsetof(GCN_Daisy_Geyser_Launch_C_OnBurstGeneric, Parameters) == 0x000008, "Member 'GCN_Daisy_Geyser_Launch_C_OnBurstGeneric::Parameters' has a wrong offset!");
static_assert(offsetof(GCN_Daisy_Geyser_Launch_C_OnBurstGeneric, ParticleComponents) == 0x0000D8, "Member 'GCN_Daisy_Geyser_Launch_C_OnBurstGeneric::ParticleComponents' has a wrong offset!");
static_assert(offsetof(GCN_Daisy_Geyser_Launch_C_OnBurstGeneric, AudioComponents) == 0x0000E8, "Member 'GCN_Daisy_Geyser_Launch_C_OnBurstGeneric::AudioComponents' has a wrong offset!");
static_assert(offsetof(GCN_Daisy_Geyser_Launch_C_OnBurstGeneric, BurstCameraShakeInstance) == 0x0000F8, "Member 'GCN_Daisy_Geyser_Launch_C_OnBurstGeneric::BurstCameraShakeInstance' has a wrong offset!");
static_assert(offsetof(GCN_Daisy_Geyser_Launch_C_OnBurstGeneric, BurstDecalInstance) == 0x000100, "Member 'GCN_Daisy_Geyser_Launch_C_OnBurstGeneric::BurstDecalInstance' has a wrong offset!");
static_assert(offsetof(GCN_Daisy_Geyser_Launch_C_OnBurstGeneric, CallFunc_BreakGameplayCueParameters_NormalizedMagnitude) == 0x000108, "Member 'GCN_Daisy_Geyser_Launch_C_OnBurstGeneric::CallFunc_BreakGameplayCueParameters_NormalizedMagnitude' has a wrong offset!");
static_assert(offsetof(GCN_Daisy_Geyser_Launch_C_OnBurstGeneric, CallFunc_BreakGameplayCueParameters_RawMagnitude) == 0x00010C, "Member 'GCN_Daisy_Geyser_Launch_C_OnBurstGeneric::CallFunc_BreakGameplayCueParameters_RawMagnitude' has a wrong offset!");
static_assert(offsetof(GCN_Daisy_Geyser_Launch_C_OnBurstGeneric, CallFunc_BreakGameplayCueParameters_EffectContext) == 0x000110, "Member 'GCN_Daisy_Geyser_Launch_C_OnBurstGeneric::CallFunc_BreakGameplayCueParameters_EffectContext' has a wrong offset!");
static_assert(offsetof(GCN_Daisy_Geyser_Launch_C_OnBurstGeneric, CallFunc_BreakGameplayCueParameters_MatchedTagName) == 0x000128, "Member 'GCN_Daisy_Geyser_Launch_C_OnBurstGeneric::CallFunc_BreakGameplayCueParameters_MatchedTagName' has a wrong offset!");
static_assert(offsetof(GCN_Daisy_Geyser_Launch_C_OnBurstGeneric, CallFunc_BreakGameplayCueParameters_OriginalTag) == 0x00012C, "Member 'GCN_Daisy_Geyser_Launch_C_OnBurstGeneric::CallFunc_BreakGameplayCueParameters_OriginalTag' has a wrong offset!");
static_assert(offsetof(GCN_Daisy_Geyser_Launch_C_OnBurstGeneric, CallFunc_BreakGameplayCueParameters_AggregatedSourceTags) == 0x000130, "Member 'GCN_Daisy_Geyser_Launch_C_OnBurstGeneric::CallFunc_BreakGameplayCueParameters_AggregatedSourceTags' has a wrong offset!");
static_assert(offsetof(GCN_Daisy_Geyser_Launch_C_OnBurstGeneric, CallFunc_BreakGameplayCueParameters_AggregatedTargetTags) == 0x000150, "Member 'GCN_Daisy_Geyser_Launch_C_OnBurstGeneric::CallFunc_BreakGameplayCueParameters_AggregatedTargetTags' has a wrong offset!");
static_assert(offsetof(GCN_Daisy_Geyser_Launch_C_OnBurstGeneric, CallFunc_BreakGameplayCueParameters_Location) == 0x000170, "Member 'GCN_Daisy_Geyser_Launch_C_OnBurstGeneric::CallFunc_BreakGameplayCueParameters_Location' has a wrong offset!");
static_assert(offsetof(GCN_Daisy_Geyser_Launch_C_OnBurstGeneric, CallFunc_BreakGameplayCueParameters_Normal) == 0x000188, "Member 'GCN_Daisy_Geyser_Launch_C_OnBurstGeneric::CallFunc_BreakGameplayCueParameters_Normal' has a wrong offset!");
static_assert(offsetof(GCN_Daisy_Geyser_Launch_C_OnBurstGeneric, CallFunc_BreakGameplayCueParameters_Instigator) == 0x0001A0, "Member 'GCN_Daisy_Geyser_Launch_C_OnBurstGeneric::CallFunc_BreakGameplayCueParameters_Instigator' has a wrong offset!");
static_assert(offsetof(GCN_Daisy_Geyser_Launch_C_OnBurstGeneric, CallFunc_BreakGameplayCueParameters_EffectCauser) == 0x0001A8, "Member 'GCN_Daisy_Geyser_Launch_C_OnBurstGeneric::CallFunc_BreakGameplayCueParameters_EffectCauser' has a wrong offset!");
static_assert(offsetof(GCN_Daisy_Geyser_Launch_C_OnBurstGeneric, CallFunc_BreakGameplayCueParameters_SourceObject) == 0x0001B0, "Member 'GCN_Daisy_Geyser_Launch_C_OnBurstGeneric::CallFunc_BreakGameplayCueParameters_SourceObject' has a wrong offset!");
static_assert(offsetof(GCN_Daisy_Geyser_Launch_C_OnBurstGeneric, CallFunc_BreakGameplayCueParameters_PhysicalMaterial) == 0x0001B8, "Member 'GCN_Daisy_Geyser_Launch_C_OnBurstGeneric::CallFunc_BreakGameplayCueParameters_PhysicalMaterial' has a wrong offset!");
static_assert(offsetof(GCN_Daisy_Geyser_Launch_C_OnBurstGeneric, CallFunc_BreakGameplayCueParameters_GameplayEffectLevel) == 0x0001C0, "Member 'GCN_Daisy_Geyser_Launch_C_OnBurstGeneric::CallFunc_BreakGameplayCueParameters_GameplayEffectLevel' has a wrong offset!");
static_assert(offsetof(GCN_Daisy_Geyser_Launch_C_OnBurstGeneric, CallFunc_BreakGameplayCueParameters_AbilityLevel) == 0x0001C4, "Member 'GCN_Daisy_Geyser_Launch_C_OnBurstGeneric::CallFunc_BreakGameplayCueParameters_AbilityLevel' has a wrong offset!");
static_assert(offsetof(GCN_Daisy_Geyser_Launch_C_OnBurstGeneric, CallFunc_BreakGameplayCueParameters_TargetAttachComponent) == 0x0001C8, "Member 'GCN_Daisy_Geyser_Launch_C_OnBurstGeneric::CallFunc_BreakGameplayCueParameters_TargetAttachComponent' has a wrong offset!");
static_assert(offsetof(GCN_Daisy_Geyser_Launch_C_OnBurstGeneric, CallFunc_BreakGameplayCueParameters_bReplicateLocationWhenUsingMinimalRepProxy) == 0x0001D0, "Member 'GCN_Daisy_Geyser_Launch_C_OnBurstGeneric::CallFunc_BreakGameplayCueParameters_bReplicateLocationWhenUsingMinimalRepProxy' has a wrong offset!");
static_assert(offsetof(GCN_Daisy_Geyser_Launch_C_OnBurstGeneric, CallFunc_ChooseSoundAsset_AudioAsset) == 0x0001D8, "Member 'GCN_Daisy_Geyser_Launch_C_OnBurstGeneric::CallFunc_ChooseSoundAsset_AudioAsset' has a wrong offset!");
static_assert(offsetof(GCN_Daisy_Geyser_Launch_C_OnBurstGeneric, CallFunc_ChooseSoundAsset_RootComponent) == 0x0001E0, "Member 'GCN_Daisy_Geyser_Launch_C_OnBurstGeneric::CallFunc_ChooseSoundAsset_RootComponent' has a wrong offset!");
static_assert(offsetof(GCN_Daisy_Geyser_Launch_C_OnBurstGeneric, CallFunc_SpawnSoundAttached_ReturnValue) == 0x0001E8, "Member 'GCN_Daisy_Geyser_Launch_C_OnBurstGeneric::CallFunc_SpawnSoundAttached_ReturnValue' has a wrong offset!");

}

