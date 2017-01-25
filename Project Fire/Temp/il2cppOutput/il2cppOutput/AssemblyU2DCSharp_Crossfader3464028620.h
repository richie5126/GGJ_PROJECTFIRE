#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.AudioSource
struct AudioSource_t1135106623;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Crossfader
struct  Crossfader_t3464028620  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.AudioSource Crossfader::SINE_AUDIO
	AudioSource_t1135106623 * ___SINE_AUDIO_2;
	// UnityEngine.AudioSource Crossfader::SAW_AUDIO
	AudioSource_t1135106623 * ___SAW_AUDIO_3;
	// UnityEngine.AudioSource Crossfader::SQUARE_AUDIO
	AudioSource_t1135106623 * ___SQUARE_AUDIO_4;
	// UnityEngine.AudioSource Crossfader::CHANGE_AUDIO
	AudioSource_t1135106623 * ___CHANGE_AUDIO_5;
	// System.Single Crossfader::timer
	float ___timer_6;
	// System.Boolean Crossfader::isSine
	bool ___isSine_7;
	// System.Boolean Crossfader::isSaw
	bool ___isSaw_8;
	// System.Boolean Crossfader::isSquare
	bool ___isSquare_9;
	// System.Single Crossfader::changeTime
	float ___changeTime_10;
	// System.Int32 Crossfader::activeTrack
	int32_t ___activeTrack_11;
	// System.Boolean Crossfader::typeToggled
	bool ___typeToggled_12;

public:
	inline static int32_t get_offset_of_SINE_AUDIO_2() { return static_cast<int32_t>(offsetof(Crossfader_t3464028620, ___SINE_AUDIO_2)); }
	inline AudioSource_t1135106623 * get_SINE_AUDIO_2() const { return ___SINE_AUDIO_2; }
	inline AudioSource_t1135106623 ** get_address_of_SINE_AUDIO_2() { return &___SINE_AUDIO_2; }
	inline void set_SINE_AUDIO_2(AudioSource_t1135106623 * value)
	{
		___SINE_AUDIO_2 = value;
		Il2CppCodeGenWriteBarrier(&___SINE_AUDIO_2, value);
	}

	inline static int32_t get_offset_of_SAW_AUDIO_3() { return static_cast<int32_t>(offsetof(Crossfader_t3464028620, ___SAW_AUDIO_3)); }
	inline AudioSource_t1135106623 * get_SAW_AUDIO_3() const { return ___SAW_AUDIO_3; }
	inline AudioSource_t1135106623 ** get_address_of_SAW_AUDIO_3() { return &___SAW_AUDIO_3; }
	inline void set_SAW_AUDIO_3(AudioSource_t1135106623 * value)
	{
		___SAW_AUDIO_3 = value;
		Il2CppCodeGenWriteBarrier(&___SAW_AUDIO_3, value);
	}

	inline static int32_t get_offset_of_SQUARE_AUDIO_4() { return static_cast<int32_t>(offsetof(Crossfader_t3464028620, ___SQUARE_AUDIO_4)); }
	inline AudioSource_t1135106623 * get_SQUARE_AUDIO_4() const { return ___SQUARE_AUDIO_4; }
	inline AudioSource_t1135106623 ** get_address_of_SQUARE_AUDIO_4() { return &___SQUARE_AUDIO_4; }
	inline void set_SQUARE_AUDIO_4(AudioSource_t1135106623 * value)
	{
		___SQUARE_AUDIO_4 = value;
		Il2CppCodeGenWriteBarrier(&___SQUARE_AUDIO_4, value);
	}

	inline static int32_t get_offset_of_CHANGE_AUDIO_5() { return static_cast<int32_t>(offsetof(Crossfader_t3464028620, ___CHANGE_AUDIO_5)); }
	inline AudioSource_t1135106623 * get_CHANGE_AUDIO_5() const { return ___CHANGE_AUDIO_5; }
	inline AudioSource_t1135106623 ** get_address_of_CHANGE_AUDIO_5() { return &___CHANGE_AUDIO_5; }
	inline void set_CHANGE_AUDIO_5(AudioSource_t1135106623 * value)
	{
		___CHANGE_AUDIO_5 = value;
		Il2CppCodeGenWriteBarrier(&___CHANGE_AUDIO_5, value);
	}

	inline static int32_t get_offset_of_timer_6() { return static_cast<int32_t>(offsetof(Crossfader_t3464028620, ___timer_6)); }
	inline float get_timer_6() const { return ___timer_6; }
	inline float* get_address_of_timer_6() { return &___timer_6; }
	inline void set_timer_6(float value)
	{
		___timer_6 = value;
	}

	inline static int32_t get_offset_of_isSine_7() { return static_cast<int32_t>(offsetof(Crossfader_t3464028620, ___isSine_7)); }
	inline bool get_isSine_7() const { return ___isSine_7; }
	inline bool* get_address_of_isSine_7() { return &___isSine_7; }
	inline void set_isSine_7(bool value)
	{
		___isSine_7 = value;
	}

	inline static int32_t get_offset_of_isSaw_8() { return static_cast<int32_t>(offsetof(Crossfader_t3464028620, ___isSaw_8)); }
	inline bool get_isSaw_8() const { return ___isSaw_8; }
	inline bool* get_address_of_isSaw_8() { return &___isSaw_8; }
	inline void set_isSaw_8(bool value)
	{
		___isSaw_8 = value;
	}

	inline static int32_t get_offset_of_isSquare_9() { return static_cast<int32_t>(offsetof(Crossfader_t3464028620, ___isSquare_9)); }
	inline bool get_isSquare_9() const { return ___isSquare_9; }
	inline bool* get_address_of_isSquare_9() { return &___isSquare_9; }
	inline void set_isSquare_9(bool value)
	{
		___isSquare_9 = value;
	}

	inline static int32_t get_offset_of_changeTime_10() { return static_cast<int32_t>(offsetof(Crossfader_t3464028620, ___changeTime_10)); }
	inline float get_changeTime_10() const { return ___changeTime_10; }
	inline float* get_address_of_changeTime_10() { return &___changeTime_10; }
	inline void set_changeTime_10(float value)
	{
		___changeTime_10 = value;
	}

	inline static int32_t get_offset_of_activeTrack_11() { return static_cast<int32_t>(offsetof(Crossfader_t3464028620, ___activeTrack_11)); }
	inline int32_t get_activeTrack_11() const { return ___activeTrack_11; }
	inline int32_t* get_address_of_activeTrack_11() { return &___activeTrack_11; }
	inline void set_activeTrack_11(int32_t value)
	{
		___activeTrack_11 = value;
	}

	inline static int32_t get_offset_of_typeToggled_12() { return static_cast<int32_t>(offsetof(Crossfader_t3464028620, ___typeToggled_12)); }
	inline bool get_typeToggled_12() const { return ___typeToggled_12; }
	inline bool* get_address_of_typeToggled_12() { return &___typeToggled_12; }
	inline void set_typeToggled_12(bool value)
	{
		___typeToggled_12 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
