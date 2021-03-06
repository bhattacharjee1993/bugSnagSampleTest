﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Type2483944760.h"
#include "mscorlib_System_Reflection_TypeAttributes113483779.h"

// System.String
struct String_t;
// System.Type
struct Type_t;
// System.Type[]
struct TypeU5BU5D_t3940880105;
// System.Reflection.Emit.MethodBuilder[]
struct MethodBuilderU5BU5D_t3705301900;
// System.Reflection.Emit.ConstructorBuilder[]
struct ConstructorBuilderU5BU5D_t3223009221;
// System.Reflection.Emit.PropertyBuilder[]
struct PropertyBuilderU5BU5D_t4023329206;
// System.Reflection.Emit.FieldBuilder[]
struct FieldBuilderU5BU5D_t138311604;
// System.Reflection.Emit.ModuleBuilder
struct ModuleBuilder_t731887691;
// System.Reflection.Emit.GenericTypeParameterBuilder[]
struct GenericTypeParameterBuilderU5BU5D_t3780444109;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.Emit.TypeBuilder
struct  TypeBuilder_t1073948154  : public Type_t
{
public:
	// System.String System.Reflection.Emit.TypeBuilder::tname
	String_t* ___tname_8;
	// System.String System.Reflection.Emit.TypeBuilder::nspace
	String_t* ___nspace_9;
	// System.Type System.Reflection.Emit.TypeBuilder::parent
	Type_t * ___parent_10;
	// System.Type System.Reflection.Emit.TypeBuilder::nesting_type
	Type_t * ___nesting_type_11;
	// System.Type[] System.Reflection.Emit.TypeBuilder::interfaces
	TypeU5BU5D_t3940880105* ___interfaces_12;
	// System.Int32 System.Reflection.Emit.TypeBuilder::num_methods
	int32_t ___num_methods_13;
	// System.Reflection.Emit.MethodBuilder[] System.Reflection.Emit.TypeBuilder::methods
	MethodBuilderU5BU5D_t3705301900* ___methods_14;
	// System.Reflection.Emit.ConstructorBuilder[] System.Reflection.Emit.TypeBuilder::ctors
	ConstructorBuilderU5BU5D_t3223009221* ___ctors_15;
	// System.Reflection.Emit.PropertyBuilder[] System.Reflection.Emit.TypeBuilder::properties
	PropertyBuilderU5BU5D_t4023329206* ___properties_16;
	// System.Reflection.Emit.FieldBuilder[] System.Reflection.Emit.TypeBuilder::fields
	FieldBuilderU5BU5D_t138311604* ___fields_17;
	// System.Reflection.TypeAttributes System.Reflection.Emit.TypeBuilder::attrs
	int32_t ___attrs_18;
	// System.Int32 System.Reflection.Emit.TypeBuilder::table_idx
	int32_t ___table_idx_19;
	// System.Reflection.Emit.ModuleBuilder System.Reflection.Emit.TypeBuilder::pmodule
	ModuleBuilder_t731887691 * ___pmodule_20;
	// System.Int32 System.Reflection.Emit.TypeBuilder::class_size
	int32_t ___class_size_21;
	// System.Reflection.Emit.GenericTypeParameterBuilder[] System.Reflection.Emit.TypeBuilder::generic_params
	GenericTypeParameterBuilderU5BU5D_t3780444109* ___generic_params_22;
	// System.Type System.Reflection.Emit.TypeBuilder::created
	Type_t * ___created_23;
	// System.String System.Reflection.Emit.TypeBuilder::fullname
	String_t* ___fullname_24;
	// System.Boolean System.Reflection.Emit.TypeBuilder::createTypeCalled
	bool ___createTypeCalled_25;
	// System.Type System.Reflection.Emit.TypeBuilder::underlying_type
	Type_t * ___underlying_type_26;

public:
	inline static int32_t get_offset_of_tname_8() { return static_cast<int32_t>(offsetof(TypeBuilder_t1073948154, ___tname_8)); }
	inline String_t* get_tname_8() const { return ___tname_8; }
	inline String_t** get_address_of_tname_8() { return &___tname_8; }
	inline void set_tname_8(String_t* value)
	{
		___tname_8 = value;
		Il2CppCodeGenWriteBarrier(&___tname_8, value);
	}

