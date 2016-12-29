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

// SpectralController
struct SpectralController_t2859967552;
// UnityEngine.Collider
struct Collider_t2939674232;
// UnityEngine.Collision
struct Collision_t2494107688;
// System.Collections.IEnumerator
struct IEnumerator_t3464575207;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Collider2939674232.h"
#include "UnityEngine_UnityEngine_Collision2494107688.h"

// System.Void SpectralController::.ctor()
extern "C"  void SpectralController__ctor_m576922715 (SpectralController_t2859967552 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SpectralController::Start()
extern "C"  void SpectralController_Start_m3819027803 (SpectralController_t2859967552 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SpectralController::Update()
extern "C"  void SpectralController_Update_m2431597074 (SpectralController_t2859967552 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SpectralController::OnTriggerEnter(UnityEngine.Collider)
extern "C"  void SpectralController_OnTriggerEnter_m664553725 (SpectralController_t2859967552 * __this, Collider_t2939674232 * ___hit0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SpectralController::OnCollisionEnter(UnityEngine.Collision)
extern "C"  void SpectralController_OnCollisionEnter_m2892741161 (SpectralController_t2859967552 * __this, Collision_t2494107688 * ___coll0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator SpectralController::DestroySpectral()
extern "C"  Il2CppObject * SpectralController_DestroySpectral_m1691433519 (SpectralController_t2859967552 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
