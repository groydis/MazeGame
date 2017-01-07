#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject
struct GameObject_t3674682005;
// UnityEngine.Shader
struct Shader_t3191267369;
// UnityEngine.Material
struct Material_t3870600107;
// UnityEngine.Texture2D
struct Texture2D_t3884108195;
// UnityEngine.Matrix4x4[]
struct Matrix4x4U5BU5D_t1421664456;
// UnityEngine.Camera
struct Camera_t2727095145;

#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_1415309093.h"
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_1351415316.h"
#include "UnityEngine_UnityEngine_Vector34282066566.h"
#include "UnityEngine_UnityEngine_LayerMask3236759763.h"
#include "UnityEngine_UnityEngine_Matrix4x41651859333.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.ImageEffects.CameraMotionBlur
struct  CameraMotionBlur_t3513202448  : public PostEffectsBase_t1415309093
{
public:
	// UnityStandardAssets.ImageEffects.CameraMotionBlur/MotionBlurFilter UnityStandardAssets.ImageEffects.CameraMotionBlur::filterType
	int32_t ___filterType_7;
	// System.Boolean UnityStandardAssets.ImageEffects.CameraMotionBlur::preview
	bool ___preview_8;
	// UnityEngine.Vector3 UnityStandardAssets.ImageEffects.CameraMotionBlur::previewScale
	Vector3_t4282066566  ___previewScale_9;
	// System.Single UnityStandardAssets.ImageEffects.CameraMotionBlur::movementScale
	float ___movementScale_10;
	// System.Single UnityStandardAssets.ImageEffects.CameraMotionBlur::rotationScale
	float ___rotationScale_11;
	// System.Single UnityStandardAssets.ImageEffects.CameraMotionBlur::maxVelocity
	float ___maxVelocity_12;
	// System.Single UnityStandardAssets.ImageEffects.CameraMotionBlur::minVelocity
	float ___minVelocity_13;
	// System.Single UnityStandardAssets.ImageEffects.CameraMotionBlur::velocityScale
	float ___velocityScale_14;
	// System.Single UnityStandardAssets.ImageEffects.CameraMotionBlur::softZDistance
	float ___softZDistance_15;
	// System.Int32 UnityStandardAssets.ImageEffects.CameraMotionBlur::velocityDownsample
	int32_t ___velocityDownsample_16;
	// UnityEngine.LayerMask UnityStandardAssets.ImageEffects.CameraMotionBlur::excludeLayers
	LayerMask_t3236759763  ___excludeLayers_17;
	// UnityEngine.GameObject UnityStandardAssets.ImageEffects.CameraMotionBlur::tmpCam
	GameObject_t3674682005 * ___tmpCam_18;
	// UnityEngine.Shader UnityStandardAssets.ImageEffects.CameraMotionBlur::shader
	Shader_t3191267369 * ___shader_19;
	// UnityEngine.Shader UnityStandardAssets.ImageEffects.CameraMotionBlur::dx11MotionBlurShader
	Shader_t3191267369 * ___dx11MotionBlurShader_20;
	// UnityEngine.Shader UnityStandardAssets.ImageEffects.CameraMotionBlur::replacementClear
	Shader_t3191267369 * ___replacementClear_21;
	// UnityEngine.Material UnityStandardAssets.ImageEffects.CameraMotionBlur::motionBlurMaterial
	Material_t3870600107 * ___motionBlurMaterial_22;
	// UnityEngine.Material UnityStandardAssets.ImageEffects.CameraMotionBlur::dx11MotionBlurMaterial
	Material_t3870600107 * ___dx11MotionBlurMaterial_23;
	// UnityEngine.Texture2D UnityStandardAssets.ImageEffects.CameraMotionBlur::noiseTexture
	Texture2D_t3884108195 * ___noiseTexture_24;
	// System.Single UnityStandardAssets.ImageEffects.CameraMotionBlur::jitter
	float ___jitter_25;
	// System.Boolean UnityStandardAssets.ImageEffects.CameraMotionBlur::showVelocity
	bool ___showVelocity_26;
	// System.Single UnityStandardAssets.ImageEffects.CameraMotionBlur::showVelocityScale
	float ___showVelocityScale_27;
	// UnityEngine.Matrix4x4 UnityStandardAssets.ImageEffects.CameraMotionBlur::currentViewProjMat
	Matrix4x4_t1651859333  ___currentViewProjMat_28;
	// UnityEngine.Matrix4x4[] UnityStandardAssets.ImageEffects.CameraMotionBlur::currentStereoViewProjMat
	Matrix4x4U5BU5D_t1421664456* ___currentStereoViewProjMat_29;
	// UnityEngine.Matrix4x4 UnityStandardAssets.ImageEffects.CameraMotionBlur::prevViewProjMat
	Matrix4x4_t1651859333  ___prevViewProjMat_30;
	// UnityEngine.Matrix4x4[] UnityStandardAssets.ImageEffects.CameraMotionBlur::prevStereoViewProjMat
	Matrix4x4U5BU5D_t1421664456* ___prevStereoViewProjMat_31;
	// System.Int32 UnityStandardAssets.ImageEffects.CameraMotionBlur::prevFrameCount
	int32_t ___prevFrameCount_32;
	// System.Boolean UnityStandardAssets.ImageEffects.CameraMotionBlur::wasActive
	bool ___wasActive_33;
	// UnityEngine.Vector3 UnityStandardAssets.ImageEffects.CameraMotionBlur::prevFrameForward
	Vector3_t4282066566  ___prevFrameForward_34;
	// UnityEngine.Vector3 UnityStandardAssets.ImageEffects.CameraMotionBlur::prevFrameUp
	Vector3_t4282066566  ___prevFrameUp_35;
	// UnityEngine.Vector3 UnityStandardAssets.ImageEffects.CameraMotionBlur::prevFramePos
	Vector3_t4282066566  ___prevFramePos_36;
	// UnityEngine.Camera UnityStandardAssets.ImageEffects.CameraMotionBlur::_camera
	Camera_t2727095145 * ____camera_37;

public:
	inline static int32_t get_offset_of_filterType_7() { return static_cast<int32_t>(offsetof(CameraMotionBlur_t3513202448, ___filterType_7)); }
	inline int32_t get_filterType_7() const { return ___filterType_7; }
	inline int32_t* get_address_of_filterType_7() { return &___filterType_7; }
	inline void set_filterType_7(int32_t value)
	{
		___filterType_7 = value;
	}