	inline static int32_t get_offset_of_nspace_9() { return static_cast<int32_t>(offsetof(TypeBuilder_t1073948154, ___nspace_9)); }
	inline String_t* get_nspace_9() const { return ___nspace_9; }
	inline String_t** get_address_of_nspace_9() { return &___nspace_9; }
	inline void set_nspace_9(String_t* value)
	{
		___nspace_9 = value;
		Il2CppCodeGenWriteBarrier(&___nspace_9, value);
	}

	inline static int32_t get_offset_of_parent_10() { return static_cast<int32_t>(offsetof(TypeBuilder_t1073948154, ___parent_10)); }
	inline Type_t * get_parent_10() const { return ___parent_10; }
	inline Type_t ** get_address_of_parent_10() { return &___parent_10; }
	inline void set_parent_10(Type_t * value)
	{
		___parent_10 = value;
		Il2CppCodeGenWriteBarrier(&___parent_10, value);
	}

	inline static int32_t get_offset_of_nesting_type_11() { return static_cast<int32_t>(offsetof(TypeBuilder_t1073948154, ___nesting_type_11)); }
	inline Type_t * get_nesting_type_11() const { return ___nesting_type_11; }
	inline Type_t ** get_address_of_nesting_type_11() { return &___nesting_type_11; }
	inline void set_nesting_type_11(Type_t * value)
	{
		___nesting_type_11 = value;
		Il2CppCodeGenWriteBarrier(&___nesting_type_11, value);
	}

	inline static int32_t get_offset_of_interfaces_12() { return static_cast<int32_t>(offsetof(TypeBuilder_t1073948154, ___interfaces_12)); }
	inline TypeU5BU5D_t3940880105* get_interfaces_12() const { return ___interfaces_12; }
	inline TypeU5BU5D_t3940880105** get_address_of_interfaces_12() { return &___interfaces_12; }
	inline void set_interfaces_12(TypeU5BU5D_t3940880105* value)
	{
		___interfaces_12 = value;
		Il2CppCodeGenWriteBarrier(&___interfaces_12, value);
	}

	inline static int32_t get_offset_of_num_methods_13() { return static_cast<int32_t>(offsetof(TypeBuilder_t1073948154, ___num_methods_13)); }
	inline int32_t get_num_methods_13() const { return ___num_methods_13; }
	inline int32_t* get_address_of_num_methods_13() { return &___num_methods_13; }
	inline void set_num_methods_13(int32_t value)
	{
		___num_methods_13 = value;
	}

	inline static int32_t get_offset_of_methods_14() { return static_cast<int32_t>(offsetof(TypeBuilder_t1073948154, ___methods_14)); }
	inline MethodBuilderU5BU5D_t3705301900* get_methods_14() const { return ___methods_14; }
	inline MethodBuilderU5BU5D_t3705301900** get_address_of_methods_14() { return &___methods_14; }
	inline void set_methods_14(MethodBuilderU5BU5D_t3705301900* value)
	{
		___methods_14 = value;
		Il2CppCodeGenWriteBarrier(&___methods_14, value);
	}

	inline static int32_t get_offset_of_ctors_15() { return static_cast<int32_t>(offsetof(TypeBuilder_t1073948154, ___ctors_15)); }
	inline ConstructorBuilderU5BU5D_t3223009221* get_ctors_15() const { return ___ctors_15; }
	inline ConstructorBuilderU5BU5D_t3223009221** get_address_of_ctors_15() { return &___ctors_15; }
	inline void set_ctors_15(ConstructorBuilderU5BU5D_t3223009221* value)
	{
		___ctors_15 = value;
		Il2CppCodeGenWriteBarrier(&___ctors_15, value);
	}

	inline static int32_t get_offset_of_properties_16() { return static_cast<int32_t>(offsetof(TypeBuilder_t1073948154, ___properties_16)); }
	inline PropertyBuilderU5BU5D_t4023329206* get_properties_16() const { return ___properties_16; }
	inline PropertyBuilderU5BU5D_t4023329206** get_address_of_properties_16() { return &___properties_16; }
	inline void set_properties_16(PropertyBuilderU5BU5D_t4023329206* value)
	{
		___properties_16 = value;
		Il2CppCodeGenWriteBarrier(&___properties_16, value);
	}

	inline static int32_t get_offset_of_fields_17() { return static_cast<int32_t>(offsetof(TypeBuilder_t1073948154, ___fields_17)); }
	inline FieldBuilderU5BU5D_t138311604* get_fields_17() const { return ___fields_17; }
	inline FieldBuilderU5BU5D_t138311604** get_address_of_fields_17() { return &___fields_17; }
	inline void set_fields_17(FieldBuilderU5BU5D_t138311604* value)
	{
		___fields_17 = value;
		Il2CppCodeGenWriteBarrier(&___fields_17, value);
	}

