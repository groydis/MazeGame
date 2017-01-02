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

// DG.Tweening.EaseFunction
struct EaseFunction_t48414120;
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

// System.Void DG.Tweening.EaseFunction::.ctor(System.Object,System.IntPtr)
extern "C"  void EaseFunction__ctor_m2377075975 (EaseFunction_t48414120 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single DG.Tweening.EaseFunction::Invoke(System.Single,System.Single,System.Single,System.Single)
extern "C"  float EaseFunction_Invoke_m3387051341 (EaseFunction_t48414120 * __this, float ___time0, float ___duration1, float ___overshootOrAmplitude2, float ___period3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult DG.Tweening.EaseFunction::BeginInvoke(System.Single,System.Single,System.Single,System.Single,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * EaseFunction_BeginInvoke_m637014062 (EaseFunction_t48414120 * __this, float ___time0, float ___duration1, float ___overshootOrAmplitude2, float ___period3, AsyncCallback_t1369114871 * ___callback4, Il2CppObject * ___object5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single DG.Tweening.EaseFunction::EndInvoke(System.IAsyncResult)
extern "C"  float EaseFunction_EndInvoke_m259108835 (EaseFunction_t48414120 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
