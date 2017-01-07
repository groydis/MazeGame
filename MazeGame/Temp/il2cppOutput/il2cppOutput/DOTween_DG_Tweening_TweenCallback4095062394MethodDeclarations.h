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

// DG.Tweening.TweenCallback
struct TweenCallback_t4095062394;
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

// System.Void DG.Tweening.TweenCallback::.ctor(System.Object,System.IntPtr)
extern "C"  void TweenCallback__ctor_m3440504173 (TweenCallback_t4095062394 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DG.Tweening.TweenCallback::Invoke()
extern "C"  void TweenCallback_Invoke_m3522037767 (TweenCallback_t4095062394 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult DG.Tweening.TweenCallback::BeginInvoke(System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * TweenCallback_BeginInvoke_m50501284 (TweenCallback_t4095062394 * __this, AsyncCallback_t1369114871 * ___callback0, Il2CppObject * ___object1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DG.Tweening.TweenCallback::EndInvoke(System.IAsyncResult)
extern "C"  void TweenCallback_EndInvoke_m1613176317 (TweenCallback_t4095062394 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
