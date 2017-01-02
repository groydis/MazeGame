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

// System.Text.RegularExpressions.BaseMachine/MatchAppendEvaluator
struct MatchAppendEvaluator_t1285000982;
// System.Object
struct Il2CppObject;
// System.Text.RegularExpressions.Match
struct Match_t2156507859;
// System.Text.StringBuilder
struct StringBuilder_t243639308;
// System.IAsyncResult
struct IAsyncResult_t2754620036;
// System.AsyncCallback
struct AsyncCallback_t1369114871;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object4170816371.h"
#include "mscorlib_System_IntPtr4010401971.h"
#include "System_System_Text_RegularExpressions_Match2156507859.h"
#include "mscorlib_System_Text_StringBuilder243639308.h"
#include "mscorlib_System_AsyncCallback1369114871.h"

// System.Void System.Text.RegularExpressions.BaseMachine/MatchAppendEvaluator::.ctor(System.Object,System.IntPtr)
extern "C"  void MatchAppendEvaluator__ctor_m44201646 (MatchAppendEvaluator_t1285000982 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.BaseMachine/MatchAppendEvaluator::Invoke(System.Text.RegularExpressions.Match,System.Text.StringBuilder)
extern "C"  void MatchAppendEvaluator_Invoke_m2910809428 (MatchAppendEvaluator_t1285000982 * __this, Match_t2156507859 * ___match0, StringBuilder_t243639308 * ___sb1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Text.RegularExpressions.BaseMachine/MatchAppendEvaluator::BeginInvoke(System.Text.RegularExpressions.Match,System.Text.StringBuilder,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * MatchAppendEvaluator_BeginInvoke_m1979969071 (MatchAppendEvaluator_t1285000982 * __this, Match_t2156507859 * ___match0, StringBuilder_t243639308 * ___sb1, AsyncCallback_t1369114871 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.BaseMachine/MatchAppendEvaluator::EndInvoke(System.IAsyncResult)
extern "C"  void MatchAppendEvaluator_EndInvoke_m4264062910 (MatchAppendEvaluator_t1285000982 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
