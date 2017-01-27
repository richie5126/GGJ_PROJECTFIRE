#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.UI.Image
struct Image_t2042527209;
// UnityEngine.AudioSource
struct AudioSource_t1135106623;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// UnityEngine.CircleCollider2D
struct CircleCollider2D_t13116344;
// UnityEngine.Rigidbody2D
struct Rigidbody2D_t502193897;
// UnityEngine.Camera
struct Camera_t189460977;
// UnityEngine.TrailRenderer
struct TrailRenderer_t2490637367;
// UnityEngine.Material
struct Material_t193706927;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GravityPlatformer2D
struct  GravityPlatformer2D_t1338802700  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.UI.Image GravityPlatformer2D::SineInput
	Image_t2042527209 * ___SineInput_2;
	// UnityEngine.UI.Image GravityPlatformer2D::SawInput
	Image_t2042527209 * ___SawInput_3;
	// UnityEngine.UI.Image GravityPlatformer2D::SquareInput
	Image_t2042527209 * ___SquareInput_4;
	// UnityEngine.AudioSource GravityPlatformer2D::death
	AudioSource_t1135106623 * ___death_5;
	// UnityEngine.AudioSource GravityPlatformer2D::change
	AudioSource_t1135106623 * ___change_6;
	// UnityEngine.GameObject GravityPlatformer2D::playerAssembly
	GameObject_t1756533147 * ___playerAssembly_7;
	// System.Boolean GravityPlatformer2D::mOrientation
	bool ___mOrientation_8;
	// UnityEngine.CircleCollider2D GravityPlatformer2D::hitbox
	CircleCollider2D_t13116344 * ___hitbox_9;
	// UnityEngine.Rigidbody2D GravityPlatformer2D::body
	Rigidbody2D_t502193897 * ___body_10;
	// UnityEngine.Camera GravityPlatformer2D::mainCam
	Camera_t189460977 * ___mainCam_11;
	// UnityEngine.TrailRenderer GravityPlatformer2D::trail
	TrailRenderer_t2490637367 * ___trail_12;
	// System.Single GravityPlatformer2D::gravScale
	float ___gravScale_13;
	// UnityEngine.Material GravityPlatformer2D::particleMat
	Material_t193706927 * ___particleMat_14;
	// UnityEngine.Material GravityPlatformer2D::overlayMat
	Material_t193706927 * ___overlayMat_15;
	// System.Single GravityPlatformer2D::mVerticalVelocity
	float ___mVerticalVelocity_16;
	// System.Boolean GravityPlatformer2D::mDead
	bool ___mDead_17;
	// System.Single GravityPlatformer2D::timer
	float ___timer_18;
	// System.Single GravityPlatformer2D::sTimer
	float ___sTimer_19;
	// System.Single GravityPlatformer2D::forwardVelocity
	float ___forwardVelocity_20;
	// System.Single GravityPlatformer2D::maxSpeed
	float ___maxSpeed_21;
	// System.Boolean GravityPlatformer2D::typeToggled
	bool ___typeToggled_22;
	// System.Single GravityPlatformer2D::acceleration
	float ___acceleration_23;
	// System.Int32 GravityPlatformer2D::currentMode
	int32_t ___currentMode_24;

