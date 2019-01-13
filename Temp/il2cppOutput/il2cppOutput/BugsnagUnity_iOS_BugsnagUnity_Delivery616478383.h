#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object3080106164.h"

// System.Threading.Thread
struct Thread_t2300836069;
// BugsnagUnity.BlockingQueue`1<BugsnagUnity.Payload.IPayload>
struct BlockingQueue_1_t679604965;
// UnityEngine.GameObject
struct GameObject_t1113636619;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// BugsnagUnity.Delivery
struct  Delivery_t616478383  : public Il2CppObject
{
public:
	// System.Threading.Thread BugsnagUnity.Delivery::<Worker>k__BackingField
	Thread_t2300836069 * ___U3CWorkerU3Ek__BackingField_0;
	// BugsnagUnity.BlockingQueue`1<BugsnagUnity.Payload.IPayload> BugsnagUnity.Delivery::<Queue>k__BackingField
	BlockingQueue_1_t679604965 * ___U3CQueueU3Ek__BackingField_1;
	// UnityEngine.GameObject BugsnagUnity.Delivery::<DispatcherObject>k__BackingField
	GameObject_t1113636619 * ___U3CDispatcherObjectU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3CWorkerU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(Delivery_t616478383, ___U3CWorkerU3Ek__BackingField_0)); }
	inline Thread_t2300836069 * get_U3CWorkerU3Ek__BackingField_0() const { return ___U3CWorkerU3Ek__BackingField_0; }
	inline Thread_t2300836069 ** get_address_of_U3CWorkerU3Ek__BackingField_0() { return &___U3CWorkerU3Ek__BackingField_0; }
	inline void set_U3CWorkerU3Ek__BackingField_0(Thread_t2300836069 * value)
	{
		___U3CWorkerU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier(&___U3CWorkerU3Ek__BackingField_0, value);
	}

	inline static int32_t get_offset_of_U3CQueueU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(Delivery_t616478383, ___U3CQueueU3Ek__BackingField_1)); }
	inline BlockingQueue_1_t679604965 * get_U3CQueueU3Ek__BackingField_1() const { return ___U3CQueueU3Ek__BackingField_1; }
	inline BlockingQueue_1_t679604965 ** get_address_of_U3CQueueU3Ek__BackingField_1() { return &___U3CQueueU3Ek__BackingField_1; }
	inline void set_U3CQueueU3Ek__BackingField_1(BlockingQueue_1_t679604965 * value)
	{
		___U3CQueueU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier(&___U3CQueueU3Ek__BackingField_1, value);
	}

	inline static int32_t get_offset_of_U3CDispatcherObjectU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(Delivery_t616478383, ___U3CDispatcherObjectU3Ek__BackingField_2)); }
	inline GameObject_t1113636619 * get_U3CDispatcherObjectU3Ek__BackingField_2() const { return ___U3CDispatcherObjectU3Ek__BackingField_2; }
	inline GameObject_t1113636619 ** get_address_of_U3CDispatcherObjectU3Ek__BackingField_2() { return &___U3CDispatcherObjectU3Ek__BackingField_2; }
	inline void set_U3CDispatcherObjectU3Ek__BackingField_2(GameObject_t1113636619 * value)
	{
		___U3CDispatcherObjectU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier(&___U3CDispatcherObjectU3Ek__BackingField_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
