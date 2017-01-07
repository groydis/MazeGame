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

// System.Text.RegularExpressions.MatchEvaluator
struct MatchEvaluator_t1719977010;
// System.Object
struct Il2CppObject;
// System.String
struct String_t;
// System.Text.RegularExpressions.Match
struct Match_t2156507859;
// System.IAsyncResult
struct IAsyncResult_t2754620036;
// System.AsyncCallback
struct AsyncCallback_t1369114871;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object4170816371.h"
#include "mscorlib_System_IntPtr4010401971.h"
#include "System_System_Text_RegularExpressions_Match2156507859.h"
#include "mscorlib_System_AsyncCallback1369114871.h"

// System.Void System.Text.RegularExpressions.MatchEvaluator::.ctor(System.Object,System.IntPtr)
extern "C"  void MatchEvaluator__ctor_m2957600143 (MatchEvaluator_t1719977010 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Text.RegularExpressions.MatchEvaluator::Invoke(System.Text.RegularExpressions.Match)
extern "C"  String_t* MatchEvaluator_Invoke_m3215261838 (MatchEvaluator_t1719977010 * __this, Match_t2156507859 * ___match0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Text.RegularExpressions.MatchEvaluator::BeginInvoke(System.Text.RegularExpressions.Match,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * MatchEvaluator_BeginInvoke_m3315747252 (MatchEvaluator_t1719977010 * __this, Match_t2156507859 * ___match0, AsyncCallback_t1369114871 * ___callback1, Il2CppObject * ___object2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Text.RegularExpressions.MatchEvaluator::EndInvoke(System.IAsyncResult)
extern "C"  String_t* MatchEvaluator_EndInvoke_m3976645020 (MatchEvaluator_t1719977010 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
