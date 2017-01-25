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
// UnityEngine.GameObject
struct GameObject_t1756533147;
// ObstacleRenderer
struct ObstacleRenderer_t489142038;
// UnityEngine.EventSystems.EventSystem
struct EventSystem_t3466835263;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TutorialRendererMobile
struct  TutorialRendererMobile_t2567490859  : public MonoBehaviour_t1158329972
{
public:
	// System.String[] TutorialRendererMobile::tutText
	StringU5BU5D_t1642385972* ___tutText_2;
	// System.String[] TutorialRendererMobile::buttonNames
	StringU5BU5D_t1642385972* ___buttonNames_3;
	// UnityEngine.GameObject TutorialRendererMobile::tutBox
	GameObject_t1756533147 * ___tutBox_4;
	// UnityEngine.GameObject TutorialRendererMobile::HUD_Canvas
	GameObject_t1756533147 * ___HUD_Canvas_5;
	// ObstacleRenderer TutorialRendererMobile::obstacleRenderer
	ObstacleRenderer_t489142038 * ___obstacleRenderer_6;
	// UnityEngine.EventSystems.EventSystem TutorialRendererMobile::es
	EventSystem_t3466835263 * ___es_7;
	// UnityEngine.GameObject TutorialRendererMobile::tut
	GameObject_t1756533147 * ___tut_8;
	// System.Boolean TutorialRendererMobile::satisfied
	bool ___satisfied_9;
	// System.Single TutorialRendererMobile::timer
	float ___timer_10;
	// System.Int32 TutorialRendererMobile::currentCondition
	int32_t ___currentCondition_11;

public:
	inline static int32_t get_offset_of_tutText_2() { return static_cast<int32_t>(offsetof(TutorialRendererMobile_t2567490859, ___tutText_2)); }
	inline StringU5BU5D_t1642385972* get_tutText_2() const { return ___tutText_2; }
	inline StringU5BU5D_t1642385972** get_address_of_tutText_2() { return &___tutText_2; }
	inline void set_tutText_2(StringU5BU5D_t1642385972* value)
	{
		___tutText_2 = value;
		Il2CppCodeGenWriteBarrier(&___tutText_2, value);
	}

	inline static int32_t get_offset_of_buttonNames_3() { return static_cast<int32_t>(offsetof(TutorialRendererMobile_t2567490859, ___buttonNames_3)); }
	inline StringU5BU5D_t1642385972* get_buttonNames_3() const { return ___buttonNames_3; }
	inline StringU5BU5D_t1642385972** get_address_of_buttonNames_3() { return &___buttonNames_3; }
	inline void set_buttonNames_3(StringU5BU5D_t1642385972* value)
	{
		___buttonNames_3 = value;
		Il2CppCodeGenWriteBarrier(&___buttonNames_3, value);
	}

	inline static int32_t get_offset_of_tutBox_4() { return static_cast<int32_t>(offsetof(TutorialRendererMobile_t2567490859, ___tutBox_4)); }
	inline GameObject_t1756533147 * get_tutBox_4() const { return ___tutBox_4; }
	inline GameObject_t1756533147 ** get_address_of_tutBox_4() { return &___tutBox_4; }
	inline void set_tutBox_4(GameObject_t1756533147 * value)
	{
		___tutBox_4 = value;
		Il2CppCodeGenWriteBarrier(&___tutBox_4, value);
	}

	inline static int32_t get_offset_of_HUD_Canvas_5() { return static_cast<int32_t>(offsetof(TutorialRendererMobile_t2567490859, ___HUD_Canvas_5)); }
	inline GameObject_t1756533147 * get_HUD_Canvas_5() const { return ___HUD_Canvas_5; }
	inline GameObject_t1756533147 ** get_address_of_HUD_Canvas_5() { return &___HUD_Canvas_5; }
	inline void set_HUD_Canvas_5(GameObject_t1756533147 * value)
	{
		___HUD_Canvas_5 = value;
		Il2CppCodeGenWriteBarrier(&___HUD_Canvas_5, value);
	}

	inline static int32_t get_offset_of_obstacleRenderer_6() { return static_cast<int32_t>(offsetof(TutorialRendererMobile_t2567490859, ___obstacleRenderer_6)); }
	inline ObstacleRenderer_t489142038 * get_obstacleRenderer_6() const { return ___obstacleRenderer_6; }
	inline ObstacleRenderer_t489142038 ** get_address_of_obstacleRenderer_6() { return &___obstacleRenderer_6; }
	inline void set_obstacleRenderer_6(ObstacleRenderer_t489142038 * value)
	{
		___obstacleRenderer_6 = value;
		Il2CppCodeGenWriteBarrier(&___obstacleRenderer_6, value);
	}

	inline static int32_t get_offset_of_es_7() { return static_cast<int32_t>(offsetof(TutorialRendererMobile_t2567490859, ___es_7)); }
	inline EventSystem_t3466835263 * get_es_7() const { return ___es_7; }
	inline EventSystem_t3466835263 ** get_address_of_es_7() { return &___es_7; }
	inline void set_es_7(EventSystem_t3466835263 * value)
	{
		___es_7 = value;
		Il2CppCodeGenWriteBarrier(&___es_7, value);
	}

	inline static int32_t get_offset_of_tut_8() { return static_cast<int32_t>(offsetof(TutorialRendererMobile_t2567490859, ___tut_8)); }
	inline GameObject_t1756533147 * get_tut_8() const { return ___tut_8; }
	inline GameObject_t1756533147 ** get_address_of_tut_8() { return &___tut_8; }
	inline void set_tut_8(GameObject_t1756533147 * value)
	{
		___tut_8 = value;
		Il2CppCodeGenWriteBarrier(&___tut_8, value);
	}

	inline static int32_t get_offset_of_satisfied_9() { return static_cast<int32_t>(offsetof(TutorialRendererMobile_t2567490859, ___satisfied_9)); }
	inline bool get_satisfied_9() const { return ___satisfied_9; }
	inline bool* get_address_of_satisfied_9() { return &___satisfied_9; }
	inline void set_satisfied_9(bool value)
	{
		___satisfied_9 = value;
	}

	inline static int32_t get_offset_of_timer_10() { return static_cast<int32_t>(offsetof(TutorialRendererMobile_t2567490859, ___timer_10)); }
	inline float get_timer_10() const { return ___timer_10; }
	inline float* get_address_of_timer_10() { return &___timer_10; }
	inline void set_timer_10(float value)
	{
		___timer_10 = value;
	}

	inline static int32_t get_offset_of_currentCondition_11() { return static_cast<int32_t>(offsetof(TutorialRendererMobile_t2567490859, ___currentCondition_11)); }
	inline int32_t get_currentCondition_11() const { return ___currentCondition_11; }
	inline int32_t* get_address_of_currentCondition_11() { return &___currentCondition_11; }
	inline void set_currentCondition_11(int32_t value)
	{
		___currentCondition_11 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
