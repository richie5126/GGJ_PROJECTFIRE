#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// Clock
struct Clock_t3017784638;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"

// System.Void Clock::.ctor()
extern "C"  void Clock__ctor_m3910084939 (Clock_t3017784638 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Clock::Start()
extern "C"  void Clock_Start_m476942127 (Clock_t3017784638 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Clock::Awake()
extern "C"  void Clock_Awake_m2939551722 (Clock_t3017784638 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Clock::getScoreValue()
extern "C"  float Clock_getScoreValue_m130481784 (Clock_t3017784638 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Clock::getScore()
extern "C"  String_t* Clock_getScore_m2409698196 (Clock_t3017784638 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Clock::SetClock(System.Single)
extern "C"  void Clock_SetClock_m31333828 (Clock_t3017784638 * __this, float ___secondsElapsed0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Clock::FixedUpdate()
extern "C"  void Clock_FixedUpdate_m217016626 (Clock_t3017784638 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
