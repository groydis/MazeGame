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

// UnityEngine.AudioSource
struct AudioSource_t1740077639;
// UnityEngine.AudioClip
struct AudioClip_t794140988;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_AudioClip794140988.h"
#include "UnityEngine_UnityEngine_AudioSource1740077639.h"

// System.Single UnityEngine.AudioSource::get_volume()
extern "C"  float AudioSource_get_volume_m2334326995 (AudioSource_t1740077639 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AudioSource::set_volume(System.Single)
extern "C"  void AudioSource_set_volume_m1410546616 (AudioSource_t1740077639 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.AudioSource::get_pitch()
extern "C"  float AudioSource_get_pitch_m3729473033 (AudioSource_t1740077639 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AudioSource::set_pitch(System.Single)
extern "C"  void AudioSource_set_pitch_m1518407234 (AudioSource_t1740077639 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.AudioClip UnityEngine.AudioSource::get_clip()
extern "C"  AudioClip_t794140988 * AudioSource_get_clip_m2410835857 (AudioSource_t1740077639 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AudioSource::set_clip(UnityEngine.AudioClip)
extern "C"  void AudioSource_set_clip_m19502010 (AudioSource_t1740077639 * __this, AudioClip_t794140988 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AudioSource::Play(System.UInt64)
extern "C"  void AudioSource_Play_m3374467819 (AudioSource_t1740077639 * __this, uint64_t ___delay0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AudioSource::Play()
extern "C"  void AudioSource_Play_m1360558992 (AudioSource_t1740077639 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AudioSource::Stop()
extern "C"  void AudioSource_Stop_m1454243038 (AudioSource_t1740077639 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AudioSource::Pause()
extern "C"  void AudioSource_Pause_m3226052732 (AudioSource_t1740077639 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AudioSource::INTERNAL_CALL_Pause(UnityEngine.AudioSource)
extern "C"  void AudioSource_INTERNAL_CALL_Pause_m3343215099 (Il2CppObject * __this /* static, unused */, AudioSource_t1740077639 * ___self0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AudioSource::UnPause()
extern "C"  void AudioSource_UnPause_m1028494947 (AudioSource_t1740077639 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AudioSource::INTERNAL_CALL_UnPause(UnityEngine.AudioSource)
extern "C"  void AudioSource_INTERNAL_CALL_UnPause_m258094196 (Il2CppObject * __this /* static, unused */, AudioSource_t1740077639 * ___self0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.AudioSource::get_isPlaying()
extern "C"  bool AudioSource_get_isPlaying_m4213444423 (AudioSource_t1740077639 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AudioSource::set_loop(System.Boolean)
extern "C"  void AudioSource_set_loop_m3617666708 (AudioSource_t1740077639 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
