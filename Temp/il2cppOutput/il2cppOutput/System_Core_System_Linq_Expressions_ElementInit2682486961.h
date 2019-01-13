#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object3080106164.h"

// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.Expression>
struct ReadOnlyCollection_1_t2800740313;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Linq.Expressions.ElementInit
struct  ElementInit_t2682486961  : public Il2CppObject
{
public:
	// System.Reflection.MethodInfo System.Linq.Expressions.ElementInit::add_method
	MethodInfo_t * ___add_method_0;
	// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.Expression> System.Linq.Expressions.ElementInit::arguments
	ReadOnlyCollection_1_t2800740313 * ___arguments_1;

public:
	inline static int32_t get_offset_of_add_method_0() { return static_cast<int32_t>(offsetof(ElementInit_t2682486961, ___add_method_0)); }
	inline MethodInfo_t * get_add_method_0() const { return ___add_method_0; }
	inline MethodInfo_t ** get_address_of_add_method_0() { return &___add_method_0; }
	inline void set_add_method_0(MethodInfo_t * value)
	{
		___add_method_0 = value;
		Il2CppCodeGenWriteBarrier(&___add_method_0, value);
	}

	inline static int32_t get_offset_of_arguments_1() { return static_cast<int32_t>(offsetof(ElementInit_t2682486961, ___arguments_1)); }
	inline ReadOnlyCollection_1_t2800740313 * get_arguments_1() const { return ___arguments_1; }
	inline ReadOnlyCollection_1_t2800740313 ** get_address_of_arguments_1() { return &___arguments_1; }
	inline void set_arguments_1(ReadOnlyCollection_1_t2800740313 * value)
	{
		___arguments_1 = value;
		Il2CppCodeGenWriteBarrier(&___arguments_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
