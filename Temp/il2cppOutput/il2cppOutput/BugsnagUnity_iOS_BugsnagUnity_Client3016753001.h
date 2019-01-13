#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object3080106164.h"

// BugsnagUnity.ISessionTracker
struct ISessionTracker_t3803390146;
// BugsnagUnity.Payload.User
struct User_t1964165016;
// BugsnagUnity.Payload.Metadata
struct Metadata_t1989352756;
// BugsnagUnity.UniqueLogThrottle
struct UniqueLogThrottle_t2286923907;
// BugsnagUnity.MaximumLogTypeCounter
struct MaximumLogTypeCounter_t3255260467;
// System.Collections.Generic.List`1<BugsnagUnity.Middleware>
struct List_1_t416755668;
// System.Object
struct Il2CppObject;
// BugsnagUnity.INativeClient
struct INativeClient_t4065174140;
// System.Diagnostics.Stopwatch
struct Stopwatch_t305734070;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// BugsnagUnity.Client
struct  Client_t3016753001  : public Il2CppObject
{
public:
	// BugsnagUnity.ISessionTracker BugsnagUnity.Client::<SessionTracking>k__BackingField
	Il2CppObject * ___U3CSessionTrackingU3Ek__BackingField_0;
	// BugsnagUnity.Payload.User BugsnagUnity.Client::<User>k__BackingField
	User_t1964165016 * ___U3CUserU3Ek__BackingField_1;
	// BugsnagUnity.Payload.Metadata BugsnagUnity.Client::<Metadata>k__BackingField
	Metadata_t1989352756 * ___U3CMetadataU3Ek__BackingField_2;
	// BugsnagUnity.UniqueLogThrottle BugsnagUnity.Client::<UniqueCounter>k__BackingField
	UniqueLogThrottle_t2286923907 * ___U3CUniqueCounterU3Ek__BackingField_3;
	// BugsnagUnity.MaximumLogTypeCounter BugsnagUnity.Client::<LogTypeCounter>k__BackingField
	MaximumLogTypeCounter_t3255260467 * ___U3CLogTypeCounterU3Ek__BackingField_4;
	// System.Collections.Generic.List`1<BugsnagUnity.Middleware> BugsnagUnity.Client::<Middleware>k__BackingField
	List_1_t416755668 * ___U3CMiddlewareU3Ek__BackingField_5;
	// System.Object BugsnagUnity.Client::<MiddlewareLock>k__BackingField
	Il2CppObject * ___U3CMiddlewareLockU3Ek__BackingField_6;
	// BugsnagUnity.INativeClient BugsnagUnity.Client::<NativeClient>k__BackingField
	Il2CppObject * ___U3CNativeClientU3Ek__BackingField_7;
	// System.Diagnostics.Stopwatch BugsnagUnity.Client::<Stopwatch>k__BackingField
	Stopwatch_t305734070 * ___U3CStopwatchU3Ek__BackingField_8;

public:
	inline static int32_t get_offset_of_U3CSessionTrackingU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(Client_t3016753001, ___U3CSessionTrackingU3Ek__BackingField_0)); }
	inline Il2CppObject * get_U3CSessionTrackingU3Ek__BackingField_0() const { return ___U3CSessionTrackingU3Ek__BackingField_0; }
	inline Il2CppObject ** get_address_of_U3CSessionTrackingU3Ek__BackingField_0() { return &___U3CSessionTrackingU3Ek__BackingField_0; }
	inline void set_U3CSessionTrackingU3Ek__BackingField_0(Il2CppObject * value)
	{
		___U3CSessionTrackingU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier(&___U3CSessionTrackingU3Ek__BackingField_0, value);
	}

	inline static int32_t get_offset_of_U3CUserU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(Client_t3016753001, ___U3CUserU3Ek__BackingField_1)); }
	inline User_t1964165016 * get_U3CUserU3Ek__BackingField_1() const { return ___U3CUserU3Ek__BackingField_1; }
	inline User_t1964165016 ** get_address_of_U3CUserU3Ek__BackingField_1() { return &___U3CUserU3Ek__BackingField_1; }
	inline void set_U3CUserU3Ek__BackingField_1(User_t1964165016 * value)
	{
		___U3CUserU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier(&___U3CUserU3Ek__BackingField_1, value);
	}

	inline static int32_t get_offset_of_U3CMetadataU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(Client_t3016753001, ___U3CMetadataU3Ek__BackingField_2)); }
	inline Metadata_t1989352756 * get_U3CMetadataU3Ek__BackingField_2() const { return ___U3CMetadataU3Ek__BackingField_2; }
	inline Metadata_t1989352756 ** get_address_of_U3CMetadataU3Ek__BackingField_2() { return &___U3CMetadataU3Ek__BackingField_2; }
	inline void set_U3CMetadataU3Ek__BackingField_2(Metadata_t1989352756 * value)
	{
		___U3CMetadataU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier(&___U3CMetadataU3Ek__BackingField_2, value);
	}

	inline static int32_t get_offset_of_U3CUniqueCounterU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(Client_t3016753001, ___U3CUniqueCounterU3Ek__BackingField_3)); }
	inline UniqueLogThrottle_t2286923907 * get_U3CUniqueCounterU3Ek__BackingField_3() const { return ___U3CUniqueCounterU3Ek__BackingField_3; }
	inline UniqueLogThrottle_t2286923907 ** get_address_of_U3CUniqueCounterU3Ek__BackingField_3() { return &___U3CUniqueCounterU3Ek__BackingField_3; }
	inline void set_U3CUniqueCounterU3Ek__BackingField_3(UniqueLogThrottle_t2286923907 * value)
	{
		___U3CUniqueCounterU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier(&___U3CUniqueCounterU3Ek__BackingField_3, value);
	}

	inline static int32_t get_offset_of_U3CLogTypeCounterU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(Client_t3016753001, ___U3CLogTypeCounterU3Ek__BackingField_4)); }
	inline MaximumLogTypeCounter_t3255260467 * get_U3CLogTypeCounterU3Ek__BackingField_4() const { return ___U3CLogTypeCounterU3Ek__BackingField_4; }
	inline MaximumLogTypeCounter_t3255260467 ** get_address_of_U3CLogTypeCounterU3Ek__BackingField_4() { return &___U3CLogTypeCounterU3Ek__BackingField_4; }
	inline void set_U3CLogTypeCounterU3Ek__BackingField_4(MaximumLogTypeCounter_t3255260467 * value)
	{
		___U3CLogTypeCounterU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier(&___U3CLogTypeCounterU3Ek__BackingField_4, value);
	}

	inline static int32_t get_offset_of_U3CMiddlewareU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(Client_t3016753001, ___U3CMiddlewareU3Ek__BackingField_5)); }
	inline List_1_t416755668 * get_U3CMiddlewareU3Ek__BackingField_5() const { return ___U3CMiddlewareU3Ek__BackingField_5; }
	inline List_1_t416755668 ** get_address_of_U3CMiddlewareU3Ek__BackingField_5() { return &___U3CMiddlewareU3Ek__BackingField_5; }
	inline void set_U3CMiddlewareU3Ek__BackingField_5(List_1_t416755668 * value)
	{
		___U3CMiddlewareU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier(&___U3CMiddlewareU3Ek__BackingField_5, value);
	}

	inline static int32_t get_offset_of_U3CMiddlewareLockU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(Client_t3016753001, ___U3CMiddlewareLockU3Ek__BackingField_6)); }
	inline Il2CppObject * get_U3CMiddlewareLockU3Ek__BackingField_6() const { return ___U3CMiddlewareLockU3Ek__BackingField_6; }
	inline Il2CppObject ** get_address_of_U3CMiddlewareLockU3Ek__BackingField_6() { return &___U3CMiddlewareLockU3Ek__BackingField_6; }
	inline void set_U3CMiddlewareLockU3Ek__BackingField_6(Il2CppObject * value)
	{
		___U3CMiddlewareLockU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier(&___U3CMiddlewareLockU3Ek__BackingField_6, value);
	}

	inline static int32_t get_offset_of_U3CNativeClientU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(Client_t3016753001, ___U3CNativeClientU3Ek__BackingField_7)); }
	inline Il2CppObject * get_U3CNativeClientU3Ek__BackingField_7() const { return ___U3CNativeClientU3Ek__BackingField_7; }
	inline Il2CppObject ** get_address_of_U3CNativeClientU3Ek__BackingField_7() { return &___U3CNativeClientU3Ek__BackingField_7; }
	inline void set_U3CNativeClientU3Ek__BackingField_7(Il2CppObject * value)
	{
		___U3CNativeClientU3Ek__BackingField_7 = value;
		Il2CppCodeGenWriteBarrier(&___U3CNativeClientU3Ek__BackingField_7, value);
	}

	inline static int32_t get_offset_of_U3CStopwatchU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(Client_t3016753001, ___U3CStopwatchU3Ek__BackingField_8)); }
	inline Stopwatch_t305734070 * get_U3CStopwatchU3Ek__BackingField_8() const { return ___U3CStopwatchU3Ek__BackingField_8; }
	inline Stopwatch_t305734070 ** get_address_of_U3CStopwatchU3Ek__BackingField_8() { return &___U3CStopwatchU3Ek__BackingField_8; }
	inline void set_U3CStopwatchU3Ek__BackingField_8(Stopwatch_t305734070 * value)
	{
		___U3CStopwatchU3Ek__BackingField_8 = value;
		Il2CppCodeGenWriteBarrier(&___U3CStopwatchU3Ek__BackingField_8, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
