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
// System.String
struct String_t;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LeaderboardPopulator
struct  LeaderboardPopulator_t2551742893  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject LeaderboardPopulator::txtAsset
	GameObject_t1756533147 * ___txtAsset_2;
	// UnityEngine.GameObject[] LeaderboardPopulator::leaderboardArray
	GameObjectU5BU5D_t3057952154* ___leaderboardArray_3;
	// System.String LeaderboardPopulator::recentScore
	String_t* ___recentScore_4;

public:
	inline static int32_t get_offset_of_txtAsset_2() { return static_cast<int32_t>(offsetof(LeaderboardPopulator_t2551742893, ___txtAsset_2)); }
	inline GameObject_t1756533147 * get_txtAsset_2() const { return ___txtAsset_2; }
	inline GameObject_t1756533147 ** get_address_of_txtAsset_2() { return &___txtAsset_2; }
	inline void set_txtAsset_2(GameObject_t1756533147 * value)
	{
		___txtAsset_2 = value;
		Il2CppCodeGenWriteBarrier(&___txtAsset_2, value);
	}

	inline static int32_t get_offset_of_leaderboardArray_3() { return static_cast<int32_t>(offsetof(LeaderboardPopulator_t2551742893, ___leaderboardArray_3)); }
	inline GameObjectU5BU5D_t3057952154* get_leaderboardArray_3() const { return ___leaderboardArray_3; }
	inline GameObjectU5BU5D_t3057952154** get_address_of_leaderboardArray_3() { return &___leaderboardArray_3; }
	inline void set_leaderboardArray_3(GameObjectU5BU5D_t3057952154* value)
	{
		___leaderboardArray_3 = value;
		Il2CppCodeGenWriteBarrier(&___leaderboardArray_3, value);
	}

	inline static int32_t get_offset_of_recentScore_4() { return static_cast<int32_t>(offsetof(LeaderboardPopulator_t2551742893, ___recentScore_4)); }
	inline String_t* get_recentScore_4() const { return ___recentScore_4; }
	inline String_t** get_address_of_recentScore_4() { return &___recentScore_4; }
	inline void set_recentScore_4(String_t* value)
	{
		___recentScore_4 = value;
		Il2CppCodeGenWriteBarrier(&___recentScore_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
