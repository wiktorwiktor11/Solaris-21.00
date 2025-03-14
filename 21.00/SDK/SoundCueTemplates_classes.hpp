﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SoundCueTemplates

#include "Basic.hpp"

#include "Engine_classes.hpp"
#include "DeveloperSettings_classes.hpp"


namespace SDK
{

// Class SoundCueTemplates.SoundCueTemplate
// 0x0000 (0x0538 - 0x0538)
class USoundCueTemplate : public USoundCue
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SoundCueTemplate">();
	}
	static class USoundCueTemplate* GetDefaultObj()
	{
		return GetDefaultObjImpl<USoundCueTemplate>();
	}
};
static_assert(alignof(USoundCueTemplate) == 0x000008, "Wrong alignment on USoundCueTemplate");
static_assert(sizeof(USoundCueTemplate) == 0x000538, "Wrong size on USoundCueTemplate");

// Class SoundCueTemplates.SoundCueContainer
// 0x0000 (0x0538 - 0x0538)
class USoundCueContainer final : public USoundCueTemplate
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SoundCueContainer">();
	}
	static class USoundCueContainer* GetDefaultObj()
	{
		return GetDefaultObjImpl<USoundCueContainer>();
	}
};
static_assert(alignof(USoundCueContainer) == 0x000008, "Wrong alignment on USoundCueContainer");
static_assert(sizeof(USoundCueContainer) == 0x000538, "Wrong size on USoundCueContainer");

// Class SoundCueTemplates.SoundCueDistanceCrossfade
// 0x0000 (0x0538 - 0x0538)
class USoundCueDistanceCrossfade final : public USoundCueTemplate
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SoundCueDistanceCrossfade">();
	}
	static class USoundCueDistanceCrossfade* GetDefaultObj()
	{
		return GetDefaultObjImpl<USoundCueDistanceCrossfade>();
	}
};
static_assert(alignof(USoundCueDistanceCrossfade) == 0x000008, "Wrong alignment on USoundCueDistanceCrossfade");
static_assert(sizeof(USoundCueDistanceCrossfade) == 0x000538, "Wrong size on USoundCueDistanceCrossfade");

// Class SoundCueTemplates.SoundCueTemplateSettings
// 0x0000 (0x0030 - 0x0030)
class USoundCueTemplateSettings final : public UDeveloperSettings
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SoundCueTemplateSettings">();
	}
	static class USoundCueTemplateSettings* GetDefaultObj()
	{
		return GetDefaultObjImpl<USoundCueTemplateSettings>();
	}
};
static_assert(alignof(USoundCueTemplateSettings) == 0x000008, "Wrong alignment on USoundCueTemplateSettings");
static_assert(sizeof(USoundCueTemplateSettings) == 0x000030, "Wrong size on USoundCueTemplateSettings");

}

