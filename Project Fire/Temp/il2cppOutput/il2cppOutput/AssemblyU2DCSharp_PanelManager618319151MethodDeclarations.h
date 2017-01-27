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

// PanelManager
struct PanelManager_t618319151;
// UnityEngine.Animator
struct Animator_t69676727;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// System.Collections.IEnumerator
struct IEnumerator_t1466026749;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Animator69676727.h"
#include "UnityEngine_UnityEngine_GameObject1756533147.h"

// System.Void PanelManager::.ctor()
extern "C"  void PanelManager__ctor_m4171694616 (PanelManager_t618319151 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PanelManager::OnEnable()
extern "C"  void PanelManager_OnEnable_m572451356 (PanelManager_t618319151 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PanelManager::OpenPanel(UnityEngine.Animator)
extern "C"  void PanelManager_OpenPanel_m503000144 (PanelManager_t618319151 * __this, Animator_t69676727 * ___anim0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject PanelManager::FindFirstEnabledSelectable(UnityEngine.GameObject)
extern "C"  GameObject_t1756533147 * PanelManager_FindFirstEnabledSelectable_m2778461493 (Il2CppObject * __this /* static, unused */, GameObject_t1756533147 * ___gameObject0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PanelManager::CloseCurrent()
extern "C"  void PanelManager_CloseCurrent_m1617533205 (PanelManager_t618319151 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator PanelManager::DisablePanelDeleyed(UnityEngine.Animator)
extern "C"  Il2CppObject * PanelManager_DisablePanelDeleyed_m1769577802 (PanelManager_t618319151 * __this, Animator_t69676727 * ___anim0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PanelManager::SetSelected(UnityEngine.GameObject)
extern "C"  void PanelManager_SetSelected_m157425289 (PanelManager_t618319151 * __this, GameObject_t1756533147 * ___go0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
