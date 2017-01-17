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

// LTDescr/EaseTypeDelegate
struct EaseTypeDelegate_t2924752387;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t2754620036;
// System.AsyncCallback
struct AsyncCallback_t1369114871;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object4170816371.h"
#include "mscorlib_System_IntPtr4010401971.h"
#include "UnityEngine_UnityEngine_Vector34282066566.h"
#include "mscorlib_System_AsyncCallback1369114871.h"

// System.Void LTDescr/EaseTypeDelegate::.ctor(System.Object,System.IntPtr)
extern "C"  void EaseTypeDelegate__ctor_m2093181430 (EaseTypeDelegate_t2924752387 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 LTDescr/EaseTypeDelegate::Invoke()
extern "C"  Vector3_t4282066566  EaseTypeDelegate_Invoke_m2441291978 (EaseTypeDelegate_t2924752387 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult LTDescr/EaseTypeDelegate::BeginInvoke(System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * EaseTypeDelegate_BeginInvoke_m724239667 (EaseTypeDelegate_t2924752387 * __this, AsyncCallback_t1369114871 * ___callback0, Il2CppObject * ___object1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 LTDescr/EaseTypeDelegate::EndInvoke(System.IAsyncResult)
extern "C"  Vector3_t4282066566  EaseTypeDelegate_EndInvoke_m3370908288 (EaseTypeDelegate_t2924752387 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
