﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// Boo.Lang.Runtime.DynamicDispatching.Dispatcher
struct Dispatcher_t2221136835;
// System.Object
struct Il2CppObject;
// System.Object[]
struct ObjectU5BU5D_t1108656482;
// System.IAsyncResult
struct IAsyncResult_t2754620036;
// System.AsyncCallback
struct AsyncCallback_t1369114871;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object4170816371.h"
#include "mscorlib_System_IntPtr4010401971.h"
#include "mscorlib_System_AsyncCallback1369114871.h"

// System.Void Boo.Lang.Runtime.DynamicDispatching.Dispatcher::.ctor(System.Object,System.IntPtr)
extern "C"  void Dispatcher__ctor_m350483677 (Dispatcher_t2221136835 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Boo.Lang.Runtime.DynamicDispatching.Dispatcher::Invoke(System.Object,System.Object[])
extern "C"  Il2CppObject * Dispatcher_Invoke_m1310332756 (Dispatcher_t2221136835 * __this, Il2CppObject * ___target0, ObjectU5BU5D_t1108656482* ___args1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult Boo.Lang.Runtime.DynamicDispatching.Dispatcher::BeginInvoke(System.Object,System.Object[],System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Dispatcher_BeginInvoke_m4243774386 (Dispatcher_t2221136835 * __this, Il2CppObject * ___target0, ObjectU5BU5D_t1108656482* ___args1, AsyncCallback_t1369114871 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Boo.Lang.Runtime.DynamicDispatching.Dispatcher::EndInvoke(System.IAsyncResult)
extern "C"  Il2CppObject * Dispatcher_EndInvoke_m1615025250 (Dispatcher_t2221136835 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
