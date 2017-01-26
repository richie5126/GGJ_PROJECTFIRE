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
// UnityEngine.CircleCollider2D
struct CircleCollider2D_t13116344;
// UnityEngine.Rigidbody2D
struct Rigidbody2D_t502193897;
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

// GravityPlatformer2DAI
struct  GravityPlatformer2DAI_t2933532766  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject GravityPlatformer2DAI::playerAssembly
	GameObject_t1756533147 * ___playerAssembly_2;
	// System.Boolean GravityPlatformer2DAI::mOrientation
	bool ___mOrientation_3;
	// UnityEngine.CircleCollider2D GravityPlatformer2DAI::hitbox
	CircleCollider2D_t13116344 * ___hitbox_4;
	// UnityEngine.Rigidbody2D GravityPlatformer2DAI::body
	Rigidbody2D_t502193897 * ___body_5;
	// UnityEngine.TrailRenderer GravityPlatformer2DAI::trail
	TrailRenderer_t2490637367 * ___trail_6;
	// System.Single GravityPlatformer2DAI::gravScale
	float ___gravScale_7;
	// UnityEngine.Material GravityPlatformer2DAI::particleMat
	Material_t193706927 * ___particleMat_8;
	// UnityEngine.Material GravityPlatformer2DAI::overlayMat
	Material_t193706927 * ___overlayMat_9;
	// System.Single GravityPlatformer2DAI::mVerticalVelocity
	float ___mVerticalVelocity_10;
	// System.Boolean GravityPlatformer2DAI::mDead
	bool ___mDead_11;
	// System.Single GravityPlatformer2DAI::timer
	float ___timer_12;
	// System.Single GravityPlatformer2DAI::sTimer
	float ___sTimer_13;
	// System.Single GravityPlatformer2DAI::forwardVelocity
	float ___forwardVelocity_14;
	// System.Single GravityPlatformer2DAI::maxSpeed
	float ___maxSpeed_15;
	// System.Boolean GravityPlatformer2DAI::typeToggled
	bool ___typeToggled_16;
	// System.Int32 GravityPlatformer2DAI::currentMode
	int32_t ___currentMode_17;

