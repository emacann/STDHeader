#pragma once

#ifndef _SIZE_H
#define _SIZE_H

////////////////////////////////////////////////////////////////////////////////
/// Collision avoidance ////////////////////////////////////////////////////////

#ifndef _STDINT
#define _STDINT

////////////////////////////////////////////////////////////////////////////////
/// Arch check /////////////////////////////////////////////////////////////////

/// Windows
#if (_WIN32 || _WIN64)
#if _WIN64
#define ENV_64
#else
#define ENV_32
#endif
#endif

/// GCC
#if __GNUC__
#if __x86_64__ || __ppc64__
#define ENV_64
#else
#define ENV_32
#endif
#endif

#if !defined(ENV_32) && !defined(ENV_64)
#error Unrecognized environment.
#endif // (ENV_32 || ENV_64)

////////////////////////////////////////////////////////////////////////////////
/// Integer types //////////////////////////////////////////////////////////////

typedef signed char         int8_t;
typedef unsigned char       uint8_t;
typedef signed short        int16_t;
typedef unsigned short      uint16_t;
typedef signed int          int32_t;
typedef unsigned int        uint32_t;
typedef signed long long    int64_t;
typedef unsigned long long  uint64_t;

typedef int64_t             intmax_t;
typedef uint64_t            uintmax_t;

////////////////////////////////////////////////////////////////////////////////
/// Defines ////////////////////////////////////////////////////////////////////

#define	INT8_MAX            (127i8)
#define	INT8_MIN            (-INT8_MAX - 1)
#define	UINT8_MAX           (0xFFui8)

#define	INT16_MAX           (32767i16)
#define	INT16_MIN           (-INT16_MAX - 1)
#define	UINT16_MAX          (0xFFFFui16)

#define	INT32_MAX           (2147483647i32)
#define	INT32_MIN           (-INT32_MAX - 1)
#define	UINT32_MAX          (0xFFFFFFFFui32)

#define	INT64_MAX           (9223372036854775807i64)
#define	INT64_MIN           (-INT64_MAX - 1)
#define	UINT64_MAX          (0xFFFFFFFFFFFFFFFFui64)

////////////////////////////////////////////////////////////////////////////////
/// Size type //////////////////////////////////////////////////////////////////

#ifndef _SIZE_T_DEFINED
#define _SIZE_T_DEFINED
#if defined(ENV_64)
typedef uint64_t            size_t;
#define SIZE_T_MAX          UINT64_MAX
#elif defined(ENV_32)
typedef uint32_t            size_t;
#define SIZE_T_MAX          UINT32_MAX
#endif // !ENV_64
#endif // !_SIZE_T_DEFINED

////////////////////////////////////////////////////////////////////////////////
/// Pointer type ///////////////////////////////////////////////////////////////

typedef void *              ptr_t;

#ifndef _INTPTR_T_DEFINED
#define _INTPTR_T_DEFINED
#if defined(ENV_64)
typedef int64_t             intptr_t;
#elif defined(ENV_32)
typedef int32_t             intptr_t;
#endif // !ENV_64
#endif // !_INTPTR_T_DEFINED

#ifndef _UINTPTR_T_DEFINED
#define _UINTPTR_T_DEFINED
#if defined(ENV_64)
typedef uint64_t            uintptr_t;
#elif defined(ENV_32)
typedef uint32_t            uintptr_t;
#endif // !ENV_64
#endif // !_UINTPTR_T_DEFINED

////////////////////////////////////////////////////////////////////////////////
/// Macros /////////////////////////////////////////////////////////////////////

#define INT8_C(x)           (x)
#define UINT8_C(x)          (x)

#define INT16_C(x)          (x)
#define UINT16_C(x)         (x)

#define INT32_C(x)          (x)
#define UINT32_C(x)         (x ## u)

#define INT64_C(x)          (x ## ll)
#define UINT64_C(x)         (x ## ull)

#define INTMAX_C(x)         INT64_C(x)
#define UINTMAX_C(x)        UINT64_C(x)

#endif // !_STDINT
#endif // !_SIZE_H