	inline static int32_t get_offset_of_preview_8() { return static_cast<int32_t>(offsetof(CameraMotionBlur_t3513202448, ___preview_8)); }
	inline bool get_preview_8() const { return ___preview_8; }
	inline bool* get_address_of_preview_8() { return &___preview_8; }
	inline void set_preview_8(bool value)
	{
		___preview_8 = value;
	}

	inline static int32_t get_offset_of_previewScale_9() { return static_cast<int32_t>(offsetof(CameraMotionBlur_t3513202448, ___previewScale_9)); }
	inline Vector3_t4282066566  get_previewScale_9() const { return ___previewScale_9; }
	inline Vector3_t4282066566 * get_address_of_previewScale_9() { return &___previewScale_9; }
	inline void set_previewScale_9(Vector3_t4282066566  value)
	{
		___previewScale_9 = value;
	}

	inline static int32_t get_offset_of_movementScale_10() { return static_cast<int32_t>(offsetof(CameraMotionBlur_t3513202448, ___movementScale_10)); }
	inline float get_movementScale_10() const { return ___movementScale_10; }
	inline float* get_address_of_movementScale_10() { return &___movementScale_10; }
	inline void set_movementScale_10(float value)
	{
		___movementScale_10 = value;
	}

	inline static int32_t get_offset_of_rotationScale_11() { return static_cast<int32_t>(offsetof(CameraMotionBlur_t3513202448, ___rotationScale_11)); }
	inline float get_rotationScale_11() const { return ___rotationScale_11; }
	inline float* get_address_of_rotationScale_11() { return &___rotationScale_11; }
	inline void set_rotationScale_11(float value)
	{
		___rotationScale_11 = value;
	}

