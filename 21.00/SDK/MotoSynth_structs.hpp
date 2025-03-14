﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MotoSynth

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK
{

// ScriptStruct MotoSynth.MotoSynthRuntimeSettings
// 0x0138 (0x0138 - 0x0000)
struct FMotoSynthRuntimeSettings final
{
public:
	bool                                          bSynthToneEnabled;                                 // 0x0000(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector2D                              SynthToneVolumeRange;                              // 0x0008(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                              SynthToneFilterFrequencyRange;                     // 0x0018(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bSynthToneEnvelopeEnabled;                         // 0x0028(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_29[0x7];                                       // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector2D                              SynthToneAttackTimeMsecRange;                      // 0x0030(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                              SynthToneAttackCurveRange;                         // 0x0040(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                              SynthToneDecayTimeMsecRange;                       // 0x0050(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                              SynthToneDecayCurveRange;                          // 0x0060(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         SynthOctaveShift;                                  // 0x0070(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bNoiseEnabled;                                     // 0x0074(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_75[0x3];                                       // 0x0075(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector2D                              NoiseVolumeRange;                                  // 0x0078(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bNoiseEnvelopeEnabled;                             // 0x0088(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_89[0x7];                                       // 0x0089(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector2D                              NoiseLPFRange;                                     // 0x0090(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                              NoiseAttackTimeMsecRange;                          // 0x00A0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                              NoiseAttackCurveRange;                             // 0x00B0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                              NoiseDecayTimeMsecRange;                           // 0x00C0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                              NoiseDecayCurveRange;                              // 0x00D0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bGranularEngineEnabled;                            // 0x00E0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_E1[0x3];                                       // 0x00E1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         GranularEngineVolume;                              // 0x00E4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         GranularEnginePitchScale;                          // 0x00E8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         NumSamplesToCrossfadeBetweenGrains;                // 0x00EC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         NumGrainTableEntriesPerGrain;                      // 0x00F0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         GrainTableRandomOffsetForConstantRPMs;             // 0x00F4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         GrainCrossfadeSamplesForConstantRPMs;              // 0x00F8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_FC[0x4];                                       // 0x00FC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UMotoSynthSource*                       AccelerationSource;                                // 0x0100(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMotoSynthSource*                       DecelerationSource;                                // 0x0108(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bStereoWidenerEnabled;                             // 0x0110(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_111[0x3];                                      // 0x0111(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         StereoDelayMsec;                                   // 0x0114(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         StereoFeedback;                                    // 0x0118(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         StereoWidenerWetlevel;                             // 0x011C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         StereoWidenerDryLevel;                             // 0x0120(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         StereoWidenerDelayRatio;                           // 0x0124(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bStereoWidenerFilterEnabled;                       // 0x0128(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_129[0x3];                                      // 0x0129(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         StereoWidenerFilterFrequency;                      // 0x012C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         StereoWidenerFilterQ;                              // 0x0130(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_134[0x4];                                      // 0x0134(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FMotoSynthRuntimeSettings) == 0x000008, "Wrong alignment on FMotoSynthRuntimeSettings");
static_assert(sizeof(FMotoSynthRuntimeSettings) == 0x000138, "Wrong size on FMotoSynthRuntimeSettings");
static_assert(offsetof(FMotoSynthRuntimeSettings, bSynthToneEnabled) == 0x000000, "Member 'FMotoSynthRuntimeSettings::bSynthToneEnabled' has a wrong offset!");
static_assert(offsetof(FMotoSynthRuntimeSettings, SynthToneVolumeRange) == 0x000008, "Member 'FMotoSynthRuntimeSettings::SynthToneVolumeRange' has a wrong offset!");
static_assert(offsetof(FMotoSynthRuntimeSettings, SynthToneFilterFrequencyRange) == 0x000018, "Member 'FMotoSynthRuntimeSettings::SynthToneFilterFrequencyRange' has a wrong offset!");
static_assert(offsetof(FMotoSynthRuntimeSettings, bSynthToneEnvelopeEnabled) == 0x000028, "Member 'FMotoSynthRuntimeSettings::bSynthToneEnvelopeEnabled' has a wrong offset!");
static_assert(offsetof(FMotoSynthRuntimeSettings, SynthToneAttackTimeMsecRange) == 0x000030, "Member 'FMotoSynthRuntimeSettings::SynthToneAttackTimeMsecRange' has a wrong offset!");
static_assert(offsetof(FMotoSynthRuntimeSettings, SynthToneAttackCurveRange) == 0x000040, "Member 'FMotoSynthRuntimeSettings::SynthToneAttackCurveRange' has a wrong offset!");
static_assert(offsetof(FMotoSynthRuntimeSettings, SynthToneDecayTimeMsecRange) == 0x000050, "Member 'FMotoSynthRuntimeSettings::SynthToneDecayTimeMsecRange' has a wrong offset!");
static_assert(offsetof(FMotoSynthRuntimeSettings, SynthToneDecayCurveRange) == 0x000060, "Member 'FMotoSynthRuntimeSettings::SynthToneDecayCurveRange' has a wrong offset!");
static_assert(offsetof(FMotoSynthRuntimeSettings, SynthOctaveShift) == 0x000070, "Member 'FMotoSynthRuntimeSettings::SynthOctaveShift' has a wrong offset!");
static_assert(offsetof(FMotoSynthRuntimeSettings, bNoiseEnabled) == 0x000074, "Member 'FMotoSynthRuntimeSettings::bNoiseEnabled' has a wrong offset!");
static_assert(offsetof(FMotoSynthRuntimeSettings, NoiseVolumeRange) == 0x000078, "Member 'FMotoSynthRuntimeSettings::NoiseVolumeRange' has a wrong offset!");
static_assert(offsetof(FMotoSynthRuntimeSettings, bNoiseEnvelopeEnabled) == 0x000088, "Member 'FMotoSynthRuntimeSettings::bNoiseEnvelopeEnabled' has a wrong offset!");
static_assert(offsetof(FMotoSynthRuntimeSettings, NoiseLPFRange) == 0x000090, "Member 'FMotoSynthRuntimeSettings::NoiseLPFRange' has a wrong offset!");
static_assert(offsetof(FMotoSynthRuntimeSettings, NoiseAttackTimeMsecRange) == 0x0000A0, "Member 'FMotoSynthRuntimeSettings::NoiseAttackTimeMsecRange' has a wrong offset!");
static_assert(offsetof(FMotoSynthRuntimeSettings, NoiseAttackCurveRange) == 0x0000B0, "Member 'FMotoSynthRuntimeSettings::NoiseAttackCurveRange' has a wrong offset!");
static_assert(offsetof(FMotoSynthRuntimeSettings, NoiseDecayTimeMsecRange) == 0x0000C0, "Member 'FMotoSynthRuntimeSettings::NoiseDecayTimeMsecRange' has a wrong offset!");
static_assert(offsetof(FMotoSynthRuntimeSettings, NoiseDecayCurveRange) == 0x0000D0, "Member 'FMotoSynthRuntimeSettings::NoiseDecayCurveRange' has a wrong offset!");
static_assert(offsetof(FMotoSynthRuntimeSettings, bGranularEngineEnabled) == 0x0000E0, "Member 'FMotoSynthRuntimeSettings::bGranularEngineEnabled' has a wrong offset!");
static_assert(offsetof(FMotoSynthRuntimeSettings, GranularEngineVolume) == 0x0000E4, "Member 'FMotoSynthRuntimeSettings::GranularEngineVolume' has a wrong offset!");
static_assert(offsetof(FMotoSynthRuntimeSettings, GranularEnginePitchScale) == 0x0000E8, "Member 'FMotoSynthRuntimeSettings::GranularEnginePitchScale' has a wrong offset!");
static_assert(offsetof(FMotoSynthRuntimeSettings, NumSamplesToCrossfadeBetweenGrains) == 0x0000EC, "Member 'FMotoSynthRuntimeSettings::NumSamplesToCrossfadeBetweenGrains' has a wrong offset!");
static_assert(offsetof(FMotoSynthRuntimeSettings, NumGrainTableEntriesPerGrain) == 0x0000F0, "Member 'FMotoSynthRuntimeSettings::NumGrainTableEntriesPerGrain' has a wrong offset!");
static_assert(offsetof(FMotoSynthRuntimeSettings, GrainTableRandomOffsetForConstantRPMs) == 0x0000F4, "Member 'FMotoSynthRuntimeSettings::GrainTableRandomOffsetForConstantRPMs' has a wrong offset!");
static_assert(offsetof(FMotoSynthRuntimeSettings, GrainCrossfadeSamplesForConstantRPMs) == 0x0000F8, "Member 'FMotoSynthRuntimeSettings::GrainCrossfadeSamplesForConstantRPMs' has a wrong offset!");
static_assert(offsetof(FMotoSynthRuntimeSettings, AccelerationSource) == 0x000100, "Member 'FMotoSynthRuntimeSettings::AccelerationSource' has a wrong offset!");
static_assert(offsetof(FMotoSynthRuntimeSettings, DecelerationSource) == 0x000108, "Member 'FMotoSynthRuntimeSettings::DecelerationSource' has a wrong offset!");
static_assert(offsetof(FMotoSynthRuntimeSettings, bStereoWidenerEnabled) == 0x000110, "Member 'FMotoSynthRuntimeSettings::bStereoWidenerEnabled' has a wrong offset!");
static_assert(offsetof(FMotoSynthRuntimeSettings, StereoDelayMsec) == 0x000114, "Member 'FMotoSynthRuntimeSettings::StereoDelayMsec' has a wrong offset!");
static_assert(offsetof(FMotoSynthRuntimeSettings, StereoFeedback) == 0x000118, "Member 'FMotoSynthRuntimeSettings::StereoFeedback' has a wrong offset!");
static_assert(offsetof(FMotoSynthRuntimeSettings, StereoWidenerWetlevel) == 0x00011C, "Member 'FMotoSynthRuntimeSettings::StereoWidenerWetlevel' has a wrong offset!");
static_assert(offsetof(FMotoSynthRuntimeSettings, StereoWidenerDryLevel) == 0x000120, "Member 'FMotoSynthRuntimeSettings::StereoWidenerDryLevel' has a wrong offset!");
static_assert(offsetof(FMotoSynthRuntimeSettings, StereoWidenerDelayRatio) == 0x000124, "Member 'FMotoSynthRuntimeSettings::StereoWidenerDelayRatio' has a wrong offset!");
static_assert(offsetof(FMotoSynthRuntimeSettings, bStereoWidenerFilterEnabled) == 0x000128, "Member 'FMotoSynthRuntimeSettings::bStereoWidenerFilterEnabled' has a wrong offset!");
static_assert(offsetof(FMotoSynthRuntimeSettings, StereoWidenerFilterFrequency) == 0x00012C, "Member 'FMotoSynthRuntimeSettings::StereoWidenerFilterFrequency' has a wrong offset!");
static_assert(offsetof(FMotoSynthRuntimeSettings, StereoWidenerFilterQ) == 0x000130, "Member 'FMotoSynthRuntimeSettings::StereoWidenerFilterQ' has a wrong offset!");

// ScriptStruct MotoSynth.GrainTableEntry
// 0x0008 (0x0008 - 0x0000)
struct FGrainTableEntry final
{
public:
	int32                                         SampleIndex;                                       // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         RPM;                                               // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FGrainTableEntry) == 0x000004, "Wrong alignment on FGrainTableEntry");
static_assert(sizeof(FGrainTableEntry) == 0x000008, "Wrong size on FGrainTableEntry");
static_assert(offsetof(FGrainTableEntry, SampleIndex) == 0x000000, "Member 'FGrainTableEntry::SampleIndex' has a wrong offset!");
static_assert(offsetof(FGrainTableEntry, RPM) == 0x000004, "Member 'FGrainTableEntry::RPM' has a wrong offset!");

}

