#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Animator
struct Animator_t69676727;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// System.String
struct String_t;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PanelManager
struct  PanelManager_t618319151  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Animator PanelManager::initiallyOpen
	Animator_t69676727 * ___initiallyOpen_2;
	// System.Int32 PanelManager::m_OpenParameterId
	int32_t ___m_OpenParameterId_3;
	// UnityEngine.Animator PanelManager::m_Open
	Animator_t69676727 * ___m_Open_4;
	// UnityEngine.GameObject PanelManager::m_PreviouslySelected
	GameObject_t1756533147 * ___m_PreviouslySelected_5;

public:
	inline static int32_t get_offset_of_initiallyOpen_2() { return static_cast<int32_t>(offsetof(PanelManager_t618319151, ___initiallyOpen_2)); }
	inline Animator_t69676727 * get_initiallyOpen_2() const { return ___initiallyOpen_2; }
	inline Animator_t69676727 ** get_address_of_initiallyOpen_2() { return &___initiallyOpen_2; }
	inline void set_initiallyOpen_2(Animator_t69676727 * value)
	{
		___initiallyOpen_2 = value;
		Il2CppCodeGenWriteBarrier(&___initiallyOpen_2, value);
	}

	inline static int32_t get_offset_of_m_OpenParameterId_3() { return static_cast<int32_t>(offsetof(PanelManager_t618319151, ___m_OpenParameterId_3)); }
	inline int32_t get_m_OpenParameterId_3() const { return ___m_OpenParameterId_3; }
	inline int32_t* get_address_of_m_OpenParameterId_3() { return &___m_OpenParameterId_3; }
	inline void set_m_OpenParameterId_3(int32_t value)
	{
		___m_OpenParameterId_3 = value;
	}

	inline static int32_t get_offset_of_m_Open_4() { return static_cast<int32_t>(offsetof(PanelManager_t618319151, ___m_Open_4)); }
	inline Animator_t69676727 * get_m_Open_4() const { return ___m_Open_4; }
	inline Animator_t69676727 ** get_address_of_m_Open_4() { return &___m_Open_4; }
	inline void set_m_Open_4(Animator_t69676727 * value)
	{
		___m_Open_4 = value;
		Il2CppCodeGenWriteBarrier(&___m_Open_4, value);
	}

	inline static int32_t get_offset_of_m_PreviouslySelected_5() { return static_cast<int32_t>(offsetof(PanelManager_t618319151, ___m_PreviouslySelected_5)); }
	inline GameObject_t1756533147 * get_m_PreviouslySelected_5() const { return ___m_PreviouslySelected_5; }
	inline GameObject_t1756533147 ** get_address_of_m_PreviouslySelected_5() { return &___m_PreviouslySelected_5; }
	inline void set_m_PreviouslySelected_5(GameObject_t1756533147 * value)
	{
		___m_PreviouslySelected_5 = value;
		Il2CppCodeGenWriteBarrier(&___m_PreviouslySelected_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
