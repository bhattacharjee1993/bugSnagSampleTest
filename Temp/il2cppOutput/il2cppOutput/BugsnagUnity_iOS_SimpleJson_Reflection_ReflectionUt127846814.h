﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object3080106164.h"

// System.Object
struct Il2CppObject;
// SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionaryValueFactory`2<System.Object,System.Object>
struct ThreadSafeDictionaryValueFactory_2_t1268671514;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t132545152;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>
struct  ThreadSafeDictionary_2_t127846814  : public Il2CppObject
{
public:
	// System.Object SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2::_lock
	Il2CppObject * ____lock_0;
	// SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionaryValueFactory`2<TKey,TValue> SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2::_valueFactory
	ThreadSafeDictionaryValueFactory_2_t1268671514 * ____valueFactory_1;
	// System.Collections.Generic.Dictionary`2<TKey,TValue> SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2::_dictionary
	Dictionary_2_t132545152 * ____dictionary_2;

public:
	inline static int32_t get_offset_of__lock_0() { return static_cast<int32_t>(offsetof(ThreadSafeDictionary_2_t127846814, ____lock_0)); }
	inline Il2CppObject * get__lock_0() const { return ____lock_0; }
	inline Il2CppObject ** get_address_of__lock_0() { return &____lock_0; }
	inline void set__lock_0(Il2CppObject * value)
	{
		____lock_0 = value;
		Il2CppCodeGenWriteBarrier(&____lock_0, value);
	}

	inline static int32_t get_offset_of__valueFactory_1() { return static_cast<int32_t>(offsetof(ThreadSafeDictionary_2_t127846814, ____valueFactory_1)); }
	inline ThreadSafeDictionaryValueFactory_2_t1268671514 * get__valueFactory_1() const { return ____valueFactory_1; }
	inline ThreadSafeDictionaryValueFactory_2_t1268671514 ** get_address_of__valueFactory_1() { return &____valueFactory_1; }
	inline void set__valueFactory_1(ThreadSafeDictionaryValueFactory_2_t1268671514 * value)
	{
		____valueFactory_1 = value;
		Il2CppCodeGenWriteBarrier(&____valueFactory_1, value);
	}

	inline static int32_t get_offset_of__dictionary_2() { return static_cast<int32_t>(offsetof(ThreadSafeDictionary_2_t127846814, ____dictionary_2)); }
	inline Dictionary_2_t132545152 * get__dictionary_2() const { return ____dictionary_2; }
	inline Dictionary_2_t132545152 ** get_address_of__dictionary_2() { return &____dictionary_2; }
	inline void set__dictionary_2(Dictionary_2_t132545152 * value)
	{
		____dictionary_2 = value;
		Il2CppCodeGenWriteBarrier(&____dictionary_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
