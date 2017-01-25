#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_KeyCode2283395152.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// KeyPressChecker
struct  KeyPressChecker_t1735067579  : public MonoBehaviour_t1158329972
{
public:
	// System.Boolean KeyPressChecker::waiting
	bool ___waiting_2;
	// UnityEngine.KeyCode KeyPressChecker::key
	int32_t ___key_3;

public:
	inline static int32_t get_offset_of_waiting_2() { return static_cast<int32_t>(offsetof(KeyPressChecker_t1735067579, ___waiting_2)); }
	inline bool get_waiting_2() const { return ___waiting_2; }
	inline bool* get_address_of_waiting_2() { return &___waiting_2; }
	inline void set_waiting_2(bool value)
	{
		___waiting_2 = value;
	}

	inline static int32_t get_offset_of_key_3() { return static_cast<int32_t>(offsetof(KeyPressChecker_t1735067579, ___key_3)); }
	inline int32_t get_key_3() const { return ___key_3; }
	inline int32_t* get_address_of_key_3() { return &___key_3; }
	inline void set_key_3(int32_t value)
	{
		___key_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
