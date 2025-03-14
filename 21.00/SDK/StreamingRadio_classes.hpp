﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: StreamingRadio

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace SDK
{

// Class StreamingRadio.StreamingRadioManagerNative
// 0x0010 (0x0280 - 0x0270)
class AStreamingRadioManagerNative final : public AActor
{
public:
	class UFortStreamMediaSource*                 StreamMediaSource;                                 // 0x0270(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UMediaPlayer*                           MediaPlayer;                                       // 0x0278(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"StreamingRadioManagerNative">();
	}
	static class AStreamingRadioManagerNative* GetDefaultObj()
	{
		return GetDefaultObjImpl<AStreamingRadioManagerNative>();
	}
};
static_assert(alignof(AStreamingRadioManagerNative) == 0x000008, "Wrong alignment on AStreamingRadioManagerNative");
static_assert(sizeof(AStreamingRadioManagerNative) == 0x000280, "Wrong size on AStreamingRadioManagerNative");
static_assert(offsetof(AStreamingRadioManagerNative, StreamMediaSource) == 0x000270, "Member 'AStreamingRadioManagerNative::StreamMediaSource' has a wrong offset!");
static_assert(offsetof(AStreamingRadioManagerNative, MediaPlayer) == 0x000278, "Member 'AStreamingRadioManagerNative::MediaPlayer' has a wrong offset!");

}

