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

// DG.Tweening.Core.DOSetter`1<System.Double>
struct DOSetter_1_t2260177433;
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

// System.Void DG.Tweening.Core.DOSetter`1<System.Double>::.ctor(System.Object,System.IntPtr)
extern "C"  void DOSetter_1__ctor_m1097073025_gshared (DOSetter_1_t2260177433 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method);
#define DOSetter_1__ctor_m1097073025(__this, ___object0, ___method1, method) ((  void (*) (DOSetter_1_t2260177433 *, Il2CppObject *, IntPtr_t, const MethodInfo*))DOSetter_1__ctor_m1097073025_gshared)(__this, ___object0, ___method1, method)
// System.Void DG.Tweening.Core.DOSetter`1<System.Double>::Invoke(T)
extern "C"  void DOSetter_1_Invoke_m3272252323_gshared (DOSetter_1_t2260177433 * __this, double ___pNewValue0, const MethodInfo* method);
#define DOSetter_1_Invoke_m3272252323(__this, ___pNewValue0, method) ((  void (*) (DOSetter_1_t2260177433 *, double, const MethodInfo*))DOSetter_1_Invoke_m3272252323_gshared)(__this, ___pNewValue0, method)
// System.IAsyncResult DG.Tweening.Core.DOSetter`1<System.Double>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * DOSetter_1_BeginInvoke_m2341169264_gshared (DOSetter_1_t2260177433 * __this, double ___pNewValue0, AsyncCallback_t1369114871 * ___callback1, Il2CppObject * ___object2, const MethodInfo* method);
#define DOSetter_1_BeginInvoke_m2341169264(__this, ___pNewValue0, ___callback1, ___object2, method) ((  Il2CppObject * (*) (DOSetter_1_t2260177433 *, double, AsyncCallback_t1369114871 *, Il2CppObject *, const MethodInfo*))DOSetter_1_BeginInvoke_m2341169264_gshared)(__this, ___pNewValue0, ___callback1, ___object2, method)
// System.Void DG.Tweening.Core.DOSetter`1<System.Double>::EndInvoke(System.IAsyncResult)
extern "C"  void DOSetter_1_EndInvoke_m1160666129_gshared (DOSetter_1_t2260177433 * __this, Il2CppObject * ___result0, const MethodInfo* method);
#define DOSetter_1_EndInvoke_m1160666129(__this, ___result0, method) ((  void (*) (DOSetter_1_t2260177433 *, Il2CppObject *, const MethodInfo*))DOSetter_1_EndInvoke_m1160666129_gshared)(__this, ___result0, method)