	inline static int32_t get_offset_of_maxVelocity_12() { return static_cast<int32_t>(offsetof(CameraMotionBlur_t3513202448, ___maxVelocity_12)); }
	inline float get_maxVelocity_12() const { return ___maxVelocity_12; }
	inline float* get_address_of_maxVelocity_12() { return &___maxVelocity_12; }
	inline void set_maxVelocity_12(float value)
	{
		___maxVelocity_12 = value;
	}

	inline static int32_t get_offset_of_minVelocity_13() { return static_cast<int32_t>(offsetof(CameraMotionBlur_t3513202448, ___minVelocity_13)); }
	inline float get_minVelocity_13() const { return ___minVelocity_13; }
	inline float* get_address_of_minVelocity_13() { return &___minVelocity_13; }
	inline void set_minVelocity_13(float value)
	{
		___minVelocity_13 = value;
	}

	inline static int32_t get_offset_of_velocityScale_14() { return static_cast<int32_t>(offsetof(CameraMotionBlur_t3513202448, ___velocityScale_14)); }
	inline float get_velocityScale_14() const { return ___velocityScale_14; }
	inline float* get_address_of_velocityScale_14() { return &___velocityScale_14; }
	inline void set_velocityScale_14(float value)
	{
		___velocityScale_14 = value;
	}

	inline static int32_t get_offset_of_softZDistance_15() { return static_cast<int32_t>(offsetof(CameraMotionBlur_t3513202448, ___softZDistance_15)); }
	inline float get_softZDistance_15() const { return ___softZDistance_15; }
	inline float* get_address_of_softZDistance_15() { return &___softZDistance_15; }
	inline void set_softZDistance_15(float value)
	{
		___softZDistance_15 = value;
	}

	inline static int32_t get_offset_of_velocityDownsample_16() { return static_cast<int32_t>(offsetof(CameraMotionBlur_t3513202448, ___velocityDownsample_16)); }
	inline int32_t get_velocityDownsample_16() const { return ___velocityDownsample_16; }
	inline int32_t* get_address_of_velocityDownsample_16() { return &___velocityDownsample_16; }
	inline void set_velocityDownsample_16(int32_t value)
	{
		___velocityDownsample_16 = value;
	}

	inline static int32_t get_offset_of_excludeLayers_17() { return static_cast<int32_t>(offsetof(CameraMotionBlur_t3513202448, ___excludeLayers_17)); }
	inline LayerMask_t3236759763  get_excludeLayers_17() const { return ___excludeLayers_17; }
	inline LayerMask_t3236759763 * get_address_of_excludeLayers_17() { return &___excludeLayers_17; }
	inline void set_excludeLayers_17(LayerMask_t3236759763  value)
	{
		___excludeLayers_17 = value;
	}

	inline static int32_t get_offset_of_tmpCam_18() { return static_cast<int32_t>(offsetof(CameraMotionBlur_t3513202448, ___tmpCam_18)); }
	inline GameObject_t3674682005 * get_tmpCam_18() const { return ___tmpCam_18; }
	inline GameObject_t3674682005 ** get_address_of_tmpCam_18() { return &___tmpCam_18; }
	inline void set_tmpCam_18(GameObject_t3674682005 * value)
	{
		___tmpCam_18 = value;
		Il2CppCodeGenWriteBarrier(&___tmpCam_18, value);
	}

