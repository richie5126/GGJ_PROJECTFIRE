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

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TutorialExecutor
struct  TutorialExecutor_t2783498777  : public MonoBehaviour_t1158329972
{
public:
	// System.String[] TutorialExecutor::tutorialText
	StringU5BU5D_t1642385972* ___tutorialText_2;
	// System.Int32 TutorialExecutor::stage
	int32_t ___stage_3;
	// System.Int32 TutorialExecutor::tipCount
	int32_t ___tipCount_4;

public:
	inline static int32_t get_offset_of_tutorialText_2() { return static_cast<int32_t>(offsetof(TutorialExecutor_t2783498777, ___tutorialText_2)); }
	inline StringU5BU5D_t1642385972* get_tutorialText_2() const { return ___tutorialText_2; }
	inline StringU5BU5D_t1642385972** get_address_of_tutorialText_2() { return &___tutorialText_2; }
	inline void set_tutorialText_2(StringU5BU5D_t1642385972* value)
	{
		___tutorialText_2 = value;
		Il2CppCodeGenWriteBarrier(&___tutorialText_2, value);
	}

	inline static int32_t get_offset_of_stage_3() { return static_cast<int32_t>(offsetof(TutorialExecutor_t2783498777, ___stage_3)); }
	inline int32_t get_stage_3() const { return ___stage_3; }
	inline int32_t* get_address_of_stage_3() { return &___stage_3; }
	inline void set_stage_3(int32_t value)
	{
		___stage_3 = value;
	}

	inline static int32_t get_offset_of_tipCount_4() { return static_cast<int32_t>(offsetof(TutorialExecutor_t2783498777, ___tipCount_4)); }
	inline int32_t get_tipCount_4() const { return ___tipCount_4; }
	inline int32_t* get_address_of_tipCount_4() { return &___tipCount_4; }
	inline void set_tipCount_4(int32_t value)
	{
		___tipCount_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
