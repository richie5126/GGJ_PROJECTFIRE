#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;
// UnityEngine.UI.Text
struct Text_t356221433;

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
	// System.String ScoreManager::score
	String_t* ___score_2;
	// UnityEngine.UI.Text ScoreManager::scoreDisp
	Text_t356221433 * ___scoreDisp_3;

public:
	inline static int32_t get_offset_of_score_2() { return static_cast<int32_t>(offsetof(ScoreManager_t3573108141, ___score_2)); }
	inline String_t* get_score_2() const { return ___score_2; }
	inline String_t** get_address_of_score_2() { return &___score_2; }
	inline void set_score_2(String_t* value)
	{
		___score_2 = value;
		Il2CppCodeGenWriteBarrier(&___score_2, value);
	}

	inline static int32_t get_offset_of_scoreDisp_3() { return static_cast<int32_t>(offsetof(ScoreManager_t3573108141, ___scoreDisp_3)); }
	inline Text_t356221433 * get_scoreDisp_3() const { return ___scoreDisp_3; }
	inline Text_t356221433 ** get_address_of_scoreDisp_3() { return &___scoreDisp_3; }
	inline void set_scoreDisp_3(Text_t356221433 * value)
	{
		___scoreDisp_3 = value;
		Il2CppCodeGenWriteBarrier(&___scoreDisp_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
