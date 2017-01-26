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

// CamShake
struct CamShake_t1547431985;
// System.Collections.IEnumerator
struct IEnumerator_t1466026749;

#include "codegen/il2cpp-codegen.h"

// System.Void CamShake::.ctor()
extern "C"  void CamShake__ctor_m2142024142 (CamShake_t1547431985 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CamShake::DoShake(System.Single,System.Single)
extern "C"  void CamShake_DoShake_m1547826283 (CamShake_t1547431985 * __this, float ___intensity0, float ___decayRate1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator CamShake::ProcessShake()
extern "C"  Il2CppObject * CamShake_ProcessShake_m1087846545 (CamShake_t1547431985 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
