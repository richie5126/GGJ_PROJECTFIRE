#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.AudioSource
struct AudioSource_t1135106623;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ChangeScene
struct  ChangeScene_t3263655284  : public MonoBehaviour_t1158329972
{
public:
	// System.Single ChangeScene::timer
	float ___timer_2;
	// System.Boolean ChangeScene::clicked
	bool ___clicked_3;
	// UnityEngine.AudioSource ChangeScene::start
	AudioSource_t1135106623 * ___start_4;

public:
	inline static int32_t get_offset_of_timer_2() { return static_cast<int32_t>(offsetof(ChangeScene_t3263655284, ___timer_2)); }
	inline float get_timer_2() const { return ___timer_2; }
	inline float* get_address_of_timer_2() { return &___timer_2; }
	inline void set_timer_2(float value)
	{
		___timer_2 = value;
	}

	inline static int32_t get_offset_of_clicked_3() { return static_cast<int32_t>(offsetof(ChangeScene_t3263655284, ___clicked_3)); }
	inline bool get_clicked_3() const { return ___clicked_3; }
	inline bool* get_address_of_clicked_3() { return &___clicked_3; }
	inline void set_clicked_3(bool value)
	{
		___clicked_3 = value;
	}

	inline static int32_t get_offset_of_start_4() { return static_cast<int32_t>(offsetof(ChangeScene_t3263655284, ___start_4)); }
	inline AudioSource_t1135106623 * get_start_4() const { return ___start_4; }
	inline AudioSource_t1135106623 ** get_address_of_start_4() { return &___start_4; }
	inline void set_start_4(AudioSource_t1135106623 * value)
	{
		___start_4 = value;
		Il2CppCodeGenWriteBarrier(&___start_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
