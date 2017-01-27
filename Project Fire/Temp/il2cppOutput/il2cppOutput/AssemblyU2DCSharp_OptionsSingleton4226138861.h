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

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// OptionsSingleton
struct  OptionsSingleton_t4226138861  : public MonoBehaviour_t1158329972
{
public:
	// System.Single OptionsSingleton::gameVolume
	float ___gameVolume_3;
	// System.Int32 OptionsSingleton::difficulty
	int32_t ___difficulty_4;

public:
	inline static int32_t get_offset_of_gameVolume_3() { return static_cast<int32_t>(offsetof(OptionsSingleton_t4226138861, ___gameVolume_3)); }
	inline float get_gameVolume_3() const { return ___gameVolume_3; }
	inline float* get_address_of_gameVolume_3() { return &___gameVolume_3; }
	inline void set_gameVolume_3(float value)
	{
		___gameVolume_3 = value;
	}

	inline static int32_t get_offset_of_difficulty_4() { return static_cast<int32_t>(offsetof(OptionsSingleton_t4226138861, ___difficulty_4)); }
	inline int32_t get_difficulty_4() const { return ___difficulty_4; }
	inline int32_t* get_address_of_difficulty_4() { return &___difficulty_4; }
	inline void set_difficulty_4(int32_t value)
	{
		___difficulty_4 = value;
	}
};

struct OptionsSingleton_t4226138861_StaticFields
{
public:
	// UnityEngine.GameObject OptionsSingleton::instance
	GameObject_t1756533147 * ___instance_2;

public:
	inline static int32_t get_offset_of_instance_2() { return static_cast<int32_t>(offsetof(OptionsSingleton_t4226138861_StaticFields, ___instance_2)); }
	inline GameObject_t1756533147 * get_instance_2() const { return ___instance_2; }
	inline GameObject_t1756533147 ** get_address_of_instance_2() { return &___instance_2; }
	inline void set_instance_2(GameObject_t1756533147 * value)
	{
		___instance_2 = value;
		Il2CppCodeGenWriteBarrier(&___instance_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
