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
// OptionsSingleton
struct OptionsSingleton_t4226138861;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ObstacleRenderer
struct  ObstacleRenderer_t489142038  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject ObstacleRenderer::SINE_OBS
	GameObject_t1756533147 * ___SINE_OBS_2;
	// UnityEngine.GameObject ObstacleRenderer::TRIANGLE_OBS
	GameObject_t1756533147 * ___TRIANGLE_OBS_3;
	// UnityEngine.GameObject ObstacleRenderer::SQUARE_OBS
	GameObject_t1756533147 * ___SQUARE_OBS_4;
	// UnityEngine.GameObject ObstacleRenderer::CHOKE_OBS
	GameObject_t1756533147 * ___CHOKE_OBS_5;
	// UnityEngine.GameObject ObstacleRenderer::SHORTRECTANGLE_OBS
	GameObject_t1756533147 * ___SHORTRECTANGLE_OBS_6;
	// UnityEngine.GameObject ObstacleRenderer::SHORTSAW_OBS
	GameObject_t1756533147 * ___SHORTSAW_OBS_7;
	// UnityEngine.GameObject ObstacleRenderer::SHORTSINE_OBS
	GameObject_t1756533147 * ___SHORTSINE_OBS_8;
	// System.Single ObstacleRenderer::spawnDistance
	float ___spawnDistance_9;
	// System.Single ObstacleRenderer::obstacleXScale
	float ___obstacleXScale_10;
	// System.Single ObstacleRenderer::obstacleYScale
	float ___obstacleYScale_11;
	// System.Single ObstacleRenderer::stepSize
	float ___stepSize_12;
	// UnityEngine.GameObject ObstacleRenderer::player
	GameObject_t1756533147 * ___player_13;
	// OptionsSingleton ObstacleRenderer::options
	OptionsSingleton_t4226138861 * ___options_14;
	// System.Int32 ObstacleRenderer::state
	int32_t ___state_15;
	// System.Single ObstacleRenderer::lifetime
	float ___lifetime_16;
	// System.Single ObstacleRenderer::timer
	float ___timer_17;
	// System.Boolean ObstacleRenderer::toggledOnce
	bool ___toggledOnce_18;
	// System.Single ObstacleRenderer::secondsBetweenSpawning
	float ___secondsBetweenSpawning_19;

