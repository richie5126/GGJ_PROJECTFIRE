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
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t3057952154;
// System.Single[]
struct SingleU5BU5D_t577127397;
// CamShake
struct CamShake_t1547431985;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SpectrumReader
struct  SpectrumReader_t21812912  : public MonoBehaviour_t1158329972
{
public:
	// System.Int32 SpectrumReader::samplingRate
	int32_t ___samplingRate_2;
	// System.Int32 SpectrumReader::lowestFreq
	int32_t ___lowestFreq_3;
	// System.Int32 SpectrumReader::highestFreq
	int32_t ___highestFreq_4;
	// UnityEngine.GameObject SpectrumReader::barAsset
	GameObject_t1756533147 * ___barAsset_5;
	// System.Single SpectrumReader::stepSize
	float ___stepSize_6;
	// UnityEngine.GameObject[] SpectrumReader::bars
	GameObjectU5BU5D_t3057952154* ___bars_7;
	// System.Single[] SpectrumReader::heights
	SingleU5BU5D_t577127397* ___heights_8;
	// CamShake SpectrumReader::cam
	CamShake_t1547431985 * ___cam_9;

public:
	inline static int32_t get_offset_of_samplingRate_2() { return static_cast<int32_t>(offsetof(SpectrumReader_t21812912, ___samplingRate_2)); }
	inline int32_t get_samplingRate_2() const { return ___samplingRate_2; }
	inline int32_t* get_address_of_samplingRate_2() { return &___samplingRate_2; }
	inline void set_samplingRate_2(int32_t value)
	{
		___samplingRate_2 = value;
	}

	inline static int32_t get_offset_of_lowestFreq_3() { return static_cast<int32_t>(offsetof(SpectrumReader_t21812912, ___lowestFreq_3)); }
	inline int32_t get_lowestFreq_3() const { return ___lowestFreq_3; }
	inline int32_t* get_address_of_lowestFreq_3() { return &___lowestFreq_3; }
	inline void set_lowestFreq_3(int32_t value)
	{
		___lowestFreq_3 = value;
	}

	inline static int32_t get_offset_of_highestFreq_4() { return static_cast<int32_t>(offsetof(SpectrumReader_t21812912, ___highestFreq_4)); }
	inline int32_t get_highestFreq_4() const { return ___highestFreq_4; }
	inline int32_t* get_address_of_highestFreq_4() { return &___highestFreq_4; }
	inline void set_highestFreq_4(int32_t value)
	{
		___highestFreq_4 = value;
	}

	inline static int32_t get_offset_of_barAsset_5() { return static_cast<int32_t>(offsetof(SpectrumReader_t21812912, ___barAsset_5)); }
	inline GameObject_t1756533147 * get_barAsset_5() const { return ___barAsset_5; }
	inline GameObject_t1756533147 ** get_address_of_barAsset_5() { return &___barAsset_5; }
	inline void set_barAsset_5(GameObject_t1756533147 * value)
	{
		___barAsset_5 = value;
		Il2CppCodeGenWriteBarrier(&___barAsset_5, value);
	}

	inline static int32_t get_offset_of_stepSize_6() { return static_cast<int32_t>(offsetof(SpectrumReader_t21812912, ___stepSize_6)); }
	inline float get_stepSize_6() const { return ___stepSize_6; }
	inline float* get_address_of_stepSize_6() { return &___stepSize_6; }
	inline void set_stepSize_6(float value)
	{
		___stepSize_6 = value;
	}

	inline static int32_t get_offset_of_bars_7() { return static_cast<int32_t>(offsetof(SpectrumReader_t21812912, ___bars_7)); }
	inline GameObjectU5BU5D_t3057952154* get_bars_7() const { return ___bars_7; }
	inline GameObjectU5BU5D_t3057952154** get_address_of_bars_7() { return &___bars_7; }
	inline void set_bars_7(GameObjectU5BU5D_t3057952154* value)
	{
		___bars_7 = value;
		Il2CppCodeGenWriteBarrier(&___bars_7, value);
	}

	inline static int32_t get_offset_of_heights_8() { return static_cast<int32_t>(offsetof(SpectrumReader_t21812912, ___heights_8)); }
	inline SingleU5BU5D_t577127397* get_heights_8() const { return ___heights_8; }
	inline SingleU5BU5D_t577127397** get_address_of_heights_8() { return &___heights_8; }
	inline void set_heights_8(SingleU5BU5D_t577127397* value)
	{
		___heights_8 = value;
		Il2CppCodeGenWriteBarrier(&___heights_8, value);
	}

	inline static int32_t get_offset_of_cam_9() { return static_cast<int32_t>(offsetof(SpectrumReader_t21812912, ___cam_9)); }
	inline CamShake_t1547431985 * get_cam_9() const { return ___cam_9; }
	inline CamShake_t1547431985 ** get_address_of_cam_9() { return &___cam_9; }
	inline void set_cam_9(CamShake_t1547431985 * value)
	{
		___cam_9 = value;
		Il2CppCodeGenWriteBarrier(&___cam_9, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
