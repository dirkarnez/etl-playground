///\file

/******************************************************************************
The MIT License(MIT)

Embedded Template Library.
https://github.com/ETLCPP/etl
https://www.etlcpp.com

Copyright(c) 2020 jwellbelove

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files(the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and / or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions :

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.
******************************************************************************/

#ifndef __ETL_PROFILE_H__
#define __ETL_PROFILE_H__

/* #define ETL_THROW_EXCEPTIONS */
#define ETL_VERBOSE_ERRORS

#define ETL_CHECK_PUSH_POP


// #define ETL_CPP11_TYPE_TRAITS_IS_TRIVIAL_SUPPORTED 0

#define ETL_USER_DEFINED_TYPE_TRAITS 0

#define ETL_NO_STL

// 8-Bit AVR specficic
#define ETL_NO_CPP_NAN_SUPPORT 1
// #define ETL_NO_HUGE_VAL_SUPPORT 1
// #define ETL_NO_SMALL_CHAR_SUPPORT 1


#define ETL_NO_LARGE_CHAR_SUPPORT 0



#define ETL_USING_STD_NEW 0



#define ETL_TARGET_DEVICE_GENERIC
#define ETL_TARGET_OS_NONE
#define ETL_COMPILER_GCC

#define ETL_CPP11_SUPPORTED 0
#define ETL_CPP14_SUPPORTED 0
#define ETL_CPP17_SUPPORTED 0

// #define ETL_NO_NULLPTR_SUPPORT    1
// #define ETL_NO_LARGE_CHAR_SUPPORT 1
#define ETL_USE_TYPE_TRAITS_BUILTINS 0

#define ETL_CROSS_COMPILING_TO_AVR 1


#define ETL_CPP20_SUPPORTED 0

// #if defined(_MSC_VER)
//   #include "etl/profiles/msvc_x86.h"
// #elif defined(__GNUC__)
//   #include "etl/profiles/gcc_generic.h"
// #endif

#endif
