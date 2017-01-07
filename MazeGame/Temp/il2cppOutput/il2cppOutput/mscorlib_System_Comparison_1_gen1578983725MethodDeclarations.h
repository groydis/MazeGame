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

// System.Comparison`1<System.Char>
struct Comparison_1_t1578983725;
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

// System.Void System.Comparison`1<System.Char>::.ctor(System.Object,System.IntPtr)
extern "C"  void Comparison_1__ctor_m3061856444_gshared (Comparison_1_t1578983725 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method);
#define Comparison_1__ctor_m3061856444(__this, ___object0, ___method1, method) ((  void (*) (Comparison_1_t1578983725 *, Il2CppObject *, IntPtr_t, const MethodInfo*))Comparison_1__ctor_m3061856444_gshared)(__this, ___object0, ___method1, method)
// System.Int32 System.Comparison`1<System.Char>::Invoke(T,T)
extern "C"  int32_t Comparison_1_Invoke_m3965928708_gshared (Comparison_1_t1578983725 * __this, Il2CppChar ___x0, Il2CppChar ___y1, const MethodInfo* method);
#define Comparison_1_Invoke_m3965928708(__this, ___x0, ___y1, method) ((  int32_t (*) (Comparison_1_t1578983725 *, Il2CppChar, Il2CppChar, const MethodInfo*))Comparison_1_Invoke_m3965928708_gshared)(__this, ___x0, ___y1, method)
// System.IAsyncResult System.Comparison`1<System.Char>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Comparison_1_BeginInvoke_m1028403325_gshared (Comparison_1_t1578983725 * __this, Il2CppChar ___x0, Il2CppChar ___y1, AsyncCallback_t1369114871 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method);
#define Comparison_1_BeginInvoke_m1028403325(__this, ___x0, ___y1, ___callback2, ___object3, method) ((  Il2CppObject * (*) (Comparison_1_t1578983725 *, Il2CppChar, Il2CppChar, AsyncCallback_t1369114871 *, Il2CppObject *, const MethodInfo*))Comparison_1_BeginInvoke_m1028403325_gshared)(__this, ___x0, ___y1, ___callback2, ___object3, method)
// System.Int32 System.Comparison`1<System.Char>::EndInvoke(System.IAsyncResult)
extern "C"  int32_t Comparison_1_EndInvoke_m674440424_gshared (Comparison_1_t1578983725 * __this, Il2CppObject * ___result0, const MethodInfo* method);
#define Comparison_1_EndInvoke_m674440424(__this, ___result0, method) ((  int32_t (*) (Comparison_1_t1578983725 *, Il2CppObject *, const MethodInfo*))Comparison_1_EndInvoke_m674440424_gshared)(__this, ___result0, method)
