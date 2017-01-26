#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


// OptionsSingleton
struct OptionsSingleton_t4226138861;
// CamShake
struct CamShake_t1547431985;

#include "mscorlib_System_Array3829468939.h"
#include "AssemblyU2DCSharp_OptionsSingleton4226138861.h"
#include "AssemblyU2DCSharp_CamShake1547431985.h"

#pragma once
// OptionsSingleton[]
struct OptionsSingletonU5BU5D_t710523584  : public Il2CppArray
{
public:
	ALIGN_FIELD (8) OptionsSingleton_t4226138861 * m_Items[1];

public:
	inline OptionsSingleton_t4226138861 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline OptionsSingleton_t4226138861 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, OptionsSingleton_t4226138861 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline OptionsSingleton_t4226138861 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline OptionsSingleton_t4226138861 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, OptionsSingleton_t4226138861 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// CamShake[]
struct CamShakeU5BU5D_t3240066028  : public Il2CppArray
{
public:
	ALIGN_FIELD (8) CamShake_t1547431985 * m_Items[1];

public:
	inline CamShake_t1547431985 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline CamShake_t1547431985 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, CamShake_t1547431985 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline CamShake_t1547431985 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline CamShake_t1547431985 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, CamShake_t1547431985 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