public:
	inline static int32_t get_offset_of_playerAssembly_2() { return static_cast<int32_t>(offsetof(GravityPlatformer2DAI_t2933532766, ___playerAssembly_2)); }
	inline GameObject_t1756533147 * get_playerAssembly_2() const { return ___playerAssembly_2; }
	inline GameObject_t1756533147 ** get_address_of_playerAssembly_2() { return &___playerAssembly_2; }
	inline void set_playerAssembly_2(GameObject_t1756533147 * value)
	{
		___playerAssembly_2 = value;
		Il2CppCodeGenWriteBarrier(&___playerAssembly_2, value);
	}

	inline static int32_t get_offset_of_mOrientation_3() { return static_cast<int32_t>(offsetof(GravityPlatformer2DAI_t2933532766, ___mOrientation_3)); }
	inline bool get_mOrientation_3() const { return ___mOrientation_3; }
	inline bool* get_address_of_mOrientation_3() { return &___mOrientation_3; }
	inline void set_mOrientation_3(bool value)
	{
		___mOrientation_3 = value;
	}

	inline static int32_t get_offset_of_hitbox_4() { return static_cast<int32_t>(offsetof(GravityPlatformer2DAI_t2933532766, ___hitbox_4)); }
	inline CircleCollider2D_t13116344 * get_hitbox_4() const { return ___hitbox_4; }
	inline CircleCollider2D_t13116344 ** get_address_of_hitbox_4() { return &___hitbox_4; }
	inline void set_hitbox_4(CircleCollider2D_t13116344 * value)
	{
		___hitbox_4 = value;
		Il2CppCodeGenWriteBarrier(&___hitbox_4, value);
	}

	inline static int32_t get_offset_of_body_5() { return static_cast<int32_t>(offsetof(GravityPlatformer2DAI_t2933532766, ___body_5)); }
	inline Rigidbody2D_t502193897 * get_body_5() const { return ___body_5; }
	inline Rigidbody2D_t502193897 ** get_address_of_body_5() { return &___body_5; }
	inline void set_body_5(Rigidbody2D_t502193897 * value)
	{
		___body_5 = value;
		Il2CppCodeGenWriteBarrier(&___body_5, value);
	}

	inline static int32_t get_offset_of_trail_6() { return static_cast<int32_t>(offsetof(GravityPlatformer2DAI_t2933532766, ___trail_6)); }
	inline TrailRenderer_t2490637367 * get_trail_6() const { return ___trail_6; }
	inline TrailRenderer_t2490637367 ** get_address_of_trail_6() { return &___trail_6; }
	inline void set_trail_6(TrailRenderer_t2490637367 * value)
	{
		___trail_6 = value;
		Il2CppCodeGenWriteBarrier(&___trail_6, value);
	}

	inline static int32_t get_offset_of_gravScale_7() { return static_cast<int32_t>(offsetof(GravityPlatformer2DAI_t2933532766, ___gravScale_7)); }
	inline float get_gravScale_7() const { return ___gravScale_7; }
	inline float* get_address_of_gravScale_7() { return &___gravScale_7; }
	inline void set_gravScale_7(float value)
	{
		___gravScale_7 = value;
	}

	inline static int32_t get_offset_of_particleMat_8() { return static_cast<int32_t>(offsetof(GravityPlatformer2DAI_t2933532766, ___particleMat_8)); }
	inline Material_t193706927 * get_particleMat_8() const { return ___particleMat_8; }
	inline Material_t193706927 ** get_address_of_particleMat_8() { return &___particleMat_8; }
	inline void set_particleMat_8(Material_t193706927 * value)
	{
		___particleMat_8 = value;
		Il2CppCodeGenWriteBarrier(&___particleMat_8, value);
	}

	inline static int32_t get_offset_of_overlayMat_9() { return static_cast<int32_t>(offsetof(GravityPlatformer2DAI_t2933532766, ___overlayMat_9)); }
	inline Material_t193706927 * get_overlayMat_9() const { return ___overlayMat_9; }
	inline Material_t193706927 ** get_address_of_overlayMat_9() { return &___overlayMat_9; }
	inline void set_overlayMat_9(Material_t193706927 * value)
	{
		___overlayMat_9 = value;
		Il2CppCodeGenWriteBarrier(&___overlayMat_9, value);
	}

	inline static int32_t get_offset_of_mVerticalVelocity_10() { return static_cast<int32_t>(offsetof(GravityPlatformer2DAI_t2933532766, ___mVerticalVelocity_10)); }
	inline float get_mVerticalVelocity_10() const { return ___mVerticalVelocity_10; }
	inline float* get_address_of_mVerticalVelocity_10() { return &___mVerticalVelocity_10; }
	inline void set_mVerticalVelocity_10(float value)
	{
		___mVerticalVelocity_10 = value;
	}

	inline static int32_t get_offset_of_mDead_11() { return static_cast<int32_t>(offsetof(GravityPlatformer2DAI_t2933532766, ___mDead_11)); }
	inline bool get_mDead_11() const { return ___mDead_11; }
	inline bool* get_address_of_mDead_11() { return &___mDead_11; }
	inline void set_mDead_11(bool value)
	{
		___mDead_11 = value;
	}

	inline static int32_t get_offset_of_timer_12() { return static_cast<int32_t>(offsetof(GravityPlatformer2DAI_t2933532766, ___timer_12)); }
	inline float get_timer_12() const { return ___timer_12; }
	inline float* get_address_of_timer_12() { return &___timer_12; }
	inline void set_timer_12(float value)
	{
		___timer_12 = value;
	}

	inline static int32_t get_offset_of_sTimer_13() { return static_cast<int32_t>(offsetof(GravityPlatformer2DAI_t2933532766, ___sTimer_13)); }
	inline float get_sTimer_13() const { return ___sTimer_13; }
	inline float* get_address_of_sTimer_13() { return &___sTimer_13; }
	inline void set_sTimer_13(float value)
	{
		___sTimer_13 = value;
	}

	inline static int32_t get_offset_of_forwardVelocity_14() { return static_cast<int32_t>(offsetof(GravityPlatformer2DAI_t2933532766, ___forwardVelocity_14)); }
	inline float get_forwardVelocity_14() const { return ___forwardVelocity_14; }
	inline float* get_address_of_forwardVelocity_14() { return &___forwardVelocity_14; }
	inline void set_forwardVelocity_14(float value)
	{
		___forwardVelocity_14 = value;
	}

	inline static int32_t get_offset_of_maxSpeed_15() { return static_cast<int32_t>(offsetof(GravityPlatformer2DAI_t2933532766, ___maxSpeed_15)); }
	inline float get_maxSpeed_15() const { return ___maxSpeed_15; }
	inline float* get_address_of_maxSpeed_15() { return &___maxSpeed_15; }
	inline void set_maxSpeed_15(float value)
	{
		___maxSpeed_15 = value;
	}

	inline static int32_t get_offset_of_typeToggled_16() { return static_cast<int32_t>(offsetof(GravityPlatformer2DAI_t2933532766, ___typeToggled_16)); }
	inline bool get_typeToggled_16() const { return ___typeToggled_16; }
	inline bool* get_address_of_typeToggled_16() { return &___typeToggled_16; }
	inline void set_typeToggled_16(bool value)
	{
		___typeToggled_16 = value;
	}

	inline static int32_t get_offset_of_currentMode_17() { return static_cast<int32_t>(offsetof(GravityPlatformer2DAI_t2933532766, ___currentMode_17)); }
	inline int32_t get_currentMode_17() const { return ___currentMode_17; }
	inline int32_t* get_address_of_currentMode_17() { return &___currentMode_17; }
	inline void set_currentMode_17(int32_t value)
	{
		___currentMode_17 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
