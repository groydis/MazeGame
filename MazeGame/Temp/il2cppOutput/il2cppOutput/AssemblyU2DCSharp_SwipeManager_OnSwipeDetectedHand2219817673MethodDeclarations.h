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

// SwipeManager/OnSwipeDetectedHandler
struct OnSwipeDetectedHandler_t2219817673;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t2754620036;
// System.AsyncCallback
struct AsyncCallback_t1369114871;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object4170816371.h"
#include "mscorlib_System_IntPtr4010401971.h"
#include "AssemblyU2DCSharp_Swipe80301850.h"
#include "mscorlib_System_AsyncCallback1369114871.h"

// System.Void SwipeManager/OnSwipeDetectedHandler::.ctor(System.Object,System.IntPtr)
extern "C"  void OnSwipeDetectedHandler__ctor_m2303842336 (OnSwipeDetectedHandler_t2219817673 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SwipeManager/OnSwipeDetectedHandler::Invoke(Swipe)
extern "C"  void OnSwipeDetectedHandler_Invoke_m809775774 (OnSwipeDetectedHandler_t2219817673 * __this, int32_t ___swipeDirection0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult SwipeManager/OnSwipeDetectedHandler::BeginInvoke(Swipe,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * OnSwipeDetectedHandler_BeginInvoke_m789052735 (OnSwipeDetectedHandler_t2219817673 * __this, int32_t ___swipeDirection0, AsyncCallback_t1369114871 * ___callback1, Il2CppObject * ___object2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SwipeManager/OnSwipeDetectedHandler::EndInvoke(System.IAsyncResult)
extern "C"  void OnSwipeDetectedHandler_EndInvoke_m462838320 (OnSwipeDetectedHandler_t2219817673 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
