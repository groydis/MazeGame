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

// System.Object
struct Il2CppObject;
// DG.Tweening.Tween
struct Tween_t675658773;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object4170816371.h"
#include "DOTween_DG_Tweening_Tween675658773.h"
#include "mscorlib_System_String7231557.h"
#include "DOTween_DG_Tweening_LogBehaviour1943982491.h"

// System.Void DG.Tweening.Core.Debugger::Log(System.Object)
extern "C"  void Debugger_Log_m2354352989 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___message0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DG.Tweening.Core.Debugger::LogWarning(System.Object)
extern "C"  void Debugger_LogWarning_m2505295565 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___message0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DG.Tweening.Core.Debugger::LogError(System.Object)
extern "C"  void Debugger_LogError_m1865249889 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___message0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DG.Tweening.Core.Debugger::LogReport(System.Object)
extern "C"  void Debugger_LogReport_m3642095625 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___message0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DG.Tweening.Core.Debugger::LogInvalidTween(DG.Tweening.Tween)
extern "C"  void Debugger_LogInvalidTween_m3266936808 (Il2CppObject * __this /* static, unused */, Tween_t675658773 * ___t0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DG.Tweening.Core.Debugger::LogNestedTween(DG.Tweening.Tween)
extern "C"  void Debugger_LogNestedTween_m395117460 (Il2CppObject * __this /* static, unused */, Tween_t675658773 * ___t0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DG.Tweening.Core.Debugger::LogNullTween(DG.Tweening.Tween)
extern "C"  void Debugger_LogNullTween_m4293897636 (Il2CppObject * __this /* static, unused */, Tween_t675658773 * ___t0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DG.Tweening.Core.Debugger::LogNonPathTween(DG.Tweening.Tween)
extern "C"  void Debugger_LogNonPathTween_m2452455811 (Il2CppObject * __this /* static, unused */, Tween_t675658773 * ___t0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DG.Tweening.Core.Debugger::LogMissingMaterialProperty(System.String)
extern "C"  void Debugger_LogMissingMaterialProperty_m2484818293 (Il2CppObject * __this /* static, unused */, String_t* ___propertyName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DG.Tweening.Core.Debugger::LogRemoveActiveTweenError(System.String)
extern "C"  void Debugger_LogRemoveActiveTweenError_m3316972452 (Il2CppObject * __this /* static, unused */, String_t* ___propertyName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DG.Tweening.Core.Debugger::SetLogPriority(DG.Tweening.LogBehaviour)
extern "C"  void Debugger_SetLogPriority_m2680656432 (Il2CppObject * __this /* static, unused */, int32_t ___logBehaviour0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
