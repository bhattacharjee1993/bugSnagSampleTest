#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>

#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Array3549286319.h"
#include "AssemblyU2DCSharpU2Dfirstpass_U3CModuleU3E692745525.h"
#include "AssemblyU2DCSharpU2Dfirstpass_BugsnagUnity_Bugsnag1858859784.h"
#include "mscorlib_System_Void1185182177.h"
#include "mscorlib_System_String1847450689.h"
#include "mscorlib_System_Boolean97287965.h"
#include "UnityEngine_UnityEngine_LogType73765434.h"
#include "mscorlib_System_Int322950945753.h"
#include "UnityEngine_UnityEngine_MonoBehaviour3962482529.h"
#include "mscorlib_System_TimeSpan881159249.h"
#include "mscorlib_System_Double594665363.h"

// BugsnagUnity.BugsnagBehaviour
struct BugsnagBehaviour_t1858859784;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t3962482529;
// BugsnagUnity.IClient
struct IClient_t2349156510;
// System.String
struct String_t;
// BugsnagUnity.IConfiguration
struct IConfiguration_t3491182725;
extern Il2CppClass* String_t_il2cpp_TypeInfo_var;
extern const uint32_t BugsnagBehaviour__ctor_m3345870287_MetadataUsageId;
extern Il2CppClass* Bugsnag_t2804097847_il2cpp_TypeInfo_var;
extern Il2CppClass* IConfiguration_t3491182725_il2cpp_TypeInfo_var;
extern Il2CppClass* TimeSpan_t881159249_il2cpp_TypeInfo_var;
extern Il2CppClass* Debug_t3317548046_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral3444807159;
extern Il2CppCodeGenString* _stringLiteral3660967739;
extern const uint32_t BugsnagBehaviour_Awake_m1922029495_MetadataUsageId;
extern const uint32_t BugsnagBehaviour_OnApplicationFocus_m904938659_MetadataUsageId;
extern const uint32_t BugsnagBehaviour_OnApplicationPause_m1337616860_MetadataUsageId;




