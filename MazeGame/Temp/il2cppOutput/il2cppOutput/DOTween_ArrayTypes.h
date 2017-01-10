#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


// DG.Tweening.TweenCallback
struct TweenCallback_t4095062394;
// DG.Tweening.Tween
struct Tween_t675658773;
// DG.Tweening.Core.ABSSequentiable
struct ABSSequentiable_t2832386214;
// DG.Tweening.Plugins.Core.ITweenPlugin
struct ITweenPlugin_t2035100301;

#include "mscorlib_System_Array1146569071.h"
#include "DOTween_DG_Tweening_TweenCallback4095062394.h"
#include "DOTween_DG_Tweening_Tween675658773.h"
#include "DOTween_DG_Tweening_Core_ABSSequentiable2832386214.h"
#include "DOTween_DG_Tweening_Plugins_Core_PathCore_ControlP3116362155.h"

#pragma once
// DG.Tweening.TweenCallback[]
struct TweenCallbackU5BU5D_t838993759  : public Il2CppArray
{
public:
	ALIGN_FIELD (8) TweenCallback_t4095062394 * m_Items[1];

public:
	inline TweenCallback_t4095062394 * GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline TweenCallback_t4095062394 ** GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, TweenCallback_t4095062394 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// DG.Tweening.Tween[]
struct TweenU5BU5D_t2368679928  : public Il2CppArray
{
public:
	ALIGN_FIELD (8) Tween_t675658773 * m_Items[1];

public:
	inline Tween_t675658773 * GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline Tween_t675658773 ** GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, Tween_t675658773 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// DG.Tweening.Core.ABSSequentiable[]
struct ABSSequentiableU5BU5D_t3915821571  : public Il2CppArray
{
public:
	ALIGN_FIELD (8) ABSSequentiable_t2832386214 * m_Items[1];

public:
	inline ABSSequentiable_t2832386214 * GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline ABSSequentiable_t2832386214 ** GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, ABSSequentiable_t2832386214 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// DG.Tweening.Plugins.Core.ITweenPlugin[]
struct ITweenPluginU5BU5D_t2476908704  : public Il2CppArray
{
public:
	ALIGN_FIELD (8) Il2CppObject * m_Items[1];

public:
	inline Il2CppObject * GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline Il2CppObject ** GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, Il2CppObject * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// DG.Tweening.Plugins.Core.PathCore.ControlPoint[]
struct ControlPointU5BU5D_t1040784202  : public Il2CppArray
{
public:
	ALIGN_FIELD (8) ControlPoint_t3116362155  m_Items[1];

public:
	inline ControlPoint_t3116362155  GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline ControlPoint_t3116362155 * GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, ControlPoint_t3116362155  value)
	{
		m_Items[index] = value;
	}
};
