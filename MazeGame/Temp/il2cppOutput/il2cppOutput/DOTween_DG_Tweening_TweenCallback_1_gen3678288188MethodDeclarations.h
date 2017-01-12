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

// DG.Tweening.TweenCallback`1<System.Int32>
struct TweenCallback_1_t3678288188;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t2754620036;
// System.AsyncCallback
struct AsyncCallback_t1369114871;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object4170816371.h"
#include "mscorlib_System_IntPtr4010401971.h"
#include "mscorlib_System_AsyncCallback1369114871.h"

// System.Void DG.Tweening.TweenCallback`1<System.Int32>::.ctor(System.Object,System.IntPtr)
extern "C"  void TweenCallback_1__ctor_m3659365073_gshared (TweenCallback_1_t3678288188 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method);
#define TweenCallback_1__ctor_m3659365073(__this, ___object0, ___method1, method) ((  void (*) (TweenCallback_1_t3678288188 *, Il2CppObject *, IntPtr_t, const MethodInfo*))TweenCallback_1__ctor_m3659365073_gshared)(__this, ___object0, ___method1, method)
// System.Void DG.Tweening.TweenCallback`1<System.Int32>::Invoke(T)
extern "C"  void TweenCallback_1_Invoke_m2284046419_gshared (TweenCallback_1_t3678288188 * __this, int32_t ___value0, const MethodInfo* method);
#define TweenCallback_1_Invoke_m2284046419(__this, ___value0, method) ((  void (*) (TweenCallback_1_t3678288188 *, int32_t, const MethodInfo*))TweenCallback_1_Invoke_m2284046419_gshared)(__this, ___value0, method)
// System.IAsyncResult DG.Tweening.TweenCallback`1<System.Int32>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * TweenCallback_1_BeginInvoke_m1739889576_gshared (TweenCallback_1_t3678288188 * __this, int32_t ___value0, AsyncCallback_t1369114871 * ___callback1, Il2CppObject * ___object2, const MethodInfo* method);
#define TweenCallback_1_BeginInvoke_m1739889576(__this, ___value0, ___callback1, ___object2, method) ((  Il2CppObject * (*) (TweenCallback_1_t3678288188 *, int32_t, AsyncCallback_t1369114871 *, Il2CppObject *, const MethodInfo*))TweenCallback_1_BeginInvoke_m1739889576_gshared)(__this, ___value0, ___callback1, ___object2, method)
// System.Void DG.Tweening.TweenCallback`1<System.Int32>::EndInvoke(System.IAsyncResult)
extern "C"  void TweenCallback_1_EndInvoke_m1371077985_gshared (TweenCallback_1_t3678288188 * __this, Il2CppObject * ___result0, const MethodInfo* method);
#define TweenCallback_1_EndInvoke_m1371077985(__this, ___result0, method) ((  void (*) (TweenCallback_1_t3678288188 *, Il2CppObject *, const MethodInfo*))TweenCallback_1_EndInvoke_m1371077985_gshared)(__this, ___result0, method)
