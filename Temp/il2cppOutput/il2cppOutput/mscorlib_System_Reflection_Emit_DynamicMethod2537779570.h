﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Reflection_MethodInfo1877626248.h"
#include "mscorlib_System_RuntimeMethodHandle1133924984.h"
#include "mscorlib_System_Reflection_MethodAttributes2366443849.h"
#include "mscorlib_System_Reflection_CallingConventions2253234531.h"

// System.String
struct String_t;
// System.Type
struct Type_t;
// System.Type[]
struct TypeU5BU5D_t3940880105;
// System.Reflection.Module
struct Module_t2987026101;
// System.Reflection.Emit.ILGenerator
struct ILGenerator_t1388622344;
// System.Object[]
struct ObjectU5BU5D_t2843939325;
// System.Reflection.MonoMethod
struct MonoMethod_t;
// System.Reflection.Emit.ParameterBuilder[]
struct ParameterBuilderU5BU5D_t3054868058;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.Emit.DynamicMethod
struct  DynamicMethod_t2537779570  : public MethodInfo_t
{
public:
	// System.RuntimeMethodHandle System.Reflection.Emit.DynamicMethod::mhandle
	RuntimeMethodHandle_t1133924984  ___mhandle_0;
	// System.String System.Reflection.Emit.DynamicMethod::name
	String_t* ___name_1;
	// System.Type System.Reflection.Emit.DynamicMethod::returnType
	Type_t * ___returnType_2;
	// System.Type[] System.Reflection.Emit.DynamicMethod::parameters
	TypeU5BU5D_t3940880105* ___parameters_3;
	// System.Reflection.MethodAttributes System.Reflection.Emit.DynamicMethod::attributes
	int32_t ___attributes_4;
	// System.Reflection.CallingConventions System.Reflection.Emit.DynamicMethod::callingConvention
	int32_t ___callingConvention_5;
	// System.Reflection.Module System.Reflection.Emit.DynamicMethod::module
	Module_t2987026101 * ___module_6;
	// System.Boolean System.Reflection.Emit.DynamicMethod::skipVisibility
	bool ___skipVisibility_7;
	// System.Boolean System.Reflection.Emit.DynamicMethod::init_locals
	bool ___init_locals_8;
	// System.Reflection.Emit.ILGenerator System.Reflection.Emit.DynamicMethod::ilgen
	ILGenerator_t1388622344 * ___ilgen_9;
	// System.Int32 System.Reflection.Emit.DynamicMethod::nrefs
	int32_t ___nrefs_10;
	// System.Object[] System.Reflection.Emit.DynamicMethod::refs
	ObjectU5BU5D_t2843939325* ___refs_11;
	// System.Type System.Reflection.Emit.DynamicMethod::owner
	Type_t * ___owner_12;
	// System.Reflection.MonoMethod System.Reflection.Emit.DynamicMethod::method
	MonoMethod_t * ___method_13;
	// System.Reflection.Emit.ParameterBuilder[] System.Reflection.Emit.DynamicMethod::pinfo
	ParameterBuilderU5BU5D_t3054868058* ___pinfo_14;
	// System.Boolean System.Reflection.Emit.DynamicMethod::creating
	bool ___creating_15;

public:
	inline static int32_t get_offset_of_mhandle_0() { return static_cast<int32_t>(offsetof(DynamicMethod_t2537779570, ___mhandle_0)); }
	inline RuntimeMethodHandle_t1133924984  get_mhandle_0() const { return ___mhandle_0; }
	inline RuntimeMethodHandle_t1133924984 * get_address_of_mhandle_0() { return &___mhandle_0; }
	inline void set_mhandle_0(RuntimeMethodHandle_t1133924984  value)
	{
		___mhandle_0 = value;
	}

	inline static int32_t get_offset_of_name_1() { return static_cast<int32_t>(offsetof(DynamicMethod_t2537779570, ___name_1)); }
	inline String_t* get_name_1() const { return ___name_1; }
	inline String_t** get_address_of_name_1() { return &___name_1; }
	inline void set_name_1(String_t* value)
	{
		___name_1 = value;
		Il2CppCodeGenWriteBarrier(&___name_1, value);
	}

	inline static int32_t get_offset_of_returnType_2() { return static_cast<int32_t>(offsetof(DynamicMethod_t2537779570, ___returnType_2)); }
	inline Type_t * get_returnType_2() const { return ___returnType_2; }
	inline Type_t ** get_address_of_returnType_2() { return &___returnType_2; }
	inline void set_returnType_2(Type_t * value)
	{
		___returnType_2 = value;
		Il2CppCodeGenWriteBarrier(&___returnType_2, value);
	}

	inline static int32_t get_offset_of_parameters_3() { return static_cast<int32_t>(offsetof(DynamicMethod_t2537779570, ___parameters_3)); }
	inline TypeU5BU5D_t3940880105* get_parameters_3() const { return ___parameters_3; }
	inline TypeU5BU5D_t3940880105** get_address_of_parameters_3() { return &___parameters_3; }
	inline void set_parameters_3(TypeU5BU5D_t3940880105* value)
	{
		___parameters_3 = value;
		Il2CppCodeGenWriteBarrier(&___parameters_3, value);
	}

	inline static int32_t get_offset_of_attributes_4() { return static_cast<int32_t>(offsetof(DynamicMethod_t2537779570, ___attributes_4)); }
	inline int32_t get_attributes_4() const { return ___attributes_4; }
	inline int32_t* get_address_of_attributes_4() { return &___attributes_4; }
	inline void set_attributes_4(int32_t value)
	{
		___attributes_4 = value;
	}

