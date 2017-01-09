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

// UnityStandardAssets.ImageEffects.NoiseAndGrain
struct NoiseAndGrain_t3744904080;
// UnityEngine.RenderTexture
struct RenderTexture_t1963041563;
// UnityEngine.Material
struct Material_t3870600107;
// UnityEngine.Texture2D
struct Texture2D_t3884108195;
// UnityEngine.Mesh
struct Mesh_t4241756145;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_RenderTexture1963041563.h"
#include "UnityEngine_UnityEngine_Material3870600107.h"
#include "UnityEngine_UnityEngine_Texture2D3884108195.h"
#include "UnityEngine_UnityEngine_Mesh4241756145.h"

// System.Void UnityStandardAssets.ImageEffects.NoiseAndGrain::.ctor()
extern "C"  void NoiseAndGrain__ctor_m546153599 (NoiseAndGrain_t3744904080 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.NoiseAndGrain::.cctor()
extern "C"  void NoiseAndGrain__cctor_m3563763470 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.NoiseAndGrain::Awake()
extern "C"  void NoiseAndGrain_Awake_m783758818 (NoiseAndGrain_t3744904080 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityStandardAssets.ImageEffects.NoiseAndGrain::CheckResources()
extern "C"  bool NoiseAndGrain_CheckResources_m3062686782 (NoiseAndGrain_t3744904080 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.NoiseAndGrain::OnRenderImage(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
extern "C"  void NoiseAndGrain_OnRenderImage_m3094527103 (NoiseAndGrain_t3744904080 * __this, RenderTexture_t1963041563 * ___source0, RenderTexture_t1963041563 * ___destination1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.NoiseAndGrain::DrawNoiseQuadGrid(UnityEngine.RenderTexture,UnityEngine.RenderTexture,UnityEngine.Material,UnityEngine.Texture2D,UnityEngine.Mesh,System.Int32)
extern "C"  void NoiseAndGrain_DrawNoiseQuadGrid_m488109329 (Il2CppObject * __this /* static, unused */, RenderTexture_t1963041563 * ___source0, RenderTexture_t1963041563 * ___dest1, Material_t3870600107 * ___fxMaterial2, Texture2D_t3884108195 * ___noise3, Mesh_t4241756145 * ___mesh4, int32_t ___passNr5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.NoiseAndGrain::BuildMesh(UnityEngine.Mesh,UnityEngine.RenderTexture,UnityEngine.Texture2D)
extern "C"  void NoiseAndGrain_BuildMesh_m1254459752 (Il2CppObject * __this /* static, unused */, Mesh_t4241756145 * ___mesh0, RenderTexture_t1963041563 * ___source1, Texture2D_t3884108195 * ___noise2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.NoiseAndGrain::BuildMeshUV0(UnityEngine.Mesh,System.Int32,System.Int32,System.Single,System.Int32)
extern "C"  void NoiseAndGrain_BuildMeshUV0_m270227645 (Il2CppObject * __this /* static, unused */, Mesh_t4241756145 * ___mesh0, int32_t ___width1, int32_t ___height2, float ___noiseSize3, int32_t ___noiseWidth4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
