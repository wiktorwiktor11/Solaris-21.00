﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: APOLLO_MASTER_TODM

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"
#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass APOLLO_MASTER_TODM.APOLLO_MASTER_TODM_C
// 0x0270 (0x1240 - 0x0FD0)
class AAPOLLO_MASTER_TODM_C : public AFortTimeOfDayManagerAtmosphere
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0FD0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UPostProcessComponent*                  One20fpsMotionBlurPostProcess;                     // 0x0FD8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPostProcessComponent*                  HeavySSAO_Postprocess;                             // 0x0FE0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPostProcessComponent*                  EditorPostProcessMaterial_HackToWorkAroundTheOutlineShaderBeingInjectedByCodeAtRuntime_; // 0x0FE8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                         New_Storm_Timeline_Wind_Strength_1418199D40439300D6A294BFB0695C20; // 0x0FF0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         New_Storm_Timeline_RainInt_1418199D40439300D6A294BFB0695C20; // 0x0FF4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         New_Storm_Timeline_Lightning_Modulator_1418199D40439300D6A294BFB0695C20; // 0x0FF8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         New_Storm_Timeline_Storm_Ramp_In_Value_1418199D40439300D6A294BFB0695C20; // 0x0FFC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            New_Storm_Timeline__Direction_1418199D40439300D6A294BFB0695C20; // 0x1000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1001[0x7];                                     // 0x1001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     New_Storm_Timeline;                                // 0x1008(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         FlashLightning_LightningColorLERP_0384539D43C6E59E42B14C91632CFE4D; // 0x1010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         FlashLightning_lightning_alpha_0384539D43C6E59E42B14C91632CFE4D; // 0x1014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         FlashLightning_Lightning_Intensity_0384539D43C6E59E42B14C91632CFE4D; // 0x1018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            FlashLightning__Direction_0384539D43C6E59E42B14C91632CFE4D; // 0x101C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_101D[0x3];                                     // 0x101D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     FlashLightning;                                    // 0x1020(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         WindSpeed;                                         // 0x1028(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         RandomWeatherWaitTime;                             // 0x102C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CurrentAmountOfRandomWeatherTimeLeft;              // 0x1030(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         NewWeatherLerpAmount;                              // 0x1034(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         WindStrength;                                      // 0x1038(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         FutureWindStrength;                                // 0x103C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         FutureWindSpeed;                                   // 0x1040(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bPickNewWindConditions;                            // 0x1044(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1045[0x3];                                     // 0x1045(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         LightningStrength;                                 // 0x1048(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         ThreatCloudStormAmount;                            // 0x104C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          UseRainWithStorms;                                 // 0x1050(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Play_a_Particle_Effect_Near_the_players_Feet;      // 0x1051(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          WindEffects_Should_be_Active;                      // 0x1052(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1053[0x5];                                     // 0x1053(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class UParticleSystemComponent*               Storm_Foot_Particle_Outdoor;                       // 0x1058(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                        Storm_Foot_Particle_While_on_Terrain;              // 0x1060(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               Storm_Foot_Particle_Indoor;                        // 0x1068(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                        Storm_Foot_Particle_While_NOT_on_Terrain;          // 0x1070(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Storm_Wind_Strength;                               // 0x1078(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Generate_Foliage_Wind_Gusts;                       // 0x107C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_107D[0x3];                                     // 0x107D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           LightningStrikeTimerHandle;                        // 0x1080(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           PreviousDirectionalLightColor;                     // 0x1088(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           Lightning_Flash_Color;                             // 0x1098(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                         Lightning_Flash_Timeline_Min;                      // 0x10A8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Lightning_Flash_Timeline_Max;                      // 0x10AC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           SkyboxFogMorningColor;                             // 0x10B0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           SkyboxFogMorningLitColor;                          // 0x10C0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         SkyboxFogMorningDistance;                          // 0x10D0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         SkyboxFogMorningDiffuseAmount;                     // 0x10D4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         SkyboxFogMorningEmissiveAmount;                    // 0x10D8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         SkyboxFogMorningLitLength;                         // 0x10DC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         SkyboxFogMorningLitRotation;                       // 0x10E0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         SkyboxFogMorningLitOffset;                         // 0x10E4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           SkyboxFogDayColor;                                 // 0x10E8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           SkyboxFogDayLitColor;                              // 0x10F8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         SkyboxFogDayDistance;                              // 0x1108(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         SkyboxFogDayDiffuseAmount;                         // 0x110C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         SkyboxFogDayEmissiveAmount;                        // 0x1110(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         SkyboxFogDayLitLength;                             // 0x1114(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         SkyboxFogDayLitRotation;                           // 0x1118(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         SkyboxFogDayLitOffset;                             // 0x111C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           SkyboxFogEveningColor;                             // 0x1120(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           SkyboxFogEveningLitColor;                          // 0x1130(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         SkyboxFogEveningDistance;                          // 0x1140(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         SkyboxFogEveningDiffuseAmount;                     // 0x1144(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         SkyboxFogEveningEmissiveAmount;                    // 0x1148(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         SkyboxFogEveningLitLength;                         // 0x114C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         SkyboxFogEveningLitRotation;                       // 0x1150(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         SkyboxFogEveningLitOffset;                         // 0x1154(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           SkyboxFogNightColor;                               // 0x1158(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           SkyboxFogNightLitColor;                            // 0x1168(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         SkyboxFogNightDistance;                            // 0x1178(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         SkyboxFogNightDiffuseAmount;                       // 0x117C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         SkyboxFogNightEmissiveAmount;                      // 0x1180(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         SkyboxFogNightLitLength;                           // 0x1184(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         SkyboxFogNightLitRotation;                         // 0x1188(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         SkyboxFogNightLitOffset;                           // 0x118C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         World_Border_Cloud_Base_Color_Brightness;          // 0x1190(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           World_Border_Cloud_Sub_Surface_Color_and_Opacity;  // 0x1194(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          EnableCometDynamicPlacement;                       // 0x11A4(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_11A5[0x3];                                     // 0x11A5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 Cheat_RTDFShadowsDistance;                         // 0x11A8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	uint8                                         Pad_11B8[0x8];                                     // 0x11B8(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector4                               Morning;                                           // 0x11C0(0x0020)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector4                               Day;                                               // 0x11E0(0x0020)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector4                               Evening;                                           // 0x1200(0x0020)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector4                               Night;                                             // 0x1220(0x0020)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void DisableLightAndFog(bool Enable);
	void EmptyTransform(struct FTransform* Transform);
	void EnableHDRRendering();
	void ExecuteUbergraph_APOLLO_MASTER_TODM(int32 EntryPoint);
	void FlashLightning__FinishedFunc();
	void FlashLightning__UpdateFunc();
	void LightningStrike();
	void Manual_Update_for_Override();
	void New_Storm_Timeline__FinishedFunc();
	void New_Storm_Timeline__FireOffRain__EventFunc();
	void New_Storm_Timeline__UpdateFunc();
	void OnStormEnd();
	void OnStormStart();
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void SetHeavySSAO();
	void SetMotionBlurAmount();
	void SetShadowStateMPC();
	void SkyDomeCloudsToggle(bool Enable);
	void StartStorm();
	void UpdateMotionBlurAmount();
	void UpdateShadowLevel();
	void UpdateSSAO();
	void UserConstructionScript();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"APOLLO_MASTER_TODM_C">();
	}
	static class AAPOLLO_MASTER_TODM_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AAPOLLO_MASTER_TODM_C>();
	}
};
static_assert(alignof(AAPOLLO_MASTER_TODM_C) == 0x000010, "Wrong alignment on AAPOLLO_MASTER_TODM_C");
static_assert(sizeof(AAPOLLO_MASTER_TODM_C) == 0x001240, "Wrong size on AAPOLLO_MASTER_TODM_C");
static_assert(offsetof(AAPOLLO_MASTER_TODM_C, UberGraphFrame) == 0x000FD0, "Member 'AAPOLLO_MASTER_TODM_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AAPOLLO_MASTER_TODM_C, One20fpsMotionBlurPostProcess) == 0x000FD8, "Member 'AAPOLLO_MASTER_TODM_C::One20fpsMotionBlurPostProcess' has a wrong offset!");
static_assert(offsetof(AAPOLLO_MASTER_TODM_C, HeavySSAO_Postprocess) == 0x000FE0, "Member 'AAPOLLO_MASTER_TODM_C::HeavySSAO_Postprocess' has a wrong offset!");
static_assert(offsetof(AAPOLLO_MASTER_TODM_C, EditorPostProcessMaterial_HackToWorkAroundTheOutlineShaderBeingInjectedByCodeAtRuntime_) == 0x000FE8, "Member 'AAPOLLO_MASTER_TODM_C::EditorPostProcessMaterial_HackToWorkAroundTheOutlineShaderBeingInjectedByCodeAtRuntime_' has a wrong offset!");
static_assert(offsetof(AAPOLLO_MASTER_TODM_C, New_Storm_Timeline_Wind_Strength_1418199D40439300D6A294BFB0695C20) == 0x000FF0, "Member 'AAPOLLO_MASTER_TODM_C::New_Storm_Timeline_Wind_Strength_1418199D40439300D6A294BFB0695C20' has a wrong offset!");
static_assert(offsetof(AAPOLLO_MASTER_TODM_C, New_Storm_Timeline_RainInt_1418199D40439300D6A294BFB0695C20) == 0x000FF4, "Member 'AAPOLLO_MASTER_TODM_C::New_Storm_Timeline_RainInt_1418199D40439300D6A294BFB0695C20' has a wrong offset!");
static_assert(offsetof(AAPOLLO_MASTER_TODM_C, New_Storm_Timeline_Lightning_Modulator_1418199D40439300D6A294BFB0695C20) == 0x000FF8, "Member 'AAPOLLO_MASTER_TODM_C::New_Storm_Timeline_Lightning_Modulator_1418199D40439300D6A294BFB0695C20' has a wrong offset!");
static_assert(offsetof(AAPOLLO_MASTER_TODM_C, New_Storm_Timeline_Storm_Ramp_In_Value_1418199D40439300D6A294BFB0695C20) == 0x000FFC, "Member 'AAPOLLO_MASTER_TODM_C::New_Storm_Timeline_Storm_Ramp_In_Value_1418199D40439300D6A294BFB0695C20' has a wrong offset!");
static_assert(offsetof(AAPOLLO_MASTER_TODM_C, New_Storm_Timeline__Direction_1418199D40439300D6A294BFB0695C20) == 0x001000, "Member 'AAPOLLO_MASTER_TODM_C::New_Storm_Timeline__Direction_1418199D40439300D6A294BFB0695C20' has a wrong offset!");
static_assert(offsetof(AAPOLLO_MASTER_TODM_C, New_Storm_Timeline) == 0x001008, "Member 'AAPOLLO_MASTER_TODM_C::New_Storm_Timeline' has a wrong offset!");
static_assert(offsetof(AAPOLLO_MASTER_TODM_C, FlashLightning_LightningColorLERP_0384539D43C6E59E42B14C91632CFE4D) == 0x001010, "Member 'AAPOLLO_MASTER_TODM_C::FlashLightning_LightningColorLERP_0384539D43C6E59E42B14C91632CFE4D' has a wrong offset!");
static_assert(offsetof(AAPOLLO_MASTER_TODM_C, FlashLightning_lightning_alpha_0384539D43C6E59E42B14C91632CFE4D) == 0x001014, "Member 'AAPOLLO_MASTER_TODM_C::FlashLightning_lightning_alpha_0384539D43C6E59E42B14C91632CFE4D' has a wrong offset!");
static_assert(offsetof(AAPOLLO_MASTER_TODM_C, FlashLightning_Lightning_Intensity_0384539D43C6E59E42B14C91632CFE4D) == 0x001018, "Member 'AAPOLLO_MASTER_TODM_C::FlashLightning_Lightning_Intensity_0384539D43C6E59E42B14C91632CFE4D' has a wrong offset!");
static_assert(offsetof(AAPOLLO_MASTER_TODM_C, FlashLightning__Direction_0384539D43C6E59E42B14C91632CFE4D) == 0x00101C, "Member 'AAPOLLO_MASTER_TODM_C::FlashLightning__Direction_0384539D43C6E59E42B14C91632CFE4D' has a wrong offset!");
static_assert(offsetof(AAPOLLO_MASTER_TODM_C, FlashLightning) == 0x001020, "Member 'AAPOLLO_MASTER_TODM_C::FlashLightning' has a wrong offset!");
static_assert(offsetof(AAPOLLO_MASTER_TODM_C, WindSpeed) == 0x001028, "Member 'AAPOLLO_MASTER_TODM_C::WindSpeed' has a wrong offset!");
static_assert(offsetof(AAPOLLO_MASTER_TODM_C, RandomWeatherWaitTime) == 0x00102C, "Member 'AAPOLLO_MASTER_TODM_C::RandomWeatherWaitTime' has a wrong offset!");
static_assert(offsetof(AAPOLLO_MASTER_TODM_C, CurrentAmountOfRandomWeatherTimeLeft) == 0x001030, "Member 'AAPOLLO_MASTER_TODM_C::CurrentAmountOfRandomWeatherTimeLeft' has a wrong offset!");
static_assert(offsetof(AAPOLLO_MASTER_TODM_C, NewWeatherLerpAmount) == 0x001034, "Member 'AAPOLLO_MASTER_TODM_C::NewWeatherLerpAmount' has a wrong offset!");
static_assert(offsetof(AAPOLLO_MASTER_TODM_C, WindStrength) == 0x001038, "Member 'AAPOLLO_MASTER_TODM_C::WindStrength' has a wrong offset!");
static_assert(offsetof(AAPOLLO_MASTER_TODM_C, FutureWindStrength) == 0x00103C, "Member 'AAPOLLO_MASTER_TODM_C::FutureWindStrength' has a wrong offset!");
static_assert(offsetof(AAPOLLO_MASTER_TODM_C, FutureWindSpeed) == 0x001040, "Member 'AAPOLLO_MASTER_TODM_C::FutureWindSpeed' has a wrong offset!");
static_assert(offsetof(AAPOLLO_MASTER_TODM_C, bPickNewWindConditions) == 0x001044, "Member 'AAPOLLO_MASTER_TODM_C::bPickNewWindConditions' has a wrong offset!");
static_assert(offsetof(AAPOLLO_MASTER_TODM_C, LightningStrength) == 0x001048, "Member 'AAPOLLO_MASTER_TODM_C::LightningStrength' has a wrong offset!");
static_assert(offsetof(AAPOLLO_MASTER_TODM_C, ThreatCloudStormAmount) == 0x00104C, "Member 'AAPOLLO_MASTER_TODM_C::ThreatCloudStormAmount' has a wrong offset!");
static_assert(offsetof(AAPOLLO_MASTER_TODM_C, UseRainWithStorms) == 0x001050, "Member 'AAPOLLO_MASTER_TODM_C::UseRainWithStorms' has a wrong offset!");
static_assert(offsetof(AAPOLLO_MASTER_TODM_C, Play_a_Particle_Effect_Near_the_players_Feet) == 0x001051, "Member 'AAPOLLO_MASTER_TODM_C::Play_a_Particle_Effect_Near_the_players_Feet' has a wrong offset!");
static_assert(offsetof(AAPOLLO_MASTER_TODM_C, WindEffects_Should_be_Active) == 0x001052, "Member 'AAPOLLO_MASTER_TODM_C::WindEffects_Should_be_Active' has a wrong offset!");
static_assert(offsetof(AAPOLLO_MASTER_TODM_C, Storm_Foot_Particle_Outdoor) == 0x001058, "Member 'AAPOLLO_MASTER_TODM_C::Storm_Foot_Particle_Outdoor' has a wrong offset!");
static_assert(offsetof(AAPOLLO_MASTER_TODM_C, Storm_Foot_Particle_While_on_Terrain) == 0x001060, "Member 'AAPOLLO_MASTER_TODM_C::Storm_Foot_Particle_While_on_Terrain' has a wrong offset!");
static_assert(offsetof(AAPOLLO_MASTER_TODM_C, Storm_Foot_Particle_Indoor) == 0x001068, "Member 'AAPOLLO_MASTER_TODM_C::Storm_Foot_Particle_Indoor' has a wrong offset!");
static_assert(offsetof(AAPOLLO_MASTER_TODM_C, Storm_Foot_Particle_While_NOT_on_Terrain) == 0x001070, "Member 'AAPOLLO_MASTER_TODM_C::Storm_Foot_Particle_While_NOT_on_Terrain' has a wrong offset!");
static_assert(offsetof(AAPOLLO_MASTER_TODM_C, Storm_Wind_Strength) == 0x001078, "Member 'AAPOLLO_MASTER_TODM_C::Storm_Wind_Strength' has a wrong offset!");
static_assert(offsetof(AAPOLLO_MASTER_TODM_C, Generate_Foliage_Wind_Gusts) == 0x00107C, "Member 'AAPOLLO_MASTER_TODM_C::Generate_Foliage_Wind_Gusts' has a wrong offset!");
static_assert(offsetof(AAPOLLO_MASTER_TODM_C, LightningStrikeTimerHandle) == 0x001080, "Member 'AAPOLLO_MASTER_TODM_C::LightningStrikeTimerHandle' has a wrong offset!");
static_assert(offsetof(AAPOLLO_MASTER_TODM_C, PreviousDirectionalLightColor) == 0x001088, "Member 'AAPOLLO_MASTER_TODM_C::PreviousDirectionalLightColor' has a wrong offset!");
static_assert(offsetof(AAPOLLO_MASTER_TODM_C, Lightning_Flash_Color) == 0x001098, "Member 'AAPOLLO_MASTER_TODM_C::Lightning_Flash_Color' has a wrong offset!");
static_assert(offsetof(AAPOLLO_MASTER_TODM_C, Lightning_Flash_Timeline_Min) == 0x0010A8, "Member 'AAPOLLO_MASTER_TODM_C::Lightning_Flash_Timeline_Min' has a wrong offset!");
static_assert(offsetof(AAPOLLO_MASTER_TODM_C, Lightning_Flash_Timeline_Max) == 0x0010AC, "Member 'AAPOLLO_MASTER_TODM_C::Lightning_Flash_Timeline_Max' has a wrong offset!");
static_assert(offsetof(AAPOLLO_MASTER_TODM_C, SkyboxFogMorningColor) == 0x0010B0, "Member 'AAPOLLO_MASTER_TODM_C::SkyboxFogMorningColor' has a wrong offset!");
static_assert(offsetof(AAPOLLO_MASTER_TODM_C, SkyboxFogMorningLitColor) == 0x0010C0, "Member 'AAPOLLO_MASTER_TODM_C::SkyboxFogMorningLitColor' has a wrong offset!");
static_assert(offsetof(AAPOLLO_MASTER_TODM_C, SkyboxFogMorningDistance) == 0x0010D0, "Member 'AAPOLLO_MASTER_TODM_C::SkyboxFogMorningDistance' has a wrong offset!");
static_assert(offsetof(AAPOLLO_MASTER_TODM_C, SkyboxFogMorningDiffuseAmount) == 0x0010D4, "Member 'AAPOLLO_MASTER_TODM_C::SkyboxFogMorningDiffuseAmount' has a wrong offset!");
static_assert(offsetof(AAPOLLO_MASTER_TODM_C, SkyboxFogMorningEmissiveAmount) == 0x0010D8, "Member 'AAPOLLO_MASTER_TODM_C::SkyboxFogMorningEmissiveAmount' has a wrong offset!");
static_assert(offsetof(AAPOLLO_MASTER_TODM_C, SkyboxFogMorningLitLength) == 0x0010DC, "Member 'AAPOLLO_MASTER_TODM_C::SkyboxFogMorningLitLength' has a wrong offset!");
static_assert(offsetof(AAPOLLO_MASTER_TODM_C, SkyboxFogMorningLitRotation) == 0x0010E0, "Member 'AAPOLLO_MASTER_TODM_C::SkyboxFogMorningLitRotation' has a wrong offset!");
static_assert(offsetof(AAPOLLO_MASTER_TODM_C, SkyboxFogMorningLitOffset) == 0x0010E4, "Member 'AAPOLLO_MASTER_TODM_C::SkyboxFogMorningLitOffset' has a wrong offset!");
static_assert(offsetof(AAPOLLO_MASTER_TODM_C, SkyboxFogDayColor) == 0x0010E8, "Member 'AAPOLLO_MASTER_TODM_C::SkyboxFogDayColor' has a wrong offset!");
static_assert(offsetof(AAPOLLO_MASTER_TODM_C, SkyboxFogDayLitColor) == 0x0010F8, "Member 'AAPOLLO_MASTER_TODM_C::SkyboxFogDayLitColor' has a wrong offset!");
static_assert(offsetof(AAPOLLO_MASTER_TODM_C, SkyboxFogDayDistance) == 0x001108, "Member 'AAPOLLO_MASTER_TODM_C::SkyboxFogDayDistance' has a wrong offset!");
static_assert(offsetof(AAPOLLO_MASTER_TODM_C, SkyboxFogDayDiffuseAmount) == 0x00110C, "Member 'AAPOLLO_MASTER_TODM_C::SkyboxFogDayDiffuseAmount' has a wrong offset!");
static_assert(offsetof(AAPOLLO_MASTER_TODM_C, SkyboxFogDayEmissiveAmount) == 0x001110, "Member 'AAPOLLO_MASTER_TODM_C::SkyboxFogDayEmissiveAmount' has a wrong offset!");
static_assert(offsetof(AAPOLLO_MASTER_TODM_C, SkyboxFogDayLitLength) == 0x001114, "Member 'AAPOLLO_MASTER_TODM_C::SkyboxFogDayLitLength' has a wrong offset!");
static_assert(offsetof(AAPOLLO_MASTER_TODM_C, SkyboxFogDayLitRotation) == 0x001118, "Member 'AAPOLLO_MASTER_TODM_C::SkyboxFogDayLitRotation' has a wrong offset!");
static_assert(offsetof(AAPOLLO_MASTER_TODM_C, SkyboxFogDayLitOffset) == 0x00111C, "Member 'AAPOLLO_MASTER_TODM_C::SkyboxFogDayLitOffset' has a wrong offset!");
static_assert(offsetof(AAPOLLO_MASTER_TODM_C, SkyboxFogEveningColor) == 0x001120, "Member 'AAPOLLO_MASTER_TODM_C::SkyboxFogEveningColor' has a wrong offset!");
static_assert(offsetof(AAPOLLO_MASTER_TODM_C, SkyboxFogEveningLitColor) == 0x001130, "Member 'AAPOLLO_MASTER_TODM_C::SkyboxFogEveningLitColor' has a wrong offset!");
static_assert(offsetof(AAPOLLO_MASTER_TODM_C, SkyboxFogEveningDistance) == 0x001140, "Member 'AAPOLLO_MASTER_TODM_C::SkyboxFogEveningDistance' has a wrong offset!");
static_assert(offsetof(AAPOLLO_MASTER_TODM_C, SkyboxFogEveningDiffuseAmount) == 0x001144, "Member 'AAPOLLO_MASTER_TODM_C::SkyboxFogEveningDiffuseAmount' has a wrong offset!");
static_assert(offsetof(AAPOLLO_MASTER_TODM_C, SkyboxFogEveningEmissiveAmount) == 0x001148, "Member 'AAPOLLO_MASTER_TODM_C::SkyboxFogEveningEmissiveAmount' has a wrong offset!");
static_assert(offsetof(AAPOLLO_MASTER_TODM_C, SkyboxFogEveningLitLength) == 0x00114C, "Member 'AAPOLLO_MASTER_TODM_C::SkyboxFogEveningLitLength' has a wrong offset!");
static_assert(offsetof(AAPOLLO_MASTER_TODM_C, SkyboxFogEveningLitRotation) == 0x001150, "Member 'AAPOLLO_MASTER_TODM_C::SkyboxFogEveningLitRotation' has a wrong offset!");
static_assert(offsetof(AAPOLLO_MASTER_TODM_C, SkyboxFogEveningLitOffset) == 0x001154, "Member 'AAPOLLO_MASTER_TODM_C::SkyboxFogEveningLitOffset' has a wrong offset!");
static_assert(offsetof(AAPOLLO_MASTER_TODM_C, SkyboxFogNightColor) == 0x001158, "Member 'AAPOLLO_MASTER_TODM_C::SkyboxFogNightColor' has a wrong offset!");
static_assert(offsetof(AAPOLLO_MASTER_TODM_C, SkyboxFogNightLitColor) == 0x001168, "Member 'AAPOLLO_MASTER_TODM_C::SkyboxFogNightLitColor' has a wrong offset!");
static_assert(offsetof(AAPOLLO_MASTER_TODM_C, SkyboxFogNightDistance) == 0x001178, "Member 'AAPOLLO_MASTER_TODM_C::SkyboxFogNightDistance' has a wrong offset!");
static_assert(offsetof(AAPOLLO_MASTER_TODM_C, SkyboxFogNightDiffuseAmount) == 0x00117C, "Member 'AAPOLLO_MASTER_TODM_C::SkyboxFogNightDiffuseAmount' has a wrong offset!");
static_assert(offsetof(AAPOLLO_MASTER_TODM_C, SkyboxFogNightEmissiveAmount) == 0x001180, "Member 'AAPOLLO_MASTER_TODM_C::SkyboxFogNightEmissiveAmount' has a wrong offset!");
static_assert(offsetof(AAPOLLO_MASTER_TODM_C, SkyboxFogNightLitLength) == 0x001184, "Member 'AAPOLLO_MASTER_TODM_C::SkyboxFogNightLitLength' has a wrong offset!");
static_assert(offsetof(AAPOLLO_MASTER_TODM_C, SkyboxFogNightLitRotation) == 0x001188, "Member 'AAPOLLO_MASTER_TODM_C::SkyboxFogNightLitRotation' has a wrong offset!");
static_assert(offsetof(AAPOLLO_MASTER_TODM_C, SkyboxFogNightLitOffset) == 0x00118C, "Member 'AAPOLLO_MASTER_TODM_C::SkyboxFogNightLitOffset' has a wrong offset!");
static_assert(offsetof(AAPOLLO_MASTER_TODM_C, World_Border_Cloud_Base_Color_Brightness) == 0x001190, "Member 'AAPOLLO_MASTER_TODM_C::World_Border_Cloud_Base_Color_Brightness' has a wrong offset!");
static_assert(offsetof(AAPOLLO_MASTER_TODM_C, World_Border_Cloud_Sub_Surface_Color_and_Opacity) == 0x001194, "Member 'AAPOLLO_MASTER_TODM_C::World_Border_Cloud_Sub_Surface_Color_and_Opacity' has a wrong offset!");
static_assert(offsetof(AAPOLLO_MASTER_TODM_C, EnableCometDynamicPlacement) == 0x0011A4, "Member 'AAPOLLO_MASTER_TODM_C::EnableCometDynamicPlacement' has a wrong offset!");
static_assert(offsetof(AAPOLLO_MASTER_TODM_C, Cheat_RTDFShadowsDistance) == 0x0011A8, "Member 'AAPOLLO_MASTER_TODM_C::Cheat_RTDFShadowsDistance' has a wrong offset!");
static_assert(offsetof(AAPOLLO_MASTER_TODM_C, Morning) == 0x0011C0, "Member 'AAPOLLO_MASTER_TODM_C::Morning' has a wrong offset!");
static_assert(offsetof(AAPOLLO_MASTER_TODM_C, Day) == 0x0011E0, "Member 'AAPOLLO_MASTER_TODM_C::Day' has a wrong offset!");
static_assert(offsetof(AAPOLLO_MASTER_TODM_C, Evening) == 0x001200, "Member 'AAPOLLO_MASTER_TODM_C::Evening' has a wrong offset!");
static_assert(offsetof(AAPOLLO_MASTER_TODM_C, Night) == 0x001220, "Member 'AAPOLLO_MASTER_TODM_C::Night' has a wrong offset!");

}

