#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


// Boo.Lang.Runtime.DynamicDispatching.DispatcherKey
struct DispatcherKey_t1959089598;
// Boo.Lang.Runtime.DynamicDispatching.Dispatcher
struct Dispatcher_t2221136835;
// Boo.Lang.ICallable
struct ICallable_t2999451275;

#include "mscorlib_System_Array1146569071.h"
#include "Boo_Lang_Boo_Lang_Runtime_DynamicDispatching_Dispa1959089598.h"
#include "Boo_Lang_Boo_Lang_Runtime_DynamicDispatching_Dispa2221136835.h"

#pragma once
// Boo.Lang.Runtime.DynamicDispatching.DispatcherKey[]
struct DispatcherKeyU5BU5D_t1218352523  : public Il2CppArray
{
public:
	ALIGN_FIELD (8) DispatcherKey_t1959089598 * m_Items[1];

public:
	inline DispatcherKey_t1959089598 * GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline DispatcherKey_t1959089598 ** GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, DispatcherKey_t1959089598 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// Boo.Lang.Runtime.DynamicDispatching.Dispatcher[]
struct DispatcherU5BU5D_t1659659730  : public Il2CppArray
{
public:
	ALIGN_FIELD (8) Dispatcher_t2221136835 * m_Items[1];

public:
	inline Dispatcher_t2221136835 * GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline Dispatcher_t2221136835 ** GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, Dispatcher_t2221136835 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// Boo.Lang.ICallable[]
struct ICallableU5BU5D_t1206433514  : public Il2CppArray
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