public:
	inline static int32_t get_offset_of_SINE_OBS_2() { return static_cast<int32_t>(offsetof(ObstacleRenderer_t489142038, ___SINE_OBS_2)); }
	inline GameObject_t1756533147 * get_SINE_OBS_2() const { return ___SINE_OBS_2; }
	inline GameObject_t1756533147 ** get_address_of_SINE_OBS_2() { return &___SINE_OBS_2; }
	inline void set_SINE_OBS_2(GameObject_t1756533147 * value)
	{
		___SINE_OBS_2 = value;
		Il2CppCodeGenWriteBarrier(&___SINE_OBS_2, value);
	}

	inline static int32_t get_offset_of_TRIANGLE_OBS_3() { return static_cast<int32_t>(offsetof(ObstacleRenderer_t489142038, ___TRIANGLE_OBS_3)); }
	inline GameObject_t1756533147 * get_TRIANGLE_OBS_3() const { return ___TRIANGLE_OBS_3; }
	inline GameObject_t1756533147 ** get_address_of_TRIANGLE_OBS_3() { return &___TRIANGLE_OBS_3; }
	inline void set_TRIANGLE_OBS_3(GameObject_t1756533147 * value)
	{
		___TRIANGLE_OBS_3 = value;
		Il2CppCodeGenWriteBarrier(&___TRIANGLE_OBS_3, value);
	}

	inline static int32_t get_offset_of_SQUARE_OBS_4() { return static_cast<int32_t>(offsetof(ObstacleRenderer_t489142038, ___SQUARE_OBS_4)); }
	inline GameObject_t1756533147 * get_SQUARE_OBS_4() const { return ___SQUARE_OBS_4; }
	inline GameObject_t1756533147 ** get_address_of_SQUARE_OBS_4() { return &___SQUARE_OBS_4; }
	inline void set_SQUARE_OBS_4(GameObject_t1756533147 * value)
	{
		___SQUARE_OBS_4 = value;
		Il2CppCodeGenWriteBarrier(&___SQUARE_OBS_4, value);
	}

	inline static int32_t get_offset_of_CHOKE_OBS_5() { return static_cast<int32_t>(offsetof(ObstacleRenderer_t489142038, ___CHOKE_OBS_5)); }
	inline GameObject_t1756533147 * get_CHOKE_OBS_5() const { return ___CHOKE_OBS_5; }
	inline GameObject_t1756533147 ** get_address_of_CHOKE_OBS_5() { return &___CHOKE_OBS_5; }
	inline void set_CHOKE_OBS_5(GameObject_t1756533147 * value)
	{
		___CHOKE_OBS_5 = value;
		Il2CppCodeGenWriteBarrier(&___CHOKE_OBS_5, value);
	}

	inline static int32_t get_offset_of_SHORTRECTANGLE_OBS_6() { return static_cast<int32_t>(offsetof(ObstacleRenderer_t489142038, ___SHORTRECTANGLE_OBS_6)); }
	inline GameObject_t1756533147 * get_SHORTRECTANGLE_OBS_6() const { return ___SHORTRECTANGLE_OBS_6; }
	inline GameObject_t1756533147 ** get_address_of_SHORTRECTANGLE_OBS_6() { return &___SHORTRECTANGLE_OBS_6; }
	inline void set_SHORTRECTANGLE_OBS_6(GameObject_t1756533147 * value)
	{
		___SHORTRECTANGLE_OBS_6 = value;
		Il2CppCodeGenWriteBarrier(&___SHORTRECTANGLE_OBS_6, value);
	}

	inline static int32_t get_offset_of_SHORTSAW_OBS_7() { return static_cast<int32_t>(offsetof(ObstacleRenderer_t489142038, ___SHORTSAW_OBS_7)); }
	inline GameObject_t1756533147 * get_SHORTSAW_OBS_7() const { return ___SHORTSAW_OBS_7; }
	inline GameObject_t1756533147 ** get_address_of_SHORTSAW_OBS_7() { return &___SHORTSAW_OBS_7; }
	inline void set_SHORTSAW_OBS_7(GameObject_t1756533147 * value)
	{
		___SHORTSAW_OBS_7 = value;
		Il2CppCodeGenWriteBarrier(&___SHORTSAW_OBS_7, value);
	}

	inline static int32_t get_offset_of_SHORTSINE_OBS_8() { return static_cast<int32_t>(offsetof(ObstacleRenderer_t489142038, ___SHORTSINE_OBS_8)); }
	inline GameObject_t1756533147 * get_SHORTSINE_OBS_8() const { return ___SHORTSINE_OBS_8; }
	inline GameObject_t1756533147 ** get_address_of_SHORTSINE_OBS_8() { return &___SHORTSINE_OBS_8; }
	inline void set_SHORTSINE_OBS_8(GameObject_t1756533147 * value)
	{
		___SHORTSINE_OBS_8 = value;
		Il2CppCodeGenWriteBarrier(&___SHORTSINE_OBS_8, value);
	}

	inline static int32_t get_offset_of_spawnDistance_9() { return static_cast<int32_t>(offsetof(ObstacleRenderer_t489142038, ___spawnDistance_9)); }
	inline float get_spawnDistance_9() const { return ___spawnDistance_9; }
	inline float* get_address_of_spawnDistance_9() { return &___spawnDistance_9; }
	inline void set_spawnDistance_9(float value)
	{
		___spawnDistance_9 = value;
	}

	inline static int32_t get_offset_of_obstacleXScale_10() { return static_cast<int32_t>(offsetof(ObstacleRenderer_t489142038, ___obstacleXScale_10)); }
	inline float get_obstacleXScale_10() const { return ___obstacleXScale_10; }
	inline float* get_address_of_obstacleXScale_10() { return &___obstacleXScale_10; }
	inline void set_obstacleXScale_10(float value)
	{
		___obstacleXScale_10 = value;
	}

	inline static int32_t get_offset_of_obstacleYScale_11() { return static_cast<int32_t>(offsetof(ObstacleRenderer_t489142038, ___obstacleYScale_11)); }
	inline float get_obstacleYScale_11() const { return ___obstacleYScale_11; }
	inline float* get_address_of_obstacleYScale_11() { return &___obstacleYScale_11; }
	inline void set_obstacleYScale_11(float value)
	{
		___obstacleYScale_11 = value;
	}

	inline static int32_t get_offset_of_stepSize_12() { return static_cast<int32_t>(offsetof(ObstacleRenderer_t489142038, ___stepSize_12)); }
	inline float get_stepSize_12() const { return ___stepSize_12; }
	inline float* get_address_of_stepSize_12() { return &___stepSize_12; }
	inline void set_stepSize_12(float value)
	{
		___stepSize_12 = value;
	}

	inline static int32_t get_offset_of_player_13() { return static_cast<int32_t>(offsetof(ObstacleRenderer_t489142038, ___player_13)); }
	inline GameObject_t1756533147 * get_player_13() const { return ___player_13; }
	inline GameObject_t1756533147 ** get_address_of_player_13() { return &___player_13; }
	inline void set_player_13(GameObject_t1756533147 * value)
	{
		___player_13 = value;
		Il2CppCodeGenWriteBarrier(&___player_13, value);
	}

	inline static int32_t get_offset_of_options_14() { return static_cast<int32_t>(offsetof(ObstacleRenderer_t489142038, ___options_14)); }
	inline OptionsSingleton_t4226138861 * get_options_14() const { return ___options_14; }
	inline OptionsSingleton_t4226138861 ** get_address_of_options_14() { return &___options_14; }
	inline void set_options_14(OptionsSingleton_t4226138861 * value)
	{
		___options_14 = value;
		Il2CppCodeGenWriteBarrier(&___options_14, value);
	}

	inline static int32_t get_offset_of_state_15() { return static_cast<int32_t>(offsetof(ObstacleRenderer_t489142038, ___state_15)); }
	inline int32_t get_state_15() const { return ___state_15; }
	inline int32_t* get_address_of_state_15() { return &___state_15; }
	inline void set_state_15(int32_t value)
	{
		___state_15 = value;
	}

	inline static int32_t get_offset_of_lifetime_16() { return static_cast<int32_t>(offsetof(ObstacleRenderer_t489142038, ___lifetime_16)); }
	inline float get_lifetime_16() const { return ___lifetime_16; }
	inline float* get_address_of_lifetime_16() { return &___lifetime_16; }
	inline void set_lifetime_16(float value)
	{
		___lifetime_16 = value;
	}

	inline static int32_t get_offset_of_timer_17() { return static_cast<int32_t>(offsetof(ObstacleRenderer_t489142038, ___timer_17)); }
	inline float get_timer_17() const { return ___timer_17; }
	inline float* get_address_of_timer_17() { return &___timer_17; }
	inline void set_timer_17(float value)
	{
		___timer_17 = value;
	}

	inline static int32_t get_offset_of_toggledOnce_18() { return static_cast<int32_t>(offsetof(ObstacleRenderer_t489142038, ___toggledOnce_18)); }
	inline bool get_toggledOnce_18() const { return ___toggledOnce_18; }
	inline bool* get_address_of_toggledOnce_18() { return &___toggledOnce_18; }
	inline void set_toggledOnce_18(bool value)
	{
		___toggledOnce_18 = value;
	}

	inline static int32_t get_offset_of_secondsBetweenSpawning_19() { return static_cast<int32_t>(offsetof(ObstacleRenderer_t489142038, ___secondsBetweenSpawning_19)); }
	inline float get_secondsBetweenSpawning_19() const { return ___secondsBetweenSpawning_19; }
	inline float* get_address_of_secondsBetweenSpawning_19() { return &___secondsBetweenSpawning_19; }
	inline void set_secondsBetweenSpawning_19(float value)
	{
		___secondsBetweenSpawning_19 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
