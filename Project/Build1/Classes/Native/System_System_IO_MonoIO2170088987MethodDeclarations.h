﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>


#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "System_System_IO_MonoIOError733012845.h"

// System.Boolean System.IO.MonoIO::Close(System.IntPtr,System.IO.MonoIOError&)
extern "C"  bool MonoIO_Close_m3013717270 (Il2CppObject * __this /* static, unused */, IntPtr_t ___handle0, int32_t* ___error1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr System.IO.MonoIO::get_ConsoleOutput()
extern "C"  IntPtr_t MonoIO_get_ConsoleOutput_m804698052 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr System.IO.MonoIO::get_ConsoleInput()
extern "C"  IntPtr_t MonoIO_get_ConsoleInput_m475674117 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr System.IO.MonoIO::get_ConsoleError()
extern "C"  IntPtr_t MonoIO_get_ConsoleError_m1472486747 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.IO.MonoIO::CreatePipe(System.IntPtr&,System.IntPtr&)
extern "C"  bool MonoIO_CreatePipe_m1432082428 (Il2CppObject * __this /* static, unused */, IntPtr_t* ___read_handle0, IntPtr_t* ___write_handle1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.IO.MonoIO::DuplicateHandle(System.IntPtr,System.IntPtr,System.IntPtr,System.IntPtr&,System.Int32,System.Int32,System.Int32)
extern "C"  bool MonoIO_DuplicateHandle_m802347778 (Il2CppObject * __this /* static, unused */, IntPtr_t ___source_process_handle0, IntPtr_t ___source_handle1, IntPtr_t ___target_process_handle2, IntPtr_t* ___target_handle3, int32_t ___access4, int32_t ___inherit5, int32_t ___options6, const MethodInfo* method) IL2CPP_METHOD_ATTR;