	inline static int32_t get_offset_of_callingConvention_5() { return static_cast<int32_t>(offsetof(DynamicMethod_t2537779570, ___callingConvention_5)); }
	inline int32_t get_callingConvention_5() const { return ___callingConvention_5; }
	inline int32_t* get_address_of_callingConvention_5() { return &___callingConvention_5; }
	inline void set_callingConvention_5(int32_t value)
	{
		___callingConvention_5 = value;
	}

	inline static int32_t get_offset_of_module_6() { return static_cast<int32_t>(offsetof(DynamicMethod_t2537779570, ___module_6)); }
	inline Module_t2987026101 * get_module_6() const { return ___module_6; }
	inline Module_t2987026101 ** get_address_of_module_6() { return &___module_6; }
	inline void set_module_6(Module_t2987026101 * value)
	{
		___module_6 = value;
		Il2CppCodeGenWriteBarrier(&___module_6, value);
	}

	inline static int32_t get_offset_of_skipVisibility_7() { return static_cast<int32_t>(offsetof(DynamicMethod_t2537779570, ___skipVisibility_7)); }
	inline bool get_skipVisibility_7() const { return ___skipVisibility_7; }
	inline bool* get_address_of_skipVisibility_7() { return &___skipVisibility_7; }
	inline void set_skipVisibility_7(bool value)
	{
		___skipVisibility_7 = value;
	}

	inline static int32_t get_offset_of_init_locals_8() { return static_cast<int32_t>(offsetof(DynamicMethod_t2537779570, ___init_locals_8)); }
	inline bool get_init_locals_8() const { return ___init_locals_8; }
	inline bool* get_address_of_init_locals_8() { return &___init_locals_8; }
	inline void set_init_locals_8(bool value)
	{
		___init_locals_8 = value;
	}

	inline static int32_t get_offset_of_ilgen_9() { return static_cast<int32_t>(offsetof(DynamicMethod_t2537779570, ___ilgen_9)); }
	inline ILGenerator_t1388622344 * get_ilgen_9() const { return ___ilgen_9; }
	inline ILGenerator_t1388622344 ** get_address_of_ilgen_9() { return &___ilgen_9; }
	inline void set_ilgen_9(ILGenerator_t1388622344 * value)
	{
		___ilgen_9 = value;
		Il2CppCodeGenWriteBarrier(&___ilgen_9, value);
	}

	inline static int32_t get_offset_of_nrefs_10() { return static_cast<int32_t>(offsetof(DynamicMethod_t2537779570, ___nrefs_10)); }
	inline int32_t get_nrefs_10() const { return ___nrefs_10; }
	inline int32_t* get_address_of_nrefs_10() { return &___nrefs_10; }
	inline void set_nrefs_10(int32_t value)
	{
		___nrefs_10 = value;
	}

	inline static int32_t get_offset_of_refs_11() { return static_cast<int32_t>(offsetof(DynamicMethod_t2537779570, ___refs_11)); }
	inline ObjectU5BU5D_t2843939325* get_refs_11() const { return ___refs_11; }
	inline ObjectU5BU5D_t2843939325** get_address_of_refs_11() { return &___refs_11; }
	inline void set_refs_11(ObjectU5BU5D_t2843939325* value)
	{
		___refs_11 = value;
		Il2CppCodeGenWriteBarrier(&___refs_11, value);
	}

	inline static int32_t get_offset_of_owner_12() { return static_cast<int32_t>(offsetof(DynamicMethod_t2537779570, ___owner_12)); }
	inline Type_t * get_owner_12() const { return ___owner_12; }
	inline Type_t ** get_address_of_owner_12() { return &___owner_12; }
	inline void set_owner_12(Type_t * value)
	{
		___owner_12 = value;
		Il2CppCodeGenWriteBarrier(&___owner_12, value);
	}

	inline static int32_t get_offset_of_method_13() { return static_cast<int32_t>(offsetof(DynamicMethod_t2537779570, ___method_13)); }
	inline MonoMethod_t * get_method_13() const { return ___method_13; }
	inline MonoMethod_t ** get_address_of_method_13() { return &___method_13; }
	inline void set_method_13(MonoMethod_t * value)
	{
		___method_13 = value;
		Il2CppCodeGenWriteBarrier(&___method_13, value);
	}

	inline static int32_t get_offset_of_pinfo_14() { return static_cast<int32_t>(offsetof(DynamicMethod_t2537779570, ___pinfo_14)); }
	inline ParameterBuilderU5BU5D_t3054868058* get_pinfo_14() const { return ___pinfo_14; }
	inline ParameterBuilderU5BU5D_t3054868058** get_address_of_pinfo_14() { return &___pinfo_14; }
	inline void set_pinfo_14(ParameterBuilderU5BU5D_t3054868058* value)
	{
		___pinfo_14 = value;
		Il2CppCodeGenWriteBarrier(&___pinfo_14, value);
	}

	inline static int32_t get_offset_of_creating_15() { return static_cast<int32_t>(offsetof(DynamicMethod_t2537779570, ___creating_15)); }
	inline bool get_creating_15() const { return ___creating_15; }
	inline bool* get_address_of_creating_15() { return &___creating_15; }
	inline void set_creating_15(bool value)
	{
		___creating_15 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
