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

// Boo.Lang.Runtime.DynamicDispatching.DispatcherCache
struct DispatcherCache_t3145029473;
// Boo.Lang.Runtime.DynamicDispatching.Dispatcher
struct Dispatcher_t2221136835;
// Boo.Lang.Runtime.DynamicDispatching.DispatcherKey
struct DispatcherKey_t1959089598;
// Boo.Lang.Runtime.DynamicDispatching.DispatcherCache/DispatcherFactory
struct DispatcherFactory_t1500081684;

#include "codegen/il2cpp-codegen.h"
#include "Boo_Lang_Boo_Lang_Runtime_DynamicDispatching_Dispa1959089598.h"
#include "Boo_Lang_Boo_Lang_Runtime_DynamicDispatching_Dispa1500081684.h"

// System.Void Boo.Lang.Runtime.DynamicDispatching.DispatcherCache::.ctor()
extern "C"  void DispatcherCache__ctor_m2809249023 (DispatcherCache_t3145029473 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Boo.Lang.Runtime.DynamicDispatching.DispatcherCache::.cctor()
extern "C"  void DispatcherCache__cctor_m705277582 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Boo.Lang.Runtime.DynamicDispatching.Dispatcher Boo.Lang.Runtime.DynamicDispatching.DispatcherCache::Get(Boo.Lang.Runtime.DynamicDispatching.DispatcherKey,Boo.Lang.Runtime.DynamicDispatching.DispatcherCache/DispatcherFactory)
extern "C"  Dispatcher_t2221136835 * DispatcherCache_Get_m3716505639 (DispatcherCache_t3145029473 * __this, DispatcherKey_t1959089598 * ___key0, DispatcherFactory_t1500081684 * ___factory1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
