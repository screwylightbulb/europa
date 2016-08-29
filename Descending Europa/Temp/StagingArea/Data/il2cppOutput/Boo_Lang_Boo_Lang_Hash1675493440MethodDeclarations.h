#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// Boo.Lang.Hash
struct Hash_t1675493440;
// System.Collections.IDictionary
struct IDictionary_t537317817;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2185721892;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_Serializatio2185721892.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCon2761351129.h"
#include "mscorlib_System_Object4170816371.h"
#include "Boo_Lang_Boo_Lang_Hash1675493440.h"

// System.Void Boo.Lang.Hash::.ctor()
extern "C"  void Hash__ctor_m1609436829 (Hash_t1675493440 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Boo.Lang.Hash::.ctor(System.Collections.IDictionary)
extern "C"  void Hash__ctor_m1038958678 (Hash_t1675493440 * __this, Il2CppObject * ___other0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Boo.Lang.Hash::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void Hash__ctor_m4263283294 (Hash_t1675493440 * __this, SerializationInfo_t2185721892 * ___info0, StreamingContext_t2761351129  ___context1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Boo.Lang.Hash::Clone()
extern "C"  Il2CppObject * Hash_Clone_m1607780301 (Hash_t1675493440 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Boo.Lang.Hash::Equals(System.Object)
extern "C"  bool Hash_Equals_m2555972250 (Hash_t1675493440 * __this, Il2CppObject * ___other0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Boo.Lang.Hash::Equals(Boo.Lang.Hash)
extern "C"  bool Hash_Equals_m924041014 (Hash_t1675493440 * __this, Hash_t1675493440 * ___other0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Boo.Lang.Hash::GetHashCode()
extern "C"  int32_t Hash_GetHashCode_m1913256370 (Hash_t1675493440 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