public:
	inline static int32_t get_offset_of_SineInput_2() { return static_cast<int32_t>(offsetof(GravityPlatformer2D_t1338802700, ___SineInput_2)); }
	inline Image_t2042527209 * get_SineInput_2() const { return ___SineInput_2; }
	inline Image_t2042527209 ** get_address_of_SineInput_2() { return &___SineInput_2; }
	inline void set_SineInput_2(Image_t2042527209 * value)
	{
		___SineInput_2 = value;
		Il2CppCodeGenWriteBarrier(&___SineInput_2, value);
	}

	inline static int32_t get_offset_of_SawInput_3() { return static_cast<int32_t>(offsetof(GravityPlatformer2D_t1338802700, ___SawInput_3)); }
	inline Image_t2042527209 * get_SawInput_3() const { return ___SawInput_3; }
	inline Image_t2042527209 ** get_address_of_SawInput_3() { return &___SawInput_3; }
	inline void set_SawInput_3(Image_t2042527209 * value)
	{
		___SawInput_3 = value;
		Il2CppCodeGenWriteBarrier(&___SawInput_3, value);
	}

	inline static int32_t get_offset_of_SquareInput_4() { return static_cast<int32_t>(offsetof(GravityPlatformer2D_t1338802700, ___SquareInput_4)); }
	inline Image_t2042527209 * get_SquareInput_4() const { return ___SquareInput_4; }
	inline Image_t2042527209 ** get_address_of_SquareInput_4() { return &___SquareInput_4; }
	inline void set_SquareInput_4(Image_t2042527209 * value)
	{
		___SquareInput_4 = value;
		Il2CppCodeGenWriteBarrier(&___SquareInput_4, value);
	}

	inline static int32_t get_offset_of_death_5() { return static_cast<int32_t>(offsetof(GravityPlatformer2D_t1338802700, ___death_5)); }
	inline AudioSource_t1135106623 * get_death_5() const { return ___death_5; }
	inline AudioSource_t1135106623 ** get_address_of_death_5() { return &___death_5; }
	inline void set_death_5(AudioSource_t1135106623 * value)
	{
		___death_5 = value;
		Il2CppCodeGenWriteBarrier(&___death_5, value);
	}

	inline static int32_t get_offset_of_change_6() { return static_cast<int32_t>(offsetof(GravityPlatformer2D_t1338802700, ___change_6)); }
	inline AudioSource_t1135106623 * get_change_6() const { return ___change_6; }
	inline AudioSource_t1135106623 ** get_address_of_change_6() { return &___change_6; }
	inline void set_change_6(AudioSource_t1135106623 * value)
	{
		___change_6 = value;
		Il2CppCodeGenWriteBarrier(&___change_6, value);
	}

	inline static int32_t get_offset_of_playerAssembly_7() { return static_cast<int32_t>(offsetof(GravityPlatformer2D_t1338802700, ___playerAssembly_7)); }
	inline GameObject_t1756533147 * get_playerAssembly_7() const { return ___playerAssembly_7; }
	inline GameObject_t1756533147 ** get_address_of_playerAssembly_7() { return &___playerAssembly_7; }
	inline void set_playerAssembly_7(GameObject_t1756533147 * value)
	{
		___playerAssembly_7 = value;
		Il2CppCodeGenWriteBarrier(&___playerAssembly_7, value);
	}

	inline static int32_t get_offset_of_mOrientation_8() { return static_cast<int32_t>(offsetof(GravityPlatformer2D_t1338802700, ___mOrientation_8)); }
	inline bool get_mOrientation_8() const { return ___mOrientation_8; }
	inline bool* get_address_of_mOrientation_8() { return &___mOrientation_8; }
	inline void set_mOrientation_8(bool value)
	{
		___mOrientation_8 = value;
	}

	inline static int32_t get_offset_of_hitbox_9() { return static_cast<int32_t>(offsetof(GravityPlatformer2D_t1338802700, ___hitbox_9)); }
	inline CircleCollider2D_t13116344 * get_hitbox_9() const { return ___hitbox_9; }
	inline CircleCollider2D_t13116344 ** get_address_of_hitbox_9() { return &___hitbox_9; }
	inline void set_hitbox_9(CircleCollider2D_t13116344 * value)
	{
		___hitbox_9 = value;
		Il2CppCodeGenWriteBarrier(&___hitbox_9, value);
	}

	inline static int32_t get_offset_of_body_10() { return static_cast<int32_t>(offsetof(GravityPlatformer2D_t1338802700, ___body_10)); }
	inline Rigidbody2D_t502193897 * get_body_10() const { return ___body_10; }
	inline Rigidbody2D_t502193897 ** get_address_of_body_10() { return &___body_10; }
	inline void set_body_10(Rigidbody2D_t502193897 * value)
	{
		___body_10 = value;
		Il2CppCodeGenWriteBarrier(&___body_10, value);
	}

	inline static int32_t get_offset_of_mainCam_11() { return static_cast<int32_t>(offsetof(GravityPlatformer2D_t1338802700, ___mainCam_11)); }
	inline Camera_t189460977 * get_mainCam_11() const { return ___mainCam_11; }
	inline Camera_t189460977 ** get_address_of_mainCam_11() { return &___mainCam_11; }
	inline void set_mainCam_11(Camera_t189460977 * value)
	{
		___mainCam_11 = value;
		Il2CppCodeGenWriteBarrier(&___mainCam_11, value);
	}

	inline static int32_t get_offset_of_trail_12() { return static_cast<int32_t>(offsetof(GravityPlatformer2D_t1338802700, ___trail_12)); }
	inline TrailRenderer_t2490637367 * get_trail_12() const { return ___trail_12; }
	inline TrailRenderer_t2490637367 ** get_address_of_trail_12() { return &___trail_12; }
	inline void set_trail_12(TrailRenderer_t2490637367 * value)
	{
		___trail_12 = value;
		Il2CppCodeGenWriteBarrier(&___trail_12, value);
	}

	inline static int32_t get_offset_of_gravScale_13() { return static_cast<int32_t>(offsetof(GravityPlatformer2D_t1338802700, ___gravScale_13)); }
	inline float get_gravScale_13() const { return ___gravScale_13; }
	inline float* get_address_of_gravScale_13() { return &___gravScale_13; }
	inline void set_gravScale_13(float value)
	{
		___gravScale_13 = value;
	}

	inline static int32_t get_offset_of_particleMat_14() { return static_cast<int32_t>(offsetof(GravityPlatformer2D_t1338802700, ___particleMat_14)); }
	inline Material_t193706927 * get_particleMat_14() const { return ___particleMat_14; }
	inline Material_t193706927 ** get_address_of_particleMat_14() { return &___particleMat_14; }
	inline void set_particleMat_14(Material_t193706927 * value)
	{
		___particleMat_14 = value;
		Il2CppCodeGenWriteBarrier(&___particleMat_14, value);
	}

	inline static int32_t get_offset_of_overlayMat_15() { return static_cast<int32_t>(offsetof(GravityPlatformer2D_t1338802700, ___overlayMat_15)); }
	inline Material_t193706927 * get_overlayMat_15() const { return ___overlayMat_15; }
	inline Material_t193706927 ** get_address_of_overlayMat_15() { return &___overlayMat_15; }
	inline void set_overlayMat_15(Material_t193706927 * value)
	{
		___overlayMat_15 = value;
		Il2CppCodeGenWriteBarrier(&___overlayMat_15, value);
	}

	inline static int32_t get_offset_of_mVerticalVelocity_16() { return static_cast<int32_t>(offsetof(GravityPlatformer2D_t1338802700, ___mVerticalVelocity_16)); }
	inline float get_mVerticalVelocity_16() const { return ___mVerticalVelocity_16; }
	inline float* get_address_of_mVerticalVelocity_16() { return &___mVerticalVelocity_16; }
	inline void set_mVerticalVelocity_16(float value)
	{
		___mVerticalVelocity_16 = value;
	}

	inline static int32_t get_offset_of_mDead_17() { return static_cast<int32_t>(offsetof(GravityPlatformer2D_t1338802700, ___mDead_17)); }
	inline bool get_mDead_17() const { return ___mDead_17; }
	inline bool* get_address_of_mDead_17() { return &___mDead_17; }
	inline void set_mDead_17(bool value)
	{
		___mDead_17 = value;
	}

	inline static int32_t get_offset_of_timer_18() { return static_cast<int32_t>(offsetof(GravityPlatformer2D_t1338802700, ___timer_18)); }
	inline float get_timer_18() const { return ___timer_18; }
	inline float* get_address_of_timer_18() { return &___timer_18; }
	inline void set_timer_18(float value)
	{
		___timer_18 = value;
	}

	inline static int32_t get_offset_of_sTimer_19() { return static_cast<int32_t>(offsetof(GravityPlatformer2D_t1338802700, ___sTimer_19)); }
	inline float get_sTimer_19() const { return ___sTimer_19; }
	inline float* get_address_of_sTimer_19() { return &___sTimer_19; }
	inline void set_sTimer_19(float value)
	{
		___sTimer_19 = value;
	}

	inline static int32_t get_offset_of_forwardVelocity_20() { return static_cast<int32_t>(offsetof(GravityPlatformer2D_t1338802700, ___forwardVelocity_20)); }
	inline float get_forwardVelocity_20() const { return ___forwardVelocity_20; }
	inline float* get_address_of_forwardVelocity_20() { return &___forwardVelocity_20; }
	inline void set_forwardVelocity_20(float value)
	{
		___forwardVelocity_20 = value;
	}

	inline static int32_t get_offset_of_maxSpeed_21() { return static_cast<int32_t>(offsetof(GravityPlatformer2D_t1338802700, ___maxSpeed_21)); }
	inline float get_maxSpeed_21() const { return ___maxSpeed_21; }
	inline float* get_address_of_maxSpeed_21() { return &___maxSpeed_21; }
	inline void set_maxSpeed_21(float value)
	{
		___maxSpeed_21 = value;
	}

	inline static int32_t get_offset_of_typeToggled_22() { return static_cast<int32_t>(offsetof(GravityPlatformer2D_t1338802700, ___typeToggled_22)); }
	inline bool get_typeToggled_22() const { return ___typeToggled_22; }
	inline bool* get_address_of_typeToggled_22() { return &___typeToggled_22; }
	inline void set_typeToggled_22(bool value)
	{
		___typeToggled_22 = value;
	}

	inline static int32_t get_offset_of_acceleration_23() { return static_cast<int32_t>(offsetof(GravityPlatformer2D_t1338802700, ___acceleration_23)); }
	inline float get_acceleration_23() const { return ___acceleration_23; }
	inline float* get_address_of_acceleration_23() { return &___acceleration_23; }
	inline void set_acceleration_23(float value)
	{
		___acceleration_23 = value;
	}

	inline static int32_t get_offset_of_currentMode_24() { return static_cast<int32_t>(offsetof(GravityPlatformer2D_t1338802700, ___currentMode_24)); }
	inline int32_t get_currentMode_24() const { return ___currentMode_24; }
	inline int32_t* get_address_of_currentMode_24() { return &___currentMode_24; }
	inline void set_currentMode_24(int32_t value)
	{
		___currentMode_24 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
