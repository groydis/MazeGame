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

// Boo.Lang.Runtime.DynamicDispatching.DispatcherCache/DispatcherFactory
struct DispatcherFactory_t1500081684;
// System.Object
struct Il2CppObject;
// Boo.Lang.Runtime.DynamicDispatching.Dispatcher
struct Dispatcher_t2221136835;
// System.IAsyncResult
struct IAsyncResult_t2754620036;
// System.AsyncCallback
struct AsyncCallback_t1369114871;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object4170816371.h"
#include "mscorlib_System_IntPtr4010401971.h"
#include "mscorlib_System_AsyncCallback1369114871.h"

// System.Void Boo.Lang.Runtime.DynamicDispatching.DispatcherCache/DispatcherFactory::.ctor(System.Object,System.IntPtr)
extern "C"  void DispatcherFactory__ctor_m1032703159 (DispatcherFactory_t1500081684 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Boo.Lang.Runtime.DynamicDispatching.Dispatcher Boo.Lang.Runtime.DynamicDispatching.DispatcherCache/DispatcherFactory::Invoke()
extern "C"  Dispatcher_t2221136835 * DispatcherFactory_Invoke_m1095288990 (DispatcherFactory_t1500081684 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult Boo.Lang.Runtime.DynamicDispatching.DispatcherCache/DispatcherFactory::BeginInvoke(System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * DispatcherFactory_BeginInvoke_m2582758298 (DispatcherFactory_t1500081684 * __this, AsyncCallback_t1369114871 * ___callback0, Il2CppObject * ___object1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Boo.Lang.Runtime.DynamicDispatching.Dispatcher Boo.Lang.Runtime.DynamicDispatching.DispatcherCache/DispatcherFactory::EndInvoke(System.IAsyncResult)
extern "C"  Dispatcher_t2221136835 * DispatcherFactory_EndInvoke_m1714635604 (DispatcherFactory_t1500081684 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
