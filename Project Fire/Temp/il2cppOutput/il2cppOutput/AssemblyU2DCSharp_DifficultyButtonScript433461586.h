#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// OptionsSingleton
struct OptionsSingleton_t4226138861;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DifficultyButtonScript
struct  DifficultyButtonScript_t433461586  : public MonoBehaviour_t1158329972
{
public:
	// OptionsSingleton DifficultyButtonScript::options
	OptionsSingleton_t4226138861 * ___options_2;
	// System.Int32 DifficultyButtonScript::difficulty
	int32_t ___difficulty_3;

public:
	inline static int32_t get_offset_of_options_2() { return static_cast<int32_t>(offsetof(DifficultyButtonScript_t433461586, ___options_2)); }
	inline OptionsSingleton_t4226138861 * get_options_2() const { return ___options_2; }
	inline OptionsSingleton_t4226138861 ** get_address_of_options_2() { return &___options_2; }
	inline void set_options_2(OptionsSingleton_t4226138861 * value)
	{
		___options_2 = value;
		Il2CppCodeGenWriteBarrier(&___options_2, value);
	}

	inline static int32_t get_offset_of_difficulty_3() { return static_cast<int32_t>(offsetof(DifficultyButtonScript_t433461586, ___difficulty_3)); }
	inline int32_t get_difficulty_3() const { return ___difficulty_3; }
	inline int32_t* get_address_of_difficulty_3() { return &___difficulty_3; }
	inline void set_difficulty_3(int32_t value)
	{
		___difficulty_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
