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

// BugsnagUnity.IConfiguration
struct IConfiguration_t3491182725;
// System.Collections.Generic.Dictionary`2<UnityEngine.LogType,System.Int32>
struct Dictionary_2_t2227265351;
// System.Object
struct Il2CppObject;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// BugsnagUnity.MaximumLogTypeCounter
struct  MaximumLogTypeCounter_t3255260467  : public Il2CppObject
{
public:
	// BugsnagUnity.IConfiguration BugsnagUnity.MaximumLogTypeCounter::<Configuration>k__BackingField
	Il2CppObject * ___U3CConfigurationU3Ek__BackingField_0;
	// System.Collections.Generic.Dictionary`2<UnityEngine.LogType,System.Int32> BugsnagUnity.MaximumLogTypeCounter::<CurrentCounts>k__BackingField
	Dictionary_2_t2227265351 * ___U3CCurrentCountsU3Ek__BackingField_1;
	// System.DateTime BugsnagUnity.MaximumLogTypeCounter::<FlushAt>k__BackingField
	DateTime_t3738529785  ___U3CFlushAtU3Ek__BackingField_2;
	// System.Object BugsnagUnity.MaximumLogTypeCounter::_lock
	Il2CppObject * ____lock_3;

public:
	inline static int32_t get_offset_of_U3CConfigurationU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(MaximumLogTypeCounter_t3255260467, ___U3CConfigurationU3Ek__BackingField_0)); }
	inline Il2CppObject * get_U3CConfigurationU3Ek__BackingField_0() const { return ___U3CConfigurationU3Ek__BackingField_0; }
	inline Il2CppObject ** get_address_of_U3CConfigurationU3Ek__BackingField_0() { return &___U3CConfigurationU3Ek__BackingField_0; }
	inline void set_U3CConfigurationU3Ek__BackingField_0(Il2CppObject * value)
	{
		___U3CConfigurationU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier(&___U3CConfigurationU3Ek__BackingField_0, value);
	}

	inline static int32_t get_offset_of_U3CCurrentCountsU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(MaximumLogTypeCounter_t3255260467, ___U3CCurrentCountsU3Ek__BackingField_1)); }
	inline Dictionary_2_t2227265351 * get_U3CCurrentCountsU3Ek__BackingField_1() const { return ___U3CCurrentCountsU3Ek__BackingField_1; }
	inline Dictionary_2_t2227265351 ** get_address_of_U3CCurrentCountsU3Ek__BackingField_1() { return &___U3CCurrentCountsU3Ek__BackingField_1; }
	inline void set_U3CCurrentCountsU3Ek__BackingField_1(Dictionary_2_t2227265351 * value)
	{
		___U3CCurrentCountsU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier(&___U3CCurrentCountsU3Ek__BackingField_1, value);
	}

	inline static int32_t get_offset_of_U3CFlushAtU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(MaximumLogTypeCounter_t3255260467, ___U3CFlushAtU3Ek__BackingField_2)); }
	inline DateTime_t3738529785  get_U3CFlushAtU3Ek__BackingField_2() const { return ___U3CFlushAtU3Ek__BackingField_2; }
	inline DateTime_t3738529785 * get_address_of_U3CFlushAtU3Ek__BackingField_2() { return &___U3CFlushAtU3Ek__BackingField_2; }
	inline void set_U3CFlushAtU3Ek__BackingField_2(DateTime_t3738529785  value)
	{
		___U3CFlushAtU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of__lock_3() { return static_cast<int32_t>(offsetof(MaximumLogTypeCounter_t3255260467, ____lock_3)); }
	inline Il2CppObject * get__lock_3() const { return ____lock_3; }
	inline Il2CppObject ** get_address_of__lock_3() { return &____lock_3; }
	inline void set__lock_3(Il2CppObject * value)
	{
		____lock_3 = value;
		Il2CppCodeGenWriteBarrier(&____lock_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
