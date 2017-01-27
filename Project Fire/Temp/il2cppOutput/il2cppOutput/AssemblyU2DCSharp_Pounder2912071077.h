#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Pounder
struct  Pounder_t2912071077  : public MonoBehaviour_t1158329972
{
public:
	// System.Single Pounder::bpm
	float ___bpm_2;
	// System.Single Pounder::intensity
	float ___intensity_3;
	// System.Single Pounder::interpolationRate
	float ___interpolationRate_4;
	// System.Single Pounder::timer
	float ___timer_5;
	// System.Single Pounder::bpm_fraction
	float ___bpm_fraction_6;
	// UnityEngine.Vector2 Pounder::origScale
	Vector2_t2243707579  ___origScale_7;

public:
	inline static int32_t get_offset_of_bpm_2() { return static_cast<int32_t>(offsetof(Pounder_t2912071077, ___bpm_2)); }
	inline float get_bpm_2() const { return ___bpm_2; }
	inline float* get_address_of_bpm_2() { return &___bpm_2; }
	inline void set_bpm_2(float value)
	{
		___bpm_2 = value;
	}

	inline static int32_t get_offset_of_intensity_3() { return static_cast<int32_t>(offsetof(Pounder_t2912071077, ___intensity_3)); }
	inline float get_intensity_3() const { return ___intensity_3; }
	inline float* get_address_of_intensity_3() { return &___intensity_3; }
	inline void set_intensity_3(float value)
	{
		___intensity_3 = value;
	}

	inline static int32_t get_offset_of_interpolationRate_4() { return static_cast<int32_t>(offsetof(Pounder_t2912071077, ___interpolationRate_4)); }
	inline float get_interpolationRate_4() const { return ___interpolationRate_4; }
	inline float* get_address_of_interpolationRate_4() { return &___interpolationRate_4; }
	inline void set_interpolationRate_4(float value)
	{
		___interpolationRate_4 = value;
	}

	inline static int32_t get_offset_of_timer_5() { return static_cast<int32_t>(offsetof(Pounder_t2912071077, ___timer_5)); }
	inline float get_timer_5() const { return ___timer_5; }
	inline float* get_address_of_timer_5() { return &___timer_5; }
	inline void set_timer_5(float value)
	{
		___timer_5 = value;
	}

	inline static int32_t get_offset_of_bpm_fraction_6() { return static_cast<int32_t>(offsetof(Pounder_t2912071077, ___bpm_fraction_6)); }
	inline float get_bpm_fraction_6() const { return ___bpm_fraction_6; }
	inline float* get_address_of_bpm_fraction_6() { return &___bpm_fraction_6; }
	inline void set_bpm_fraction_6(float value)
	{
		___bpm_fraction_6 = value;
	}

	inline static int32_t get_offset_of_origScale_7() { return static_cast<int32_t>(offsetof(Pounder_t2912071077, ___origScale_7)); }
	inline Vector2_t2243707579  get_origScale_7() const { return ___origScale_7; }
	inline Vector2_t2243707579 * get_address_of_origScale_7() { return &___origScale_7; }
	inline void set_origScale_7(Vector2_t2243707579  value)
	{
		___origScale_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
