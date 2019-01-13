#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour3962482529.h"
#include "UnityEngine_UnityEngine_LogType73765434.h"

// System.String
struct String_t;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// BugsnagUnity.BugsnagBehaviour
struct  BugsnagBehaviour_t1858859784  : public MonoBehaviour_t3962482529
{
public:
	// System.String BugsnagUnity.BugsnagBehaviour::BugsnagApiKey
	String_t* ___BugsnagApiKey_2;
	// System.Boolean BugsnagUnity.BugsnagBehaviour::AutoNotify
	bool ___AutoNotify_3;
	// UnityEngine.LogType BugsnagUnity.BugsnagBehaviour::NotifyLevel
	int32_t ___NotifyLevel_4;
	// System.Int32 BugsnagUnity.BugsnagBehaviour::MaximumBreadcrumbs
	int32_t ___MaximumBreadcrumbs_5;
	// System.Int32 BugsnagUnity.BugsnagBehaviour::UniqueLogsPerSecond
	int32_t ___UniqueLogsPerSecond_6;
	// System.Boolean BugsnagUnity.BugsnagBehaviour::AutoCaptureSessions
	bool ___AutoCaptureSessions_7;

public:
	inline static int32_t get_offset_of_BugsnagApiKey_2() { return static_cast<int32_t>(offsetof(BugsnagBehaviour_t1858859784, ___BugsnagApiKey_2)); }
	inline String_t* get_BugsnagApiKey_2() const { return ___BugsnagApiKey_2; }
	inline String_t** get_address_of_BugsnagApiKey_2() { return &___BugsnagApiKey_2; }
	inline void set_BugsnagApiKey_2(String_t* value)
	{
		___BugsnagApiKey_2 = value;
		Il2CppCodeGenWriteBarrier(&___BugsnagApiKey_2, value);
	}

	inline static int32_t get_offset_of_AutoNotify_3() { return static_cast<int32_t>(offsetof(BugsnagBehaviour_t1858859784, ___AutoNotify_3)); }
	inline bool get_AutoNotify_3() const { return ___AutoNotify_3; }
	inline bool* get_address_of_AutoNotify_3() { return &___AutoNotify_3; }
	inline void set_AutoNotify_3(bool value)
	{
		___AutoNotify_3 = value;
	}

	inline static int32_t get_offset_of_NotifyLevel_4() { return static_cast<int32_t>(offsetof(BugsnagBehaviour_t1858859784, ___NotifyLevel_4)); }
	inline int32_t get_NotifyLevel_4() const { return ___NotifyLevel_4; }
	inline int32_t* get_address_of_NotifyLevel_4() { return &___NotifyLevel_4; }
	inline void set_NotifyLevel_4(int32_t value)
	{
		___NotifyLevel_4 = value;
	}

	inline static int32_t get_offset_of_MaximumBreadcrumbs_5() { return static_cast<int32_t>(offsetof(BugsnagBehaviour_t1858859784, ___MaximumBreadcrumbs_5)); }
	inline int32_t get_MaximumBreadcrumbs_5() const { return ___MaximumBreadcrumbs_5; }
	inline int32_t* get_address_of_MaximumBreadcrumbs_5() { return &___MaximumBreadcrumbs_5; }
	inline void set_MaximumBreadcrumbs_5(int32_t value)
	{
		___MaximumBreadcrumbs_5 = value;
	}

	inline static int32_t get_offset_of_UniqueLogsPerSecond_6() { return static_cast<int32_t>(offsetof(BugsnagBehaviour_t1858859784, ___UniqueLogsPerSecond_6)); }
	inline int32_t get_UniqueLogsPerSecond_6() const { return ___UniqueLogsPerSecond_6; }
	inline int32_t* get_address_of_UniqueLogsPerSecond_6() { return &___UniqueLogsPerSecond_6; }
	inline void set_UniqueLogsPerSecond_6(int32_t value)
	{
		___UniqueLogsPerSecond_6 = value;
	}

	inline static int32_t get_offset_of_AutoCaptureSessions_7() { return static_cast<int32_t>(offsetof(BugsnagBehaviour_t1858859784, ___AutoCaptureSessions_7)); }
	inline bool get_AutoCaptureSessions_7() const { return ___AutoCaptureSessions_7; }
	inline bool* get_address_of_AutoCaptureSessions_7() { return &___AutoCaptureSessions_7; }
	inline void set_AutoCaptureSessions_7(bool value)
	{
		___AutoCaptureSessions_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
