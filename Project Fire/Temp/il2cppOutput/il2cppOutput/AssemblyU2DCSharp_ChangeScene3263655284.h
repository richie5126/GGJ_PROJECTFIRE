#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject
struct GameObject_t1756533147;
// UnityEngine.AsyncOperation
struct AsyncOperation_t3814632279;
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
	// UnityEngine.GameObject ChangeScene::loadingScreenAsset
	GameObject_t1756533147 * ___loadingScreenAsset_4;
	// System.Boolean ChangeScene::mainGameCalled
	bool ___mainGameCalled_5;
	// UnityEngine.AsyncOperation ChangeScene::nextScene
	AsyncOperation_t3814632279 * ___nextScene_6;
	// UnityEngine.AudioSource ChangeScene::start
	AudioSource_t1135106623 * ___start_7;
	// UnityEngine.GameObject ChangeScene::loadingOverlay
	GameObject_t1756533147 * ___loadingOverlay_8;
	// UnityEngine.GameObject ChangeScene::singletonReference
	GameObject_t1756533147 * ___singletonReference_9;

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

	inline static int32_t get_offset_of_loadingScreenAsset_4() { return static_cast<int32_t>(offsetof(ChangeScene_t3263655284, ___loadingScreenAsset_4)); }
	inline GameObject_t1756533147 * get_loadingScreenAsset_4() const { return ___loadingScreenAsset_4; }
	inline GameObject_t1756533147 ** get_address_of_loadingScreenAsset_4() { return &___loadingScreenAsset_4; }
	inline void set_loadingScreenAsset_4(GameObject_t1756533147 * value)
	{
		___loadingScreenAsset_4 = value;
		Il2CppCodeGenWriteBarrier(&___loadingScreenAsset_4, value);
	}

	inline static int32_t get_offset_of_mainGameCalled_5() { return static_cast<int32_t>(offsetof(ChangeScene_t3263655284, ___mainGameCalled_5)); }
	inline bool get_mainGameCalled_5() const { return ___mainGameCalled_5; }
	inline bool* get_address_of_mainGameCalled_5() { return &___mainGameCalled_5; }
	inline void set_mainGameCalled_5(bool value)
	{
		___mainGameCalled_5 = value;
	}

	inline static int32_t get_offset_of_nextScene_6() { return static_cast<int32_t>(offsetof(ChangeScene_t3263655284, ___nextScene_6)); }
	inline AsyncOperation_t3814632279 * get_nextScene_6() const { return ___nextScene_6; }
	inline AsyncOperation_t3814632279 ** get_address_of_nextScene_6() { return &___nextScene_6; }
	inline void set_nextScene_6(AsyncOperation_t3814632279 * value)
	{
		___nextScene_6 = value;
		Il2CppCodeGenWriteBarrier(&___nextScene_6, value);
	}

	inline static int32_t get_offset_of_start_7() { return static_cast<int32_t>(offsetof(ChangeScene_t3263655284, ___start_7)); }
	inline AudioSource_t1135106623 * get_start_7() const { return ___start_7; }
	inline AudioSource_t1135106623 ** get_address_of_start_7() { return &___start_7; }
	inline void set_start_7(AudioSource_t1135106623 * value)
	{
		___start_7 = value;
		Il2CppCodeGenWriteBarrier(&___start_7, value);
	}

	inline static int32_t get_offset_of_loadingOverlay_8() { return static_cast<int32_t>(offsetof(ChangeScene_t3263655284, ___loadingOverlay_8)); }
	inline GameObject_t1756533147 * get_loadingOverlay_8() const { return ___loadingOverlay_8; }
	inline GameObject_t1756533147 ** get_address_of_loadingOverlay_8() { return &___loadingOverlay_8; }
	inline void set_loadingOverlay_8(GameObject_t1756533147 * value)
	{
		___loadingOverlay_8 = value;
		Il2CppCodeGenWriteBarrier(&___loadingOverlay_8, value);
	}

	inline static int32_t get_offset_of_singletonReference_9() { return static_cast<int32_t>(offsetof(ChangeScene_t3263655284, ___singletonReference_9)); }
	inline GameObject_t1756533147 * get_singletonReference_9() const { return ___singletonReference_9; }
	inline GameObject_t1756533147 ** get_address_of_singletonReference_9() { return &___singletonReference_9; }
	inline void set_singletonReference_9(GameObject_t1756533147 * value)
	{
		___singletonReference_9 = value;
		Il2CppCodeGenWriteBarrier(&___singletonReference_9, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
