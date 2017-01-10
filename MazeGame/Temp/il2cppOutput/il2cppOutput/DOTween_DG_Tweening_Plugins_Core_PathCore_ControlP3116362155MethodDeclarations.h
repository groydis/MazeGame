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

// DG.Tweening.Plugins.Core.PathCore.ControlPoint
struct ControlPoint_t3116362155;
struct ControlPoint_t3116362155_marshaled_pinvoke;
struct ControlPoint_t3116362155_marshaled_com;

#include "codegen/il2cpp-codegen.h"
#include "DOTween_DG_Tweening_Plugins_Core_PathCore_ControlP3116362155.h"
#include "UnityEngine_UnityEngine_Vector34282066566.h"

// System.Void DG.Tweening.Plugins.Core.PathCore.ControlPoint::.ctor(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  void ControlPoint__ctor_m583813511 (ControlPoint_t3116362155 * __this, Vector3_t4282066566  ___a0, Vector3_t4282066566  ___b1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// DG.Tweening.Plugins.Core.PathCore.ControlPoint DG.Tweening.Plugins.Core.PathCore.ControlPoint::op_Addition(DG.Tweening.Plugins.Core.PathCore.ControlPoint,UnityEngine.Vector3)
extern "C"  ControlPoint_t3116362155  ControlPoint_op_Addition_m412975311 (Il2CppObject * __this /* static, unused */, ControlPoint_t3116362155  ___cp0, Vector3_t4282066566  ___v1, const MethodInfo* method) IL2CPP_METHOD_ATTR;

// Methods for marshaling
struct ControlPoint_t3116362155;
struct ControlPoint_t3116362155_marshaled_pinvoke;

extern "C" void ControlPoint_t3116362155_marshal_pinvoke(const ControlPoint_t3116362155& unmarshaled, ControlPoint_t3116362155_marshaled_pinvoke& marshaled);
extern "C" void ControlPoint_t3116362155_marshal_pinvoke_back(const ControlPoint_t3116362155_marshaled_pinvoke& marshaled, ControlPoint_t3116362155& unmarshaled);
extern "C" void ControlPoint_t3116362155_marshal_pinvoke_cleanup(ControlPoint_t3116362155_marshaled_pinvoke& marshaled);

// Methods for marshaling
struct ControlPoint_t3116362155;
struct ControlPoint_t3116362155_marshaled_com;

extern "C" void ControlPoint_t3116362155_marshal_com(const ControlPoint_t3116362155& unmarshaled, ControlPoint_t3116362155_marshaled_com& marshaled);
extern "C" void ControlPoint_t3116362155_marshal_com_back(const ControlPoint_t3116362155_marshaled_com& marshaled, ControlPoint_t3116362155& unmarshaled);
extern "C" void ControlPoint_t3116362155_marshal_com_cleanup(ControlPoint_t3116362155_marshaled_com& marshaled);
