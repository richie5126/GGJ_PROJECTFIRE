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

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MenuSingletons
struct  MenuSingletons_t1630400577  : public MonoBehaviour_t1158329972
{
public:

public:
};

struct MenuSingletons_t1630400577_StaticFields
{
public:
	// UnityEngine.GameObject MenuSingletons::instance
	GameObject_t1756533147 * ___instance_2;

public:
	inline static int32_t get_offset_of_instance_2() { return static_cast<int32_t>(offsetof(MenuSingletons_t1630400577_StaticFields, ___instance_2)); }
	inline GameObject_t1756533147 * get_instance_2() const { return ___instance_2; }
	inline GameObject_t1756533147 ** get_address_of_instance_2() { return &___instance_2; }
	inline void set_instance_2(GameObject_t1756533147 * value)
	{
		___instance_2 = value;
		Il2CppCodeGenWriteBarrier(&___instance_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
