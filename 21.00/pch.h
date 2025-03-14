#pragma once

#define WIN32_LEAN_AND_MEAN
#include <windows.h>
#include <thread>
#include <iostream>
#include <algorithm>
#include <numeric>
#include <map>
#include <intrin.h>
#include <sstream>
#include <array>
#include <tlhelp32.h>
#include <future>
#include <iomanip>  
#include <set>
using namespace std;
#include "UnrealContainers.hpp"
#include "SDK/Basic.hpp"
#include "SDK/CoreUObject_structs.hpp"
#include "SDK/CoreUObject_classes.hpp"
#include "SDK/Engine_structs.hpp"
#include "SDK/Engine_classes.hpp"
#include "SDK/FortniteGame_structs.hpp"
#include "SDK/FortniteGame_classes.hpp"
#include "SDK/GameplayAbilities_structs.hpp"
#include "SDK/GameplayAbilities_classes.hpp"
#include "SDK/GAB_Emote_Generic_classes.hpp"
#include "SDK/GAB_Spray_Generic_classes.hpp"
#include "SDK/TacticalSprintRuntime_structs.hpp"
#include "SDK/TacticalSprintRuntime_classes.hpp"
#include "SDK/EnergyRuntime_classes.hpp"
#include "SDK/EnergyRuntime_structs.hpp"
#include "SDK/FortniteGame_parameters.hpp"
#include "SDK/B_Athena_Zipline_Ascender_classes.hpp"
using namespace SDK;
#include "MinHook.h"