	inline static int32_t get_offset_of_attrs_18() { return static_cast<int32_t>(offsetof(TypeBuilder_t1073948154, ___attrs_18)); }
	inline int32_t get_attrs_18() const { return ___attrs_18; }
	inline int32_t* get_address_of_attrs_18() { return &___attrs_18; }
	inline void set_attrs_18(int32_t value)
	{
		___attrs_18 = value;
	}

	inline static int32_t get_offset_of_table_idx_19() { return static_cast<int32_t>(offsetof(TypeBuilder_t1073948154, ___table_idx_19)); }
	inline int32_t get_table_idx_19() const { return ___table_idx_19; }
	inline int32_t* get_address_of_table_idx_19() { return &___table_idx_19; }
	inline void set_table_idx_19(int32_t value)
	{
		___table_idx_19 = value;
	}

	inline static int32_t get_offset_of_pmodule_20() { return static_cast<int32_t>(offsetof(TypeBuilder_t1073948154, ___pmodule_20)); }
	inline ModuleBuilder_t731887691 * get_pmodule_20() const { return ___pmodule_20; }
	inline ModuleBuilder_t731887691 ** get_address_of_pmodule_20() { return &___pmodule_20; }
	inline void set_pmodule_20(ModuleBuilder_t731887691 * value)
	{
		___pmodule_20 = value;
		Il2CppCodeGenWriteBarrier(&___pmodule_20, value);
	}

	inline static int32_t get_offset_of_class_size_21() { return static_cast<int32_t>(offsetof(TypeBuilder_t1073948154, ___class_size_21)); }
	inline int32_t get_class_size_21() const { return ___class_size_21; }
	inline int32_t* get_address_of_class_size_21() { return &___class_size_21; }
	inline void set_class_size_21(int32_t value)
	{
		___class_size_21 = value;
	}

	inline static int32_t get_offset_of_generic_params_22() { return static_cast<int32_t>(offsetof(TypeBuilder_t1073948154, ___generic_params_22)); }
	inline GenericTypeParameterBuilderU5BU5D_t3780444109* get_generic_params_22() const { return ___generic_params_22; }
	inline GenericTypeParameterBuilderU5BU5D_t3780444109** get_address_of_generic_params_22() { return &___generic_params_22; }
	inline void set_generic_params_22(GenericTypeParameterBuilderU5BU5D_t3780444109* value)
	{
		___generic_params_22 = value;
		Il2CppCodeGenWriteBarrier(&___generic_params_22, value);
	}

	inline static int32_t get_offset_of_created_23() { return static_cast<int32_t>(offsetof(TypeBuilder_t1073948154, ___created_23)); }
	inline Type_t * get_created_23() const { return ___created_23; }
	inline Type_t ** get_address_of_created_23() { return &___created_23; }
	inline void set_created_23(Type_t * value)
	{
		___created_23 = value;
		Il2CppCodeGenWriteBarrier(&___created_23, value);
	}

	inline static int32_t get_offset_of_fullname_24() { return static_cast<int32_t>(offsetof(TypeBuilder_t1073948154, ___fullname_24)); }
	inline String_t* get_fullname_24() const { return ___fullname_24; }
	inline String_t** get_address_of_fullname_24() { return &___fullname_24; }
	inline void set_fullname_24(String_t* value)
	{
		___fullname_24 = value;
		Il2CppCodeGenWriteBarrier(&___fullname_24, value);
	}

	inline static int32_t get_offset_of_createTypeCalled_25() { return static_cast<int32_t>(offsetof(TypeBuilder_t1073948154, ___createTypeCalled_25)); }
	inline bool get_createTypeCalled_25() const { return ___createTypeCalled_25; }
	inline bool* get_address_of_createTypeCalled_25() { return &___createTypeCalled_25; }
	inline void set_createTypeCalled_25(bool value)
	{
		___createTypeCalled_25 = value;
	}

	inline static int32_t get_offset_of_underlying_type_26() { return static_cast<int32_t>(offsetof(TypeBuilder_t1073948154, ___underlying_type_26)); }
	inline Type_t * get_underlying_type_26() const { return ___underlying_type_26; }
	inline Type_t ** get_address_of_underlying_type_26() { return &___underlying_type_26; }
	inline void set_underlying_type_26(Type_t * value)
	{
		___underlying_type_26 = value;
		Il2CppCodeGenWriteBarrier(&___underlying_type_26, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