	inline static int32_t get_offset_of_shader_19() { return static_cast<int32_t>(offsetof(CameraMotionBlur_t3513202448, ___shader_19)); }
	inline Shader_t3191267369 * get_shader_19() const { return ___shader_19; }
	inline Shader_t3191267369 ** get_address_of_shader_19() { return &___shader_19; }
	inline void set_shader_19(Shader_t3191267369 * value)
	{
		___shader_19 = value;
		Il2CppCodeGenWriteBarrier(&___shader_19, value);
	}

	inline static int32_t get_offset_of_dx11MotionBlurShader_20() { return static_cast<int32_t>(offsetof(CameraMotionBlur_t3513202448, ___dx11MotionBlurShader_20)); }
	inline Shader_t3191267369 * get_dx11MotionBlurShader_20() const { return ___dx11MotionBlurShader_20; }
	inline Shader_t3191267369 ** get_address_of_dx11MotionBlurShader_20() { return &___dx11MotionBlurShader_20; }
	inline void set_dx11MotionBlurShader_20(Shader_t3191267369 * value)
	{
		___dx11MotionBlurShader_20 = value;
		Il2CppCodeGenWriteBarrier(&___dx11MotionBlurShader_20, value);
	}

	inline static int32_t get_offset_of_replacementClear_21() { return static_cast<int32_t>(offsetof(CameraMotionBlur_t3513202448, ___replacementClear_21)); }
	inline Shader_t3191267369 * get_replacementClear_21() const { return ___replacementClear_21; }
	inline Shader_t3191267369 ** get_address_of_replacementClear_21() { return &___replacementClear_21; }
	inline void set_replacementClear_21(Shader_t3191267369 * value)
	{
		___replacementClear_21 = value;
		Il2CppCodeGenWriteBarrier(&___replacementClear_21, value);
	}

	inline static int32_t get_offset_of_motionBlurMaterial_22() { return static_cast<int32_t>(offsetof(CameraMotionBlur_t3513202448, ___motionBlurMaterial_22)); }
	inline Material_t3870600107 * get_motionBlurMaterial_22() const { return ___motionBlurMaterial_22; }
	inline Material_t3870600107 ** get_address_of_motionBlurMaterial_22() { return &___motionBlurMaterial_22; }
	inline void set_motionBlurMaterial_22(Material_t3870600107 * value)
	{
		___motionBlurMaterial_22 = value;
		Il2CppCodeGenWriteBarrier(&___motionBlurMaterial_22, value);
	}

	inline static int32_t get_offset_of_dx11MotionBlurMaterial_23() { return static_cast<int32_t>(offsetof(CameraMotionBlur_t3513202448, ___dx11MotionBlurMaterial_23)); }
	inline Material_t3870600107 * get_dx11MotionBlurMaterial_23() const { return ___dx11MotionBlurMaterial_23; }
	inline Material_t3870600107 ** get_address_of_dx11MotionBlurMaterial_23() { return &___dx11MotionBlurMaterial_23; }
	inline void set_dx11MotionBlurMaterial_23(Material_t3870600107 * value)
	{
		___dx11MotionBlurMaterial_23 = value;
		Il2CppCodeGenWriteBarrier(&___dx11MotionBlurMaterial_23, value);
	}

	inline static int32_t get_offset_of_noiseTexture_24() { return static_cast<int32_t>(offsetof(CameraMotionBlur_t3513202448, ___noiseTexture_24)); }
	inline Texture2D_t3884108195 * get_noiseTexture_24() const { return ___noiseTexture_24; }
	inline Texture2D_t3884108195 ** get_address_of_noiseTexture_24() { return &___noiseTexture_24; }
	inline void set_noiseTexture_24(Texture2D_t3884108195 * value)
	{
		___noiseTexture_24 = value;
		Il2CppCodeGenWriteBarrier(&___noiseTexture_24, value);
	}

