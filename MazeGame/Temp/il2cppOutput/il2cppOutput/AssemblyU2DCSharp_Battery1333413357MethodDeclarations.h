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

// Battery
struct Battery_t1333413357;
// UnityEngine.GameObject
struct GameObject_t3674682005;
// UnityEngine.Collider
struct Collider_t2939674232;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_GameObject3674682005.h"
#include "UnityEngine_UnityEngine_Collider2939674232.h"

// System.Void Battery::.ctor()
extern "C"  void Battery__ctor_m527057950 (Battery_t1333413357 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Battery::Start()
extern "C"  void Battery_Start_m3769163038 (Battery_t1333413357 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Battery::InteractWithBattery(UnityEngine.GameObject)
extern "C"  void Battery_InteractWithBattery_m2795277253 (Battery_t1333413357 * __this, GameObject_t3674682005 * ___playerHit0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Battery::OnTriggerEnter(UnityEngine.Collider)
extern "C"  void Battery_OnTriggerEnter_m1749304346 (Battery_t1333413357 * __this, Collider_t2939674232 * ___hit0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
