#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Single[]
struct SingleU5BU5D_t577127397;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CameraPounder
struct  CameraPounder_t3348183944  : public MonoBehaviour_t1158329972
{
public:
	// System.Single CameraPounder::bpm
	float ___bpm_2;
	// System.Single CameraPounder::intensity
	float ___intensity_3;
	// System.Single CameraPounder::interpolationRate
	float ___interpolationRate_4;
	// System.Single[] CameraPounder::samples
	SingleU5BU5D_t577127397* ___samples_5;
	// System.Single CameraPounder::timer
	float ___timer_6;
	// System.Single CameraPounder::bpm_fraction
	float ___bpm_fraction_7;
	// UnityEngine.Vector3 CameraPounder::origPosition
	Vector3_t2243707580  ___origPosition_8;

public:
	inline static int32_t get_offset_of_bpm_2() { return static_cast<int32_t>(offsetof(CameraPounder_t3348183944, ___bpm_2)); }
	inline float get_bpm_2() const { return ___bpm_2; }
	inline float* get_address_of_bpm_2() { return &___bpm_2; }
	inline void set_bpm_2(float value)
	{
		___bpm_2 = value;
	}

	inline static int32_t get_offset_of_intensity_3() { return static_cast<int32_t>(offsetof(CameraPounder_t3348183944, ___intensity_3)); }
	inline float get_intensity_3() const { return ___intensity_3; }
	inline float* get_address_of_intensity_3() { return &___intensity_3; }
	inline void set_intensity_3(float value)
	{
		___intensity_3 = value;
	}

	inline static int32_t get_offset_of_interpolationRate_4() { return static_cast<int32_t>(offsetof(CameraPounder_t3348183944, ___interpolationRate_4)); }
	inline float get_interpolationRate_4() const { return ___interpolationRate_4; }
	inline float* get_address_of_interpolationRate_4() { return &___interpolationRate_4; }
	inline void set_interpolationRate_4(float value)
	{
		___interpolationRate_4 = value;
	}

	inline static int32_t get_offset_of_samples_5() { return static_cast<int32_t>(offsetof(CameraPounder_t3348183944, ___samples_5)); }
	inline SingleU5BU5D_t577127397* get_samples_5() const { return ___samples_5; }
	inline SingleU5BU5D_t577127397** get_address_of_samples_5() { return &___samples_5; }
	inline void set_samples_5(SingleU5BU5D_t577127397* value)
	{
		___samples_5 = value;
		Il2CppCodeGenWriteBarrier(&___samples_5, value);
	}

	inline static int32_t get_offset_of_timer_6() { return static_cast<int32_t>(offsetof(CameraPounder_t3348183944, ___timer_6)); }
	inline float get_timer_6() const { return ___timer_6; }
	inline float* get_address_of_timer_6() { return &___timer_6; }
	inline void set_timer_6(float value)
	{
		___timer_6 = value;
	}

	inline static int32_t get_offset_of_bpm_fraction_7() { return static_cast<int32_t>(offsetof(CameraPounder_t3348183944, ___bpm_fraction_7)); }
	inline float get_bpm_fraction_7() const { return ___bpm_fraction_7; }
	inline float* get_address_of_bpm_fraction_7() { return &___bpm_fraction_7; }
	inline void set_bpm_fraction_7(float value)
	{
		___bpm_fraction_7 = value;
	}

	inline static int32_t get_offset_of_origPosition_8() { return static_cast<int32_t>(offsetof(CameraPounder_t3348183944, ___origPosition_8)); }
	inline Vector3_t2243707580  get_origPosition_8() const { return ___origPosition_8; }
	inline Vector3_t2243707580 * get_address_of_origPosition_8() { return &___origPosition_8; }
	inline void set_origPosition_8(Vector3_t2243707580  value)
	{
		___origPosition_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
