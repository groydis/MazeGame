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

// WallLamp
struct WallLamp_t388237026;
// UnityEngine.Collider
struct Collider_t2939674232;
// System.Collections.IEnumerator
struct IEnumerator_t3464575207;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Collider2939674232.h"

// System.Void WallLamp::.ctor()
extern "C"  void WallLamp__ctor_m458839545 (WallLamp_t388237026 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WallLamp::Awake()
extern "C"  void WallLamp_Awake_m696444764 (WallLamp_t388237026 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WallLamp::Start()
extern "C"  void WallLamp_Start_m3700944633 (WallLamp_t388237026 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WallLamp::OnTriggerEnter(UnityEngine.Collider)
extern "C"  void WallLamp_OnTriggerEnter_m2446435359 (WallLamp_t388237026 * __this, Collider_t2939674232 * ___hit0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WallLamp::OnTriggerExit(UnityEngine.Collider)
extern "C"  void WallLamp_OnTriggerExit_m698671523 (WallLamp_t388237026 * __this, Collider_t2939674232 * ___hit0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator WallLamp::WallLampFlicker()
extern "C"  Il2CppObject * WallLamp_WallLampFlicker_m1468172197 (WallLamp_t388237026 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
