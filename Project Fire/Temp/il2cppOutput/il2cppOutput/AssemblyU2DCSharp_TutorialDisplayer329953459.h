#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// TutorialExecutor
struct TutorialExecutor_t2783498777;
// KeyPressChecker
struct KeyPressChecker_t1735067579;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// UnityEngine.UI.Text
struct Text_t356221433;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TutorialDisplayer
struct  TutorialDisplayer_t329953459  : public MonoBehaviour_t1158329972
{
public:
	// TutorialExecutor TutorialDisplayer::tut
	TutorialExecutor_t2783498777 * ___tut_2;
	// KeyPressChecker TutorialDisplayer::listener
	KeyPressChecker_t1735067579 * ___listener_3;
	// UnityEngine.GameObject TutorialDisplayer::dispMedium
	GameObject_t1756533147 * ___dispMedium_4;
	// UnityEngine.UI.Text TutorialDisplayer::txt
	Text_t356221433 * ___txt_5;
	// System.Single TutorialDisplayer::timer
	float ___timer_6;

public:
	inline static int32_t get_offset_of_tut_2() { return static_cast<int32_t>(offsetof(TutorialDisplayer_t329953459, ___tut_2)); }
	inline TutorialExecutor_t2783498777 * get_tut_2() const { return ___tut_2; }
	inline TutorialExecutor_t2783498777 ** get_address_of_tut_2() { return &___tut_2; }
	inline void set_tut_2(TutorialExecutor_t2783498777 * value)
	{
		___tut_2 = value;
		Il2CppCodeGenWriteBarrier(&___tut_2, value);
	}

	inline static int32_t get_offset_of_listener_3() { return static_cast<int32_t>(offsetof(TutorialDisplayer_t329953459, ___listener_3)); }
	inline KeyPressChecker_t1735067579 * get_listener_3() const { return ___listener_3; }
	inline KeyPressChecker_t1735067579 ** get_address_of_listener_3() { return &___listener_3; }
	inline void set_listener_3(KeyPressChecker_t1735067579 * value)
	{
		___listener_3 = value;
		Il2CppCodeGenWriteBarrier(&___listener_3, value);
	}

	inline static int32_t get_offset_of_dispMedium_4() { return static_cast<int32_t>(offsetof(TutorialDisplayer_t329953459, ___dispMedium_4)); }
	inline GameObject_t1756533147 * get_dispMedium_4() const { return ___dispMedium_4; }
	inline GameObject_t1756533147 ** get_address_of_dispMedium_4() { return &___dispMedium_4; }
	inline void set_dispMedium_4(GameObject_t1756533147 * value)
	{
		___dispMedium_4 = value;
		Il2CppCodeGenWriteBarrier(&___dispMedium_4, value);
	}

	inline static int32_t get_offset_of_txt_5() { return static_cast<int32_t>(offsetof(TutorialDisplayer_t329953459, ___txt_5)); }
	inline Text_t356221433 * get_txt_5() const { return ___txt_5; }
	inline Text_t356221433 ** get_address_of_txt_5() { return &___txt_5; }
	inline void set_txt_5(Text_t356221433 * value)
	{
		___txt_5 = value;
		Il2CppCodeGenWriteBarrier(&___txt_5, value);
	}

	inline static int32_t get_offset_of_timer_6() { return static_cast<int32_t>(offsetof(TutorialDisplayer_t329953459, ___timer_6)); }
	inline float get_timer_6() const { return ___timer_6; }
	inline float* get_address_of_timer_6() { return &___timer_6; }
	inline void set_timer_6(float value)
	{
		___timer_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
