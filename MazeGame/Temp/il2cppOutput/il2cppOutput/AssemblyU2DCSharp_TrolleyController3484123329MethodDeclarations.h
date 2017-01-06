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

// TrolleyController
struct TrolleyController_t3484123329;
// UnityEngine.Collider
struct Collider_t2939674232;
// System.Collections.IEnumerator
struct IEnumerator_t3464575207;
// UnityEngine.Collision
struct Collision_t2494107688;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Collider2939674232.h"
#include "UnityEngine_UnityEngine_Collision2494107688.h"

// System.Void TrolleyController::.ctor()
extern "C"  void TrolleyController__ctor_m477525450 (TrolleyController_t3484123329 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TrolleyController::Start()
extern "C"  void TrolleyController_Start_m3719630538 (TrolleyController_t3484123329 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TrolleyController::FixedUpdate()
extern "C"  void TrolleyController_FixedUpdate_m952062917 (TrolleyController_t3484123329 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TrolleyController::OnTriggerEnter(UnityEngine.Collider)
extern "C"  void TrolleyController_OnTriggerEnter_m395641326 (TrolleyController_t3484123329 * __this, Collider_t2939674232 * ___hit0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator TrolleyController::FlashingRenderer()
extern "C"  Il2CppObject * TrolleyController_FlashingRenderer_m353872647 (TrolleyController_t3484123329 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TrolleyController::OnCollisionEnter(UnityEngine.Collision)
extern "C"  void TrolleyController_OnCollisionEnter_m1837469592 (TrolleyController_t3484123329 * __this, Collision_t2494107688 * ___col0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator TrolleyController::DestroyTrolley()
extern "C"  Il2CppObject * TrolleyController_DestroyTrolley_m1463308029 (TrolleyController_t3484123329 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator TrolleyController::DeSpawnTrolley()
extern "C"  Il2CppObject * TrolleyController_DeSpawnTrolley_m111460221 (TrolleyController_t3484123329 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
