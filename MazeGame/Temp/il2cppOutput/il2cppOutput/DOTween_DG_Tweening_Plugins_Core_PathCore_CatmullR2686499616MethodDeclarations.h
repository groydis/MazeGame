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

// DG.Tweening.Plugins.Core.PathCore.CatmullRomDecoder
struct CatmullRomDecoder_t2686499616;
// DG.Tweening.Plugins.Core.PathCore.Path
struct Path_t4203839645;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t215400611;
// DG.Tweening.Plugins.Core.PathCore.ControlPoint[]
struct ControlPointU5BU5D_t1040784202;

#include "codegen/il2cpp-codegen.h"
#include "DOTween_DG_Tweening_Plugins_Core_PathCore_Path4203839645.h"
#include "UnityEngine_UnityEngine_Vector34282066566.h"

// System.Void DG.Tweening.Plugins.Core.PathCore.CatmullRomDecoder::FinalizePath(DG.Tweening.Plugins.Core.PathCore.Path,UnityEngine.Vector3[],System.Boolean)
extern "C"  void CatmullRomDecoder_FinalizePath_m1890170395 (CatmullRomDecoder_t2686499616 * __this, Path_t4203839645 * ___p0, Vector3U5BU5D_t215400611* ___wps1, bool ___isClosedPath2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 DG.Tweening.Plugins.Core.PathCore.CatmullRomDecoder::GetPoint(System.Single,UnityEngine.Vector3[],DG.Tweening.Plugins.Core.PathCore.Path,DG.Tweening.Plugins.Core.PathCore.ControlPoint[])
extern "C"  Vector3_t4282066566  CatmullRomDecoder_GetPoint_m2386756900 (CatmullRomDecoder_t2686499616 * __this, float ___perc0, Vector3U5BU5D_t215400611* ___wps1, Path_t4203839645 * ___p2, ControlPointU5BU5D_t1040784202* ___controlPoints3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DG.Tweening.Plugins.Core.PathCore.CatmullRomDecoder::SetTimeToLengthTables(DG.Tweening.Plugins.Core.PathCore.Path,System.Int32)
extern "C"  void CatmullRomDecoder_SetTimeToLengthTables_m2859720354 (CatmullRomDecoder_t2686499616 * __this, Path_t4203839645 * ___p0, int32_t ___subdivisions1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DG.Tweening.Plugins.Core.PathCore.CatmullRomDecoder::SetWaypointsLengths(DG.Tweening.Plugins.Core.PathCore.Path,System.Int32)
extern "C"  void CatmullRomDecoder_SetWaypointsLengths_m596216506 (CatmullRomDecoder_t2686499616 * __this, Path_t4203839645 * ___p0, int32_t ___subdivisions1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DG.Tweening.Plugins.Core.PathCore.CatmullRomDecoder::.ctor()
extern "C"  void CatmullRomDecoder__ctor_m93163228 (CatmullRomDecoder_t2686499616 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
