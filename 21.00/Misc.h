#pragma once
#include "pch.h"
#include "Utils.h"

class Misc {
private:
	static int GetNetMode();
public:
	DefHookOg(float, GetMaxTickRate, UEngine*, float, bool);
private:
	static bool RetTrue();
	static bool RetFalse();
	static uint32 CheckCheckpointHeartBeat();
	DefHookOg(void, TickFlush, UNetDriver*, float);
	DefHookOg(void*, DispatchRequest, void*, void*, int);
	static void Listen();
	static void SetDynamicFoundationEnabled(UObject*, FFrame&);
	static void SetDynamicFoundationTransform(UObject*, FFrame&);
	DefHookOg(void, StartNewSafeZonePhase, AFortGameModeAthena*, int);


	InitHooks;
};