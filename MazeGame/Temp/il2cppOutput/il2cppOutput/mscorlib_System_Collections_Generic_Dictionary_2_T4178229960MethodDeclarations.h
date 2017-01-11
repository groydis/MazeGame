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

// System.Collections.Generic.Dictionary`2/Transform`1<Swipe,UnityEngine.Vector2,UnityEngine.Vector2>
struct Transform_1_t4178229960;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t2754620036;
// System.AsyncCallback
struct AsyncCallback_t1369114871;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object4170816371.h"
#include "mscorlib_System_IntPtr4010401971.h"
#include "UnityEngine_UnityEngine_Vector24282066565.h"
#include "AssemblyU2DCSharp_Swipe80301850.h"
#include "mscorlib_System_AsyncCallback1369114871.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<Swipe,UnityEngine.Vector2,UnityEngine.Vector2>::.ctor(System.Object,System.IntPtr)
extern "C"  void Transform_1__ctor_m1025823315_gshared (Transform_1_t4178229960 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method);
#define Transform_1__ctor_m1025823315(__this, ___object0, ___method1, method) ((  void (*) (Transform_1_t4178229960 *, Il2CppObject *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m1025823315_gshared)(__this, ___object0, ___method1, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<Swipe,UnityEngine.Vector2,UnityEngine.Vector2>::Invoke(TKey,TValue)
extern "C"  Vector2_t4282066565  Transform_1_Invoke_m2289933385_gshared (Transform_1_t4178229960 * __this, int32_t ___key0, Vector2_t4282066565  ___value1, const MethodInfo* method);
#define Transform_1_Invoke_m2289933385(__this, ___key0, ___value1, method) ((  Vector2_t4282066565  (*) (Transform_1_t4178229960 *, int32_t, Vector2_t4282066565 , const MethodInfo*))Transform_1_Invoke_m2289933385_gshared)(__this, ___key0, ___value1, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<Swipe,UnityEngine.Vector2,UnityEngine.Vector2>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Transform_1_BeginInvoke_m3035127464_gshared (Transform_1_t4178229960 * __this, int32_t ___key0, Vector2_t4282066565  ___value1, AsyncCallback_t1369114871 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method);
#define Transform_1_BeginInvoke_m3035127464(__this, ___key0, ___value1, ___callback2, ___object3, method) ((  Il2CppObject * (*) (Transform_1_t4178229960 *, int32_t, Vector2_t4282066565 , AsyncCallback_t1369114871 *, Il2CppObject *, const MethodInfo*))Transform_1_BeginInvoke_m3035127464_gshared)(__this, ___key0, ___value1, ___callback2, ___object3, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<Swipe,UnityEngine.Vector2,UnityEngine.Vector2>::EndInvoke(System.IAsyncResult)
extern "C"  Vector2_t4282066565  Transform_1_EndInvoke_m3028004001_gshared (Transform_1_t4178229960 * __this, Il2CppObject * ___result0, const MethodInfo* method);
#define Transform_1_EndInvoke_m3028004001(__this, ___result0, method) ((  Vector2_t4282066565  (*) (Transform_1_t4178229960 *, Il2CppObject *, const MethodInfo*))Transform_1_EndInvoke_m3028004001_gshared)(__this, ___result0, method)
