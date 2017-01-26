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

// ObstacleRenderer
struct ObstacleRenderer_t489142038;
// System.Int32[]
struct Int32U5BU5D_t3030399641;

#include "codegen/il2cpp-codegen.h"

// System.Void ObstacleRenderer::.ctor()
extern "C"  void ObstacleRenderer__ctor_m1300396851 (ObstacleRenderer_t489142038 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ObstacleRenderer::Start()
extern "C"  void ObstacleRenderer_Start_m2497827895 (ObstacleRenderer_t489142038 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ObstacleRenderer::generateObstaclePatterns(System.Int32[],System.Int32[])
extern "C"  void ObstacleRenderer_generateObstaclePatterns_m4105279040 (ObstacleRenderer_t489142038 * __this, Int32U5BU5D_t3030399641* ___lowerfloor0, Int32U5BU5D_t3030399641* ___upperfloor1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ObstacleRenderer::generateObstacle(System.Int32,System.Boolean,System.Single)
extern "C"  void ObstacleRenderer_generateObstacle_m3530984498 (ObstacleRenderer_t489142038 * __this, int32_t ___type0, bool ___orientation1, float ___posX2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ObstacleRenderer::Update()
extern "C"  void ObstacleRenderer_Update_m172579460 (ObstacleRenderer_t489142038 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
