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

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Clock
struct  Clock_t3017784638  : public MonoBehaviour_t1158329972
{
public:
	// System.Int32 Clock::minTens
	int32_t ___minTens_2;
	// System.Int32 Clock::minUnits
	int32_t ___minUnits_3;
	// System.Int32 Clock::secTens
	int32_t ___secTens_4;
	// System.Int32 Clock::secUnits
	int32_t ___secUnits_5;
	// System.Int32 Clock::msecTens
	int32_t ___msecTens_6;
	// System.Int32 Clock::msecUnits
	int32_t ___msecUnits_7;
	// System.Single Clock::start
	float ___start_8;
	// System.Single Clock::realTime
	float ___realTime_9;
	// UnityEngine.UI.Text Clock::clock
	Text_t356221433 * ___clock_10;

public:
	inline static int32_t get_offset_of_minTens_2() { return static_cast<int32_t>(offsetof(Clock_t3017784638, ___minTens_2)); }
	inline int32_t get_minTens_2() const { return ___minTens_2; }
	inline int32_t* get_address_of_minTens_2() { return &___minTens_2; }
	inline void set_minTens_2(int32_t value)
	{
		___minTens_2 = value;
	}

	inline static int32_t get_offset_of_minUnits_3() { return static_cast<int32_t>(offsetof(Clock_t3017784638, ___minUnits_3)); }
	inline int32_t get_minUnits_3() const { return ___minUnits_3; }
	inline int32_t* get_address_of_minUnits_3() { return &___minUnits_3; }
	inline void set_minUnits_3(int32_t value)
	{
		___minUnits_3 = value;
	}

	inline static int32_t get_offset_of_secTens_4() { return static_cast<int32_t>(offsetof(Clock_t3017784638, ___secTens_4)); }
	inline int32_t get_secTens_4() const { return ___secTens_4; }
	inline int32_t* get_address_of_secTens_4() { return &___secTens_4; }
	inline void set_secTens_4(int32_t value)
	{
		___secTens_4 = value;
	}

	inline static int32_t get_offset_of_secUnits_5() { return static_cast<int32_t>(offsetof(Clock_t3017784638, ___secUnits_5)); }
	inline int32_t get_secUnits_5() const { return ___secUnits_5; }
	inline int32_t* get_address_of_secUnits_5() { return &___secUnits_5; }
	inline void set_secUnits_5(int32_t value)
	{
		___secUnits_5 = value;
	}

	inline static int32_t get_offset_of_msecTens_6() { return static_cast<int32_t>(offsetof(Clock_t3017784638, ___msecTens_6)); }
	inline int32_t get_msecTens_6() const { return ___msecTens_6; }
	inline int32_t* get_address_of_msecTens_6() { return &___msecTens_6; }
	inline void set_msecTens_6(int32_t value)
	{
		___msecTens_6 = value;
	}

	inline static int32_t get_offset_of_msecUnits_7() { return static_cast<int32_t>(offsetof(Clock_t3017784638, ___msecUnits_7)); }
	inline int32_t get_msecUnits_7() const { return ___msecUnits_7; }
	inline int32_t* get_address_of_msecUnits_7() { return &___msecUnits_7; }
	inline void set_msecUnits_7(int32_t value)
	{
		___msecUnits_7 = value;
	}

	inline static int32_t get_offset_of_start_8() { return static_cast<int32_t>(offsetof(Clock_t3017784638, ___start_8)); }
	inline float get_start_8() const { return ___start_8; }
	inline float* get_address_of_start_8() { return &___start_8; }
	inline void set_start_8(float value)
	{
		___start_8 = value;
	}

	inline static int32_t get_offset_of_realTime_9() { return static_cast<int32_t>(offsetof(Clock_t3017784638, ___realTime_9)); }
	inline float get_realTime_9() const { return ___realTime_9; }
	inline float* get_address_of_realTime_9() { return &___realTime_9; }
	inline void set_realTime_9(float value)
	{
		___realTime_9 = value;
	}

	inline static int32_t get_offset_of_clock_10() { return static_cast<int32_t>(offsetof(Clock_t3017784638, ___clock_10)); }
	inline Text_t356221433 * get_clock_10() const { return ___clock_10; }
	inline Text_t356221433 ** get_address_of_clock_10() { return &___clock_10; }
	inline void set_clock_10(Text_t356221433 * value)
	{
		___clock_10 = value;
		Il2CppCodeGenWriteBarrier(&___clock_10, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
