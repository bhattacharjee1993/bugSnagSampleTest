﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object3080106164.h"

// System.Threading.Timer/Scheduler
struct Scheduler_t3215764947;
// System.Collections.SortedList
struct SortedList_t2427694641;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.Timer/Scheduler
struct  Scheduler_t3215764947  : public Il2CppObject
{
public:
	// System.Collections.SortedList System.Threading.Timer/Scheduler::list
	SortedList_t2427694641 * ___list_1;

public:
	inline static int32_t get_offset_of_list_1() { return static_cast<int32_t>(offsetof(Scheduler_t3215764947, ___list_1)); }
	inline SortedList_t2427694641 * get_list_1() const { return ___list_1; }
	inline SortedList_t2427694641 ** get_address_of_list_1() { return &___list_1; }
	inline void set_list_1(SortedList_t2427694641 * value)
	{
		___list_1 = value;
		Il2CppCodeGenWriteBarrier(&___list_1, value);
	}
};

struct Scheduler_t3215764947_StaticFields
{
public:
	// System.Threading.Timer/Scheduler System.Threading.Timer/Scheduler::instance
	Scheduler_t3215764947 * ___instance_0;

public:
	inline static int32_t get_offset_of_instance_0() { return static_cast<int32_t>(offsetof(Scheduler_t3215764947_StaticFields, ___instance_0)); }
	inline Scheduler_t3215764947 * get_instance_0() const { return ___instance_0; }
	inline Scheduler_t3215764947 ** get_address_of_instance_0() { return &___instance_0; }
	inline void set_instance_0(Scheduler_t3215764947 * value)
	{
		___instance_0 = value;
		Il2CppCodeGenWriteBarrier(&___instance_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
