#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.UI.Text
struct Text_t356221433;
// LeaderboardPopulator
struct LeaderboardPopulator_t2551742893;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ScoreManager
struct  ScoreManager_t3573108141  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.UI.Text ScoreManager::scoreDisp
	Text_t356221433 * ___scoreDisp_2;
	// LeaderboardPopulator ScoreManager::lp
	LeaderboardPopulator_t2551742893 * ___lp_3;

public:
	inline static int32_t get_offset_of_scoreDisp_2() { return static_cast<int32_t>(offsetof(ScoreManager_t3573108141, ___scoreDisp_2)); }
	inline Text_t356221433 * get_scoreDisp_2() const { return ___scoreDisp_2; }
	inline Text_t356221433 ** get_address_of_scoreDisp_2() { return &___scoreDisp_2; }
	inline void set_scoreDisp_2(Text_t356221433 * value)
	{
		___scoreDisp_2 = value;
		Il2CppCodeGenWriteBarrier(&___scoreDisp_2, value);
	}

	inline static int32_t get_offset_of_lp_3() { return static_cast<int32_t>(offsetof(ScoreManager_t3573108141, ___lp_3)); }
	inline LeaderboardPopulator_t2551742893 * get_lp_3() const { return ___lp_3; }
	inline LeaderboardPopulator_t2551742893 ** get_address_of_lp_3() { return &___lp_3; }
	inline void set_lp_3(LeaderboardPopulator_t2551742893 * value)
	{
		___lp_3 = value;
		Il2CppCodeGenWriteBarrier(&___lp_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
