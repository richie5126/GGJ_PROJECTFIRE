#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"
#include "UnityEngine_UnityEngine_Quaternion4030073918.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CamShake
struct  CamShake_t1547431985  : public MonoBehaviour_t1158329972
{
public:
	// System.Boolean CamShake::shakePosition
	bool ___shakePosition_2;
	// System.Boolean CamShake::shakeRotation
	bool ___shakeRotation_3;
	// System.Single CamShake::shakeIntensity
	float ___shakeIntensity_4;
	// System.Single CamShake::shakeDecay
	float ___shakeDecay_5;
	// UnityEngine.Vector3 CamShake::OriginalPos
	Vector3_t2243707580  ___OriginalPos_6;
	// UnityEngine.Quaternion CamShake::OriginalRot
	Quaternion_t4030073918  ___OriginalRot_7;
	// System.Boolean CamShake::isShakeRunning
	bool ___isShakeRunning_8;

public:
	inline static int32_t get_offset_of_shakePosition_2() { return static_cast<int32_t>(offsetof(CamShake_t1547431985, ___shakePosition_2)); }
	inline bool get_shakePosition_2() const { return ___shakePosition_2; }
	inline bool* get_address_of_shakePosition_2() { return &___shakePosition_2; }
	inline void set_shakePosition_2(bool value)
	{
		___shakePosition_2 = value;
	}

	inline static int32_t get_offset_of_shakeRotation_3() { return static_cast<int32_t>(offsetof(CamShake_t1547431985, ___shakeRotation_3)); }
	inline bool get_shakeRotation_3() const { return ___shakeRotation_3; }
	inline bool* get_address_of_shakeRotation_3() { return &___shakeRotation_3; }
	inline void set_shakeRotation_3(bool value)
	{
		___shakeRotation_3 = value;
	}

	inline static int32_t get_offset_of_shakeIntensity_4() { return static_cast<int32_t>(offsetof(CamShake_t1547431985, ___shakeIntensity_4)); }
	inline float get_shakeIntensity_4() const { return ___shakeIntensity_4; }
	inline float* get_address_of_shakeIntensity_4() { return &___shakeIntensity_4; }
	inline void set_shakeIntensity_4(float value)
	{
		___shakeIntensity_4 = value;
	}

	inline static int32_t get_offset_of_shakeDecay_5() { return static_cast<int32_t>(offsetof(CamShake_t1547431985, ___shakeDecay_5)); }
	inline float get_shakeDecay_5() const { return ___shakeDecay_5; }
	inline float* get_address_of_shakeDecay_5() { return &___shakeDecay_5; }
	inline void set_shakeDecay_5(float value)
	{
		___shakeDecay_5 = value;
	}

	inline static int32_t get_offset_of_OriginalPos_6() { return static_cast<int32_t>(offsetof(CamShake_t1547431985, ___OriginalPos_6)); }
	inline Vector3_t2243707580  get_OriginalPos_6() const { return ___OriginalPos_6; }
	inline Vector3_t2243707580 * get_address_of_OriginalPos_6() { return &___OriginalPos_6; }
	inline void set_OriginalPos_6(Vector3_t2243707580  value)
	{
		___OriginalPos_6 = value;
	}

	inline static int32_t get_offset_of_OriginalRot_7() { return static_cast<int32_t>(offsetof(CamShake_t1547431985, ___OriginalRot_7)); }
	inline Quaternion_t4030073918  get_OriginalRot_7() const { return ___OriginalRot_7; }
	inline Quaternion_t4030073918 * get_address_of_OriginalRot_7() { return &___OriginalRot_7; }
	inline void set_OriginalRot_7(Quaternion_t4030073918  value)
	{
		___OriginalRot_7 = value;
	}

	inline static int32_t get_offset_of_isShakeRunning_8() { return static_cast<int32_t>(offsetof(CamShake_t1547431985, ___isShakeRunning_8)); }
	inline bool get_isShakeRunning_8() const { return ___isShakeRunning_8; }
	inline bool* get_address_of_isShakeRunning_8() { return &___isShakeRunning_8; }
	inline void set_isShakeRunning_8(bool value)
	{
		___isShakeRunning_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
