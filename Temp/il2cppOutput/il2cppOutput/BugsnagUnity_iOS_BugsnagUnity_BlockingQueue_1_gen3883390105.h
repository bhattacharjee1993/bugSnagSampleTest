#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object3080106164.h"

// System.Collections.Generic.Queue`1<System.Object>
struct Queue_1_t2926365658;
// System.Object
struct Il2CppObject;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// BugsnagUnity.BlockingQueue`1<System.Object>
struct  BlockingQueue_1_t3883390105  : public Il2CppObject
{
public:
	// System.Collections.Generic.Queue`1<T> BugsnagUnity.BlockingQueue`1::<Queue>k__BackingField
	Queue_1_t2926365658 * ___U3CQueueU3Ek__BackingField_0;
	// System.Object BugsnagUnity.BlockingQueue`1::<QueueLock>k__BackingField
	Il2CppObject * ___U3CQueueLockU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CQueueU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(BlockingQueue_1_t3883390105, ___U3CQueueU3Ek__BackingField_0)); }
	inline Queue_1_t2926365658 * get_U3CQueueU3Ek__BackingField_0() const { return ___U3CQueueU3Ek__BackingField_0; }
	inline Queue_1_t2926365658 ** get_address_of_U3CQueueU3Ek__BackingField_0() { return &___U3CQueueU3Ek__BackingField_0; }
	inline void set_U3CQueueU3Ek__BackingField_0(Queue_1_t2926365658 * value)
	{
		___U3CQueueU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier(&___U3CQueueU3Ek__BackingField_0, value);
	}

	inline static int32_t get_offset_of_U3CQueueLockU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(BlockingQueue_1_t3883390105, ___U3CQueueLockU3Ek__BackingField_1)); }
	inline Il2CppObject * get_U3CQueueLockU3Ek__BackingField_1() const { return ___U3CQueueLockU3Ek__BackingField_1; }
	inline Il2CppObject ** get_address_of_U3CQueueLockU3Ek__BackingField_1() { return &___U3CQueueLockU3Ek__BackingField_1; }
	inline void set_U3CQueueLockU3Ek__BackingField_1(Il2CppObject * value)
	{
		___U3CQueueLockU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier(&___U3CQueueLockU3Ek__BackingField_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
