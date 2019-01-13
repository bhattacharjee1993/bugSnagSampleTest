#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object3080106164.h"
#include "mscorlib_System_IntPtr840150181.h"
#include "mscorlib_System_TimeSpan881159249.h"
#include "UnityEngine_UnityEngine_LogType73765434.h"

// System.Collections.Generic.Dictionary`2<UnityEngine.LogType,System.Int32>
struct Dictionary_2_t2227265351;
// System.String
struct String_t;
// System.Uri
struct Uri_t100236324;
// BugsnagUnity.LogTypeSeverityMapping
struct LogTypeSeverityMapping_t374677385;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// BugsnagUnity.Configuration
struct  Configuration_t750331020  : public Il2CppObject
{
public:
	// System.IntPtr BugsnagUnity.Configuration::<NativeConfiguration>k__BackingField
	IntPtr_t ___U3CNativeConfigurationU3Ek__BackingField_0;
	// System.TimeSpan BugsnagUnity.Configuration::<MaximumLogsTimePeriod>k__BackingField
	TimeSpan_t881159249  ___U3CMaximumLogsTimePeriodU3Ek__BackingField_1;
	// System.Collections.Generic.Dictionary`2<UnityEngine.LogType,System.Int32> BugsnagUnity.Configuration::<MaximumTypePerTimePeriod>k__BackingField
	Dictionary_2_t2227265351 * ___U3CMaximumTypePerTimePeriodU3Ek__BackingField_2;
	// System.TimeSpan BugsnagUnity.Configuration::<UniqueLogsTimePeriod>k__BackingField
	TimeSpan_t881159249  ___U3CUniqueLogsTimePeriodU3Ek__BackingField_3;
	// System.Int32 BugsnagUnity.Configuration::<MaximumBreadcrumbs>k__BackingField
	int32_t ___U3CMaximumBreadcrumbsU3Ek__BackingField_4;
	// System.String BugsnagUnity.Configuration::<PayloadVersion>k__BackingField
	String_t* ___U3CPayloadVersionU3Ek__BackingField_5;
	// System.String BugsnagUnity.Configuration::<SessionPayloadVersion>k__BackingField
	String_t* ___U3CSessionPayloadVersionU3Ek__BackingField_6;
	// System.Uri BugsnagUnity.Configuration::<SessionEndpoint>k__BackingField
	Uri_t100236324 * ___U3CSessionEndpointU3Ek__BackingField_7;
	// UnityEngine.LogType BugsnagUnity.Configuration::<NotifyLevel>k__BackingField
	int32_t ___U3CNotifyLevelU3Ek__BackingField_8;
	// System.Boolean BugsnagUnity.Configuration::<AutoNotify>k__BackingField
	bool ___U3CAutoNotifyU3Ek__BackingField_9;
	// System.Boolean BugsnagUnity.Configuration::<AutoCaptureSessions>k__BackingField
	bool ___U3CAutoCaptureSessionsU3Ek__BackingField_10;
	// BugsnagUnity.LogTypeSeverityMapping BugsnagUnity.Configuration::<LogTypeSeverityMapping>k__BackingField
	LogTypeSeverityMapping_t374677385 * ___U3CLogTypeSeverityMappingU3Ek__BackingField_11;

public:
	inline static int32_t get_offset_of_U3CNativeConfigurationU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(Configuration_t750331020, ___U3CNativeConfigurationU3Ek__BackingField_0)); }
	inline IntPtr_t get_U3CNativeConfigurationU3Ek__BackingField_0() const { return ___U3CNativeConfigurationU3Ek__BackingField_0; }
	inline IntPtr_t* get_address_of_U3CNativeConfigurationU3Ek__BackingField_0() { return &___U3CNativeConfigurationU3Ek__BackingField_0; }
	inline void set_U3CNativeConfigurationU3Ek__BackingField_0(IntPtr_t value)
	{
		___U3CNativeConfigurationU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CMaximumLogsTimePeriodU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(Configuration_t750331020, ___U3CMaximumLogsTimePeriodU3Ek__BackingField_1)); }
	inline TimeSpan_t881159249  get_U3CMaximumLogsTimePeriodU3Ek__BackingField_1() const { return ___U3CMaximumLogsTimePeriodU3Ek__BackingField_1; }
	inline TimeSpan_t881159249 * get_address_of_U3CMaximumLogsTimePeriodU3Ek__BackingField_1() { return &___U3CMaximumLogsTimePeriodU3Ek__BackingField_1; }
	inline void set_U3CMaximumLogsTimePeriodU3Ek__BackingField_1(TimeSpan_t881159249  value)
	{
		___U3CMaximumLogsTimePeriodU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CMaximumTypePerTimePeriodU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(Configuration_t750331020, ___U3CMaximumTypePerTimePeriodU3Ek__BackingField_2)); }
	inline Dictionary_2_t2227265351 * get_U3CMaximumTypePerTimePeriodU3Ek__BackingField_2() const { return ___U3CMaximumTypePerTimePeriodU3Ek__BackingField_2; }
	inline Dictionary_2_t2227265351 ** get_address_of_U3CMaximumTypePerTimePeriodU3Ek__BackingField_2() { return &___U3CMaximumTypePerTimePeriodU3Ek__BackingField_2; }
	inline void set_U3CMaximumTypePerTimePeriodU3Ek__BackingField_2(Dictionary_2_t2227265351 * value)
	{
		___U3CMaximumTypePerTimePeriodU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier(&___U3CMaximumTypePerTimePeriodU3Ek__BackingField_2, value);
	}

	inline static int32_t get_offset_of_U3CUniqueLogsTimePeriodU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(Configuration_t750331020, ___U3CUniqueLogsTimePeriodU3Ek__BackingField_3)); }
	inline TimeSpan_t881159249  get_U3CUniqueLogsTimePeriodU3Ek__BackingField_3() const { return ___U3CUniqueLogsTimePeriodU3Ek__BackingField_3; }
	inline TimeSpan_t881159249 * get_address_of_U3CUniqueLogsTimePeriodU3Ek__BackingField_3() { return &___U3CUniqueLogsTimePeriodU3Ek__BackingField_3; }
	inline void set_U3CUniqueLogsTimePeriodU3Ek__BackingField_3(TimeSpan_t881159249  value)
	{
		___U3CUniqueLogsTimePeriodU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_U3CMaximumBreadcrumbsU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(Configuration_t750331020, ___U3CMaximumBreadcrumbsU3Ek__BackingField_4)); }
	inline int32_t get_U3CMaximumBreadcrumbsU3Ek__BackingField_4() const { return ___U3CMaximumBreadcrumbsU3Ek__BackingField_4; }
	inline int32_t* get_address_of_U3CMaximumBreadcrumbsU3Ek__BackingField_4() { return &___U3CMaximumBreadcrumbsU3Ek__BackingField_4; }
	inline void set_U3CMaximumBreadcrumbsU3Ek__BackingField_4(int32_t value)
	{
		___U3CMaximumBreadcrumbsU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of_U3CPayloadVersionU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(Configuration_t750331020, ___U3CPayloadVersionU3Ek__BackingField_5)); }
	inline String_t* get_U3CPayloadVersionU3Ek__BackingField_5() const { return ___U3CPayloadVersionU3Ek__BackingField_5; }
	inline String_t** get_address_of_U3CPayloadVersionU3Ek__BackingField_5() { return &___U3CPayloadVersionU3Ek__BackingField_5; }
	inline void set_U3CPayloadVersionU3Ek__BackingField_5(String_t* value)
	{
		___U3CPayloadVersionU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier(&___U3CPayloadVersionU3Ek__BackingField_5, value);
	}

	inline static int32_t get_offset_of_U3CSessionPayloadVersionU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(Configuration_t750331020, ___U3CSessionPayloadVersionU3Ek__BackingField_6)); }
	inline String_t* get_U3CSessionPayloadVersionU3Ek__BackingField_6() const { return ___U3CSessionPayloadVersionU3Ek__BackingField_6; }
	inline String_t** get_address_of_U3CSessionPayloadVersionU3Ek__BackingField_6() { return &___U3CSessionPayloadVersionU3Ek__BackingField_6; }
	inline void set_U3CSessionPayloadVersionU3Ek__BackingField_6(String_t* value)
	{
		___U3CSessionPayloadVersionU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier(&___U3CSessionPayloadVersionU3Ek__BackingField_6, value);
	}

	inline static int32_t get_offset_of_U3CSessionEndpointU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(Configuration_t750331020, ___U3CSessionEndpointU3Ek__BackingField_7)); }
	inline Uri_t100236324 * get_U3CSessionEndpointU3Ek__BackingField_7() const { return ___U3CSessionEndpointU3Ek__BackingField_7; }
	inline Uri_t100236324 ** get_address_of_U3CSessionEndpointU3Ek__BackingField_7() { return &___U3CSessionEndpointU3Ek__BackingField_7; }
	inline void set_U3CSessionEndpointU3Ek__BackingField_7(Uri_t100236324 * value)
	{
		___U3CSessionEndpointU3Ek__BackingField_7 = value;
		Il2CppCodeGenWriteBarrier(&___U3CSessionEndpointU3Ek__BackingField_7, value);
	}

	inline static int32_t get_offset_of_U3CNotifyLevelU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(Configuration_t750331020, ___U3CNotifyLevelU3Ek__BackingField_8)); }
	inline int32_t get_U3CNotifyLevelU3Ek__BackingField_8() const { return ___U3CNotifyLevelU3Ek__BackingField_8; }
	inline int32_t* get_address_of_U3CNotifyLevelU3Ek__BackingField_8() { return &___U3CNotifyLevelU3Ek__BackingField_8; }
	inline void set_U3CNotifyLevelU3Ek__BackingField_8(int32_t value)
	{
		___U3CNotifyLevelU3Ek__BackingField_8 = value;
	}

	inline static int32_t get_offset_of_U3CAutoNotifyU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(Configuration_t750331020, ___U3CAutoNotifyU3Ek__BackingField_9)); }
	inline bool get_U3CAutoNotifyU3Ek__BackingField_9() const { return ___U3CAutoNotifyU3Ek__BackingField_9; }
	inline bool* get_address_of_U3CAutoNotifyU3Ek__BackingField_9() { return &___U3CAutoNotifyU3Ek__BackingField_9; }
	inline void set_U3CAutoNotifyU3Ek__BackingField_9(bool value)
	{
		___U3CAutoNotifyU3Ek__BackingField_9 = value;
	}

	inline static int32_t get_offset_of_U3CAutoCaptureSessionsU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(Configuration_t750331020, ___U3CAutoCaptureSessionsU3Ek__BackingField_10)); }
	inline bool get_U3CAutoCaptureSessionsU3Ek__BackingField_10() const { return ___U3CAutoCaptureSessionsU3Ek__BackingField_10; }
	inline bool* get_address_of_U3CAutoCaptureSessionsU3Ek__BackingField_10() { return &___U3CAutoCaptureSessionsU3Ek__BackingField_10; }
	inline void set_U3CAutoCaptureSessionsU3Ek__BackingField_10(bool value)
	{
		___U3CAutoCaptureSessionsU3Ek__BackingField_10 = value;
	}

	inline static int32_t get_offset_of_U3CLogTypeSeverityMappingU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(Configuration_t750331020, ___U3CLogTypeSeverityMappingU3Ek__BackingField_11)); }
	inline LogTypeSeverityMapping_t374677385 * get_U3CLogTypeSeverityMappingU3Ek__BackingField_11() const { return ___U3CLogTypeSeverityMappingU3Ek__BackingField_11; }
	inline LogTypeSeverityMapping_t374677385 ** get_address_of_U3CLogTypeSeverityMappingU3Ek__BackingField_11() { return &___U3CLogTypeSeverityMappingU3Ek__BackingField_11; }
	inline void set_U3CLogTypeSeverityMappingU3Ek__BackingField_11(LogTypeSeverityMapping_t374677385 * value)
	{
		___U3CLogTypeSeverityMappingU3Ek__BackingField_11 = value;
		Il2CppCodeGenWriteBarrier(&___U3CLogTypeSeverityMappingU3Ek__BackingField_11, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
