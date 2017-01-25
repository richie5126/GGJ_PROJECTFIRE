#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String[]
struct StringU5BU5D_t1642385972;
// UnityEngine.KeyCode[]
struct KeyCodeU5BU5D_t3340676209;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// ObstacleRenderer
struct ObstacleRenderer_t489142038;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TutorialRenderer
struct  TutorialRenderer_t71534203  : public MonoBehaviour_t1158329972
{
public:
	// System.String[] TutorialRenderer::tutText
	StringU5BU5D_t1642385972* ___tutText_2;
	// UnityEngine.KeyCode[] TutorialRenderer::keys
	KeyCodeU5BU5D_t3340676209* ___keys_3;
	// UnityEngine.GameObject TutorialRenderer::tutBox
	GameObject_t1756533147 * ___tutBox_4;
	// UnityEngine.GameObject TutorialRenderer::HUD_Canvas
	GameObject_t1756533147 * ___HUD_Canvas_5;
	// ObstacleRenderer TutorialRenderer::obstacleRenderer
	ObstacleRenderer_t489142038 * ___obstacleRenderer_6;
	// UnityEngine.GameObject TutorialRenderer::tut
	GameObject_t1756533147 * ___tut_7;
	// System.Boolean TutorialRenderer::satisfied
	bool ___satisfied_8;
	// System.Single TutorialRenderer::timer
	float ___timer_9;
	// System.Int32 TutorialRenderer::currentCondition
	int32_t ___currentCondition_10;

public:
	inline static int32_t get_offset_of_tutText_2() { return static_cast<int32_t>(offsetof(TutorialRenderer_t71534203, ___tutText_2)); }
	inline StringU5BU5D_t1642385972* get_tutText_2() const { return ___tutText_2; }
	inline StringU5BU5D_t1642385972** get_address_of_tutText_2() { return &___tutText_2; }
	inline void set_tutText_2(StringU5BU5D_t1642385972* value)
	{
		___tutText_2 = value;
		Il2CppCodeGenWriteBarrier(&___tutText_2, value);
	}

	inline static int32_t get_offset_of_keys_3() { return static_cast<int32_t>(offsetof(TutorialRenderer_t71534203, ___keys_3)); }
	inline KeyCodeU5BU5D_t3340676209* get_keys_3() const { return ___keys_3; }
	inline KeyCodeU5BU5D_t3340676209** get_address_of_keys_3() { return &___keys_3; }
	inline void set_keys_3(KeyCodeU5BU5D_t3340676209* value)
	{
		___keys_3 = value;
		Il2CppCodeGenWriteBarrier(&___keys_3, value);
	}

	inline static int32_t get_offset_of_tutBox_4() { return static_cast<int32_t>(offsetof(TutorialRenderer_t71534203, ___tutBox_4)); }
	inline GameObject_t1756533147 * get_tutBox_4() const { return ___tutBox_4; }
	inline GameObject_t1756533147 ** get_address_of_tutBox_4() { return &___tutBox_4; }
	inline void set_tutBox_4(GameObject_t1756533147 * value)
	{
		___tutBox_4 = value;
		Il2CppCodeGenWriteBarrier(&___tutBox_4, value);
	}

	inline static int32_t get_offset_of_HUD_Canvas_5() { return static_cast<int32_t>(offsetof(TutorialRenderer_t71534203, ___HUD_Canvas_5)); }
	inline GameObject_t1756533147 * get_HUD_Canvas_5() const { return ___HUD_Canvas_5; }
	inline GameObject_t1756533147 ** get_address_of_HUD_Canvas_5() { return &___HUD_Canvas_5; }
	inline void set_HUD_Canvas_5(GameObject_t1756533147 * value)
	{
		___HUD_Canvas_5 = value;
		Il2CppCodeGenWriteBarrier(&___HUD_Canvas_5, value);
	}

	inline static int32_t get_offset_of_obstacleRenderer_6() { return static_cast<int32_t>(offsetof(TutorialRenderer_t71534203, ___obstacleRenderer_6)); }
	inline ObstacleRenderer_t489142038 * get_obstacleRenderer_6() const { return ___obstacleRenderer_6; }
	inline ObstacleRenderer_t489142038 ** get_address_of_obstacleRenderer_6() { return &___obstacleRenderer_6; }
	inline void set_obstacleRenderer_6(ObstacleRenderer_t489142038 * value)
	{
		___obstacleRenderer_6 = value;
		Il2CppCodeGenWriteBarrier(&___obstacleRenderer_6, value);
	}

	inline static int32_t get_offset_of_tut_7() { return static_cast<int32_t>(offsetof(TutorialRenderer_t71534203, ___tut_7)); }
	inline GameObject_t1756533147 * get_tut_7() const { return ___tut_7; }
	inline GameObject_t1756533147 ** get_address_of_tut_7() { return &___tut_7; }
	inline void set_tut_7(GameObject_t1756533147 * value)
	{
		___tut_7 = value;
		Il2CppCodeGenWriteBarrier(&___tut_7, value);
	}

	inline static int32_t get_offset_of_satisfied_8() { return static_cast<int32_t>(offsetof(TutorialRenderer_t71534203, ___satisfied_8)); }
	inline bool get_satisfied_8() const { return ___satisfied_8; }
	inline bool* get_address_of_satisfied_8() { return &___satisfied_8; }
	inline void set_satisfied_8(bool value)
	{
		___satisfied_8 = value;
	}

	inline static int32_t get_offset_of_timer_9() { return static_cast<int32_t>(offsetof(TutorialRenderer_t71534203, ___timer_9)); }
	inline float get_timer_9() const { return ___timer_9; }
	inline float* get_address_of_timer_9() { return &___timer_9; }
	inline void set_timer_9(float value)
	{
		___timer_9 = value;
	}

	inline static int32_t get_offset_of_currentCondition_10() { return static_cast<int32_t>(offsetof(TutorialRenderer_t71534203, ___currentCondition_10)); }
	inline int32_t get_currentCondition_10() const { return ___currentCondition_10; }
	inline int32_t* get_address_of_currentCondition_10() { return &___currentCondition_10; }
	inline void set_currentCondition_10(int32_t value)
	{
		___currentCondition_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