// System.Void UnityEngine.MonoBehaviour::.ctor()
extern "C"  void MonoBehaviour__ctor_m1339182015 (MonoBehaviour_t3962482529 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// BugsnagUnity.IClient BugsnagUnity.Bugsnag::Init(System.String)
extern "C"  Il2CppObject * Bugsnag_Init_m1203213351 (Il2CppObject * __this /* static, unused */, String_t* p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// BugsnagUnity.IConfiguration BugsnagUnity.Bugsnag::get_Configuration()
extern "C"  Il2CppObject * Bugsnag_get_Configuration_m2663051233 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan System.TimeSpan::FromSeconds(System.Double)
extern "C"  TimeSpan_t881159249  TimeSpan_FromSeconds_m4219356874 (Il2CppObject * __this /* static, unused */, double p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Debug::get_isDebugBuild()
extern "C"  bool Debug_get_isDebugBuild_m908995610 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BugsnagUnity.Bugsnag::SetApplicationState(System.Boolean)
extern "C"  void Bugsnag_SetApplicationState_m1434044481 (Il2CppObject * __this /* static, unused */, bool p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void BugsnagUnity.BugsnagBehaviour::.ctor()
extern "C"  void BugsnagBehaviour__ctor_m3345870287 (BugsnagBehaviour_t1858859784 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BugsnagBehaviour__ctor_m3345870287_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_0 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->get_Empty_2();
		__this->set_BugsnagApiKey_2(L_0);
		__this->set_AutoNotify_3((bool)1);
		__this->set_NotifyLevel_4(4);
		__this->set_MaximumBreadcrumbs_5(((int32_t)25));
		__this->set_UniqueLogsPerSecond_6(5);
		__this->set_AutoCaptureSessions_7((bool)1);
		MonoBehaviour__ctor_m1339182015(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void BugsnagUnity.BugsnagBehaviour::Awake()
extern "C"  void BugsnagBehaviour_Awake_m1922029495 (BugsnagBehaviour_t1858859784 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BugsnagBehaviour_Awake_m1922029495_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Il2CppObject * G_B2_0 = NULL;
	Il2CppObject * G_B1_0 = NULL;
	String_t* G_B3_0 = NULL;
	Il2CppObject * G_B3_1 = NULL;
	{
		String_t* L_0 = __this->get_BugsnagApiKey_2();
		IL2CPP_RUNTIME_CLASS_INIT(Bugsnag_t2804097847_il2cpp_TypeInfo_var);
		Bugsnag_Init_m1203213351(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		Il2CppObject * L_1 = Bugsnag_get_Configuration_m2663051233(NULL /*static, unused*/, /*hidden argument*/NULL);
		bool L_2 = __this->get_AutoNotify_3();
		NullCheck(L_1);
		InterfaceActionInvoker1< bool >::Invoke(19 /* System.Void BugsnagUnity.IConfiguration::set_AutoNotify(System.Boolean) */, IConfiguration_t3491182725_il2cpp_TypeInfo_var, L_1, L_2);
		Il2CppObject * L_3 = Bugsnag_get_Configuration_m2663051233(NULL /*static, unused*/, /*hidden argument*/NULL);
		bool L_4 = __this->get_AutoCaptureSessions_7();
		NullCheck(L_3);
		InterfaceActionInvoker1< bool >::Invoke(21 /* System.Void BugsnagUnity.IConfiguration::set_AutoCaptureSessions(System.Boolean) */, IConfiguration_t3491182725_il2cpp_TypeInfo_var, L_3, L_4);
		Il2CppObject * L_5 = Bugsnag_get_Configuration_m2663051233(NULL /*static, unused*/, /*hidden argument*/NULL);
		int32_t L_6 = __this->get_UniqueLogsPerSecond_6();
		IL2CPP_RUNTIME_CLASS_INIT(TimeSpan_t881159249_il2cpp_TypeInfo_var);
		TimeSpan_t881159249  L_7 = TimeSpan_FromSeconds_m4219356874(NULL /*static, unused*/, (((double)((double)L_6))), /*hidden argument*/NULL);
		NullCheck(L_5);
		InterfaceActionInvoker1< TimeSpan_t881159249  >::Invoke(4 /* System.Void BugsnagUnity.IConfiguration::set_UniqueLogsTimePeriod(System.TimeSpan) */, IConfiguration_t3491182725_il2cpp_TypeInfo_var, L_5, L_7);
		Il2CppObject * L_8 = Bugsnag_get_Configuration_m2663051233(NULL /*static, unused*/, /*hidden argument*/NULL);
		int32_t L_9 = __this->get_NotifyLevel_4();
		NullCheck(L_8);
		InterfaceActionInvoker1< int32_t >::Invoke(17 /* System.Void BugsnagUnity.IConfiguration::set_NotifyLevel(UnityEngine.LogType) */, IConfiguration_t3491182725_il2cpp_TypeInfo_var, L_8, L_9);
		Il2CppObject * L_10 = Bugsnag_get_Configuration_m2663051233(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		bool L_11 = Debug_get_isDebugBuild_m908995610(NULL /*static, unused*/, /*hidden argument*/NULL);
		G_B1_0 = L_10;
		if (!L_11)
		{
			G_B2_0 = L_10;
			goto IL_006b;
		}
	}
	{
		G_B3_0 = _stringLiteral3444807159;
		G_B3_1 = G_B1_0;
		goto IL_0070;
	}

IL_006b:
	{
		G_B3_0 = _stringLiteral3660967739;
		G_B3_1 = G_B2_0;
	}

IL_0070:
	{
		NullCheck(G_B3_1);
		InterfaceActionInvoker1< String_t* >::Invoke(7 /* System.Void BugsnagUnity.IConfiguration::set_ReleaseStage(System.String) */, IConfiguration_t3491182725_il2cpp_TypeInfo_var, G_B3_1, G_B3_0);
		IL2CPP_RUNTIME_CLASS_INIT(Bugsnag_t2804097847_il2cpp_TypeInfo_var);
		Il2CppObject * L_12 = Bugsnag_get_Configuration_m2663051233(NULL /*static, unused*/, /*hidden argument*/NULL);
		int32_t L_13 = __this->get_MaximumBreadcrumbs_5();
		NullCheck(L_12);
		InterfaceActionInvoker1< int32_t >::Invoke(5 /* System.Void BugsnagUnity.IConfiguration::set_MaximumBreadcrumbs(System.Int32) */, IConfiguration_t3491182725_il2cpp_TypeInfo_var, L_12, L_13);
		return;
	}
}
// System.Void BugsnagUnity.BugsnagBehaviour::OnApplicationFocus(System.Boolean)
extern "C"  void BugsnagBehaviour_OnApplicationFocus_m904938659 (BugsnagBehaviour_t1858859784 * __this, bool ___hasFocus0, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BugsnagBehaviour_OnApplicationFocus_m904938659_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = ___hasFocus0;
		IL2CPP_RUNTIME_CLASS_INIT(Bugsnag_t2804097847_il2cpp_TypeInfo_var);
		Bugsnag_SetApplicationState_m1434044481(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void BugsnagUnity.BugsnagBehaviour::OnApplicationPause(System.Boolean)
extern "C"  void BugsnagBehaviour_OnApplicationPause_m1337616860 (BugsnagBehaviour_t1858859784 * __this, bool ___paused0, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BugsnagBehaviour_OnApplicationPause_m1337616860_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		bool L_0 = ___paused0;
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Bugsnag_t2804097847_il2cpp_TypeInfo_var);
		Bugsnag_SetApplicationState_m1434044481(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
