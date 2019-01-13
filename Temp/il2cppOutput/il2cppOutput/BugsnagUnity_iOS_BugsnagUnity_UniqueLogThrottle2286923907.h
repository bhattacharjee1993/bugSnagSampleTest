#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object3080106164.h"
#include "mscorlib_System_DateTime3738529785.h"

// System.Object
struct Il2CppObject;
// System.Collections.Generic.Dictionary`2<BugsnagUnity.UnityLogMessage,System.Int32>
struct Dictionary_2_t1978889179;
// BugsnagUnity.IConfiguration
struct IConfiguration_t3491182725;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// BugsnagUnity.UniqueLogThrottle
struct  UniqueLogThrottle_t2286923907  : public Il2CppObject
{
public:
	// System.Object BugsnagUnity.UniqueLogThrottle::_lock
	Il2CppObject * ____lock_0;
	// System.Collections.Generic.Dictionary`2<BugsnagUnity.UnityLogMessage,System.Int32> BugsnagUnity.UniqueLogThrottle::<Counter>k__BackingField
	Dictionary_2_t1978889179 * ___U3CCounterU3Ek__BackingField_1;
	// System.DateTime BugsnagUnity.UniqueLogThrottle::<FlushAt>k__BackingField
	DateTime_t3738529785  ___U3CFlushAtU3Ek__BackingField_2;
	// BugsnagUnity.IConfiguration BugsnagUnity.UniqueLogThrottle::<Configuration>k__BackingField
	Il2CppObject * ___U3CConfigurationU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of__lock_0() { return static_cast<int32_t>(offsetof(UniqueLogThrottle_t2286923907, ____lock_0)); }
	inline Il2CppObject * get__lock_0() const { return ____lock_0; }
	inline Il2CppObject ** get_address_of__lock_0() { return &____lock_0; }
	inline void set__lock_0(Il2CppObject * value)
	{
		____lock_0 = value;
		Il2CppCodeGenWriteBarrier(&____lock_0, value);
	}

	inline static int32_t get_offset_of_U3CCounterU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(UniqueLogThrottle_t2286923907, ___U3CCounterU3Ek__BackingField_1)); }
	inline Dictionary_2_t1978889179 * get_U3CCounterU3Ek__BackingField_1() const { return ___U3CCounterU3Ek__BackingField_1; }
	inline Dictionary_2_t1978889179 ** get_address_of_U3CCounterU3Ek__BackingField_1() { return &___U3CCounterU3Ek__BackingField_1; }
	inline void set_U3CCounterU3Ek__BackingField_1(Dictionary_2_t1978889179 * value)
	{
		___U3CCounterU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier(&___U3CCounterU3Ek__BackingField_1, value);
	}

	inline static int32_t get_offset_of_U3CFlushAtU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(UniqueLogThrottle_t2286923907, ___U3CFlushAtU3Ek__BackingField_2)); }
	inline DateTime_t3738529785  get_U3CFlushAtU3Ek__BackingField_2() const { return ___U3CFlushAtU3Ek__BackingField_2; }
	inline DateTime_t3738529785 * get_address_of_U3CFlushAtU3Ek__BackingField_2() { return &___U3CFlushAtU3Ek__BackingField_2; }
	inline void set_U3CFlushAtU3Ek__BackingField_2(DateTime_t3738529785  value)
	{
		___U3CFlushAtU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CConfigurationU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(UniqueLogThrottle_t2286923907, ___U3CConfigurationU3Ek__BackingField_3)); }
	inline Il2CppObject * get_U3CConfigurationU3Ek__BackingField_3() const { return ___U3CConfigurationU3Ek__BackingField_3; }
	inline Il2CppObject ** get_address_of_U3CConfigurationU3Ek__BackingField_3() { return &___U3CConfigurationU3Ek__BackingField_3; }
	inline void set_U3CConfigurationU3Ek__BackingField_3(Il2CppObject * value)
	{
		___U3CConfigurationU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier(&___U3CConfigurationU3Ek__BackingField_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