	inline static int32_t get_offset_of_jitter_25() { return static_cast<int32_t>(offsetof(CameraMotionBlur_t3513202448, ___jitter_25)); }
	inline float get_jitter_25() const { return ___jitter_25; }
	inline float* get_address_of_jitter_25() { return &___jitter_25; }
	inline void set_jitter_25(float value)
	{
		___jitter_25 = value;
	}

	inline static int32_t get_offset_of_showVelocity_26() { return static_cast<int32_t>(offsetof(CameraMotionBlur_t3513202448, ___showVelocity_26)); }
	inline bool get_showVelocity_26() const { return ___showVelocity_26; }
	inline bool* get_address_of_showVelocity_26() { return &___showVelocity_26; }
	inline void set_showVelocity_26(bool value)
	{
		___showVelocity_26 = value;
	}

	inline static int32_t get_offset_of_showVelocityScale_27() { return static_cast<int32_t>(offsetof(CameraMotionBlur_t3513202448, ___showVelocityScale_27)); }
	inline float get_showVelocityScale_27() const { return ___showVelocityScale_27; }
	inline float* get_address_of_showVelocityScale_27() { return &___showVelocityScale_27; }
	inline void set_showVelocityScale_27(float value)
	{
		___showVelocityScale_27 = value;
	}

	inline static int32_t get_offset_of_currentViewProjMat_28() { return static_cast<int32_t>(offsetof(CameraMotionBlur_t3513202448, ___currentViewProjMat_28)); }
	inline Matrix4x4_t1651859333  get_currentViewProjMat_28() const { return ___currentViewProjMat_28; }
	inline Matrix4x4_t1651859333 * get_address_of_currentViewProjMat_28() { return &___currentViewProjMat_28; }
	inline void set_currentViewProjMat_28(Matrix4x4_t1651859333  value)
	{
		___currentViewProjMat_28 = value;
	}

	inline static int32_t get_offset_of_currentStereoViewProjMat_29() { return static_cast<int32_t>(offsetof(CameraMotionBlur_t3513202448, ___currentStereoViewProjMat_29)); }
	inline Matrix4x4U5BU5D_t1421664456* get_currentStereoViewProjMat_29() const { return ___currentStereoViewProjMat_29; }
	inline Matrix4x4U5BU5D_t1421664456** get_address_of_currentStereoViewProjMat_29() { return &___currentStereoViewProjMat_29; }
	inline void set_currentStereoViewProjMat_29(Matrix4x4U5BU5D_t1421664456* value)
	{
		___currentStereoViewProjMat_29 = value;
		Il2CppCodeGenWriteBarrier(&___currentStereoViewProjMat_29, value);
	}

	inline static int32_t get_offset_of_prevViewProjMat_30() { return static_cast<int32_t>(offsetof(CameraMotionBlur_t3513202448, ___prevViewProjMat_30)); }
	inline Matrix4x4_t1651859333  get_prevViewProjMat_30() const { return ___prevViewProjMat_30; }
	inline Matrix4x4_t1651859333 * get_address_of_prevViewProjMat_30() { return &___prevViewProjMat_30; }
	inline void set_prevViewProjMat_30(Matrix4x4_t1651859333  value)
	{
		___prevViewProjMat_30 = value;
	}

	inline static int32_t get_offset_of_prevStereoViewProjMat_31() { return static_cast<int32_t>(offsetof(CameraMotionBlur_t3513202448, ___prevStereoViewProjMat_31)); }
	inline Matrix4x4U5BU5D_t1421664456* get_prevStereoViewProjMat_31() const { return ___prevStereoViewProjMat_31; }
	inline Matrix4x4U5BU5D_t1421664456** get_address_of_prevStereoViewProjMat_31() { return &___prevStereoViewProjMat_31; }
	inline void set_prevStereoViewProjMat_31(Matrix4x4U5BU5D_t1421664456* value)
	{
		___prevStereoViewProjMat_31 = value;
		Il2CppCodeGenWriteBarrier(&___prevStereoViewProjMat_31, value);
	}

	inline static int32_t get_offset_of_prevFrameCount_32() { return static_cast<int32_t>(offsetof(CameraMotionBlur_t3513202448, ___prevFrameCount_32)); }
	inline int32_t get_prevFrameCount_32() const { return ___prevFrameCount_32; }
	inline int32_t* get_address_of_prevFrameCount_32() { return &___prevFrameCount_32; }
	inline void set_prevFrameCount_32(int32_t value)
	{
		___prevFrameCount_32 = value;
	}

	inline static int32_t get_offset_of_wasActive_33() { return static_cast<int32_t>(offsetof(CameraMotionBlur_t3513202448, ___wasActive_33)); }
	inline bool get_wasActive_33() const { return ___wasActive_33; }
	inline bool* get_address_of_wasActive_33() { return &___wasActive_33; }
	inline void set_wasActive_33(bool value)
	{
		___wasActive_33 = value;
	}

	inline static int32_t get_offset_of_prevFrameForward_34() { return static_cast<int32_t>(offsetof(CameraMotionBlur_t3513202448, ___prevFrameForward_34)); }
	inline Vector3_t4282066566  get_prevFrameForward_34() const { return ___prevFrameForward_34; }
	inline Vector3_t4282066566 * get_address_of_prevFrameForward_34() { return &___prevFrameForward_34; }
	inline void set_prevFrameForward_34(Vector3_t4282066566  value)
	{
		___prevFrameForward_34 = value;
	}

	inline static int32_t get_offset_of_prevFrameUp_35() { return static_cast<int32_t>(offsetof(CameraMotionBlur_t3513202448, ___prevFrameUp_35)); }
	inline Vector3_t4282066566  get_prevFrameUp_35() const { return ___prevFrameUp_35; }
	inline Vector3_t4282066566 * get_address_of_prevFrameUp_35() { return &___prevFrameUp_35; }
	inline void set_prevFrameUp_35(Vector3_t4282066566  value)
	{
		___prevFrameUp_35 = value;
	}

	inline static int32_t get_offset_of_prevFramePos_36() { return static_cast<int32_t>(offsetof(CameraMotionBlur_t3513202448, ___prevFramePos_36)); }
	inline Vector3_t4282066566  get_prevFramePos_36() const { return ___prevFramePos_36; }
	inline Vector3_t4282066566 * get_address_of_prevFramePos_36() { return &___prevFramePos_36; }
	inline void set_prevFramePos_36(Vector3_t4282066566  value)
	{
		___prevFramePos_36 = value;
	}

	inline static int32_t get_offset_of__camera_37() { return static_cast<int32_t>(offsetof(CameraMotionBlur_t3513202448, ____camera_37)); }
	inline Camera_t2727095145 * get__camera_37() const { return ____camera_37; }
	inline Camera_t2727095145 ** get_address_of__camera_37() { return &____camera_37; }
	inline void set__camera_37(Camera_t2727095145 * value)
	{
		____camera_37 = value;
		Il2CppCodeGenWriteBarrier(&____camera_37, value);
	}
};

struct CameraMotionBlur_t3513202448_StaticFields
{
public:
	// System.Single UnityStandardAssets.ImageEffects.CameraMotionBlur::MAX_RADIUS
	float ___MAX_RADIUS_6;

public:
	inline static int32_t get_offset_of_MAX_RADIUS_6() { return static_cast<int32_t>(offsetof(CameraMotionBlur_t3513202448_StaticFields, ___MAX_RADIUS_6)); }
	inline float get_MAX_RADIUS_6() const { return ___MAX_RADIUS_6; }
	inline float* get_address_of_MAX_RADIUS_6() { return &___MAX_RADIUS_6; }
	inline void set_MAX_RADIUS_6(float value)
	{
		___MAX_RADIUS_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
