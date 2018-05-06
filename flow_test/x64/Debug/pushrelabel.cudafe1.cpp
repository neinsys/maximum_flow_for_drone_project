#line 1 "c:/Users/nein/source/repos/flow_test/flow_test/pushrelabel.cu"
#pragma section("__nv_managed_data__")
#line 1
static char __nv_inited_managed_rt = 0; static void **__nv_fatbinhandle_for_managed_rt; static void __nv_save_fatbinhandle_for_managed_rt(void **in){__nv_fatbinhandle_for_managed_rt = in;} static char __nv_init_managed_rt_with_module(void **); static inline void __nv_init_managed_rt(void) { __nv_inited_managed_rt = (__nv_inited_managed_rt ? __nv_inited_managed_rt                 : __nv_init_managed_rt_with_module(__nv_fatbinhandle_for_managed_rt));}
#line 1
#define __nv_is_extended_device_lambda_closure_type(X) false
#define __nv_is_extended_host_device_lambda_closure_type(X) false

#line 1
#line 62 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v9.1\\include\\cuda_runtime.h"
#pragma warning(push)
#pragma warning(disable: 4820)
#line 708 "C:\\Program Files (x86)\\Microsoft Visual Studio 14.0\\VC\\include\\sal.h"
#pragma region Input Buffer SAL 1 compatibility macros
#line 1472
#pragma endregion Input Buffer SAL 1 compatibility macros
#line 2361 "C:\\Program Files (x86)\\Microsoft Visual Studio 14.0\\VC\\include\\sal.h"
extern "C" {
#line 2967 "C:\\Program Files (x86)\\Microsoft Visual Studio 14.0\\VC\\include\\sal.h"
}
#line 22 "C:\\Program Files (x86)\\Microsoft Visual Studio 14.0\\VC\\include\\ConcurrencySal.h"
extern "C" {
#line 354 "C:\\Program Files (x86)\\Microsoft Visual Studio 14.0\\VC\\include\\ConcurrencySal.h"
}
#line 15 "C:\\Program Files (x86)\\Microsoft Visual Studio 14.0\\VC\\include\\vadefs.h"
#pragma pack ( push, 8 )
#line 18
extern "C" {
#line 28 "C:\\Program Files (x86)\\Microsoft Visual Studio 14.0\\VC\\include\\vadefs.h"
typedef unsigned __int64 uintptr_t; 
#line 39 "C:\\Program Files (x86)\\Microsoft Visual Studio 14.0\\VC\\include\\vadefs.h"
typedef char *va_list; 
#line 106 "C:\\Program Files (x86)\\Microsoft Visual Studio 14.0\\VC\\include\\vadefs.h"
void __cdecl __va_start(va_list *, ...); 
#line 118 "C:\\Program Files (x86)\\Microsoft Visual Studio 14.0\\VC\\include\\vadefs.h"
}
#line 122 "C:\\Program Files (x86)\\Microsoft Visual Studio 14.0\\VC\\include\\vadefs.h"
extern "C++" {
#line 124
template< class _Ty> 
#line 125
struct __vcrt_va_list_is_reference { 
#line 127
enum: bool { __the_value}; 
#line 128
}; 
#line 130
template< class _Ty> 
#line 131
struct __vcrt_va_list_is_reference< _Ty &>  { 
#line 133
enum: bool { __the_value = '\001'}; 
#line 134
}; 
#line 136
template< class _Ty> 
#line 137
struct __vcrt_va_list_is_reference< _Ty &&>  { 
#line 139
enum: bool { __the_value = '\001'}; 
#line 140
}; 
#line 142
template < typename _Ty >
        void __vcrt_va_start_verify_argument_type ( ) throw ( )
        {
            static_assert ( ! __vcrt_va_list_is_reference < _Ty > :: __the_value, "va_start argument must not have reference type and must not be parenthesized" );
        }
#line 147
}
#line 157 "C:\\Program Files (x86)\\Microsoft Visual Studio 14.0\\VC\\include\\vadefs.h"
#pragma pack ( pop )
#line 81 "C:\\Program Files (x86)\\Microsoft Visual Studio 14.0\\VC\\include\\vcruntime.h"
__pragma( pack ( push, 8 )) extern "C" {
#line 194 "C:\\Program Files (x86)\\Microsoft Visual Studio 14.0\\VC\\include\\vcruntime.h"
typedef unsigned __int64 size_t; 
#include "crt/host_runtime.h"
#line 195
typedef __int64 ptrdiff_t; 
#line 196
typedef __int64 intptr_t; 
#line 204 "C:\\Program Files (x86)\\Microsoft Visual Studio 14.0\\VC\\include\\vcruntime.h"
typedef bool __vcrt_bool; 
#line 247 "C:\\Program Files (x86)\\Microsoft Visual Studio 14.0\\VC\\include\\vcruntime.h"
extern "C++" {
#line 249
template< class _CountofType, size_t _SizeOfArray> char (*__countof_helper(__unaligned _CountofType (& _Array)[_SizeOfArray]))[_SizeOfArray]; 
#line 253
}
#line 298 "C:\\Program Files (x86)\\Microsoft Visual Studio 14.0\\VC\\include\\vcruntime.h"
void __cdecl __security_init_cookie(); 
#line 304
void __cdecl __security_check_cookie(uintptr_t _StackCookie); 
#line 305
__declspec(noreturn) void __cdecl __report_gsfailure(uintptr_t _StackCookie); 
#line 309 "C:\\Program Files (x86)\\Microsoft Visual Studio 14.0\\VC\\include\\vcruntime.h"
extern uintptr_t __security_cookie; 
#line 317 "C:\\Program Files (x86)\\Microsoft Visual Studio 14.0\\VC\\include\\vcruntime.h"
}__pragma( pack ( pop )) 
#line 12 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.16299.0\\ucrt\\corecrt.h"
__pragma( pack ( push, 8 )) extern "C" {
#line 125 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.16299.0\\ucrt\\corecrt.h"
extern "C++" {
#line 127
template< bool _Enable, class _Ty> struct _CrtEnableIf; 
#line 130
template< class _Ty> 
#line 131
struct _CrtEnableIf< true, _Ty>  { 
#line 133
typedef _Ty _Type; 
#line 134
}; 
#line 135
}
#line 139 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.16299.0\\ucrt\\corecrt.h"
typedef bool __crt_bool; 
#line 244 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.16299.0\\ucrt\\corecrt.h"
__declspec(dllimport) void __cdecl _invalid_parameter(const __wchar_t *, const __wchar_t *, const __wchar_t *, unsigned, uintptr_t); 
#line 253 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.16299.0\\ucrt\\corecrt.h"
__declspec(dllimport) void __cdecl _invalid_parameter_noinfo(); 
#line 254
__declspec(dllimport) __declspec(noreturn) void __cdecl _invalid_parameter_noinfo_noreturn(); 
#line 256
__declspec(noreturn) 
#line 257
__declspec(dllimport) void __cdecl _invoke_watson(const __wchar_t * _Expression, const __wchar_t * _FunctionName, const __wchar_t * _FileName, unsigned _LineNo, uintptr_t _Reserved); 
#line 482 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.16299.0\\ucrt\\corecrt.h"
typedef int errno_t; 
#line 483
typedef unsigned short wint_t; 
#line 484
typedef unsigned short wctype_t; 
#line 485
typedef long __time32_t; 
#line 486
typedef __int64 __time64_t; 
#line 493
typedef 
#line 488
struct __crt_locale_data_public { 
#line 490
const unsigned short *_locale_pctype; 
#line 491
int _locale_mb_cur_max; 
#line 492
unsigned _locale_lc_codepage; 
#line 493
} __crt_locale_data_public; 
#line 499
typedef 
#line 495
struct __crt_locale_pointers { 
#line 497
struct __crt_locale_data *locinfo; 
#line 498
struct __crt_multibyte_data *mbcinfo; 
#line 499
} __crt_locale_pointers; 
#line 501
typedef __crt_locale_pointers *_locale_t; 
#line 507
typedef 
#line 503
struct _Mbstatet { 
#line 505
unsigned long _Wchar; 
#line 506
unsigned short _Byte, _State; 
#line 507
} _Mbstatet; 
#line 509
typedef _Mbstatet mbstate_t; 
#line 523 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.16299.0\\ucrt\\corecrt.h"
typedef __time64_t time_t; 
#line 533 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.16299.0\\ucrt\\corecrt.h"
typedef size_t rsize_t; 
#line 1982 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.16299.0\\ucrt\\corecrt.h"
}__pragma( pack ( pop )) 
#line 61 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\device_types.h"
#if 0
#line 61
enum cudaRoundMode { 
#line 63
cudaRoundNearest, 
#line 64
cudaRoundZero, 
#line 65
cudaRoundPosInf, 
#line 66
cudaRoundMinInf
#line 67
}; 
#endif
#line 93 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\vector_types.h"
#if 0
#line 93
struct char1 { 
#line 95
signed char x; 
#line 96
}; 
#endif
#line 98 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\vector_types.h"
#if 0
#line 98
struct uchar1 { 
#line 100
unsigned char x; 
#line 101
}; 
#endif
#line 104 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\vector_types.h"
#if 0
#line 104
struct __declspec(align(2)) char2 { 
#line 106
signed char x, y; 
#line 107
}; 
#endif
#line 109 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\vector_types.h"
#if 0
#line 109
struct __declspec(align(2)) uchar2 { 
#line 111
unsigned char x, y; 
#line 112
}; 
#endif
#line 114 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\vector_types.h"
#if 0
#line 114
struct char3 { 
#line 116
signed char x, y, z; 
#line 117
}; 
#endif
#line 119 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\vector_types.h"
#if 0
#line 119
struct uchar3 { 
#line 121
unsigned char x, y, z; 
#line 122
}; 
#endif
#line 124 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\vector_types.h"
#if 0
#line 124
struct __declspec(align(4)) char4 { 
#line 126
signed char x, y, z, w; 
#line 127
}; 
#endif
#line 129 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\vector_types.h"
#if 0
#line 129
struct __declspec(align(4)) uchar4 { 
#line 131
unsigned char x, y, z, w; 
#line 132
}; 
#endif
#line 134 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\vector_types.h"
#if 0
#line 134
struct short1 { 
#line 136
short x; 
#line 137
}; 
#endif
#line 139 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\vector_types.h"
#if 0
#line 139
struct ushort1 { 
#line 141
unsigned short x; 
#line 142
}; 
#endif
#line 144 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\vector_types.h"
#if 0
#line 144
struct __declspec(align(4)) short2 { 
#line 146
short x, y; 
#line 147
}; 
#endif
#line 149 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\vector_types.h"
#if 0
#line 149
struct __declspec(align(4)) ushort2 { 
#line 151
unsigned short x, y; 
#line 152
}; 
#endif
#line 154 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\vector_types.h"
#if 0
#line 154
struct short3 { 
#line 156
short x, y, z; 
#line 157
}; 
#endif
#line 159 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\vector_types.h"
#if 0
#line 159
struct ushort3 { 
#line 161
unsigned short x, y, z; 
#line 162
}; 
#endif
#line 164 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\vector_types.h"
#if 0
#line 164
struct __declspec(align(8)) short4 { short x; short y; short z; short w; }; 
#endif
#line 165 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\vector_types.h"
#if 0
#line 165
struct __declspec(align(8)) ushort4 { unsigned short x; unsigned short y; unsigned short z; unsigned short w; }; 
#endif
#line 167 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\vector_types.h"
#if 0
#line 167
struct int1 { 
#line 169
int x; 
#line 170
}; 
#endif
#line 172 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\vector_types.h"
#if 0
#line 172
struct uint1 { 
#line 174
unsigned x; 
#line 175
}; 
#endif
#line 177 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\vector_types.h"
#if 0
#line 177
struct __declspec(align(8)) int2 { int x; int y; }; 
#endif
#line 178 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\vector_types.h"
#if 0
#line 178
struct __declspec(align(8)) uint2 { unsigned x; unsigned y; }; 
#endif
#line 180 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\vector_types.h"
#if 0
#line 180
struct int3 { 
#line 182
int x, y, z; 
#line 183
}; 
#endif
#line 185 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\vector_types.h"
#if 0
#line 185
struct uint3 { 
#line 187
unsigned x, y, z; 
#line 188
}; 
#endif
#line 190 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\vector_types.h"
#if 0
#line 190
struct __declspec(align(16)) int4 { 
#line 192
int x, y, z, w; 
#line 193
}; 
#endif
#line 195 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\vector_types.h"
#if 0
#line 195
struct __declspec(align(16)) uint4 { 
#line 197
unsigned x, y, z, w; 
#line 198
}; 
#endif
#line 200 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\vector_types.h"
#if 0
#line 200
struct long1 { 
#line 202
long x; 
#line 203
}; 
#endif
#line 205 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\vector_types.h"
#if 0
#line 205
struct ulong1 { 
#line 207
unsigned long x; 
#line 208
}; 
#endif
#line 211 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\vector_types.h"
#if 0
#line 211
struct __declspec(align(8)) long2 { long x; long y; }; 
#endif
#line 212 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\vector_types.h"
#if 0
#line 212
struct __declspec(align(8)) ulong2 { unsigned long x; unsigned long y; }; 
#endif
#line 227 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\vector_types.h"
#if 0
#line 227
struct long3 { 
#line 229
long x, y, z; 
#line 230
}; 
#endif
#line 232 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\vector_types.h"
#if 0
#line 232
struct ulong3 { 
#line 234
unsigned long x, y, z; 
#line 235
}; 
#endif
#line 237 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\vector_types.h"
#if 0
#line 237
struct __declspec(align(16)) long4 { 
#line 239
long x, y, z, w; 
#line 240
}; 
#endif
#line 242 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\vector_types.h"
#if 0
#line 242
struct __declspec(align(16)) ulong4 { 
#line 244
unsigned long x, y, z, w; 
#line 245
}; 
#endif
#line 247 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\vector_types.h"
#if 0
#line 247
struct float1 { 
#line 249
float x; 
#line 250
}; 
#endif
#line 269 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\vector_types.h"
#if 0
#line 269
struct __declspec(align(8)) float2 { float x; float y; }; 
#endif
#line 274 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\vector_types.h"
#if 0
#line 274
struct float3 { 
#line 276
float x, y, z; 
#line 277
}; 
#endif
#line 279 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\vector_types.h"
#if 0
#line 279
struct __declspec(align(16)) float4 { 
#line 281
float x, y, z, w; 
#line 282
}; 
#endif
#line 284 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\vector_types.h"
#if 0
#line 284
struct longlong1 { 
#line 286
__int64 x; 
#line 287
}; 
#endif
#line 289 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\vector_types.h"
#if 0
#line 289
struct ulonglong1 { 
#line 291
unsigned __int64 x; 
#line 292
}; 
#endif
#line 294 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\vector_types.h"
#if 0
#line 294
struct __declspec(align(16)) longlong2 { 
#line 296
__int64 x, y; 
#line 297
}; 
#endif
#line 299 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\vector_types.h"
#if 0
#line 299
struct __declspec(align(16)) ulonglong2 { 
#line 301
unsigned __int64 x, y; 
#line 302
}; 
#endif
#line 304 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\vector_types.h"
#if 0
#line 304
struct longlong3 { 
#line 306
__int64 x, y, z; 
#line 307
}; 
#endif
#line 309 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\vector_types.h"
#if 0
#line 309
struct ulonglong3 { 
#line 311
unsigned __int64 x, y, z; 
#line 312
}; 
#endif
#line 314 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\vector_types.h"
#if 0
#line 314
struct __declspec(align(16)) longlong4 { 
#line 316
__int64 x, y, z, w; 
#line 317
}; 
#endif
#line 319 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\vector_types.h"
#if 0
#line 319
struct __declspec(align(16)) ulonglong4 { 
#line 321
unsigned __int64 x, y, z, w; 
#line 322
}; 
#endif
#line 324 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\vector_types.h"
#if 0
#line 324
struct double1 { 
#line 326
double x; 
#line 327
}; 
#endif
#line 329 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\vector_types.h"
#if 0
#line 329
struct __declspec(align(16)) double2 { 
#line 331
double x, y; 
#line 332
}; 
#endif
#line 334 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\vector_types.h"
#if 0
#line 334
struct double3 { 
#line 336
double x, y, z; 
#line 337
}; 
#endif
#line 339 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\vector_types.h"
#if 0
#line 339
struct __declspec(align(16)) double4 { 
#line 341
double x, y, z, w; 
#line 342
}; 
#endif
#line 356 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\vector_types.h"
#if 0
typedef char1 
#line 356
char1; 
#endif
#line 357 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\vector_types.h"
#if 0
typedef uchar1 
#line 357
uchar1; 
#endif
#line 358 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\vector_types.h"
#if 0
typedef char2 
#line 358
char2; 
#endif
#line 359 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\vector_types.h"
#if 0
typedef uchar2 
#line 359
uchar2; 
#endif
#line 360 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\vector_types.h"
#if 0
typedef char3 
#line 360
char3; 
#endif
#line 361 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\vector_types.h"
#if 0
typedef uchar3 
#line 361
uchar3; 
#endif
#line 362 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\vector_types.h"
#if 0
typedef char4 
#line 362
char4; 
#endif
#line 363 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\vector_types.h"
#if 0
typedef uchar4 
#line 363
uchar4; 
#endif
#line 364 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\vector_types.h"
#if 0
typedef short1 
#line 364
short1; 
#endif
#line 365 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\vector_types.h"
#if 0
typedef ushort1 
#line 365
ushort1; 
#endif
#line 366 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\vector_types.h"
#if 0
typedef short2 
#line 366
short2; 
#endif
#line 367 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\vector_types.h"
#if 0
typedef ushort2 
#line 367
ushort2; 
#endif
#line 368 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\vector_types.h"
#if 0
typedef short3 
#line 368
short3; 
#endif
#line 369 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\vector_types.h"
#if 0
typedef ushort3 
#line 369
ushort3; 
#endif
#line 370 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\vector_types.h"
#if 0
typedef short4 
#line 370
short4; 
#endif
#line 371 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\vector_types.h"
#if 0
typedef ushort4 
#line 371
ushort4; 
#endif
#line 372 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\vector_types.h"
#if 0
typedef int1 
#line 372
int1; 
#endif
#line 373 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\vector_types.h"
#if 0
typedef uint1 
#line 373
uint1; 
#endif
#line 374 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\vector_types.h"
#if 0
typedef int2 
#line 374
int2; 
#endif
#line 375 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\vector_types.h"
#if 0
typedef uint2 
#line 375
uint2; 
#endif
#line 376 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\vector_types.h"
#if 0
typedef int3 
#line 376
int3; 
#endif
#line 377 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\vector_types.h"
#if 0
typedef uint3 
#line 377
uint3; 
#endif
#line 378 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\vector_types.h"
#if 0
typedef int4 
#line 378
int4; 
#endif
#line 379 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\vector_types.h"
#if 0
typedef uint4 
#line 379
uint4; 
#endif
#line 380 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\vector_types.h"
#if 0
typedef long1 
#line 380
long1; 
#endif
#line 381 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\vector_types.h"
#if 0
typedef ulong1 
#line 381
ulong1; 
#endif
#line 382 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\vector_types.h"
#if 0
typedef long2 
#line 382
long2; 
#endif
#line 383 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\vector_types.h"
#if 0
typedef ulong2 
#line 383
ulong2; 
#endif
#line 384 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\vector_types.h"
#if 0
typedef long3 
#line 384
long3; 
#endif
#line 385 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\vector_types.h"
#if 0
typedef ulong3 
#line 385
ulong3; 
#endif
#line 386 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\vector_types.h"
#if 0
typedef long4 
#line 386
long4; 
#endif
#line 387 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\vector_types.h"
#if 0
typedef ulong4 
#line 387
ulong4; 
#endif
#line 388 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\vector_types.h"
#if 0
typedef float1 
#line 388
float1; 
#endif
#line 389 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\vector_types.h"
#if 0
typedef float2 
#line 389
float2; 
#endif
#line 390 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\vector_types.h"
#if 0
typedef float3 
#line 390
float3; 
#endif
#line 391 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\vector_types.h"
#if 0
typedef float4 
#line 391
float4; 
#endif
#line 392 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\vector_types.h"
#if 0
typedef longlong1 
#line 392
longlong1; 
#endif
#line 393 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\vector_types.h"
#if 0
typedef ulonglong1 
#line 393
ulonglong1; 
#endif
#line 394 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\vector_types.h"
#if 0
typedef longlong2 
#line 394
longlong2; 
#endif
#line 395 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\vector_types.h"
#if 0
typedef ulonglong2 
#line 395
ulonglong2; 
#endif
#line 396 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\vector_types.h"
#if 0
typedef longlong3 
#line 396
longlong3; 
#endif
#line 397 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\vector_types.h"
#if 0
typedef ulonglong3 
#line 397
ulonglong3; 
#endif
#line 398 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\vector_types.h"
#if 0
typedef longlong4 
#line 398
longlong4; 
#endif
#line 399 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\vector_types.h"
#if 0
typedef ulonglong4 
#line 399
ulonglong4; 
#endif
#line 400 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\vector_types.h"
#if 0
typedef double1 
#line 400
double1; 
#endif
#line 401 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\vector_types.h"
#if 0
typedef double2 
#line 401
double2; 
#endif
#line 402 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\vector_types.h"
#if 0
typedef double3 
#line 402
double3; 
#endif
#line 403 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\vector_types.h"
#if 0
typedef double4 
#line 403
double4; 
#endif
#line 411 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\vector_types.h"
#if 0
#line 411
struct dim3 { 
#line 413
unsigned x, y, z; 
#line 419 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\vector_types.h"
}; 
#endif
#line 421 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\vector_types.h"
#if 0
typedef dim3 
#line 421
dim3; 
#endif
#line 13 "C:\\Program Files (x86)\\Microsoft Visual Studio 14.0\\VC\\include\\limits.h"
__pragma( pack ( push, 8 )) extern "C" {
#line 88 "C:\\Program Files (x86)\\Microsoft Visual Studio 14.0\\VC\\include\\limits.h"
}__pragma( pack ( pop )) 
#line 13 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.16299.0\\ucrt\\stddef.h"
__pragma( pack ( push, 8 )) extern "C" {
#line 18
namespace std { 
#line 20
typedef decltype((__nullptr)) nullptr_t; 
#line 21
}
#line 23
using std::nullptr_t;
#line 30 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.16299.0\\ucrt\\stddef.h"
__declspec(dllimport) int *__cdecl _errno(); 
#line 33
__declspec(dllimport) errno_t __cdecl _set_errno(int _Value); 
#line 34
__declspec(dllimport) errno_t __cdecl _get_errno(int * _Value); 
#line 50 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.16299.0\\ucrt\\stddef.h"
__declspec(dllimport) extern unsigned long __cdecl __threadid(); 
#line 52
__declspec(dllimport) extern uintptr_t __cdecl __threadhandle(); 
#line 56
}__pragma( pack ( pop )) 
#line 171 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\driver_types.h"
#if 0
#line 171
enum cudaError { 
#line 178
cudaSuccess, 
#line 184
cudaErrorMissingConfiguration, 
#line 190
cudaErrorMemoryAllocation, 
#line 196
cudaErrorInitializationError, 
#line 206
cudaErrorLaunchFailure, 
#line 215
cudaErrorPriorLaunchFailure, 
#line 226
cudaErrorLaunchTimeout, 
#line 235
cudaErrorLaunchOutOfResources, 
#line 241
cudaErrorInvalidDeviceFunction, 
#line 250
cudaErrorInvalidConfiguration, 
#line 256
cudaErrorInvalidDevice, 
#line 262
cudaErrorInvalidValue, 
#line 268
cudaErrorInvalidPitchValue, 
#line 274
cudaErrorInvalidSymbol, 
#line 279
cudaErrorMapBufferObjectFailed, 
#line 284
cudaErrorUnmapBufferObjectFailed, 
#line 290
cudaErrorInvalidHostPointer, 
#line 296
cudaErrorInvalidDevicePointer, 
#line 302
cudaErrorInvalidTexture, 
#line 308
cudaErrorInvalidTextureBinding, 
#line 315
cudaErrorInvalidChannelDescriptor, 
#line 321
cudaErrorInvalidMemcpyDirection, 
#line 331
cudaErrorAddressOfConstant, 
#line 340
cudaErrorTextureFetchFailed, 
#line 349
cudaErrorTextureNotBound, 
#line 358
cudaErrorSynchronizationError, 
#line 364
cudaErrorInvalidFilterSetting, 
#line 370
cudaErrorInvalidNormSetting, 
#line 378
cudaErrorMixedDeviceExecution, 
#line 385
cudaErrorCudartUnloading, 
#line 390
cudaErrorUnknown, 
#line 398
cudaErrorNotYetImplemented, 
#line 407
cudaErrorMemoryValueTooLarge, 
#line 414
cudaErrorInvalidResourceHandle, 
#line 422
cudaErrorNotReady, 
#line 429
cudaErrorInsufficientDriver, 
#line 442
cudaErrorSetOnActiveProcess, 
#line 448
cudaErrorInvalidSurface, 
#line 454
cudaErrorNoDevice, 
#line 460
cudaErrorECCUncorrectable, 
#line 465
cudaErrorSharedObjectSymbolNotFound, 
#line 470
cudaErrorSharedObjectInitFailed, 
#line 476
cudaErrorUnsupportedLimit, 
#line 482
cudaErrorDuplicateVariableName, 
#line 488
cudaErrorDuplicateTextureName, 
#line 494
cudaErrorDuplicateSurfaceName, 
#line 504
cudaErrorDevicesUnavailable, 
#line 509
cudaErrorInvalidKernelImage, 
#line 517
cudaErrorNoKernelImageForDevice, 
#line 530
cudaErrorIncompatibleDriverContext, 
#line 537
cudaErrorPeerAccessAlreadyEnabled, 
#line 544
cudaErrorPeerAccessNotEnabled, 
#line 550
cudaErrorDeviceAlreadyInUse = 54, 
#line 557
cudaErrorProfilerDisabled, 
#line 565
cudaErrorProfilerNotInitialized, 
#line 572
cudaErrorProfilerAlreadyStarted, 
#line 579
cudaErrorProfilerAlreadyStopped, 
#line 587
cudaErrorAssert, 
#line 594
cudaErrorTooManyPeers, 
#line 600
cudaErrorHostMemoryAlreadyRegistered, 
#line 606
cudaErrorHostMemoryNotRegistered, 
#line 611
cudaErrorOperatingSystem, 
#line 617
cudaErrorPeerAccessUnsupported, 
#line 624
cudaErrorLaunchMaxDepthExceeded, 
#line 632
cudaErrorLaunchFileScopedTex, 
#line 640
cudaErrorLaunchFileScopedSurf, 
#line 655
cudaErrorSyncDepthExceeded, 
#line 667
cudaErrorLaunchPendingCountExceeded, 
#line 672
cudaErrorNotPermitted, 
#line 678
cudaErrorNotSupported, 
#line 687
cudaErrorHardwareStackError, 
#line 695
cudaErrorIllegalInstruction, 
#line 704
cudaErrorMisalignedAddress, 
#line 715
cudaErrorInvalidAddressSpace, 
#line 723
cudaErrorInvalidPc, 
#line 731
cudaErrorIllegalAddress, 
#line 737
cudaErrorInvalidPtx, 
#line 742
cudaErrorInvalidGraphicsContext, 
#line 748
cudaErrorNvlinkUncorrectable, 
#line 755
cudaErrorJitCompilerNotFound, 
#line 764
cudaErrorCooperativeLaunchTooLarge, 
#line 769
cudaErrorStartupFailure = 127, 
#line 777
cudaErrorApiFailureBase = 10000
#line 778
}; 
#endif
#line 783 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\driver_types.h"
#if 0
#line 783
enum cudaChannelFormatKind { 
#line 785
cudaChannelFormatKindSigned, 
#line 786
cudaChannelFormatKindUnsigned, 
#line 787
cudaChannelFormatKindFloat, 
#line 788
cudaChannelFormatKindNone
#line 789
}; 
#endif
#line 794 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\driver_types.h"
#if 0
#line 794
struct cudaChannelFormatDesc { 
#line 796
int x; 
#line 797
int y; 
#line 798
int z; 
#line 799
int w; 
#line 800
cudaChannelFormatKind f; 
#line 801
}; 
#endif
#line 806 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\driver_types.h"
typedef struct cudaArray *cudaArray_t; 
#line 811
typedef const cudaArray *cudaArray_const_t; 
#line 813
struct cudaArray; 
#line 818
typedef struct cudaMipmappedArray *cudaMipmappedArray_t; 
#line 823
typedef const cudaMipmappedArray *cudaMipmappedArray_const_t; 
#line 825
struct cudaMipmappedArray; 
#line 830
#if 0
#line 830
enum cudaMemoryType { 
#line 832
cudaMemoryTypeHost = 1, 
#line 833
cudaMemoryTypeDevice
#line 834
}; 
#endif
#line 839 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\driver_types.h"
#if 0
#line 839
enum cudaMemcpyKind { 
#line 841
cudaMemcpyHostToHost, 
#line 842
cudaMemcpyHostToDevice, 
#line 843
cudaMemcpyDeviceToHost, 
#line 844
cudaMemcpyDeviceToDevice, 
#line 845
cudaMemcpyDefault
#line 846
}; 
#endif
#line 853 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\driver_types.h"
#if 0
#line 853
struct cudaPitchedPtr { 
#line 855
void *ptr; 
#line 856
size_t pitch; 
#line 857
size_t xsize; 
#line 858
size_t ysize; 
#line 859
}; 
#endif
#line 866 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\driver_types.h"
#if 0
#line 866
struct cudaExtent { 
#line 868
size_t width; 
#line 869
size_t height; 
#line 870
size_t depth; 
#line 871
}; 
#endif
#line 878 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\driver_types.h"
#if 0
#line 878
struct cudaPos { 
#line 880
size_t x; 
#line 881
size_t y; 
#line 882
size_t z; 
#line 883
}; 
#endif
#line 888 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\driver_types.h"
#if 0
#line 888
struct cudaMemcpy3DParms { 
#line 890
cudaArray_t srcArray; 
#line 891
cudaPos srcPos; 
#line 892
cudaPitchedPtr srcPtr; 
#line 894
cudaArray_t dstArray; 
#line 895
cudaPos dstPos; 
#line 896
cudaPitchedPtr dstPtr; 
#line 898
cudaExtent extent; 
#line 899
cudaMemcpyKind kind; __pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)
#line 900
}; 
#endif
#line 905 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\driver_types.h"
#if 0
#line 905
struct cudaMemcpy3DPeerParms { 
#line 907
cudaArray_t srcArray; 
#line 908
cudaPos srcPos; 
#line 909
cudaPitchedPtr srcPtr; 
#line 910
int srcDevice; 
#line 912
cudaArray_t dstArray; 
#line 913
cudaPos dstPos; 
#line 914
cudaPitchedPtr dstPtr; 
#line 915
int dstDevice; 
#line 917
cudaExtent extent; 
#line 918
}; 
#endif
#line 923 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\driver_types.h"
struct cudaGraphicsResource; 
#line 928
#if 0
#line 928
enum cudaGraphicsRegisterFlags { 
#line 930
cudaGraphicsRegisterFlagsNone, 
#line 931
cudaGraphicsRegisterFlagsReadOnly, 
#line 932
cudaGraphicsRegisterFlagsWriteDiscard, 
#line 933
cudaGraphicsRegisterFlagsSurfaceLoadStore = 4, 
#line 934
cudaGraphicsRegisterFlagsTextureGather = 8
#line 935
}; 
#endif
#line 940 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\driver_types.h"
#if 0
#line 940
enum cudaGraphicsMapFlags { 
#line 942
cudaGraphicsMapFlagsNone, 
#line 943
cudaGraphicsMapFlagsReadOnly, 
#line 944
cudaGraphicsMapFlagsWriteDiscard
#line 945
}; 
#endif
#line 950 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\driver_types.h"
#if 0
#line 950
enum cudaGraphicsCubeFace { 
#line 952
cudaGraphicsCubeFacePositiveX, 
#line 953
cudaGraphicsCubeFaceNegativeX, 
#line 954
cudaGraphicsCubeFacePositiveY, 
#line 955
cudaGraphicsCubeFaceNegativeY, 
#line 956
cudaGraphicsCubeFacePositiveZ, 
#line 957
cudaGraphicsCubeFaceNegativeZ
#line 958
}; 
#endif
#line 963 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\driver_types.h"
#if 0
#line 963
enum cudaResourceType { 
#line 965
cudaResourceTypeArray, 
#line 966
cudaResourceTypeMipmappedArray, 
#line 967
cudaResourceTypeLinear, 
#line 968
cudaResourceTypePitch2D
#line 969
}; 
#endif
#line 974 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\driver_types.h"
#if 0
#line 974
enum cudaResourceViewFormat { 
#line 976
cudaResViewFormatNone, 
#line 977
cudaResViewFormatUnsignedChar1, 
#line 978
cudaResViewFormatUnsignedChar2, 
#line 979
cudaResViewFormatUnsignedChar4, 
#line 980
cudaResViewFormatSignedChar1, 
#line 981
cudaResViewFormatSignedChar2, 
#line 982
cudaResViewFormatSignedChar4, 
#line 983
cudaResViewFormatUnsignedShort1, 
#line 984
cudaResViewFormatUnsignedShort2, 
#line 985
cudaResViewFormatUnsignedShort4, 
#line 986
cudaResViewFormatSignedShort1, 
#line 987
cudaResViewFormatSignedShort2, 
#line 988
cudaResViewFormatSignedShort4, 
#line 989
cudaResViewFormatUnsignedInt1, 
#line 990
cudaResViewFormatUnsignedInt2, 
#line 991
cudaResViewFormatUnsignedInt4, 
#line 992
cudaResViewFormatSignedInt1, 
#line 993
cudaResViewFormatSignedInt2, 
#line 994
cudaResViewFormatSignedInt4, 
#line 995
cudaResViewFormatHalf1, 
#line 996
cudaResViewFormatHalf2, 
#line 997
cudaResViewFormatHalf4, 
#line 998
cudaResViewFormatFloat1, 
#line 999
cudaResViewFormatFloat2, 
#line 1000
cudaResViewFormatFloat4, 
#line 1001
cudaResViewFormatUnsignedBlockCompressed1, 
#line 1002
cudaResViewFormatUnsignedBlockCompressed2, 
#line 1003
cudaResViewFormatUnsignedBlockCompressed3, 
#line 1004
cudaResViewFormatUnsignedBlockCompressed4, 
#line 1005
cudaResViewFormatSignedBlockCompressed4, 
#line 1006
cudaResViewFormatUnsignedBlockCompressed5, 
#line 1007
cudaResViewFormatSignedBlockCompressed5, 
#line 1008
cudaResViewFormatUnsignedBlockCompressed6H, 
#line 1009
cudaResViewFormatSignedBlockCompressed6H, 
#line 1010
cudaResViewFormatUnsignedBlockCompressed7
#line 1011
}; 
#endif
#line 1016 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\driver_types.h"
#if 0
#line 1016
struct cudaResourceDesc { 
#line 1017
cudaResourceType resType; 
#line 1019
union { 
#line 1020
struct { 
#line 1021
cudaArray_t array; 
#line 1022
} array; 
#line 1023
struct { 
#line 1024
cudaMipmappedArray_t mipmap; 
#line 1025
} mipmap; 
#line 1026
struct { 
#line 1027
void *devPtr; 
#line 1028
cudaChannelFormatDesc desc; 
#line 1029
size_t sizeInBytes; 
#line 1030
} linear; 
#line 1031
struct { 
#line 1032
void *devPtr; 
#line 1033
cudaChannelFormatDesc desc; 
#line 1034
size_t width; 
#line 1035
size_t height; 
#line 1036
size_t pitchInBytes; 
#line 1037
} pitch2D; 
#line 1038
} res; 
#line 1039
}; 
#endif
#line 1044 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\driver_types.h"
#if 0
#line 1044
struct cudaResourceViewDesc { 
#line 1046
cudaResourceViewFormat format; 
#line 1047
size_t width; 
#line 1048
size_t height; 
#line 1049
size_t depth; 
#line 1050
unsigned firstMipmapLevel; 
#line 1051
unsigned lastMipmapLevel; 
#line 1052
unsigned firstLayer; 
#line 1053
unsigned lastLayer; 
#line 1054
}; 
#endif
#line 1059 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\driver_types.h"
#if 0
#line 1059
struct cudaPointerAttributes { 
#line 1065
cudaMemoryType memoryType; 
#line 1076
int device; 
#line 1082
void *devicePointer; 
#line 1088
void *hostPointer; 
#line 1093
int isManaged; __pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)
#line 1094
}; 
#endif
#line 1099 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\driver_types.h"
#if 0
#line 1099
struct cudaFuncAttributes { 
#line 1106
size_t sharedSizeBytes; 
#line 1112
size_t constSizeBytes; 
#line 1117
size_t localSizeBytes; 
#line 1124
int maxThreadsPerBlock; 
#line 1129
int numRegs; 
#line 1136
int ptxVersion; 
#line 1143
int binaryVersion; 
#line 1149
int cacheModeCA; 
#line 1156
int maxDynamicSharedSizeBytes; 
#line 1163
int preferredShmemCarveout; 
#line 1164
}; 
#endif
#line 1169 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\driver_types.h"
#if 0
#line 1169
enum cudaFuncAttribute { 
#line 1171
cudaFuncAttributeMaxDynamicSharedMemorySize = 8, 
#line 1172
cudaFuncAttributePreferredSharedMemoryCarveout, 
#line 1173
cudaFuncAttributeMax
#line 1174
}; 
#endif
#line 1179 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\driver_types.h"
#if 0
#line 1179
enum cudaFuncCache { 
#line 1181
cudaFuncCachePreferNone, 
#line 1182
cudaFuncCachePreferShared, 
#line 1183
cudaFuncCachePreferL1, 
#line 1184
cudaFuncCachePreferEqual
#line 1185
}; 
#endif
#line 1191 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\driver_types.h"
#if 0
#line 1191
enum cudaSharedMemConfig { 
#line 1193
cudaSharedMemBankSizeDefault, 
#line 1194
cudaSharedMemBankSizeFourByte, 
#line 1195
cudaSharedMemBankSizeEightByte
#line 1196
}; 
#endif
#line 1201 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\driver_types.h"
#if 0
#line 1201
enum cudaSharedCarveout { 
#line 1202
cudaSharedmemCarveoutDefault = (-1), 
#line 1203
cudaSharedmemCarveoutMaxShared = 100, 
#line 1204
cudaSharedmemCarveoutMaxL1 = 0
#line 1205
}; 
#endif
#line 1210 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\driver_types.h"
#if 0
#line 1210
enum cudaComputeMode { 
#line 1212
cudaComputeModeDefault, 
#line 1213
cudaComputeModeExclusive, 
#line 1214
cudaComputeModeProhibited, 
#line 1215
cudaComputeModeExclusiveProcess
#line 1216
}; 
#endif
#line 1221 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\driver_types.h"
#if 0
#line 1221
enum cudaLimit { 
#line 1223
cudaLimitStackSize, 
#line 1224
cudaLimitPrintfFifoSize, 
#line 1225
cudaLimitMallocHeapSize, 
#line 1226
cudaLimitDevRuntimeSyncDepth, 
#line 1227
cudaLimitDevRuntimePendingLaunchCount
#line 1228
}; 
#endif
#line 1233 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\driver_types.h"
#if 0
#line 1233
enum cudaMemoryAdvise { 
#line 1235
cudaMemAdviseSetReadMostly = 1, 
#line 1236
cudaMemAdviseUnsetReadMostly, 
#line 1237
cudaMemAdviseSetPreferredLocation, 
#line 1238
cudaMemAdviseUnsetPreferredLocation, 
#line 1239
cudaMemAdviseSetAccessedBy, 
#line 1240
cudaMemAdviseUnsetAccessedBy
#line 1241
}; 
#endif
#line 1246 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\driver_types.h"
#if 0
#line 1246
enum cudaMemRangeAttribute { 
#line 1248
cudaMemRangeAttributeReadMostly = 1, 
#line 1249
cudaMemRangeAttributePreferredLocation, 
#line 1250
cudaMemRangeAttributeAccessedBy, 
#line 1251
cudaMemRangeAttributeLastPrefetchLocation
#line 1252
}; 
#endif
#line 1257 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\driver_types.h"
#if 0
#line 1257
enum cudaOutputMode { 
#line 1259
cudaKeyValuePair, 
#line 1260
cudaCSV
#line 1261
}; 
#endif
#line 1266 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\driver_types.h"
#if 0
#line 1266
enum cudaDeviceAttr { 
#line 1268
cudaDevAttrMaxThreadsPerBlock = 1, 
#line 1269
cudaDevAttrMaxBlockDimX, 
#line 1270
cudaDevAttrMaxBlockDimY, 
#line 1271
cudaDevAttrMaxBlockDimZ, 
#line 1272
cudaDevAttrMaxGridDimX, 
#line 1273
cudaDevAttrMaxGridDimY, 
#line 1274
cudaDevAttrMaxGridDimZ, 
#line 1275
cudaDevAttrMaxSharedMemoryPerBlock, 
#line 1276
cudaDevAttrTotalConstantMemory, 
#line 1277
cudaDevAttrWarpSize, 
#line 1278
cudaDevAttrMaxPitch, 
#line 1279
cudaDevAttrMaxRegistersPerBlock, 
#line 1280
cudaDevAttrClockRate, 
#line 1281
cudaDevAttrTextureAlignment, 
#line 1282
cudaDevAttrGpuOverlap, 
#line 1283
cudaDevAttrMultiProcessorCount, 
#line 1284
cudaDevAttrKernelExecTimeout, 
#line 1285
cudaDevAttrIntegrated, 
#line 1286
cudaDevAttrCanMapHostMemory, 
#line 1287
cudaDevAttrComputeMode, 
#line 1288
cudaDevAttrMaxTexture1DWidth, 
#line 1289
cudaDevAttrMaxTexture2DWidth, 
#line 1290
cudaDevAttrMaxTexture2DHeight, 
#line 1291
cudaDevAttrMaxTexture3DWidth, 
#line 1292
cudaDevAttrMaxTexture3DHeight, 
#line 1293
cudaDevAttrMaxTexture3DDepth, 
#line 1294
cudaDevAttrMaxTexture2DLayeredWidth, 
#line 1295
cudaDevAttrMaxTexture2DLayeredHeight, 
#line 1296
cudaDevAttrMaxTexture2DLayeredLayers, 
#line 1297
cudaDevAttrSurfaceAlignment, 
#line 1298
cudaDevAttrConcurrentKernels, 
#line 1299
cudaDevAttrEccEnabled, 
#line 1300
cudaDevAttrPciBusId, 
#line 1301
cudaDevAttrPciDeviceId, 
#line 1302
cudaDevAttrTccDriver, 
#line 1303
cudaDevAttrMemoryClockRate, 
#line 1304
cudaDevAttrGlobalMemoryBusWidth, 
#line 1305
cudaDevAttrL2CacheSize, 
#line 1306
cudaDevAttrMaxThreadsPerMultiProcessor, 
#line 1307
cudaDevAttrAsyncEngineCount, 
#line 1308
cudaDevAttrUnifiedAddressing, 
#line 1309
cudaDevAttrMaxTexture1DLayeredWidth, 
#line 1310
cudaDevAttrMaxTexture1DLayeredLayers, 
#line 1311
cudaDevAttrMaxTexture2DGatherWidth = 45, 
#line 1312
cudaDevAttrMaxTexture2DGatherHeight, 
#line 1313
cudaDevAttrMaxTexture3DWidthAlt, 
#line 1314
cudaDevAttrMaxTexture3DHeightAlt, 
#line 1315
cudaDevAttrMaxTexture3DDepthAlt, 
#line 1316
cudaDevAttrPciDomainId, 
#line 1317
cudaDevAttrTexturePitchAlignment, 
#line 1318
cudaDevAttrMaxTextureCubemapWidth, 
#line 1319
cudaDevAttrMaxTextureCubemapLayeredWidth, 
#line 1320
cudaDevAttrMaxTextureCubemapLayeredLayers, 
#line 1321
cudaDevAttrMaxSurface1DWidth, 
#line 1322
cudaDevAttrMaxSurface2DWidth, 
#line 1323
cudaDevAttrMaxSurface2DHeight, 
#line 1324
cudaDevAttrMaxSurface3DWidth, 
#line 1325
cudaDevAttrMaxSurface3DHeight, 
#line 1326
cudaDevAttrMaxSurface3DDepth, 
#line 1327
cudaDevAttrMaxSurface1DLayeredWidth, 
#line 1328
cudaDevAttrMaxSurface1DLayeredLayers, 
#line 1329
cudaDevAttrMaxSurface2DLayeredWidth, 
#line 1330
cudaDevAttrMaxSurface2DLayeredHeight, 
#line 1331
cudaDevAttrMaxSurface2DLayeredLayers, 
#line 1332
cudaDevAttrMaxSurfaceCubemapWidth, 
#line 1333
cudaDevAttrMaxSurfaceCubemapLayeredWidth, 
#line 1334
cudaDevAttrMaxSurfaceCubemapLayeredLayers, 
#line 1335
cudaDevAttrMaxTexture1DLinearWidth, 
#line 1336
cudaDevAttrMaxTexture2DLinearWidth, 
#line 1337
cudaDevAttrMaxTexture2DLinearHeight, 
#line 1338
cudaDevAttrMaxTexture2DLinearPitch, 
#line 1339
cudaDevAttrMaxTexture2DMipmappedWidth, 
#line 1340
cudaDevAttrMaxTexture2DMipmappedHeight, 
#line 1341
cudaDevAttrComputeCapabilityMajor, 
#line 1342
cudaDevAttrComputeCapabilityMinor, 
#line 1343
cudaDevAttrMaxTexture1DMipmappedWidth, 
#line 1344
cudaDevAttrStreamPrioritiesSupported, 
#line 1345
cudaDevAttrGlobalL1CacheSupported, 
#line 1346
cudaDevAttrLocalL1CacheSupported, 
#line 1347
cudaDevAttrMaxSharedMemoryPerMultiprocessor, 
#line 1348
cudaDevAttrMaxRegistersPerMultiprocessor, 
#line 1349
cudaDevAttrManagedMemory, 
#line 1350
cudaDevAttrIsMultiGpuBoard, 
#line 1351
cudaDevAttrMultiGpuBoardGroupID, 
#line 1352
cudaDevAttrHostNativeAtomicSupported, 
#line 1353
cudaDevAttrSingleToDoublePrecisionPerfRatio, 
#line 1354
cudaDevAttrPageableMemoryAccess, 
#line 1355
cudaDevAttrConcurrentManagedAccess, 
#line 1356
cudaDevAttrComputePreemptionSupported, 
#line 1357
cudaDevAttrCanUseHostPointerForRegisteredMem, 
#line 1358
cudaDevAttrReserved92, 
#line 1359
cudaDevAttrReserved93, 
#line 1360
cudaDevAttrReserved94, 
#line 1361
cudaDevAttrCooperativeLaunch, 
#line 1362
cudaDevAttrCooperativeMultiDeviceLaunch, 
#line 1363
cudaDevAttrMaxSharedMemoryPerBlockOptin
#line 1364
}; 
#endif
#line 1370 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\driver_types.h"
#if 0
#line 1370
enum cudaDeviceP2PAttr { 
#line 1371
cudaDevP2PAttrPerformanceRank = 1, 
#line 1372
cudaDevP2PAttrAccessSupported, 
#line 1373
cudaDevP2PAttrNativeAtomicSupported
#line 1374
}; 
#endif
#line 1378 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\driver_types.h"
#if 0
#line 1378
struct cudaDeviceProp { 
#line 1380
char name[256]; 
#line 1381
size_t totalGlobalMem; 
#line 1382
size_t sharedMemPerBlock; 
#line 1383
int regsPerBlock; 
#line 1384
int warpSize; 
#line 1385
size_t memPitch; 
#line 1386
int maxThreadsPerBlock; 
#line 1387
int maxThreadsDim[3]; 
#line 1388
int maxGridSize[3]; 
#line 1389
int clockRate; 
#line 1390
size_t totalConstMem; 
#line 1391
int major; 
#line 1392
int minor; 
#line 1393
size_t textureAlignment; 
#line 1394
size_t texturePitchAlignment; 
#line 1395
int deviceOverlap; 
#line 1396
int multiProcessorCount; 
#line 1397
int kernelExecTimeoutEnabled; 
#line 1398
int integrated; 
#line 1399
int canMapHostMemory; 
#line 1400
int computeMode; 
#line 1401
int maxTexture1D; 
#line 1402
int maxTexture1DMipmap; 
#line 1403
int maxTexture1DLinear; 
#line 1404
int maxTexture2D[2]; 
#line 1405
int maxTexture2DMipmap[2]; 
#line 1406
int maxTexture2DLinear[3]; 
#line 1407
int maxTexture2DGather[2]; 
#line 1408
int maxTexture3D[3]; 
#line 1409
int maxTexture3DAlt[3]; 
#line 1410
int maxTextureCubemap; 
#line 1411
int maxTexture1DLayered[2]; 
#line 1412
int maxTexture2DLayered[3]; 
#line 1413
int maxTextureCubemapLayered[2]; 
#line 1414
int maxSurface1D; 
#line 1415
int maxSurface2D[2]; 
#line 1416
int maxSurface3D[3]; 
#line 1417
int maxSurface1DLayered[2]; 
#line 1418
int maxSurface2DLayered[3]; 
#line 1419
int maxSurfaceCubemap; 
#line 1420
int maxSurfaceCubemapLayered[2]; 
#line 1421
size_t surfaceAlignment; 
#line 1422
int concurrentKernels; 
#line 1423
int ECCEnabled; 
#line 1424
int pciBusID; 
#line 1425
int pciDeviceID; 
#line 1426
int pciDomainID; 
#line 1427
int tccDriver; 
#line 1428
int asyncEngineCount; 
#line 1429
int unifiedAddressing; 
#line 1430
int memoryClockRate; 
#line 1431
int memoryBusWidth; 
#line 1432
int l2CacheSize; 
#line 1433
int maxThreadsPerMultiProcessor; 
#line 1434
int streamPrioritiesSupported; 
#line 1435
int globalL1CacheSupported; 
#line 1436
int localL1CacheSupported; 
#line 1437
size_t sharedMemPerMultiprocessor; 
#line 1438
int regsPerMultiprocessor; 
#line 1439
int managedMemory; 
#line 1440
int isMultiGpuBoard; 
#line 1441
int multiGpuBoardGroupID; 
#line 1442
int hostNativeAtomicSupported; 
#line 1443
int singleToDoublePrecisionPerfRatio; 
#line 1444
int pageableMemoryAccess; 
#line 1445
int concurrentManagedAccess; 
#line 1446
int computePreemptionSupported; 
#line 1447
int canUseHostPointerForRegisteredMem; 
#line 1448
int cooperativeLaunch; 
#line 1449
int cooperativeMultiDeviceLaunch; 
#line 1450
size_t sharedMemPerBlockOptin; 
#line 1451
}; 
#endif
#line 1539 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\driver_types.h"
#if 0
typedef 
#line 1536
struct cudaIpcEventHandle_st { 
#line 1538
char reserved[64]; 
#line 1539
} cudaIpcEventHandle_t; 
#endif
#line 1547 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\driver_types.h"
#if 0
typedef 
#line 1544
struct cudaIpcMemHandle_st { 
#line 1546
char reserved[64]; 
#line 1547
} cudaIpcMemHandle_t; 
#endif
#line 1558 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\driver_types.h"
#if 0
typedef cudaError 
#line 1558
cudaError_t; 
#endif
#line 1563 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\driver_types.h"
#if 0
typedef struct CUstream_st *
#line 1563
cudaStream_t; 
#endif
#line 1568 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\driver_types.h"
#if 0
typedef struct CUevent_st *
#line 1568
cudaEvent_t; 
#endif
#line 1573 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\driver_types.h"
#if 0
typedef cudaGraphicsResource *
#line 1573
cudaGraphicsResource_t; 
#endif
#line 1578 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\driver_types.h"
#if 0
typedef struct CUuuid_st 
#line 1578
cudaUUID_t; 
#endif
#line 1583 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\driver_types.h"
#if 0
typedef cudaOutputMode 
#line 1583
cudaOutputMode_t; 
#endif
#line 1588 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\driver_types.h"
#if 0
#line 1588
enum cudaCGScope { 
#line 1589
cudaCGScopeInvalid, 
#line 1590
cudaCGScopeGrid, 
#line 1591
cudaCGScopeMultiGrid
#line 1592
}; 
#endif
#line 1597 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\driver_types.h"
#if 0
#line 1597
struct cudaLaunchParams { 
#line 1599
void *func; 
#line 1600
dim3 gridDim; 
#line 1601
dim3 blockDim; 
#line 1602
void **args; 
#line 1603
size_t sharedMem; 
#line 1604
cudaStream_t stream; 
#line 1605
}; 
#endif
#line 84 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\surface_types.h"
#if 0
#line 84
enum cudaSurfaceBoundaryMode { 
#line 86
cudaBoundaryModeZero, 
#line 87
cudaBoundaryModeClamp, 
#line 88
cudaBoundaryModeTrap
#line 89
}; 
#endif
#line 94 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\surface_types.h"
#if 0
#line 94
enum cudaSurfaceFormatMode { 
#line 96
cudaFormatModeForced, 
#line 97
cudaFormatModeAuto
#line 98
}; 
#endif
#line 103 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\surface_types.h"
#if 0
#line 103
struct surfaceReference { 
#line 108
cudaChannelFormatDesc channelDesc; 
#line 109
}; 
#endif
#line 114 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\surface_types.h"
#if 0
typedef unsigned __int64 
#line 114
cudaSurfaceObject_t; 
#endif
#line 84 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\texture_types.h"
#if 0
#line 84
enum cudaTextureAddressMode { 
#line 86
cudaAddressModeWrap, 
#line 87
cudaAddressModeClamp, 
#line 88
cudaAddressModeMirror, 
#line 89
cudaAddressModeBorder
#line 90
}; 
#endif
#line 95 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\texture_types.h"
#if 0
#line 95
enum cudaTextureFilterMode { 
#line 97
cudaFilterModePoint, 
#line 98
cudaFilterModeLinear
#line 99
}; 
#endif
#line 104 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\texture_types.h"
#if 0
#line 104
enum cudaTextureReadMode { 
#line 106
cudaReadModeElementType, 
#line 107
cudaReadModeNormalizedFloat
#line 108
}; 
#endif
#line 113 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\texture_types.h"
#if 0
#line 113
struct textureReference { 
#line 118
int normalized; 
#line 122
cudaTextureFilterMode filterMode; 
#line 126
cudaTextureAddressMode addressMode[3]; 
#line 130
cudaChannelFormatDesc channelDesc; 
#line 134
int sRGB; 
#line 138
unsigned maxAnisotropy; 
#line 142
cudaTextureFilterMode mipmapFilterMode; 
#line 146
float mipmapLevelBias; 
#line 150
float minMipmapLevelClamp; 
#line 154
float maxMipmapLevelClamp; 
#line 155
int __cudaReserved[15]; 
#line 156
}; 
#endif
#line 161 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\texture_types.h"
#if 0
#line 161
struct cudaTextureDesc { 
#line 166
cudaTextureAddressMode addressMode[3]; 
#line 170
cudaTextureFilterMode filterMode; 
#line 174
cudaTextureReadMode readMode; 
#line 178
int sRGB; 
#line 182
float borderColor[4]; 
#line 186
int normalizedCoords; 
#line 190
unsigned maxAnisotropy; 
#line 194
cudaTextureFilterMode mipmapFilterMode; 
#line 198
float mipmapLevelBias; 
#line 202
float minMipmapLevelClamp; 
#line 206
float maxMipmapLevelClamp; 
#line 207
}; 
#endif
#line 212 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\texture_types.h"
#if 0
typedef unsigned __int64 
#line 212
cudaTextureObject_t; 
#endif
#line 70 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\library_types.h"
typedef 
#line 54
enum cudaDataType_t { 
#line 56
CUDA_R_16F = 2, 
#line 57
CUDA_C_16F = 6, 
#line 58
CUDA_R_32F = 0, 
#line 59
CUDA_C_32F = 4, 
#line 60
CUDA_R_64F = 1, 
#line 61
CUDA_C_64F = 5, 
#line 62
CUDA_R_8I = 3, 
#line 63
CUDA_C_8I = 7, 
#line 64
CUDA_R_8U, 
#line 65
CUDA_C_8U, 
#line 66
CUDA_R_32I, 
#line 67
CUDA_C_32I, 
#line 68
CUDA_R_32U, 
#line 69
CUDA_C_32U
#line 70
} cudaDataType; 
#line 78
typedef 
#line 73
enum libraryPropertyType_t { 
#line 75
MAJOR_VERSION, 
#line 76
MINOR_VERSION, 
#line 77
PATCH_LEVEL
#line 78
} libraryPropertyType; 
#line 121 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\cuda_device_runtime_api.h"
extern "C" {
#line 123
extern cudaError_t __stdcall cudaDeviceGetAttribute(int * value, cudaDeviceAttr attr, int device); 
#line 124
extern cudaError_t __stdcall cudaDeviceGetLimit(size_t * pValue, cudaLimit limit); 
#line 125
extern cudaError_t __stdcall cudaDeviceGetCacheConfig(cudaFuncCache * pCacheConfig); 
#line 126
extern cudaError_t __stdcall cudaDeviceGetSharedMemConfig(cudaSharedMemConfig * pConfig); 
#line 127
extern cudaError_t __stdcall cudaDeviceSynchronize(); 
#line 128
extern cudaError_t __stdcall cudaGetLastError(); 
#line 129
extern cudaError_t __stdcall cudaPeekAtLastError(); 
#line 130
extern const char *__stdcall cudaGetErrorString(cudaError_t error); 
#line 131
extern const char *__stdcall cudaGetErrorName(cudaError_t error); 
#line 132
extern cudaError_t __stdcall cudaGetDeviceCount(int * count); 
#line 133
extern cudaError_t __stdcall cudaGetDevice(int * device); 
#line 134
extern cudaError_t __stdcall cudaStreamCreateWithFlags(cudaStream_t * pStream, unsigned flags); 
#line 135
extern cudaError_t __stdcall cudaStreamDestroy(cudaStream_t stream); 
#line 136
extern cudaError_t __stdcall cudaStreamWaitEvent(cudaStream_t stream, cudaEvent_t event, unsigned flags); 
#line 137
extern cudaError_t __stdcall cudaStreamWaitEvent_ptsz(cudaStream_t stream, cudaEvent_t event, unsigned flags); 
#line 138
extern cudaError_t __stdcall cudaEventCreateWithFlags(cudaEvent_t * event, unsigned flags); 
#line 139
extern cudaError_t __stdcall cudaEventRecord(cudaEvent_t event, cudaStream_t stream); 
#line 140
extern cudaError_t __stdcall cudaEventRecord_ptsz(cudaEvent_t event, cudaStream_t stream); 
#line 141
extern cudaError_t __stdcall cudaEventDestroy(cudaEvent_t event); 
#line 142
extern cudaError_t __stdcall cudaFuncGetAttributes(cudaFuncAttributes * attr, const void * func); 
#line 143
extern cudaError_t __stdcall cudaFree(void * devPtr); 
#line 144
extern cudaError_t __stdcall cudaMalloc(void ** devPtr, size_t size); 
#line 145
extern cudaError_t __stdcall cudaMemcpyAsync(void * dst, const void * src, size_t count, cudaMemcpyKind kind, cudaStream_t stream); 
#line 146
extern cudaError_t __stdcall cudaMemcpyAsync_ptsz(void * dst, const void * src, size_t count, cudaMemcpyKind kind, cudaStream_t stream); 
#line 147
extern cudaError_t __stdcall cudaMemcpy2DAsync(void * dst, size_t dpitch, const void * src, size_t spitch, size_t width, size_t height, cudaMemcpyKind kind, cudaStream_t stream); 
#line 148
extern cudaError_t __stdcall cudaMemcpy2DAsync_ptsz(void * dst, size_t dpitch, const void * src, size_t spitch, size_t width, size_t height, cudaMemcpyKind kind, cudaStream_t stream); 
#line 149
extern cudaError_t __stdcall cudaMemcpy3DAsync(const cudaMemcpy3DParms * p, cudaStream_t stream); 
#line 150
extern cudaError_t __stdcall cudaMemcpy3DAsync_ptsz(const cudaMemcpy3DParms * p, cudaStream_t stream); 
#line 151
extern cudaError_t __stdcall cudaMemsetAsync(void * devPtr, int value, size_t count, cudaStream_t stream); 
#line 152
extern cudaError_t __stdcall cudaMemsetAsync_ptsz(void * devPtr, int value, size_t count, cudaStream_t stream); 
#line 153
extern cudaError_t __stdcall cudaMemset2DAsync(void * devPtr, size_t pitch, int value, size_t width, size_t height, cudaStream_t stream); 
#line 154
extern cudaError_t __stdcall cudaMemset2DAsync_ptsz(void * devPtr, size_t pitch, int value, size_t width, size_t height, cudaStream_t stream); 
#line 155
extern cudaError_t __stdcall cudaMemset3DAsync(cudaPitchedPtr pitchedDevPtr, int value, cudaExtent extent, cudaStream_t stream); 
#line 156
extern cudaError_t __stdcall cudaMemset3DAsync_ptsz(cudaPitchedPtr pitchedDevPtr, int value, cudaExtent extent, cudaStream_t stream); 
#line 157
extern cudaError_t __stdcall cudaRuntimeGetVersion(int * runtimeVersion); 
#line 178
extern void *__stdcall cudaGetParameterBuffer(size_t alignment, size_t size); 
#line 206
extern void *__stdcall cudaGetParameterBufferV2(void * func, dim3 gridDimension, dim3 blockDimension, unsigned sharedMemSize); 
#line 207
extern cudaError_t __stdcall cudaLaunchDevice_ptsz(void * func, void * parameterBuffer, dim3 gridDimension, dim3 blockDimension, unsigned sharedMemSize, cudaStream_t stream); 
#line 208
extern cudaError_t __stdcall cudaLaunchDeviceV2_ptsz(void * parameterBuffer, cudaStream_t stream); 
#line 226 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\cuda_device_runtime_api.h"
extern cudaError_t __stdcall cudaLaunchDevice(void * func, void * parameterBuffer, dim3 gridDimension, dim3 blockDimension, unsigned sharedMemSize, cudaStream_t stream); 
#line 227
extern cudaError_t __stdcall cudaLaunchDeviceV2(void * parameterBuffer, cudaStream_t stream); 
#line 230 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\cuda_device_runtime_api.h"
extern cudaError_t __stdcall cudaOccupancyMaxActiveBlocksPerMultiprocessor(int * numBlocks, const void * func, int blockSize, size_t dynamicSmemSize); 
#line 231
extern cudaError_t __stdcall cudaOccupancyMaxActiveBlocksPerMultiprocessorWithFlags(int * numBlocks, const void * func, int blockSize, size_t dynamicSmemSize, unsigned flags); 
#line 233
extern unsigned __int64 __stdcall cudaCGGetIntrinsicHandle(cudaCGScope scope); 
#line 234
extern cudaError_t __stdcall cudaCGSynchronize(unsigned __int64 handle, unsigned flags); 
#line 235
extern cudaError_t __stdcall cudaCGGetSize(unsigned * numThreads, unsigned * numGrids, unsigned __int64 handle); 
#line 236
extern cudaError_t __stdcall cudaCGGetRank(unsigned * threadRank, unsigned * gridRank, unsigned __int64 handle); 
#line 237
}
#line 239
template< class T> static __inline cudaError_t cudaMalloc(T ** devPtr, size_t size); 
#line 240
template< class T> static __inline cudaError_t cudaFuncGetAttributes(cudaFuncAttributes * attr, T * entry); 
#line 241
template< class T> static __inline cudaError_t cudaOccupancyMaxActiveBlocksPerMultiprocessor(int * numBlocks, T func, int blockSize, size_t dynamicSmemSize); 
#line 242
template< class T> static __inline cudaError_t cudaOccupancyMaxActiveBlocksPerMultiprocessorWithFlags(int * numBlocks, T func, int blockSize, size_t dynamicSmemSize, unsigned flags); 
#line 218 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\cuda_runtime_api.h"
extern "C" {
#line 251 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\cuda_runtime_api.h"
extern cudaError_t __stdcall cudaDeviceReset(); 
#line 270
extern cudaError_t __stdcall cudaDeviceSynchronize(); 
#line 347
extern cudaError_t __stdcall cudaDeviceSetLimit(cudaLimit limit, size_t value); 
#line 378
extern cudaError_t __stdcall cudaDeviceGetLimit(size_t * pValue, cudaLimit limit); 
#line 410
extern cudaError_t __stdcall cudaDeviceGetCacheConfig(cudaFuncCache * pCacheConfig); 
#line 446
extern cudaError_t __stdcall cudaDeviceGetStreamPriorityRange(int * leastPriority, int * greatestPriority); 
#line 489
extern cudaError_t __stdcall cudaDeviceSetCacheConfig(cudaFuncCache cacheConfig); 
#line 519
extern cudaError_t __stdcall cudaDeviceGetSharedMemConfig(cudaSharedMemConfig * pConfig); 
#line 562
extern cudaError_t __stdcall cudaDeviceSetSharedMemConfig(cudaSharedMemConfig config); 
#line 587
extern cudaError_t __stdcall cudaDeviceGetByPCIBusId(int * device, const char * pciBusId); 
#line 615
extern cudaError_t __stdcall cudaDeviceGetPCIBusId(char * pciBusId, int len, int device); 
#line 660
extern cudaError_t __stdcall cudaIpcGetEventHandle(cudaIpcEventHandle_t * handle, cudaEvent_t event); 
#line 698
extern cudaError_t __stdcall cudaIpcOpenEventHandle(cudaEvent_t * event, cudaIpcEventHandle_t handle); 
#line 739
extern cudaError_t __stdcall cudaIpcGetMemHandle(cudaIpcMemHandle_t * handle, void * devPtr); 
#line 792
extern cudaError_t __stdcall cudaIpcOpenMemHandle(void ** devPtr, cudaIpcMemHandle_t handle, unsigned flags); 
#line 825
extern cudaError_t __stdcall cudaIpcCloseMemHandle(void * devPtr); 
#line 865
extern cudaError_t __stdcall cudaThreadExit(); 
#line 889
extern cudaError_t __stdcall cudaThreadSynchronize(); 
#line 936
extern cudaError_t __stdcall cudaThreadSetLimit(cudaLimit limit, size_t value); 
#line 967
extern cudaError_t __stdcall cudaThreadGetLimit(size_t * pValue, cudaLimit limit); 
#line 1002
extern cudaError_t __stdcall cudaThreadGetCacheConfig(cudaFuncCache * pCacheConfig); 
#line 1048
extern cudaError_t __stdcall cudaThreadSetCacheConfig(cudaFuncCache cacheConfig); 
#line 1104
extern cudaError_t __stdcall cudaGetLastError(); 
#line 1147
extern cudaError_t __stdcall cudaPeekAtLastError(); 
#line 1163
extern const char *__stdcall cudaGetErrorName(cudaError_t error); 
#line 1179
extern const char *__stdcall cudaGetErrorString(cudaError_t error); 
#line 1210
extern cudaError_t __stdcall cudaGetDeviceCount(int * count); 
#line 1470
extern cudaError_t __stdcall cudaGetDeviceProperties(cudaDeviceProp * prop, int device); 
#line 1647
extern cudaError_t __stdcall cudaDeviceGetAttribute(int * value, cudaDeviceAttr attr, int device); 
#line 1683
extern cudaError_t __stdcall cudaDeviceGetP2PAttribute(int * value, cudaDeviceP2PAttr attr, int srcDevice, int dstDevice); 
#line 1702
extern cudaError_t __stdcall cudaChooseDevice(int * device, const cudaDeviceProp * prop); 
#line 1737
extern cudaError_t __stdcall cudaSetDevice(int device); 
#line 1755
extern cudaError_t __stdcall cudaGetDevice(int * device); 
#line 1784
extern cudaError_t __stdcall cudaSetValidDevices(int * device_arr, int len); 
#line 1847
extern cudaError_t __stdcall cudaSetDeviceFlags(unsigned flags); 
#line 1890
extern cudaError_t __stdcall cudaGetDeviceFlags(unsigned * flags); 
#line 1928
extern cudaError_t __stdcall cudaStreamCreate(cudaStream_t * pStream); 
#line 1958
extern cudaError_t __stdcall cudaStreamCreateWithFlags(cudaStream_t * pStream, unsigned flags); 
#line 2002
extern cudaError_t __stdcall cudaStreamCreateWithPriority(cudaStream_t * pStream, unsigned flags, int priority); 
#line 2027
extern cudaError_t __stdcall cudaStreamGetPriority(cudaStream_t hStream, int * priority); 
#line 2050
extern cudaError_t __stdcall cudaStreamGetFlags(cudaStream_t hStream, unsigned * flags); 
#line 2079
extern cudaError_t __stdcall cudaStreamDestroy(cudaStream_t stream); 
#line 2103
extern cudaError_t __stdcall cudaStreamWaitEvent(cudaStream_t stream, cudaEvent_t event, unsigned flags); 
#line 2117 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\cuda_runtime_api.h"
typedef void (__stdcall *cudaStreamCallback_t)(cudaStream_t stream, cudaError_t status, void * userData); 
#line 2175
extern cudaError_t __stdcall cudaStreamAddCallback(cudaStream_t stream, cudaStreamCallback_t callback, void * userData, unsigned flags); 
#line 2197
extern cudaError_t __stdcall cudaStreamSynchronize(cudaStream_t stream); 
#line 2220
extern cudaError_t __stdcall cudaStreamQuery(cudaStream_t stream); 
#line 2292
extern cudaError_t __stdcall cudaStreamAttachMemAsync(cudaStream_t stream, void * devPtr, size_t length = 0, unsigned flags = 4); 
#line 2329
extern cudaError_t __stdcall cudaEventCreate(cudaEvent_t * event); 
#line 2365
extern cudaError_t __stdcall cudaEventCreateWithFlags(cudaEvent_t * event, unsigned flags); 
#line 2403
extern cudaError_t __stdcall cudaEventRecord(cudaEvent_t event, cudaStream_t stream = 0); 
#line 2433
extern cudaError_t __stdcall cudaEventQuery(cudaEvent_t event); 
#line 2462
extern cudaError_t __stdcall cudaEventSynchronize(cudaEvent_t event); 
#line 2488
extern cudaError_t __stdcall cudaEventDestroy(cudaEvent_t event); 
#line 2530
extern cudaError_t __stdcall cudaEventElapsedTime(float * ms, cudaEvent_t start, cudaEvent_t end); 
#line 2593
extern cudaError_t __stdcall cudaLaunchKernel(const void * func, dim3 gridDim, dim3 blockDim, void ** args, size_t sharedMem, cudaStream_t stream); 
#line 2648
extern cudaError_t __stdcall cudaLaunchCooperativeKernel(const void * func, dim3 gridDim, dim3 blockDim, void ** args, size_t sharedMem, cudaStream_t stream); 
#line 2745
extern cudaError_t __stdcall cudaLaunchCooperativeKernelMultiDevice(cudaLaunchParams * launchParamsList, unsigned numDevices, unsigned flags = 0); 
#line 2794
extern cudaError_t __stdcall cudaFuncSetCacheConfig(const void * func, cudaFuncCache cacheConfig); 
#line 2849
extern cudaError_t __stdcall cudaFuncSetSharedMemConfig(const void * func, cudaSharedMemConfig config); 
#line 2884
extern cudaError_t __stdcall cudaFuncGetAttributes(cudaFuncAttributes * attr, const void * func); 
#line 2920
extern cudaError_t __stdcall cudaFuncSetAttribute(const void * func, cudaFuncAttribute attr, int value); 
#line 2944
extern cudaError_t __stdcall cudaSetDoubleForDevice(double * d); 
#line 2968
extern cudaError_t __stdcall cudaSetDoubleForHost(double * d); 
#line 3023
extern cudaError_t __stdcall cudaOccupancyMaxActiveBlocksPerMultiprocessor(int * numBlocks, const void * func, int blockSize, size_t dynamicSMemSize); 
#line 3067
extern cudaError_t __stdcall cudaOccupancyMaxActiveBlocksPerMultiprocessorWithFlags(int * numBlocks, const void * func, int blockSize, size_t dynamicSMemSize, unsigned flags); 
#line 3117
extern cudaError_t __stdcall cudaConfigureCall(dim3 gridDim, dim3 blockDim, size_t sharedMem = 0, cudaStream_t stream = 0); 
#line 3146
extern cudaError_t __stdcall cudaSetupArgument(const void * arg, size_t size, size_t offset); 
#line 3187
extern cudaError_t __stdcall cudaLaunch(const void * func); 
#line 3306
extern cudaError_t __stdcall cudaMallocManaged(void ** devPtr, size_t size, unsigned flags = 1); 
#line 3334
extern cudaError_t __stdcall cudaMalloc(void ** devPtr, size_t size); 
#line 3365
extern cudaError_t __stdcall cudaMallocHost(void ** ptr, size_t size); 
#line 3406
extern cudaError_t __stdcall cudaMallocPitch(void ** devPtr, size_t * pitch, size_t width, size_t height); 
#line 3450
extern cudaError_t __stdcall cudaMallocArray(cudaArray_t * array, const cudaChannelFormatDesc * desc, size_t width, size_t height = 0, unsigned flags = 0); 
#line 3478
extern cudaError_t __stdcall cudaFree(void * devPtr); 
#line 3500
extern cudaError_t __stdcall cudaFreeHost(void * ptr); 
#line 3523
extern cudaError_t __stdcall cudaFreeArray(cudaArray_t array); 
#line 3546
extern cudaError_t __stdcall cudaFreeMipmappedArray(cudaMipmappedArray_t mipmappedArray); 
#line 3610
extern cudaError_t __stdcall cudaHostAlloc(void ** pHost, size_t size, unsigned flags); 
#line 3691
extern cudaError_t __stdcall cudaHostRegister(void * ptr, size_t size, unsigned flags); 
#line 3712
extern cudaError_t __stdcall cudaHostUnregister(void * ptr); 
#line 3755
extern cudaError_t __stdcall cudaHostGetDevicePointer(void ** pDevice, void * pHost, unsigned flags); 
#line 3775
extern cudaError_t __stdcall cudaHostGetFlags(unsigned * pFlags, void * pHost); 
#line 3812
extern cudaError_t __stdcall cudaMalloc3D(cudaPitchedPtr * pitchedDevPtr, cudaExtent extent); 
#line 3949
extern cudaError_t __stdcall cudaMalloc3DArray(cudaArray_t * array, const cudaChannelFormatDesc * desc, cudaExtent extent, unsigned flags = 0); 
#line 4086
extern cudaError_t __stdcall cudaMallocMipmappedArray(cudaMipmappedArray_t * mipmappedArray, const cudaChannelFormatDesc * desc, cudaExtent extent, unsigned numLevels, unsigned flags = 0); 
#line 4113
extern cudaError_t __stdcall cudaGetMipmappedArrayLevel(cudaArray_t * levelArray, cudaMipmappedArray_const_t mipmappedArray, unsigned level); 
#line 4216
extern cudaError_t __stdcall cudaMemcpy3D(const cudaMemcpy3DParms * p); 
#line 4245
extern cudaError_t __stdcall cudaMemcpy3DPeer(const cudaMemcpy3DPeerParms * p); 
#line 4361
extern cudaError_t __stdcall cudaMemcpy3DAsync(const cudaMemcpy3DParms * p, cudaStream_t stream = 0); 
#line 4385
extern cudaError_t __stdcall cudaMemcpy3DPeerAsync(const cudaMemcpy3DPeerParms * p, cudaStream_t stream = 0); 
#line 4406
extern cudaError_t __stdcall cudaMemGetInfo(size_t * free, size_t * total); 
#line 4430
extern cudaError_t __stdcall cudaArrayGetInfo(cudaChannelFormatDesc * desc, cudaExtent * extent, unsigned * flags, cudaArray_t array); 
#line 4471
extern cudaError_t __stdcall cudaMemcpy(void * dst, const void * src, size_t count, cudaMemcpyKind kind); 
#line 4504
extern cudaError_t __stdcall cudaMemcpyPeer(void * dst, int dstDevice, const void * src, int srcDevice, size_t count); 
#line 4543
extern cudaError_t __stdcall cudaMemcpyToArray(cudaArray_t dst, size_t wOffset, size_t hOffset, const void * src, size_t count, cudaMemcpyKind kind); 
#line 4581
extern cudaError_t __stdcall cudaMemcpyFromArray(void * dst, cudaArray_const_t src, size_t wOffset, size_t hOffset, size_t count, cudaMemcpyKind kind); 
#line 4620
extern cudaError_t __stdcall cudaMemcpyArrayToArray(cudaArray_t dst, size_t wOffsetDst, size_t hOffsetDst, cudaArray_const_t src, size_t wOffsetSrc, size_t hOffsetSrc, size_t count, cudaMemcpyKind kind = cudaMemcpyDeviceToDevice); 
#line 4666
extern cudaError_t __stdcall cudaMemcpy2D(void * dst, size_t dpitch, const void * src, size_t spitch, size_t width, size_t height, cudaMemcpyKind kind); 
#line 4713
extern cudaError_t __stdcall cudaMemcpy2DToArray(cudaArray_t dst, size_t wOffset, size_t hOffset, const void * src, size_t spitch, size_t width, size_t height, cudaMemcpyKind kind); 
#line 4760
extern cudaError_t __stdcall cudaMemcpy2DFromArray(void * dst, size_t dpitch, cudaArray_const_t src, size_t wOffset, size_t hOffset, size_t width, size_t height, cudaMemcpyKind kind); 
#line 4805
extern cudaError_t __stdcall cudaMemcpy2DArrayToArray(cudaArray_t dst, size_t wOffsetDst, size_t hOffsetDst, cudaArray_const_t src, size_t wOffsetSrc, size_t hOffsetSrc, size_t width, size_t height, cudaMemcpyKind kind = cudaMemcpyDeviceToDevice); 
#line 4846
extern cudaError_t __stdcall cudaMemcpyToSymbol(const void * symbol, const void * src, size_t count, size_t offset = 0, cudaMemcpyKind kind = cudaMemcpyHostToDevice); 
#line 4887
extern cudaError_t __stdcall cudaMemcpyFromSymbol(void * dst, const void * symbol, size_t count, size_t offset = 0, cudaMemcpyKind kind = cudaMemcpyDeviceToHost); 
#line 4941
extern cudaError_t __stdcall cudaMemcpyAsync(void * dst, const void * src, size_t count, cudaMemcpyKind kind, cudaStream_t stream = 0); 
#line 4974
extern cudaError_t __stdcall cudaMemcpyPeerAsync(void * dst, int dstDevice, const void * src, int srcDevice, size_t count, cudaStream_t stream = 0); 
#line 5021
extern cudaError_t __stdcall cudaMemcpyToArrayAsync(cudaArray_t dst, size_t wOffset, size_t hOffset, const void * src, size_t count, cudaMemcpyKind kind, cudaStream_t stream = 0); 
#line 5067
extern cudaError_t __stdcall cudaMemcpyFromArrayAsync(void * dst, cudaArray_const_t src, size_t wOffset, size_t hOffset, size_t count, cudaMemcpyKind kind, cudaStream_t stream = 0); 
#line 5127
extern cudaError_t __stdcall cudaMemcpy2DAsync(void * dst, size_t dpitch, const void * src, size_t spitch, size_t width, size_t height, cudaMemcpyKind kind, cudaStream_t stream = 0); 
#line 5182
extern cudaError_t __stdcall cudaMemcpy2DToArrayAsync(cudaArray_t dst, size_t wOffset, size_t hOffset, const void * src, size_t spitch, size_t width, size_t height, cudaMemcpyKind kind, cudaStream_t stream = 0); 
#line 5236
extern cudaError_t __stdcall cudaMemcpy2DFromArrayAsync(void * dst, size_t dpitch, cudaArray_const_t src, size_t wOffset, size_t hOffset, size_t width, size_t height, cudaMemcpyKind kind, cudaStream_t stream = 0); 
#line 5285
extern cudaError_t __stdcall cudaMemcpyToSymbolAsync(const void * symbol, const void * src, size_t count, size_t offset, cudaMemcpyKind kind, cudaStream_t stream = 0); 
#line 5334
extern cudaError_t __stdcall cudaMemcpyFromSymbolAsync(void * dst, const void * symbol, size_t count, size_t offset, cudaMemcpyKind kind, cudaStream_t stream = 0); 
#line 5361
extern cudaError_t __stdcall cudaMemset(void * devPtr, int value, size_t count); 
#line 5393
extern cudaError_t __stdcall cudaMemset2D(void * devPtr, size_t pitch, int value, size_t width, size_t height); 
#line 5435
extern cudaError_t __stdcall cudaMemset3D(cudaPitchedPtr pitchedDevPtr, int value, cudaExtent extent); 
#line 5469
extern cudaError_t __stdcall cudaMemsetAsync(void * devPtr, int value, size_t count, cudaStream_t stream = 0); 
#line 5508
extern cudaError_t __stdcall cudaMemset2DAsync(void * devPtr, size_t pitch, int value, size_t width, size_t height, cudaStream_t stream = 0); 
#line 5557
extern cudaError_t __stdcall cudaMemset3DAsync(cudaPitchedPtr pitchedDevPtr, int value, cudaExtent extent, cudaStream_t stream = 0); 
#line 5583
extern cudaError_t __stdcall cudaGetSymbolAddress(void ** devPtr, const void * symbol); 
#line 5608
extern cudaError_t __stdcall cudaGetSymbolSize(size_t * size, const void * symbol); 
#line 5676
extern cudaError_t __stdcall cudaMemPrefetchAsync(const void * devPtr, size_t count, int dstDevice, cudaStream_t stream = 0); 
#line 5763
extern cudaError_t __stdcall cudaMemAdvise(const void * devPtr, size_t count, cudaMemoryAdvise advice, int device); 
#line 5820
extern cudaError_t __stdcall cudaMemRangeGetAttribute(void * data, size_t dataSize, cudaMemRangeAttribute attribute, const void * devPtr, size_t count); 
#line 5857
extern cudaError_t __stdcall cudaMemRangeGetAttributes(void ** data, size_t * dataSizes, cudaMemRangeAttribute * attributes, size_t numAttributes, const void * devPtr, size_t count); 
#line 6011
extern cudaError_t __stdcall cudaPointerGetAttributes(cudaPointerAttributes * attributes, const void * ptr); 
#line 6050
extern cudaError_t __stdcall cudaDeviceCanAccessPeer(int * canAccessPeer, int device, int peerDevice); 
#line 6090
extern cudaError_t __stdcall cudaDeviceEnablePeerAccess(int peerDevice, unsigned flags); 
#line 6110
extern cudaError_t __stdcall cudaDeviceDisablePeerAccess(int peerDevice); 
#line 6171
extern cudaError_t __stdcall cudaGraphicsUnregisterResource(cudaGraphicsResource_t resource); 
#line 6204
extern cudaError_t __stdcall cudaGraphicsResourceSetMapFlags(cudaGraphicsResource_t resource, unsigned flags); 
#line 6241
extern cudaError_t __stdcall cudaGraphicsMapResources(int count, cudaGraphicsResource_t * resources, cudaStream_t stream = 0); 
#line 6274
extern cudaError_t __stdcall cudaGraphicsUnmapResources(int count, cudaGraphicsResource_t * resources, cudaStream_t stream = 0); 
#line 6304
extern cudaError_t __stdcall cudaGraphicsResourceGetMappedPointer(void ** devPtr, size_t * size, cudaGraphicsResource_t resource); 
#line 6340
extern cudaError_t __stdcall cudaGraphicsSubResourceGetMappedArray(cudaArray_t * array, cudaGraphicsResource_t resource, unsigned arrayIndex, unsigned mipLevel); 
#line 6367
extern cudaError_t __stdcall cudaGraphicsResourceGetMappedMipmappedArray(cudaMipmappedArray_t * mipmappedArray, cudaGraphicsResource_t resource); 
#line 6407
extern cudaError_t __stdcall cudaGetChannelDesc(cudaChannelFormatDesc * desc, cudaArray_const_t array); 
#line 6443
extern cudaChannelFormatDesc __stdcall cudaCreateChannelDesc(int x, int y, int z, int w, cudaChannelFormatKind f); 
#line 6494
extern cudaError_t __stdcall cudaBindTexture(size_t * offset, const textureReference * texref, const void * devPtr, const cudaChannelFormatDesc * desc, size_t size = 4294967295U); 
#line 6549
extern cudaError_t __stdcall cudaBindTexture2D(size_t * offset, const textureReference * texref, const void * devPtr, const cudaChannelFormatDesc * desc, size_t width, size_t height, size_t pitch); 
#line 6583
extern cudaError_t __stdcall cudaBindTextureToArray(const textureReference * texref, cudaArray_const_t array, const cudaChannelFormatDesc * desc); 
#line 6619
extern cudaError_t __stdcall cudaBindTextureToMipmappedArray(const textureReference * texref, cudaMipmappedArray_const_t mipmappedArray, const cudaChannelFormatDesc * desc); 
#line 6640
extern cudaError_t __stdcall cudaUnbindTexture(const textureReference * texref); 
#line 6665
extern cudaError_t __stdcall cudaGetTextureAlignmentOffset(size_t * offset, const textureReference * texref); 
#line 6691
extern cudaError_t __stdcall cudaGetTextureReference(const textureReference ** texref, const void * symbol); 
#line 6732
extern cudaError_t __stdcall cudaBindSurfaceToArray(const surfaceReference * surfref, cudaArray_const_t array, const cudaChannelFormatDesc * desc); 
#line 6753
extern cudaError_t __stdcall cudaGetSurfaceReference(const surfaceReference ** surfref, const void * symbol); 
#line 6981
extern cudaError_t __stdcall cudaCreateTextureObject(cudaTextureObject_t * pTexObject, const cudaResourceDesc * pResDesc, const cudaTextureDesc * pTexDesc, const cudaResourceViewDesc * pResViewDesc); 
#line 6998
extern cudaError_t __stdcall cudaDestroyTextureObject(cudaTextureObject_t texObject); 
#line 7016
extern cudaError_t __stdcall cudaGetTextureObjectResourceDesc(cudaResourceDesc * pResDesc, cudaTextureObject_t texObject); 
#line 7034
extern cudaError_t __stdcall cudaGetTextureObjectTextureDesc(cudaTextureDesc * pTexDesc, cudaTextureObject_t texObject); 
#line 7053
extern cudaError_t __stdcall cudaGetTextureObjectResourceViewDesc(cudaResourceViewDesc * pResViewDesc, cudaTextureObject_t texObject); 
#line 7094
extern cudaError_t __stdcall cudaCreateSurfaceObject(cudaSurfaceObject_t * pSurfObject, const cudaResourceDesc * pResDesc); 
#line 7111
extern cudaError_t __stdcall cudaDestroySurfaceObject(cudaSurfaceObject_t surfObject); 
#line 7128
extern cudaError_t __stdcall cudaGetSurfaceObjectResourceDesc(cudaResourceDesc * pResDesc, cudaSurfaceObject_t surfObject); 
#line 7157
extern cudaError_t __stdcall cudaDriverGetVersion(int * driverVersion); 
#line 7176
extern cudaError_t __stdcall cudaRuntimeGetVersion(int * runtimeVersion); 
#line 7181
extern cudaError_t __stdcall cudaGetExportTable(const void ** ppExportTable, const cudaUUID_t * pExportTableId); 
#line 7409 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\cuda_runtime_api.h"
}
#line 107 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\channel_descriptor.h"
template< class T> __inline ::cudaChannelFormatDesc cudaCreateChannelDesc() 
#line 108
{ 
#line 109
return cudaCreateChannelDesc(0, 0, 0, 0, cudaChannelFormatKindNone); 
#line 110
} 
#line 112
static __inline cudaChannelFormatDesc cudaCreateChannelDescHalf() 
#line 113
{ 
#line 114
int e = (((int)sizeof(unsigned short)) * 8); 
#line 116
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindFloat); 
#line 117
} 
#line 119
static __inline cudaChannelFormatDesc cudaCreateChannelDescHalf1() 
#line 120
{ 
#line 121
int e = (((int)sizeof(unsigned short)) * 8); 
#line 123
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindFloat); 
#line 124
} 
#line 126
static __inline cudaChannelFormatDesc cudaCreateChannelDescHalf2() 
#line 127
{ 
#line 128
int e = (((int)sizeof(unsigned short)) * 8); 
#line 130
return cudaCreateChannelDesc(e, e, 0, 0, cudaChannelFormatKindFloat); 
#line 131
} 
#line 133
static __inline cudaChannelFormatDesc cudaCreateChannelDescHalf4() 
#line 134
{ 
#line 135
int e = (((int)sizeof(unsigned short)) * 8); 
#line 137
return cudaCreateChannelDesc(e, e, e, e, cudaChannelFormatKindFloat); 
#line 138
} 
#line 140
template<> __inline cudaChannelFormatDesc cudaCreateChannelDesc< char> () 
#line 141
{ 
#line 142
int e = (((int)sizeof(char)) * 8); 
#line 147 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\channel_descriptor.h"
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindSigned); 
#line 149 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\channel_descriptor.h"
} 
#line 151
template<> __inline cudaChannelFormatDesc cudaCreateChannelDesc< signed char> () 
#line 152
{ 
#line 153
int e = (((int)sizeof(signed char)) * 8); 
#line 155
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindSigned); 
#line 156
} 
#line 158
template<> __inline cudaChannelFormatDesc cudaCreateChannelDesc< unsigned char> () 
#line 159
{ 
#line 160
int e = (((int)sizeof(unsigned char)) * 8); 
#line 162
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindUnsigned); 
#line 163
} 
#line 165
template<> __inline cudaChannelFormatDesc cudaCreateChannelDesc< char1> () 
#line 166
{ 
#line 167
int e = (((int)sizeof(signed char)) * 8); 
#line 169
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindSigned); 
#line 170
} 
#line 172
template<> __inline cudaChannelFormatDesc cudaCreateChannelDesc< uchar1> () 
#line 173
{ 
#line 174
int e = (((int)sizeof(unsigned char)) * 8); 
#line 176
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindUnsigned); 
#line 177
} 
#line 179
template<> __inline cudaChannelFormatDesc cudaCreateChannelDesc< char2> () 
#line 180
{ 
#line 181
int e = (((int)sizeof(signed char)) * 8); 
#line 183
return cudaCreateChannelDesc(e, e, 0, 0, cudaChannelFormatKindSigned); 
#line 184
} 
#line 186
template<> __inline cudaChannelFormatDesc cudaCreateChannelDesc< uchar2> () 
#line 187
{ 
#line 188
int e = (((int)sizeof(unsigned char)) * 8); 
#line 190
return cudaCreateChannelDesc(e, e, 0, 0, cudaChannelFormatKindUnsigned); 
#line 191
} 
#line 193
template<> __inline cudaChannelFormatDesc cudaCreateChannelDesc< char4> () 
#line 194
{ 
#line 195
int e = (((int)sizeof(signed char)) * 8); 
#line 197
return cudaCreateChannelDesc(e, e, e, e, cudaChannelFormatKindSigned); 
#line 198
} 
#line 200
template<> __inline cudaChannelFormatDesc cudaCreateChannelDesc< uchar4> () 
#line 201
{ 
#line 202
int e = (((int)sizeof(unsigned char)) * 8); 
#line 204
return cudaCreateChannelDesc(e, e, e, e, cudaChannelFormatKindUnsigned); 
#line 205
} 
#line 207
template<> __inline cudaChannelFormatDesc cudaCreateChannelDesc< short> () 
#line 208
{ 
#line 209
int e = (((int)sizeof(short)) * 8); 
#line 211
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindSigned); 
#line 212
} 
#line 214
template<> __inline cudaChannelFormatDesc cudaCreateChannelDesc< unsigned short> () 
#line 215
{ 
#line 216
int e = (((int)sizeof(unsigned short)) * 8); 
#line 218
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindUnsigned); 
#line 219
} 
#line 221
template<> __inline cudaChannelFormatDesc cudaCreateChannelDesc< short1> () 
#line 222
{ 
#line 223
int e = (((int)sizeof(short)) * 8); 
#line 225
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindSigned); 
#line 226
} 
#line 228
template<> __inline cudaChannelFormatDesc cudaCreateChannelDesc< ushort1> () 
#line 229
{ 
#line 230
int e = (((int)sizeof(unsigned short)) * 8); 
#line 232
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindUnsigned); 
#line 233
} 
#line 235
template<> __inline cudaChannelFormatDesc cudaCreateChannelDesc< short2> () 
#line 236
{ 
#line 237
int e = (((int)sizeof(short)) * 8); 
#line 239
return cudaCreateChannelDesc(e, e, 0, 0, cudaChannelFormatKindSigned); 
#line 240
} 
#line 242
template<> __inline cudaChannelFormatDesc cudaCreateChannelDesc< ushort2> () 
#line 243
{ 
#line 244
int e = (((int)sizeof(unsigned short)) * 8); 
#line 246
return cudaCreateChannelDesc(e, e, 0, 0, cudaChannelFormatKindUnsigned); 
#line 247
} 
#line 249
template<> __inline cudaChannelFormatDesc cudaCreateChannelDesc< short4> () 
#line 250
{ 
#line 251
int e = (((int)sizeof(short)) * 8); 
#line 253
return cudaCreateChannelDesc(e, e, e, e, cudaChannelFormatKindSigned); 
#line 254
} 
#line 256
template<> __inline cudaChannelFormatDesc cudaCreateChannelDesc< ushort4> () 
#line 257
{ 
#line 258
int e = (((int)sizeof(unsigned short)) * 8); 
#line 260
return cudaCreateChannelDesc(e, e, e, e, cudaChannelFormatKindUnsigned); 
#line 261
} 
#line 263
template<> __inline cudaChannelFormatDesc cudaCreateChannelDesc< int> () 
#line 264
{ 
#line 265
int e = (((int)sizeof(int)) * 8); 
#line 267
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindSigned); 
#line 268
} 
#line 270
template<> __inline cudaChannelFormatDesc cudaCreateChannelDesc< unsigned> () 
#line 271
{ 
#line 272
int e = (((int)sizeof(unsigned)) * 8); 
#line 274
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindUnsigned); 
#line 275
} 
#line 277
template<> __inline cudaChannelFormatDesc cudaCreateChannelDesc< int1> () 
#line 278
{ 
#line 279
int e = (((int)sizeof(int)) * 8); 
#line 281
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindSigned); 
#line 282
} 
#line 284
template<> __inline cudaChannelFormatDesc cudaCreateChannelDesc< uint1> () 
#line 285
{ 
#line 286
int e = (((int)sizeof(unsigned)) * 8); 
#line 288
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindUnsigned); 
#line 289
} 
#line 291
template<> __inline cudaChannelFormatDesc cudaCreateChannelDesc< int2> () 
#line 292
{ 
#line 293
int e = (((int)sizeof(int)) * 8); 
#line 295
return cudaCreateChannelDesc(e, e, 0, 0, cudaChannelFormatKindSigned); 
#line 296
} 
#line 298
template<> __inline cudaChannelFormatDesc cudaCreateChannelDesc< uint2> () 
#line 299
{ 
#line 300
int e = (((int)sizeof(unsigned)) * 8); 
#line 302
return cudaCreateChannelDesc(e, e, 0, 0, cudaChannelFormatKindUnsigned); 
#line 303
} 
#line 305
template<> __inline cudaChannelFormatDesc cudaCreateChannelDesc< int4> () 
#line 306
{ 
#line 307
int e = (((int)sizeof(int)) * 8); 
#line 309
return cudaCreateChannelDesc(e, e, e, e, cudaChannelFormatKindSigned); 
#line 310
} 
#line 312
template<> __inline cudaChannelFormatDesc cudaCreateChannelDesc< uint4> () 
#line 313
{ 
#line 314
int e = (((int)sizeof(unsigned)) * 8); 
#line 316
return cudaCreateChannelDesc(e, e, e, e, cudaChannelFormatKindUnsigned); 
#line 317
} 
#line 321
template<> __inline cudaChannelFormatDesc cudaCreateChannelDesc< long> () 
#line 322
{ 
#line 323
int e = (((int)sizeof(long)) * 8); 
#line 325
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindSigned); 
#line 326
} 
#line 328
template<> __inline cudaChannelFormatDesc cudaCreateChannelDesc< unsigned long> () 
#line 329
{ 
#line 330
int e = (((int)sizeof(unsigned long)) * 8); 
#line 332
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindUnsigned); 
#line 333
} 
#line 335
template<> __inline cudaChannelFormatDesc cudaCreateChannelDesc< long1> () 
#line 336
{ 
#line 337
int e = (((int)sizeof(long)) * 8); 
#line 339
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindSigned); 
#line 340
} 
#line 342
template<> __inline cudaChannelFormatDesc cudaCreateChannelDesc< ulong1> () 
#line 343
{ 
#line 344
int e = (((int)sizeof(unsigned long)) * 8); 
#line 346
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindUnsigned); 
#line 347
} 
#line 349
template<> __inline cudaChannelFormatDesc cudaCreateChannelDesc< long2> () 
#line 350
{ 
#line 351
int e = (((int)sizeof(long)) * 8); 
#line 353
return cudaCreateChannelDesc(e, e, 0, 0, cudaChannelFormatKindSigned); 
#line 354
} 
#line 356
template<> __inline cudaChannelFormatDesc cudaCreateChannelDesc< ulong2> () 
#line 357
{ 
#line 358
int e = (((int)sizeof(unsigned long)) * 8); 
#line 360
return cudaCreateChannelDesc(e, e, 0, 0, cudaChannelFormatKindUnsigned); 
#line 361
} 
#line 363
template<> __inline cudaChannelFormatDesc cudaCreateChannelDesc< long4> () 
#line 364
{ 
#line 365
int e = (((int)sizeof(long)) * 8); 
#line 367
return cudaCreateChannelDesc(e, e, e, e, cudaChannelFormatKindSigned); 
#line 368
} 
#line 370
template<> __inline cudaChannelFormatDesc cudaCreateChannelDesc< ulong4> () 
#line 371
{ 
#line 372
int e = (((int)sizeof(unsigned long)) * 8); 
#line 374
return cudaCreateChannelDesc(e, e, e, e, cudaChannelFormatKindUnsigned); 
#line 375
} 
#line 379 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\channel_descriptor.h"
template<> __inline cudaChannelFormatDesc cudaCreateChannelDesc< float> () 
#line 380
{ 
#line 381
int e = (((int)sizeof(float)) * 8); 
#line 383
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindFloat); 
#line 384
} 
#line 386
template<> __inline cudaChannelFormatDesc cudaCreateChannelDesc< float1> () 
#line 387
{ 
#line 388
int e = (((int)sizeof(float)) * 8); 
#line 390
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindFloat); 
#line 391
} 
#line 393
template<> __inline cudaChannelFormatDesc cudaCreateChannelDesc< float2> () 
#line 394
{ 
#line 395
int e = (((int)sizeof(float)) * 8); 
#line 397
return cudaCreateChannelDesc(e, e, 0, 0, cudaChannelFormatKindFloat); 
#line 398
} 
#line 400
template<> __inline cudaChannelFormatDesc cudaCreateChannelDesc< float4> () 
#line 401
{ 
#line 402
int e = (((int)sizeof(float)) * 8); 
#line 404
return cudaCreateChannelDesc(e, e, e, e, cudaChannelFormatKindFloat); 
#line 405
} 
#line 79 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\driver_functions.h"
static __inline cudaPitchedPtr make_cudaPitchedPtr(void *d, size_t p, size_t xsz, size_t ysz) 
#line 80
{ 
#line 81
cudaPitchedPtr s; 
#line 83
(s.ptr) = d; 
#line 84
(s.pitch) = p; 
#line 85
(s.xsize) = xsz; 
#line 86
(s.ysize) = ysz; 
#line 88
return s; 
#line 89
} 
#line 106
static __inline cudaPos make_cudaPos(size_t x, size_t y, size_t z) 
#line 107
{ 
#line 108
cudaPos p; 
#line 110
(p.x) = x; 
#line 111
(p.y) = y; 
#line 112
(p.z) = z; 
#line 114
return p; 
#line 115
} 
#line 132
static __inline cudaExtent make_cudaExtent(size_t w, size_t h, size_t d) 
#line 133
{ 
#line 134
cudaExtent e; 
#line 136
(e.width) = w; 
#line 137
(e.height) = h; 
#line 138
(e.depth) = d; 
#line 140
return e; 
#line 141
} 
#line 75 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\vector_functions.h"
static __inline char1 make_char1(signed char x); 
#line 77
static __inline uchar1 make_uchar1(unsigned char x); 
#line 79
static __inline char2 make_char2(signed char x, signed char y); 
#line 81
static __inline uchar2 make_uchar2(unsigned char x, unsigned char y); 
#line 83
static __inline char3 make_char3(signed char x, signed char y, signed char z); 
#line 85
static __inline uchar3 make_uchar3(unsigned char x, unsigned char y, unsigned char z); 
#line 87
static __inline char4 make_char4(signed char x, signed char y, signed char z, signed char w); 
#line 89
static __inline uchar4 make_uchar4(unsigned char x, unsigned char y, unsigned char z, unsigned char w); 
#line 91
static __inline short1 make_short1(short x); 
#line 93
static __inline ushort1 make_ushort1(unsigned short x); 
#line 95
static __inline short2 make_short2(short x, short y); 
#line 97
static __inline ushort2 make_ushort2(unsigned short x, unsigned short y); 
#line 99
static __inline short3 make_short3(short x, short y, short z); 
#line 101
static __inline ushort3 make_ushort3(unsigned short x, unsigned short y, unsigned short z); 
#line 103
static __inline short4 make_short4(short x, short y, short z, short w); 
#line 105
static __inline ushort4 make_ushort4(unsigned short x, unsigned short y, unsigned short z, unsigned short w); 
#line 107
static __inline int1 make_int1(int x); 
#line 109
static __inline uint1 make_uint1(unsigned x); 
#line 111
static __inline int2 make_int2(int x, int y); 
#line 113
static __inline uint2 make_uint2(unsigned x, unsigned y); 
#line 115
static __inline int3 make_int3(int x, int y, int z); 
#line 117
static __inline uint3 make_uint3(unsigned x, unsigned y, unsigned z); 
#line 119
static __inline int4 make_int4(int x, int y, int z, int w); 
#line 121
static __inline uint4 make_uint4(unsigned x, unsigned y, unsigned z, unsigned w); 
#line 123
static __inline long1 make_long1(long x); 
#line 125
static __inline ulong1 make_ulong1(unsigned long x); 
#line 127
static __inline long2 make_long2(long x, long y); 
#line 129
static __inline ulong2 make_ulong2(unsigned long x, unsigned long y); 
#line 131
static __inline long3 make_long3(long x, long y, long z); 
#line 133
static __inline ulong3 make_ulong3(unsigned long x, unsigned long y, unsigned long z); 
#line 135
static __inline long4 make_long4(long x, long y, long z, long w); 
#line 137
static __inline ulong4 make_ulong4(unsigned long x, unsigned long y, unsigned long z, unsigned long w); 
#line 139
static __inline float1 make_float1(float x); 
#line 141
static __inline float2 make_float2(float x, float y); 
#line 143
static __inline float3 make_float3(float x, float y, float z); 
#line 145
static __inline float4 make_float4(float x, float y, float z, float w); 
#line 147
static __inline longlong1 make_longlong1(__int64 x); 
#line 149
static __inline ulonglong1 make_ulonglong1(unsigned __int64 x); 
#line 151
static __inline longlong2 make_longlong2(__int64 x, __int64 y); 
#line 153
static __inline ulonglong2 make_ulonglong2(unsigned __int64 x, unsigned __int64 y); 
#line 155
static __inline longlong3 make_longlong3(__int64 x, __int64 y, __int64 z); 
#line 157
static __inline ulonglong3 make_ulonglong3(unsigned __int64 x, unsigned __int64 y, unsigned __int64 z); 
#line 159
static __inline longlong4 make_longlong4(__int64 x, __int64 y, __int64 z, __int64 w); 
#line 161
static __inline ulonglong4 make_ulonglong4(unsigned __int64 x, unsigned __int64 y, unsigned __int64 z, unsigned __int64 w); 
#line 163
static __inline double1 make_double1(double x); 
#line 165
static __inline double2 make_double2(double x, double y); 
#line 167
static __inline double3 make_double3(double x, double y, double z); 
#line 169
static __inline double4 make_double4(double x, double y, double z, double w); 
#line 75 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\vector_functions.hpp"
static __inline char1 make_char1(signed char x) 
#line 76
{ 
#line 77
char1 t; (t.x) = x; return t; 
#line 78
} 
#line 80
static __inline uchar1 make_uchar1(unsigned char x) 
#line 81
{ 
#line 82
uchar1 t; (t.x) = x; return t; 
#line 83
} 
#line 85
static __inline char2 make_char2(signed char x, signed char y) 
#line 86
{ 
#line 87
char2 t; (t.x) = x; (t.y) = y; return t; 
#line 88
} 
#line 90
static __inline uchar2 make_uchar2(unsigned char x, unsigned char y) 
#line 91
{ 
#line 92
uchar2 t; (t.x) = x; (t.y) = y; return t; 
#line 93
} 
#line 95
static __inline char3 make_char3(signed char x, signed char y, signed char z) 
#line 96
{ 
#line 97
char3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t; 
#line 98
} 
#line 100
static __inline uchar3 make_uchar3(unsigned char x, unsigned char y, unsigned char z) 
#line 101
{ 
#line 102
uchar3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t; 
#line 103
} 
#line 105
static __inline char4 make_char4(signed char x, signed char y, signed char z, signed char w) 
#line 106
{ 
#line 107
char4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t; 
#line 108
} 
#line 110
static __inline uchar4 make_uchar4(unsigned char x, unsigned char y, unsigned char z, unsigned char w) 
#line 111
{ 
#line 112
uchar4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t; 
#line 113
} 
#line 115
static __inline short1 make_short1(short x) 
#line 116
{ 
#line 117
short1 t; (t.x) = x; return t; 
#line 118
} 
#line 120
static __inline ushort1 make_ushort1(unsigned short x) 
#line 121
{ 
#line 122
ushort1 t; (t.x) = x; return t; 
#line 123
} 
#line 125
static __inline short2 make_short2(short x, short y) 
#line 126
{ 
#line 127
short2 t; (t.x) = x; (t.y) = y; return t; 
#line 128
} 
#line 130
static __inline ushort2 make_ushort2(unsigned short x, unsigned short y) 
#line 131
{ 
#line 132
ushort2 t; (t.x) = x; (t.y) = y; return t; 
#line 133
} 
#line 135
static __inline short3 make_short3(short x, short y, short z) 
#line 136
{ 
#line 137
short3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t; 
#line 138
} 
#line 140
static __inline ushort3 make_ushort3(unsigned short x, unsigned short y, unsigned short z) 
#line 141
{ 
#line 142
ushort3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t; 
#line 143
} 
#line 145
static __inline short4 make_short4(short x, short y, short z, short w) 
#line 146
{ 
#line 147
short4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t; 
#line 148
} 
#line 150
static __inline ushort4 make_ushort4(unsigned short x, unsigned short y, unsigned short z, unsigned short w) 
#line 151
{ 
#line 152
ushort4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t; 
#line 153
} 
#line 155
static __inline int1 make_int1(int x) 
#line 156
{ 
#line 157
int1 t; (t.x) = x; return t; 
#line 158
} 
#line 160
static __inline uint1 make_uint1(unsigned x) 
#line 161
{ 
#line 162
uint1 t; (t.x) = x; return t; 
#line 163
} 
#line 165
static __inline int2 make_int2(int x, int y) 
#line 166
{ 
#line 167
int2 t; (t.x) = x; (t.y) = y; return t; 
#line 168
} 
#line 170
static __inline uint2 make_uint2(unsigned x, unsigned y) 
#line 171
{ 
#line 172
uint2 t; (t.x) = x; (t.y) = y; return t; 
#line 173
} 
#line 175
static __inline int3 make_int3(int x, int y, int z) 
#line 176
{ 
#line 177
int3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t; 
#line 178
} 
#line 180
static __inline uint3 make_uint3(unsigned x, unsigned y, unsigned z) 
#line 181
{ 
#line 182
uint3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t; 
#line 183
} 
#line 185
static __inline int4 make_int4(int x, int y, int z, int w) 
#line 186
{ 
#line 187
int4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t; 
#line 188
} 
#line 190
static __inline uint4 make_uint4(unsigned x, unsigned y, unsigned z, unsigned w) 
#line 191
{ 
#line 192
uint4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t; 
#line 193
} 
#line 195
static __inline long1 make_long1(long x) 
#line 196
{ 
#line 197
long1 t; (t.x) = x; return t; 
#line 198
} 
#line 200
static __inline ulong1 make_ulong1(unsigned long x) 
#line 201
{ 
#line 202
ulong1 t; (t.x) = x; return t; 
#line 203
} 
#line 205
static __inline long2 make_long2(long x, long y) 
#line 206
{ 
#line 207
long2 t; (t.x) = x; (t.y) = y; return t; 
#line 208
} 
#line 210
static __inline ulong2 make_ulong2(unsigned long x, unsigned long y) 
#line 211
{ 
#line 212
ulong2 t; (t.x) = x; (t.y) = y; return t; 
#line 213
} 
#line 215
static __inline long3 make_long3(long x, long y, long z) 
#line 216
{ 
#line 217
long3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t; 
#line 218
} 
#line 220
static __inline ulong3 make_ulong3(unsigned long x, unsigned long y, unsigned long z) 
#line 221
{ 
#line 222
ulong3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t; 
#line 223
} 
#line 225
static __inline long4 make_long4(long x, long y, long z, long w) 
#line 226
{ 
#line 227
long4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t; 
#line 228
} 
#line 230
static __inline ulong4 make_ulong4(unsigned long x, unsigned long y, unsigned long z, unsigned long w) 
#line 231
{ 
#line 232
ulong4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t; 
#line 233
} 
#line 235
static __inline float1 make_float1(float x) 
#line 236
{ 
#line 237
float1 t; (t.x) = x; return t; 
#line 238
} 
#line 240
static __inline float2 make_float2(float x, float y) 
#line 241
{ 
#line 242
float2 t; (t.x) = x; (t.y) = y; return t; 
#line 243
} 
#line 245
static __inline float3 make_float3(float x, float y, float z) 
#line 246
{ 
#line 247
float3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t; 
#line 248
} 
#line 250
static __inline float4 make_float4(float x, float y, float z, float w) 
#line 251
{ 
#line 252
float4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t; 
#line 253
} 
#line 255
static __inline longlong1 make_longlong1(__int64 x) 
#line 256
{ 
#line 257
longlong1 t; (t.x) = x; return t; 
#line 258
} 
#line 260
static __inline ulonglong1 make_ulonglong1(unsigned __int64 x) 
#line 261
{ 
#line 262
ulonglong1 t; (t.x) = x; return t; 
#line 263
} 
#line 265
static __inline longlong2 make_longlong2(__int64 x, __int64 y) 
#line 266
{ 
#line 267
longlong2 t; (t.x) = x; (t.y) = y; return t; 
#line 268
} 
#line 270
static __inline ulonglong2 make_ulonglong2(unsigned __int64 x, unsigned __int64 y) 
#line 271
{ 
#line 272
ulonglong2 t; (t.x) = x; (t.y) = y; return t; 
#line 273
} 
#line 275
static __inline longlong3 make_longlong3(__int64 x, __int64 y, __int64 z) 
#line 276
{ 
#line 277
longlong3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t; 
#line 278
} 
#line 280
static __inline ulonglong3 make_ulonglong3(unsigned __int64 x, unsigned __int64 y, unsigned __int64 z) 
#line 281
{ 
#line 282
ulonglong3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t; 
#line 283
} 
#line 285
static __inline longlong4 make_longlong4(__int64 x, __int64 y, __int64 z, __int64 w) 
#line 286
{ 
#line 287
longlong4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t; 
#line 288
} 
#line 290
static __inline ulonglong4 make_ulonglong4(unsigned __int64 x, unsigned __int64 y, unsigned __int64 z, unsigned __int64 w) 
#line 291
{ 
#line 292
ulonglong4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t; 
#line 293
} 
#line 295
static __inline double1 make_double1(double x) 
#line 296
{ 
#line 297
double1 t; (t.x) = x; return t; 
#line 298
} 
#line 300
static __inline double2 make_double2(double x, double y) 
#line 301
{ 
#line 302
double2 t; (t.x) = x; (t.y) = y; return t; 
#line 303
} 
#line 305
static __inline double3 make_double3(double x, double y, double z) 
#line 306
{ 
#line 307
double3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t; 
#line 308
} 
#line 310
static __inline double4 make_double4(double x, double y, double z, double w) 
#line 311
{ 
#line 312
double4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t; 
#line 313
} 
#line 13 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.16299.0\\ucrt\\errno.h"
__pragma( pack ( push, 8 )) extern "C" {
#line 18
__declspec(dllimport) int *__cdecl _errno(); 
#line 21
__declspec(dllimport) errno_t __cdecl _set_errno(int _Value); 
#line 22
__declspec(dllimport) errno_t __cdecl _get_errno(int * _Value); 
#line 24
__declspec(dllimport) unsigned long *__cdecl __doserrno(); 
#line 27
__declspec(dllimport) errno_t __cdecl _set_doserrno(unsigned long _Value); 
#line 28
__declspec(dllimport) errno_t __cdecl _get_doserrno(unsigned long * _Value); 
#line 129 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.16299.0\\ucrt\\errno.h"
}__pragma( pack ( pop )) 
#line 14 "C:\\Program Files (x86)\\Microsoft Visual Studio 14.0\\VC\\include\\vcruntime_string.h"
__pragma( pack ( push, 8 )) extern "C" {
#line 19
__declspec(dllimport) const void *__cdecl memchr(const void * _Buf, int _Val, size_t _MaxCount); 
#line 26
int __cdecl memcmp(const void * _Buf1, const void * _Buf2, size_t _Size); 
#line 40 "C:\\Program Files (x86)\\Microsoft Visual Studio 14.0\\VC\\include\\vcruntime_string.h"
void *__cdecl memcpy(void * _Dst, const void * _Src, size_t _Size); 
#line 47
__declspec(dllimport) void *__cdecl memmove(void * _Dst, const void * _Src, size_t _Size); 
#line 60 "C:\\Program Files (x86)\\Microsoft Visual Studio 14.0\\VC\\include\\vcruntime_string.h"
void *__cdecl memset(void * _Dst, int _Val, size_t _Size); 
#line 67
__declspec(dllimport) const char *__cdecl strchr(const char * _Str, int _Val); 
#line 73
__declspec(dllimport) const char *__cdecl strrchr(const char * _Str, int _Ch); 
#line 79
__declspec(dllimport) const char *__cdecl strstr(const char * _Str, const char * _SubStr); 
#line 86
__declspec(dllimport) const __wchar_t *__cdecl wcschr(const __wchar_t * _Str, __wchar_t _Ch); 
#line 92
__declspec(dllimport) const __wchar_t *__cdecl wcsrchr(const __wchar_t * _Str, __wchar_t _Ch); 
#line 99
__declspec(dllimport) const __wchar_t *__cdecl wcsstr(const __wchar_t * _Str, const __wchar_t * _SubStr); 
#line 106
}__pragma( pack ( pop )) 
#line 14 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.16299.0\\ucrt\\corecrt_memcpy_s.h"
__pragma( pack ( push, 8 )) extern "C" {
#line 35 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.16299.0\\ucrt\\corecrt_memcpy_s.h"
static __inline errno_t __cdecl memcpy_s(void *const 
#line 36
_Destination, const rsize_t 
#line 37
_DestinationSize, const void *const 
#line 38
_Source, const rsize_t 
#line 39
_SourceSize) 
#line 41
{ 
#line 42
if (_SourceSize == (0)) 
#line 43
{ 
#line 44
return 0; 
#line 45
}  
#line 47
{ int _Expr_val = !(!(_Destination != (0))); if (!_Expr_val) { (*_errno()) = 22; _invalid_parameter_noinfo(); return 22; }  } ; 
#line 48
if ((_Source == (0)) || (_DestinationSize < _SourceSize)) 
#line 49
{ 
#line 50
memset(_Destination, 0, _DestinationSize); 
#line 52
{ int _Expr_val = !(!(_Source != (0))); if (!_Expr_val) { (*_errno()) = 22; _invalid_parameter_noinfo(); return 22; }  } ; 
#line 53
{ int _Expr_val = !(!(_DestinationSize >= _SourceSize)); if (!_Expr_val) { (*_errno()) = 34; _invalid_parameter_noinfo(); return 34; }  } ; 
#line 56
return 22; 
#line 57
}  
#line 59
memcpy(_Destination, _Source, _SourceSize); 
#line 60
return 0; 
#line 61
} 
#line 64
static __inline errno_t __cdecl memmove_s(void *const 
#line 65
_Destination, const rsize_t 
#line 66
_DestinationSize, const void *const 
#line 67
_Source, const rsize_t 
#line 68
_SourceSize) 
#line 70
{ 
#line 71
if (_SourceSize == (0)) 
#line 72
{ 
#line 73
return 0; 
#line 74
}  
#line 76
{ int _Expr_val = !(!(_Destination != (0))); if (!_Expr_val) { (*_errno()) = 22; _invalid_parameter_noinfo(); return 22; }  } ; 
#line 77
{ int _Expr_val = !(!(_Source != (0))); if (!_Expr_val) { (*_errno()) = 22; _invalid_parameter_noinfo(); return 22; }  } ; 
#line 78
{ int _Expr_val = !(!(_DestinationSize >= _SourceSize)); if (!_Expr_val) { (*_errno()) = 34; _invalid_parameter_noinfo(); return 34; }  } ; 
#line 80
memmove(_Destination, _Source, _SourceSize); 
#line 81
return 0; 
#line 82
} 
#line 88 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.16299.0\\ucrt\\corecrt_memcpy_s.h"
}__pragma( pack ( pop )) 
#line 19 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.16299.0\\ucrt\\corecrt_memory.h"
__pragma( pack ( push, 8 )) extern "C" {
#line 24
__declspec(dllimport) int __cdecl _memicmp(const void * _Buf1, const void * _Buf2, size_t _Size); 
#line 31
__declspec(dllimport) int __cdecl _memicmp_l(const void * _Buf1, const void * _Buf2, size_t _Size, _locale_t _Locale); 
#line 79 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.16299.0\\ucrt\\corecrt_memory.h"
__declspec(dllimport) void *__cdecl memccpy(void * _Dst, const void * _Src, int _Val, size_t _Size); 
#line 87
__declspec(dllimport) int __cdecl memicmp(const void * _Buf1, const void * _Buf2, size_t _Size); 
#line 100 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.16299.0\\ucrt\\corecrt_memory.h"
extern "C++" inline void *__cdecl memchr(void *
#line 101
_Pv, int 
#line 102
_C, size_t 
#line 103
_N) 
#line 105
{ 
#line 106
const void *const _Pvc = _Pv; 
#line 107
return const_cast< void *>(memchr(_Pvc, _C, _N)); 
#line 108
} 
#line 114 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.16299.0\\ucrt\\corecrt_memory.h"
}__pragma( pack ( pop )) 
#line 16 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.16299.0\\ucrt\\corecrt_wstring.h"
__pragma( pack ( push, 8 )) extern "C" {
#line 28
__declspec(dllimport) errno_t __cdecl wcscat_s(__wchar_t * _Destination, rsize_t _SizeInWords, const __wchar_t * _Source); 
#line 35
__declspec(dllimport) errno_t __cdecl wcscpy_s(__wchar_t * _Destination, rsize_t _SizeInWords, const __wchar_t * _Source); 
#line 42
__declspec(dllimport) errno_t __cdecl wcsncat_s(__wchar_t * _Destination, rsize_t _SizeInWords, const __wchar_t * _Source, rsize_t _MaxCount); 
#line 50
__declspec(dllimport) errno_t __cdecl wcsncpy_s(__wchar_t * _Destination, rsize_t _SizeInWords, const __wchar_t * _Source, rsize_t _MaxCount); 
#line 58
__declspec(dllimport) __wchar_t *__cdecl wcstok_s(__wchar_t * _String, const __wchar_t * _Delimiter, __wchar_t ** _Context); 
#line 79 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.16299.0\\ucrt\\corecrt_wstring.h"
__declspec(dllimport) __declspec(allocator) __wchar_t *__cdecl _wcsdup(const __wchar_t * _String); 
#line 89 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.16299.0\\ucrt\\corecrt_wstring.h"
extern "C++" {template < size_t _Size > inline errno_t __cdecl wcscat_s ( wchar_t ( & _Destination ) [ _Size ], wchar_t const * _Source ) throw ( ) { return wcscat_s ( _Destination, _Size, _Source ); }}
#line 97 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.16299.0\\ucrt\\corecrt_wstring.h"
#pragma warning(push)
#pragma warning(disable: 28719)
#pragma warning(disable: 28726)
__declspec(dllimport) __wchar_t *__cdecl wcscat(__wchar_t * _Destination, const __wchar_t * _Source); 
#line 105 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.16299.0\\ucrt\\corecrt_wstring.h"
#pragma warning(pop)
#line 109 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.16299.0\\ucrt\\corecrt_wstring.h"
__declspec(dllimport) int __cdecl wcscmp(const __wchar_t * _String1, const __wchar_t * _String2); 
#line 114
extern "C++" {template < size_t _Size > inline errno_t __cdecl wcscpy_s ( wchar_t ( & _Destination ) [ _Size ], wchar_t const * _Source ) throw ( ) { return wcscpy_s ( _Destination, _Size, _Source ); }}
#line 120 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.16299.0\\ucrt\\corecrt_wstring.h"
#pragma warning(push)
#pragma warning(disable: 28719)
#pragma warning(disable: 28726)
__declspec(dllimport) __wchar_t *__cdecl wcscpy(__wchar_t * _Destination, const __wchar_t * _Source); 
#line 128 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.16299.0\\ucrt\\corecrt_wstring.h"
#pragma warning(pop)
#line 131
__declspec(dllimport) size_t __cdecl wcscspn(const __wchar_t * _String, const __wchar_t * _Control); 
#line 137
__declspec(dllimport) size_t __cdecl wcslen(const __wchar_t * _String); 
#line 150 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.16299.0\\ucrt\\corecrt_wstring.h"
__declspec(dllimport) size_t __cdecl wcsnlen(const __wchar_t * _Source, size_t _MaxCount); 
#line 166 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.16299.0\\ucrt\\corecrt_wstring.h"
static __inline size_t __cdecl wcsnlen_s(const __wchar_t *
#line 167
_Source, size_t 
#line 168
_MaxCount) 
#line 170
{ 
#line 171
return (_Source == (0)) ? 0 : wcsnlen(_Source, _MaxCount); 
#line 172
} 
#line 176 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.16299.0\\ucrt\\corecrt_wstring.h"
extern "C++" {template < size_t _Size > inline errno_t __cdecl wcsncat_s ( wchar_t ( & _Destination ) [ _Size ], wchar_t const * _Source, size_t _Count ) throw ( ) { return wcsncat_s ( _Destination, _Size, _Source, _Count ); }}
#line 183 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.16299.0\\ucrt\\corecrt_wstring.h"
__declspec(dllimport) __wchar_t *__cdecl wcsncat(__wchar_t * _Destination, const __wchar_t * _Source, size_t _Count); 
#line 192 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.16299.0\\ucrt\\corecrt_wstring.h"
__declspec(dllimport) int __cdecl wcsncmp(const __wchar_t * _String1, const __wchar_t * _String2, size_t _MaxCount); 
#line 198
extern "C++" {template < size_t _Size > inline errno_t __cdecl wcsncpy_s ( wchar_t ( & _Destination ) [ _Size ], wchar_t const * _Source, size_t _Count ) throw ( ) { return wcsncpy_s ( _Destination, _Size, _Source, _Count ); }}
#line 205 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.16299.0\\ucrt\\corecrt_wstring.h"
__declspec(dllimport) __wchar_t *__cdecl wcsncpy(__wchar_t * _Destination, const __wchar_t * _Source, size_t _Count); 
#line 214 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.16299.0\\ucrt\\corecrt_wstring.h"
__declspec(dllimport) const __wchar_t *__cdecl wcspbrk(const __wchar_t * _String, const __wchar_t * _Control); 
#line 220
__declspec(dllimport) size_t __cdecl wcsspn(const __wchar_t * _String, const __wchar_t * _Control); 
#line 226
__declspec(dllimport) __wchar_t *__cdecl wcstok(__wchar_t * _String, const __wchar_t * _Delimiter, __wchar_t ** _Context); 
#line 243 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.16299.0\\ucrt\\corecrt_wstring.h"
#pragma warning(push)
#pragma warning(disable: 4141 4996)
#line 247
static __inline __wchar_t *__cdecl _wcstok(__wchar_t *const 
#line 248
_String, const __wchar_t *const 
#line 249
_Delimiter) 
#line 251
{ 
#line 252
return wcstok(_String, _Delimiter, 0); 
#line 253
} 
#line 261 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.16299.0\\ucrt\\corecrt_wstring.h"
extern "C++" 
#line 260
__declspec(deprecated("wcstok has been changed to conform with the ISO C standard, adding an extra context parameter. To use the legacy Microsoft wcsto" "k, define _CRT_NON_CONFORMING_WCSTOK.")) inline __wchar_t *__cdecl 
#line 261
wcstok(__wchar_t *
#line 262
_String, const __wchar_t *
#line 263
_Delimiter) throw() 
#line 265
{ 
#line 266
return wcstok(_String, _Delimiter, 0); 
#line 267
} 
#line 270 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.16299.0\\ucrt\\corecrt_wstring.h"
#pragma warning(pop)
#line 278 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.16299.0\\ucrt\\corecrt_wstring.h"
__declspec(dllimport) __wchar_t *__cdecl _wcserror(int _ErrorNumber); 
#line 283
__declspec(dllimport) errno_t __cdecl _wcserror_s(__wchar_t * _Buffer, size_t _SizeInWords, int _ErrorNumber); 
#line 289
extern "C++" {template < size_t _Size > inline errno_t __cdecl _wcserror_s ( wchar_t ( & _Buffer ) [ _Size ], int _Error ) throw ( ) { return _wcserror_s ( _Buffer, _Size, _Error ); }}
#line 298 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.16299.0\\ucrt\\corecrt_wstring.h"
__declspec(dllimport) __wchar_t *__cdecl __wcserror(const __wchar_t * _String); 
#line 302
__declspec(dllimport) errno_t __cdecl __wcserror_s(__wchar_t * _Buffer, size_t _SizeInWords, const __wchar_t * _ErrorMessage); 
#line 308
extern "C++" {template < size_t _Size > inline errno_t __cdecl __wcserror_s ( wchar_t ( & _Buffer ) [ _Size ], wchar_t const * _ErrorMessage ) throw ( ) { return __wcserror_s ( _Buffer, _Size, _ErrorMessage ); }}
#line 314 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.16299.0\\ucrt\\corecrt_wstring.h"
__declspec(dllimport) int __cdecl _wcsicmp(const __wchar_t * _String1, const __wchar_t * _String2); 
#line 319
__declspec(dllimport) int __cdecl _wcsicmp_l(const __wchar_t * _String1, const __wchar_t * _String2, _locale_t _Locale); 
#line 325
__declspec(dllimport) int __cdecl _wcsnicmp(const __wchar_t * _String1, const __wchar_t * _String2, size_t _MaxCount); 
#line 331
__declspec(dllimport) int __cdecl _wcsnicmp_l(const __wchar_t * _String1, const __wchar_t * _String2, size_t _MaxCount, _locale_t _Locale); 
#line 338
__declspec(dllimport) errno_t __cdecl _wcsnset_s(__wchar_t * _Destination, size_t _SizeInWords, __wchar_t _Value, size_t _MaxCount); 
#line 345
extern "C++" {template < size_t _Size > inline errno_t __cdecl _wcsnset_s ( wchar_t ( & _Destination ) [ _Size ], wchar_t _Value, size_t _MaxCount ) throw ( ) { return _wcsnset_s ( _Destination, _Size, _Value, _MaxCount ); }}
#line 352 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.16299.0\\ucrt\\corecrt_wstring.h"
__declspec(dllimport) __wchar_t *__cdecl _wcsnset(__wchar_t * _String, __wchar_t _Value, size_t _MaxCount); 
#line 360 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.16299.0\\ucrt\\corecrt_wstring.h"
__declspec(dllimport) __wchar_t *__cdecl _wcsrev(__wchar_t * _String); 
#line 364
__declspec(dllimport) errno_t __cdecl _wcsset_s(__wchar_t * _Destination, size_t _SizeInWords, __wchar_t _Value); 
#line 370
extern "C++" {template < size_t _Size > inline errno_t __cdecl _wcsset_s ( wchar_t ( & _String ) [ _Size ], wchar_t _Value ) throw ( ) { return _wcsset_s ( _String, _Size, _Value ); }}
#line 376 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.16299.0\\ucrt\\corecrt_wstring.h"
__declspec(dllimport) __wchar_t *__cdecl _wcsset(__wchar_t * _String, __wchar_t _Value); 
#line 383 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.16299.0\\ucrt\\corecrt_wstring.h"
__declspec(dllimport) errno_t __cdecl _wcslwr_s(__wchar_t * _String, size_t _SizeInWords); 
#line 388
extern "C++" {template < size_t _Size > inline errno_t __cdecl _wcslwr_s ( wchar_t ( & _String ) [ _Size ] ) throw ( ) { return _wcslwr_s ( _String, _Size ); }}
#line 393 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.16299.0\\ucrt\\corecrt_wstring.h"
__declspec(dllimport) __wchar_t *__cdecl _wcslwr(__wchar_t * _String); 
#line 399 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.16299.0\\ucrt\\corecrt_wstring.h"
__declspec(dllimport) errno_t __cdecl _wcslwr_s_l(__wchar_t * _String, size_t _SizeInWords, _locale_t _Locale); 
#line 405
extern "C++" {template < size_t _Size > inline errno_t __cdecl _wcslwr_s_l ( wchar_t ( & _String ) [ _Size ], _locale_t _Locale ) throw ( ) { return _wcslwr_s_l ( _String, _Size, _Locale ); }}
#line 411 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.16299.0\\ucrt\\corecrt_wstring.h"
__declspec(dllimport) __wchar_t *__cdecl _wcslwr_l(__wchar_t * _String, _locale_t _Locale); 
#line 419 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.16299.0\\ucrt\\corecrt_wstring.h"
__declspec(dllimport) errno_t __cdecl _wcsupr_s(__wchar_t * _String, size_t _Size); 
#line 424
extern "C++" {template < size_t _Size > inline errno_t __cdecl _wcsupr_s ( wchar_t ( & _String ) [ _Size ] ) throw ( ) { return _wcsupr_s ( _String, _Size ); }}
#line 429 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.16299.0\\ucrt\\corecrt_wstring.h"
__declspec(dllimport) __wchar_t *__cdecl _wcsupr(__wchar_t * _String); 
#line 435 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.16299.0\\ucrt\\corecrt_wstring.h"
__declspec(dllimport) errno_t __cdecl _wcsupr_s_l(__wchar_t * _String, size_t _Size, _locale_t _Locale); 
#line 441
extern "C++" {template < size_t _Size > inline errno_t __cdecl _wcsupr_s_l ( wchar_t ( & _String ) [ _Size ], _locale_t _Locale ) throw ( ) { return _wcsupr_s_l ( _String, _Size, _Locale ); }}
#line 447 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.16299.0\\ucrt\\corecrt_wstring.h"
__declspec(dllimport) __wchar_t *__cdecl _wcsupr_l(__wchar_t * _String, _locale_t _Locale); 
#line 456 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.16299.0\\ucrt\\corecrt_wstring.h"
__declspec(dllimport) size_t __cdecl wcsxfrm(__wchar_t * _Destination, const __wchar_t * _Source, size_t _MaxCount); 
#line 464
__declspec(dllimport) size_t __cdecl _wcsxfrm_l(__wchar_t * _Destination, const __wchar_t * _Source, size_t _MaxCount, _locale_t _Locale); 
#line 472
__declspec(dllimport) int __cdecl wcscoll(const __wchar_t * _String1, const __wchar_t * _String2); 
#line 478
__declspec(dllimport) int __cdecl _wcscoll_l(const __wchar_t * _String1, const __wchar_t * _String2, _locale_t _Locale); 
#line 485
__declspec(dllimport) int __cdecl _wcsicoll(const __wchar_t * _String1, const __wchar_t * _String2); 
#line 491
__declspec(dllimport) int __cdecl _wcsicoll_l(const __wchar_t * _String1, const __wchar_t * _String2, _locale_t _Locale); 
#line 498
__declspec(dllimport) int __cdecl _wcsncoll(const __wchar_t * _String1, const __wchar_t * _String2, size_t _MaxCount); 
#line 505
__declspec(dllimport) int __cdecl _wcsncoll_l(const __wchar_t * _String1, const __wchar_t * _String2, size_t _MaxCount, _locale_t _Locale); 
#line 513
__declspec(dllimport) int __cdecl _wcsnicoll(const __wchar_t * _String1, const __wchar_t * _String2, size_t _MaxCount); 
#line 520
__declspec(dllimport) int __cdecl _wcsnicoll_l(const __wchar_t * _String1, const __wchar_t * _String2, size_t _MaxCount, _locale_t _Locale); 
#line 535
extern "C++" {
#line 539
inline __wchar_t *__cdecl wcschr(__wchar_t *_String, __wchar_t _C) 
#line 540
{ 
#line 541
return const_cast< __wchar_t *>(wcschr(static_cast< const __wchar_t *>(_String), _C)); 
#line 542
} 
#line 545
inline __wchar_t *__cdecl wcspbrk(__wchar_t *_String, const __wchar_t *_Control) 
#line 546
{ 
#line 547
return const_cast< __wchar_t *>(wcspbrk(static_cast< const __wchar_t *>(_String), _Control)); 
#line 548
} 
#line 551
inline __wchar_t *__cdecl wcsrchr(__wchar_t *_String, __wchar_t _C) 
#line 552
{ 
#line 553
return const_cast< __wchar_t *>(wcsrchr(static_cast< const __wchar_t *>(_String), _C)); 
#line 554
} 
#line 558
inline __wchar_t *__cdecl wcsstr(__wchar_t *_String, const __wchar_t *_SubStr) 
#line 559
{ 
#line 560
return const_cast< __wchar_t *>(wcsstr(static_cast< const __wchar_t *>(_String), _SubStr)); 
#line 561
} 
#line 563
}
#line 580 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.16299.0\\ucrt\\corecrt_wstring.h"
__declspec(dllimport) __wchar_t *__cdecl wcsdup(const __wchar_t * _String); 
#line 592 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.16299.0\\ucrt\\corecrt_wstring.h"
__declspec(dllimport) int __cdecl wcsicmp(const __wchar_t * _String1, const __wchar_t * _String2); 
#line 598
__declspec(dllimport) int __cdecl wcsnicmp(const __wchar_t * _String1, const __wchar_t * _String2, size_t _MaxCount); 
#line 606
__declspec(dllimport) __wchar_t *__cdecl wcsnset(__wchar_t * _String, __wchar_t _Value, size_t _MaxCount); 
#line 614
__declspec(dllimport) __wchar_t *__cdecl wcsrev(__wchar_t * _String); 
#line 620
__declspec(dllimport) __wchar_t *__cdecl wcsset(__wchar_t * _String, __wchar_t _Value); 
#line 627
__declspec(dllimport) __wchar_t *__cdecl wcslwr(__wchar_t * _String); 
#line 633
__declspec(dllimport) __wchar_t *__cdecl wcsupr(__wchar_t * _String); 
#line 638
__declspec(dllimport) int __cdecl wcsicoll(const __wchar_t * _String1, const __wchar_t * _String2); 
#line 647 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.16299.0\\ucrt\\corecrt_wstring.h"
}__pragma( pack ( pop )) 
#line 18 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.16299.0\\ucrt\\string.h"
__pragma( pack ( push, 8 )) extern "C" {
#line 27
__declspec(dllimport) errno_t __cdecl strcpy_s(char * _Destination, rsize_t _SizeInBytes, const char * _Source); 
#line 34
__declspec(dllimport) errno_t __cdecl strcat_s(char * _Destination, rsize_t _SizeInBytes, const char * _Source); 
#line 41
__declspec(dllimport) errno_t __cdecl strerror_s(char * _Buffer, size_t _SizeInBytes, int _ErrorNumber); 
#line 47
__declspec(dllimport) errno_t __cdecl strncat_s(char * _Destination, rsize_t _SizeInBytes, const char * _Source, rsize_t _MaxCount); 
#line 55
__declspec(dllimport) errno_t __cdecl strncpy_s(char * _Destination, rsize_t _SizeInBytes, const char * _Source, rsize_t _MaxCount); 
#line 63
__declspec(dllimport) char *__cdecl strtok_s(char * _String, const char * _Delimiter, char ** _Context); 
#line 71 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.16299.0\\ucrt\\string.h"
__declspec(dllimport) void *__cdecl _memccpy(void * _Dst, const void * _Src, int _Val, size_t _MaxCount); 
#line 78
extern "C++" {template < size_t _Size > inline errno_t __cdecl strcat_s ( char ( & _Destination ) [ _Size ], char const * _Source ) throw ( ) { return strcat_s ( _Destination, _Size, _Source ); }}
#line 86 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.16299.0\\ucrt\\string.h"
#pragma warning(push)
#pragma warning(disable: 28719)
#pragma warning(disable: 28726)
char *__cdecl strcat(char * _Destination, const char * _Source); 
#line 94 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.16299.0\\ucrt\\string.h"
#pragma warning(pop)
#line 99 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.16299.0\\ucrt\\string.h"
int __cdecl strcmp(const char * _Str1, const char * _Str2); 
#line 105
__declspec(dllimport) int __cdecl _strcmpi(const char * _String1, const char * _String2); 
#line 111
__declspec(dllimport) int __cdecl strcoll(const char * _String1, const char * _String2); 
#line 117
__declspec(dllimport) int __cdecl _strcoll_l(const char * _String1, const char * _String2, _locale_t _Locale); 
#line 123
extern "C++" {template < size_t _Size > inline errno_t __cdecl strcpy_s ( char ( & _Destination ) [ _Size ], char const * _Source ) throw ( ) { return strcpy_s ( _Destination, _Size, _Source ); }}
#line 129 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.16299.0\\ucrt\\string.h"
#pragma warning(push)
#pragma warning(disable: 28719)
#pragma warning(disable: 28726)
char *__cdecl strcpy(char * _Destination, const char * _Source); 
#line 137 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.16299.0\\ucrt\\string.h"
#pragma warning(pop)
#line 140
__declspec(dllimport) size_t __cdecl strcspn(const char * _Str, const char * _Control); 
#line 151 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.16299.0\\ucrt\\string.h"
__declspec(dllimport) __declspec(allocator) char *__cdecl _strdup(const char * _Source); 
#line 162 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.16299.0\\ucrt\\string.h"
__declspec(dllimport) char *__cdecl _strerror(const char * _ErrorMessage); 
#line 167
__declspec(dllimport) errno_t __cdecl _strerror_s(char * _Buffer, size_t _SizeInBytes, const char * _ErrorMessage); 
#line 173
extern "C++" {template < size_t _Size > inline errno_t __cdecl _strerror_s ( char ( & _Buffer ) [ _Size ], char const * _ErrorMessage ) throw ( ) { return _strerror_s ( _Buffer, _Size, _ErrorMessage ); }}
#line 181 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.16299.0\\ucrt\\string.h"
__declspec(dllimport) char *__cdecl strerror(int _ErrorMessage); 
#line 185
extern "C++" {template < size_t _Size > inline errno_t __cdecl strerror_s ( char ( & _Buffer ) [ _Size ], int _ErrorMessage ) throw ( ) { return strerror_s ( _Buffer, _Size, _ErrorMessage ); }}
#line 192 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.16299.0\\ucrt\\string.h"
__declspec(dllimport) int __cdecl _stricmp(const char * _String1, const char * _String2); 
#line 198
__declspec(dllimport) int __cdecl _stricoll(const char * _String1, const char * _String2); 
#line 204
__declspec(dllimport) int __cdecl _stricoll_l(const char * _String1, const char * _String2, _locale_t _Locale); 
#line 211
__declspec(dllimport) int __cdecl _stricmp_l(const char * _String1, const char * _String2, _locale_t _Locale); 
#line 218
size_t __cdecl strlen(const char * _Str); 
#line 223
__declspec(dllimport) errno_t __cdecl _strlwr_s(char * _String, size_t _Size); 
#line 228
extern "C++" {template < size_t _Size > inline errno_t __cdecl _strlwr_s ( char ( & _String ) [ _Size ] ) throw ( ) { return _strlwr_s ( _String, _Size ); }}
#line 233 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.16299.0\\ucrt\\string.h"
__declspec(dllimport) char *__cdecl _strlwr(char * _String); 
#line 239 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.16299.0\\ucrt\\string.h"
__declspec(dllimport) errno_t __cdecl _strlwr_s_l(char * _String, size_t _Size, _locale_t _Locale); 
#line 245
extern "C++" {template < size_t _Size > inline errno_t __cdecl _strlwr_s_l ( char ( & _String ) [ _Size ], _locale_t _Locale ) throw ( ) { return _strlwr_s_l ( _String, _Size, _Locale ); }}
#line 251 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.16299.0\\ucrt\\string.h"
__declspec(dllimport) char *__cdecl _strlwr_l(char * _String, _locale_t _Locale); 
#line 258 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.16299.0\\ucrt\\string.h"
extern "C++" {template < size_t _Size > inline errno_t __cdecl strncat_s ( char ( & _Destination ) [ _Size ], char const * _Source, size_t _Count ) throw ( ) { return strncat_s ( _Destination, _Size, _Source, _Count ); }}
#line 265 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.16299.0\\ucrt\\string.h"
__declspec(dllimport) char *__cdecl strncat(char * _Destination, const char * _Source, size_t _Count); 
#line 274 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.16299.0\\ucrt\\string.h"
__declspec(dllimport) int __cdecl strncmp(const char * _Str1, const char * _Str2, size_t _MaxCount); 
#line 281
__declspec(dllimport) int __cdecl _strnicmp(const char * _String1, const char * _String2, size_t _MaxCount); 
#line 288
__declspec(dllimport) int __cdecl _strnicmp_l(const char * _String1, const char * _String2, size_t _MaxCount, _locale_t _Locale); 
#line 296
__declspec(dllimport) int __cdecl _strnicoll(const char * _String1, const char * _String2, size_t _MaxCount); 
#line 303
__declspec(dllimport) int __cdecl _strnicoll_l(const char * _String1, const char * _String2, size_t _MaxCount, _locale_t _Locale); 
#line 311
__declspec(dllimport) int __cdecl _strncoll(const char * _String1, const char * _String2, size_t _MaxCount); 
#line 318
__declspec(dllimport) int __cdecl _strncoll_l(const char * _String1, const char * _String2, size_t _MaxCount, _locale_t _Locale); 
#line 325
__declspec(dllimport) size_t __cdecl __strncnt(const char * _String, size_t _Count); 
#line 330
extern "C++" {template < size_t _Size > inline errno_t __cdecl strncpy_s ( char ( & _Destination ) [ _Size ], char const * _Source, size_t _Count ) throw ( ) { return strncpy_s ( _Destination, _Size, _Source, _Count ); }}
#line 337 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.16299.0\\ucrt\\string.h"
__declspec(dllimport) char *__cdecl strncpy(char * _Destination, const char * _Source, size_t _Count); 
#line 354 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.16299.0\\ucrt\\string.h"
__declspec(dllimport) size_t __cdecl strnlen(const char * _String, size_t _MaxCount); 
#line 370 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.16299.0\\ucrt\\string.h"
static __inline size_t __cdecl strnlen_s(const char *
#line 371
_String, size_t 
#line 372
_MaxCount) 
#line 374
{ 
#line 375
return (_String == (0)) ? 0 : strnlen(_String, _MaxCount); 
#line 376
} 
#line 381 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.16299.0\\ucrt\\string.h"
__declspec(dllimport) errno_t __cdecl _strnset_s(char * _String, size_t _SizeInBytes, int _Value, size_t _MaxCount); 
#line 388
extern "C++" {template < size_t _Size > inline errno_t __cdecl _strnset_s ( char ( & _Destination ) [ _Size ], int _Value, size_t _Count ) throw ( ) { return _strnset_s ( _Destination, _Size, _Value, _Count ); }}
#line 395 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.16299.0\\ucrt\\string.h"
__declspec(dllimport) char *__cdecl _strnset(char * _Destination, int _Value, size_t _Count); 
#line 404 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.16299.0\\ucrt\\string.h"
__declspec(dllimport) const char *__cdecl strpbrk(const char * _Str, const char * _Control); 
#line 409
__declspec(dllimport) char *__cdecl _strrev(char * _Str); 
#line 414
__declspec(dllimport) errno_t __cdecl _strset_s(char * _Destination, size_t _DestinationSize, int _Value); 
#line 420
extern "C++" {template < size_t _Size > inline errno_t __cdecl _strset_s ( char ( & _Destination ) [ _Size ], int _Value ) throw ( ) { return _strset_s ( _Destination, _Size, _Value ); }}
#line 426 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.16299.0\\ucrt\\string.h"
char *__cdecl _strset(char * _Destination, int _Value); 
#line 433 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.16299.0\\ucrt\\string.h"
__declspec(dllimport) size_t __cdecl strspn(const char * _Str, const char * _Control); 
#line 439
__declspec(dllimport) char *__cdecl strtok(char * _String, const char * _Delimiter); 
#line 445
__declspec(dllimport) errno_t __cdecl _strupr_s(char * _String, size_t _Size); 
#line 450
extern "C++" {template < size_t _Size > inline errno_t __cdecl _strupr_s ( char ( & _String ) [ _Size ] ) throw ( ) { return _strupr_s ( _String, _Size ); }}
#line 455 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.16299.0\\ucrt\\string.h"
__declspec(dllimport) char *__cdecl _strupr(char * _String); 
#line 461 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.16299.0\\ucrt\\string.h"
__declspec(dllimport) errno_t __cdecl _strupr_s_l(char * _String, size_t _Size, _locale_t _Locale); 
#line 467
extern "C++" {template < size_t _Size > inline errno_t __cdecl _strupr_s_l ( char ( & _String ) [ _Size ], _locale_t _Locale ) throw ( ) { return _strupr_s_l ( _String, _Size, _Locale ); }}
#line 473 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.16299.0\\ucrt\\string.h"
__declspec(dllimport) char *__cdecl _strupr_l(char * _String, _locale_t _Locale); 
#line 482 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.16299.0\\ucrt\\string.h"
__declspec(dllimport) size_t __cdecl strxfrm(char * _Destination, const char * _Source, size_t _MaxCount); 
#line 490
__declspec(dllimport) size_t __cdecl _strxfrm_l(char * _Destination, const char * _Source, size_t _MaxCount, _locale_t _Locale); 
#line 500
extern "C++" {
#line 503
inline char *__cdecl strchr(char *const _String, const int _Ch) 
#line 504
{ 
#line 505
return const_cast< char *>(strchr(static_cast< const char *>(_String), _Ch)); 
#line 506
} 
#line 509
inline char *__cdecl strpbrk(char *const _String, const char *const _Control) 
#line 510
{ 
#line 511
return const_cast< char *>(strpbrk(static_cast< const char *>(_String), _Control)); 
#line 512
} 
#line 515
inline char *__cdecl strrchr(char *const _String, const int _Ch) 
#line 516
{ 
#line 517
return const_cast< char *>(strrchr(static_cast< const char *>(_String), _Ch)); 
#line 518
} 
#line 521
inline char *__cdecl strstr(char *const _String, const char *const _SubString) 
#line 522
{ 
#line 523
return const_cast< char *>(strstr(static_cast< const char *>(_String), _SubString)); 
#line 524
} 
#line 525
}
#line 538 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.16299.0\\ucrt\\string.h"
__declspec(dllimport) char *__cdecl strdup(const char * _String); 
#line 548 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.16299.0\\ucrt\\string.h"
__declspec(dllimport) int __cdecl strcmpi(const char * _String1, const char * _String2); 
#line 554
__declspec(dllimport) int __cdecl stricmp(const char * _String1, const char * _String2); 
#line 560
__declspec(dllimport) char *__cdecl strlwr(char * _String); 
#line 565
__declspec(dllimport) int __cdecl strnicmp(const char * _String1, const char * _String2, size_t _MaxCount); 
#line 572
__declspec(dllimport) char *__cdecl strnset(char * _String, int _Value, size_t _MaxCount); 
#line 579
__declspec(dllimport) char *__cdecl strrev(char * _String); 
#line 584
char *__cdecl strset(char * _String, int _Value); 
#line 589
__declspec(dllimport) char *__cdecl strupr(char * _String); 
#line 597 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.16299.0\\ucrt\\string.h"
}__pragma( pack ( pop )) 
#line 13 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.16299.0\\ucrt\\corecrt_wtime.h"
__pragma( pack ( push, 8 )) extern "C" {
#line 22
struct tm { 
#line 24
int tm_sec; 
#line 25
int tm_min; 
#line 26
int tm_hour; 
#line 27
int tm_mday; 
#line 28
int tm_mon; 
#line 29
int tm_year; 
#line 30
int tm_wday; 
#line 31
int tm_yday; 
#line 32
int tm_isdst; 
#line 33
}; 
#line 44
__declspec(dllimport) __wchar_t *__cdecl _wasctime(const tm * _Tm); 
#line 50
__declspec(dllimport) errno_t __cdecl _wasctime_s(__wchar_t * _Buffer, size_t _SizeInWords, const tm * _Tm); 
#line 56
extern "C++" {template < size_t _Size > inline errno_t __cdecl _wasctime_s ( wchar_t ( & _Buffer ) [ _Size ], struct tm const * _Time ) throw ( ) { return _wasctime_s ( _Buffer, _Size, _Time ); }}
#line 65 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.16299.0\\ucrt\\corecrt_wtime.h"
__declspec(dllimport) size_t __cdecl wcsftime(__wchar_t * _Buffer, size_t _SizeInWords, const __wchar_t * _Format, const tm * _Tm); 
#line 74
__declspec(dllimport) size_t __cdecl _wcsftime_l(__wchar_t * _Buffer, size_t _SizeInWords, const __wchar_t * _Format, const tm * _Tm, _locale_t _Locale); 
#line 84
__declspec(dllimport) __wchar_t *__cdecl _wctime32(const __time32_t * _Time); 
#line 89
__declspec(dllimport) errno_t __cdecl _wctime32_s(__wchar_t * _Buffer, size_t _SizeInWords, const __time32_t * _Time); 
#line 95
extern "C++" {template < size_t _Size > inline errno_t __cdecl _wctime32_s ( wchar_t ( & _Buffer ) [ _Size ], __time32_t const * _Time ) throw ( ) { return _wctime32_s ( _Buffer, _Size, _Time ); }}
#line 104 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.16299.0\\ucrt\\corecrt_wtime.h"
__declspec(dllimport) __wchar_t *__cdecl _wctime64(const __time64_t * _Time); 
#line 109
__declspec(dllimport) errno_t __cdecl _wctime64_s(__wchar_t * _Buffer, size_t _SizeInWords, const __time64_t * _Time); 
#line 114
extern "C++" {template < size_t _Size > inline errno_t __cdecl _wctime64_s ( wchar_t ( & _Buffer ) [ _Size ], __time64_t const * _Time ) throw ( ) { return _wctime64_s ( _Buffer, _Size, _Time ); }}
#line 121 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.16299.0\\ucrt\\corecrt_wtime.h"
__declspec(dllimport) errno_t __cdecl _wstrdate_s(__wchar_t * _Buffer, size_t _SizeInWords); 
#line 126
extern "C++" {template < size_t _Size > inline errno_t __cdecl _wstrdate_s ( wchar_t ( & _Buffer ) [ _Size ] ) throw ( ) { return _wstrdate_s ( _Buffer, _Size ); }}
#line 131 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.16299.0\\ucrt\\corecrt_wtime.h"
__declspec(dllimport) __wchar_t *__cdecl _wstrdate(__wchar_t * _Buffer); 
#line 137 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.16299.0\\ucrt\\corecrt_wtime.h"
__declspec(dllimport) errno_t __cdecl _wstrtime_s(__wchar_t * _Buffer, size_t _SizeInWords); 
#line 142
extern "C++" {template < size_t _Size > inline errno_t __cdecl _wstrtime_s ( wchar_t ( & _Buffer ) [ _Size ] ) throw ( ) { return _wstrtime_s ( _Buffer, _Size ); }}
#line 147 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.16299.0\\ucrt\\corecrt_wtime.h"
__declspec(dllimport) __wchar_t *__cdecl _wstrtime(__wchar_t * _Buffer); 
#line 160 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.16299.0\\ucrt\\corecrt_wtime.h"
#pragma warning(push)
#pragma warning(disable: 4996)
#line 185
static __inline __wchar_t *__cdecl _wctime(const time_t *const 
#line 186
_Time) 
#line 187
{ 
#line 188
return _wctime64(_Time); 
#line 189
} 
#line 192
static __inline errno_t __cdecl _wctime_s(__wchar_t *const 
#line 193
_Buffer, const size_t 
#line 194
_SizeInWords, const time_t *const 
#line 195
_Time) 
#line 197
{ 
#line 198
return _wctime64_s(_Buffer, _SizeInWords, _Time); 
#line 199
} 
#line 208 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.16299.0\\ucrt\\corecrt_wtime.h"
}
#line 203 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.16299.0\\ucrt\\corecrt_wtime.h"
#pragma warning(pop)
#line 208 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.16299.0\\ucrt\\corecrt_wtime.h"
__pragma( pack ( pop )) 
#line 14 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.16299.0\\ucrt\\time.h"
__pragma( pack ( push, 8 )) extern "C" {
#line 23
typedef long clock_t; 
#line 25
struct _timespec32 { 
#line 27
__time32_t tv_sec; 
#line 28
long tv_nsec; 
#line 29
}; 
#line 31
struct _timespec64 { 
#line 33
__time64_t tv_sec; 
#line 34
long tv_nsec; 
#line 35
}; 
#line 38
struct timespec { 
#line 40
time_t tv_sec; 
#line 41
long tv_nsec; 
#line 42
}; 
#line 61 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.16299.0\\ucrt\\time.h"
__declspec(dllimport) int *__cdecl __daylight(); 
#line 67
__declspec(dllimport) long *__cdecl __dstbias(); 
#line 73
__declspec(dllimport) long *__cdecl __timezone(); 
#line 79
__declspec(dllimport) char **__cdecl __tzname(); 
#line 84
__declspec(dllimport) errno_t __cdecl _get_daylight(int * _Daylight); 
#line 89
__declspec(dllimport) errno_t __cdecl _get_dstbias(long * _DaylightSavingsBias); 
#line 94
__declspec(dllimport) errno_t __cdecl _get_timezone(long * _TimeZone); 
#line 99
__declspec(dllimport) errno_t __cdecl _get_tzname(size_t * _ReturnValue, char * _Buffer, size_t _SizeInBytes, int _Index); 
#line 116
__declspec(dllimport) char *__cdecl asctime(const tm * _Tm); 
#line 123
__declspec(dllimport) errno_t __cdecl asctime_s(char * _Buffer, size_t _SizeInBytes, const tm * _Tm); 
#line 130 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.16299.0\\ucrt\\time.h"
extern "C++" {template < size_t _Size > inline errno_t __cdecl asctime_s ( char ( & _Buffer ) [ _Size ], struct tm const * _Time ) throw ( ) { return asctime_s ( _Buffer, _Size, _Time ); }}
#line 137 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.16299.0\\ucrt\\time.h"
__declspec(dllimport) clock_t __cdecl clock(); 
#line 142
__declspec(dllimport) char *__cdecl _ctime32(const __time32_t * _Time); 
#line 147
__declspec(dllimport) errno_t __cdecl _ctime32_s(char * _Buffer, size_t _SizeInBytes, const __time32_t * _Time); 
#line 153
extern "C++" {template < size_t _Size > inline errno_t __cdecl _ctime32_s ( char ( & _Buffer ) [ _Size ], __time32_t const * _Time ) throw ( ) { return _ctime32_s ( _Buffer, _Size, _Time ); }}
#line 162 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.16299.0\\ucrt\\time.h"
__declspec(dllimport) char *__cdecl _ctime64(const __time64_t * _Time); 
#line 167
__declspec(dllimport) errno_t __cdecl _ctime64_s(char * _Buffer, size_t _SizeInBytes, const __time64_t * _Time); 
#line 173
extern "C++" {template < size_t _Size > inline errno_t __cdecl _ctime64_s ( char ( & _Buffer ) [ _Size ], __time64_t const * _Time ) throw ( ) { return _ctime64_s ( _Buffer, _Size, _Time ); }}
#line 180 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.16299.0\\ucrt\\time.h"
__declspec(dllimport) double __cdecl _difftime32(__time32_t _Time1, __time32_t _Time2); 
#line 186
__declspec(dllimport) double __cdecl _difftime64(__time64_t _Time1, __time64_t _Time2); 
#line 193
__declspec(dllimport) tm *__cdecl _gmtime32(const __time32_t * _Time); 
#line 198
__declspec(dllimport) errno_t __cdecl _gmtime32_s(tm * _Tm, const __time32_t * _Time); 
#line 205
__declspec(dllimport) tm *__cdecl _gmtime64(const __time64_t * _Time); 
#line 210
__declspec(dllimport) errno_t __cdecl _gmtime64_s(tm * _Tm, const __time64_t * _Time); 
#line 217
__declspec(dllimport) tm *__cdecl _localtime32(const __time32_t * _Time); 
#line 222
__declspec(dllimport) errno_t __cdecl _localtime32_s(tm * _Tm, const __time32_t * _Time); 
#line 229
__declspec(dllimport) tm *__cdecl _localtime64(const __time64_t * _Time); 
#line 234
__declspec(dllimport) errno_t __cdecl _localtime64_s(tm * _Tm, const __time64_t * _Time); 
#line 240
__declspec(dllimport) __time32_t __cdecl _mkgmtime32(tm * _Tm); 
#line 245
__declspec(dllimport) __time64_t __cdecl _mkgmtime64(tm * _Tm); 
#line 250
__declspec(dllimport) __time32_t __cdecl _mktime32(tm * _Tm); 
#line 255
__declspec(dllimport) __time64_t __cdecl _mktime64(tm * _Tm); 
#line 261
__declspec(dllimport) size_t __cdecl strftime(char * _Buffer, size_t _SizeInBytes, const char * _Format, const tm * _Tm); 
#line 270
__declspec(dllimport) size_t __cdecl _strftime_l(char * _Buffer, size_t _MaxSize, const char * _Format, const tm * _Tm, _locale_t _Locale); 
#line 279
__declspec(dllimport) errno_t __cdecl _strdate_s(char * _Buffer, size_t _SizeInBytes); 
#line 284
extern "C++" {template < size_t _Size > inline errno_t __cdecl _strdate_s ( char ( & _Buffer ) [ _Size ] ) throw ( ) { return _strdate_s ( _Buffer, _Size ); }}
#line 289 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.16299.0\\ucrt\\time.h"
__declspec(dllimport) char *__cdecl _strdate(char * _Buffer); 
#line 295 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.16299.0\\ucrt\\time.h"
__declspec(dllimport) errno_t __cdecl _strtime_s(char * _Buffer, size_t _SizeInBytes); 
#line 300
extern "C++" {template < size_t _Size > inline errno_t __cdecl _strtime_s ( char ( & _Buffer ) [ _Size ] ) throw ( ) { return _strtime_s ( _Buffer, _Size ); }}
#line 305 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.16299.0\\ucrt\\time.h"
__declspec(dllimport) char *__cdecl _strtime(char * _Buffer); 
#line 310 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.16299.0\\ucrt\\time.h"
__declspec(dllimport) __time32_t __cdecl _time32(__time32_t * _Time); 
#line 314
__declspec(dllimport) __time64_t __cdecl _time64(__time64_t * _Time); 
#line 320
__declspec(dllimport) int __cdecl _timespec32_get(_timespec32 * _Ts, int _Base); 
#line 327
__declspec(dllimport) int __cdecl _timespec64_get(_timespec64 * _Ts, int _Base); 
#line 341
__declspec(dllimport) void __cdecl _tzset(); 
#line 344
__declspec(deprecated("This function or variable has been superceded by newer library or operating system functionality. Consider using GetLocalTime in" "stead. See online help for details.")) 
#line 345
__declspec(dllimport) unsigned __cdecl _getsystime(tm * _Tm); 
#line 349
__declspec(deprecated("This function or variable has been superceded by newer library or operating system functionality. Consider using SetLocalTime in" "stead. See online help for details.")) 
#line 350
__declspec(dllimport) unsigned __cdecl _setsystime(tm * _Tm, unsigned _Milliseconds); 
#line 475 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.16299.0\\ucrt\\time.h"
static __inline char *__cdecl ctime(const time_t *const 
#line 476
_Time) 
#line 478
{ 
#pragma warning(push)
#pragma warning(disable: 4996)
return _ctime64(_Time); 
#pragma warning(pop)
} 
#line 486
static __inline double __cdecl difftime(const time_t 
#line 487
_Time1, const time_t 
#line 488
_Time2) 
#line 490
{ 
#line 491
return _difftime64(_Time1, _Time2); 
#line 492
} 
#line 495
static __inline tm *__cdecl gmtime(const time_t *const 
#line 496
_Time) 
#line 497
{ 
#pragma warning(push)
#pragma warning(disable: 4996)
return _gmtime64(_Time); 
#pragma warning(pop)
} 
#line 505
static __inline tm *__cdecl localtime(const time_t *const 
#line 506
_Time) 
#line 508
{ 
#pragma warning(push)
#pragma warning(disable: 4996)
return _localtime64(_Time); 
#pragma warning(pop)
} 
#line 516
static __inline time_t __cdecl _mkgmtime(tm *const 
#line 517
_Tm) 
#line 519
{ 
#line 520
return _mkgmtime64(_Tm); 
#line 521
} 
#line 524
static __inline time_t __cdecl mktime(tm *const 
#line 525
_Tm) 
#line 527
{ 
#line 528
return _mktime64(_Tm); 
#line 529
} 
#line 531
static __inline time_t __cdecl time(time_t *const 
#line 532
_Time) 
#line 534
{ 
#line 535
return _time64(_Time); 
#line 536
} 
#line 539
static __inline int __cdecl timespec_get(timespec *const 
#line 540
_Ts, const int 
#line 541
_Base) 
#line 543
{ 
#line 544
return _timespec64_get((_timespec64 *)_Ts, _Base); 
#line 545
} 
#line 549
static __inline errno_t __cdecl ctime_s(char *const 
#line 550
_Buffer, const size_t 
#line 551
_SizeInBytes, const time_t *const 
#line 552
_Time) 
#line 554
{ 
#line 555
return _ctime64_s(_Buffer, _SizeInBytes, _Time); 
#line 556
} 
#line 559
static __inline errno_t __cdecl gmtime_s(tm *const 
#line 560
_Tm, const time_t *const 
#line 561
_Time) 
#line 563
{ 
#line 564
return _gmtime64_s(_Tm, _Time); 
#line 565
} 
#line 568
static __inline errno_t __cdecl localtime_s(tm *const 
#line 569
_Tm, const time_t *const 
#line 570
_Time) 
#line 572
{ 
#line 573
return _localtime64_s(_Tm, _Time); 
#line 574
} 
#line 593 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.16299.0\\ucrt\\time.h"
__declspec(dllimport) void __cdecl tzset(); 
#line 600 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.16299.0\\ucrt\\time.h"
}__pragma( pack ( pop )) 
#line 70 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\crt/common_functions.h"
extern "C" {
#line 73 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\crt/common_functions.h"
__declspec(dllimport) extern clock_t __cdecl clock(); 
#line 78 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\crt/common_functions.h"
extern void *__cdecl memset(void *, int, size_t); 
#line 79
extern void *__cdecl memcpy(void *, const void *, size_t); 
#line 81
}
#line 98 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\crt\\math_functions.h"
extern "C" {
#line 168 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\crt\\math_functions.h"
extern int __cdecl abs(int); 
#line 169
extern long __cdecl labs(long); 
#line 170
extern __int64 llabs(__int64); 
#line 220 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\crt\\math_functions.h"
extern double __cdecl fabs(double x); 
#line 261
extern __inline float fabsf(float x); 
#line 265 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\crt\\math_functions.h"
extern inline int min(int, int); 
#line 267
extern inline unsigned umin(unsigned, unsigned); 
#line 268
extern inline __int64 llmin(__int64, __int64); 
#line 269
extern inline unsigned __int64 ullmin(unsigned __int64, unsigned __int64); 
#line 292 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\crt\\math_functions.h"
__declspec(dllimport) extern float __cdecl fminf(float x, float y); 
#line 312 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\crt\\math_functions.h"
__declspec(dllimport) extern double __cdecl fmin(double x, double y); 
#line 317 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\crt\\math_functions.h"
extern inline int max(int, int); 
#line 319
extern inline unsigned umax(unsigned, unsigned); 
#line 320
extern inline __int64 llmax(__int64, __int64); 
#line 321
extern inline unsigned __int64 ullmax(unsigned __int64, unsigned __int64); 
#line 344 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\crt\\math_functions.h"
__declspec(dllimport) extern float __cdecl fmaxf(float x, float y); 
#line 364 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\crt\\math_functions.h"
__declspec(dllimport) extern double __cdecl fmax(double, double); 
#line 406 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\crt\\math_functions.h"
extern double __cdecl sin(double x); 
#line 439
extern double __cdecl cos(double x); 
#line 458 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\crt\\math_functions.h"
extern void sincos(double x, double * sptr, double * cptr); 
#line 474
extern void sincosf(float x, float * sptr, float * cptr); 
#line 519 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\crt\\math_functions.h"
extern double __cdecl tan(double x); 
#line 588
extern double __cdecl sqrt(double x); 
#line 660 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\crt\\math_functions.h"
extern double rsqrt(double x); 
#line 730
extern float rsqrtf(float x); 
#line 788 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\crt\\math_functions.h"
__declspec(dllimport) extern double __cdecl log2(double x); 
#line 813 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\crt\\math_functions.h"
__declspec(dllimport) extern double __cdecl exp2(double x); 
#line 838 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\crt\\math_functions.h"
__declspec(dllimport) extern float __cdecl exp2f(float x); 
#line 863 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\crt\\math_functions.h"
extern double exp10(double x); 
#line 886
extern float exp10f(float x); 
#line 934 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\crt\\math_functions.h"
__declspec(dllimport) extern double __cdecl expm1(double x); 
#line 979 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\crt\\math_functions.h"
__declspec(dllimport) extern float __cdecl expm1f(float x); 
#line 1034 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\crt\\math_functions.h"
__declspec(dllimport) extern float __cdecl log2f(float x); 
#line 1086 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\crt\\math_functions.h"
extern double __cdecl log10(double x); 
#line 1157
extern double __cdecl log(double x); 
#line 1253 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\crt\\math_functions.h"
__declspec(dllimport) extern double __cdecl log1p(double x); 
#line 1350 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\crt\\math_functions.h"
__declspec(dllimport) extern float __cdecl log1pf(float x); 
#line 1423 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\crt\\math_functions.h"
__declspec(dllimport) extern double __cdecl floor(double x); 
#line 1462
extern double __cdecl exp(double x); 
#line 1493
extern double __cdecl cosh(double x); 
#line 1523
extern double __cdecl sinh(double x); 
#line 1553
extern double __cdecl tanh(double x); 
#line 1590 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\crt\\math_functions.h"
__declspec(dllimport) extern double __cdecl acosh(double x); 
#line 1628 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\crt\\math_functions.h"
__declspec(dllimport) extern float __cdecl acoshf(float x); 
#line 1644 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\crt\\math_functions.h"
__declspec(dllimport) extern double __cdecl asinh(double x); 
#line 1660 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\crt\\math_functions.h"
__declspec(dllimport) extern float __cdecl asinhf(float x); 
#line 1714 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\crt\\math_functions.h"
__declspec(dllimport) extern double __cdecl atanh(double x); 
#line 1768 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\crt\\math_functions.h"
__declspec(dllimport) extern float __cdecl atanhf(float x); 
#line 1825 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\crt\\math_functions.h"
__declspec(dllimport) extern double __cdecl ldexp(double x, int exp); 
#line 1881
extern __inline float ldexpf(float x, int exp); 
#line 1935 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\crt\\math_functions.h"
__declspec(dllimport) extern double __cdecl logb(double x); 
#line 1990 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\crt\\math_functions.h"
__declspec(dllimport) extern float __cdecl logbf(float x); 
#line 2020 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\crt\\math_functions.h"
__declspec(dllimport) extern int __cdecl ilogb(double x); 
#line 2050 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\crt\\math_functions.h"
__declspec(dllimport) extern int __cdecl ilogbf(float x); 
#line 2126 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\crt\\math_functions.h"
__declspec(dllimport) extern double __cdecl scalbn(double x, int n); 
#line 2202 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\crt\\math_functions.h"
__declspec(dllimport) extern float __cdecl scalbnf(float x, int n); 
#line 2278 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\crt\\math_functions.h"
__declspec(dllimport) extern double __cdecl scalbln(double x, long n); 
#line 2354 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\crt\\math_functions.h"
__declspec(dllimport) extern float __cdecl scalblnf(float x, long n); 
#line 2430 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\crt\\math_functions.h"
__declspec(dllimport) extern double __cdecl frexp(double x, int * nptr); 
#line 2505
extern __inline float frexpf(float x, int * nptr); 
#line 2521 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\crt\\math_functions.h"
__declspec(dllimport) extern double __cdecl round(double x); 
#line 2538 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\crt\\math_functions.h"
__declspec(dllimport) extern float __cdecl roundf(float x); 
#line 2556 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\crt\\math_functions.h"
__declspec(dllimport) extern long __cdecl lround(double x); 
#line 2574 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\crt\\math_functions.h"
__declspec(dllimport) extern long __cdecl lroundf(float x); 
#line 2592 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\crt\\math_functions.h"
__declspec(dllimport) extern __int64 __cdecl llround(double x); 
#line 2610 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\crt\\math_functions.h"
__declspec(dllimport) extern __int64 __cdecl llroundf(float x); 
#line 2662 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\crt\\math_functions.h"
__declspec(dllimport) extern float __cdecl rintf(float x); 
#line 2678 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\crt\\math_functions.h"
__declspec(dllimport) extern long __cdecl lrint(double x); 
#line 2694 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\crt\\math_functions.h"
__declspec(dllimport) extern long __cdecl lrintf(float x); 
#line 2710 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\crt\\math_functions.h"
__declspec(dllimport) extern __int64 __cdecl llrint(double x); 
#line 2726 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\crt\\math_functions.h"
__declspec(dllimport) extern __int64 __cdecl llrintf(float x); 
#line 2779 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\crt\\math_functions.h"
__declspec(dllimport) extern double __cdecl nearbyint(double x); 
#line 2832 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\crt\\math_functions.h"
__declspec(dllimport) extern float __cdecl nearbyintf(float x); 
#line 2892 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\crt\\math_functions.h"
__declspec(dllimport) extern double __cdecl ceil(double x); 
#line 2906 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\crt\\math_functions.h"
__declspec(dllimport) extern double __cdecl trunc(double x); 
#line 2921 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\crt\\math_functions.h"
__declspec(dllimport) extern float __cdecl truncf(float x); 
#line 2947 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\crt\\math_functions.h"
__declspec(dllimport) extern double __cdecl fdim(double x, double y); 
#line 2973 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\crt\\math_functions.h"
__declspec(dllimport) extern float __cdecl fdimf(float x, float y); 
#line 3007 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\crt\\math_functions.h"
extern double __cdecl atan2(double y, double x); 
#line 3038
extern double __cdecl atan(double x); 
#line 3061
extern double __cdecl acos(double x); 
#line 3093
extern double __cdecl asin(double x); 
#line 3136 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\crt\\math_functions.h"
__declspec(dllimport) extern double __cdecl hypot(double x, double y); 
#line 3191 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\crt\\math_functions.h"
extern double rhypot(double x, double y); 
#line 3235 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\crt\\math_functions.h"
static __inline float __cdecl hypotf(float x, float y); 
#line 3289 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\crt\\math_functions.h"
extern float rhypotf(float x, float y); 
#line 3333
__declspec(dllimport) extern double __cdecl norm3d(double a, double b, double c); 
#line 3384
extern double rnorm3d(double a, double b, double c); 
#line 3433
__declspec(dllimport) extern double __cdecl norm4d(double a, double b, double c, double d); 
#line 3489
extern double rnorm4d(double a, double b, double c, double d); 
#line 3534
extern double norm(int dim, const double * t); 
#line 3585
extern double rnorm(int dim, const double * t); 
#line 3637
extern float rnormf(int dim, const float * a); 
#line 3681
extern float normf(int dim, const float * a); 
#line 3726
extern float norm3df(float a, float b, float c); 
#line 3777
extern float rnorm3df(float a, float b, float c); 
#line 3826
extern float norm4df(float a, float b, float c, float d); 
#line 3882
extern float rnorm4df(float a, float b, float c, float d); 
#line 3971 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\crt\\math_functions.h"
__declspec(dllimport) extern double __cdecl cbrt(double x); 
#line 4057 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\crt\\math_functions.h"
__declspec(dllimport) extern float __cdecl cbrtf(float x); 
#line 4110 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\crt\\math_functions.h"
extern double rcbrt(double x); 
#line 4160
extern float rcbrtf(float x); 
#line 4220
extern double sinpi(double x); 
#line 4280
extern float sinpif(float x); 
#line 4332
extern double cospi(double x); 
#line 4384
extern float cospif(float x); 
#line 4414
extern void sincospi(double x, double * sptr, double * cptr); 
#line 4444
extern void sincospif(float x, float * sptr, float * cptr); 
#line 4756 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\crt\\math_functions.h"
extern double __cdecl pow(double x, double y); 
#line 4812
__declspec(dllimport) extern double __cdecl modf(double x, double * iptr); 
#line 4871
extern double __cdecl fmod(double x, double y); 
#line 4959 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\crt\\math_functions.h"
__declspec(dllimport) extern double __cdecl remainder(double x, double y); 
#line 5049 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\crt\\math_functions.h"
__declspec(dllimport) extern float __cdecl remainderf(float x, float y); 
#line 5103 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\crt\\math_functions.h"
__declspec(dllimport) extern double __cdecl remquo(double x, double y, int * quo); 
#line 5157 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\crt\\math_functions.h"
__declspec(dllimport) extern float __cdecl remquof(float x, float y, int * quo); 
#line 5196 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\crt\\math_functions.h"
__declspec(dllimport) extern double __cdecl j0(double x); 
#line 5238 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\crt\\math_functions.h"
extern float j0f(float x); 
#line 5299 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\crt\\math_functions.h"
__declspec(dllimport) extern double __cdecl j1(double x); 
#line 5360 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\crt\\math_functions.h"
extern float j1f(float x); 
#line 5403 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\crt\\math_functions.h"
__declspec(dllimport) extern double __cdecl jn(int n, double x); 
#line 5446 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\crt\\math_functions.h"
extern float jnf(int n, float x); 
#line 5498 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\crt\\math_functions.h"
__declspec(dllimport) extern double __cdecl y0(double x); 
#line 5550 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\crt\\math_functions.h"
extern float y0f(float x); 
#line 5602 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\crt\\math_functions.h"
__declspec(dllimport) extern double __cdecl y1(double x); 
#line 5654 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\crt\\math_functions.h"
extern float y1f(float x); 
#line 5707 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\crt\\math_functions.h"
__declspec(dllimport) extern double __cdecl yn(int n, double x); 
#line 5760 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\crt\\math_functions.h"
extern float ynf(int n, float x); 
#line 5787
__declspec(dllimport) extern double __cdecl cyl_bessel_i0(double x); 
#line 5813
extern float cyl_bessel_i0f(float x); 
#line 5840
__declspec(dllimport) extern double __cdecl cyl_bessel_i1(double x); 
#line 5866
extern float cyl_bessel_i1f(float x); 
#line 5951 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\crt\\math_functions.h"
__declspec(dllimport) extern double __cdecl erf(double x); 
#line 6033 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\crt\\math_functions.h"
__declspec(dllimport) extern float __cdecl erff(float x); 
#line 6095 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\crt\\math_functions.h"
extern double erfinv(double y); 
#line 6152
extern float erfinvf(float y); 
#line 6193 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\crt\\math_functions.h"
__declspec(dllimport) extern double __cdecl erfc(double x); 
#line 6231 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\crt\\math_functions.h"
__declspec(dllimport) extern float __cdecl erfcf(float x); 
#line 6359 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\crt\\math_functions.h"
__declspec(dllimport) extern double __cdecl lgamma(double x); 
#line 6420 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\crt\\math_functions.h"
extern double erfcinv(double y); 
#line 6476
extern float erfcinvf(float y); 
#line 6534
extern double normcdfinv(double y); 
#line 6592
extern float normcdfinvf(float y); 
#line 6635
extern double normcdf(double y); 
#line 6678
extern float normcdff(float y); 
#line 6753
extern double erfcx(double x); 
#line 6828
extern float erfcxf(float x); 
#line 6964 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\crt\\math_functions.h"
__declspec(dllimport) extern float __cdecl lgammaf(float x); 
#line 7073 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\crt\\math_functions.h"
__declspec(dllimport) extern double __cdecl tgamma(double x); 
#line 7182 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\crt\\math_functions.h"
__declspec(dllimport) extern float __cdecl tgammaf(float x); 
#line 7195 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\crt\\math_functions.h"
__declspec(dllimport) extern double __cdecl copysign(double x, double y); 
#line 7208 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\crt\\math_functions.h"
__declspec(dllimport) extern float __cdecl copysignf(float x, float y); 
#line 7245 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\crt\\math_functions.h"
__declspec(dllimport) extern double __cdecl nextafter(double x, double y); 
#line 7282 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\crt\\math_functions.h"
__declspec(dllimport) extern float __cdecl nextafterf(float x, float y); 
#line 7298 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\crt\\math_functions.h"
__declspec(dllimport) extern double __cdecl nan(const char * tagp); 
#line 7314 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\crt\\math_functions.h"
__declspec(dllimport) extern float __cdecl nanf(const char * tagp); 
#line 7319 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\crt\\math_functions.h"
extern int __isinff(float); 
#line 7320
extern int __isnanf(float); 
#line 7330 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\crt\\math_functions.h"
extern int __finite(double); 
#line 7331
extern int __finitef(float); 
#line 7332
extern int __signbit(double); 
#line 7333
extern int __isnan(double); 
#line 7334
extern int __isinf(double); 
#line 7337 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\crt\\math_functions.h"
extern int __signbitf(float); 
#line 7498 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\crt\\math_functions.h"
__declspec(dllimport) extern double __cdecl fma(double x, double y, double z); 
#line 7656 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\crt\\math_functions.h"
__declspec(dllimport) extern float __cdecl fmaf(float x, float y, float z); 
#line 7665 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\crt\\math_functions.h"
extern int __signbitl(long double); 
#line 7671 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\crt\\math_functions.h"
extern int __finitel(long double); 
#line 7672
extern int __isinfl(long double); 
#line 7673
extern int __isnanl(long double); 
#line 7677 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\crt\\math_functions.h"
__declspec(dllimport) extern float __cdecl acosf(float); 
#line 7678
__declspec(dllimport) extern float __cdecl asinf(float); 
#line 7679
__declspec(dllimport) extern float __cdecl atanf(float); 
#line 7680
__declspec(dllimport) extern float __cdecl atan2f(float, float); 
#line 7681
__declspec(dllimport) extern float __cdecl cosf(float); 
#line 7682
__declspec(dllimport) extern float __cdecl sinf(float); 
#line 7683
__declspec(dllimport) extern float __cdecl tanf(float); 
#line 7684
__declspec(dllimport) extern float __cdecl coshf(float); 
#line 7685
__declspec(dllimport) extern float __cdecl sinhf(float); 
#line 7686
__declspec(dllimport) extern float __cdecl tanhf(float); 
#line 7687
__declspec(dllimport) extern float __cdecl expf(float); 
#line 7688
__declspec(dllimport) extern float __cdecl logf(float); 
#line 7689
__declspec(dllimport) extern float __cdecl log10f(float); 
#line 7690
__declspec(dllimport) extern float __cdecl modff(float, float *); 
#line 7691
__declspec(dllimport) extern float __cdecl powf(float, float); 
#line 7692
__declspec(dllimport) extern float __cdecl sqrtf(float); 
#line 7693
__declspec(dllimport) extern float __cdecl ceilf(float); 
#line 7694
__declspec(dllimport) extern float __cdecl floorf(float); 
#line 7695
__declspec(dllimport) extern float __cdecl fmodf(float, float); 
#line 8828 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\crt\\math_functions.h"
}
#line 13 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.16299.0\\ucrt\\corecrt_math.h"
__pragma( pack ( push, 8 )) extern "C" {
#line 15
#pragma warning(push)
#pragma warning(disable:4738)
#pragma warning(disable:4820)
#line 24
struct _exception { 
#line 26
int type; 
#line 27
char *name; 
#line 28
double arg1; 
#line 29
double arg2; 
#line 30
double retval; 
#line 31
}; 
#line 38
struct _complex { 
#line 40
double x, y; 
#line 41
}; 
#line 60 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.16299.0\\ucrt\\corecrt_math.h"
typedef float float_t; 
#line 61
typedef double double_t; 
#line 79 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.16299.0\\ucrt\\corecrt_math.h"
extern const double _HUGE; 
#line 170 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.16299.0\\ucrt\\corecrt_math.h"
void __cdecl _fperrraise(int _Except); 
#line 172
__declspec(dllimport) short __cdecl _dclass(double _X); 
#line 173
__declspec(dllimport) short __cdecl _ldclass(long double _X); 
#line 174
__declspec(dllimport) short __cdecl _fdclass(float _X); 
#line 176
__declspec(dllimport) int __cdecl _dsign(double _X); 
#line 177
__declspec(dllimport) int __cdecl _ldsign(long double _X); 
#line 178
__declspec(dllimport) int __cdecl _fdsign(float _X); 
#line 180
__declspec(dllimport) int __cdecl _dpcomp(double _X, double _Y); 
#line 181
__declspec(dllimport) int __cdecl _ldpcomp(long double _X, long double _Y); 
#line 182
__declspec(dllimport) int __cdecl _fdpcomp(float _X, float _Y); 
#line 184
__declspec(dllimport) short __cdecl _dtest(double * _Px); 
#line 185
__declspec(dllimport) short __cdecl _ldtest(long double * _Px); 
#line 186
__declspec(dllimport) short __cdecl _fdtest(float * _Px); 
#line 188
__declspec(dllimport) short __cdecl _d_int(double * _Px, short _Xexp); 
#line 189
__declspec(dllimport) short __cdecl _ld_int(long double * _Px, short _Xexp); 
#line 190
__declspec(dllimport) short __cdecl _fd_int(float * _Px, short _Xexp); 
#line 192
__declspec(dllimport) short __cdecl _dscale(double * _Px, long _Lexp); 
#line 193
__declspec(dllimport) short __cdecl _ldscale(long double * _Px, long _Lexp); 
#line 194
__declspec(dllimport) short __cdecl _fdscale(float * _Px, long _Lexp); 
#line 196
__declspec(dllimport) short __cdecl _dunscale(short * _Pex, double * _Px); 
#line 197
__declspec(dllimport) short __cdecl _ldunscale(short * _Pex, long double * _Px); 
#line 198
__declspec(dllimport) short __cdecl _fdunscale(short * _Pex, float * _Px); 
#line 200
__declspec(dllimport) short __cdecl _dexp(double * _Px, double _Y, long _Eoff); 
#line 201
__declspec(dllimport) short __cdecl _ldexp(long double * _Px, long double _Y, long _Eoff); 
#line 202
__declspec(dllimport) short __cdecl _fdexp(float * _Px, float _Y, long _Eoff); 
#line 204
__declspec(dllimport) short __cdecl _dnorm(unsigned short * _Ps); 
#line 205
__declspec(dllimport) short __cdecl _fdnorm(unsigned short * _Ps); 
#line 207
__declspec(dllimport) double __cdecl _dpoly(double _X, const double * _Tab, int _N); 
#line 208
__declspec(dllimport) long double __cdecl _ldpoly(long double _X, const long double * _Tab, int _N); 
#line 209
__declspec(dllimport) float __cdecl _fdpoly(float _X, const float * _Tab, int _N); 
#line 211
__declspec(dllimport) double __cdecl _dlog(double _X, int _Baseflag); 
#line 212
__declspec(dllimport) long double __cdecl _ldlog(long double _X, int _Baseflag); 
#line 213
__declspec(dllimport) float __cdecl _fdlog(float _X, int _Baseflag); 
#line 215
__declspec(dllimport) double __cdecl _dsin(double _X, unsigned _Qoff); 
#line 216
__declspec(dllimport) long double __cdecl _ldsin(long double _X, unsigned _Qoff); 
#line 217
__declspec(dllimport) float __cdecl _fdsin(float _X, unsigned _Qoff); 
#line 224
typedef 
#line 221
union { 
#line 222
unsigned short _Sh[4]; 
#line 223
double _Val; 
#line 224
} _double_val; 
#line 231
typedef 
#line 228
union { 
#line 229
unsigned short _Sh[2]; 
#line 230
float _Val; 
#line 231
} _float_val; 
#line 238
typedef 
#line 235
union { 
#line 236
unsigned short _Sh[4]; 
#line 237
long double _Val; 
#line 238
} _ldouble_val; 
#line 246
typedef 
#line 241
union { 
#line 242
unsigned short _Word[4]; 
#line 243
float _Float; 
#line 244
double _Double; 
#line 245
long double _Long_double; 
#line 246
} _float_const; 
#line 248
extern const _float_const _Denorm_C, _Inf_C, _Nan_C, _Snan_C, _Hugeval_C; 
#line 249
extern const _float_const _FDenorm_C, _FInf_C, _FNan_C, _FSnan_C; 
#line 250
extern const _float_const _LDenorm_C, _LInf_C, _LNan_C, _LSnan_C; 
#line 252
extern const _float_const _Eps_C, _Rteps_C; 
#line 253
extern const _float_const _FEps_C, _FRteps_C; 
#line 254
extern const _float_const _LEps_C, _LRteps_C; 
#line 256
extern const double _Zero_C, _Xbig_C; 
#line 257
extern const float _FZero_C, _FXbig_C; 
#line 258
extern const long double _LZero_C, _LXbig_C; 
#line 287
extern "C++" {
#line 289
inline int fpclassify(float _X) throw() 
#line 290
{ 
#line 291
return _fdtest(&_X); 
#line 292
} 
#line 294
inline int fpclassify(double _X) throw() 
#line 295
{ 
#line 296
return _dtest(&_X); 
#line 297
} 
#line 299
inline int fpclassify(long double _X) throw() 
#line 300
{ 
#line 301
return _ldtest(&_X); 
#line 302
} 
#line 304
inline bool signbit(float _X) throw() 
#line 305
{ 
#line 306
return _fdsign(_X) != 0; 
#line 307
} 
#line 309
inline bool signbit(double _X) throw() 
#line 310
{ 
#line 311
return _dsign(_X) != 0; 
#line 312
} 
#line 314
inline bool signbit(long double _X) throw() 
#line 315
{ 
#line 316
return _ldsign(_X) != 0; 
#line 317
} 
#line 319
inline int _fpcomp(float _X, float _Y) throw() 
#line 320
{ 
#line 321
return _fdpcomp(_X, _Y); 
#line 322
} 
#line 324
inline int _fpcomp(double _X, double _Y) throw() 
#line 325
{ 
#line 326
return _dpcomp(_X, _Y); 
#line 327
} 
#line 329
inline int _fpcomp(long double _X, long double _Y) throw() 
#line 330
{ 
#line 331
return _ldpcomp(_X, _Y); 
#line 332
} 
#line 334
template< class _Trc, class _Tre> struct _Combined_type { 
#line 336
typedef float _Type; 
#line 337
}; 
#line 339
template<> struct _Combined_type< float, double>  { 
#line 341
typedef double _Type; 
#line 342
}; 
#line 344
template<> struct _Combined_type< float, long double>  { 
#line 346
typedef long double _Type; 
#line 347
}; 
#line 349
template< class _Ty, class _T2> struct _Real_widened { 
#line 351
typedef long double _Type; 
#line 352
}; 
#line 354
template<> struct _Real_widened< float, float>  { 
#line 356
typedef float _Type; 
#line 357
}; 
#line 359
template<> struct _Real_widened< float, double>  { 
#line 361
typedef double _Type; 
#line 362
}; 
#line 364
template<> struct _Real_widened< double, float>  { 
#line 366
typedef double _Type; 
#line 367
}; 
#line 369
template<> struct _Real_widened< double, double>  { 
#line 371
typedef double _Type; 
#line 372
}; 
#line 374
template< class _Ty> struct _Real_type { 
#line 376
typedef double _Type; 
#line 377
}; 
#line 379
template<> struct _Real_type< float>  { 
#line 381
typedef float _Type; 
#line 382
}; 
#line 384
template<> struct _Real_type< long double>  { 
#line 386
typedef long double _Type; 
#line 387
}; 
#line 389
template < class _T1, class _T2 >
      inline int _fpcomp ( _T1 _X, _T2 _Y ) throw ( )
    {
        typedef typename _Combined_type < float,
            typename _Real_widened <
            typename _Real_type < _T1 > :: _Type,
            typename _Real_type < _T2 > :: _Type > :: _Type > :: _Type _Tw;
        return _fpcomp ( ( _Tw ) _X, ( _Tw ) _Y );
    }
#line 399
template < class _Ty >
      inline bool isfinite ( _Ty _X ) throw ( )
    {
        return fpclassify ( _X ) <= 0;
    }
#line 405
template < class _Ty >
      inline bool isinf ( _Ty _X ) throw ( )
    {
        return fpclassify ( _X ) == 1;
    }
#line 411
template < class _Ty >
      inline bool isnan ( _Ty _X ) throw ( )
    {
        return fpclassify ( _X ) == 2;
    }
#line 417
template < class _Ty >
      inline bool isnormal ( _Ty _X ) throw ( )
    {
        return fpclassify ( _X ) == ( - 1 );
    }
#line 423
template < class _Ty1, class _Ty2 >
      inline bool isgreater ( _Ty1 _X, _Ty2 _Y ) throw ( )
    {
        return ( _fpcomp ( _X, _Y ) & 4 ) != 0;
    }
#line 429
template < class _Ty1, class _Ty2 >
      inline bool isgreaterequal ( _Ty1 _X, _Ty2 _Y ) throw ( )
    {
        return ( _fpcomp ( _X, _Y ) & ( 2 | 4 ) ) != 0;
    }
#line 435
template < class _Ty1, class _Ty2 >
      inline bool isless ( _Ty1 _X, _Ty2 _Y ) throw ( )
    {
        return ( _fpcomp ( _X, _Y ) & 1 ) != 0;
    }
#line 441
template < class _Ty1, class _Ty2 >
      inline bool islessequal ( _Ty1 _X, _Ty2 _Y ) throw ( )
    {
        return ( _fpcomp ( _X, _Y ) & ( 1 | 2 ) ) != 0;
    }
#line 447
template < class _Ty1, class _Ty2 >
      inline bool islessgreater ( _Ty1 _X, _Ty2 _Y ) throw ( )
    {
        return ( _fpcomp ( _X, _Y ) & ( 1 | 4 ) ) != 0;
    }
#line 453
template < class _Ty1, class _Ty2 >
      inline bool isunordered ( _Ty1 _X, _Ty2 _Y ) throw ( )
    {
        return _fpcomp ( _X, _Y ) == 0;
    }
#line 458
}
#line 465 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.16299.0\\ucrt\\corecrt_math.h"
int __cdecl abs(int _X); 
#line 466
long __cdecl labs(long _X); 
#line 467
__int64 __cdecl llabs(__int64 _X); 
#line 469
double __cdecl acos(double _X); 
#line 470
double __cdecl asin(double _X); 
#line 471
double __cdecl atan(double _X); 
#line 472
double __cdecl atan2(double _Y, double _X); 
#line 474
double __cdecl cos(double _X); 
#line 475
double __cdecl cosh(double _X); 
#line 476
double __cdecl exp(double _X); 
#line 477
double __cdecl fabs(double _X); 
#line 478
double __cdecl fmod(double _X, double _Y); 
#line 479
double __cdecl log(double _X); 
#line 480
double __cdecl log10(double _X); 
#line 481
double __cdecl pow(double _X, double _Y); 
#line 482
double __cdecl sin(double _X); 
#line 483
double __cdecl sinh(double _X); 
#line 484
double __cdecl sqrt(double _X); 
#line 485
double __cdecl tan(double _X); 
#line 486
double __cdecl tanh(double _X); 
#line 488
__declspec(dllimport) double __cdecl acosh(double _X); 
#line 489
__declspec(dllimport) double __cdecl asinh(double _X); 
#line 490
__declspec(dllimport) double __cdecl atanh(double _X); 
#line 491
__declspec(dllimport) double __cdecl atof(const char * _String); 
#line 492
__declspec(dllimport) double __cdecl _atof_l(const char * _String, _locale_t _Locale); 
#line 493
__declspec(dllimport) double __cdecl _cabs(_complex _Complex_value); 
#line 494
__declspec(dllimport) double __cdecl cbrt(double _X); 
#line 495
__declspec(dllimport) double __cdecl ceil(double _X); 
#line 496
__declspec(dllimport) double __cdecl _chgsign(double _X); 
#line 497
__declspec(dllimport) double __cdecl copysign(double _Number, double _Sign); 
#line 498
__declspec(dllimport) double __cdecl _copysign(double _Number, double _Sign); 
#line 499
__declspec(dllimport) double __cdecl erf(double _X); 
#line 500
__declspec(dllimport) double __cdecl erfc(double _X); 
#line 501
__declspec(dllimport) double __cdecl exp2(double _X); 
#line 502
__declspec(dllimport) double __cdecl expm1(double _X); 
#line 503
__declspec(dllimport) double __cdecl fdim(double _X, double _Y); 
#line 504
__declspec(dllimport) double __cdecl floor(double _X); 
#line 505
__declspec(dllimport) double __cdecl fma(double _X, double _Y, double _Z); 
#line 506
__declspec(dllimport) double __cdecl fmax(double _X, double _Y); 
#line 507
__declspec(dllimport) double __cdecl fmin(double _X, double _Y); 
#line 508
__declspec(dllimport) double __cdecl frexp(double _X, int * _Y); 
#line 509
__declspec(dllimport) double __cdecl hypot(double _X, double _Y); 
#line 510
__declspec(dllimport) double __cdecl _hypot(double _X, double _Y); 
#line 511
__declspec(dllimport) int __cdecl ilogb(double _X); 
#line 512
__declspec(dllimport) double __cdecl ldexp(double _X, int _Y); 
#line 513
__declspec(dllimport) double __cdecl lgamma(double _X); 
#line 514
__declspec(dllimport) __int64 __cdecl llrint(double _X); 
#line 515
__declspec(dllimport) __int64 __cdecl llround(double _X); 
#line 516
__declspec(dllimport) double __cdecl log1p(double _X); 
#line 517
__declspec(dllimport) double __cdecl log2(double _X); 
#line 518
__declspec(dllimport) double __cdecl logb(double _X); 
#line 519
__declspec(dllimport) long __cdecl lrint(double _X); 
#line 520
__declspec(dllimport) long __cdecl lround(double _X); 
#line 522
int __cdecl _matherr(_exception * _Except); 
#line 524
__declspec(dllimport) double __cdecl modf(double _X, double * _Y); 
#line 525
__declspec(dllimport) double __cdecl nan(const char * _X); 
#line 526
__declspec(dllimport) double __cdecl nearbyint(double _X); 
#line 527
__declspec(dllimport) double __cdecl nextafter(double _X, double _Y); 
#line 528
__declspec(dllimport) double __cdecl nexttoward(double _X, long double _Y); 
#line 529
__declspec(dllimport) double __cdecl remainder(double _X, double _Y); 
#line 530
__declspec(dllimport) double __cdecl remquo(double _X, double _Y, int * _Z); 
#line 531
__declspec(dllimport) double __cdecl rint(double _X); 
#line 532
__declspec(dllimport) double __cdecl round(double _X); 
#line 533
__declspec(dllimport) double __cdecl scalbln(double _X, long _Y); 
#line 534
__declspec(dllimport) double __cdecl scalbn(double _X, int _Y); 
#line 535
__declspec(dllimport) double __cdecl tgamma(double _X); 
#line 536
__declspec(dllimport) double __cdecl trunc(double _X); 
#line 537
__declspec(dllimport) double __cdecl _j0(double _X); 
#line 538
__declspec(dllimport) double __cdecl _j1(double _X); 
#line 539
__declspec(dllimport) double __cdecl _jn(int _X, double _Y); 
#line 540
__declspec(dllimport) double __cdecl _y0(double _X); 
#line 541
__declspec(dllimport) double __cdecl _y1(double _X); 
#line 542
__declspec(dllimport) double __cdecl _yn(int _X, double _Y); 
#line 544
__declspec(dllimport) float __cdecl acoshf(float _X); 
#line 545
__declspec(dllimport) float __cdecl asinhf(float _X); 
#line 546
__declspec(dllimport) float __cdecl atanhf(float _X); 
#line 547
__declspec(dllimport) float __cdecl cbrtf(float _X); 
#line 548
__declspec(dllimport) float __cdecl _chgsignf(float _X); 
#line 549
__declspec(dllimport) float __cdecl copysignf(float _Number, float _Sign); 
#line 550
__declspec(dllimport) float __cdecl _copysignf(float _Number, float _Sign); 
#line 551
__declspec(dllimport) float __cdecl erff(float _X); 
#line 552
__declspec(dllimport) float __cdecl erfcf(float _X); 
#line 553
__declspec(dllimport) float __cdecl expm1f(float _X); 
#line 554
__declspec(dllimport) float __cdecl exp2f(float _X); 
#line 555
__declspec(dllimport) float __cdecl fdimf(float _X, float _Y); 
#line 556
__declspec(dllimport) float __cdecl fmaf(float _X, float _Y, float _Z); 
#line 557
__declspec(dllimport) float __cdecl fmaxf(float _X, float _Y); 
#line 558
__declspec(dllimport) float __cdecl fminf(float _X, float _Y); 
#line 559
__declspec(dllimport) float __cdecl _hypotf(float _X, float _Y); 
#line 560
__declspec(dllimport) int __cdecl ilogbf(float _X); 
#line 561
__declspec(dllimport) float __cdecl lgammaf(float _X); 
#line 562
__declspec(dllimport) __int64 __cdecl llrintf(float _X); 
#line 563
__declspec(dllimport) __int64 __cdecl llroundf(float _X); 
#line 564
__declspec(dllimport) float __cdecl log1pf(float _X); 
#line 565
__declspec(dllimport) float __cdecl log2f(float _X); 
#line 566
__declspec(dllimport) float __cdecl logbf(float _X); 
#line 567
__declspec(dllimport) long __cdecl lrintf(float _X); 
#line 568
__declspec(dllimport) long __cdecl lroundf(float _X); 
#line 569
__declspec(dllimport) float __cdecl nanf(const char * _X); 
#line 570
__declspec(dllimport) float __cdecl nearbyintf(float _X); 
#line 571
__declspec(dllimport) float __cdecl nextafterf(float _X, float _Y); 
#line 572
__declspec(dllimport) float __cdecl nexttowardf(float _X, long double _Y); 
#line 573
__declspec(dllimport) float __cdecl remainderf(float _X, float _Y); 
#line 574
__declspec(dllimport) float __cdecl remquof(float _X, float _Y, int * _Z); 
#line 575
__declspec(dllimport) float __cdecl rintf(float _X); 
#line 576
__declspec(dllimport) float __cdecl roundf(float _X); 
#line 577
__declspec(dllimport) float __cdecl scalblnf(float _X, long _Y); 
#line 578
__declspec(dllimport) float __cdecl scalbnf(float _X, int _Y); 
#line 579
__declspec(dllimport) float __cdecl tgammaf(float _X); 
#line 580
__declspec(dllimport) float __cdecl truncf(float _X); 
#line 590 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.16299.0\\ucrt\\corecrt_math.h"
__declspec(dllimport) float __cdecl _logbf(float _X); 
#line 591
__declspec(dllimport) float __cdecl _nextafterf(float _X, float _Y); 
#line 592
__declspec(dllimport) int __cdecl _finitef(float _X); 
#line 593
__declspec(dllimport) int __cdecl _isnanf(float _X); 
#line 594
__declspec(dllimport) int __cdecl _fpclassf(float _X); 
#line 596
__declspec(dllimport) int __cdecl _set_FMA3_enable(int _Flag); 
#line 597
__declspec(dllimport) int __cdecl _get_FMA3_enable(); 
#line 610 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.16299.0\\ucrt\\corecrt_math.h"
__declspec(dllimport) float __cdecl acosf(float _X); 
#line 611
__declspec(dllimport) float __cdecl asinf(float _X); 
#line 612
__declspec(dllimport) float __cdecl atan2f(float _Y, float _X); 
#line 613
__declspec(dllimport) float __cdecl atanf(float _X); 
#line 614
__declspec(dllimport) float __cdecl ceilf(float _X); 
#line 615
__declspec(dllimport) float __cdecl cosf(float _X); 
#line 616
__declspec(dllimport) float __cdecl coshf(float _X); 
#line 617
__declspec(dllimport) float __cdecl expf(float _X); 
#line 669 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.16299.0\\ucrt\\corecrt_math.h"
__inline float __cdecl fabsf(float _X) 
#line 670
{ 
#line 671
return (float)fabs(_X); 
#line 672
} 
#line 678 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.16299.0\\ucrt\\corecrt_math.h"
__declspec(dllimport) float __cdecl floorf(float _X); 
#line 679
__declspec(dllimport) float __cdecl fmodf(float _X, float _Y); 
#line 695 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.16299.0\\ucrt\\corecrt_math.h"
__inline float __cdecl frexpf(float _X, int *_Y) 
#line 696
{ 
#line 697
return (float)frexp(_X, _Y); 
#line 698
} 
#line 700
__inline float __cdecl hypotf(float _X, float _Y) 
#line 701
{ 
#line 702
return _hypotf(_X, _Y); 
#line 703
} 
#line 705
__inline float __cdecl ldexpf(float _X, int _Y) 
#line 706
{ 
#line 707
return (float)ldexp(_X, _Y); 
#line 708
} 
#line 712
__declspec(dllimport) float __cdecl log10f(float _X); 
#line 713
__declspec(dllimport) float __cdecl logf(float _X); 
#line 714
__declspec(dllimport) float __cdecl modff(float _X, float * _Y); 
#line 715
__declspec(dllimport) float __cdecl powf(float _X, float _Y); 
#line 716
__declspec(dllimport) float __cdecl sinf(float _X); 
#line 717
__declspec(dllimport) float __cdecl sinhf(float _X); 
#line 718
__declspec(dllimport) float __cdecl sqrtf(float _X); 
#line 719
__declspec(dllimport) float __cdecl tanf(float _X); 
#line 720
__declspec(dllimport) float __cdecl tanhf(float _X); 
#line 774 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.16299.0\\ucrt\\corecrt_math.h"
__declspec(dllimport) long double __cdecl acoshl(long double _X); 
#line 776
__inline long double __cdecl acosl(long double _X) 
#line 777
{ 
#line 778
return acos((double)_X); 
#line 779
} 
#line 781
__declspec(dllimport) long double __cdecl asinhl(long double _X); 
#line 783
__inline long double __cdecl asinl(long double _X) 
#line 784
{ 
#line 785
return asin((double)_X); 
#line 786
} 
#line 788
__inline long double __cdecl atan2l(long double _Y, long double _X) 
#line 789
{ 
#line 790
return atan2((double)_Y, (double)_X); 
#line 791
} 
#line 793
__declspec(dllimport) long double __cdecl atanhl(long double _X); 
#line 795
__inline long double __cdecl atanl(long double _X) 
#line 796
{ 
#line 797
return atan((double)_X); 
#line 798
} 
#line 800
__declspec(dllimport) long double __cdecl cbrtl(long double _X); 
#line 802
__inline long double __cdecl ceill(long double _X) 
#line 803
{ 
#line 804
return ceil((double)_X); 
#line 805
} 
#line 807
__inline long double __cdecl _chgsignl(long double _X) 
#line 808
{ 
#line 809
return _chgsign((double)_X); 
#line 810
} 
#line 812
__declspec(dllimport) long double __cdecl copysignl(long double _Number, long double _Sign); 
#line 814
__inline long double __cdecl _copysignl(long double _Number, long double _Sign) 
#line 815
{ 
#line 816
return _copysign((double)_Number, (double)_Sign); 
#line 817
} 
#line 819
__inline long double __cdecl coshl(long double _X) 
#line 820
{ 
#line 821
return cosh((double)_X); 
#line 822
} 
#line 824
__inline long double __cdecl cosl(long double _X) 
#line 825
{ 
#line 826
return cos((double)_X); 
#line 827
} 
#line 829
__declspec(dllimport) long double __cdecl erfl(long double _X); 
#line 830
__declspec(dllimport) long double __cdecl erfcl(long double _X); 
#line 832
__inline long double __cdecl expl(long double _X) 
#line 833
{ 
#line 834
return exp((double)_X); 
#line 835
} 
#line 837
__declspec(dllimport) long double __cdecl exp2l(long double _X); 
#line 838
__declspec(dllimport) long double __cdecl expm1l(long double _X); 
#line 840
__inline long double __cdecl fabsl(long double _X) 
#line 841
{ 
#line 842
return fabs((double)_X); 
#line 843
} 
#line 845
__declspec(dllimport) long double __cdecl fdiml(long double _X, long double _Y); 
#line 847
__inline long double __cdecl floorl(long double _X) 
#line 848
{ 
#line 849
return floor((double)_X); 
#line 850
} 
#line 852
__declspec(dllimport) long double __cdecl fmal(long double _X, long double _Y, long double _Z); 
#line 853
__declspec(dllimport) long double __cdecl fmaxl(long double _X, long double _Y); 
#line 854
__declspec(dllimport) long double __cdecl fminl(long double _X, long double _Y); 
#line 856
__inline long double __cdecl fmodl(long double _X, long double _Y) 
#line 857
{ 
#line 858
return fmod((double)_X, (double)_Y); 
#line 859
} 
#line 861
__inline long double __cdecl frexpl(long double _X, int *_Y) 
#line 862
{ 
#line 863
return frexp((double)_X, _Y); 
#line 864
} 
#line 866
__declspec(dllimport) int __cdecl ilogbl(long double _X); 
#line 868
__inline long double __cdecl _hypotl(long double _X, long double _Y) 
#line 869
{ 
#line 870
return _hypot((double)_X, (double)_Y); 
#line 871
} 
#line 873
__inline long double __cdecl hypotl(long double _X, long double _Y) 
#line 874
{ 
#line 875
return _hypot((double)_X, (double)_Y); 
#line 876
} 
#line 878
__inline long double __cdecl ldexpl(long double _X, int _Y) 
#line 879
{ 
#line 880
return ldexp((double)_X, _Y); 
#line 881
} 
#line 883
__declspec(dllimport) long double __cdecl lgammal(long double _X); 
#line 884
__declspec(dllimport) __int64 __cdecl llrintl(long double _X); 
#line 885
__declspec(dllimport) __int64 __cdecl llroundl(long double _X); 
#line 887
__inline long double __cdecl logl(long double _X) 
#line 888
{ 
#line 889
return log((double)_X); 
#line 890
} 
#line 892
__inline long double __cdecl log10l(long double _X) 
#line 893
{ 
#line 894
return log10((double)_X); 
#line 895
} 
#line 897
__declspec(dllimport) long double __cdecl log1pl(long double _X); 
#line 898
__declspec(dllimport) long double __cdecl log2l(long double _X); 
#line 899
__declspec(dllimport) long double __cdecl logbl(long double _X); 
#line 900
__declspec(dllimport) long __cdecl lrintl(long double _X); 
#line 901
__declspec(dllimport) long __cdecl lroundl(long double _X); 
#line 903
__inline long double __cdecl modfl(long double _X, long double *_Y) 
#line 904
{ 
#line 905
double _F, _I; 
#line 906
_F = modf((double)_X, &_I); 
#line 907
(*_Y) = _I; 
#line 908
return _F; 
#line 909
} 
#line 911
__declspec(dllimport) long double __cdecl nanl(const char * _X); 
#line 912
__declspec(dllimport) long double __cdecl nearbyintl(long double _X); 
#line 913
__declspec(dllimport) long double __cdecl nextafterl(long double _X, long double _Y); 
#line 914
__declspec(dllimport) long double __cdecl nexttowardl(long double _X, long double _Y); 
#line 916
__inline long double __cdecl powl(long double _X, long double _Y) 
#line 917
{ 
#line 918
return pow((double)_X, (double)_Y); 
#line 919
} 
#line 921
__declspec(dllimport) long double __cdecl remainderl(long double _X, long double _Y); 
#line 922
__declspec(dllimport) long double __cdecl remquol(long double _X, long double _Y, int * _Z); 
#line 923
__declspec(dllimport) long double __cdecl rintl(long double _X); 
#line 924
__declspec(dllimport) long double __cdecl roundl(long double _X); 
#line 925
__declspec(dllimport) long double __cdecl scalblnl(long double _X, long _Y); 
#line 926
__declspec(dllimport) long double __cdecl scalbnl(long double _X, int _Y); 
#line 928
__inline long double __cdecl sinhl(long double _X) 
#line 929
{ 
#line 930
return sinh((double)_X); 
#line 931
} 
#line 933
__inline long double __cdecl sinl(long double _X) 
#line 934
{ 
#line 935
return sin((double)_X); 
#line 936
} 
#line 938
__inline long double __cdecl sqrtl(long double _X) 
#line 939
{ 
#line 940
return sqrt((double)_X); 
#line 941
} 
#line 943
__inline long double __cdecl tanhl(long double _X) 
#line 944
{ 
#line 945
return tanh((double)_X); 
#line 946
} 
#line 948
__inline long double __cdecl tanl(long double _X) 
#line 949
{ 
#line 950
return tan((double)_X); 
#line 951
} 
#line 953
__declspec(dllimport) long double __cdecl tgammal(long double _X); 
#line 954
__declspec(dllimport) long double __cdecl truncl(long double _X); 
#line 975 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.16299.0\\ucrt\\corecrt_math.h"
extern double HUGE; 
#line 980 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.16299.0\\ucrt\\corecrt_math.h"
__declspec(dllimport) double __cdecl j0(double _X); 
#line 981
__declspec(dllimport) double __cdecl j1(double _X); 
#line 982
__declspec(dllimport) double __cdecl jn(int _X, double _Y); 
#line 983
__declspec(dllimport) double __cdecl y0(double _X); 
#line 984
__declspec(dllimport) double __cdecl y1(double _X); 
#line 985
__declspec(dllimport) double __cdecl yn(int _X, double _Y); 
#line 993 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.16299.0\\ucrt\\corecrt_math.h"
}
#line 991
#pragma warning(pop)
#line 993
__pragma( pack ( pop )) 
#line 13 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.16299.0\\ucrt\\corecrt_malloc.h"
__pragma( pack ( push, 8 )) extern "C" {
#line 54 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.16299.0\\ucrt\\corecrt_malloc.h"
__declspec(dllimport) __declspec(allocator) __declspec(restrict) void *__cdecl 
#line 55
_calloc_base(size_t _Count, size_t _Size); 
#line 61
__declspec(dllimport) __declspec(allocator) __declspec(restrict) void *__cdecl 
#line 62
calloc(size_t _Count, size_t _Size); 
#line 68
__declspec(dllimport) int __cdecl _callnewh(size_t _Size); 
#line 73
__declspec(dllimport) __declspec(allocator) void *__cdecl 
#line 74
_expand(void * _Block, size_t _Size); 
#line 79
__declspec(dllimport) void __cdecl 
#line 80
_free_base(void * _Block); 
#line 84
__declspec(dllimport) void __cdecl 
#line 85
free(void * _Block); 
#line 90
__declspec(dllimport) __declspec(allocator) __declspec(restrict) void *__cdecl 
#line 91
_malloc_base(size_t _Size); 
#line 96
__declspec(dllimport) __declspec(allocator) __declspec(restrict) void *__cdecl 
#line 97
malloc(size_t _Size); 
#line 102
__declspec(dllimport) size_t __cdecl 
#line 103
_msize_base(void * _Block); 
#line 108
__declspec(dllimport) size_t __cdecl 
#line 109
_msize(void * _Block); 
#line 114
__declspec(dllimport) __declspec(allocator) __declspec(restrict) void *__cdecl 
#line 115
_realloc_base(void * _Block, size_t _Size); 
#line 121
__declspec(dllimport) __declspec(allocator) __declspec(restrict) void *__cdecl 
#line 122
realloc(void * _Block, size_t _Size); 
#line 128
__declspec(dllimport) __declspec(allocator) __declspec(restrict) void *__cdecl 
#line 129
_recalloc_base(void * _Block, size_t _Count, size_t _Size); 
#line 136
__declspec(dllimport) __declspec(allocator) __declspec(restrict) void *__cdecl 
#line 137
_recalloc(void * _Block, size_t _Count, size_t _Size); 
#line 143
__declspec(dllimport) void __cdecl 
#line 144
_aligned_free(void * _Block); 
#line 149
__declspec(dllimport) __declspec(allocator) __declspec(restrict) void *__cdecl 
#line 150
_aligned_malloc(size_t _Size, size_t _Alignment); 
#line 156
__declspec(dllimport) __declspec(allocator) __declspec(restrict) void *__cdecl 
#line 157
_aligned_offset_malloc(size_t _Size, size_t _Alignment, size_t _Offset); 
#line 164
__declspec(dllimport) size_t __cdecl 
#line 165
_aligned_msize(void * _Block, size_t _Alignment, size_t _Offset); 
#line 172
__declspec(dllimport) __declspec(allocator) __declspec(restrict) void *__cdecl 
#line 173
_aligned_offset_realloc(void * _Block, size_t _Size, size_t _Alignment, size_t _Offset); 
#line 181
__declspec(dllimport) __declspec(allocator) __declspec(restrict) void *__cdecl 
#line 182
_aligned_offset_recalloc(void * _Block, size_t _Count, size_t _Size, size_t _Alignment, size_t _Offset); 
#line 191
__declspec(dllimport) __declspec(allocator) __declspec(restrict) void *__cdecl 
#line 192
_aligned_realloc(void * _Block, size_t _Size, size_t _Alignment); 
#line 199
__declspec(dllimport) __declspec(allocator) __declspec(restrict) void *__cdecl 
#line 200
_aligned_recalloc(void * _Block, size_t _Count, size_t _Size, size_t _Alignment); 
#line 228 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.16299.0\\ucrt\\corecrt_malloc.h"
}__pragma( pack ( pop )) 
#line 16 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.16299.0\\ucrt\\corecrt_search.h"
__pragma( pack ( push, 8 )) extern "C" {
#line 19
typedef int (__cdecl *_CoreCrtSecureSearchSortCompareFunction)(void *, const void *, const void *); 
#line 20
typedef int (__cdecl *_CoreCrtNonSecureSearchSortCompareFunction)(const void *, const void *); 
#line 26
__declspec(dllimport) void *__cdecl bsearch_s(const void * _Key, const void * _Base, rsize_t _NumOfElements, rsize_t _SizeOfElements, _CoreCrtSecureSearchSortCompareFunction _CompareFunction, void * _Context); 
#line 35
__declspec(dllimport) void __cdecl qsort_s(void * _Base, rsize_t _NumOfElements, rsize_t _SizeOfElements, _CoreCrtSecureSearchSortCompareFunction _CompareFunction, void * _Context); 
#line 48 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.16299.0\\ucrt\\corecrt_search.h"
__declspec(dllimport) void *__cdecl bsearch(const void * _Key, const void * _Base, size_t _NumOfElements, size_t _SizeOfElements, _CoreCrtNonSecureSearchSortCompareFunction _CompareFunction); 
#line 56
__declspec(dllimport) void __cdecl qsort(void * _Base, size_t _NumOfElements, size_t _SizeOfElements, _CoreCrtNonSecureSearchSortCompareFunction _CompareFunction); 
#line 64
__declspec(dllimport) void *__cdecl _lfind_s(const void * _Key, const void * _Base, unsigned * _NumOfElements, size_t _SizeOfElements, _CoreCrtSecureSearchSortCompareFunction _CompareFunction, void * _Context); 
#line 74
__declspec(dllimport) void *__cdecl _lfind(const void * _Key, const void * _Base, unsigned * _NumOfElements, unsigned _SizeOfElements, _CoreCrtNonSecureSearchSortCompareFunction _CompareFunction); 
#line 83
__declspec(dllimport) void *__cdecl _lsearch_s(const void * _Key, void * _Base, unsigned * _NumOfElements, size_t _SizeOfElements, _CoreCrtSecureSearchSortCompareFunction _CompareFunction, void * _Context); 
#line 93
__declspec(dllimport) void *__cdecl _lsearch(const void * _Key, void * _Base, unsigned * _NumOfElements, unsigned _SizeOfElements, _CoreCrtNonSecureSearchSortCompareFunction _CompareFunction); 
#line 191 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.16299.0\\ucrt\\corecrt_search.h"
__declspec(dllimport) void *__cdecl lfind(const void * _Key, const void * _Base, unsigned * _NumOfElements, unsigned _SizeOfElements, _CoreCrtNonSecureSearchSortCompareFunction _CompareFunction); 
#line 200
__declspec(dllimport) void *__cdecl lsearch(const void * _Key, void * _Base, unsigned * _NumOfElements, unsigned _SizeOfElements, _CoreCrtNonSecureSearchSortCompareFunction _CompareFunction); 
#line 212 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.16299.0\\ucrt\\corecrt_search.h"
}__pragma( pack ( pop )) 
#line 13 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.16299.0\\ucrt\\corecrt_wstdlib.h"
__pragma( pack ( push, 8 )) extern "C" {
#line 50
__declspec(dllimport) errno_t __cdecl _itow_s(int _Value, __wchar_t * _Buffer, size_t _BufferCount, int _Radix); 
#line 57
extern "C++" {template < size_t _Size > inline errno_t __cdecl _itow_s ( int _Value, wchar_t ( & _Buffer ) [ _Size ], int _Radix ) throw ( ) { return _itow_s ( _Value, _Buffer, _Size, _Radix ); }}
#line 64 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.16299.0\\ucrt\\corecrt_wstdlib.h"
__declspec(dllimport) __wchar_t *__cdecl _itow(int _Value, __wchar_t * _Buffer, int _Radix); 
#line 73 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.16299.0\\ucrt\\corecrt_wstdlib.h"
__declspec(dllimport) errno_t __cdecl _ltow_s(long _Value, __wchar_t * _Buffer, size_t _BufferCount, int _Radix); 
#line 80
extern "C++" {template < size_t _Size > inline errno_t __cdecl _ltow_s ( long _Value, wchar_t ( & _Buffer ) [ _Size ], int _Radix ) throw ( ) { return _ltow_s ( _Value, _Buffer, _Size, _Radix ); }}
#line 87 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.16299.0\\ucrt\\corecrt_wstdlib.h"
__declspec(dllimport) __wchar_t *__cdecl _ltow(long _Value, __wchar_t * _Buffer, int _Radix); 
#line 95 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.16299.0\\ucrt\\corecrt_wstdlib.h"
__declspec(dllimport) errno_t __cdecl _ultow_s(unsigned long _Value, __wchar_t * _Buffer, size_t _BufferCount, int _Radix); 
#line 102
extern "C++" {template < size_t _Size > inline errno_t __cdecl _ultow_s ( unsigned long _Value, wchar_t ( & _Buffer ) [ _Size ], int _Radix ) throw ( ) { return _ultow_s ( _Value, _Buffer, _Size, _Radix ); }}
#line 109 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.16299.0\\ucrt\\corecrt_wstdlib.h"
__declspec(dllimport) __wchar_t *__cdecl _ultow(unsigned long _Value, __wchar_t * _Buffer, int _Radix); 
#line 117 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.16299.0\\ucrt\\corecrt_wstdlib.h"
__declspec(dllimport) double __cdecl wcstod(const __wchar_t * _String, __wchar_t ** _EndPtr); 
#line 123
__declspec(dllimport) double __cdecl _wcstod_l(const __wchar_t * _String, __wchar_t ** _EndPtr, _locale_t _Locale); 
#line 130
__declspec(dllimport) long __cdecl wcstol(const __wchar_t * _String, __wchar_t ** _EndPtr, int _Radix); 
#line 137
__declspec(dllimport) long __cdecl _wcstol_l(const __wchar_t * _String, __wchar_t ** _EndPtr, int _Radix, _locale_t _Locale); 
#line 145
__declspec(dllimport) __int64 __cdecl wcstoll(const __wchar_t * _String, __wchar_t ** _EndPtr, int _Radix); 
#line 152
__declspec(dllimport) __int64 __cdecl _wcstoll_l(const __wchar_t * _String, __wchar_t ** _EndPtr, int _Radix, _locale_t _Locale); 
#line 160
__declspec(dllimport) unsigned long __cdecl wcstoul(const __wchar_t * _String, __wchar_t ** _EndPtr, int _Radix); 
#line 167
__declspec(dllimport) unsigned long __cdecl _wcstoul_l(const __wchar_t * _String, __wchar_t ** _EndPtr, int _Radix, _locale_t _Locale); 
#line 175
__declspec(dllimport) unsigned __int64 __cdecl wcstoull(const __wchar_t * _String, __wchar_t ** _EndPtr, int _Radix); 
#line 182
__declspec(dllimport) unsigned __int64 __cdecl _wcstoull_l(const __wchar_t * _String, __wchar_t ** _EndPtr, int _Radix, _locale_t _Locale); 
#line 190
__declspec(dllimport) long double __cdecl wcstold(const __wchar_t * _String, __wchar_t ** _EndPtr); 
#line 196
__declspec(dllimport) long double __cdecl _wcstold_l(const __wchar_t * _String, __wchar_t ** _EndPtr, _locale_t _Locale); 
#line 203
__declspec(dllimport) float __cdecl wcstof(const __wchar_t * _String, __wchar_t ** _EndPtr); 
#line 209
__declspec(dllimport) float __cdecl _wcstof_l(const __wchar_t * _String, __wchar_t ** _EndPtr, _locale_t _Locale); 
#line 216
__declspec(dllimport) double __cdecl _wtof(const __wchar_t * _String); 
#line 221
__declspec(dllimport) double __cdecl _wtof_l(const __wchar_t * _String, _locale_t _Locale); 
#line 227
__declspec(dllimport) int __cdecl _wtoi(const __wchar_t * _String); 
#line 232
__declspec(dllimport) int __cdecl _wtoi_l(const __wchar_t * _String, _locale_t _Locale); 
#line 238
__declspec(dllimport) long __cdecl _wtol(const __wchar_t * _String); 
#line 243
__declspec(dllimport) long __cdecl _wtol_l(const __wchar_t * _String, _locale_t _Locale); 
#line 249
__declspec(dllimport) __int64 __cdecl _wtoll(const __wchar_t * _String); 
#line 254
__declspec(dllimport) __int64 __cdecl _wtoll_l(const __wchar_t * _String, _locale_t _Locale); 
#line 260
__declspec(dllimport) errno_t __cdecl _i64tow_s(__int64 _Value, __wchar_t * _Buffer, size_t _BufferCount, int _Radix); 
#line 268
__declspec(dllimport) __wchar_t *__cdecl _i64tow(__int64 _Value, __wchar_t * _Buffer, int _Radix); 
#line 275
__declspec(dllimport) errno_t __cdecl _ui64tow_s(unsigned __int64 _Value, __wchar_t * _Buffer, size_t _BufferCount, int _Radix); 
#line 283
__declspec(dllimport) __wchar_t *__cdecl _ui64tow(unsigned __int64 _Value, __wchar_t * _Buffer, int _Radix); 
#line 290
__declspec(dllimport) __int64 __cdecl _wtoi64(const __wchar_t * _String); 
#line 295
__declspec(dllimport) __int64 __cdecl _wtoi64_l(const __wchar_t * _String, _locale_t _Locale); 
#line 301
__declspec(dllimport) __int64 __cdecl _wcstoi64(const __wchar_t * _String, __wchar_t ** _EndPtr, int _Radix); 
#line 308
__declspec(dllimport) __int64 __cdecl _wcstoi64_l(const __wchar_t * _String, __wchar_t ** _EndPtr, int _Radix, _locale_t _Locale); 
#line 316
__declspec(dllimport) unsigned __int64 __cdecl _wcstoui64(const __wchar_t * _String, __wchar_t ** _EndPtr, int _Radix); 
#line 323
__declspec(dllimport) unsigned __int64 __cdecl _wcstoui64_l(const __wchar_t * _String, __wchar_t ** _EndPtr, int _Radix, _locale_t _Locale); 
#line 335
__declspec(dllimport) __declspec(allocator) __wchar_t *__cdecl _wfullpath(__wchar_t * _Buffer, const __wchar_t * _Path, size_t _BufferCount); 
#line 344
__declspec(dllimport) errno_t __cdecl _wmakepath_s(__wchar_t * _Buffer, size_t _BufferCount, const __wchar_t * _Drive, const __wchar_t * _Dir, const __wchar_t * _Filename, const __wchar_t * _Ext); 
#line 353
extern "C++" {template < size_t _Size > inline errno_t __cdecl _wmakepath_s ( wchar_t ( & _Buffer ) [ _Size ], wchar_t const * _Drive, wchar_t const * _Dir, wchar_t const * _Filename, wchar_t const * _Ext ) throw ( ) { return _wmakepath_s ( _Buffer, _Size, _Drive, _Dir, _Filename, _Ext ); }}
#line 362 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.16299.0\\ucrt\\corecrt_wstdlib.h"
#pragma warning(push)
#pragma warning(disable: 28719)
#pragma warning(disable: 28726)
__declspec(dllimport) void __cdecl _wmakepath(__wchar_t * _Buffer, const __wchar_t * _Drive, const __wchar_t * _Dir, const __wchar_t * _Filename, const __wchar_t * _Ext); 
#line 373 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.16299.0\\ucrt\\corecrt_wstdlib.h"
#pragma warning(pop)
#line 375
__declspec(dllimport) void __cdecl _wperror(const __wchar_t * _ErrorMessage); 
#line 380
__declspec(dllimport) void __cdecl _wsplitpath(const __wchar_t * _FullPath, __wchar_t * _Drive, __wchar_t * _Dir, __wchar_t * _Filename, __wchar_t * _Ext); 
#line 388
__declspec(dllimport) errno_t __cdecl _wsplitpath_s(const __wchar_t * _FullPath, __wchar_t * _Drive, size_t _DriveCount, __wchar_t * _Dir, size_t _DirCount, __wchar_t * _Filename, size_t _FilenameCount, __wchar_t * _Ext, size_t _ExtCount); 
#line 400
extern "C++" {template < size_t _DriveSize, size_t _DirSize, size_t _NameSize, size_t _ExtSize > inline errno_t __cdecl _wsplitpath_s ( wchar_t const * _Path, wchar_t ( & _Drive ) [ _DriveSize ], wchar_t ( & _Dir ) [ _DirSize ], wchar_t ( & _Name ) [ _NameSize ], wchar_t ( & _Ext ) [ _ExtSize ] ) throw ( ) { return _wsplitpath_s ( _Path, _Drive, _DriveSize, _Dir, _DirSize, _Name, _NameSize, _Ext, _ExtSize ); }}
#line 413 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.16299.0\\ucrt\\corecrt_wstdlib.h"
__declspec(dllimport) errno_t __cdecl _wdupenv_s(__wchar_t ** _Buffer, size_t * _BufferCount, const __wchar_t * _VarName); 
#line 422
__declspec(dllimport) __wchar_t *__cdecl _wgetenv(const __wchar_t * _VarName); 
#line 428
__declspec(dllimport) errno_t __cdecl _wgetenv_s(size_t * _RequiredCount, __wchar_t * _Buffer, size_t _BufferCount, const __wchar_t * _VarName); 
#line 435
extern "C++" {template < size_t _Size > inline errno_t __cdecl _wgetenv_s ( size_t * _RequiredCount, wchar_t ( & _Buffer ) [ _Size ], wchar_t const * _VarName ) throw ( ) { return _wgetenv_s ( _RequiredCount, _Buffer, _Size, _VarName ); }}
#line 444 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.16299.0\\ucrt\\corecrt_wstdlib.h"
__declspec(dllimport) int __cdecl _wputenv(const __wchar_t * _EnvString); 
#line 449
__declspec(dllimport) errno_t __cdecl _wputenv_s(const __wchar_t * _Name, const __wchar_t * _Value); 
#line 454
__declspec(dllimport) errno_t __cdecl _wsearchenv_s(const __wchar_t * _Filename, const __wchar_t * _VarName, __wchar_t * _Buffer, size_t _BufferCount); 
#line 461
extern "C++" {template < size_t _Size > inline errno_t __cdecl _wsearchenv_s ( wchar_t const * _Filename, wchar_t const * _VarName, wchar_t ( & _ResultPath ) [ _Size ] ) throw ( ) { return _wsearchenv_s ( _Filename, _VarName, _ResultPath, _Size ); }}
#line 468 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.16299.0\\ucrt\\corecrt_wstdlib.h"
__declspec(dllimport) void __cdecl _wsearchenv(const __wchar_t * _Filename, const __wchar_t * _VarName, __wchar_t * _ResultPath); 
#line 475 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.16299.0\\ucrt\\corecrt_wstdlib.h"
__declspec(dllimport) int __cdecl _wsystem(const __wchar_t * _Command); 
#line 484 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.16299.0\\ucrt\\corecrt_wstdlib.h"
}__pragma( pack ( pop )) 
#line 17 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.16299.0\\ucrt\\stdlib.h"
__pragma( pack ( push, 8 )) extern "C" {
#line 33 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.16299.0\\ucrt\\stdlib.h"
__declspec(dllimport) void __cdecl _swab(char * _Buf1, char * _Buf2, int _SizeInBytes); 
#line 51
__declspec(dllimport) __declspec(noreturn) void __cdecl exit(int _Code); 
#line 52
__declspec(dllimport) __declspec(noreturn) void __cdecl _exit(int _Code); 
#line 53
__declspec(dllimport) __declspec(noreturn) void __cdecl _Exit(int _Code); 
#line 54
__declspec(dllimport) __declspec(noreturn) void __cdecl quick_exit(int _Code); 
#line 55
__declspec(dllimport) __declspec(noreturn) void __cdecl abort(); 
#line 62 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.16299.0\\ucrt\\stdlib.h"
__declspec(dllimport) unsigned __cdecl _set_abort_behavior(unsigned _Flags, unsigned _Mask); 
#line 72
typedef int (__cdecl *_onexit_t)(void); 
#line 139 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.16299.0\\ucrt\\stdlib.h"
int __cdecl atexit(void (__cdecl *)(void)); 
#line 140
_onexit_t __cdecl _onexit(_onexit_t _Func); 
#line 143 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.16299.0\\ucrt\\stdlib.h"
int __cdecl at_quick_exit(void (__cdecl *)(void)); 
#line 154
typedef void (__cdecl *_purecall_handler)(void); 
#line 157
typedef void (__cdecl *_invalid_parameter_handler)(const __wchar_t *, const __wchar_t *, const __wchar_t *, unsigned, uintptr_t); 
#line 166
__declspec(dllimport) _purecall_handler __cdecl _set_purecall_handler(_purecall_handler _Handler); 
#line 170
__declspec(dllimport) _purecall_handler __cdecl _get_purecall_handler(); 
#line 173
__declspec(dllimport) _invalid_parameter_handler __cdecl _set_invalid_parameter_handler(_invalid_parameter_handler _Handler); 
#line 177
__declspec(dllimport) _invalid_parameter_handler __cdecl _get_invalid_parameter_handler(); 
#line 179
__declspec(dllimport) _invalid_parameter_handler __cdecl _set_thread_local_invalid_parameter_handler(_invalid_parameter_handler _Handler); 
#line 183
__declspec(dllimport) _invalid_parameter_handler __cdecl _get_thread_local_invalid_parameter_handler(); 
#line 207 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.16299.0\\ucrt\\stdlib.h"
__declspec(dllimport) int __cdecl _set_error_mode(int _Mode); 
#line 212
__declspec(dllimport) int *__cdecl _errno(); 
#line 215
__declspec(dllimport) errno_t __cdecl _set_errno(int _Value); 
#line 216
__declspec(dllimport) errno_t __cdecl _get_errno(int * _Value); 
#line 218
__declspec(dllimport) unsigned long *__cdecl __doserrno(); 
#line 221
__declspec(dllimport) errno_t __cdecl _set_doserrno(unsigned long _Value); 
#line 222
__declspec(dllimport) errno_t __cdecl _get_doserrno(unsigned long * _Value); 
#line 225
__declspec(dllimport) char **__cdecl __sys_errlist(); 
#line 228
__declspec(dllimport) int *__cdecl __sys_nerr(); 
#line 231
__declspec(dllimport) void __cdecl perror(const char * _ErrMsg); 
#line 237 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.16299.0\\ucrt\\stdlib.h"
__declspec(dllimport) char **__cdecl __p__pgmptr(); 
#line 238
__declspec(dllimport) __wchar_t **__cdecl __p__wpgmptr(); 
#line 239
__declspec(dllimport) int *__cdecl __p__fmode(); 
#line 254 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.16299.0\\ucrt\\stdlib.h"
__declspec(dllimport) errno_t __cdecl _get_pgmptr(char ** _Value); 
#line 257
__declspec(dllimport) errno_t __cdecl _get_wpgmptr(__wchar_t ** _Value); 
#line 259
__declspec(dllimport) errno_t __cdecl _set_fmode(int _Mode); 
#line 261
__declspec(dllimport) errno_t __cdecl _get_fmode(int * _PMode); 
#line 274
typedef 
#line 270
struct _div_t { 
#line 272
int quot; 
#line 273
int rem; 
#line 274
} div_t; 
#line 280
typedef 
#line 276
struct _ldiv_t { 
#line 278
long quot; 
#line 279
long rem; 
#line 280
} ldiv_t; 
#line 286
typedef 
#line 282
struct _lldiv_t { 
#line 284
__int64 quot; 
#line 285
__int64 rem; 
#line 286
} lldiv_t; 
#line 288
int __cdecl abs(int _Number); 
#line 289
long __cdecl labs(long _Number); 
#line 290
__int64 __cdecl llabs(__int64 _Number); 
#line 291
__int64 __cdecl _abs64(__int64 _Number); 
#line 293
unsigned short __cdecl _byteswap_ushort(unsigned short _Number); 
#line 294
unsigned long __cdecl _byteswap_ulong(unsigned long _Number); 
#line 295
unsigned __int64 __cdecl _byteswap_uint64(unsigned __int64 _Number); 
#line 297
__declspec(dllimport) div_t __cdecl div(int _Numerator, int _Denominator); 
#line 298
__declspec(dllimport) ldiv_t __cdecl ldiv(long _Numerator, long _Denominator); 
#line 299
__declspec(dllimport) lldiv_t __cdecl lldiv(__int64 _Numerator, __int64 _Denominator); 
#line 303
#pragma warning (push)
#pragma warning (disable:6540)
#line 306
unsigned __cdecl _rotl(unsigned _Value, int _Shift); 
#line 312
unsigned long __cdecl _lrotl(unsigned long _Value, int _Shift); 
#line 317
unsigned __int64 __cdecl _rotl64(unsigned __int64 _Value, int _Shift); 
#line 322
unsigned __cdecl _rotr(unsigned _Value, int _Shift); 
#line 328
unsigned long __cdecl _lrotr(unsigned long _Value, int _Shift); 
#line 333
unsigned __int64 __cdecl _rotr64(unsigned __int64 _Value, int _Shift); 
#line 338
#pragma warning (pop)
#line 345
__declspec(dllimport) void __cdecl srand(unsigned _Seed); 
#line 347
__declspec(dllimport) int __cdecl rand(); 
#line 356 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.16299.0\\ucrt\\stdlib.h"
extern "C++" {
#line 358
inline long abs(const long _X) throw() 
#line 359
{ 
#line 360
return labs(_X); 
#line 361
} 
#line 363
inline __int64 abs(const __int64 _X) throw() 
#line 364
{ 
#line 365
return llabs(_X); 
#line 366
} 
#line 368
inline ldiv_t div(const long _A1, const long _A2) throw() 
#line 369
{ 
#line 370
return ldiv(_A1, _A2); 
#line 371
} 
#line 373
inline lldiv_t div(const __int64 _A1, const __int64 _A2) throw() 
#line 374
{ 
#line 375
return lldiv(_A1, _A2); 
#line 376
} 
#line 377
}
#line 389 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.16299.0\\ucrt\\stdlib.h"
#pragma pack ( push, 4 )
#line 393
typedef 
#line 391
struct { 
#line 392
unsigned char ld[10]; 
#line 393
} _LDOUBLE; 
#pragma pack ( pop )
#line 413 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.16299.0\\ucrt\\stdlib.h"
typedef 
#line 411
struct { 
#line 412
double x; 
#line 413
} _CRT_DOUBLE; 
#line 418
typedef 
#line 416
struct { 
#line 417
float f; 
#line 418
} _CRT_FLOAT; 
#line 427
typedef 
#line 425
struct { 
#line 426
long double x; 
#line 427
} _LONGDOUBLE; 
#line 431
#pragma pack ( push, 4 )
#line 435
typedef 
#line 433
struct { 
#line 434
unsigned char ld12[12]; 
#line 435
} _LDBL12; 
#pragma pack ( pop )
#line 445
__declspec(dllimport) double __cdecl atof(const char * _String); 
#line 446
__declspec(dllimport) int __cdecl atoi(const char * _String); 
#line 447
__declspec(dllimport) long __cdecl atol(const char * _String); 
#line 448
__declspec(dllimport) __int64 __cdecl atoll(const char * _String); 
#line 449
__declspec(dllimport) __int64 __cdecl _atoi64(const char * _String); 
#line 451
__declspec(dllimport) double __cdecl _atof_l(const char * _String, _locale_t _Locale); 
#line 452
__declspec(dllimport) int __cdecl _atoi_l(const char * _String, _locale_t _Locale); 
#line 453
__declspec(dllimport) long __cdecl _atol_l(const char * _String, _locale_t _Locale); 
#line 454
__declspec(dllimport) __int64 __cdecl _atoll_l(const char * _String, _locale_t _Locale); 
#line 455
__declspec(dllimport) __int64 __cdecl _atoi64_l(const char * _String, _locale_t _Locale); 
#line 457
__declspec(dllimport) int __cdecl _atoflt(_CRT_FLOAT * _Result, const char * _String); 
#line 458
__declspec(dllimport) int __cdecl _atodbl(_CRT_DOUBLE * _Result, char * _String); 
#line 459
__declspec(dllimport) int __cdecl _atoldbl(_LDOUBLE * _Result, char * _String); 
#line 462
__declspec(dllimport) int __cdecl _atoflt_l(_CRT_FLOAT * _Result, const char * _String, _locale_t _Locale); 
#line 469
__declspec(dllimport) int __cdecl _atodbl_l(_CRT_DOUBLE * _Result, char * _String, _locale_t _Locale); 
#line 477
__declspec(dllimport) int __cdecl _atoldbl_l(_LDOUBLE * _Result, char * _String, _locale_t _Locale); 
#line 484
__declspec(dllimport) float __cdecl strtof(const char * _String, char ** _EndPtr); 
#line 490
__declspec(dllimport) float __cdecl _strtof_l(const char * _String, char ** _EndPtr, _locale_t _Locale); 
#line 497
__declspec(dllimport) double __cdecl strtod(const char * _String, char ** _EndPtr); 
#line 503
__declspec(dllimport) double __cdecl _strtod_l(const char * _String, char ** _EndPtr, _locale_t _Locale); 
#line 510
__declspec(dllimport) long double __cdecl strtold(const char * _String, char ** _EndPtr); 
#line 516
__declspec(dllimport) long double __cdecl _strtold_l(const char * _String, char ** _EndPtr, _locale_t _Locale); 
#line 523
__declspec(dllimport) long __cdecl strtol(const char * _String, char ** _EndPtr, int _Radix); 
#line 530
__declspec(dllimport) long __cdecl _strtol_l(const char * _String, char ** _EndPtr, int _Radix, _locale_t _Locale); 
#line 538
__declspec(dllimport) __int64 __cdecl strtoll(const char * _String, char ** _EndPtr, int _Radix); 
#line 545
__declspec(dllimport) __int64 __cdecl _strtoll_l(const char * _String, char ** _EndPtr, int _Radix, _locale_t _Locale); 
#line 553
__declspec(dllimport) unsigned long __cdecl strtoul(const char * _String, char ** _EndPtr, int _Radix); 
#line 560
__declspec(dllimport) unsigned long __cdecl _strtoul_l(const char * _String, char ** _EndPtr, int _Radix, _locale_t _Locale); 
#line 568
__declspec(dllimport) unsigned __int64 __cdecl strtoull(const char * _String, char ** _EndPtr, int _Radix); 
#line 575
__declspec(dllimport) unsigned __int64 __cdecl _strtoull_l(const char * _String, char ** _EndPtr, int _Radix, _locale_t _Locale); 
#line 583
__declspec(dllimport) __int64 __cdecl _strtoi64(const char * _String, char ** _EndPtr, int _Radix); 
#line 590
__declspec(dllimport) __int64 __cdecl _strtoi64_l(const char * _String, char ** _EndPtr, int _Radix, _locale_t _Locale); 
#line 598
__declspec(dllimport) unsigned __int64 __cdecl _strtoui64(const char * _String, char ** _EndPtr, int _Radix); 
#line 605
__declspec(dllimport) unsigned __int64 __cdecl _strtoui64_l(const char * _String, char ** _EndPtr, int _Radix, _locale_t _Locale); 
#line 621
__declspec(dllimport) errno_t __cdecl _itoa_s(int _Value, char * _Buffer, size_t _BufferCount, int _Radix); 
#line 628
extern "C++" {template < size_t _Size > inline errno_t __cdecl _itoa_s ( int _Value, char ( & _Buffer ) [ _Size ], int _Radix ) throw ( ) { return _itoa_s ( _Value, _Buffer, _Size, _Radix ); }}
#line 636 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.16299.0\\ucrt\\stdlib.h"
#pragma warning(push)
#pragma warning(disable: 28719)
#pragma warning(disable: 28726)
__declspec(dllimport) char *__cdecl _itoa(int _Value, char * _Buffer, int _Radix); 
#line 645 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.16299.0\\ucrt\\stdlib.h"
#pragma warning(pop)
#line 649
__declspec(dllimport) errno_t __cdecl _ltoa_s(long _Value, char * _Buffer, size_t _BufferCount, int _Radix); 
#line 656
extern "C++" {template < size_t _Size > inline errno_t __cdecl _ltoa_s ( long _Value, char ( & _Buffer ) [ _Size ], int _Radix ) throw ( ) { return _ltoa_s ( _Value, _Buffer, _Size, _Radix ); }}
#line 663 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.16299.0\\ucrt\\stdlib.h"
__declspec(dllimport) char *__cdecl _ltoa(long _Value, char * _Buffer, int _Radix); 
#line 672 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.16299.0\\ucrt\\stdlib.h"
__declspec(dllimport) errno_t __cdecl _ultoa_s(unsigned long _Value, char * _Buffer, size_t _BufferCount, int _Radix); 
#line 679
extern "C++" {template < size_t _Size > inline errno_t __cdecl _ultoa_s ( unsigned long _Value, char ( & _Buffer ) [ _Size ], int _Radix ) throw ( ) { return _ultoa_s ( _Value, _Buffer, _Size, _Radix ); }}
#line 686 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.16299.0\\ucrt\\stdlib.h"
#pragma warning(push)
#pragma warning(disable: 28726)
__declspec(dllimport) char *__cdecl _ultoa(unsigned long _Value, char * _Buffer, int _Radix); 
#line 694 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.16299.0\\ucrt\\stdlib.h"
#pragma warning(pop)
#line 698
__declspec(dllimport) errno_t __cdecl _i64toa_s(__int64 _Value, char * _Buffer, size_t _BufferCount, int _Radix); 
#line 707
__declspec(dllimport) char *__cdecl _i64toa(__int64 _Value, char * _Buffer, int _Radix); 
#line 715
__declspec(dllimport) errno_t __cdecl _ui64toa_s(unsigned __int64 _Value, char * _Buffer, size_t _BufferCount, int _Radix); 
#line 723
__declspec(dllimport) char *__cdecl _ui64toa(unsigned __int64 _Value, char * _Buffer, int _Radix); 
#line 743
__declspec(dllimport) errno_t __cdecl _ecvt_s(char * _Buffer, size_t _BufferCount, double _Value, int _DigitCount, int * _PtDec, int * _PtSign); 
#line 752
extern "C++" {template < size_t _Size > inline errno_t __cdecl _ecvt_s ( char ( & _Buffer ) [ _Size ], double _Value, int _DigitCount, int * _PtDec, int * _PtSign ) throw ( ) { return _ecvt_s ( _Buffer, _Size, _Value, _DigitCount, _PtDec, _PtSign ); }}
#line 762 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.16299.0\\ucrt\\stdlib.h"
__declspec(dllimport) char *__cdecl _ecvt(double _Value, int _DigitCount, int * _PtDec, int * _PtSign); 
#line 771
__declspec(dllimport) errno_t __cdecl _fcvt_s(char * _Buffer, size_t _BufferCount, double _Value, int _FractionalDigitCount, int * _PtDec, int * _PtSign); 
#line 780
extern "C++" {template < size_t _Size > inline errno_t __cdecl _fcvt_s ( char ( & _Buffer ) [ _Size ], double _Value, int _FractionalDigitCount, int * _PtDec, int * _PtSign ) throw ( ) { return _fcvt_s ( _Buffer, _Size, _Value, _FractionalDigitCount, _PtDec, _PtSign ); }}
#line 792 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.16299.0\\ucrt\\stdlib.h"
__declspec(dllimport) char *__cdecl _fcvt(double _Value, int _FractionalDigitCount, int * _PtDec, int * _PtSign); 
#line 800
__declspec(dllimport) errno_t __cdecl _gcvt_s(char * _Buffer, size_t _BufferCount, double _Value, int _DigitCount); 
#line 807
extern "C++" {template < size_t _Size > inline errno_t __cdecl _gcvt_s ( char ( & _Buffer ) [ _Size ], double _Value, int _DigitCount ) throw ( ) { return _gcvt_s ( _Buffer, _Size, _Value, _DigitCount ); }}
#line 816 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.16299.0\\ucrt\\stdlib.h"
__declspec(dllimport) char *__cdecl _gcvt(double _Value, int _DigitCount, char * _Buffer); 
#line 845 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.16299.0\\ucrt\\stdlib.h"
__declspec(dllimport) int __cdecl ___mb_cur_max_func(); 
#line 848
__declspec(dllimport) int __cdecl ___mb_cur_max_l_func(_locale_t _Locale); 
#line 854 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.16299.0\\ucrt\\stdlib.h"
__declspec(dllimport) int __cdecl mblen(const char * _Ch, size_t _MaxCount); 
#line 860
__declspec(dllimport) int __cdecl _mblen_l(const char * _Ch, size_t _MaxCount, _locale_t _Locale); 
#line 868
__declspec(dllimport) size_t __cdecl _mbstrlen(const char * _String); 
#line 874
__declspec(dllimport) size_t __cdecl _mbstrlen_l(const char * _String, _locale_t _Locale); 
#line 881
__declspec(dllimport) size_t __cdecl _mbstrnlen(const char * _String, size_t _MaxCount); 
#line 888
__declspec(dllimport) size_t __cdecl _mbstrnlen_l(const char * _String, size_t _MaxCount, _locale_t _Locale); 
#line 895
__declspec(dllimport) int __cdecl mbtowc(__wchar_t * _DstCh, const char * _SrcCh, size_t _SrcSizeInBytes); 
#line 902
__declspec(dllimport) int __cdecl _mbtowc_l(__wchar_t * _DstCh, const char * _SrcCh, size_t _SrcSizeInBytes, _locale_t _Locale); 
#line 910
__declspec(dllimport) errno_t __cdecl mbstowcs_s(size_t * _PtNumOfCharConverted, __wchar_t * _DstBuf, size_t _SizeInWords, const char * _SrcBuf, size_t _MaxCount); 
#line 918
extern "C++" {template < size_t _Size > inline errno_t __cdecl mbstowcs_s ( size_t * _PtNumOfCharConverted, wchar_t ( & _Dest ) [ _Size ], char const * _Source, size_t _MaxCount ) throw ( ) { return mbstowcs_s ( _PtNumOfCharConverted, _Dest, _Size, _Source, _MaxCount ); }}
#line 926 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.16299.0\\ucrt\\stdlib.h"
__declspec(dllimport) size_t __cdecl mbstowcs(__wchar_t * _Dest, const char * _Source, size_t _MaxCount); 
#line 934 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.16299.0\\ucrt\\stdlib.h"
__declspec(dllimport) errno_t __cdecl _mbstowcs_s_l(size_t * _PtNumOfCharConverted, __wchar_t * _DstBuf, size_t _SizeInWords, const char * _SrcBuf, size_t _MaxCount, _locale_t _Locale); 
#line 943
extern "C++" {template < size_t _Size > inline errno_t __cdecl _mbstowcs_s_l ( size_t * _PtNumOfCharConverted, wchar_t ( & _Dest ) [ _Size ], char const * _Source, size_t _MaxCount, _locale_t _Locale ) throw ( ) { return _mbstowcs_s_l ( _PtNumOfCharConverted, _Dest, _Size, _Source, _MaxCount, _Locale ); }}
#line 952 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.16299.0\\ucrt\\stdlib.h"
__declspec(dllimport) size_t __cdecl _mbstowcs_l(__wchar_t * _Dest, const char * _Source, size_t _MaxCount, _locale_t _Locale); 
#line 965 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.16299.0\\ucrt\\stdlib.h"
__declspec(dllimport) int __cdecl wctomb(char * _MbCh, __wchar_t _WCh); 
#line 971
__declspec(dllimport) int __cdecl _wctomb_l(char * _MbCh, __wchar_t _WCh, _locale_t _Locale); 
#line 980
__declspec(dllimport) errno_t __cdecl wctomb_s(int * _SizeConverted, char * _MbCh, rsize_t _SizeInBytes, __wchar_t _WCh); 
#line 990 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.16299.0\\ucrt\\stdlib.h"
__declspec(dllimport) errno_t __cdecl _wctomb_s_l(int * _SizeConverted, char * _MbCh, size_t _SizeInBytes, __wchar_t _WCh, _locale_t _Locale); 
#line 998
__declspec(dllimport) errno_t __cdecl wcstombs_s(size_t * _PtNumOfCharConverted, char * _Dst, size_t _DstSizeInBytes, const __wchar_t * _Src, size_t _MaxCountInBytes); 
#line 1006
extern "C++" {template < size_t _Size > inline errno_t __cdecl wcstombs_s ( size_t * _PtNumOfCharConverted, char ( & _Dest ) [ _Size ], wchar_t const * _Source, size_t _MaxCount ) throw ( ) { return wcstombs_s ( _PtNumOfCharConverted, _Dest, _Size, _Source, _MaxCount ); }}
#line 1014 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.16299.0\\ucrt\\stdlib.h"
__declspec(dllimport) size_t __cdecl wcstombs(char * _Dest, const __wchar_t * _Source, size_t _MaxCount); 
#line 1022 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.16299.0\\ucrt\\stdlib.h"
__declspec(dllimport) errno_t __cdecl _wcstombs_s_l(size_t * _PtNumOfCharConverted, char * _Dst, size_t _DstSizeInBytes, const __wchar_t * _Src, size_t _MaxCountInBytes, _locale_t _Locale); 
#line 1031
extern "C++" {template < size_t _Size > inline errno_t __cdecl _wcstombs_s_l ( size_t * _PtNumOfCharConverted, char ( & _Dest ) [ _Size ], wchar_t const * _Source, size_t _MaxCount, _locale_t _Locale ) throw ( ) { return _wcstombs_s_l ( _PtNumOfCharConverted, _Dest, _Size, _Source, _MaxCount, _Locale ); }}
#line 1040 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.16299.0\\ucrt\\stdlib.h"
__declspec(dllimport) size_t __cdecl _wcstombs_l(char * _Dest, const __wchar_t * _Source, size_t _MaxCount, _locale_t _Locale); 
#line 1070 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.16299.0\\ucrt\\stdlib.h"
__declspec(dllimport) __declspec(allocator) char *__cdecl _fullpath(char * _Buffer, const char * _Path, size_t _BufferCount); 
#line 1079
__declspec(dllimport) errno_t __cdecl _makepath_s(char * _Buffer, size_t _BufferCount, const char * _Drive, const char * _Dir, const char * _Filename, const char * _Ext); 
#line 1088
extern "C++" {template < size_t _Size > inline errno_t __cdecl _makepath_s ( char ( & _Buffer ) [ _Size ], char const * _Drive, char const * _Dir, char const * _Filename, char const * _Ext ) throw ( ) { return _makepath_s ( _Buffer, _Size, _Drive, _Dir, _Filename, _Ext ); }}
#line 1097 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.16299.0\\ucrt\\stdlib.h"
#pragma warning(push)
#pragma warning(disable: 28719)
#pragma warning(disable: 28726)
__declspec(dllimport) void __cdecl _makepath(char * _Buffer, const char * _Drive, const char * _Dir, const char * _Filename, const char * _Ext); 
#line 1108 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.16299.0\\ucrt\\stdlib.h"
#pragma warning(pop)
#line 1111
__declspec(dllimport) void __cdecl _splitpath(const char * _FullPath, char * _Drive, char * _Dir, char * _Filename, char * _Ext); 
#line 1120
__declspec(dllimport) errno_t __cdecl _splitpath_s(const char * _FullPath, char * _Drive, size_t _DriveCount, char * _Dir, size_t _DirCount, char * _Filename, size_t _FilenameCount, char * _Ext, size_t _ExtCount); 
#line 1132
extern "C++" {template < size_t _DriveSize, size_t _DirSize, size_t _NameSize, size_t _ExtSize > inline errno_t __cdecl _splitpath_s ( char const * _Dest, char ( & _Drive ) [ _DriveSize ], char ( & _Dir ) [ _DirSize ], char ( & _Name ) [ _NameSize ], char ( & _Ext ) [ _ExtSize ] ) throw ( ) { return _splitpath_s ( _Dest, _Drive, _DriveSize, _Dir, _DirSize, _Name, _NameSize, _Ext, _ExtSize ); }}
#line 1147
__declspec(dllimport) errno_t __cdecl getenv_s(size_t * _RequiredCount, char * _Buffer, rsize_t _BufferCount, const char * _VarName); 
#line 1159 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.16299.0\\ucrt\\stdlib.h"
__declspec(dllimport) int *__cdecl __p___argc(); 
#line 1160
__declspec(dllimport) char ***__cdecl __p___argv(); 
#line 1161
__declspec(dllimport) __wchar_t ***__cdecl __p___wargv(); 
#line 1173 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.16299.0\\ucrt\\stdlib.h"
__declspec(dllimport) char ***__cdecl __p__environ(); 
#line 1174
__declspec(dllimport) __wchar_t ***__cdecl __p__wenviron(); 
#line 1199 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.16299.0\\ucrt\\stdlib.h"
__declspec(dllimport) char *__cdecl getenv(const char * _VarName); 
#line 1203
extern "C++" {template < size_t _Size > inline errno_t __cdecl getenv_s ( size_t * _RequiredCount, char ( & _Buffer ) [ _Size ], char const * _VarName ) throw ( ) { return getenv_s ( _RequiredCount, _Buffer, _Size, _VarName ); }}
#line 1216 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.16299.0\\ucrt\\stdlib.h"
__declspec(dllimport) errno_t __cdecl _dupenv_s(char ** _Buffer, size_t * _BufferCount, const char * _VarName); 
#line 1226 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.16299.0\\ucrt\\stdlib.h"
__declspec(dllimport) int __cdecl system(const char * _Command); 
#line 1232
#pragma warning (push)
#pragma warning (disable:6540)
#line 1236
__declspec(dllimport) int __cdecl _putenv(const char * _EnvString); 
#line 1241
__declspec(dllimport) errno_t __cdecl _putenv_s(const char * _Name, const char * _Value); 
#line 1246
#pragma warning (pop)
#line 1248
__declspec(dllimport) errno_t __cdecl _searchenv_s(const char * _Filename, const char * _VarName, char * _Buffer, size_t _BufferCount); 
#line 1255
extern "C++" {template < size_t _Size > inline errno_t __cdecl _searchenv_s ( char const * _Filename, char const * _VarName, char ( & _Buffer ) [ _Size ] ) throw ( ) { return _searchenv_s ( _Filename, _VarName, _Buffer, _Size ); }}
#line 1262 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.16299.0\\ucrt\\stdlib.h"
__declspec(dllimport) void __cdecl _searchenv(const char * _Filename, const char * _VarName, char * _Buffer); 
#line 1270 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.16299.0\\ucrt\\stdlib.h"
__declspec(deprecated("This function or variable has been superceded by newer library or operating system functionality. Consider using SetErrorMode in" "stead. See online help for details.")) 
#line 1271
__declspec(dllimport) void __cdecl _seterrormode(int _Mode); 
#line 1275
__declspec(deprecated("This function or variable has been superceded by newer library or operating system functionality. Consider using Beep instead. S" "ee online help for details.")) 
#line 1276
__declspec(dllimport) void __cdecl _beep(unsigned _Frequency, unsigned _Duration); 
#line 1281
__declspec(deprecated("This function or variable has been superceded by newer library or operating system functionality. Consider using Sleep instead. " "See online help for details.")) 
#line 1282
__declspec(dllimport) void __cdecl _sleep(unsigned long _Duration); 
#line 1307 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.16299.0\\ucrt\\stdlib.h"
#pragma warning(push)
#pragma warning(disable: 4141)
#line 1311
__declspec(dllimport) char *__cdecl ecvt(double _Value, int _DigitCount, int * _PtDec, int * _PtSign); 
#line 1319
__declspec(dllimport) char *__cdecl fcvt(double _Value, int _FractionalDigitCount, int * _PtDec, int * _PtSign); 
#line 1327
__declspec(dllimport) char *__cdecl gcvt(double _Value, int _DigitCount, char * _DstBuf); 
#line 1334
__declspec(dllimport) char *__cdecl itoa(int _Value, char * _Buffer, int _Radix); 
#line 1341
__declspec(dllimport) char *__cdecl ltoa(long _Value, char * _Buffer, int _Radix); 
#line 1349
__declspec(dllimport) void __cdecl swab(char * _Buf1, char * _Buf2, int _SizeInBytes); 
#line 1356
__declspec(dllimport) char *__cdecl ultoa(unsigned long _Value, char * _Buffer, int _Radix); 
#line 1367
__declspec(dllimport) int __cdecl putenv(const char * _EnvString); 
#line 1373 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.16299.0\\ucrt\\stdlib.h"
#pragma warning(pop)
#line 1375
_onexit_t __cdecl onexit(_onexit_t _Func); 
#line 1381 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.16299.0\\ucrt\\stdlib.h"
}
#line 253 "C:\\Program Files (x86)\\Microsoft Visual Studio 14.0\\VC\\include\\yvals.h"
#pragma detect_mismatch("_MSC_VER", "1900")
#line 257 "C:\\Program Files (x86)\\Microsoft Visual Studio 14.0\\VC\\include\\yvals.h"
#pragma detect_mismatch("_ITERATOR_DEBUG_LEVEL", "2")
#line 268 "C:\\Program Files (x86)\\Microsoft Visual Studio 14.0\\VC\\include\\yvals.h"
#pragma detect_mismatch("RuntimeLibrary", "MDd_DynamicDebug")
#line 57 "C:\\Program Files (x86)\\Microsoft Visual Studio 14.0\\VC\\include\\use_ansi.h"
#pragma comment(lib, "msvcprtd")
#line 1381 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.16299.0\\ucrt\\stdlib.h"
__pragma( pack ( pop )) 
#line 10 "C:\\Program Files (x86)\\Microsoft Visual Studio 14.0\\VC\\include\\yvals.h"
#pragma pack ( push, 8 )
#line 592 "C:\\Program Files (x86)\\Microsoft Visual Studio 14.0\\VC\\include\\yvals.h"
typedef __int64 _Longlong; 
#line 593
typedef unsigned __int64 _ULonglong; 
#line 611
namespace std { 
#line 612
enum _Uninitialized { 
#line 614
_Noinit
#line 615
}; 
#line 619
#pragma warning(push)
#pragma warning(disable:4412)
class __declspec(dllimport) _Lockit { 
#line 644 "C:\\Program Files (x86)\\Microsoft Visual Studio 14.0\\VC\\include\\yvals.h"
public: __thiscall _Lockit(); 
#line 645
explicit __thiscall _Lockit(int); 
#line 646
__thiscall ~_Lockit() noexcept; 
#line 649 "C:\\Program Files (x86)\\Microsoft Visual Studio 14.0\\VC\\include\\yvals.h"
static void __cdecl _Lockit_ctor(int); 
#line 650
static void __cdecl _Lockit_dtor(int); 
#line 653
private: static void __cdecl _Lockit_ctor(_Lockit *); 
#line 654
static void __cdecl _Lockit_ctor(_Lockit *, int); 
#line 655
static void __cdecl _Lockit_dtor(_Lockit *); 
#line 658
public: _Lockit(const _Lockit &) = delete;
#line 659
_Lockit &operator=(const _Lockit &) = delete;
#line 662
private: int _Locktype; 
#line 677 "C:\\Program Files (x86)\\Microsoft Visual Studio 14.0\\VC\\include\\yvals.h"
}; 
#line 764 "C:\\Program Files (x86)\\Microsoft Visual Studio 14.0\\VC\\include\\yvals.h"
class __declspec(dllimport) _Init_locks { 
#line 780 "C:\\Program Files (x86)\\Microsoft Visual Studio 14.0\\VC\\include\\yvals.h"
public: __thiscall _Init_locks(); 
#line 781
__thiscall ~_Init_locks() noexcept; 
#line 785 "C:\\Program Files (x86)\\Microsoft Visual Studio 14.0\\VC\\include\\yvals.h"
private: static void __cdecl _Init_locks_ctor(_Init_locks *); 
#line 786
static void __cdecl _Init_locks_dtor(_Init_locks *); 
#line 797 "C:\\Program Files (x86)\\Microsoft Visual Studio 14.0\\VC\\include\\yvals.h"
}; 
#line 799
#pragma warning(pop)
}
#line 809 "C:\\Program Files (x86)\\Microsoft Visual Studio 14.0\\VC\\include\\yvals.h"
__declspec(dllimport) void __cdecl _Atexit(void (__cdecl *)(void)); 
#line 811
typedef unsigned long _Uint32t; 
#line 817
#pragma pack ( pop )
#line 17 "C:\\Program Files (x86)\\Microsoft Visual Studio 14.0\\VC\\include\\cmath"
inline double abs(double _Xx) noexcept 
#line 18
{ 
#line 19
return ::fabs(_Xx); 
#line 20
} 
#line 22
inline double pow(double _Xx, int _Yx) noexcept 
#line 23
{ 
#line 24
if (_Yx == 2) { 
#line 25
return _Xx * _Xx; }  
#line 27
return ::pow(_Xx, static_cast< double>(_Yx)); 
#line 28
} 
#line 30
inline float abs(float _Xx) noexcept 
#line 31
{ 
#line 32
return ::fabsf(_Xx); 
#line 33
} 
#line 35
inline float acos(float _Xx) noexcept 
#line 36
{ 
#line 37
return ::acosf(_Xx); 
#line 38
} 
#line 40
inline float acosh(float _Xx) noexcept 
#line 41
{ 
#line 42
return ::acoshf(_Xx); 
#line 43
} 
#line 45
inline float asin(float _Xx) noexcept 
#line 46
{ 
#line 47
return ::asinf(_Xx); 
#line 48
} 
#line 50
inline float asinh(float _Xx) noexcept 
#line 51
{ 
#line 52
return ::asinhf(_Xx); 
#line 53
} 
#line 55
inline float atan(float _Xx) noexcept 
#line 56
{ 
#line 57
return ::atanf(_Xx); 
#line 58
} 
#line 60
inline float atanh(float _Xx) noexcept 
#line 61
{ 
#line 62
return ::atanhf(_Xx); 
#line 63
} 
#line 65
inline float atan2(float _Yx, float _Xx) noexcept 
#line 66
{ 
#line 67
return ::atan2f(_Yx, _Xx); 
#line 68
} 
#line 70
inline float cbrt(float _Xx) noexcept 
#line 71
{ 
#line 72
return ::cbrtf(_Xx); 
#line 73
} 
#line 75
inline float ceil(float _Xx) noexcept 
#line 76
{ 
#line 77
return ::ceilf(_Xx); 
#line 78
} 
#line 80
inline float copysign(float _Number, float 
#line 81
_Sign) noexcept 
#line 82
{ 
#line 83
return ::copysignf(_Number, _Sign); 
#line 84
} 
#line 86
inline float cos(float _Xx) noexcept 
#line 87
{ 
#line 88
return ::cosf(_Xx); 
#line 89
} 
#line 91
inline float cosh(float _Xx) noexcept 
#line 92
{ 
#line 93
return ::coshf(_Xx); 
#line 94
} 
#line 96
inline float erf(float _Xx) noexcept 
#line 97
{ 
#line 98
return ::erff(_Xx); 
#line 99
} 
#line 101
inline float erfc(float _Xx) noexcept 
#line 102
{ 
#line 103
return ::erfcf(_Xx); 
#line 104
} 
#line 106
inline float exp(float _Xx) noexcept 
#line 107
{ 
#line 108
return ::expf(_Xx); 
#line 109
} 
#line 111
inline float exp2(float _Xx) noexcept 
#line 112
{ 
#line 113
return ::exp2f(_Xx); 
#line 114
} 
#line 116
inline float expm1(float _Xx) noexcept 
#line 117
{ 
#line 118
return ::expm1f(_Xx); 
#line 119
} 
#line 121
inline float fabs(float _Xx) noexcept 
#line 122
{ 
#line 123
return ::fabsf(_Xx); 
#line 124
} 
#line 126
inline float fdim(float _Xx, float _Yx) noexcept 
#line 127
{ 
#line 128
return ::fdimf(_Xx, _Yx); 
#line 129
} 
#line 131
inline float floor(float _Xx) noexcept 
#line 132
{ 
#line 133
return ::floorf(_Xx); 
#line 134
} 
#line 136
inline float fma(float _Xx, float _Yx, float 
#line 137
_Zx) noexcept 
#line 138
{ 
#line 139
return ::fmaf(_Xx, _Yx, _Zx); 
#line 140
} 
#line 142
inline float fmax(float _Xx, float _Yx) noexcept 
#line 143
{ 
#line 144
return ::fmaxf(_Xx, _Yx); 
#line 145
} 
#line 147
inline float fmin(float _Xx, float _Yx) noexcept 
#line 148
{ 
#line 149
return ::fminf(_Xx, _Yx); 
#line 150
} 
#line 152
inline float fmod(float _Xx, float _Yx) noexcept 
#line 153
{ 
#line 154
return ::fmodf(_Xx, _Yx); 
#line 155
} 
#line 157
inline float frexp(float _Xx, int *_Yx) noexcept 
#line 158
{ 
#line 159
return ::frexpf(_Xx, _Yx); 
#line 160
} 
#line 162
inline float hypot(float _Xx, float _Yx) noexcept 
#line 163
{ 
#line 164
return ::hypotf(_Xx, _Yx); 
#line 165
} 
#line 167
inline int ilogb(float _Xx) noexcept 
#line 168
{ 
#line 169
return ::ilogbf(_Xx); 
#line 170
} 
#line 172
inline float ldexp(float _Xx, int _Yx) noexcept 
#line 173
{ 
#line 174
return ::ldexpf(_Xx, _Yx); 
#line 175
} 
#line 177
inline float lgamma(float _Xx) noexcept 
#line 178
{ 
#line 179
return ::lgammaf(_Xx); 
#line 180
} 
#line 182
inline __int64 llrint(float _Xx) noexcept 
#line 183
{ 
#line 184
return ::llrintf(_Xx); 
#line 185
} 
#line 187
inline __int64 llround(float _Xx) noexcept 
#line 188
{ 
#line 189
return ::llroundf(_Xx); 
#line 190
} 
#line 192
inline float log(float _Xx) noexcept 
#line 193
{ 
#line 194
return ::logf(_Xx); 
#line 195
} 
#line 197
inline float log10(float _Xx) noexcept 
#line 198
{ 
#line 199
return ::log10f(_Xx); 
#line 200
} 
#line 202
inline float log1p(float _Xx) noexcept 
#line 203
{ 
#line 204
return ::log1pf(_Xx); 
#line 205
} 
#line 207
inline float log2(float _Xx) noexcept 
#line 208
{ 
#line 209
return ::log2f(_Xx); 
#line 210
} 
#line 212
inline float logb(float _Xx) noexcept 
#line 213
{ 
#line 214
return ::logbf(_Xx); 
#line 215
} 
#line 217
inline long lrint(float _Xx) noexcept 
#line 218
{ 
#line 219
return ::lrintf(_Xx); 
#line 220
} 
#line 222
inline long lround(float _Xx) noexcept 
#line 223
{ 
#line 224
return ::lroundf(_Xx); 
#line 225
} 
#line 227
inline float modf(float _Xx, float *_Yx) noexcept 
#line 228
{ 
#line 229
return ::modff(_Xx, _Yx); 
#line 230
} 
#line 232
inline float nearbyint(float _Xx) noexcept 
#line 233
{ 
#line 234
return ::nearbyintf(_Xx); 
#line 235
} 
#line 237
inline float nextafter(float _Xx, float _Yx) noexcept 
#line 238
{ 
#line 239
return ::nextafterf(_Xx, _Yx); 
#line 240
} 
#line 242
inline float nexttoward(float _Xx, long double 
#line 243
_Yx) noexcept 
#line 244
{ 
#line 245
return ::nexttowardf(_Xx, _Yx); 
#line 246
} 
#line 248
inline float pow(float _Xx, float 
#line 249
_Yx) noexcept 
#line 250
{ 
#line 251
return ::powf(_Xx, _Yx); 
#line 252
} 
#line 254
inline float pow(float _Xx, int _Yx) noexcept 
#line 255
{ 
#line 256
if (_Yx == 2) { 
#line 257
return _Xx * _Xx; }  
#line 259
return ::powf(_Xx, static_cast< float>(_Yx)); 
#line 260
} 
#line 262
inline float remainder(float _Xx, float _Yx) noexcept 
#line 263
{ 
#line 264
return ::remainderf(_Xx, _Yx); 
#line 265
} 
#line 267
inline float remquo(float _Xx, float _Yx, int *
#line 268
_Zx) noexcept 
#line 269
{ 
#line 270
return ::remquof(_Xx, _Yx, _Zx); 
#line 271
} 
#line 273
inline float rint(float _Xx) noexcept 
#line 274
{ 
#line 275
return ::rintf(_Xx); 
#line 276
} 
#line 278
inline float round(float _Xx) noexcept 
#line 279
{ 
#line 280
return ::roundf(_Xx); 
#line 281
} 
#line 283
inline float scalbln(float _Xx, long _Yx) noexcept 
#line 284
{ 
#line 285
return ::scalblnf(_Xx, _Yx); 
#line 286
} 
#line 288
inline float scalbn(float _Xx, int _Yx) noexcept 
#line 289
{ 
#line 290
return ::scalbnf(_Xx, _Yx); 
#line 291
} 
#line 293
inline float sin(float _Xx) noexcept 
#line 294
{ 
#line 295
return ::sinf(_Xx); 
#line 296
} 
#line 298
inline float sinh(float _Xx) noexcept 
#line 299
{ 
#line 300
return ::sinhf(_Xx); 
#line 301
} 
#line 303
inline float sqrt(float _Xx) noexcept 
#line 304
{ 
#line 305
return ::sqrtf(_Xx); 
#line 306
} 
#line 308
inline float tan(float _Xx) noexcept 
#line 309
{ 
#line 310
return ::tanf(_Xx); 
#line 311
} 
#line 313
inline float tanh(float _Xx) noexcept 
#line 314
{ 
#line 315
return ::tanhf(_Xx); 
#line 316
} 
#line 318
inline float tgamma(float _Xx) noexcept 
#line 319
{ 
#line 320
return ::tgammaf(_Xx); 
#line 321
} 
#line 323
inline float trunc(float _Xx) noexcept 
#line 324
{ 
#line 325
return ::truncf(_Xx); 
#line 326
} 
#line 328
inline long double abs(long double _Xx) noexcept 
#line 329
{ 
#line 330
return ::fabsl(_Xx); 
#line 331
} 
#line 333
inline long double acos(long double _Xx) noexcept 
#line 334
{ 
#line 335
return ::acosl(_Xx); 
#line 336
} 
#line 338
inline long double acosh(long double _Xx) noexcept 
#line 339
{ 
#line 340
return ::acoshl(_Xx); 
#line 341
} 
#line 343
inline long double asin(long double _Xx) noexcept 
#line 344
{ 
#line 345
return ::asinl(_Xx); 
#line 346
} 
#line 348
inline long double asinh(long double _Xx) noexcept 
#line 349
{ 
#line 350
return ::asinhl(_Xx); 
#line 351
} 
#line 353
inline long double atan(long double _Xx) noexcept 
#line 354
{ 
#line 355
return ::atanl(_Xx); 
#line 356
} 
#line 358
inline long double atanh(long double _Xx) noexcept 
#line 359
{ 
#line 360
return ::atanhl(_Xx); 
#line 361
} 
#line 363
inline long double atan2(long double _Yx, long double 
#line 364
_Xx) noexcept 
#line 365
{ 
#line 366
return ::atan2l(_Yx, _Xx); 
#line 367
} 
#line 369
inline long double cbrt(long double _Xx) noexcept 
#line 370
{ 
#line 371
return ::cbrtl(_Xx); 
#line 372
} 
#line 374
inline long double ceil(long double _Xx) noexcept 
#line 375
{ 
#line 376
return ::ceill(_Xx); 
#line 377
} 
#line 379
inline long double copysign(long double _Number, long double 
#line 380
_Sign) noexcept 
#line 381
{ 
#line 382
return ::copysignl(_Number, _Sign); 
#line 383
} 
#line 385
inline long double cos(long double _Xx) noexcept 
#line 386
{ 
#line 387
return ::cosl(_Xx); 
#line 388
} 
#line 390
inline long double cosh(long double _Xx) noexcept 
#line 391
{ 
#line 392
return ::coshl(_Xx); 
#line 393
} 
#line 395
inline long double erf(long double _Xx) noexcept 
#line 396
{ 
#line 397
return ::erfl(_Xx); 
#line 398
} 
#line 400
inline long double erfc(long double _Xx) noexcept 
#line 401
{ 
#line 402
return ::erfcl(_Xx); 
#line 403
} 
#line 405
inline long double exp(long double _Xx) noexcept 
#line 406
{ 
#line 407
return ::expl(_Xx); 
#line 408
} 
#line 410
inline long double exp2(long double _Xx) noexcept 
#line 411
{ 
#line 412
return ::exp2l(_Xx); 
#line 413
} 
#line 415
inline long double expm1(long double _Xx) noexcept 
#line 416
{ 
#line 417
return ::expm1l(_Xx); 
#line 418
} 
#line 420
inline long double fabs(long double _Xx) noexcept 
#line 421
{ 
#line 422
return ::fabsl(_Xx); 
#line 423
} 
#line 425
inline long double fdim(long double _Xx, long double 
#line 426
_Yx) noexcept 
#line 427
{ 
#line 428
return ::fdiml(_Xx, _Yx); 
#line 429
} 
#line 431
inline long double floor(long double _Xx) noexcept 
#line 432
{ 
#line 433
return ::floorl(_Xx); 
#line 434
} 
#line 436
inline long double fma(long double _Xx, long double 
#line 437
_Yx, long double _Zx) noexcept 
#line 438
{ 
#line 439
return ::fmal(_Xx, _Yx, _Zx); 
#line 440
} 
#line 442
inline long double fmax(long double _Xx, long double 
#line 443
_Yx) noexcept 
#line 444
{ 
#line 445
return ::fmaxl(_Xx, _Yx); 
#line 446
} 
#line 448
inline long double fmin(long double _Xx, long double 
#line 449
_Yx) noexcept 
#line 450
{ 
#line 451
return ::fminl(_Xx, _Yx); 
#line 452
} 
#line 454
inline long double fmod(long double _Xx, long double 
#line 455
_Yx) noexcept 
#line 456
{ 
#line 457
return ::fmodl(_Xx, _Yx); 
#line 458
} 
#line 460
inline long double frexp(long double _Xx, int *
#line 461
_Yx) noexcept 
#line 462
{ 
#line 463
return ::frexpl(_Xx, _Yx); 
#line 464
} 
#line 466
inline long double hypot(long double _Xx, long double 
#line 467
_Yx) noexcept 
#line 468
{ 
#line 469
return ::hypotl(_Xx, _Yx); 
#line 470
} 
#line 472
inline int ilogb(long double _Xx) noexcept 
#line 473
{ 
#line 474
return ::ilogbl(_Xx); 
#line 475
} 
#line 477
inline long double ldexp(long double _Xx, int 
#line 478
_Yx) noexcept 
#line 479
{ 
#line 480
return ::ldexpl(_Xx, _Yx); 
#line 481
} 
#line 483
inline long double lgamma(long double _Xx) noexcept 
#line 484
{ 
#line 485
return ::lgammal(_Xx); 
#line 486
} 
#line 488
inline __int64 llrint(long double _Xx) noexcept 
#line 489
{ 
#line 490
return ::llrintl(_Xx); 
#line 491
} 
#line 493
inline __int64 llround(long double _Xx) noexcept 
#line 494
{ 
#line 495
return ::llroundl(_Xx); 
#line 496
} 
#line 498
inline long double log(long double _Xx) noexcept 
#line 499
{ 
#line 500
return ::logl(_Xx); 
#line 501
} 
#line 503
inline long double log10(long double _Xx) noexcept 
#line 504
{ 
#line 505
return ::log10l(_Xx); 
#line 506
} 
#line 508
inline long double log1p(long double _Xx) noexcept 
#line 509
{ 
#line 510
return ::log1pl(_Xx); 
#line 511
} 
#line 513
inline long double log2(long double _Xx) noexcept 
#line 514
{ 
#line 515
return ::log2l(_Xx); 
#line 516
} 
#line 518
inline long double logb(long double _Xx) noexcept 
#line 519
{ 
#line 520
return ::logbl(_Xx); 
#line 521
} 
#line 523
inline long lrint(long double _Xx) noexcept 
#line 524
{ 
#line 525
return ::lrintl(_Xx); 
#line 526
} 
#line 528
inline long lround(long double _Xx) noexcept 
#line 529
{ 
#line 530
return ::lroundl(_Xx); 
#line 531
} 
#line 533
inline long double modf(long double _Xx, long double *
#line 534
_Yx) noexcept 
#line 535
{ 
#line 536
return ::modfl(_Xx, _Yx); 
#line 537
} 
#line 539
inline long double nearbyint(long double _Xx) noexcept 
#line 540
{ 
#line 541
return ::nearbyintl(_Xx); 
#line 542
} 
#line 544
inline long double nextafter(long double _Xx, long double 
#line 545
_Yx) noexcept 
#line 546
{ 
#line 547
return ::nextafterl(_Xx, _Yx); 
#line 548
} 
#line 550
inline long double nexttoward(long double _Xx, long double 
#line 551
_Yx) noexcept 
#line 552
{ 
#line 553
return ::nexttowardl(_Xx, _Yx); 
#line 554
} 
#line 556
inline long double pow(long double _Xx, long double 
#line 557
_Yx) noexcept 
#line 558
{ 
#line 559
return ::powl(_Xx, _Yx); 
#line 560
} 
#line 562
inline long double pow(long double _Xx, int 
#line 563
_Yx) noexcept 
#line 564
{ 
#line 565
if (_Yx == 2) { 
#line 566
return _Xx * _Xx; }  
#line 568
return ::powl(_Xx, static_cast< long double>(_Yx)); 
#line 569
} 
#line 571
inline long double remainder(long double _Xx, long double 
#line 572
_Yx) noexcept 
#line 573
{ 
#line 574
return ::remainderl(_Xx, _Yx); 
#line 575
} 
#line 577
inline long double remquo(long double _Xx, long double 
#line 578
_Yx, int *_Zx) noexcept 
#line 579
{ 
#line 580
return ::remquol(_Xx, _Yx, _Zx); 
#line 581
} 
#line 583
inline long double rint(long double _Xx) noexcept 
#line 584
{ 
#line 585
return ::rintl(_Xx); 
#line 586
} 
#line 588
inline long double round(long double _Xx) noexcept 
#line 589
{ 
#line 590
return ::roundl(_Xx); 
#line 591
} 
#line 593
inline long double scalbln(long double _Xx, long 
#line 594
_Yx) noexcept 
#line 595
{ 
#line 596
return ::scalblnl(_Xx, _Yx); 
#line 597
} 
#line 599
inline long double scalbn(long double _Xx, int 
#line 600
_Yx) noexcept 
#line 601
{ 
#line 602
return ::scalbnl(_Xx, _Yx); 
#line 603
} 
#line 605
inline long double sin(long double _Xx) noexcept 
#line 606
{ 
#line 607
return ::sinl(_Xx); 
#line 608
} 
#line 610
inline long double sinh(long double _Xx) noexcept 
#line 611
{ 
#line 612
return ::sinhl(_Xx); 
#line 613
} 
#line 615
inline long double sqrt(long double _Xx) noexcept 
#line 616
{ 
#line 617
return ::sqrtl(_Xx); 
#line 618
} 
#line 620
inline long double tan(long double _Xx) noexcept 
#line 621
{ 
#line 622
return ::tanl(_Xx); 
#line 623
} 
#line 625
inline long double tanh(long double _Xx) noexcept 
#line 626
{ 
#line 627
return ::tanhl(_Xx); 
#line 628
} 
#line 630
inline long double tgamma(long double _Xx) noexcept 
#line 631
{ 
#line 632
return ::tgammal(_Xx); 
#line 633
} 
#line 635
inline long double trunc(long double _Xx) noexcept 
#line 636
{ 
#line 637
return ::truncl(_Xx); 
#line 638
} 
#line 17 "C:\\Program Files (x86)\\Microsoft Visual Studio 14.0\\VC\\include\\cstdlib"
namespace std { 
#line 18
using ::size_t;using ::div_t;using ::ldiv_t;
#line 19
using ::abort;using ::abs;using ::atexit;
#line 20
using ::atof;using ::atoi;using ::atol;
#line 21
using ::bsearch;using ::calloc;using ::div;
#line 22
using ::exit;using ::free;
#line 23
using ::labs;using ::ldiv;using ::malloc;
#line 24
using ::mblen;using ::mbstowcs;using ::mbtowc;
#line 25
using ::qsort;using ::rand;using ::realloc;
#line 26
using ::srand;using ::strtod;using ::strtol;
#line 27
using ::strtoul;
#line 28
using ::wcstombs;using ::wctomb;
#line 30
using ::lldiv_t;
#line 33
using ::getenv;
#line 34
using ::system;
#line 37 "C:\\Program Files (x86)\\Microsoft Visual Studio 14.0\\VC\\include\\cstdlib"
using ::atoll;using ::llabs;using ::lldiv;
#line 38
using ::strtof;using ::strtold;
#line 39
using ::strtoll;using ::strtoull;
#line 41
using ::_Exit;using ::at_quick_exit;using ::quick_exit;
#line 42
}
#line 9 "C:\\Program Files (x86)\\Microsoft Visual Studio 14.0\\VC\\include\\xtr1common"
#pragma warning(push,3)
#line 8
#pragma pack ( push, 8 )
#line 13
namespace std { 
#line 15
struct _Nil { 
#line 17
}; 
#line 20
template < class _Ty,
 _Ty _Val >
 struct integral_constant
 {
 static constexpr _Ty value = _Val;

 typedef _Ty value_type;
 typedef integral_constant < _Ty, _Val > type;

 constexpr operator value_type ( ) const noexcept
  {
  return ( value );
  }

 constexpr value_type operator ( ) ( ) const noexcept
  {
  return ( value );
  }
 };
#line 40
typedef integral_constant< bool, true>  true_type; 
#line 41
typedef integral_constant< bool, false>  false_type; 
#line 44
template< bool _Val> using bool_constant = integral_constant< bool, _Val> ; 
#line 48
template< bool _Val> 
#line 49
struct _Cat_base : public integral_constant< bool, _Val>  { 
#line 52
}; 
#line 55
template< bool _Test, class 
#line 56
_Ty = void> 
#line 57
struct enable_if { 
#line 59
}; 
#line 61
template< class _Ty> 
#line 62
struct enable_if< true, _Ty>  { 
#line 64
typedef _Ty type; 
#line 65
}; 
#line 68
template< bool _Test, class 
#line 69
_Ty1, class 
#line 70
_Ty2> 
#line 71
struct conditional { 
#line 73
typedef _Ty2 type; 
#line 74
}; 
#line 76
template< class _Ty1, class 
#line 77
_Ty2> 
#line 78
struct conditional< true, _Ty1, _Ty2>  { 
#line 80
typedef _Ty1 type; 
#line 81
}; 
#line 84
template< class _Ty1, class 
#line 85
_Ty2> 
#line 86
struct is_same : public false_type { 
#line 89
}; 
#line 91
template< class _Ty1> 
#line 92
struct is_same< _Ty1, _Ty1>  : public true_type { 
#line 95
}; 
#line 98
template< class _Ty, class 
#line 99
_Uty> constexpr bool 
#line 100
is_same_v = (is_same< _Ty, _Uty> ::value); 
#line 104 "C:\\Program Files (x86)\\Microsoft Visual Studio 14.0\\VC\\include\\xtr1common"
template< class _Ty> 
#line 105
struct remove_const { 
#line 107
typedef _Ty type; 
#line 108
}; 
#line 110
template< class _Ty> 
#line 111
struct remove_const< const _Ty>  { 
#line 113
typedef _Ty type; 
#line 114
}; 
#line 117
template< class _Ty> 
#line 118
struct remove_volatile { 
#line 120
typedef _Ty type; 
#line 121
}; 
#line 123
template< class _Ty> 
#line 124
struct remove_volatile< volatile _Ty>  { 
#line 126
typedef _Ty type; 
#line 127
}; 
#line 130
template< class _Ty> 
#line 131
struct remove_cv { 
#line 134
typedef typename remove_const< typename remove_volatile< _Ty> ::type> ::type type; 
#line 135
}; 
#line 138
template< class _Ty> 
#line 139
struct _Is_integral : public false_type { 
#line 142
}; 
#line 145
template<> struct _Is_integral< bool>  : public true_type { 
#line 148
}; 
#line 151
template<> struct _Is_integral< char>  : public true_type { 
#line 154
}; 
#line 157
template<> struct _Is_integral< unsigned char>  : public true_type { 
#line 160
}; 
#line 163
template<> struct _Is_integral< signed char>  : public true_type { 
#line 166
}; 
#line 170
template<> struct _Is_integral< __wchar_t>  : public true_type { 
#line 173
}; 
#line 177 "C:\\Program Files (x86)\\Microsoft Visual Studio 14.0\\VC\\include\\xtr1common"
template<> struct _Is_integral< unsigned short>  : public true_type { 
#line 180
}; 
#line 183
template<> struct _Is_integral< signed short>  : public true_type { 
#line 186
}; 
#line 189
template<> struct _Is_integral< unsigned>  : public true_type { 
#line 192
}; 
#line 195
template<> struct _Is_integral< signed int>  : public true_type { 
#line 198
}; 
#line 201
template<> struct _Is_integral< unsigned long>  : public true_type { 
#line 204
}; 
#line 207
template<> struct _Is_integral< signed long>  : public true_type { 
#line 210
}; 
#line 213
template<> struct _Is_integral< char16_t>  : public true_type { 
#line 216
}; 
#line 219
template<> struct _Is_integral< char32_t>  : public true_type { 
#line 222
}; 
#line 225
template<> struct _Is_integral< __int64>  : public true_type { 
#line 228
}; 
#line 231
template<> struct _Is_integral< unsigned __int64>  : public true_type { 
#line 234
}; 
#line 237
template< class _Ty> 
#line 238
struct is_integral : public _Is_integral< typename remove_cv< _Ty> ::type>  { 
#line 241
}; 
#line 244
template< class _Ty> constexpr bool 
#line 245
is_integral_v = (is_integral< _Ty> ::value); 
#line 249 "C:\\Program Files (x86)\\Microsoft Visual Studio 14.0\\VC\\include\\xtr1common"
template< class _Ty> 
#line 250
struct _Is_floating_point : public false_type { 
#line 253
}; 
#line 256
template<> struct _Is_floating_point< float>  : public true_type { 
#line 259
}; 
#line 262
template<> struct _Is_floating_point< double>  : public true_type { 
#line 265
}; 
#line 268
template<> struct _Is_floating_point< long double>  : public true_type { 
#line 271
}; 
#line 274
template< class _Ty> 
#line 275
struct is_floating_point : public _Is_floating_point< typename remove_cv< _Ty> ::type>  { 
#line 278
}; 
#line 281
template< class _Ty> constexpr bool 
#line 282
is_floating_point_v = (is_floating_point< _Ty> ::value); 
#line 286 "C:\\Program Files (x86)\\Microsoft Visual Studio 14.0\\VC\\include\\xtr1common"
template< class _Ty> 
#line 287
struct is_arithmetic : public _Cat_base< is_integral< _Ty> ::value || is_floating_point< _Ty> ::value>  { 
#line 291
}; 
#line 294
template< class _Ty> constexpr bool 
#line 295
is_arithmetic_v = (is_arithmetic< _Ty> ::value); 
#line 299 "C:\\Program Files (x86)\\Microsoft Visual Studio 14.0\\VC\\include\\xtr1common"
template< class _Ty> 
#line 300
struct remove_reference { 
#line 302
typedef _Ty type; 
#line 303
}; 
#line 305
template< class _Ty> 
#line 306
struct remove_reference< _Ty &>  { 
#line 308
typedef _Ty type; 
#line 309
}; 
#line 311
template< class _Ty> 
#line 312
struct remove_reference< _Ty &&>  { 
#line 314
typedef _Ty type; 
#line 315
}; 
#line 318
struct _Wrap_int { 
#line 320
_Wrap_int(int) 
#line 321
{ 
#line 322
} 
#line 323
}; 
#line 325
template< class _Ty> 
#line 326
struct _Identity { 
#line 328
typedef _Ty type; 
#line 329
}; 
#line 344
}
#line 346
#pragma warning(pop)
#line 11 "C:\\Program Files (x86)\\Microsoft Visual Studio 14.0\\VC\\include\\xtgmath.h"
#pragma warning(push,3)
#line 347 "C:\\Program Files (x86)\\Microsoft Visual Studio 14.0\\VC\\include\\xtr1common"
#pragma pack ( pop )
#line 10 "C:\\Program Files (x86)\\Microsoft Visual Studio 14.0\\VC\\include\\xtgmath.h"
#pragma pack ( push, 8 )
#line 15
namespace std { 
#line 16
template< class _Ty> 
#line 17
struct _Promote_to_float { 
#line 20
typedef typename conditional< is_integral< _Ty> ::value, double, _Ty> ::type type; 
#line 21
}; 
#line 23
template< class _Ty1, class 
#line 24
_Ty2> 
#line 25
struct _Common_float_type { 
#line 27
typedef typename _Promote_to_float< _Ty1> ::type _Ty1f; 
#line 28
typedef typename _Promote_to_float< _Ty2> ::type _Ty2f; 
#line 33
typedef typename conditional< is_same< typename _Promote_to_float< _Ty1> ::type, long double> ::value || is_same< typename _Promote_to_float< _Ty2> ::type, long double> ::value, long double, typename conditional< is_same< typename _Promote_to_float< _Ty1> ::type, double> ::value || is_same< typename _Promote_to_float< _Ty2> ::type, double> ::value, double, float> ::type> ::type type; 
#line 34
}; 
#line 35
}
#line 76
template < class _Ty1,
 class _Ty2 > inline
 typename :: std :: enable_if < :: std :: is_arithmetic < _Ty1 > :: value
  && :: std :: is_arithmetic < _Ty2 > :: value,
  typename :: std :: _Common_float_type < _Ty1, _Ty2 > :: type > :: type
 pow ( const _Ty1 _Left, const _Ty2 _Right )
 {
 typedef typename :: std :: _Common_float_type < _Ty1, _Ty2 > :: type type;
 return ( :: pow ( type ( _Left ), type ( _Right ) ) );
 }
#line 88
extern "C" double __cdecl acos(double); template < class _Ty > inline typename :: std :: enable_if < :: std :: is_integral < _Ty > :: value, double > :: type acos ( _Ty _Left ) { return ( :: acos ( ( double ) _Left ) ); }
#line 89
extern "C" double __cdecl asin(double); template < class _Ty > inline typename :: std :: enable_if < :: std :: is_integral < _Ty > :: value, double > :: type asin ( _Ty _Left ) { return ( :: asin ( ( double ) _Left ) ); }
#line 90
extern "C" double __cdecl atan(double); template < class _Ty > inline typename :: std :: enable_if < :: std :: is_integral < _Ty > :: value, double > :: type atan ( _Ty _Left ) { return ( :: atan ( ( double ) _Left ) ); }
#line 91
extern "C" double __cdecl atan2(double, double); template < class _Ty1, class _Ty2 > inline typename :: std :: enable_if < :: std :: is_arithmetic < _Ty1 > :: value && :: std :: is_arithmetic < _Ty2 > :: value, typename :: std :: _Common_float_type < _Ty1, _Ty2 > :: type > :: type atan2 ( _Ty1 _Left, _Ty2 _Right ) { typedef typename :: std :: _Common_float_type < _Ty1, _Ty2 > :: type type; return ( :: atan2 ( ( type ) _Left, ( type ) _Right ) ); }
#line 92
extern "C" __declspec(dllimport) double __cdecl ceil(double); template < class _Ty > inline typename :: std :: enable_if < :: std :: is_integral < _Ty > :: value, double > :: type ceil ( _Ty _Left ) { return ( :: ceil ( ( double ) _Left ) ); }
#line 93
extern "C" double __cdecl cos(double); template < class _Ty > inline typename :: std :: enable_if < :: std :: is_integral < _Ty > :: value, double > :: type cos ( _Ty _Left ) { return ( :: cos ( ( double ) _Left ) ); }
#line 94
extern "C" double __cdecl cosh(double); template < class _Ty > inline typename :: std :: enable_if < :: std :: is_integral < _Ty > :: value, double > :: type cosh ( _Ty _Left ) { return ( :: cosh ( ( double ) _Left ) ); }
#line 95
extern "C" double __cdecl exp(double); template < class _Ty > inline typename :: std :: enable_if < :: std :: is_integral < _Ty > :: value, double > :: type exp ( _Ty _Left ) { return ( :: exp ( ( double ) _Left ) ); }
#line 97
extern "C" double __cdecl fabs(double); template < class _Ty > inline typename :: std :: enable_if < :: std :: is_integral < _Ty > :: value, double > :: type fabs ( _Ty _Left ) { return ( :: fabs ( ( double ) _Left ) ); }
#line 99
extern "C" __declspec(dllimport) double __cdecl floor(double); template < class _Ty > inline typename :: std :: enable_if < :: std :: is_integral < _Ty > :: value, double > :: type floor ( _Ty _Left ) { return ( :: floor ( ( double ) _Left ) ); }
#line 100
extern "C" double __cdecl fmod(double, double); template < class _Ty1, class _Ty2 > inline typename :: std :: enable_if < :: std :: is_arithmetic < _Ty1 > :: value && :: std :: is_arithmetic < _Ty2 > :: value, typename :: std :: _Common_float_type < _Ty1, _Ty2 > :: type > :: type fmod ( _Ty1 _Left, _Ty2 _Right ) { typedef typename :: std :: _Common_float_type < _Ty1, _Ty2 > :: type type; return ( :: fmod ( ( type ) _Left, ( type ) _Right ) ); }
#line 101
extern "C" __declspec(dllimport) double __cdecl frexp(double, int *); template < class _Ty > inline typename :: std :: enable_if < :: std :: is_integral < _Ty > :: value, double > :: type frexp ( _Ty _Left, int * _Arg2 ) { return ( :: frexp ( ( double ) _Left, _Arg2 ) ); }
#line 102
extern "C" __declspec(dllimport) double __cdecl ldexp(double, int); template < class _Ty > inline typename :: std :: enable_if < :: std :: is_integral < _Ty > :: value, double > :: type ldexp ( _Ty _Left, int _Arg2 ) { return ( :: ldexp ( ( double ) _Left, _Arg2 ) ); }
#line 103
extern "C" double __cdecl log(double); template < class _Ty > inline typename :: std :: enable_if < :: std :: is_integral < _Ty > :: value, double > :: type log ( _Ty _Left ) { return ( :: log ( ( double ) _Left ) ); }
#line 104
extern "C" double __cdecl log10(double); template < class _Ty > inline typename :: std :: enable_if < :: std :: is_integral < _Ty > :: value, double > :: type log10 ( _Ty _Left ) { return ( :: log10 ( ( double ) _Left ) ); }
#line 107
extern "C" double __cdecl sin(double); template < class _Ty > inline typename :: std :: enable_if < :: std :: is_integral < _Ty > :: value, double > :: type sin ( _Ty _Left ) { return ( :: sin ( ( double ) _Left ) ); }
#line 108
extern "C" double __cdecl sinh(double); template < class _Ty > inline typename :: std :: enable_if < :: std :: is_integral < _Ty > :: value, double > :: type sinh ( _Ty _Left ) { return ( :: sinh ( ( double ) _Left ) ); }
#line 109
extern "C" double __cdecl sqrt(double); template < class _Ty > inline typename :: std :: enable_if < :: std :: is_integral < _Ty > :: value, double > :: type sqrt ( _Ty _Left ) { return ( :: sqrt ( ( double ) _Left ) ); }
#line 110
extern "C" double __cdecl tan(double); template < class _Ty > inline typename :: std :: enable_if < :: std :: is_integral < _Ty > :: value, double > :: type tan ( _Ty _Left ) { return ( :: tan ( ( double ) _Left ) ); }
#line 111
extern "C" double __cdecl tanh(double); template < class _Ty > inline typename :: std :: enable_if < :: std :: is_integral < _Ty > :: value, double > :: type tanh ( _Ty _Left ) { return ( :: tanh ( ( double ) _Left ) ); }
#line 125
inline float _Fma(float _Left, float _Middle, float _Right) 
#line 126
{ 
#line 127
return ::fmaf(_Left, _Middle, _Right); 
#line 128
} 
#line 130
inline double _Fma(double _Left, double _Middle, double _Right) 
#line 131
{ 
#line 132
return ::fma(_Left, _Middle, _Right); 
#line 133
} 
#line 135
inline long double _Fma(long double _Left, long double _Middle, long double 
#line 136
_Right) 
#line 137
{ 
#line 138
return ::fmal(_Left, _Middle, _Right); 
#line 139
} 
#line 141
template < class _Ty1,
 class _Ty2,
 class _Ty3 > inline
 typename :: std :: _Common_float_type < _Ty1,
  typename :: std :: _Common_float_type < _Ty2, _Ty3 > :: type > :: type
 fma ( _Ty1 _Left, _Ty2 _Middle, _Ty3 _Right )
 {
 typedef typename :: std :: _Common_float_type < _Ty1,
  typename :: std :: _Common_float_type < _Ty2, _Ty3 > :: type > :: type type;
 return ( _Fma ( ( type ) _Left, ( type ) _Middle, ( type ) _Right ) );
 }
#line 155
inline float _Remquo(float _Left, float _Right, int *_Pquo) 
#line 156
{ 
#line 157
return ::remquof(_Left, _Right, _Pquo); 
#line 158
} 
#line 160
inline double _Remquo(double _Left, double _Right, int *_Pquo) 
#line 161
{ 
#line 162
return ::remquo(_Left, _Right, _Pquo); 
#line 163
} 
#line 165
inline long double _Remquo(long double _Left, long double _Right, int *_Pquo) 
#line 166
{ 
#line 167
return ::remquol(_Left, _Right, _Pquo); 
#line 168
} 
#line 170
template < class _Ty1,
 class _Ty2 > inline
 typename :: std :: _Common_float_type < _Ty1, _Ty2 > :: type
 remquo ( _Ty1 _Left, _Ty2 _Right, int * _Pquo )
 {
 typedef typename :: std :: _Common_float_type < _Ty1, _Ty2 > :: type type;
 return ( _Remquo ( ( type ) _Left, ( type ) _Right, _Pquo ) );
 }
#line 179
extern "C" __declspec(dllimport) double __cdecl acosh(double); template < class _Ty > inline typename :: std :: enable_if < :: std :: is_integral < _Ty > :: value, double > :: type acosh ( _Ty _Left ) { return ( :: acosh ( ( double ) _Left ) ); }
#line 180
extern "C" __declspec(dllimport) double __cdecl asinh(double); template < class _Ty > inline typename :: std :: enable_if < :: std :: is_integral < _Ty > :: value, double > :: type asinh ( _Ty _Left ) { return ( :: asinh ( ( double ) _Left ) ); }
#line 181
extern "C" __declspec(dllimport) double __cdecl atanh(double); template < class _Ty > inline typename :: std :: enable_if < :: std :: is_integral < _Ty > :: value, double > :: type atanh ( _Ty _Left ) { return ( :: atanh ( ( double ) _Left ) ); }
#line 182
extern "C" __declspec(dllimport) double __cdecl cbrt(double); template < class _Ty > inline typename :: std :: enable_if < :: std :: is_integral < _Ty > :: value, double > :: type cbrt ( _Ty _Left ) { return ( :: cbrt ( ( double ) _Left ) ); }
#line 183
extern "C" __declspec(dllimport) double __cdecl copysign(double, double); template < class _Ty1, class _Ty2 > inline typename :: std :: enable_if < :: std :: is_arithmetic < _Ty1 > :: value && :: std :: is_arithmetic < _Ty2 > :: value, typename :: std :: _Common_float_type < _Ty1, _Ty2 > :: type > :: type copysign ( _Ty1 _Left, _Ty2 _Right ) { typedef typename :: std :: _Common_float_type < _Ty1, _Ty2 > :: type type; return ( :: copysign ( ( type ) _Left, ( type ) _Right ) ); }
#line 184
extern "C" __declspec(dllimport) double __cdecl erf(double); template < class _Ty > inline typename :: std :: enable_if < :: std :: is_integral < _Ty > :: value, double > :: type erf ( _Ty _Left ) { return ( :: erf ( ( double ) _Left ) ); }
#line 185
extern "C" __declspec(dllimport) double __cdecl erfc(double); template < class _Ty > inline typename :: std :: enable_if < :: std :: is_integral < _Ty > :: value, double > :: type erfc ( _Ty _Left ) { return ( :: erfc ( ( double ) _Left ) ); }
#line 186
extern "C" __declspec(dllimport) double __cdecl expm1(double); template < class _Ty > inline typename :: std :: enable_if < :: std :: is_integral < _Ty > :: value, double > :: type expm1 ( _Ty _Left ) { return ( :: expm1 ( ( double ) _Left ) ); }
#line 187
extern "C" __declspec(dllimport) double __cdecl exp2(double); template < class _Ty > inline typename :: std :: enable_if < :: std :: is_integral < _Ty > :: value, double > :: type exp2 ( _Ty _Left ) { return ( :: exp2 ( ( double ) _Left ) ); }
#line 188
extern "C" __declspec(dllimport) double __cdecl fdim(double, double); template < class _Ty1, class _Ty2 > inline typename :: std :: enable_if < :: std :: is_arithmetic < _Ty1 > :: value && :: std :: is_arithmetic < _Ty2 > :: value, typename :: std :: _Common_float_type < _Ty1, _Ty2 > :: type > :: type fdim ( _Ty1 _Left, _Ty2 _Right ) { typedef typename :: std :: _Common_float_type < _Ty1, _Ty2 > :: type type; return ( :: fdim ( ( type ) _Left, ( type ) _Right ) ); }
#line 190
extern "C" __declspec(dllimport) double __cdecl fmax(double, double); template < class _Ty1, class _Ty2 > inline typename :: std :: enable_if < :: std :: is_arithmetic < _Ty1 > :: value && :: std :: is_arithmetic < _Ty2 > :: value, typename :: std :: _Common_float_type < _Ty1, _Ty2 > :: type > :: type fmax ( _Ty1 _Left, _Ty2 _Right ) { typedef typename :: std :: _Common_float_type < _Ty1, _Ty2 > :: type type; return ( :: fmax ( ( type ) _Left, ( type ) _Right ) ); }
#line 191
extern "C" __declspec(dllimport) double __cdecl fmin(double, double); template < class _Ty1, class _Ty2 > inline typename :: std :: enable_if < :: std :: is_arithmetic < _Ty1 > :: value && :: std :: is_arithmetic < _Ty2 > :: value, typename :: std :: _Common_float_type < _Ty1, _Ty2 > :: type > :: type fmin ( _Ty1 _Left, _Ty2 _Right ) { typedef typename :: std :: _Common_float_type < _Ty1, _Ty2 > :: type type; return ( :: fmin ( ( type ) _Left, ( type ) _Right ) ); }
#line 192
extern "C" __declspec(dllimport) double __cdecl hypot(double, double); template < class _Ty1, class _Ty2 > inline typename :: std :: enable_if < :: std :: is_arithmetic < _Ty1 > :: value && :: std :: is_arithmetic < _Ty2 > :: value, typename :: std :: _Common_float_type < _Ty1, _Ty2 > :: type > :: type hypot ( _Ty1 _Left, _Ty2 _Right ) { typedef typename :: std :: _Common_float_type < _Ty1, _Ty2 > :: type type; return ( :: hypot ( ( type ) _Left, ( type ) _Right ) ); }
#line 193
extern "C" __declspec(dllimport) int __cdecl ilogb(double); template < class _Ty > inline typename :: std :: enable_if < :: std :: is_integral < _Ty > :: value, int > :: type ilogb ( _Ty _Left ) { return ( :: ilogb ( ( double ) _Left ) ); }
#line 194
extern "C" __declspec(dllimport) double __cdecl lgamma(double); template < class _Ty > inline typename :: std :: enable_if < :: std :: is_integral < _Ty > :: value, double > :: type lgamma ( _Ty _Left ) { return ( :: lgamma ( ( double ) _Left ) ); }
#line 195
extern "C" __declspec(dllimport) __int64 __cdecl llrint(double); template < class _Ty > inline typename :: std :: enable_if < :: std :: is_integral < _Ty > :: value, long long > :: type llrint ( _Ty _Left ) { return ( :: llrint ( ( double ) _Left ) ); }
#line 196
extern "C" __declspec(dllimport) __int64 __cdecl llround(double); template < class _Ty > inline typename :: std :: enable_if < :: std :: is_integral < _Ty > :: value, long long > :: type llround ( _Ty _Left ) { return ( :: llround ( ( double ) _Left ) ); }
#line 197
extern "C" __declspec(dllimport) double __cdecl log1p(double); template < class _Ty > inline typename :: std :: enable_if < :: std :: is_integral < _Ty > :: value, double > :: type log1p ( _Ty _Left ) { return ( :: log1p ( ( double ) _Left ) ); }
#line 198
extern "C" __declspec(dllimport) double __cdecl log2(double); template < class _Ty > inline typename :: std :: enable_if < :: std :: is_integral < _Ty > :: value, double > :: type log2 ( _Ty _Left ) { return ( :: log2 ( ( double ) _Left ) ); }
#line 199
extern "C" __declspec(dllimport) double __cdecl logb(double); template < class _Ty > inline typename :: std :: enable_if < :: std :: is_integral < _Ty > :: value, double > :: type logb ( _Ty _Left ) { return ( :: logb ( ( double ) _Left ) ); }
#line 200
extern "C" __declspec(dllimport) long __cdecl lrint(double); template < class _Ty > inline typename :: std :: enable_if < :: std :: is_integral < _Ty > :: value, long > :: type lrint ( _Ty _Left ) { return ( :: lrint ( ( double ) _Left ) ); }
#line 201
extern "C" __declspec(dllimport) long __cdecl lround(double); template < class _Ty > inline typename :: std :: enable_if < :: std :: is_integral < _Ty > :: value, long > :: type lround ( _Ty _Left ) { return ( :: lround ( ( double ) _Left ) ); }
#line 202
extern "C" __declspec(dllimport) double __cdecl nearbyint(double); template < class _Ty > inline typename :: std :: enable_if < :: std :: is_integral < _Ty > :: value, double > :: type nearbyint ( _Ty _Left ) { return ( :: nearbyint ( ( double ) _Left ) ); }
#line 203
extern "C" __declspec(dllimport) double __cdecl nextafter(double, double); template < class _Ty1, class _Ty2 > inline typename :: std :: enable_if < :: std :: is_arithmetic < _Ty1 > :: value && :: std :: is_arithmetic < _Ty2 > :: value, typename :: std :: _Common_float_type < _Ty1, _Ty2 > :: type > :: type nextafter ( _Ty1 _Left, _Ty2 _Right ) { typedef typename :: std :: _Common_float_type < _Ty1, _Ty2 > :: type type; return ( :: nextafter ( ( type ) _Left, ( type ) _Right ) ); }
#line 204
extern "C" __declspec(dllimport) double __cdecl nexttoward(double, long double); template < class _Ty > inline typename :: std :: enable_if < :: std :: is_integral < _Ty > :: value, double > :: type nexttoward ( _Ty _Left, long double _Arg2 ) { return ( :: nexttoward ( ( double ) _Left, _Arg2 ) ); }
#line 205
extern "C" __declspec(dllimport) double __cdecl remainder(double, double); template < class _Ty1, class _Ty2 > inline typename :: std :: enable_if < :: std :: is_arithmetic < _Ty1 > :: value && :: std :: is_arithmetic < _Ty2 > :: value, typename :: std :: _Common_float_type < _Ty1, _Ty2 > :: type > :: type remainder ( _Ty1 _Left, _Ty2 _Right ) { typedef typename :: std :: _Common_float_type < _Ty1, _Ty2 > :: type type; return ( :: remainder ( ( type ) _Left, ( type ) _Right ) ); }
#line 207
extern "C" __declspec(dllimport) double __cdecl rint(double); template < class _Ty > inline typename :: std :: enable_if < :: std :: is_integral < _Ty > :: value, double > :: type rint ( _Ty _Left ) { return ( :: rint ( ( double ) _Left ) ); }
#line 208
extern "C" __declspec(dllimport) double __cdecl round(double); template < class _Ty > inline typename :: std :: enable_if < :: std :: is_integral < _Ty > :: value, double > :: type round ( _Ty _Left ) { return ( :: round ( ( double ) _Left ) ); }
#line 209
extern "C" __declspec(dllimport) double __cdecl scalbln(double, long); template < class _Ty > inline typename :: std :: enable_if < :: std :: is_integral < _Ty > :: value, double > :: type scalbln ( _Ty _Left, long _Arg2 ) { return ( :: scalbln ( ( double ) _Left, _Arg2 ) ); }
#line 210
extern "C" __declspec(dllimport) double __cdecl scalbn(double, int); template < class _Ty > inline typename :: std :: enable_if < :: std :: is_integral < _Ty > :: value, double > :: type scalbn ( _Ty _Left, int _Arg2 ) { return ( :: scalbn ( ( double ) _Left, _Arg2 ) ); }
#line 211
extern "C" __declspec(dllimport) double __cdecl tgamma(double); template < class _Ty > inline typename :: std :: enable_if < :: std :: is_integral < _Ty > :: value, double > :: type tgamma ( _Ty _Left ) { return ( :: tgamma ( ( double ) _Left ) ); }
#line 212
extern "C" __declspec(dllimport) double __cdecl trunc(double); template < class _Ty > inline typename :: std :: enable_if < :: std :: is_integral < _Ty > :: value, double > :: type trunc ( _Ty _Left ) { return ( :: trunc ( ( double ) _Left ) ); }
#line 215
#pragma warning(pop)
#pragma pack ( pop )
#line 651 "C:\\Program Files (x86)\\Microsoft Visual Studio 14.0\\VC\\include\\cmath"
namespace std { 
#line 652
using ::abs;using ::acos;using ::asin;
#line 653
using ::atan;using ::atan2;using ::ceil;
#line 654
using ::cos;using ::cosh;using ::exp;
#line 655
using ::fabs;using ::floor;using ::fmod;
#line 656
using ::frexp;using ::ldexp;using ::log;
#line 657
using ::log10;using ::modf;using ::pow;
#line 658
using ::sin;using ::sinh;using ::sqrt;
#line 659
using ::tan;using ::tanh;
#line 661
using ::acosf;using ::asinf;
#line 662
using ::atanf;using ::atan2f;using ::ceilf;
#line 663
using ::cosf;using ::coshf;using ::expf;
#line 664
using ::fabsf;using ::floorf;using ::fmodf;
#line 665
using ::frexpf;using ::ldexpf;using ::logf;
#line 666
using ::log10f;using ::modff;using ::powf;
#line 667
using ::sinf;using ::sinhf;using ::sqrtf;
#line 668
using ::tanf;using ::tanhf;
#line 670
using ::acosl;using ::asinl;
#line 671
using ::atanl;using ::atan2l;using ::ceill;
#line 672
using ::cosl;using ::coshl;using ::expl;
#line 673
using ::fabsl;using ::floorl;using ::fmodl;
#line 674
using ::frexpl;using ::ldexpl;using ::logl;
#line 675
using ::log10l;using ::modfl;using ::powl;
#line 676
using ::sinl;using ::sinhl;using ::sqrtl;
#line 677
using ::tanl;using ::tanhl;
#line 679
using ::float_t;using ::double_t;
#line 681
using ::acosh;using ::asinh;using ::atanh;
#line 682
using ::cbrt;using ::erf;using ::erfc;
#line 683
using ::expm1;using ::exp2;
#line 684
using ::hypot;using ::ilogb;using ::lgamma;
#line 685
using ::log1p;using ::log2;using ::logb;
#line 686
using ::llrint;using ::lrint;using ::nearbyint;
#line 687
using ::rint;using ::llround;using ::lround;
#line 688
using ::fdim;using ::fma;using ::fmax;using ::fmin;
#line 689
using ::round;using ::trunc;
#line 690
using ::remainder;using ::remquo;
#line 691
using ::copysign;using ::nan;using ::nextafter;
#line 692
using ::scalbn;using ::scalbln;
#line 693
using ::nexttoward;using ::tgamma;
#line 695
using ::acoshf;using ::asinhf;using ::atanhf;
#line 696
using ::cbrtf;using ::erff;using ::erfcf;
#line 697
using ::expm1f;using ::exp2f;
#line 698
using ::hypotf;using ::ilogbf;using ::lgammaf;
#line 699
using ::log1pf;using ::log2f;using ::logbf;
#line 700
using ::llrintf;using ::lrintf;using ::nearbyintf;
#line 701
using ::rintf;using ::llroundf;using ::lroundf;
#line 702
using ::fdimf;using ::fmaf;using ::fmaxf;using ::fminf;
#line 703
using ::roundf;using ::truncf;
#line 704
using ::remainderf;using ::remquof;
#line 705
using ::copysignf;using ::nanf;
#line 706
using ::nextafterf;using ::scalbnf;using ::scalblnf;
#line 707
using ::nexttowardf;using ::tgammaf;
#line 709
using ::acoshl;using ::asinhl;using ::atanhl;
#line 710
using ::cbrtl;using ::erfl;using ::erfcl;
#line 711
using ::expm1l;using ::exp2l;
#line 712
using ::hypotl;using ::ilogbl;using ::lgammal;
#line 713
using ::log1pl;using ::log2l;using ::logbl;
#line 714
using ::llrintl;using ::lrintl;using ::nearbyintl;
#line 715
using ::rintl;using ::llroundl;using ::lroundl;
#line 716
using ::fdiml;using ::fmal;using ::fmaxl;using ::fminl;
#line 717
using ::roundl;using ::truncl;
#line 718
using ::remainderl;using ::remquol;
#line 719
using ::copysignl;using ::nanl;
#line 720
using ::nextafterl;using ::scalbnl;using ::scalblnl;
#line 721
using ::nexttowardl;using ::tgammal;
#line 723
using ::fpclassify;using ::signbit;
#line 724
using ::isfinite;using ::isinf;
#line 725
using ::isnan;using ::isnormal;
#line 726
using ::isgreater;using ::isgreaterequal;
#line 727
using ::isless;using ::islessequal;
#line 728
using ::islessgreater;using ::isunordered;
#line 729
}
#line 9063 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\crt\\math_functions.h"
extern "C" __declspec(dllimport) double __cdecl _hypot(double x, double y); 
#line 9064
extern "C" __declspec(dllimport) float __cdecl _hypotf(float x, float y); 
#line 9074 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\crt\\math_functions.h"
extern inline bool signbit(long double) throw(); 
#line 9075
extern "C" __declspec(dllimport) int _ldsign(long double); 
#line 9118 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\crt\\math_functions.h"
extern inline bool signbit(double) throw(); 
#line 9119
extern "C" __declspec(dllimport) int _dsign(double); 
#line 9163 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\crt\\math_functions.h"
extern inline bool signbit(float) throw(); 
#line 9164
extern "C" __declspec(dllimport) int _fdsign(float); 
#line 9172 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\crt\\math_functions.h"
static __inline bool isinf(long double a); 
#line 9207 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\crt\\math_functions.h"
static __inline bool isinf(double a); 
#line 9245 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\crt\\math_functions.h"
static __inline bool isinf(float a); 
#line 9252 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\crt\\math_functions.h"
static __inline bool isnan(long double a); 
#line 9285 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\crt\\math_functions.h"
static __inline bool isnan(double a); 
#line 9321 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\crt\\math_functions.h"
static __inline bool isnan(float a); 
#line 9328 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\crt\\math_functions.h"
static __inline bool isfinite(long double a); 
#line 9365 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\crt\\math_functions.h"
static __inline bool isfinite(double a); 
#line 9401 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\crt\\math_functions.h"
static __inline bool isfinite(float a); 
#line 9409 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\crt\\math_functions.h"
template< class T> extern T _Pow_int(T, int) throw(); 
#line 9410
extern inline __int64 abs(__int64) throw(); 
#line 9485 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\crt\\math_functions.h"
extern inline long __cdecl abs(long) throw(); 
#line 9489 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\crt\\math_functions.h"
extern inline float __cdecl abs(float) throw(); 
#line 9490
extern inline double __cdecl abs(double) throw(); 
#line 9491
extern inline float __cdecl fabs(float) throw(); 
#line 9492
extern inline float __cdecl ceil(float) throw(); 
#line 9493
extern inline float __cdecl floor(float) throw(); 
#line 9494
extern inline float __cdecl sqrt(float) throw(); 
#line 9495
extern inline float __cdecl pow(float, float) throw(); 
#line 9520 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\crt\\math_functions.h"
extern inline float __cdecl pow(float, int) throw(); 
#line 9521
extern inline double __cdecl pow(double, int) throw(); 
#line 9524 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\crt\\math_functions.h"
extern inline float __cdecl log(float) throw(); 
#line 9525
extern inline float __cdecl log10(float) throw(); 
#line 9526
extern inline float __cdecl fmod(float, float) throw(); 
#line 9527
extern inline float __cdecl modf(float, float *) throw(); 
#line 9528
extern inline float __cdecl exp(float) throw(); 
#line 9529
extern inline float __cdecl frexp(float, int *) throw(); 
#line 9530
extern inline float __cdecl ldexp(float, int) throw(); 
#line 9531
extern inline float __cdecl asin(float) throw(); 
#line 9532
extern inline float __cdecl sin(float) throw(); 
#line 9533
extern inline float __cdecl sinh(float) throw(); 
#line 9534
extern inline float __cdecl acos(float) throw(); 
#line 9535
extern inline float __cdecl cos(float) throw(); 
#line 9536
extern inline float __cdecl cosh(float) throw(); 
#line 9537
extern inline float __cdecl atan(float) throw(); 
#line 9538
extern inline float __cdecl atan2(float, float) throw(); 
#line 9539
extern inline float __cdecl tan(float) throw(); 
#line 9540
extern inline float __cdecl tanh(float) throw(); 
#line 9770 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\crt\\math_functions.h"
extern inline float __cdecl logb(float) throw(); 
#line 9771
extern inline int __cdecl ilogb(float) throw(); 
#line 9772
extern float __cdecl scalbn(float, float) throw(); 
#line 9773
extern inline float __cdecl scalbln(float, long) throw(); 
#line 9774
extern inline float __cdecl exp2(float) throw(); 
#line 9775
extern inline float __cdecl expm1(float) throw(); 
#line 9776
extern inline float __cdecl log2(float) throw(); 
#line 9777
extern inline float __cdecl log1p(float) throw(); 
#line 9778
extern inline float __cdecl acosh(float) throw(); 
#line 9779
extern inline float __cdecl asinh(float) throw(); 
#line 9780
extern inline float __cdecl atanh(float) throw(); 
#line 9781
extern inline float __cdecl hypot(float, float) throw(); 
#line 9782
extern float __cdecl norm3d(float, float, float) throw(); 
#line 9783
extern float __cdecl norm4d(float, float, float, float) throw(); 
#line 9784
extern inline float __cdecl cbrt(float) throw(); 
#line 9785
extern inline float __cdecl erf(float) throw(); 
#line 9786
extern inline float __cdecl erfc(float) throw(); 
#line 9787
extern inline float __cdecl lgamma(float) throw(); 
#line 9788
extern inline float __cdecl tgamma(float) throw(); 
#line 9789
extern inline float __cdecl copysign(float, float) throw(); 
#line 9790
extern inline float __cdecl nextafter(float, float) throw(); 
#line 9791
extern inline float __cdecl remainder(float, float) throw(); 
#line 9792
extern inline float __cdecl remquo(float, float, int *) throw(); 
#line 9793
extern inline float __cdecl round(float) throw(); 
#line 9794
extern inline long __cdecl lround(float) throw(); 
#line 9795
extern inline __int64 __cdecl llround(float) throw(); 
#line 9796
extern inline float __cdecl trunc(float) throw(); 
#line 9797
extern inline float __cdecl rint(float) throw(); 
#line 9798
extern inline long __cdecl lrint(float) throw(); 
#line 9799
extern inline __int64 __cdecl llrint(float) throw(); 
#line 9800
extern inline float __cdecl nearbyint(float) throw(); 
#line 9801
extern inline float __cdecl fdim(float, float) throw(); 
#line 9802
extern inline float __cdecl fma(float, float, float) throw(); 
#line 9803
extern inline float __cdecl fmax(float, float) throw(); 
#line 9804
extern inline float __cdecl fmin(float, float) throw(); 
#line 9807 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\crt\\math_functions.h"
static inline float exp10(float a); 
#line 9809
static inline float rsqrt(float a); 
#line 9811
static inline float rcbrt(float a); 
#line 9813
static inline float sinpi(float a); 
#line 9815
static inline float cospi(float a); 
#line 9817
static inline void sincospi(float a, float * sptr, float * cptr); 
#line 9819
static inline void sincos(float a, float * sptr, float * cptr); 
#line 9821
static inline float j0(float a); 
#line 9823
static inline float j1(float a); 
#line 9825
static inline float jn(int n, float a); 
#line 9827
static inline float y0(float a); 
#line 9829
static inline float y1(float a); 
#line 9831
static inline float yn(int n, float a); 
#line 9833
static inline float cyl_bessel_i0(float a); 
#line 9835
static inline float cyl_bessel_i1(float a); 
#line 9837
static inline float erfinv(float a); 
#line 9839
static inline float erfcinv(float a); 
#line 9841
static inline float normcdfinv(float a); 
#line 9843
static inline float normcdf(float a); 
#line 9845
static inline float erfcx(float a); 
#line 9847
static inline double copysign(double a, float b); 
#line 9849
static inline double copysign(float a, double b); 
#line 9851
static inline unsigned min(unsigned a, unsigned b); 
#line 9853
static inline unsigned min(int a, unsigned b); 
#line 9855
static inline unsigned min(unsigned a, int b); 
#line 9857
static inline long min(long a, long b); 
#line 9859
static inline unsigned long min(unsigned long a, unsigned long b); 
#line 9861
static inline unsigned long min(long a, unsigned long b); 
#line 9863
static inline unsigned long min(unsigned long a, long b); 
#line 9865
static inline __int64 min(__int64 a, __int64 b); 
#line 9867
static inline unsigned __int64 min(unsigned __int64 a, unsigned __int64 b); 
#line 9869
static inline unsigned __int64 min(__int64 a, unsigned __int64 b); 
#line 9871
static inline unsigned __int64 min(unsigned __int64 a, __int64 b); 
#line 9873
static inline float min(float a, float b); 
#line 9875
static inline double min(double a, double b); 
#line 9877
static inline double min(float a, double b); 
#line 9879
static inline double min(double a, float b); 
#line 9881
static inline unsigned max(unsigned a, unsigned b); 
#line 9883
static inline unsigned max(int a, unsigned b); 
#line 9885
static inline unsigned max(unsigned a, int b); 
#line 9887
static inline long max(long a, long b); 
#line 9889
static inline unsigned long max(unsigned long a, unsigned long b); 
#line 9891
static inline unsigned long max(long a, unsigned long b); 
#line 9893
static inline unsigned long max(unsigned long a, long b); 
#line 9895
static inline __int64 max(__int64 a, __int64 b); 
#line 9897
static inline unsigned __int64 max(unsigned __int64 a, unsigned __int64 b); 
#line 9899
static inline unsigned __int64 max(__int64 a, unsigned __int64 b); 
#line 9901
static inline unsigned __int64 max(unsigned __int64 a, __int64 b); 
#line 9903
static inline float max(float a, float b); 
#line 9905
static inline double max(double a, double b); 
#line 9907
static inline double max(float a, double b); 
#line 9909
static inline double max(double a, float b); 
#line 387 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\crt\\math_functions.hpp"
static __inline bool isinf(long double a) 
#line 388
{ 
#line 392 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\crt\\math_functions.hpp"
return isinf< long double> (a); 
#line 394 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\crt\\math_functions.hpp"
} 
#line 403 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\crt\\math_functions.hpp"
static __inline bool isinf(double a) 
#line 404
{ 
#line 408 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\crt\\math_functions.hpp"
return isinf< double> (a); 
#line 410 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\crt\\math_functions.hpp"
} 
#line 419 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\crt\\math_functions.hpp"
static __inline bool isinf(float a) 
#line 420
{ 
#line 424 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\crt\\math_functions.hpp"
return isinf< float> (a); 
#line 426 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\crt\\math_functions.hpp"
} 
#line 435 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\crt\\math_functions.hpp"
static __inline bool isnan(long double a) 
#line 436
{ 
#line 440 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\crt\\math_functions.hpp"
return isnan< long double> (a); 
#line 442 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\crt\\math_functions.hpp"
} 
#line 451 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\crt\\math_functions.hpp"
static __inline bool isnan(double a) 
#line 452
{ 
#line 456 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\crt\\math_functions.hpp"
return isnan< double> (a); 
#line 458 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\crt\\math_functions.hpp"
} 
#line 467 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\crt\\math_functions.hpp"
static __inline bool isnan(float a) 
#line 468
{ 
#line 472 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\crt\\math_functions.hpp"
return isnan< float> (a); 
#line 474 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\crt\\math_functions.hpp"
} 
#line 483 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\crt\\math_functions.hpp"
static __inline bool isfinite(long double a) 
#line 484
{ 
#line 488 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\crt\\math_functions.hpp"
return isfinite< long double> (a); 
#line 490 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\crt\\math_functions.hpp"
} 
#line 499 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\crt\\math_functions.hpp"
static __inline bool isfinite(double a) 
#line 500
{ 
#line 504 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\crt\\math_functions.hpp"
return isfinite< double> (a); 
#line 506 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\crt\\math_functions.hpp"
} 
#line 515 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\crt\\math_functions.hpp"
static __inline bool isfinite(float a) 
#line 516
{ 
#line 520 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\crt\\math_functions.hpp"
return isfinite< float> (a); 
#line 522 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\crt\\math_functions.hpp"
} 
#line 730 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\crt\\math_functions.hpp"
static inline float exp10(float a) 
#line 731
{ 
#line 732
return exp10f(a); 
#line 733
} 
#line 735
static inline float rsqrt(float a) 
#line 736
{ 
#line 737
return rsqrtf(a); 
#line 738
} 
#line 740
static inline float rcbrt(float a) 
#line 741
{ 
#line 742
return rcbrtf(a); 
#line 743
} 
#line 745
static inline float sinpi(float a) 
#line 746
{ 
#line 747
return sinpif(a); 
#line 748
} 
#line 750
static inline float cospi(float a) 
#line 751
{ 
#line 752
return cospif(a); 
#line 753
} 
#line 755
static inline void sincospi(float a, float *sptr, float *cptr) 
#line 756
{ 
#line 757
sincospif(a, sptr, cptr); 
#line 758
} 
#line 760
static inline void sincos(float a, float *sptr, float *cptr) 
#line 761
{ 
#line 762
sincosf(a, sptr, cptr); 
#line 763
} 
#line 765
static inline float j0(float a) 
#line 766
{ 
#line 767
return j0f(a); 
#line 768
} 
#line 770
static inline float j1(float a) 
#line 771
{ 
#line 772
return j1f(a); 
#line 773
} 
#line 775
static inline float jn(int n, float a) 
#line 776
{ 
#line 777
return jnf(n, a); 
#line 778
} 
#line 780
static inline float y0(float a) 
#line 781
{ 
#line 782
return y0f(a); 
#line 783
} 
#line 785
static inline float y1(float a) 
#line 786
{ 
#line 787
return y1f(a); 
#line 788
} 
#line 790
static inline float yn(int n, float a) 
#line 791
{ 
#line 792
return ynf(n, a); 
#line 793
} 
#line 795
static inline float cyl_bessel_i0(float a) 
#line 796
{ 
#line 797
return cyl_bessel_i0f(a); 
#line 798
} 
#line 800
static inline float cyl_bessel_i1(float a) 
#line 801
{ 
#line 802
return cyl_bessel_i1f(a); 
#line 803
} 
#line 805
static inline float erfinv(float a) 
#line 806
{ 
#line 807
return erfinvf(a); 
#line 808
} 
#line 810
static inline float erfcinv(float a) 
#line 811
{ 
#line 812
return erfcinvf(a); 
#line 813
} 
#line 815
static inline float normcdfinv(float a) 
#line 816
{ 
#line 817
return normcdfinvf(a); 
#line 818
} 
#line 820
static inline float normcdf(float a) 
#line 821
{ 
#line 822
return normcdff(a); 
#line 823
} 
#line 825
static inline float erfcx(float a) 
#line 826
{ 
#line 827
return erfcxf(a); 
#line 828
} 
#line 830
static inline double copysign(double a, float b) 
#line 831
{ 
#line 832
return copysign(a, (double)b); 
#line 833
} 
#line 835
static inline double copysign(float a, double b) 
#line 836
{ 
#line 837
return copysign((double)a, b); 
#line 838
} 
#line 840
static inline unsigned min(unsigned a, unsigned b) 
#line 841
{ 
#line 842
return umin(a, b); 
#line 843
} 
#line 845
static inline unsigned min(int a, unsigned b) 
#line 846
{ 
#line 847
return umin((unsigned)a, b); 
#line 848
} 
#line 850
static inline unsigned min(unsigned a, int b) 
#line 851
{ 
#line 852
return umin(a, (unsigned)b); 
#line 853
} 
#line 855
static inline long min(long a, long b) 
#line 856
{ 
#line 859
#pragma warning (disable: 4127)
#line 862 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\crt\\math_functions.hpp"
if (sizeof(long) == sizeof(int)) { 
#line 864
#pragma warning (default: 4127)
#line 866 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\crt\\math_functions.hpp"
return (long)min((int)a, (int)b); 
#line 867
} else { 
#line 868
return (long)llmin((__int64)a, (__int64)b); 
#line 869
}  
#line 870
} 
#line 872
static inline unsigned long min(unsigned long a, unsigned long b) 
#line 873
{ 
#line 875
#pragma warning (disable: 4127)
#line 877 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\crt\\math_functions.hpp"
if (sizeof(unsigned long) == sizeof(unsigned)) { 
#line 879
#pragma warning (default: 4127)
#line 881 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\crt\\math_functions.hpp"
return (unsigned long)umin((unsigned)a, (unsigned)b); 
#line 882
} else { 
#line 883
return (unsigned long)ullmin((unsigned __int64)a, (unsigned __int64)b); 
#line 884
}  
#line 885
} 
#line 887
static inline unsigned long min(long a, unsigned long b) 
#line 888
{ 
#line 890
#pragma warning (disable: 4127)
#line 892 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\crt\\math_functions.hpp"
if (sizeof(unsigned long) == sizeof(unsigned)) { 
#line 894
#pragma warning (default: 4127)
#line 896 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\crt\\math_functions.hpp"
return (unsigned long)umin((unsigned)a, (unsigned)b); 
#line 897
} else { 
#line 898
return (unsigned long)ullmin((unsigned __int64)a, (unsigned __int64)b); 
#line 899
}  
#line 900
} 
#line 902
static inline unsigned long min(unsigned long a, long b) 
#line 903
{ 
#line 905
#pragma warning (disable: 4127)
#line 907 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\crt\\math_functions.hpp"
if (sizeof(unsigned long) == sizeof(unsigned)) { 
#line 909
#pragma warning (default: 4127)
#line 911 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\crt\\math_functions.hpp"
return (unsigned long)umin((unsigned)a, (unsigned)b); 
#line 912
} else { 
#line 913
return (unsigned long)ullmin((unsigned __int64)a, (unsigned __int64)b); 
#line 914
}  
#line 915
} 
#line 917
static inline __int64 min(__int64 a, __int64 b) 
#line 918
{ 
#line 919
return llmin(a, b); 
#line 920
} 
#line 922
static inline unsigned __int64 min(unsigned __int64 a, unsigned __int64 b) 
#line 923
{ 
#line 924
return ullmin(a, b); 
#line 925
} 
#line 927
static inline unsigned __int64 min(__int64 a, unsigned __int64 b) 
#line 928
{ 
#line 929
return ullmin((unsigned __int64)a, b); 
#line 930
} 
#line 932
static inline unsigned __int64 min(unsigned __int64 a, __int64 b) 
#line 933
{ 
#line 934
return ullmin(a, (unsigned __int64)b); 
#line 935
} 
#line 937
static inline float min(float a, float b) 
#line 938
{ 
#line 939
return fminf(a, b); 
#line 940
} 
#line 942
static inline double min(double a, double b) 
#line 943
{ 
#line 944
return fmin(a, b); 
#line 945
} 
#line 947
static inline double min(float a, double b) 
#line 948
{ 
#line 949
return fmin((double)a, b); 
#line 950
} 
#line 952
static inline double min(double a, float b) 
#line 953
{ 
#line 954
return fmin(a, (double)b); 
#line 955
} 
#line 957
static inline unsigned max(unsigned a, unsigned b) 
#line 958
{ 
#line 959
return umax(a, b); 
#line 960
} 
#line 962
static inline unsigned max(int a, unsigned b) 
#line 963
{ 
#line 964
return umax((unsigned)a, b); 
#line 965
} 
#line 967
static inline unsigned max(unsigned a, int b) 
#line 968
{ 
#line 969
return umax(a, (unsigned)b); 
#line 970
} 
#line 972
static inline long max(long a, long b) 
#line 973
{ 
#line 976
#pragma warning (disable: 4127)
#line 978 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\crt\\math_functions.hpp"
if (sizeof(long) == sizeof(int)) { 
#line 980
#pragma warning (default: 4127)
#line 982 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\crt\\math_functions.hpp"
return (long)max((int)a, (int)b); 
#line 983
} else { 
#line 984
return (long)llmax((__int64)a, (__int64)b); 
#line 985
}  
#line 986
} 
#line 988
static inline unsigned long max(unsigned long a, unsigned long b) 
#line 989
{ 
#line 991
#pragma warning (disable: 4127)
#line 993 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\crt\\math_functions.hpp"
if (sizeof(unsigned long) == sizeof(unsigned)) { 
#line 995
#pragma warning (default: 4127)
#line 997 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\crt\\math_functions.hpp"
return (unsigned long)umax((unsigned)a, (unsigned)b); 
#line 998
} else { 
#line 999
return (unsigned long)ullmax((unsigned __int64)a, (unsigned __int64)b); 
#line 1000
}  
#line 1001
} 
#line 1003
static inline unsigned long max(long a, unsigned long b) 
#line 1004
{ 
#line 1006
#pragma warning (disable: 4127)
#line 1008 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\crt\\math_functions.hpp"
if (sizeof(unsigned long) == sizeof(unsigned)) { 
#line 1010
#pragma warning (default: 4127)
#line 1012 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\crt\\math_functions.hpp"
return (unsigned long)umax((unsigned)a, (unsigned)b); 
#line 1013
} else { 
#line 1014
return (unsigned long)ullmax((unsigned __int64)a, (unsigned __int64)b); 
#line 1015
}  
#line 1016
} 
#line 1018
static inline unsigned long max(unsigned long a, long b) 
#line 1019
{ 
#line 1021
#pragma warning (disable: 4127)
#line 1023 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\crt\\math_functions.hpp"
if (sizeof(unsigned long) == sizeof(unsigned)) { 
#line 1025
#pragma warning (default: 4127)
#line 1027 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\crt\\math_functions.hpp"
return (unsigned long)umax((unsigned)a, (unsigned)b); 
#line 1028
} else { 
#line 1029
return (unsigned long)ullmax((unsigned __int64)a, (unsigned __int64)b); 
#line 1030
}  
#line 1031
} 
#line 1033
static inline __int64 max(__int64 a, __int64 b) 
#line 1034
{ 
#line 1035
return llmax(a, b); 
#line 1036
} 
#line 1038
static inline unsigned __int64 max(unsigned __int64 a, unsigned __int64 b) 
#line 1039
{ 
#line 1040
return ullmax(a, b); 
#line 1041
} 
#line 1043
static inline unsigned __int64 max(__int64 a, unsigned __int64 b) 
#line 1044
{ 
#line 1045
return ullmax((unsigned __int64)a, b); 
#line 1046
} 
#line 1048
static inline unsigned __int64 max(unsigned __int64 a, __int64 b) 
#line 1049
{ 
#line 1050
return ullmax(a, (unsigned __int64)b); 
#line 1051
} 
#line 1053
static inline float max(float a, float b) 
#line 1054
{ 
#line 1055
return fmaxf(a, b); 
#line 1056
} 
#line 1058
static inline double max(double a, double b) 
#line 1059
{ 
#line 1060
return fmax(a, b); 
#line 1061
} 
#line 1063
static inline double max(float a, double b) 
#line 1064
{ 
#line 1065
return fmax((double)a, b); 
#line 1066
} 
#line 1068
static inline double max(double a, float b) 
#line 1069
{ 
#line 1070
return fmax(a, (double)b); 
#line 1071
} 
#line 1077
#pragma warning(disable : 4211)
#line 1082 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\crt\\math_functions.hpp"
static inline int min(int a, int b) 
#line 1083
{ 
#line 1084
return (a < b) ? a : b; 
#line 1085
} 
#line 1087
static inline unsigned umin(unsigned a, unsigned b) 
#line 1088
{ 
#line 1089
return (a < b) ? a : b; 
#line 1090
} 
#line 1092
static inline __int64 llmin(__int64 a, __int64 b) 
#line 1093
{ 
#line 1094
return (a < b) ? a : b; 
#line 1095
} 
#line 1097
static inline unsigned __int64 ullmin(unsigned __int64 a, unsigned __int64 
#line 1098
b) 
#line 1099
{ 
#line 1100
return (a < b) ? a : b; 
#line 1101
} 
#line 1103
static inline int max(int a, int b) 
#line 1104
{ 
#line 1105
return (a > b) ? a : b; 
#line 1106
} 
#line 1108
static inline unsigned umax(unsigned a, unsigned b) 
#line 1109
{ 
#line 1110
return (a > b) ? a : b; 
#line 1111
} 
#line 1113
static inline __int64 llmax(__int64 a, __int64 b) 
#line 1114
{ 
#line 1115
return (a > b) ? a : b; 
#line 1116
} 
#line 1118
static inline unsigned __int64 ullmax(unsigned __int64 a, unsigned __int64 
#line 1119
b) 
#line 1120
{ 
#line 1121
return (a > b) ? a : b; 
#line 1122
} 
#line 1125
#pragma warning(default: 4211)
#line 77 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\cuda_surface_types.h"
template< class T, int dim = 1> 
#line 78
struct surface : public surfaceReference { 
#line 81
surface() 
#line 82
{ 
#line 83
(channelDesc) = cudaCreateChannelDesc< T> (); 
#line 84
} 
#line 86
surface(::cudaChannelFormatDesc desc) 
#line 87
{ 
#line 88
(channelDesc) = desc; 
#line 89
} 
#line 91 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\cuda_surface_types.h"
}; 
#line 93
template< int dim> 
#line 94
struct surface< void, dim>  : public surfaceReference { 
#line 97
surface() 
#line 98
{ 
#line 99
(channelDesc) = cudaCreateChannelDesc< void> (); 
#line 100
} 
#line 102 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\cuda_surface_types.h"
}; 
#line 77 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\cuda_texture_types.h"
template< class T, int texType = 1, cudaTextureReadMode mode = cudaReadModeElementType> 
#line 78
struct texture : public textureReference { 
#line 81
texture(int norm = 0, ::cudaTextureFilterMode 
#line 82
fMode = cudaFilterModePoint, ::cudaTextureAddressMode 
#line 83
aMode = cudaAddressModeClamp) 
#line 84
{ 
#line 85
(normalized) = norm; 
#line 86
(filterMode) = fMode; 
#line 87
((addressMode)[0]) = aMode; 
#line 88
((addressMode)[1]) = aMode; 
#line 89
((addressMode)[2]) = aMode; 
#line 90
(channelDesc) = cudaCreateChannelDesc< T> (); 
#line 91
(sRGB) = 0; 
#line 92
} 
#line 94
texture(int norm, ::cudaTextureFilterMode 
#line 95
fMode, ::cudaTextureAddressMode 
#line 96
aMode, ::cudaChannelFormatDesc 
#line 97
desc) 
#line 98
{ 
#line 99
(normalized) = norm; 
#line 100
(filterMode) = fMode; 
#line 101
((addressMode)[0]) = aMode; 
#line 102
((addressMode)[1]) = aMode; 
#line 103
((addressMode)[2]) = aMode; 
#line 104
(channelDesc) = desc; 
#line 105
(sRGB) = 0; 
#line 106
} 
#line 108 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\cuda_texture_types.h"
}; 
#line 79 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\crt/device_functions.h"
extern "C" {
#line 3201
}
#line 3209
static __inline int mulhi(int a, int b); 
#line 3211
static __inline unsigned mulhi(unsigned a, unsigned b); 
#line 3213
static __inline unsigned mulhi(int a, unsigned b); 
#line 3215
static __inline unsigned mulhi(unsigned a, int b); 
#line 3217
static __inline __int64 mul64hi(__int64 a, __int64 b); 
#line 3219
static __inline unsigned __int64 mul64hi(unsigned __int64 a, unsigned __int64 b); 
#line 3221
static __inline unsigned __int64 mul64hi(__int64 a, unsigned __int64 b); 
#line 3223
static __inline unsigned __int64 mul64hi(unsigned __int64 a, __int64 b); 
#line 3225
static __inline int float_as_int(float a); 
#line 3227
static __inline float int_as_float(int a); 
#line 3229
static __inline unsigned float_as_uint(float a); 
#line 3231
static __inline float uint_as_float(unsigned a); 
#line 3233
static __inline float saturate(float a); 
#line 3235
static __inline int mul24(int a, int b); 
#line 3237
static __inline unsigned umul24(unsigned a, unsigned b); 
#line 3239
static __inline int float2int(float a, cudaRoundMode mode = cudaRoundZero); 
#line 3241
static __inline unsigned float2uint(float a, cudaRoundMode mode = cudaRoundZero); 
#line 3243
static __inline float int2float(int a, cudaRoundMode mode = cudaRoundNearest); 
#line 3245
static __inline float uint2float(unsigned a, cudaRoundMode mode = cudaRoundNearest); 
#line 80 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\crt\\device_functions.hpp"
static __inline int mulhi(int a, int b) 
#line 81
{int volatile ___ = 1;(void)a;(void)b;
#line 83
::exit(___);}
#if 0
#line 81
{ 
#line 82
return __mulhi(a, b); 
#line 83
} 
#endif
#line 85 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\crt\\device_functions.hpp"
static __inline unsigned mulhi(unsigned a, unsigned b) 
#line 86
{int volatile ___ = 1;(void)a;(void)b;
#line 88
::exit(___);}
#if 0
#line 86
{ 
#line 87
return __umulhi(a, b); 
#line 88
} 
#endif
#line 90 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\crt\\device_functions.hpp"
static __inline unsigned mulhi(int a, unsigned b) 
#line 91
{int volatile ___ = 1;(void)a;(void)b;
#line 93
::exit(___);}
#if 0
#line 91
{ 
#line 92
return __umulhi((unsigned)a, b); 
#line 93
} 
#endif
#line 95 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\crt\\device_functions.hpp"
static __inline unsigned mulhi(unsigned a, int b) 
#line 96
{int volatile ___ = 1;(void)a;(void)b;
#line 98
::exit(___);}
#if 0
#line 96
{ 
#line 97
return __umulhi(a, (unsigned)b); 
#line 98
} 
#endif
#line 100 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\crt\\device_functions.hpp"
static __inline __int64 mul64hi(__int64 a, __int64 b) 
#line 101
{int volatile ___ = 1;(void)a;(void)b;
#line 103
::exit(___);}
#if 0
#line 101
{ 
#line 102
return __mul64hi(a, b); 
#line 103
} 
#endif
#line 105 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\crt\\device_functions.hpp"
static __inline unsigned __int64 mul64hi(unsigned __int64 a, unsigned __int64 b) 
#line 106
{int volatile ___ = 1;(void)a;(void)b;
#line 108
::exit(___);}
#if 0
#line 106
{ 
#line 107
return __umul64hi(a, b); 
#line 108
} 
#endif
#line 110 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\crt\\device_functions.hpp"
static __inline unsigned __int64 mul64hi(__int64 a, unsigned __int64 b) 
#line 111
{int volatile ___ = 1;(void)a;(void)b;
#line 113
::exit(___);}
#if 0
#line 111
{ 
#line 112
return __umul64hi((unsigned __int64)a, b); 
#line 113
} 
#endif
#line 115 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\crt\\device_functions.hpp"
static __inline unsigned __int64 mul64hi(unsigned __int64 a, __int64 b) 
#line 116
{int volatile ___ = 1;(void)a;(void)b;
#line 118
::exit(___);}
#if 0
#line 116
{ 
#line 117
return __umul64hi(a, (unsigned __int64)b); 
#line 118
} 
#endif
#line 120 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\crt\\device_functions.hpp"
static __inline int float_as_int(float a) 
#line 121
{int volatile ___ = 1;(void)a;
#line 123
::exit(___);}
#if 0
#line 121
{ 
#line 122
return __float_as_int(a); 
#line 123
} 
#endif
#line 125 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\crt\\device_functions.hpp"
static __inline float int_as_float(int a) 
#line 126
{int volatile ___ = 1;(void)a;
#line 128
::exit(___);}
#if 0
#line 126
{ 
#line 127
return __int_as_float(a); 
#line 128
} 
#endif
#line 130 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\crt\\device_functions.hpp"
static __inline unsigned float_as_uint(float a) 
#line 131
{int volatile ___ = 1;(void)a;
#line 133
::exit(___);}
#if 0
#line 131
{ 
#line 132
return __float_as_uint(a); 
#line 133
} 
#endif
#line 135 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\crt\\device_functions.hpp"
static __inline float uint_as_float(unsigned a) 
#line 136
{int volatile ___ = 1;(void)a;
#line 138
::exit(___);}
#if 0
#line 136
{ 
#line 137
return __uint_as_float(a); 
#line 138
} 
#endif
#line 139 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\crt\\device_functions.hpp"
static __inline float saturate(float a) 
#line 140
{int volatile ___ = 1;(void)a;
#line 142
::exit(___);}
#if 0
#line 140
{ 
#line 141
return __saturatef(a); 
#line 142
} 
#endif
#line 144 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\crt\\device_functions.hpp"
static __inline int mul24(int a, int b) 
#line 145
{int volatile ___ = 1;(void)a;(void)b;
#line 147
::exit(___);}
#if 0
#line 145
{ 
#line 146
return __mul24(a, b); 
#line 147
} 
#endif
#line 149 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\crt\\device_functions.hpp"
static __inline unsigned umul24(unsigned a, unsigned b) 
#line 150
{int volatile ___ = 1;(void)a;(void)b;
#line 152
::exit(___);}
#if 0
#line 150
{ 
#line 151
return __umul24(a, b); 
#line 152
} 
#endif
#line 154 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\crt\\device_functions.hpp"
static __inline int float2int(float a, cudaRoundMode mode) 
#line 155
{int volatile ___ = 1;(void)a;(void)mode;
#line 160
::exit(___);}
#if 0
#line 155
{ 
#line 156
return (mode == (cudaRoundNearest)) ? __float2int_rn(a) : ((mode == (cudaRoundPosInf)) ? __float2int_ru(a) : ((mode == (cudaRoundMinInf)) ? __float2int_rd(a) : __float2int_rz(a))); 
#line 160
} 
#endif
#line 162 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\crt\\device_functions.hpp"
static __inline unsigned float2uint(float a, cudaRoundMode mode) 
#line 163
{int volatile ___ = 1;(void)a;(void)mode;
#line 168
::exit(___);}
#if 0
#line 163
{ 
#line 164
return (mode == (cudaRoundNearest)) ? __float2uint_rn(a) : ((mode == (cudaRoundPosInf)) ? __float2uint_ru(a) : ((mode == (cudaRoundMinInf)) ? __float2uint_rd(a) : __float2uint_rz(a))); 
#line 168
} 
#endif
#line 170 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\crt\\device_functions.hpp"
static __inline float int2float(int a, cudaRoundMode mode) 
#line 171
{int volatile ___ = 1;(void)a;(void)mode;
#line 176
::exit(___);}
#if 0
#line 171
{ 
#line 172
return (mode == (cudaRoundZero)) ? __int2float_rz(a) : ((mode == (cudaRoundPosInf)) ? __int2float_ru(a) : ((mode == (cudaRoundMinInf)) ? __int2float_rd(a) : __int2float_rn(a))); 
#line 176
} 
#endif
#line 178 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\crt\\device_functions.hpp"
static __inline float uint2float(unsigned a, cudaRoundMode mode) 
#line 179
{int volatile ___ = 1;(void)a;(void)mode;
#line 184
::exit(___);}
#if 0
#line 179
{ 
#line 180
return (mode == (cudaRoundZero)) ? __uint2float_rz(a) : ((mode == (cudaRoundPosInf)) ? __uint2float_ru(a) : ((mode == (cudaRoundMinInf)) ? __uint2float_rd(a) : __uint2float_rn(a))); 
#line 184
} 
#endif
#line 107 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\device_atomic_functions.h"
static __inline int atomicAdd(int *address, int val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 107
{ } 
#endif
#line 109 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\device_atomic_functions.h"
static __inline unsigned atomicAdd(unsigned *address, unsigned val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 109
{ } 
#endif
#line 111 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\device_atomic_functions.h"
static __inline int atomicSub(int *address, int val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 111
{ } 
#endif
#line 113 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\device_atomic_functions.h"
static __inline unsigned atomicSub(unsigned *address, unsigned val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 113
{ } 
#endif
#line 115 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\device_atomic_functions.h"
static __inline int atomicExch(int *address, int val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 115
{ } 
#endif
#line 117 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\device_atomic_functions.h"
static __inline unsigned atomicExch(unsigned *address, unsigned val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 117
{ } 
#endif
#line 119 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\device_atomic_functions.h"
static __inline float atomicExch(float *address, float val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 119
{ } 
#endif
#line 121 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\device_atomic_functions.h"
static __inline int atomicMin(int *address, int val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 121
{ } 
#endif
#line 123 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\device_atomic_functions.h"
static __inline unsigned atomicMin(unsigned *address, unsigned val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 123
{ } 
#endif
#line 125 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\device_atomic_functions.h"
static __inline int atomicMax(int *address, int val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 125
{ } 
#endif
#line 127 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\device_atomic_functions.h"
static __inline unsigned atomicMax(unsigned *address, unsigned val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 127
{ } 
#endif
#line 129 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\device_atomic_functions.h"
static __inline unsigned atomicInc(unsigned *address, unsigned val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 129
{ } 
#endif
#line 131 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\device_atomic_functions.h"
static __inline unsigned atomicDec(unsigned *address, unsigned val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 131
{ } 
#endif
#line 133 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\device_atomic_functions.h"
static __inline int atomicAnd(int *address, int val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 133
{ } 
#endif
#line 135 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\device_atomic_functions.h"
static __inline unsigned atomicAnd(unsigned *address, unsigned val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 135
{ } 
#endif
#line 137 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\device_atomic_functions.h"
static __inline int atomicOr(int *address, int val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 137
{ } 
#endif
#line 139 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\device_atomic_functions.h"
static __inline unsigned atomicOr(unsigned *address, unsigned val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 139
{ } 
#endif
#line 141 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\device_atomic_functions.h"
static __inline int atomicXor(int *address, int val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 141
{ } 
#endif
#line 143 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\device_atomic_functions.h"
static __inline unsigned atomicXor(unsigned *address, unsigned val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 143
{ } 
#endif
#line 145 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\device_atomic_functions.h"
static __inline int atomicCAS(int *address, int compare, int val) {int volatile ___ = 1;(void)address;(void)compare;(void)val;::exit(___);}
#if 0
#line 145
{ } 
#endif
#line 147 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\device_atomic_functions.h"
static __inline unsigned atomicCAS(unsigned *address, unsigned compare, unsigned val) {int volatile ___ = 1;(void)address;(void)compare;(void)val;::exit(___);}
#if 0
#line 147
{ } 
#endif
#line 173 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\device_atomic_functions.h"
extern "C" {
#line 182
}
#line 191
static __inline unsigned __int64 atomicAdd(unsigned __int64 *address, unsigned __int64 val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 191
{ } 
#endif
#line 193 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\device_atomic_functions.h"
static __inline unsigned __int64 atomicExch(unsigned __int64 *address, unsigned __int64 val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 193
{ } 
#endif
#line 195 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\device_atomic_functions.h"
static __inline unsigned __int64 atomicCAS(unsigned __int64 *address, unsigned __int64 compare, unsigned __int64 val) {int volatile ___ = 1;(void)address;(void)compare;(void)val;::exit(___);}
#if 0
#line 195
{ } 
#endif
#line 197 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\device_atomic_functions.h"
__declspec(deprecated("__any() is deprecated in favor of __any_sync() and may be removed in a future release (Use -Wno-deprecated-declarations to suppr" "ess this warning).")) static __inline bool any(bool cond) {int volatile ___ = 1;(void)cond;::exit(___);}
#if 0
#line 197
{ } 
#endif
#line 199 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\device_atomic_functions.h"
__declspec(deprecated("__all() is deprecated in favor of __all_sync() and may be removed in a future release (Use -Wno-deprecated-declarations to suppr" "ess this warning).")) static __inline bool all(bool cond) {int volatile ___ = 1;(void)cond;::exit(___);}
#if 0
#line 199
{ } 
#endif
#line 77 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\crt\\device_double_functions.h"
extern "C" {
#line 1129
}
#line 1137
static __inline double fma(double a, double b, double c, cudaRoundMode mode); 
#line 1139
static __inline double dmul(double a, double b, cudaRoundMode mode = cudaRoundNearest); 
#line 1141
static __inline double dadd(double a, double b, cudaRoundMode mode = cudaRoundNearest); 
#line 1143
static __inline double dsub(double a, double b, cudaRoundMode mode = cudaRoundNearest); 
#line 1145
static __inline int double2int(double a, cudaRoundMode mode = cudaRoundZero); 
#line 1147
static __inline unsigned double2uint(double a, cudaRoundMode mode = cudaRoundZero); 
#line 1149
static __inline __int64 double2ll(double a, cudaRoundMode mode = cudaRoundZero); 
#line 1151
static __inline unsigned __int64 double2ull(double a, cudaRoundMode mode = cudaRoundZero); 
#line 1153
static __inline double ll2double(__int64 a, cudaRoundMode mode = cudaRoundNearest); 
#line 1155
static __inline double ull2double(unsigned __int64 a, cudaRoundMode mode = cudaRoundNearest); 
#line 1157
static __inline double int2double(int a, cudaRoundMode mode = cudaRoundNearest); 
#line 1159
static __inline double uint2double(unsigned a, cudaRoundMode mode = cudaRoundNearest); 
#line 1161
static __inline double float2double(float a, cudaRoundMode mode = cudaRoundNearest); 
#line 83 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\crt\\device_double_functions.hpp"
static __inline double fma(double a, double b, double c, cudaRoundMode mode) 
#line 84
{int volatile ___ = 1;(void)a;(void)b;(void)c;(void)mode;
#line 89
::exit(___);}
#if 0
#line 84
{ 
#line 85
return (mode == (cudaRoundZero)) ? __fma_rz(a, b, c) : ((mode == (cudaRoundPosInf)) ? __fma_ru(a, b, c) : ((mode == (cudaRoundMinInf)) ? __fma_rd(a, b, c) : __fma_rn(a, b, c))); 
#line 89
} 
#endif
#line 91 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\crt\\device_double_functions.hpp"
static __inline double dmul(double a, double b, cudaRoundMode mode) 
#line 92
{int volatile ___ = 1;(void)a;(void)b;(void)mode;
#line 97
::exit(___);}
#if 0
#line 92
{ 
#line 93
return (mode == (cudaRoundZero)) ? __dmul_rz(a, b) : ((mode == (cudaRoundPosInf)) ? __dmul_ru(a, b) : ((mode == (cudaRoundMinInf)) ? __dmul_rd(a, b) : __dmul_rn(a, b))); 
#line 97
} 
#endif
#line 99 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\crt\\device_double_functions.hpp"
static __inline double dadd(double a, double b, cudaRoundMode mode) 
#line 100
{int volatile ___ = 1;(void)a;(void)b;(void)mode;
#line 105
::exit(___);}
#if 0
#line 100
{ 
#line 101
return (mode == (cudaRoundZero)) ? __dadd_rz(a, b) : ((mode == (cudaRoundPosInf)) ? __dadd_ru(a, b) : ((mode == (cudaRoundMinInf)) ? __dadd_rd(a, b) : __dadd_rn(a, b))); 
#line 105
} 
#endif
#line 107 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\crt\\device_double_functions.hpp"
static __inline double dsub(double a, double b, cudaRoundMode mode) 
#line 108
{int volatile ___ = 1;(void)a;(void)b;(void)mode;
#line 113
::exit(___);}
#if 0
#line 108
{ 
#line 109
return (mode == (cudaRoundZero)) ? __dsub_rz(a, b) : ((mode == (cudaRoundPosInf)) ? __dsub_ru(a, b) : ((mode == (cudaRoundMinInf)) ? __dsub_rd(a, b) : __dsub_rn(a, b))); 
#line 113
} 
#endif
#line 115 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\crt\\device_double_functions.hpp"
static __inline int double2int(double a, cudaRoundMode mode) 
#line 116
{int volatile ___ = 1;(void)a;(void)mode;
#line 121
::exit(___);}
#if 0
#line 116
{ 
#line 117
return (mode == (cudaRoundNearest)) ? __double2int_rn(a) : ((mode == (cudaRoundPosInf)) ? __double2int_ru(a) : ((mode == (cudaRoundMinInf)) ? __double2int_rd(a) : __double2int_rz(a))); 
#line 121
} 
#endif
#line 123 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\crt\\device_double_functions.hpp"
static __inline unsigned double2uint(double a, cudaRoundMode mode) 
#line 124
{int volatile ___ = 1;(void)a;(void)mode;
#line 129
::exit(___);}
#if 0
#line 124
{ 
#line 125
return (mode == (cudaRoundNearest)) ? __double2uint_rn(a) : ((mode == (cudaRoundPosInf)) ? __double2uint_ru(a) : ((mode == (cudaRoundMinInf)) ? __double2uint_rd(a) : __double2uint_rz(a))); 
#line 129
} 
#endif
#line 131 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\crt\\device_double_functions.hpp"
static __inline __int64 double2ll(double a, cudaRoundMode mode) 
#line 132
{int volatile ___ = 1;(void)a;(void)mode;
#line 137
::exit(___);}
#if 0
#line 132
{ 
#line 133
return (mode == (cudaRoundNearest)) ? __double2ll_rn(a) : ((mode == (cudaRoundPosInf)) ? __double2ll_ru(a) : ((mode == (cudaRoundMinInf)) ? __double2ll_rd(a) : __double2ll_rz(a))); 
#line 137
} 
#endif
#line 139 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\crt\\device_double_functions.hpp"
static __inline unsigned __int64 double2ull(double a, cudaRoundMode mode) 
#line 140
{int volatile ___ = 1;(void)a;(void)mode;
#line 145
::exit(___);}
#if 0
#line 140
{ 
#line 141
return (mode == (cudaRoundNearest)) ? __double2ull_rn(a) : ((mode == (cudaRoundPosInf)) ? __double2ull_ru(a) : ((mode == (cudaRoundMinInf)) ? __double2ull_rd(a) : __double2ull_rz(a))); 
#line 145
} 
#endif
#line 147 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\crt\\device_double_functions.hpp"
static __inline double ll2double(__int64 a, cudaRoundMode mode) 
#line 148
{int volatile ___ = 1;(void)a;(void)mode;
#line 153
::exit(___);}
#if 0
#line 148
{ 
#line 149
return (mode == (cudaRoundZero)) ? __ll2double_rz(a) : ((mode == (cudaRoundPosInf)) ? __ll2double_ru(a) : ((mode == (cudaRoundMinInf)) ? __ll2double_rd(a) : __ll2double_rn(a))); 
#line 153
} 
#endif
#line 155 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\crt\\device_double_functions.hpp"
static __inline double ull2double(unsigned __int64 a, cudaRoundMode mode) 
#line 156
{int volatile ___ = 1;(void)a;(void)mode;
#line 161
::exit(___);}
#if 0
#line 156
{ 
#line 157
return (mode == (cudaRoundZero)) ? __ull2double_rz(a) : ((mode == (cudaRoundPosInf)) ? __ull2double_ru(a) : ((mode == (cudaRoundMinInf)) ? __ull2double_rd(a) : __ull2double_rn(a))); 
#line 161
} 
#endif
#line 163 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\crt\\device_double_functions.hpp"
static __inline double int2double(int a, cudaRoundMode mode) 
#line 164
{int volatile ___ = 1;(void)a;(void)mode;
#line 166
::exit(___);}
#if 0
#line 164
{ 
#line 165
return (double)a; 
#line 166
} 
#endif
#line 168 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\crt\\device_double_functions.hpp"
static __inline double uint2double(unsigned a, cudaRoundMode mode) 
#line 169
{int volatile ___ = 1;(void)a;(void)mode;
#line 171
::exit(___);}
#if 0
#line 169
{ 
#line 170
return (double)a; 
#line 171
} 
#endif
#line 173 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\crt\\device_double_functions.hpp"
static __inline double float2double(float a, cudaRoundMode mode) 
#line 174
{int volatile ___ = 1;(void)a;(void)mode;
#line 176
::exit(___);}
#if 0
#line 174
{ 
#line 175
return (double)a; 
#line 176
} 
#endif
#line 90 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\sm_20_atomic_functions.h"
static __inline float atomicAdd(float *address, float val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 90
{ } 
#endif
#line 101 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\sm_32_atomic_functions.h"
static __inline __int64 atomicMin(__int64 *address, __int64 val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 101
{ } 
#endif
#line 103 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\sm_32_atomic_functions.h"
static __inline __int64 atomicMax(__int64 *address, __int64 val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 103
{ } 
#endif
#line 105 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\sm_32_atomic_functions.h"
static __inline __int64 atomicAnd(__int64 *address, __int64 val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 105
{ } 
#endif
#line 107 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\sm_32_atomic_functions.h"
static __inline __int64 atomicOr(__int64 *address, __int64 val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 107
{ } 
#endif
#line 109 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\sm_32_atomic_functions.h"
static __inline __int64 atomicXor(__int64 *address, __int64 val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 109
{ } 
#endif
#line 111 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\sm_32_atomic_functions.h"
static __inline unsigned __int64 atomicMin(unsigned __int64 *address, unsigned __int64 val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 111
{ } 
#endif
#line 113 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\sm_32_atomic_functions.h"
static __inline unsigned __int64 atomicMax(unsigned __int64 *address, unsigned __int64 val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 113
{ } 
#endif
#line 115 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\sm_32_atomic_functions.h"
static __inline unsigned __int64 atomicAnd(unsigned __int64 *address, unsigned __int64 val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 115
{ } 
#endif
#line 117 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\sm_32_atomic_functions.h"
static __inline unsigned __int64 atomicOr(unsigned __int64 *address, unsigned __int64 val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 117
{ } 
#endif
#line 119 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\sm_32_atomic_functions.h"
static __inline unsigned __int64 atomicXor(unsigned __int64 *address, unsigned __int64 val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 119
{ } 
#endif
#line 304 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\sm_60_atomic_functions.h"
static __inline double atomicAdd(double *address, double val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 304
{ } 
#endif
#line 307 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\sm_60_atomic_functions.h"
static __inline int atomicAdd_block(int *address, int val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 307
{ } 
#endif
#line 310 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\sm_60_atomic_functions.h"
static __inline int atomicAdd_system(int *address, int val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 310
{ } 
#endif
#line 313 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\sm_60_atomic_functions.h"
static __inline unsigned atomicAdd_block(unsigned *address, unsigned val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 313
{ } 
#endif
#line 316 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\sm_60_atomic_functions.h"
static __inline unsigned atomicAdd_system(unsigned *address, unsigned val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 316
{ } 
#endif
#line 319 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\sm_60_atomic_functions.h"
static __inline unsigned __int64 atomicAdd_block(unsigned __int64 *address, unsigned __int64 val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 319
{ } 
#endif
#line 322 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\sm_60_atomic_functions.h"
static __inline unsigned __int64 atomicAdd_system(unsigned __int64 *address, unsigned __int64 val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 322
{ } 
#endif
#line 325 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\sm_60_atomic_functions.h"
static __inline float atomicAdd_block(float *address, float val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 325
{ } 
#endif
#line 328 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\sm_60_atomic_functions.h"
static __inline float atomicAdd_system(float *address, float val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 328
{ } 
#endif
#line 331 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\sm_60_atomic_functions.h"
static __inline double atomicAdd_block(double *address, double val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 331
{ } 
#endif
#line 334 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\sm_60_atomic_functions.h"
static __inline double atomicAdd_system(double *address, double val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 334
{ } 
#endif
#line 337 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\sm_60_atomic_functions.h"
static __inline int atomicSub_block(int *address, int val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 337
{ } 
#endif
#line 340 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\sm_60_atomic_functions.h"
static __inline int atomicSub_system(int *address, int val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 340
{ } 
#endif
#line 343 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\sm_60_atomic_functions.h"
static __inline unsigned atomicSub_block(unsigned *address, unsigned val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 343
{ } 
#endif
#line 346 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\sm_60_atomic_functions.h"
static __inline unsigned atomicSub_system(unsigned *address, unsigned val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 346
{ } 
#endif
#line 349 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\sm_60_atomic_functions.h"
static __inline int atomicExch_block(int *address, int val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 349
{ } 
#endif
#line 352 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\sm_60_atomic_functions.h"
static __inline int atomicExch_system(int *address, int val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 352
{ } 
#endif
#line 355 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\sm_60_atomic_functions.h"
static __inline unsigned atomicExch_block(unsigned *address, unsigned val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 355
{ } 
#endif
#line 358 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\sm_60_atomic_functions.h"
static __inline unsigned atomicExch_system(unsigned *address, unsigned val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 358
{ } 
#endif
#line 361 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\sm_60_atomic_functions.h"
static __inline unsigned __int64 atomicExch_block(unsigned __int64 *address, unsigned __int64 val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 361
{ } 
#endif
#line 364 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\sm_60_atomic_functions.h"
static __inline unsigned __int64 atomicExch_system(unsigned __int64 *address, unsigned __int64 val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 364
{ } 
#endif
#line 367 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\sm_60_atomic_functions.h"
static __inline float atomicExch_block(float *address, float val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 367
{ } 
#endif
#line 370 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\sm_60_atomic_functions.h"
static __inline float atomicExch_system(float *address, float val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 370
{ } 
#endif
#line 373 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\sm_60_atomic_functions.h"
static __inline int atomicMin_block(int *address, int val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 373
{ } 
#endif
#line 376 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\sm_60_atomic_functions.h"
static __inline int atomicMin_system(int *address, int val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 376
{ } 
#endif
#line 379 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\sm_60_atomic_functions.h"
static __inline __int64 atomicMin_block(__int64 *address, __int64 val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 379
{ } 
#endif
#line 382 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\sm_60_atomic_functions.h"
static __inline __int64 atomicMin_system(__int64 *address, __int64 val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 382
{ } 
#endif
#line 385 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\sm_60_atomic_functions.h"
static __inline unsigned atomicMin_block(unsigned *address, unsigned val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 385
{ } 
#endif
#line 388 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\sm_60_atomic_functions.h"
static __inline unsigned atomicMin_system(unsigned *address, unsigned val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 388
{ } 
#endif
#line 391 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\sm_60_atomic_functions.h"
static __inline unsigned __int64 atomicMin_block(unsigned __int64 *address, unsigned __int64 val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 391
{ } 
#endif
#line 394 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\sm_60_atomic_functions.h"
static __inline unsigned __int64 atomicMin_system(unsigned __int64 *address, unsigned __int64 val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 394
{ } 
#endif
#line 397 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\sm_60_atomic_functions.h"
static __inline int atomicMax_block(int *address, int val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 397
{ } 
#endif
#line 400 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\sm_60_atomic_functions.h"
static __inline int atomicMax_system(int *address, int val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 400
{ } 
#endif
#line 403 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\sm_60_atomic_functions.h"
static __inline __int64 atomicMax_block(__int64 *address, __int64 val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 403
{ } 
#endif
#line 406 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\sm_60_atomic_functions.h"
static __inline __int64 atomicMax_system(__int64 *address, __int64 val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 406
{ } 
#endif
#line 409 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\sm_60_atomic_functions.h"
static __inline unsigned atomicMax_block(unsigned *address, unsigned val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 409
{ } 
#endif
#line 412 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\sm_60_atomic_functions.h"
static __inline unsigned atomicMax_system(unsigned *address, unsigned val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 412
{ } 
#endif
#line 415 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\sm_60_atomic_functions.h"
static __inline unsigned __int64 atomicMax_block(unsigned __int64 *address, unsigned __int64 val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 415
{ } 
#endif
#line 418 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\sm_60_atomic_functions.h"
static __inline unsigned __int64 atomicMax_system(unsigned __int64 *address, unsigned __int64 val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 418
{ } 
#endif
#line 421 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\sm_60_atomic_functions.h"
static __inline unsigned atomicInc_block(unsigned *address, unsigned val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 421
{ } 
#endif
#line 424 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\sm_60_atomic_functions.h"
static __inline unsigned atomicInc_system(unsigned *address, unsigned val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 424
{ } 
#endif
#line 427 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\sm_60_atomic_functions.h"
static __inline unsigned atomicDec_block(unsigned *address, unsigned val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 427
{ } 
#endif
#line 430 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\sm_60_atomic_functions.h"
static __inline unsigned atomicDec_system(unsigned *address, unsigned val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 430
{ } 
#endif
#line 433 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\sm_60_atomic_functions.h"
static __inline int atomicCAS_block(int *address, int compare, int val) {int volatile ___ = 1;(void)address;(void)compare;(void)val;::exit(___);}
#if 0
#line 433
{ } 
#endif
#line 436 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\sm_60_atomic_functions.h"
static __inline int atomicCAS_system(int *address, int compare, int val) {int volatile ___ = 1;(void)address;(void)compare;(void)val;::exit(___);}
#if 0
#line 436
{ } 
#endif
#line 439 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\sm_60_atomic_functions.h"
static __inline unsigned atomicCAS_block(unsigned *address, unsigned compare, unsigned 
#line 440
val) {int volatile ___ = 1;(void)address;(void)compare;(void)val;::exit(___);}
#if 0
#line 440
{ } 
#endif
#line 443 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\sm_60_atomic_functions.h"
static __inline unsigned atomicCAS_system(unsigned *address, unsigned compare, unsigned 
#line 444
val) {int volatile ___ = 1;(void)address;(void)compare;(void)val;::exit(___);}
#if 0
#line 444
{ } 
#endif
#line 447 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\sm_60_atomic_functions.h"
static __inline unsigned __int64 atomicCAS_block(unsigned __int64 *address, unsigned __int64 
#line 448
compare, unsigned __int64 
#line 449
val) {int volatile ___ = 1;(void)address;(void)compare;(void)val;::exit(___);}
#if 0
#line 449
{ } 
#endif
#line 452 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\sm_60_atomic_functions.h"
static __inline unsigned __int64 atomicCAS_system(unsigned __int64 *address, unsigned __int64 
#line 453
compare, unsigned __int64 
#line 454
val) {int volatile ___ = 1;(void)address;(void)compare;(void)val;::exit(___);}
#if 0
#line 454
{ } 
#endif
#line 457 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\sm_60_atomic_functions.h"
static __inline int atomicAnd_block(int *address, int val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 457
{ } 
#endif
#line 460 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\sm_60_atomic_functions.h"
static __inline int atomicAnd_system(int *address, int val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 460
{ } 
#endif
#line 463 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\sm_60_atomic_functions.h"
static __inline __int64 atomicAnd_block(__int64 *address, __int64 val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 463
{ } 
#endif
#line 466 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\sm_60_atomic_functions.h"
static __inline __int64 atomicAnd_system(__int64 *address, __int64 val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 466
{ } 
#endif
#line 469 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\sm_60_atomic_functions.h"
static __inline unsigned atomicAnd_block(unsigned *address, unsigned val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 469
{ } 
#endif
#line 472 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\sm_60_atomic_functions.h"
static __inline unsigned atomicAnd_system(unsigned *address, unsigned val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 472
{ } 
#endif
#line 475 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\sm_60_atomic_functions.h"
static __inline unsigned __int64 atomicAnd_block(unsigned __int64 *address, unsigned __int64 val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 475
{ } 
#endif
#line 478 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\sm_60_atomic_functions.h"
static __inline unsigned __int64 atomicAnd_system(unsigned __int64 *address, unsigned __int64 val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 478
{ } 
#endif
#line 481 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\sm_60_atomic_functions.h"
static __inline int atomicOr_block(int *address, int val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 481
{ } 
#endif
#line 484 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\sm_60_atomic_functions.h"
static __inline int atomicOr_system(int *address, int val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 484
{ } 
#endif
#line 487 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\sm_60_atomic_functions.h"
static __inline __int64 atomicOr_block(__int64 *address, __int64 val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 487
{ } 
#endif
#line 490 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\sm_60_atomic_functions.h"
static __inline __int64 atomicOr_system(__int64 *address, __int64 val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 490
{ } 
#endif
#line 493 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\sm_60_atomic_functions.h"
static __inline unsigned atomicOr_block(unsigned *address, unsigned val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 493
{ } 
#endif
#line 496 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\sm_60_atomic_functions.h"
static __inline unsigned atomicOr_system(unsigned *address, unsigned val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 496
{ } 
#endif
#line 499 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\sm_60_atomic_functions.h"
static __inline unsigned __int64 atomicOr_block(unsigned __int64 *address, unsigned __int64 val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 499
{ } 
#endif
#line 502 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\sm_60_atomic_functions.h"
static __inline unsigned __int64 atomicOr_system(unsigned __int64 *address, unsigned __int64 val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 502
{ } 
#endif
#line 505 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\sm_60_atomic_functions.h"
static __inline int atomicXor_block(int *address, int val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 505
{ } 
#endif
#line 508 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\sm_60_atomic_functions.h"
static __inline int atomicXor_system(int *address, int val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 508
{ } 
#endif
#line 511 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\sm_60_atomic_functions.h"
static __inline __int64 atomicXor_block(__int64 *address, __int64 val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 511
{ } 
#endif
#line 514 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\sm_60_atomic_functions.h"
static __inline __int64 atomicXor_system(__int64 *address, __int64 val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 514
{ } 
#endif
#line 517 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\sm_60_atomic_functions.h"
static __inline unsigned atomicXor_block(unsigned *address, unsigned val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 517
{ } 
#endif
#line 520 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\sm_60_atomic_functions.h"
static __inline unsigned atomicXor_system(unsigned *address, unsigned val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 520
{ } 
#endif
#line 523 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\sm_60_atomic_functions.h"
static __inline unsigned __int64 atomicXor_block(unsigned __int64 *address, unsigned __int64 val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 523
{ } 
#endif
#line 526 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\sm_60_atomic_functions.h"
static __inline unsigned __int64 atomicXor_system(unsigned __int64 *address, unsigned __int64 val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 526
{ } 
#endif
#line 92 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\sm_20_intrinsics.h"
extern "C" {
#line 1477
}
#line 1484
__declspec(deprecated("__ballot() is deprecated in favor of __ballot_sync() and may be removed in a future release (Use -Wno-deprecated-declarations to" " suppress this warning).")) static __inline unsigned ballot(bool pred) {int volatile ___ = 1;(void)pred;::exit(___);}
#if 0
#line 1484
{ } 
#endif
#line 1486 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\sm_20_intrinsics.h"
static __inline int syncthreads_count(bool pred) {int volatile ___ = 1;(void)pred;::exit(___);}
#if 0
#line 1486
{ } 
#endif
#line 1488 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\sm_20_intrinsics.h"
static __inline bool syncthreads_and(bool pred) {int volatile ___ = 1;(void)pred;::exit(___);}
#if 0
#line 1488
{ } 
#endif
#line 1490 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\sm_20_intrinsics.h"
static __inline bool syncthreads_or(bool pred) {int volatile ___ = 1;(void)pred;::exit(___);}
#if 0
#line 1490
{ } 
#endif
#line 1497 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\sm_20_intrinsics.h"
static __inline unsigned __isGlobal(const void *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 1497
{ } 
#endif
#line 107 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\sm_30_intrinsics.h"
static __inline unsigned __fns(unsigned mask, unsigned base, int offset) {int volatile ___ = 1;(void)mask;(void)base;(void)offset;::exit(___);}
#if 0
#line 107
{ } 
#endif
#line 108 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\sm_30_intrinsics.h"
static __inline void __barrier_sync(unsigned id) {int volatile ___ = 1;(void)id;::exit(___);}
#if 0
#line 108
{ } 
#endif
#line 109 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\sm_30_intrinsics.h"
static __inline void __barrier_sync_count(unsigned id, unsigned cnt) {int volatile ___ = 1;(void)id;(void)cnt;::exit(___);}
#if 0
#line 109
{ } 
#endif
#line 110 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\sm_30_intrinsics.h"
static __inline void __syncwarp(unsigned mask = 4294967295U) {int volatile ___ = 1;(void)mask;::exit(___);}
#if 0
#line 110
{ } 
#endif
#line 111 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\sm_30_intrinsics.h"
static __inline int __all_sync(unsigned mask, int pred) {int volatile ___ = 1;(void)mask;(void)pred;::exit(___);}
#if 0
#line 111
{ } 
#endif
#line 112 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\sm_30_intrinsics.h"
static __inline int __any_sync(unsigned mask, int pred) {int volatile ___ = 1;(void)mask;(void)pred;::exit(___);}
#if 0
#line 112
{ } 
#endif
#line 113 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\sm_30_intrinsics.h"
static __inline int __uni_sync(unsigned mask, int pred) {int volatile ___ = 1;(void)mask;(void)pred;::exit(___);}
#if 0
#line 113
{ } 
#endif
#line 114 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\sm_30_intrinsics.h"
static __inline unsigned __ballot_sync(unsigned mask, int pred) {int volatile ___ = 1;(void)mask;(void)pred;::exit(___);}
#if 0
#line 114
{ } 
#endif
#line 115 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\sm_30_intrinsics.h"
static __inline unsigned __activemask() {int volatile ___ = 1;::exit(___);}
#if 0
#line 115
{ } 
#endif
#line 123 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\sm_30_intrinsics.h"
__declspec(deprecated("__shfl() is deprecated in favor of __shfl_sync() and may be removed in a future release (Use -Wno-deprecated-declarations to sup" "press this warning).")) static __inline int __shfl(int var, int srcLane, int width = 32) {int volatile ___ = 1;(void)var;(void)srcLane;(void)width;::exit(___);}
#if 0
#line 123
{ } 
#endif
#line 124 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\sm_30_intrinsics.h"
static __inline int __shfl_sync(unsigned mask, int var, int srcLane, int width = 32) {int volatile ___ = 1;(void)mask;(void)var;(void)srcLane;(void)width;::exit(___);}
#if 0
#line 124
{ } 
#endif
#line 126 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\sm_30_intrinsics.h"
__declspec(deprecated("__shfl() is deprecated in favor of __shfl_sync() and may be removed in a future release (Use -Wno-deprecated-declarations to sup" "press this warning).")) static __inline unsigned __shfl(unsigned var, int srcLane, int width = 32) {int volatile ___ = 1;(void)var;(void)srcLane;(void)width;::exit(___);}
#if 0
#line 126
{ } 
#endif
#line 127 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\sm_30_intrinsics.h"
static __inline unsigned __shfl_sync(unsigned mask, unsigned var, int srcLane, int width = 32) {int volatile ___ = 1;(void)mask;(void)var;(void)srcLane;(void)width;::exit(___);}
#if 0
#line 127
{ } 
#endif
#line 129 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\sm_30_intrinsics.h"
__declspec(deprecated("__shfl_up() is deprecated in favor of __shfl_up_sync() and may be removed in a future release (Use -Wno-deprecated-declarations " "to suppress this warning).")) static __inline int __shfl_up(int var, unsigned delta, int width = 32) {int volatile ___ = 1;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
#line 129
{ } 
#endif
#line 130 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\sm_30_intrinsics.h"
static __inline int __shfl_up_sync(unsigned mask, int var, unsigned delta, int width = 32) {int volatile ___ = 1;(void)mask;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
#line 130
{ } 
#endif
#line 132 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\sm_30_intrinsics.h"
__declspec(deprecated("__shfl_up() is deprecated in favor of __shfl_up_sync() and may be removed in a future release (Use -Wno-deprecated-declarations " "to suppress this warning).")) static __inline unsigned __shfl_up(unsigned var, unsigned delta, int width = 32) {int volatile ___ = 1;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
#line 132
{ } 
#endif
#line 133 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\sm_30_intrinsics.h"
static __inline unsigned __shfl_up_sync(unsigned mask, unsigned var, unsigned delta, int width = 32) {int volatile ___ = 1;(void)mask;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
#line 133
{ } 
#endif
#line 135 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\sm_30_intrinsics.h"
__declspec(deprecated("__shfl_down() is deprecated in favor of __shfl_down_sync() and may be removed in a future release (Use -Wno-deprecated-declarati" "ons to suppress this warning).")) static __inline int __shfl_down(int var, unsigned delta, int width = 32) {int volatile ___ = 1;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
#line 135
{ } 
#endif
#line 136 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\sm_30_intrinsics.h"
static __inline int __shfl_down_sync(unsigned mask, int var, unsigned delta, int width = 32) {int volatile ___ = 1;(void)mask;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
#line 136
{ } 
#endif
#line 138 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\sm_30_intrinsics.h"
__declspec(deprecated("__shfl_down() is deprecated in favor of __shfl_down_sync() and may be removed in a future release (Use -Wno-deprecated-declarati" "ons to suppress this warning).")) static __inline unsigned __shfl_down(unsigned var, unsigned delta, int width = 32) {int volatile ___ = 1;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
#line 138
{ } 
#endif
#line 139 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\sm_30_intrinsics.h"
static __inline unsigned __shfl_down_sync(unsigned mask, unsigned var, unsigned delta, int width = 32) {int volatile ___ = 1;(void)mask;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
#line 139
{ } 
#endif
#line 141 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\sm_30_intrinsics.h"
__declspec(deprecated("__shfl_xor() is deprecated in favor of __shfl_xor_sync() and may be removed in a future release (Use -Wno-deprecated-declaration" "s to suppress this warning).")) static __inline int __shfl_xor(int var, int laneMask, int width = 32) {int volatile ___ = 1;(void)var;(void)laneMask;(void)width;::exit(___);}
#if 0
#line 141
{ } 
#endif
#line 142 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\sm_30_intrinsics.h"
static __inline int __shfl_xor_sync(unsigned mask, int var, int laneMask, int width = 32) {int volatile ___ = 1;(void)mask;(void)var;(void)laneMask;(void)width;::exit(___);}
#if 0
#line 142
{ } 
#endif
#line 144 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\sm_30_intrinsics.h"
__declspec(deprecated("__shfl_xor() is deprecated in favor of __shfl_xor_sync() and may be removed in a future release (Use -Wno-deprecated-declaration" "s to suppress this warning).")) static __inline unsigned __shfl_xor(unsigned var, int laneMask, int width = 32) {int volatile ___ = 1;(void)var;(void)laneMask;(void)width;::exit(___);}
#if 0
#line 144
{ } 
#endif
#line 145 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\sm_30_intrinsics.h"
static __inline unsigned __shfl_xor_sync(unsigned mask, unsigned var, int laneMask, int width = 32) {int volatile ___ = 1;(void)mask;(void)var;(void)laneMask;(void)width;::exit(___);}
#if 0
#line 145
{ } 
#endif
#line 147 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\sm_30_intrinsics.h"
__declspec(deprecated("__shfl() is deprecated in favor of __shfl_sync() and may be removed in a future release (Use -Wno-deprecated-declarations to sup" "press this warning).")) static __inline float __shfl(float var, int srcLane, int width = 32) {int volatile ___ = 1;(void)var;(void)srcLane;(void)width;::exit(___);}
#if 0
#line 147
{ } 
#endif
#line 148 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\sm_30_intrinsics.h"
static __inline float __shfl_sync(unsigned mask, float var, int srcLane, int width = 32) {int volatile ___ = 1;(void)mask;(void)var;(void)srcLane;(void)width;::exit(___);}
#if 0
#line 148
{ } 
#endif
#line 150 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\sm_30_intrinsics.h"
__declspec(deprecated("__shfl_up() is deprecated in favor of __shfl_up_sync() and may be removed in a future release (Use -Wno-deprecated-declarations " "to suppress this warning).")) static __inline float __shfl_up(float var, unsigned delta, int width = 32) {int volatile ___ = 1;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
#line 150
{ } 
#endif
#line 151 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\sm_30_intrinsics.h"
static __inline float __shfl_up_sync(unsigned mask, float var, unsigned delta, int width = 32) {int volatile ___ = 1;(void)mask;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
#line 151
{ } 
#endif
#line 153 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\sm_30_intrinsics.h"
__declspec(deprecated("__shfl_down() is deprecated in favor of __shfl_down_sync() and may be removed in a future release (Use -Wno-deprecated-declarati" "ons to suppress this warning).")) static __inline float __shfl_down(float var, unsigned delta, int width = 32) {int volatile ___ = 1;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
#line 153
{ } 
#endif
#line 154 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\sm_30_intrinsics.h"
static __inline float __shfl_down_sync(unsigned mask, float var, unsigned delta, int width = 32) {int volatile ___ = 1;(void)mask;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
#line 154
{ } 
#endif
#line 156 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\sm_30_intrinsics.h"
__declspec(deprecated("__shfl_xor() is deprecated in favor of __shfl_xor_sync() and may be removed in a future release (Use -Wno-deprecated-declaration" "s to suppress this warning).")) static __inline float __shfl_xor(float var, int laneMask, int width = 32) {int volatile ___ = 1;(void)var;(void)laneMask;(void)width;::exit(___);}
#if 0
#line 156
{ } 
#endif
#line 157 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\sm_30_intrinsics.h"
static __inline float __shfl_xor_sync(unsigned mask, float var, int laneMask, int width = 32) {int volatile ___ = 1;(void)mask;(void)var;(void)laneMask;(void)width;::exit(___);}
#if 0
#line 157
{ } 
#endif
#line 160 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\sm_30_intrinsics.h"
__declspec(deprecated("__shfl() is deprecated in favor of __shfl_sync() and may be removed in a future release (Use -Wno-deprecated-declarations to sup" "press this warning).")) static __inline __int64 __shfl(__int64 var, int srcLane, int width = 32) {int volatile ___ = 1;(void)var;(void)srcLane;(void)width;::exit(___);}
#if 0
#line 160
{ } 
#endif
#line 161 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\sm_30_intrinsics.h"
static __inline __int64 __shfl_sync(unsigned mask, __int64 var, int srcLane, int width = 32) {int volatile ___ = 1;(void)mask;(void)var;(void)srcLane;(void)width;::exit(___);}
#if 0
#line 161
{ } 
#endif
#line 163 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\sm_30_intrinsics.h"
__declspec(deprecated("__shfl() is deprecated in favor of __shfl_sync() and may be removed in a future release (Use -Wno-deprecated-declarations to sup" "press this warning).")) static __inline unsigned __int64 __shfl(unsigned __int64 var, int srcLane, int width = 32) {int volatile ___ = 1;(void)var;(void)srcLane;(void)width;::exit(___);}
#if 0
#line 163
{ } 
#endif
#line 164 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\sm_30_intrinsics.h"
static __inline unsigned __int64 __shfl_sync(unsigned mask, unsigned __int64 var, int srcLane, int width = 32) {int volatile ___ = 1;(void)mask;(void)var;(void)srcLane;(void)width;::exit(___);}
#if 0
#line 164
{ } 
#endif
#line 166 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\sm_30_intrinsics.h"
__declspec(deprecated("__shfl_up() is deprecated in favor of __shfl_up_sync() and may be removed in a future release (Use -Wno-deprecated-declarations " "to suppress this warning).")) static __inline __int64 __shfl_up(__int64 var, unsigned delta, int width = 32) {int volatile ___ = 1;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
#line 166
{ } 
#endif
#line 167 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\sm_30_intrinsics.h"
static __inline __int64 __shfl_up_sync(unsigned mask, __int64 var, unsigned delta, int width = 32) {int volatile ___ = 1;(void)mask;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
#line 167
{ } 
#endif
#line 169 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\sm_30_intrinsics.h"
__declspec(deprecated("__shfl_up() is deprecated in favor of __shfl_up_sync() and may be removed in a future release (Use -Wno-deprecated-declarations " "to suppress this warning).")) static __inline unsigned __int64 __shfl_up(unsigned __int64 var, unsigned delta, int width = 32) {int volatile ___ = 1;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
#line 169
{ } 
#endif
#line 170 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\sm_30_intrinsics.h"
static __inline unsigned __int64 __shfl_up_sync(unsigned mask, unsigned __int64 var, unsigned delta, int width = 32) {int volatile ___ = 1;(void)mask;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
#line 170
{ } 
#endif
#line 172 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\sm_30_intrinsics.h"
__declspec(deprecated("__shfl_down() is deprecated in favor of __shfl_down_sync() and may be removed in a future release (Use -Wno-deprecated-declarati" "ons to suppress this warning).")) static __inline __int64 __shfl_down(__int64 var, unsigned delta, int width = 32) {int volatile ___ = 1;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
#line 172
{ } 
#endif
#line 173 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\sm_30_intrinsics.h"
static __inline __int64 __shfl_down_sync(unsigned mask, __int64 var, unsigned delta, int width = 32) {int volatile ___ = 1;(void)mask;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
#line 173
{ } 
#endif
#line 175 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\sm_30_intrinsics.h"
__declspec(deprecated("__shfl_down() is deprecated in favor of __shfl_down_sync() and may be removed in a future release (Use -Wno-deprecated-declarati" "ons to suppress this warning).")) static __inline unsigned __int64 __shfl_down(unsigned __int64 var, unsigned delta, int width = 32) {int volatile ___ = 1;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
#line 175
{ } 
#endif
#line 176 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\sm_30_intrinsics.h"
static __inline unsigned __int64 __shfl_down_sync(unsigned mask, unsigned __int64 var, unsigned delta, int width = 32) {int volatile ___ = 1;(void)mask;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
#line 176
{ } 
#endif
#line 178 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\sm_30_intrinsics.h"
__declspec(deprecated("__shfl_xor() is deprecated in favor of __shfl_xor_sync() and may be removed in a future release (Use -Wno-deprecated-declaration" "s to suppress this warning).")) static __inline __int64 __shfl_xor(__int64 var, int laneMask, int width = 32) {int volatile ___ = 1;(void)var;(void)laneMask;(void)width;::exit(___);}
#if 0
#line 178
{ } 
#endif
#line 179 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\sm_30_intrinsics.h"
static __inline __int64 __shfl_xor_sync(unsigned mask, __int64 var, int laneMask, int width = 32) {int volatile ___ = 1;(void)mask;(void)var;(void)laneMask;(void)width;::exit(___);}
#if 0
#line 179
{ } 
#endif
#line 181 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\sm_30_intrinsics.h"
__declspec(deprecated("__shfl_xor() is deprecated in favor of __shfl_xor_sync() and may be removed in a future release (Use -Wno-deprecated-declaration" "s to suppress this warning).")) static __inline unsigned __int64 __shfl_xor(unsigned __int64 var, int laneMask, int width = 32) {int volatile ___ = 1;(void)var;(void)laneMask;(void)width;::exit(___);}
#if 0
#line 181
{ } 
#endif
#line 182 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\sm_30_intrinsics.h"
static __inline unsigned __int64 __shfl_xor_sync(unsigned mask, unsigned __int64 var, int laneMask, int width = 32) {int volatile ___ = 1;(void)mask;(void)var;(void)laneMask;(void)width;::exit(___);}
#if 0
#line 182
{ } 
#endif
#line 184 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\sm_30_intrinsics.h"
__declspec(deprecated("__shfl() is deprecated in favor of __shfl_sync() and may be removed in a future release (Use -Wno-deprecated-declarations to sup" "press this warning).")) static __inline double __shfl(double var, int srcLane, int width = 32) {int volatile ___ = 1;(void)var;(void)srcLane;(void)width;::exit(___);}
#if 0
#line 184
{ } 
#endif
#line 185 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\sm_30_intrinsics.h"
static __inline double __shfl_sync(unsigned mask, double var, int srcLane, int width = 32) {int volatile ___ = 1;(void)mask;(void)var;(void)srcLane;(void)width;::exit(___);}
#if 0
#line 185
{ } 
#endif
#line 187 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\sm_30_intrinsics.h"
__declspec(deprecated("__shfl_up() is deprecated in favor of __shfl_up_sync() and may be removed in a future release (Use -Wno-deprecated-declarations " "to suppress this warning).")) static __inline double __shfl_up(double var, unsigned delta, int width = 32) {int volatile ___ = 1;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
#line 187
{ } 
#endif
#line 188 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\sm_30_intrinsics.h"
static __inline double __shfl_up_sync(unsigned mask, double var, unsigned delta, int width = 32) {int volatile ___ = 1;(void)mask;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
#line 188
{ } 
#endif
#line 190 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\sm_30_intrinsics.h"
__declspec(deprecated("__shfl_down() is deprecated in favor of __shfl_down_sync() and may be removed in a future release (Use -Wno-deprecated-declarati" "ons to suppress this warning).")) static __inline double __shfl_down(double var, unsigned delta, int width = 32) {int volatile ___ = 1;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
#line 190
{ } 
#endif
#line 191 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\sm_30_intrinsics.h"
static __inline double __shfl_down_sync(unsigned mask, double var, unsigned delta, int width = 32) {int volatile ___ = 1;(void)mask;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
#line 191
{ } 
#endif
#line 193 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\sm_30_intrinsics.h"
__declspec(deprecated("__shfl_xor() is deprecated in favor of __shfl_xor_sync() and may be removed in a future release (Use -Wno-deprecated-declaration" "s to suppress this warning).")) static __inline double __shfl_xor(double var, int laneMask, int width = 32) {int volatile ___ = 1;(void)var;(void)laneMask;(void)width;::exit(___);}
#if 0
#line 193
{ } 
#endif
#line 194 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\sm_30_intrinsics.h"
static __inline double __shfl_xor_sync(unsigned mask, double var, int laneMask, int width = 32) {int volatile ___ = 1;(void)mask;(void)var;(void)laneMask;(void)width;::exit(___);}
#if 0
#line 194
{ } 
#endif
#line 198 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\sm_30_intrinsics.h"
__declspec(deprecated("__shfl() is deprecated in favor of __shfl_sync() and may be removed in a future release (Use -Wno-deprecated-declarations to sup" "press this warning).")) static __inline long __shfl(long var, int srcLane, int width = 32) {int volatile ___ = 1;(void)var;(void)srcLane;(void)width;::exit(___);}
#if 0
#line 198
{ } 
#endif
#line 199 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\sm_30_intrinsics.h"
static __inline long __shfl_sync(unsigned mask, long var, int srcLane, int width = 32) {int volatile ___ = 1;(void)mask;(void)var;(void)srcLane;(void)width;::exit(___);}
#if 0
#line 199
{ } 
#endif
#line 201 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\sm_30_intrinsics.h"
__declspec(deprecated("__shfl() is deprecated in favor of __shfl_sync() and may be removed in a future release (Use -Wno-deprecated-declarations to sup" "press this warning).")) static __inline unsigned long __shfl(unsigned long var, int srcLane, int width = 32) {int volatile ___ = 1;(void)var;(void)srcLane;(void)width;::exit(___);}
#if 0
#line 201
{ } 
#endif
#line 202 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\sm_30_intrinsics.h"
static __inline unsigned long __shfl_sync(unsigned mask, unsigned long var, int srcLane, int width = 32) {int volatile ___ = 1;(void)mask;(void)var;(void)srcLane;(void)width;::exit(___);}
#if 0
#line 202
{ } 
#endif
#line 204 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\sm_30_intrinsics.h"
__declspec(deprecated("__shfl_up() is deprecated in favor of __shfl_up_sync() and may be removed in a future release (Use -Wno-deprecated-declarations " "to suppress this warning).")) static __inline long __shfl_up(long var, unsigned delta, int width = 32) {int volatile ___ = 1;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
#line 204
{ } 
#endif
#line 205 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\sm_30_intrinsics.h"
static __inline long __shfl_up_sync(unsigned mask, long var, unsigned delta, int width = 32) {int volatile ___ = 1;(void)mask;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
#line 205
{ } 
#endif
#line 207 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\sm_30_intrinsics.h"
__declspec(deprecated("__shfl_up() is deprecated in favor of __shfl_up_sync() and may be removed in a future release (Use -Wno-deprecated-declarations " "to suppress this warning).")) static __inline unsigned long __shfl_up(unsigned long var, unsigned delta, int width = 32) {int volatile ___ = 1;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
#line 207
{ } 
#endif
#line 208 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\sm_30_intrinsics.h"
static __inline unsigned long __shfl_up_sync(unsigned mask, unsigned long var, unsigned delta, int width = 32) {int volatile ___ = 1;(void)mask;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
#line 208
{ } 
#endif
#line 210 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\sm_30_intrinsics.h"
__declspec(deprecated("__shfl_down() is deprecated in favor of __shfl_down_sync() and may be removed in a future release (Use -Wno-deprecated-declarati" "ons to suppress this warning).")) static __inline long __shfl_down(long var, unsigned delta, int width = 32) {int volatile ___ = 1;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
#line 210
{ } 
#endif
#line 211 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\sm_30_intrinsics.h"
static __inline long __shfl_down_sync(unsigned mask, long var, unsigned delta, int width = 32) {int volatile ___ = 1;(void)mask;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
#line 211
{ } 
#endif
#line 213 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\sm_30_intrinsics.h"
__declspec(deprecated("__shfl_down() is deprecated in favor of __shfl_down_sync() and may be removed in a future release (Use -Wno-deprecated-declarati" "ons to suppress this warning).")) static __inline unsigned long __shfl_down(unsigned long var, unsigned delta, int width = 32) {int volatile ___ = 1;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
#line 213
{ } 
#endif
#line 214 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\sm_30_intrinsics.h"
static __inline unsigned long __shfl_down_sync(unsigned mask, unsigned long var, unsigned delta, int width = 32) {int volatile ___ = 1;(void)mask;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
#line 214
{ } 
#endif
#line 216 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\sm_30_intrinsics.h"
__declspec(deprecated("__shfl_xor() is deprecated in favor of __shfl_xor_sync() and may be removed in a future release (Use -Wno-deprecated-declaration" "s to suppress this warning).")) static __inline long __shfl_xor(long var, int laneMask, int width = 32) {int volatile ___ = 1;(void)var;(void)laneMask;(void)width;::exit(___);}
#if 0
#line 216
{ } 
#endif
#line 217 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\sm_30_intrinsics.h"
static __inline long __shfl_xor_sync(unsigned mask, long var, int laneMask, int width = 32) {int volatile ___ = 1;(void)mask;(void)var;(void)laneMask;(void)width;::exit(___);}
#if 0
#line 217
{ } 
#endif
#line 219 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\sm_30_intrinsics.h"
__declspec(deprecated("__shfl_xor() is deprecated in favor of __shfl_xor_sync() and may be removed in a future release (Use -Wno-deprecated-declaration" "s to suppress this warning).")) static __inline unsigned long __shfl_xor(unsigned long var, int laneMask, int width = 32) {int volatile ___ = 1;(void)var;(void)laneMask;(void)width;::exit(___);}
#if 0
#line 219
{ } 
#endif
#line 220 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\sm_30_intrinsics.h"
static __inline unsigned long __shfl_xor_sync(unsigned mask, unsigned long var, int laneMask, int width = 32) {int volatile ___ = 1;(void)mask;(void)var;(void)laneMask;(void)width;::exit(___);}
#if 0
#line 220
{ } 
#endif
#line 89 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\sm_32_intrinsics.h"
static __inline long __ldg(const long *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 89
{ } 
#endif
#line 90 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\sm_32_intrinsics.h"
static __inline unsigned long __ldg(const unsigned long *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 90
{ } 
#endif
#line 92 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\sm_32_intrinsics.h"
static __inline char __ldg(const char *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 92
{ } 
#endif
#line 93 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\sm_32_intrinsics.h"
static __inline signed char __ldg(const signed char *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 93
{ } 
#endif
#line 94 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\sm_32_intrinsics.h"
static __inline short __ldg(const short *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 94
{ } 
#endif
#line 95 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\sm_32_intrinsics.h"
static __inline int __ldg(const int *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 95
{ } 
#endif
#line 96 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\sm_32_intrinsics.h"
static __inline __int64 __ldg(const __int64 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 96
{ } 
#endif
#line 97 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\sm_32_intrinsics.h"
static __inline char2 __ldg(const char2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 97
{ } 
#endif
#line 98 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\sm_32_intrinsics.h"
static __inline char4 __ldg(const char4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 98
{ } 
#endif
#line 99 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\sm_32_intrinsics.h"
static __inline short2 __ldg(const short2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 99
{ } 
#endif
#line 100 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\sm_32_intrinsics.h"
static __inline short4 __ldg(const short4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 100
{ } 
#endif
#line 101 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\sm_32_intrinsics.h"
static __inline int2 __ldg(const int2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 101
{ } 
#endif
#line 102 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\sm_32_intrinsics.h"
static __inline int4 __ldg(const int4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 102
{ } 
#endif
#line 103 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\sm_32_intrinsics.h"
static __inline longlong2 __ldg(const longlong2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 103
{ } 
#endif
#line 105 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\sm_32_intrinsics.h"
static __inline unsigned char __ldg(const unsigned char *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 105
{ } 
#endif
#line 106 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\sm_32_intrinsics.h"
static __inline unsigned short __ldg(const unsigned short *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 106
{ } 
#endif
#line 107 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\sm_32_intrinsics.h"
static __inline unsigned __ldg(const unsigned *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 107
{ } 
#endif
#line 108 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\sm_32_intrinsics.h"
static __inline unsigned __int64 __ldg(const unsigned __int64 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 108
{ } 
#endif
#line 109 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\sm_32_intrinsics.h"
static __inline uchar2 __ldg(const uchar2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 109
{ } 
#endif
#line 110 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\sm_32_intrinsics.h"
static __inline uchar4 __ldg(const uchar4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 110
{ } 
#endif
#line 111 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\sm_32_intrinsics.h"
static __inline ushort2 __ldg(const ushort2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 111
{ } 
#endif
#line 112 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\sm_32_intrinsics.h"
static __inline ushort4 __ldg(const ushort4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 112
{ } 
#endif
#line 113 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\sm_32_intrinsics.h"
static __inline uint2 __ldg(const uint2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 113
{ } 
#endif
#line 114 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\sm_32_intrinsics.h"
static __inline uint4 __ldg(const uint4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 114
{ } 
#endif
#line 115 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\sm_32_intrinsics.h"
static __inline ulonglong2 __ldg(const ulonglong2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 115
{ } 
#endif
#line 117 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\sm_32_intrinsics.h"
static __inline float __ldg(const float *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 117
{ } 
#endif
#line 118 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\sm_32_intrinsics.h"
static __inline double __ldg(const double *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 118
{ } 
#endif
#line 119 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\sm_32_intrinsics.h"
static __inline float2 __ldg(const float2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 119
{ } 
#endif
#line 120 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\sm_32_intrinsics.h"
static __inline float4 __ldg(const float4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 120
{ } 
#endif
#line 121 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\sm_32_intrinsics.h"
static __inline double2 __ldg(const double2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 121
{ } 
#endif
#line 125 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\sm_32_intrinsics.h"
static __inline long __ldcg(const long *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 125
{ } 
#endif
#line 126 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\sm_32_intrinsics.h"
static __inline unsigned long __ldcg(const unsigned long *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 126
{ } 
#endif
#line 128 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\sm_32_intrinsics.h"
static __inline char __ldcg(const char *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 128
{ } 
#endif
#line 129 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\sm_32_intrinsics.h"
static __inline signed char __ldcg(const signed char *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 129
{ } 
#endif
#line 130 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\sm_32_intrinsics.h"
static __inline short __ldcg(const short *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 130
{ } 
#endif
#line 131 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\sm_32_intrinsics.h"
static __inline int __ldcg(const int *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 131
{ } 
#endif
#line 132 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\sm_32_intrinsics.h"
static __inline __int64 __ldcg(const __int64 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 132
{ } 
#endif
#line 133 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\sm_32_intrinsics.h"
static __inline char2 __ldcg(const char2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 133
{ } 
#endif
#line 134 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\sm_32_intrinsics.h"
static __inline char4 __ldcg(const char4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 134
{ } 
#endif
#line 135 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\sm_32_intrinsics.h"
static __inline short2 __ldcg(const short2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 135
{ } 
#endif
#line 136 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\sm_32_intrinsics.h"
static __inline short4 __ldcg(const short4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 136
{ } 
#endif
#line 137 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\sm_32_intrinsics.h"
static __inline int2 __ldcg(const int2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 137
{ } 
#endif
#line 138 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\sm_32_intrinsics.h"
static __inline int4 __ldcg(const int4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 138
{ } 
#endif
#line 139 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\sm_32_intrinsics.h"
static __inline longlong2 __ldcg(const longlong2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 139
{ } 
#endif
#line 141 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\sm_32_intrinsics.h"
static __inline unsigned char __ldcg(const unsigned char *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 141
{ } 
#endif
#line 142 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\sm_32_intrinsics.h"
static __inline unsigned short __ldcg(const unsigned short *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 142
{ } 
#endif
#line 143 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\sm_32_intrinsics.h"
static __inline unsigned __ldcg(const unsigned *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 143
{ } 
#endif
#line 144 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\sm_32_intrinsics.h"
static __inline unsigned __int64 __ldcg(const unsigned __int64 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 144
{ } 
#endif
#line 145 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\sm_32_intrinsics.h"
static __inline uchar2 __ldcg(const uchar2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 145
{ } 
#endif
#line 146 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\sm_32_intrinsics.h"
static __inline uchar4 __ldcg(const uchar4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 146
{ } 
#endif
#line 147 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\sm_32_intrinsics.h"
static __inline ushort2 __ldcg(const ushort2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 147
{ } 
#endif
#line 148 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\sm_32_intrinsics.h"
static __inline ushort4 __ldcg(const ushort4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 148
{ } 
#endif
#line 149 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\sm_32_intrinsics.h"
static __inline uint2 __ldcg(const uint2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 149
{ } 
#endif
#line 150 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\sm_32_intrinsics.h"
static __inline uint4 __ldcg(const uint4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 150
{ } 
#endif
#line 151 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\sm_32_intrinsics.h"
static __inline ulonglong2 __ldcg(const ulonglong2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 151
{ } 
#endif
#line 153 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\sm_32_intrinsics.h"
static __inline float __ldcg(const float *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 153
{ } 
#endif
#line 154 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\sm_32_intrinsics.h"
static __inline double __ldcg(const double *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 154
{ } 
#endif
#line 155 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\sm_32_intrinsics.h"
static __inline float2 __ldcg(const float2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 155
{ } 
#endif
#line 156 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\sm_32_intrinsics.h"
static __inline float4 __ldcg(const float4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 156
{ } 
#endif
#line 157 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\sm_32_intrinsics.h"
static __inline double2 __ldcg(const double2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 157
{ } 
#endif
#line 161 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\sm_32_intrinsics.h"
static __inline long __ldca(const long *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 161
{ } 
#endif
#line 162 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\sm_32_intrinsics.h"
static __inline unsigned long __ldca(const unsigned long *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 162
{ } 
#endif
#line 164 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\sm_32_intrinsics.h"
static __inline char __ldca(const char *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 164
{ } 
#endif
#line 165 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\sm_32_intrinsics.h"
static __inline signed char __ldca(const signed char *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 165
{ } 
#endif
#line 166 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\sm_32_intrinsics.h"
static __inline short __ldca(const short *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 166
{ } 
#endif
#line 167 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\sm_32_intrinsics.h"
static __inline int __ldca(const int *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 167
{ } 
#endif
#line 168 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\sm_32_intrinsics.h"
static __inline __int64 __ldca(const __int64 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 168
{ } 
#endif
#line 169 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\sm_32_intrinsics.h"
static __inline char2 __ldca(const char2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 169
{ } 
#endif
#line 170 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\sm_32_intrinsics.h"
static __inline char4 __ldca(const char4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 170
{ } 
#endif
#line 171 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\sm_32_intrinsics.h"
static __inline short2 __ldca(const short2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 171
{ } 
#endif
#line 172 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\sm_32_intrinsics.h"
static __inline short4 __ldca(const short4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 172
{ } 
#endif
#line 173 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\sm_32_intrinsics.h"
static __inline int2 __ldca(const int2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 173
{ } 
#endif
#line 174 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\sm_32_intrinsics.h"
static __inline int4 __ldca(const int4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 174
{ } 
#endif
#line 175 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\sm_32_intrinsics.h"
static __inline longlong2 __ldca(const longlong2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 175
{ } 
#endif
#line 177 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\sm_32_intrinsics.h"
static __inline unsigned char __ldca(const unsigned char *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 177
{ } 
#endif
#line 178 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\sm_32_intrinsics.h"
static __inline unsigned short __ldca(const unsigned short *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 178
{ } 
#endif
#line 179 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\sm_32_intrinsics.h"
static __inline unsigned __ldca(const unsigned *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 179
{ } 
#endif
#line 180 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\sm_32_intrinsics.h"
static __inline unsigned __int64 __ldca(const unsigned __int64 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 180
{ } 
#endif
#line 181 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\sm_32_intrinsics.h"
static __inline uchar2 __ldca(const uchar2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 181
{ } 
#endif
#line 182 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\sm_32_intrinsics.h"
static __inline uchar4 __ldca(const uchar4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 182
{ } 
#endif
#line 183 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\sm_32_intrinsics.h"
static __inline ushort2 __ldca(const ushort2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 183
{ } 
#endif
#line 184 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\sm_32_intrinsics.h"
static __inline ushort4 __ldca(const ushort4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 184
{ } 
#endif
#line 185 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\sm_32_intrinsics.h"
static __inline uint2 __ldca(const uint2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 185
{ } 
#endif
#line 186 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\sm_32_intrinsics.h"
static __inline uint4 __ldca(const uint4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 186
{ } 
#endif
#line 187 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\sm_32_intrinsics.h"
static __inline ulonglong2 __ldca(const ulonglong2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 187
{ } 
#endif
#line 189 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\sm_32_intrinsics.h"
static __inline float __ldca(const float *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 189
{ } 
#endif
#line 190 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\sm_32_intrinsics.h"
static __inline double __ldca(const double *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 190
{ } 
#endif
#line 191 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\sm_32_intrinsics.h"
static __inline float2 __ldca(const float2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 191
{ } 
#endif
#line 192 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\sm_32_intrinsics.h"
static __inline float4 __ldca(const float4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 192
{ } 
#endif
#line 193 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\sm_32_intrinsics.h"
static __inline double2 __ldca(const double2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 193
{ } 
#endif
#line 197 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\sm_32_intrinsics.h"
static __inline long __ldcs(const long *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 197
{ } 
#endif
#line 198 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\sm_32_intrinsics.h"
static __inline unsigned long __ldcs(const unsigned long *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 198
{ } 
#endif
#line 200 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\sm_32_intrinsics.h"
static __inline char __ldcs(const char *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 200
{ } 
#endif
#line 201 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\sm_32_intrinsics.h"
static __inline signed char __ldcs(const signed char *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 201
{ } 
#endif
#line 202 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\sm_32_intrinsics.h"
static __inline short __ldcs(const short *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 202
{ } 
#endif
#line 203 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\sm_32_intrinsics.h"
static __inline int __ldcs(const int *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 203
{ } 
#endif
#line 204 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\sm_32_intrinsics.h"
static __inline __int64 __ldcs(const __int64 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 204
{ } 
#endif
#line 205 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\sm_32_intrinsics.h"
static __inline char2 __ldcs(const char2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 205
{ } 
#endif
#line 206 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\sm_32_intrinsics.h"
static __inline char4 __ldcs(const char4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 206
{ } 
#endif
#line 207 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\sm_32_intrinsics.h"
static __inline short2 __ldcs(const short2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 207
{ } 
#endif
#line 208 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\sm_32_intrinsics.h"
static __inline short4 __ldcs(const short4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 208
{ } 
#endif
#line 209 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\sm_32_intrinsics.h"
static __inline int2 __ldcs(const int2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 209
{ } 
#endif
#line 210 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\sm_32_intrinsics.h"
static __inline int4 __ldcs(const int4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 210
{ } 
#endif
#line 211 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\sm_32_intrinsics.h"
static __inline longlong2 __ldcs(const longlong2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 211
{ } 
#endif
#line 213 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\sm_32_intrinsics.h"
static __inline unsigned char __ldcs(const unsigned char *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 213
{ } 
#endif
#line 214 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\sm_32_intrinsics.h"
static __inline unsigned short __ldcs(const unsigned short *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 214
{ } 
#endif
#line 215 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\sm_32_intrinsics.h"
static __inline unsigned __ldcs(const unsigned *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 215
{ } 
#endif
#line 216 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\sm_32_intrinsics.h"
static __inline unsigned __int64 __ldcs(const unsigned __int64 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 216
{ } 
#endif
#line 217 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\sm_32_intrinsics.h"
static __inline uchar2 __ldcs(const uchar2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 217
{ } 
#endif
#line 218 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\sm_32_intrinsics.h"
static __inline uchar4 __ldcs(const uchar4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 218
{ } 
#endif
#line 219 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\sm_32_intrinsics.h"
static __inline ushort2 __ldcs(const ushort2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 219
{ } 
#endif
#line 220 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\sm_32_intrinsics.h"
static __inline ushort4 __ldcs(const ushort4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 220
{ } 
#endif
#line 221 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\sm_32_intrinsics.h"
static __inline uint2 __ldcs(const uint2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 221
{ } 
#endif
#line 222 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\sm_32_intrinsics.h"
static __inline uint4 __ldcs(const uint4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 222
{ } 
#endif
#line 223 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\sm_32_intrinsics.h"
static __inline ulonglong2 __ldcs(const ulonglong2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 223
{ } 
#endif
#line 225 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\sm_32_intrinsics.h"
static __inline float __ldcs(const float *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 225
{ } 
#endif
#line 226 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\sm_32_intrinsics.h"
static __inline double __ldcs(const double *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 226
{ } 
#endif
#line 227 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\sm_32_intrinsics.h"
static __inline float2 __ldcs(const float2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 227
{ } 
#endif
#line 228 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\sm_32_intrinsics.h"
static __inline float4 __ldcs(const float4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 228
{ } 
#endif
#line 229 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\sm_32_intrinsics.h"
static __inline double2 __ldcs(const double2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 229
{ } 
#endif
#line 236 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\sm_32_intrinsics.h"
static __inline unsigned __funnelshift_l(unsigned lo, unsigned hi, unsigned shift) {int volatile ___ = 1;(void)lo;(void)hi;(void)shift;::exit(___);}
#if 0
#line 236
{ } 
#endif
#line 237 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\sm_32_intrinsics.h"
static __inline unsigned __funnelshift_lc(unsigned lo, unsigned hi, unsigned shift) {int volatile ___ = 1;(void)lo;(void)hi;(void)shift;::exit(___);}
#if 0
#line 237
{ } 
#endif
#line 240 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\sm_32_intrinsics.h"
static __inline unsigned __funnelshift_r(unsigned lo, unsigned hi, unsigned shift) {int volatile ___ = 1;(void)lo;(void)hi;(void)shift;::exit(___);}
#if 0
#line 240
{ } 
#endif
#line 241 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\sm_32_intrinsics.h"
static __inline unsigned __funnelshift_rc(unsigned lo, unsigned hi, unsigned shift) {int volatile ___ = 1;(void)lo;(void)hi;(void)shift;::exit(___);}
#if 0
#line 241
{ } 
#endif
#line 91 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\sm_61_intrinsics.h"
static __inline int __dp2a_lo(int srcA, int srcB, int c) {int volatile ___ = 1;(void)srcA;(void)srcB;(void)c;::exit(___);}
#if 0
#line 91
{ } 
#endif
#line 92 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\sm_61_intrinsics.h"
static __inline unsigned __dp2a_lo(unsigned srcA, unsigned srcB, unsigned c) {int volatile ___ = 1;(void)srcA;(void)srcB;(void)c;::exit(___);}
#if 0
#line 92
{ } 
#endif
#line 94 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\sm_61_intrinsics.h"
static __inline int __dp2a_lo(short2 srcA, char4 srcB, int c) {int volatile ___ = 1;(void)srcA;(void)srcB;(void)c;::exit(___);}
#if 0
#line 94
{ } 
#endif
#line 95 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\sm_61_intrinsics.h"
static __inline unsigned __dp2a_lo(ushort2 srcA, uchar4 srcB, unsigned c) {int volatile ___ = 1;(void)srcA;(void)srcB;(void)c;::exit(___);}
#if 0
#line 95
{ } 
#endif
#line 97 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\sm_61_intrinsics.h"
static __inline int __dp2a_hi(int srcA, int srcB, int c) {int volatile ___ = 1;(void)srcA;(void)srcB;(void)c;::exit(___);}
#if 0
#line 97
{ } 
#endif
#line 98 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\sm_61_intrinsics.h"
static __inline unsigned __dp2a_hi(unsigned srcA, unsigned srcB, unsigned c) {int volatile ___ = 1;(void)srcA;(void)srcB;(void)c;::exit(___);}
#if 0
#line 98
{ } 
#endif
#line 100 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\sm_61_intrinsics.h"
static __inline int __dp2a_hi(short2 srcA, char4 srcB, int c) {int volatile ___ = 1;(void)srcA;(void)srcB;(void)c;::exit(___);}
#if 0
#line 100
{ } 
#endif
#line 101 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\sm_61_intrinsics.h"
static __inline unsigned __dp2a_hi(ushort2 srcA, uchar4 srcB, unsigned c) {int volatile ___ = 1;(void)srcA;(void)srcB;(void)c;::exit(___);}
#if 0
#line 101
{ } 
#endif
#line 108 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\sm_61_intrinsics.h"
static __inline int __dp4a(int srcA, int srcB, int c) {int volatile ___ = 1;(void)srcA;(void)srcB;(void)c;::exit(___);}
#if 0
#line 108
{ } 
#endif
#line 109 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\sm_61_intrinsics.h"
static __inline unsigned __dp4a(unsigned srcA, unsigned srcB, unsigned c) {int volatile ___ = 1;(void)srcA;(void)srcB;(void)c;::exit(___);}
#if 0
#line 109
{ } 
#endif
#line 111 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\sm_61_intrinsics.h"
static __inline int __dp4a(char4 srcA, char4 srcB, int c) {int volatile ___ = 1;(void)srcA;(void)srcB;(void)c;::exit(___);}
#if 0
#line 111
{ } 
#endif
#line 112 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\sm_61_intrinsics.h"
static __inline unsigned __dp4a(uchar4 srcA, uchar4 srcB, unsigned c) {int volatile ___ = 1;(void)srcA;(void)srcB;(void)c;::exit(___);}
#if 0
#line 112
{ } 
#endif
#line 83 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\crt\\sm_70_rt.h"
static __inline unsigned __match_any_sync(unsigned mask, unsigned value) {int volatile ___ = 1;(void)mask;(void)value;::exit(___);}
#if 0
#line 83
{ } 
#endif
#line 84 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\crt\\sm_70_rt.h"
static __inline unsigned __match_any_sync(unsigned mask, int value) {int volatile ___ = 1;(void)mask;(void)value;::exit(___);}
#if 0
#line 84
{ } 
#endif
#line 85 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\crt\\sm_70_rt.h"
static __inline unsigned __match_any_sync(unsigned mask, unsigned long value) {int volatile ___ = 1;(void)mask;(void)value;::exit(___);}
#if 0
#line 85
{ } 
#endif
#line 86 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\crt\\sm_70_rt.h"
static __inline unsigned __match_any_sync(unsigned mask, long value) {int volatile ___ = 1;(void)mask;(void)value;::exit(___);}
#if 0
#line 86
{ } 
#endif
#line 87 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\crt\\sm_70_rt.h"
static __inline unsigned __match_any_sync(unsigned mask, unsigned __int64 value) {int volatile ___ = 1;(void)mask;(void)value;::exit(___);}
#if 0
#line 87
{ } 
#endif
#line 88 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\crt\\sm_70_rt.h"
static __inline unsigned __match_any_sync(unsigned mask, __int64 value) {int volatile ___ = 1;(void)mask;(void)value;::exit(___);}
#if 0
#line 88
{ } 
#endif
#line 89 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\crt\\sm_70_rt.h"
static __inline unsigned __match_any_sync(unsigned mask, float value) {int volatile ___ = 1;(void)mask;(void)value;::exit(___);}
#if 0
#line 89
{ } 
#endif
#line 90 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\crt\\sm_70_rt.h"
static __inline unsigned __match_any_sync(unsigned mask, double value) {int volatile ___ = 1;(void)mask;(void)value;::exit(___);}
#if 0
#line 90
{ } 
#endif
#line 92 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\crt\\sm_70_rt.h"
static __inline unsigned __match_all_sync(unsigned mask, unsigned value, int *pred) {int volatile ___ = 1;(void)mask;(void)value;(void)pred;::exit(___);}
#if 0
#line 92
{ } 
#endif
#line 93 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\crt\\sm_70_rt.h"
static __inline unsigned __match_all_sync(unsigned mask, int value, int *pred) {int volatile ___ = 1;(void)mask;(void)value;(void)pred;::exit(___);}
#if 0
#line 93
{ } 
#endif
#line 94 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\crt\\sm_70_rt.h"
static __inline unsigned __match_all_sync(unsigned mask, unsigned long value, int *pred) {int volatile ___ = 1;(void)mask;(void)value;(void)pred;::exit(___);}
#if 0
#line 94
{ } 
#endif
#line 95 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\crt\\sm_70_rt.h"
static __inline unsigned __match_all_sync(unsigned mask, long value, int *pred) {int volatile ___ = 1;(void)mask;(void)value;(void)pred;::exit(___);}
#if 0
#line 95
{ } 
#endif
#line 96 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\crt\\sm_70_rt.h"
static __inline unsigned __match_all_sync(unsigned mask, unsigned __int64 value, int *pred) {int volatile ___ = 1;(void)mask;(void)value;(void)pred;::exit(___);}
#if 0
#line 96
{ } 
#endif
#line 97 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\crt\\sm_70_rt.h"
static __inline unsigned __match_all_sync(unsigned mask, __int64 value, int *pred) {int volatile ___ = 1;(void)mask;(void)value;(void)pred;::exit(___);}
#if 0
#line 97
{ } 
#endif
#line 98 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\crt\\sm_70_rt.h"
static __inline unsigned __match_all_sync(unsigned mask, float value, int *pred) {int volatile ___ = 1;(void)mask;(void)value;(void)pred;::exit(___);}
#if 0
#line 98
{ } 
#endif
#line 99 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\crt\\sm_70_rt.h"
static __inline unsigned __match_all_sync(unsigned mask, double value, int *pred) {int volatile ___ = 1;(void)mask;(void)value;(void)pred;::exit(___);}
#if 0
#line 99
{ } 
#endif
#line 116 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\surface_functions.h"
template< class T> static __forceinline void 
#line 117
surf1Dread(T *res, ::surface< void, 1>  surf, int x, int s, ::cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
#line 118
{int volatile ___ = 1;(void)res;(void)surf;(void)x;(void)s;(void)mode;
#line 122
::exit(___);}
#if 0
#line 118
{ 
#line 122
} 
#endif
#line 124 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\surface_functions.h"
template< class T> static __forceinline T 
#line 125
surf1Dread(::surface< void, 1>  surf, int x, ::cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
#line 126
{int volatile ___ = 1;(void)surf;(void)x;(void)mode;
#line 132
::exit(___);}
#if 0
#line 126
{ 
#line 132
} 
#endif
#line 134 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\surface_functions.h"
template< class T> static __forceinline void 
#line 135
surf1Dread(T *res, ::surface< void, 1>  surf, int x, ::cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
#line 136
{int volatile ___ = 1;(void)res;(void)surf;(void)x;(void)mode;
#line 140
::exit(___);}
#if 0
#line 136
{ 
#line 140
} 
#endif
#line 143 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\surface_functions.h"
template< class T> static __forceinline void 
#line 144
surf2Dread(T *res, ::surface< void, 2>  surf, int x, int y, int s, ::cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
#line 145
{int volatile ___ = 1;(void)res;(void)surf;(void)x;(void)y;(void)s;(void)mode;
#line 149
::exit(___);}
#if 0
#line 145
{ 
#line 149
} 
#endif
#line 151 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\surface_functions.h"
template< class T> static __forceinline T 
#line 152
surf2Dread(::surface< void, 2>  surf, int x, int y, ::cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
#line 153
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)mode;
#line 159
::exit(___);}
#if 0
#line 153
{ 
#line 159
} 
#endif
#line 161 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\surface_functions.h"
template< class T> static __forceinline void 
#line 162
surf2Dread(T *res, ::surface< void, 2>  surf, int x, int y, ::cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
#line 163
{int volatile ___ = 1;(void)res;(void)surf;(void)x;(void)y;(void)mode;
#line 167
::exit(___);}
#if 0
#line 163
{ 
#line 167
} 
#endif
#line 170 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\surface_functions.h"
template< class T> static __forceinline void 
#line 171
surf3Dread(T *res, ::surface< void, 3>  surf, int x, int y, int z, int s, ::cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
#line 172
{int volatile ___ = 1;(void)res;(void)surf;(void)x;(void)y;(void)z;(void)s;(void)mode;
#line 176
::exit(___);}
#if 0
#line 172
{ 
#line 176
} 
#endif
#line 178 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\surface_functions.h"
template< class T> static __forceinline T 
#line 179
surf3Dread(::surface< void, 3>  surf, int x, int y, int z, ::cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
#line 180
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)z;(void)mode;
#line 186
::exit(___);}
#if 0
#line 180
{ 
#line 186
} 
#endif
#line 188 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\surface_functions.h"
template< class T> static __forceinline void 
#line 189
surf3Dread(T *res, ::surface< void, 3>  surf, int x, int y, int z, ::cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
#line 190
{int volatile ___ = 1;(void)res;(void)surf;(void)x;(void)y;(void)z;(void)mode;
#line 194
::exit(___);}
#if 0
#line 190
{ 
#line 194
} 
#endif
#line 198 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\surface_functions.h"
template< class T> static __forceinline void 
#line 199
surf1DLayeredread(T *res, ::surface< void, 241>  surf, int x, int layer, int s, ::cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
#line 200
{int volatile ___ = 1;(void)res;(void)surf;(void)x;(void)layer;(void)s;(void)mode;
#line 204
::exit(___);}
#if 0
#line 200
{ 
#line 204
} 
#endif
#line 206 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\surface_functions.h"
template< class T> static __forceinline T 
#line 207
surf1DLayeredread(::surface< void, 241>  surf, int x, int layer, ::cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
#line 208
{int volatile ___ = 1;(void)surf;(void)x;(void)layer;(void)mode;
#line 214
::exit(___);}
#if 0
#line 208
{ 
#line 214
} 
#endif
#line 217 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\surface_functions.h"
template< class T> static __forceinline void 
#line 218
surf1DLayeredread(T *res, ::surface< void, 241>  surf, int x, int layer, ::cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
#line 219
{int volatile ___ = 1;(void)res;(void)surf;(void)x;(void)layer;(void)mode;
#line 223
::exit(___);}
#if 0
#line 219
{ 
#line 223
} 
#endif
#line 226 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\surface_functions.h"
template< class T> static __forceinline void 
#line 227
surf2DLayeredread(T *res, ::surface< void, 242>  surf, int x, int y, int layer, int s, ::cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
#line 228
{int volatile ___ = 1;(void)res;(void)surf;(void)x;(void)y;(void)layer;(void)s;(void)mode;
#line 232
::exit(___);}
#if 0
#line 228
{ 
#line 232
} 
#endif
#line 234 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\surface_functions.h"
template< class T> static __forceinline T 
#line 235
surf2DLayeredread(::surface< void, 242>  surf, int x, int y, int layer, ::cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
#line 236
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)layer;(void)mode;
#line 242
::exit(___);}
#if 0
#line 236
{ 
#line 242
} 
#endif
#line 245 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\surface_functions.h"
template< class T> static __forceinline void 
#line 246
surf2DLayeredread(T *res, ::surface< void, 242>  surf, int x, int y, int layer, ::cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
#line 247
{int volatile ___ = 1;(void)res;(void)surf;(void)x;(void)y;(void)layer;(void)mode;
#line 251
::exit(___);}
#if 0
#line 247
{ 
#line 251
} 
#endif
#line 254 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\surface_functions.h"
template< class T> static __forceinline void 
#line 255
surfCubemapread(T *res, ::surface< void, 12>  surf, int x, int y, int face, int s, ::cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
#line 256
{int volatile ___ = 1;(void)res;(void)surf;(void)x;(void)y;(void)face;(void)s;(void)mode;
#line 260
::exit(___);}
#if 0
#line 256
{ 
#line 260
} 
#endif
#line 262 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\surface_functions.h"
template< class T> static __forceinline T 
#line 263
surfCubemapread(::surface< void, 12>  surf, int x, int y, int face, ::cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
#line 264
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)face;(void)mode;
#line 271
::exit(___);}
#if 0
#line 264
{ 
#line 271
} 
#endif
#line 273 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\surface_functions.h"
template< class T> static __forceinline void 
#line 274
surfCubemapread(T *res, ::surface< void, 12>  surf, int x, int y, int face, ::cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
#line 275
{int volatile ___ = 1;(void)res;(void)surf;(void)x;(void)y;(void)face;(void)mode;
#line 279
::exit(___);}
#if 0
#line 275
{ 
#line 279
} 
#endif
#line 282 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\surface_functions.h"
template< class T> static __forceinline void 
#line 283
surfCubemapLayeredread(T *res, ::surface< void, 252>  surf, int x, int y, int layerFace, int s, ::cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
#line 284
{int volatile ___ = 1;(void)res;(void)surf;(void)x;(void)y;(void)layerFace;(void)s;(void)mode;
#line 288
::exit(___);}
#if 0
#line 284
{ 
#line 288
} 
#endif
#line 290 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\surface_functions.h"
template< class T> static __forceinline T 
#line 291
surfCubemapLayeredread(::surface< void, 252>  surf, int x, int y, int layerFace, ::cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
#line 292
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)layerFace;(void)mode;
#line 298
::exit(___);}
#if 0
#line 292
{ 
#line 298
} 
#endif
#line 300 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\surface_functions.h"
template< class T> static __forceinline void 
#line 301
surfCubemapLayeredread(T *res, ::surface< void, 252>  surf, int x, int y, int layerFace, ::cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
#line 302
{int volatile ___ = 1;(void)res;(void)surf;(void)x;(void)y;(void)layerFace;(void)mode;
#line 306
::exit(___);}
#if 0
#line 302
{ 
#line 306
} 
#endif
#line 309 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\surface_functions.h"
template< class T> static __forceinline void 
#line 310
surf1Dwrite(T val, ::surface< void, 1>  surf, int x, int s, ::cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
#line 311
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)s;(void)mode;
#line 315
::exit(___);}
#if 0
#line 311
{ 
#line 315
} 
#endif
#line 317 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\surface_functions.h"
template< class T> static __forceinline void 
#line 318
surf1Dwrite(T val, ::surface< void, 1>  surf, int x, ::cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
#line 319
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)mode;
#line 323
::exit(___);}
#if 0
#line 319
{ 
#line 323
} 
#endif
#line 327 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\surface_functions.h"
template< class T> static __forceinline void 
#line 328
surf2Dwrite(T val, ::surface< void, 2>  surf, int x, int y, int s, ::cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
#line 329
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)s;(void)mode;
#line 333
::exit(___);}
#if 0
#line 329
{ 
#line 333
} 
#endif
#line 335 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\surface_functions.h"
template< class T> static __forceinline void 
#line 336
surf2Dwrite(T val, ::surface< void, 2>  surf, int x, int y, ::cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
#line 337
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)mode;
#line 341
::exit(___);}
#if 0
#line 337
{ 
#line 341
} 
#endif
#line 344 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\surface_functions.h"
template< class T> static __forceinline void 
#line 345
surf3Dwrite(T val, ::surface< void, 3>  surf, int x, int y, int z, int s, ::cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
#line 346
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)z;(void)s;(void)mode;
#line 350
::exit(___);}
#if 0
#line 346
{ 
#line 350
} 
#endif
#line 352 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\surface_functions.h"
template< class T> static __forceinline void 
#line 353
surf3Dwrite(T val, ::surface< void, 3>  surf, int x, int y, int z, ::cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
#line 354
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)z;(void)mode;
#line 358
::exit(___);}
#if 0
#line 354
{ 
#line 358
} 
#endif
#line 361 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\surface_functions.h"
template< class T> static __forceinline void 
#line 362
surf1DLayeredwrite(T val, ::surface< void, 241>  surf, int x, int layer, int s, ::cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
#line 363
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)layer;(void)s;(void)mode;
#line 367
::exit(___);}
#if 0
#line 363
{ 
#line 367
} 
#endif
#line 369 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\surface_functions.h"
template< class T> static __forceinline void 
#line 370
surf1DLayeredwrite(T val, ::surface< void, 241>  surf, int x, int layer, ::cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
#line 371
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)layer;(void)mode;
#line 375
::exit(___);}
#if 0
#line 371
{ 
#line 375
} 
#endif
#line 378 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\surface_functions.h"
template< class T> static __forceinline void 
#line 379
surf2DLayeredwrite(T val, ::surface< void, 242>  surf, int x, int y, int layer, int s, ::cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
#line 380
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)layer;(void)s;(void)mode;
#line 384
::exit(___);}
#if 0
#line 380
{ 
#line 384
} 
#endif
#line 386 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\surface_functions.h"
template< class T> static __forceinline void 
#line 387
surf2DLayeredwrite(T val, ::surface< void, 242>  surf, int x, int y, int layer, ::cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
#line 388
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)layer;(void)mode;
#line 392
::exit(___);}
#if 0
#line 388
{ 
#line 392
} 
#endif
#line 395 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\surface_functions.h"
template< class T> static __forceinline void 
#line 396
surfCubemapwrite(T val, ::surface< void, 12>  surf, int x, int y, int face, int s, ::cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
#line 397
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)face;(void)s;(void)mode;
#line 401
::exit(___);}
#if 0
#line 397
{ 
#line 401
} 
#endif
#line 403 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\surface_functions.h"
template< class T> static __forceinline void 
#line 404
surfCubemapwrite(T val, ::surface< void, 12>  surf, int x, int y, int face, ::cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
#line 405
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)face;(void)mode;
#line 409
::exit(___);}
#if 0
#line 405
{ 
#line 409
} 
#endif
#line 413 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\surface_functions.h"
template< class T> static __forceinline void 
#line 414
surfCubemapLayeredwrite(T val, ::surface< void, 252>  surf, int x, int y, int layerFace, int s, ::cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
#line 415
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)layerFace;(void)s;(void)mode;
#line 419
::exit(___);}
#if 0
#line 415
{ 
#line 419
} 
#endif
#line 421 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\surface_functions.h"
template< class T> static __forceinline void 
#line 422
surfCubemapLayeredwrite(T val, ::surface< void, 252>  surf, int x, int y, int layerFace, ::cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
#line 423
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)layerFace;(void)mode;
#line 427
::exit(___);}
#if 0
#line 423
{ 
#line 427
} 
#endif
#line 68 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\texture_fetch_functions.h"
template< class T> 
#line 69
struct __nv_tex_rmet_ret { }; 
#line 71
template<> struct __nv_tex_rmet_ret< char>  { typedef char type; }; 
#line 72
template<> struct __nv_tex_rmet_ret< signed char>  { typedef signed char type; }; 
#line 73
template<> struct __nv_tex_rmet_ret< unsigned char>  { typedef unsigned char type; }; 
#line 74
template<> struct __nv_tex_rmet_ret< char1>  { typedef char1 type; }; 
#line 75
template<> struct __nv_tex_rmet_ret< uchar1>  { typedef uchar1 type; }; 
#line 76
template<> struct __nv_tex_rmet_ret< char2>  { typedef char2 type; }; 
#line 77
template<> struct __nv_tex_rmet_ret< uchar2>  { typedef uchar2 type; }; 
#line 78
template<> struct __nv_tex_rmet_ret< char4>  { typedef char4 type; }; 
#line 79
template<> struct __nv_tex_rmet_ret< uchar4>  { typedef uchar4 type; }; 
#line 81
template<> struct __nv_tex_rmet_ret< short>  { typedef short type; }; 
#line 82
template<> struct __nv_tex_rmet_ret< unsigned short>  { typedef unsigned short type; }; 
#line 83
template<> struct __nv_tex_rmet_ret< short1>  { typedef short1 type; }; 
#line 84
template<> struct __nv_tex_rmet_ret< ushort1>  { typedef ushort1 type; }; 
#line 85
template<> struct __nv_tex_rmet_ret< short2>  { typedef short2 type; }; 
#line 86
template<> struct __nv_tex_rmet_ret< ushort2>  { typedef ushort2 type; }; 
#line 87
template<> struct __nv_tex_rmet_ret< short4>  { typedef short4 type; }; 
#line 88
template<> struct __nv_tex_rmet_ret< ushort4>  { typedef ushort4 type; }; 
#line 90
template<> struct __nv_tex_rmet_ret< int>  { typedef int type; }; 
#line 91
template<> struct __nv_tex_rmet_ret< unsigned>  { typedef unsigned type; }; 
#line 92
template<> struct __nv_tex_rmet_ret< int1>  { typedef int1 type; }; 
#line 93
template<> struct __nv_tex_rmet_ret< uint1>  { typedef uint1 type; }; 
#line 94
template<> struct __nv_tex_rmet_ret< int2>  { typedef int2 type; }; 
#line 95
template<> struct __nv_tex_rmet_ret< uint2>  { typedef uint2 type; }; 
#line 96
template<> struct __nv_tex_rmet_ret< int4>  { typedef int4 type; }; 
#line 97
template<> struct __nv_tex_rmet_ret< uint4>  { typedef uint4 type; }; 
#line 100
template<> struct __nv_tex_rmet_ret< long>  { typedef long type; }; 
#line 101
template<> struct __nv_tex_rmet_ret< unsigned long>  { typedef unsigned long type; }; 
#line 102
template<> struct __nv_tex_rmet_ret< long1>  { typedef long1 type; }; 
#line 103
template<> struct __nv_tex_rmet_ret< ulong1>  { typedef ulong1 type; }; 
#line 104
template<> struct __nv_tex_rmet_ret< long2>  { typedef long2 type; }; 
#line 105
template<> struct __nv_tex_rmet_ret< ulong2>  { typedef ulong2 type; }; 
#line 106
template<> struct __nv_tex_rmet_ret< long4>  { typedef long4 type; }; 
#line 107
template<> struct __nv_tex_rmet_ret< ulong4>  { typedef ulong4 type; }; 
#line 109 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\texture_fetch_functions.h"
template<> struct __nv_tex_rmet_ret< float>  { typedef float type; }; 
#line 110
template<> struct __nv_tex_rmet_ret< float1>  { typedef float1 type; }; 
#line 111
template<> struct __nv_tex_rmet_ret< float2>  { typedef float2 type; }; 
#line 112
template<> struct __nv_tex_rmet_ret< float4>  { typedef float4 type; }; 
#line 115
template< class T> struct __nv_tex_rmet_cast { typedef T *type; }; 
#line 117
template<> struct __nv_tex_rmet_cast< long>  { typedef int *type; }; 
#line 118
template<> struct __nv_tex_rmet_cast< unsigned long>  { typedef unsigned *type; }; 
#line 119
template<> struct __nv_tex_rmet_cast< long1>  { typedef int1 *type; }; 
#line 120
template<> struct __nv_tex_rmet_cast< ulong1>  { typedef uint1 *type; }; 
#line 121
template<> struct __nv_tex_rmet_cast< long2>  { typedef int2 *type; }; 
#line 122
template<> struct __nv_tex_rmet_cast< ulong2>  { typedef uint2 *type; }; 
#line 123
template<> struct __nv_tex_rmet_cast< long4>  { typedef int4 *type; }; 
#line 124
template<> struct __nv_tex_rmet_cast< ulong4>  { typedef uint4 *type; }; 
#line 127 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\texture_fetch_functions.h"
template< class T> static __forceinline typename __nv_tex_rmet_ret< T> ::type 
#line 128
tex1Dfetch(texture< T, 1, cudaReadModeElementType>  t, int x) 
#line 129
{int volatile ___ = 1;(void)t;(void)x;
#line 135
::exit(___);}
#if 0
#line 129
{ 
#line 135
} 
#endif
#line 137 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\texture_fetch_functions.h"
template< class T> 
#line 138
struct __nv_tex_rmnf_ret { }; 
#line 140
template<> struct __nv_tex_rmnf_ret< char>  { typedef float type; }; 
#line 141
template<> struct __nv_tex_rmnf_ret< signed char>  { typedef float type; }; 
#line 142
template<> struct __nv_tex_rmnf_ret< unsigned char>  { typedef float type; }; 
#line 143
template<> struct __nv_tex_rmnf_ret< short>  { typedef float type; }; 
#line 144
template<> struct __nv_tex_rmnf_ret< unsigned short>  { typedef float type; }; 
#line 145
template<> struct __nv_tex_rmnf_ret< char1>  { typedef float1 type; }; 
#line 146
template<> struct __nv_tex_rmnf_ret< uchar1>  { typedef float1 type; }; 
#line 147
template<> struct __nv_tex_rmnf_ret< short1>  { typedef float1 type; }; 
#line 148
template<> struct __nv_tex_rmnf_ret< ushort1>  { typedef float1 type; }; 
#line 149
template<> struct __nv_tex_rmnf_ret< char2>  { typedef float2 type; }; 
#line 150
template<> struct __nv_tex_rmnf_ret< uchar2>  { typedef float2 type; }; 
#line 151
template<> struct __nv_tex_rmnf_ret< short2>  { typedef float2 type; }; 
#line 152
template<> struct __nv_tex_rmnf_ret< ushort2>  { typedef float2 type; }; 
#line 153
template<> struct __nv_tex_rmnf_ret< char4>  { typedef float4 type; }; 
#line 154
template<> struct __nv_tex_rmnf_ret< uchar4>  { typedef float4 type; }; 
#line 155
template<> struct __nv_tex_rmnf_ret< short4>  { typedef float4 type; }; 
#line 156
template<> struct __nv_tex_rmnf_ret< ushort4>  { typedef float4 type; }; 
#line 158
template< class T> static __forceinline typename __nv_tex_rmnf_ret< T> ::type 
#line 159
tex1Dfetch(texture< T, 1, cudaReadModeNormalizedFloat>  t, int x) 
#line 160
{int volatile ___ = 1;(void)t;(void)x;
#line 167
::exit(___);}
#if 0
#line 160
{ 
#line 167
} 
#endif
#line 170 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\texture_fetch_functions.h"
template< class T> static __forceinline typename __nv_tex_rmet_ret< T> ::type 
#line 171
tex1D(texture< T, 1, cudaReadModeElementType>  t, float x) 
#line 172
{int volatile ___ = 1;(void)t;(void)x;
#line 178
::exit(___);}
#if 0
#line 172
{ 
#line 178
} 
#endif
#line 180 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\texture_fetch_functions.h"
template< class T> static __forceinline typename __nv_tex_rmnf_ret< T> ::type 
#line 181
tex1D(texture< T, 1, cudaReadModeNormalizedFloat>  t, float x) 
#line 182
{int volatile ___ = 1;(void)t;(void)x;
#line 189
::exit(___);}
#if 0
#line 182
{ 
#line 189
} 
#endif
#line 193 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\texture_fetch_functions.h"
template< class T> static __forceinline typename __nv_tex_rmet_ret< T> ::type 
#line 194
tex2D(texture< T, 2, cudaReadModeElementType>  t, float x, float y) 
#line 195
{int volatile ___ = 1;(void)t;(void)x;(void)y;
#line 202
::exit(___);}
#if 0
#line 195
{ 
#line 202
} 
#endif
#line 204 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\texture_fetch_functions.h"
template< class T> static __forceinline typename __nv_tex_rmnf_ret< T> ::type 
#line 205
tex2D(texture< T, 2, cudaReadModeNormalizedFloat>  t, float x, float y) 
#line 206
{int volatile ___ = 1;(void)t;(void)x;(void)y;
#line 213
::exit(___);}
#if 0
#line 206
{ 
#line 213
} 
#endif
#line 217 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\texture_fetch_functions.h"
template< class T> static __forceinline typename __nv_tex_rmet_ret< T> ::type 
#line 218
tex1DLayered(texture< T, 241, cudaReadModeElementType>  t, float x, int layer) 
#line 219
{int volatile ___ = 1;(void)t;(void)x;(void)layer;
#line 225
::exit(___);}
#if 0
#line 219
{ 
#line 225
} 
#endif
#line 227 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\texture_fetch_functions.h"
template< class T> static __forceinline typename __nv_tex_rmnf_ret< T> ::type 
#line 228
tex1DLayered(texture< T, 241, cudaReadModeNormalizedFloat>  t, float x, int layer) 
#line 229
{int volatile ___ = 1;(void)t;(void)x;(void)layer;
#line 236
::exit(___);}
#if 0
#line 229
{ 
#line 236
} 
#endif
#line 240 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\texture_fetch_functions.h"
template< class T> static __forceinline typename __nv_tex_rmet_ret< T> ::type 
#line 241
tex2DLayered(texture< T, 242, cudaReadModeElementType>  t, float x, float y, int layer) 
#line 242
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)layer;
#line 248
::exit(___);}
#if 0
#line 242
{ 
#line 248
} 
#endif
#line 250 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\texture_fetch_functions.h"
template< class T> static __forceinline typename __nv_tex_rmnf_ret< T> ::type 
#line 251
tex2DLayered(texture< T, 242, cudaReadModeNormalizedFloat>  t, float x, float y, int layer) 
#line 252
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)layer;
#line 259
::exit(___);}
#if 0
#line 252
{ 
#line 259
} 
#endif
#line 262 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\texture_fetch_functions.h"
template< class T> static __forceinline typename __nv_tex_rmet_ret< T> ::type 
#line 263
tex3D(texture< T, 3, cudaReadModeElementType>  t, float x, float y, float z) 
#line 264
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;
#line 270
::exit(___);}
#if 0
#line 264
{ 
#line 270
} 
#endif
#line 272 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\texture_fetch_functions.h"
template< class T> static __forceinline typename __nv_tex_rmnf_ret< T> ::type 
#line 273
tex3D(texture< T, 3, cudaReadModeNormalizedFloat>  t, float x, float y, float z) 
#line 274
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;
#line 281
::exit(___);}
#if 0
#line 274
{ 
#line 281
} 
#endif
#line 284 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\texture_fetch_functions.h"
template< class T> static __forceinline typename __nv_tex_rmet_ret< T> ::type 
#line 285
texCubemap(texture< T, 12, cudaReadModeElementType>  t, float x, float y, float z) 
#line 286
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;
#line 292
::exit(___);}
#if 0
#line 286
{ 
#line 292
} 
#endif
#line 294 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\texture_fetch_functions.h"
template< class T> static __forceinline typename __nv_tex_rmnf_ret< T> ::type 
#line 295
texCubemap(texture< T, 12, cudaReadModeNormalizedFloat>  t, float x, float y, float z) 
#line 296
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;
#line 303
::exit(___);}
#if 0
#line 296
{ 
#line 303
} 
#endif
#line 306 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\texture_fetch_functions.h"
template< class T> 
#line 307
struct __nv_tex2dgather_ret { }; 
#line 308
template<> struct __nv_tex2dgather_ret< char>  { typedef char4 type; }; 
#line 309
template<> struct __nv_tex2dgather_ret< signed char>  { typedef char4 type; }; 
#line 310
template<> struct __nv_tex2dgather_ret< char1>  { typedef char4 type; }; 
#line 311
template<> struct __nv_tex2dgather_ret< char2>  { typedef char4 type; }; 
#line 312
template<> struct __nv_tex2dgather_ret< char3>  { typedef char4 type; }; 
#line 313
template<> struct __nv_tex2dgather_ret< char4>  { typedef char4 type; }; 
#line 314
template<> struct __nv_tex2dgather_ret< unsigned char>  { typedef uchar4 type; }; 
#line 315
template<> struct __nv_tex2dgather_ret< uchar1>  { typedef uchar4 type; }; 
#line 316
template<> struct __nv_tex2dgather_ret< uchar2>  { typedef uchar4 type; }; 
#line 317
template<> struct __nv_tex2dgather_ret< uchar3>  { typedef uchar4 type; }; 
#line 318
template<> struct __nv_tex2dgather_ret< uchar4>  { typedef uchar4 type; }; 
#line 320
template<> struct __nv_tex2dgather_ret< short>  { typedef short4 type; }; 
#line 321
template<> struct __nv_tex2dgather_ret< short1>  { typedef short4 type; }; 
#line 322
template<> struct __nv_tex2dgather_ret< short2>  { typedef short4 type; }; 
#line 323
template<> struct __nv_tex2dgather_ret< short3>  { typedef short4 type; }; 
#line 324
template<> struct __nv_tex2dgather_ret< short4>  { typedef short4 type; }; 
#line 325
template<> struct __nv_tex2dgather_ret< unsigned short>  { typedef ushort4 type; }; 
#line 326
template<> struct __nv_tex2dgather_ret< ushort1>  { typedef ushort4 type; }; 
#line 327
template<> struct __nv_tex2dgather_ret< ushort2>  { typedef ushort4 type; }; 
#line 328
template<> struct __nv_tex2dgather_ret< ushort3>  { typedef ushort4 type; }; 
#line 329
template<> struct __nv_tex2dgather_ret< ushort4>  { typedef ushort4 type; }; 
#line 331
template<> struct __nv_tex2dgather_ret< int>  { typedef int4 type; }; 
#line 332
template<> struct __nv_tex2dgather_ret< int1>  { typedef int4 type; }; 
#line 333
template<> struct __nv_tex2dgather_ret< int2>  { typedef int4 type; }; 
#line 334
template<> struct __nv_tex2dgather_ret< int3>  { typedef int4 type; }; 
#line 335
template<> struct __nv_tex2dgather_ret< int4>  { typedef int4 type; }; 
#line 336
template<> struct __nv_tex2dgather_ret< unsigned>  { typedef uint4 type; }; 
#line 337
template<> struct __nv_tex2dgather_ret< uint1>  { typedef uint4 type; }; 
#line 338
template<> struct __nv_tex2dgather_ret< uint2>  { typedef uint4 type; }; 
#line 339
template<> struct __nv_tex2dgather_ret< uint3>  { typedef uint4 type; }; 
#line 340
template<> struct __nv_tex2dgather_ret< uint4>  { typedef uint4 type; }; 
#line 342
template<> struct __nv_tex2dgather_ret< float>  { typedef float4 type; }; 
#line 343
template<> struct __nv_tex2dgather_ret< float1>  { typedef float4 type; }; 
#line 344
template<> struct __nv_tex2dgather_ret< float2>  { typedef float4 type; }; 
#line 345
template<> struct __nv_tex2dgather_ret< float3>  { typedef float4 type; }; 
#line 346
template<> struct __nv_tex2dgather_ret< float4>  { typedef float4 type; }; 
#line 348
template< class T> static __forceinline typename __nv_tex2dgather_ret< T> ::type 
#line 349
tex2Dgather(texture< T, 2, cudaReadModeElementType>  t, float x, float y, int comp = 0) 
#line 350
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)comp;
#line 357
::exit(___);}
#if 0
#line 350
{ 
#line 357
} 
#endif
#line 360 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\texture_fetch_functions.h"
template< class T> struct __nv_tex2dgather_rmnf_ret { }; 
#line 361
template<> struct __nv_tex2dgather_rmnf_ret< char>  { typedef float4 type; }; 
#line 362
template<> struct __nv_tex2dgather_rmnf_ret< signed char>  { typedef float4 type; }; 
#line 363
template<> struct __nv_tex2dgather_rmnf_ret< unsigned char>  { typedef float4 type; }; 
#line 364
template<> struct __nv_tex2dgather_rmnf_ret< char1>  { typedef float4 type; }; 
#line 365
template<> struct __nv_tex2dgather_rmnf_ret< uchar1>  { typedef float4 type; }; 
#line 366
template<> struct __nv_tex2dgather_rmnf_ret< char2>  { typedef float4 type; }; 
#line 367
template<> struct __nv_tex2dgather_rmnf_ret< uchar2>  { typedef float4 type; }; 
#line 368
template<> struct __nv_tex2dgather_rmnf_ret< char3>  { typedef float4 type; }; 
#line 369
template<> struct __nv_tex2dgather_rmnf_ret< uchar3>  { typedef float4 type; }; 
#line 370
template<> struct __nv_tex2dgather_rmnf_ret< char4>  { typedef float4 type; }; 
#line 371
template<> struct __nv_tex2dgather_rmnf_ret< uchar4>  { typedef float4 type; }; 
#line 372
template<> struct __nv_tex2dgather_rmnf_ret< signed short>  { typedef float4 type; }; 
#line 373
template<> struct __nv_tex2dgather_rmnf_ret< unsigned short>  { typedef float4 type; }; 
#line 374
template<> struct __nv_tex2dgather_rmnf_ret< short1>  { typedef float4 type; }; 
#line 375
template<> struct __nv_tex2dgather_rmnf_ret< ushort1>  { typedef float4 type; }; 
#line 376
template<> struct __nv_tex2dgather_rmnf_ret< short2>  { typedef float4 type; }; 
#line 377
template<> struct __nv_tex2dgather_rmnf_ret< ushort2>  { typedef float4 type; }; 
#line 378
template<> struct __nv_tex2dgather_rmnf_ret< short3>  { typedef float4 type; }; 
#line 379
template<> struct __nv_tex2dgather_rmnf_ret< ushort3>  { typedef float4 type; }; 
#line 380
template<> struct __nv_tex2dgather_rmnf_ret< short4>  { typedef float4 type; }; 
#line 381
template<> struct __nv_tex2dgather_rmnf_ret< ushort4>  { typedef float4 type; }; 
#line 383
template< class T> static __forceinline typename __nv_tex2dgather_rmnf_ret< T> ::type 
#line 384
tex2Dgather(texture< T, 2, cudaReadModeNormalizedFloat>  t, float x, float y, int comp = 0) 
#line 385
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)comp;
#line 392
::exit(___);}
#if 0
#line 385
{ 
#line 392
} 
#endif
#line 396 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\texture_fetch_functions.h"
template< class T> static __forceinline typename __nv_tex_rmet_ret< T> ::type 
#line 397
tex1DLod(texture< T, 1, cudaReadModeElementType>  t, float x, float level) 
#line 398
{int volatile ___ = 1;(void)t;(void)x;(void)level;
#line 404
::exit(___);}
#if 0
#line 398
{ 
#line 404
} 
#endif
#line 406 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\texture_fetch_functions.h"
template< class T> static __forceinline typename __nv_tex_rmnf_ret< T> ::type 
#line 407
tex1DLod(texture< T, 1, cudaReadModeNormalizedFloat>  t, float x, float level) 
#line 408
{int volatile ___ = 1;(void)t;(void)x;(void)level;
#line 415
::exit(___);}
#if 0
#line 408
{ 
#line 415
} 
#endif
#line 418 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\texture_fetch_functions.h"
template< class T> static __forceinline typename __nv_tex_rmet_ret< T> ::type 
#line 419
tex2DLod(texture< T, 2, cudaReadModeElementType>  t, float x, float y, float level) 
#line 420
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)level;
#line 426
::exit(___);}
#if 0
#line 420
{ 
#line 426
} 
#endif
#line 428 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\texture_fetch_functions.h"
template< class T> static __forceinline typename __nv_tex_rmnf_ret< T> ::type 
#line 429
tex2DLod(texture< T, 2, cudaReadModeNormalizedFloat>  t, float x, float y, float level) 
#line 430
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)level;
#line 437
::exit(___);}
#if 0
#line 430
{ 
#line 437
} 
#endif
#line 440 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\texture_fetch_functions.h"
template< class T> static __forceinline typename __nv_tex_rmet_ret< T> ::type 
#line 441
tex1DLayeredLod(texture< T, 241, cudaReadModeElementType>  t, float x, int layer, float level) 
#line 442
{int volatile ___ = 1;(void)t;(void)x;(void)layer;(void)level;
#line 448
::exit(___);}
#if 0
#line 442
{ 
#line 448
} 
#endif
#line 450 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\texture_fetch_functions.h"
template< class T> static __forceinline typename __nv_tex_rmnf_ret< T> ::type 
#line 451
tex1DLayeredLod(texture< T, 241, cudaReadModeNormalizedFloat>  t, float x, int layer, float level) 
#line 452
{int volatile ___ = 1;(void)t;(void)x;(void)layer;(void)level;
#line 459
::exit(___);}
#if 0
#line 452
{ 
#line 459
} 
#endif
#line 462 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\texture_fetch_functions.h"
template< class T> static __forceinline typename __nv_tex_rmet_ret< T> ::type 
#line 463
tex2DLayeredLod(texture< T, 242, cudaReadModeElementType>  t, float x, float y, int layer, float level) 
#line 464
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)layer;(void)level;
#line 470
::exit(___);}
#if 0
#line 464
{ 
#line 470
} 
#endif
#line 472 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\texture_fetch_functions.h"
template< class T> static __forceinline typename __nv_tex_rmnf_ret< T> ::type 
#line 473
tex2DLayeredLod(texture< T, 242, cudaReadModeNormalizedFloat>  t, float x, float y, int layer, float level) 
#line 474
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)layer;(void)level;
#line 481
::exit(___);}
#if 0
#line 474
{ 
#line 481
} 
#endif
#line 484 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\texture_fetch_functions.h"
template< class T> static __forceinline typename __nv_tex_rmet_ret< T> ::type 
#line 485
tex3DLod(texture< T, 3, cudaReadModeElementType>  t, float x, float y, float z, float level) 
#line 486
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;(void)level;
#line 492
::exit(___);}
#if 0
#line 486
{ 
#line 492
} 
#endif
#line 494 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\texture_fetch_functions.h"
template< class T> static __forceinline typename __nv_tex_rmnf_ret< T> ::type 
#line 495
tex3DLod(texture< T, 3, cudaReadModeNormalizedFloat>  t, float x, float y, float z, float level) 
#line 496
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;(void)level;
#line 503
::exit(___);}
#if 0
#line 496
{ 
#line 503
} 
#endif
#line 506 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\texture_fetch_functions.h"
template< class T> static __forceinline typename __nv_tex_rmet_ret< T> ::type 
#line 507
texCubemapLod(texture< T, 12, cudaReadModeElementType>  t, float x, float y, float z, float level) 
#line 508
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;(void)level;
#line 514
::exit(___);}
#if 0
#line 508
{ 
#line 514
} 
#endif
#line 516 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\texture_fetch_functions.h"
template< class T> static __forceinline typename __nv_tex_rmnf_ret< T> ::type 
#line 517
texCubemapLod(texture< T, 12, cudaReadModeNormalizedFloat>  t, float x, float y, float z, float level) 
#line 518
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;(void)level;
#line 525
::exit(___);}
#if 0
#line 518
{ 
#line 525
} 
#endif
#line 529 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\texture_fetch_functions.h"
template< class T> static __forceinline typename __nv_tex_rmet_ret< T> ::type 
#line 530
texCubemapLayered(texture< T, 252, cudaReadModeElementType>  t, float x, float y, float z, int layer) 
#line 531
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;(void)layer;
#line 537
::exit(___);}
#if 0
#line 531
{ 
#line 537
} 
#endif
#line 539 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\texture_fetch_functions.h"
template< class T> static __forceinline typename __nv_tex_rmnf_ret< T> ::type 
#line 540
texCubemapLayered(texture< T, 252, cudaReadModeNormalizedFloat>  t, float x, float y, float z, int layer) 
#line 541
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;(void)layer;
#line 548
::exit(___);}
#if 0
#line 541
{ 
#line 548
} 
#endif
#line 552 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\texture_fetch_functions.h"
template< class T> static __forceinline typename __nv_tex_rmet_ret< T> ::type 
#line 553
texCubemapLayeredLod(texture< T, 252, cudaReadModeElementType>  t, float x, float y, float z, int layer, float level) 
#line 554
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;(void)layer;(void)level;
#line 560
::exit(___);}
#if 0
#line 554
{ 
#line 560
} 
#endif
#line 562 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\texture_fetch_functions.h"
template< class T> static __forceinline typename __nv_tex_rmnf_ret< T> ::type 
#line 563
texCubemapLayeredLod(texture< T, 252, cudaReadModeNormalizedFloat>  t, float x, float y, float z, int layer, float level) 
#line 564
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;(void)layer;(void)level;
#line 571
::exit(___);}
#if 0
#line 564
{ 
#line 571
} 
#endif
#line 575 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\texture_fetch_functions.h"
template< class T> static __forceinline typename __nv_tex_rmet_ret< T> ::type 
#line 576
texCubemapGrad(texture< T, 12, cudaReadModeElementType>  t, float x, float y, float z, ::float4 dPdx, ::float4 dPdy) 
#line 577
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;(void)dPdx;(void)dPdy;
#line 583
::exit(___);}
#if 0
#line 577
{ 
#line 583
} 
#endif
#line 585 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\texture_fetch_functions.h"
template< class T> static __forceinline typename __nv_tex_rmnf_ret< T> ::type 
#line 586
texCubemapGrad(texture< T, 12, cudaReadModeNormalizedFloat>  t, float x, float y, float z, ::float4 dPdx, ::float4 dPdy) 
#line 587
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;(void)dPdx;(void)dPdy;
#line 594
::exit(___);}
#if 0
#line 587
{ 
#line 594
} 
#endif
#line 598 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\texture_fetch_functions.h"
template< class T> static __forceinline typename __nv_tex_rmet_ret< T> ::type 
#line 599
texCubemapLayeredGrad(texture< T, 252, cudaReadModeElementType>  t, float x, float y, float z, int layer, ::float4 dPdx, ::float4 dPdy) 
#line 600
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;(void)layer;(void)dPdx;(void)dPdy;
#line 606
::exit(___);}
#if 0
#line 600
{ 
#line 606
} 
#endif
#line 608 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\texture_fetch_functions.h"
template< class T> static __forceinline typename __nv_tex_rmnf_ret< T> ::type 
#line 609
texCubemapLayeredGrad(texture< T, 252, cudaReadModeNormalizedFloat>  t, float x, float y, float z, int layer, ::float4 dPdx, ::float4 dPdy) 
#line 610
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;(void)layer;(void)dPdx;(void)dPdy;
#line 617
::exit(___);}
#if 0
#line 610
{ 
#line 617
} 
#endif
#line 621 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\texture_fetch_functions.h"
template< class T> static __forceinline typename __nv_tex_rmet_ret< T> ::type 
#line 622
tex1DGrad(texture< T, 1, cudaReadModeElementType>  t, float x, float dPdx, float dPdy) 
#line 623
{int volatile ___ = 1;(void)t;(void)x;(void)dPdx;(void)dPdy;
#line 629
::exit(___);}
#if 0
#line 623
{ 
#line 629
} 
#endif
#line 631 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\texture_fetch_functions.h"
template< class T> static __forceinline typename __nv_tex_rmnf_ret< T> ::type 
#line 632
tex1DGrad(texture< T, 1, cudaReadModeNormalizedFloat>  t, float x, float dPdx, float dPdy) 
#line 633
{int volatile ___ = 1;(void)t;(void)x;(void)dPdx;(void)dPdy;
#line 640
::exit(___);}
#if 0
#line 633
{ 
#line 640
} 
#endif
#line 644 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\texture_fetch_functions.h"
template< class T> static __forceinline typename __nv_tex_rmet_ret< T> ::type 
#line 645
tex2DGrad(texture< T, 2, cudaReadModeElementType>  t, float x, float y, ::float2 dPdx, ::float2 dPdy) 
#line 646
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)dPdx;(void)dPdy;
#line 652
::exit(___);}
#if 0
#line 646
{ 
#line 652
} 
#endif
#line 654 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\texture_fetch_functions.h"
template< class T> static __forceinline typename __nv_tex_rmnf_ret< T> ::type 
#line 655
tex2DGrad(texture< T, 2, cudaReadModeNormalizedFloat>  t, float x, float y, ::float2 dPdx, ::float2 dPdy) 
#line 656
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)dPdx;(void)dPdy;
#line 663
::exit(___);}
#if 0
#line 656
{ 
#line 663
} 
#endif
#line 666 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\texture_fetch_functions.h"
template< class T> static __forceinline typename __nv_tex_rmet_ret< T> ::type 
#line 667
tex1DLayeredGrad(texture< T, 241, cudaReadModeElementType>  t, float x, int layer, float dPdx, float dPdy) 
#line 668
{int volatile ___ = 1;(void)t;(void)x;(void)layer;(void)dPdx;(void)dPdy;
#line 674
::exit(___);}
#if 0
#line 668
{ 
#line 674
} 
#endif
#line 676 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\texture_fetch_functions.h"
template< class T> static __forceinline typename __nv_tex_rmnf_ret< T> ::type 
#line 677
tex1DLayeredGrad(texture< T, 241, cudaReadModeNormalizedFloat>  t, float x, int layer, float dPdx, float dPdy) 
#line 678
{int volatile ___ = 1;(void)t;(void)x;(void)layer;(void)dPdx;(void)dPdy;
#line 685
::exit(___);}
#if 0
#line 678
{ 
#line 685
} 
#endif
#line 688 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\texture_fetch_functions.h"
template< class T> static __forceinline typename __nv_tex_rmet_ret< T> ::type 
#line 689
tex2DLayeredGrad(texture< T, 242, cudaReadModeElementType>  t, float x, float y, int layer, ::float2 dPdx, ::float2 dPdy) 
#line 690
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)layer;(void)dPdx;(void)dPdy;
#line 696
::exit(___);}
#if 0
#line 690
{ 
#line 696
} 
#endif
#line 698 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\texture_fetch_functions.h"
template< class T> static __forceinline typename __nv_tex_rmnf_ret< T> ::type 
#line 699
tex2DLayeredGrad(texture< T, 242, cudaReadModeNormalizedFloat>  t, float x, float y, int layer, ::float2 dPdx, ::float2 dPdy) 
#line 700
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)layer;(void)dPdx;(void)dPdy;
#line 707
::exit(___);}
#if 0
#line 700
{ 
#line 707
} 
#endif
#line 710 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\texture_fetch_functions.h"
template< class T> static __forceinline typename __nv_tex_rmet_ret< T> ::type 
#line 711
tex3DGrad(texture< T, 3, cudaReadModeElementType>  t, float x, float y, float z, ::float4 dPdx, ::float4 dPdy) 
#line 712
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;(void)dPdx;(void)dPdy;
#line 718
::exit(___);}
#if 0
#line 712
{ 
#line 718
} 
#endif
#line 720 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\texture_fetch_functions.h"
template< class T> static __forceinline typename __nv_tex_rmnf_ret< T> ::type 
#line 721
tex3DGrad(texture< T, 3, cudaReadModeNormalizedFloat>  t, float x, float y, float z, ::float4 dPdx, ::float4 dPdy) 
#line 722
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;(void)dPdx;(void)dPdy;
#line 729
::exit(___);}
#if 0
#line 722
{ 
#line 729
} 
#endif
#line 61 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\texture_indirect_functions.h"
template< class T> struct __nv_itex_trait { }; 
#line 62
template<> struct __nv_itex_trait< char>  { typedef void type; }; 
#line 63
template<> struct __nv_itex_trait< signed char>  { typedef void type; }; 
#line 64
template<> struct __nv_itex_trait< char1>  { typedef void type; }; 
#line 65
template<> struct __nv_itex_trait< char2>  { typedef void type; }; 
#line 66
template<> struct __nv_itex_trait< char4>  { typedef void type; }; 
#line 67
template<> struct __nv_itex_trait< unsigned char>  { typedef void type; }; 
#line 68
template<> struct __nv_itex_trait< uchar1>  { typedef void type; }; 
#line 69
template<> struct __nv_itex_trait< uchar2>  { typedef void type; }; 
#line 70
template<> struct __nv_itex_trait< uchar4>  { typedef void type; }; 
#line 71
template<> struct __nv_itex_trait< short>  { typedef void type; }; 
#line 72
template<> struct __nv_itex_trait< short1>  { typedef void type; }; 
#line 73
template<> struct __nv_itex_trait< short2>  { typedef void type; }; 
#line 74
template<> struct __nv_itex_trait< short4>  { typedef void type; }; 
#line 75
template<> struct __nv_itex_trait< unsigned short>  { typedef void type; }; 
#line 76
template<> struct __nv_itex_trait< ushort1>  { typedef void type; }; 
#line 77
template<> struct __nv_itex_trait< ushort2>  { typedef void type; }; 
#line 78
template<> struct __nv_itex_trait< ushort4>  { typedef void type; }; 
#line 79
template<> struct __nv_itex_trait< int>  { typedef void type; }; 
#line 80
template<> struct __nv_itex_trait< int1>  { typedef void type; }; 
#line 81
template<> struct __nv_itex_trait< int2>  { typedef void type; }; 
#line 82
template<> struct __nv_itex_trait< int4>  { typedef void type; }; 
#line 83
template<> struct __nv_itex_trait< unsigned>  { typedef void type; }; 
#line 84
template<> struct __nv_itex_trait< uint1>  { typedef void type; }; 
#line 85
template<> struct __nv_itex_trait< uint2>  { typedef void type; }; 
#line 86
template<> struct __nv_itex_trait< uint4>  { typedef void type; }; 
#line 88
template<> struct __nv_itex_trait< long>  { typedef void type; }; 
#line 89
template<> struct __nv_itex_trait< long1>  { typedef void type; }; 
#line 90
template<> struct __nv_itex_trait< long2>  { typedef void type; }; 
#line 91
template<> struct __nv_itex_trait< long4>  { typedef void type; }; 
#line 92
template<> struct __nv_itex_trait< unsigned long>  { typedef void type; }; 
#line 93
template<> struct __nv_itex_trait< ulong1>  { typedef void type; }; 
#line 94
template<> struct __nv_itex_trait< ulong2>  { typedef void type; }; 
#line 95
template<> struct __nv_itex_trait< ulong4>  { typedef void type; }; 
#line 97 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\texture_indirect_functions.h"
template<> struct __nv_itex_trait< float>  { typedef void type; }; 
#line 98
template<> struct __nv_itex_trait< float1>  { typedef void type; }; 
#line 99
template<> struct __nv_itex_trait< float2>  { typedef void type; }; 
#line 100
template<> struct __nv_itex_trait< float4>  { typedef void type; }; 
#line 104
template< class T> static typename __nv_itex_trait< T> ::type 
#line 105
tex1Dfetch(T *ptr, ::cudaTextureObject_t obj, int x) 
#line 106
{int volatile ___ = 1;(void)ptr;(void)obj;(void)x;
#line 110
::exit(___);}
#if 0
#line 106
{ 
#line 110
} 
#endif
#line 112 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\texture_indirect_functions.h"
template< class T> static T 
#line 113
tex1Dfetch(::cudaTextureObject_t texObject, int x) 
#line 114
{int volatile ___ = 1;(void)texObject;(void)x;
#line 120
::exit(___);}
#if 0
#line 114
{ 
#line 120
} 
#endif
#line 122 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\texture_indirect_functions.h"
template< class T> static typename __nv_itex_trait< T> ::type 
#line 123
tex1D(T *ptr, ::cudaTextureObject_t obj, float x) 
#line 124
{int volatile ___ = 1;(void)ptr;(void)obj;(void)x;
#line 128
::exit(___);}
#if 0
#line 124
{ 
#line 128
} 
#endif
#line 131 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\texture_indirect_functions.h"
template< class T> static T 
#line 132
tex1D(::cudaTextureObject_t texObject, float x) 
#line 133
{int volatile ___ = 1;(void)texObject;(void)x;
#line 139
::exit(___);}
#if 0
#line 133
{ 
#line 139
} 
#endif
#line 142 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\texture_indirect_functions.h"
template< class T> static typename __nv_itex_trait< T> ::type 
#line 143
tex2D(T *ptr, ::cudaTextureObject_t obj, float x, float y) 
#line 144
{int volatile ___ = 1;(void)ptr;(void)obj;(void)x;(void)y;
#line 148
::exit(___);}
#if 0
#line 144
{ 
#line 148
} 
#endif
#line 150 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\texture_indirect_functions.h"
template< class T> static T 
#line 151
tex2D(::cudaTextureObject_t texObject, float x, float y) 
#line 152
{int volatile ___ = 1;(void)texObject;(void)x;(void)y;
#line 158
::exit(___);}
#if 0
#line 152
{ 
#line 158
} 
#endif
#line 160 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\texture_indirect_functions.h"
template< class T> static typename __nv_itex_trait< T> ::type 
#line 161
tex3D(T *ptr, ::cudaTextureObject_t obj, float x, float y, float z) 
#line 162
{int volatile ___ = 1;(void)ptr;(void)obj;(void)x;(void)y;(void)z;
#line 166
::exit(___);}
#if 0
#line 162
{ 
#line 166
} 
#endif
#line 168 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\texture_indirect_functions.h"
template< class T> static T 
#line 169
tex3D(::cudaTextureObject_t texObject, float x, float y, float z) 
#line 170
{int volatile ___ = 1;(void)texObject;(void)x;(void)y;(void)z;
#line 176
::exit(___);}
#if 0
#line 170
{ 
#line 176
} 
#endif
#line 178 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\texture_indirect_functions.h"
template< class T> static typename __nv_itex_trait< T> ::type 
#line 179
tex1DLayered(T *ptr, ::cudaTextureObject_t obj, float x, int layer) 
#line 180
{int volatile ___ = 1;(void)ptr;(void)obj;(void)x;(void)layer;
#line 184
::exit(___);}
#if 0
#line 180
{ 
#line 184
} 
#endif
#line 186 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\texture_indirect_functions.h"
template< class T> static T 
#line 187
tex1DLayered(::cudaTextureObject_t texObject, float x, int layer) 
#line 188
{int volatile ___ = 1;(void)texObject;(void)x;(void)layer;
#line 194
::exit(___);}
#if 0
#line 188
{ 
#line 194
} 
#endif
#line 196 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\texture_indirect_functions.h"
template< class T> static typename __nv_itex_trait< T> ::type 
#line 197
tex2DLayered(T *ptr, ::cudaTextureObject_t obj, float x, float y, int layer) 
#line 198
{int volatile ___ = 1;(void)ptr;(void)obj;(void)x;(void)y;(void)layer;
#line 202
::exit(___);}
#if 0
#line 198
{ 
#line 202
} 
#endif
#line 204 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\texture_indirect_functions.h"
template< class T> static T 
#line 205
tex2DLayered(::cudaTextureObject_t texObject, float x, float y, int layer) 
#line 206
{int volatile ___ = 1;(void)texObject;(void)x;(void)y;(void)layer;
#line 212
::exit(___);}
#if 0
#line 206
{ 
#line 212
} 
#endif
#line 215 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\texture_indirect_functions.h"
template< class T> static typename __nv_itex_trait< T> ::type 
#line 216
texCubemap(T *ptr, ::cudaTextureObject_t obj, float x, float y, float z) 
#line 217
{int volatile ___ = 1;(void)ptr;(void)obj;(void)x;(void)y;(void)z;
#line 221
::exit(___);}
#if 0
#line 217
{ 
#line 221
} 
#endif
#line 224 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\texture_indirect_functions.h"
template< class T> static T 
#line 225
texCubemap(::cudaTextureObject_t texObject, float x, float y, float z) 
#line 226
{int volatile ___ = 1;(void)texObject;(void)x;(void)y;(void)z;
#line 232
::exit(___);}
#if 0
#line 226
{ 
#line 232
} 
#endif
#line 235 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\texture_indirect_functions.h"
template< class T> static typename __nv_itex_trait< T> ::type 
#line 236
texCubemapLayered(T *ptr, ::cudaTextureObject_t obj, float x, float y, float z, int layer) 
#line 237
{int volatile ___ = 1;(void)ptr;(void)obj;(void)x;(void)y;(void)z;(void)layer;
#line 241
::exit(___);}
#if 0
#line 237
{ 
#line 241
} 
#endif
#line 243 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\texture_indirect_functions.h"
template< class T> static T 
#line 244
texCubemapLayered(::cudaTextureObject_t texObject, float x, float y, float z, int layer) 
#line 245
{int volatile ___ = 1;(void)texObject;(void)x;(void)y;(void)z;(void)layer;
#line 251
::exit(___);}
#if 0
#line 245
{ 
#line 251
} 
#endif
#line 253 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\texture_indirect_functions.h"
template< class T> static typename __nv_itex_trait< T> ::type 
#line 254
tex2Dgather(T *ptr, ::cudaTextureObject_t obj, float x, float y, int comp = 0) 
#line 255
{int volatile ___ = 1;(void)ptr;(void)obj;(void)x;(void)y;(void)comp;
#line 259
::exit(___);}
#if 0
#line 255
{ 
#line 259
} 
#endif
#line 261 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\texture_indirect_functions.h"
template< class T> static T 
#line 262
tex2Dgather(::cudaTextureObject_t to, float x, float y, int comp = 0) 
#line 263
{int volatile ___ = 1;(void)to;(void)x;(void)y;(void)comp;
#line 269
::exit(___);}
#if 0
#line 263
{ 
#line 269
} 
#endif
#line 273 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\texture_indirect_functions.h"
template< class T> static typename __nv_itex_trait< T> ::type 
#line 274
tex1DLod(T *ptr, ::cudaTextureObject_t obj, float x, float level) 
#line 275
{int volatile ___ = 1;(void)ptr;(void)obj;(void)x;(void)level;
#line 279
::exit(___);}
#if 0
#line 275
{ 
#line 279
} 
#endif
#line 281 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\texture_indirect_functions.h"
template< class T> static T 
#line 282
tex1DLod(::cudaTextureObject_t texObject, float x, float level) 
#line 283
{int volatile ___ = 1;(void)texObject;(void)x;(void)level;
#line 289
::exit(___);}
#if 0
#line 283
{ 
#line 289
} 
#endif
#line 292 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\texture_indirect_functions.h"
template< class T> static typename __nv_itex_trait< T> ::type 
#line 293
tex2DLod(T *ptr, ::cudaTextureObject_t obj, float x, float y, float level) 
#line 294
{int volatile ___ = 1;(void)ptr;(void)obj;(void)x;(void)y;(void)level;
#line 298
::exit(___);}
#if 0
#line 294
{ 
#line 298
} 
#endif
#line 300 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\texture_indirect_functions.h"
template< class T> static T 
#line 301
tex2DLod(::cudaTextureObject_t texObject, float x, float y, float level) 
#line 302
{int volatile ___ = 1;(void)texObject;(void)x;(void)y;(void)level;
#line 308
::exit(___);}
#if 0
#line 302
{ 
#line 308
} 
#endif
#line 311 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\texture_indirect_functions.h"
template< class T> static typename __nv_itex_trait< T> ::type 
#line 312
tex3DLod(T *ptr, ::cudaTextureObject_t obj, float x, float y, float z, float level) 
#line 313
{int volatile ___ = 1;(void)ptr;(void)obj;(void)x;(void)y;(void)z;(void)level;
#line 317
::exit(___);}
#if 0
#line 313
{ 
#line 317
} 
#endif
#line 319 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\texture_indirect_functions.h"
template< class T> static T 
#line 320
tex3DLod(::cudaTextureObject_t texObject, float x, float y, float z, float level) 
#line 321
{int volatile ___ = 1;(void)texObject;(void)x;(void)y;(void)z;(void)level;
#line 327
::exit(___);}
#if 0
#line 321
{ 
#line 327
} 
#endif
#line 330 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\texture_indirect_functions.h"
template< class T> static typename __nv_itex_trait< T> ::type 
#line 331
tex1DLayeredLod(T *ptr, ::cudaTextureObject_t obj, float x, int layer, float level) 
#line 332
{int volatile ___ = 1;(void)ptr;(void)obj;(void)x;(void)layer;(void)level;
#line 336
::exit(___);}
#if 0
#line 332
{ 
#line 336
} 
#endif
#line 338 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\texture_indirect_functions.h"
template< class T> static T 
#line 339
tex1DLayeredLod(::cudaTextureObject_t texObject, float x, int layer, float level) 
#line 340
{int volatile ___ = 1;(void)texObject;(void)x;(void)layer;(void)level;
#line 346
::exit(___);}
#if 0
#line 340
{ 
#line 346
} 
#endif
#line 349 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\texture_indirect_functions.h"
template< class T> static typename __nv_itex_trait< T> ::type 
#line 350
tex2DLayeredLod(T *ptr, ::cudaTextureObject_t obj, float x, float y, int layer, float level) 
#line 351
{int volatile ___ = 1;(void)ptr;(void)obj;(void)x;(void)y;(void)layer;(void)level;
#line 355
::exit(___);}
#if 0
#line 351
{ 
#line 355
} 
#endif
#line 357 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\texture_indirect_functions.h"
template< class T> static T 
#line 358
tex2DLayeredLod(::cudaTextureObject_t texObject, float x, float y, int layer, float level) 
#line 359
{int volatile ___ = 1;(void)texObject;(void)x;(void)y;(void)layer;(void)level;
#line 365
::exit(___);}
#if 0
#line 359
{ 
#line 365
} 
#endif
#line 368 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\texture_indirect_functions.h"
template< class T> static typename __nv_itex_trait< T> ::type 
#line 369
texCubemapLod(T *ptr, ::cudaTextureObject_t obj, float x, float y, float z, float level) 
#line 370
{int volatile ___ = 1;(void)ptr;(void)obj;(void)x;(void)y;(void)z;(void)level;
#line 374
::exit(___);}
#if 0
#line 370
{ 
#line 374
} 
#endif
#line 376 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\texture_indirect_functions.h"
template< class T> static T 
#line 377
texCubemapLod(::cudaTextureObject_t texObject, float x, float y, float z, float level) 
#line 378
{int volatile ___ = 1;(void)texObject;(void)x;(void)y;(void)z;(void)level;
#line 384
::exit(___);}
#if 0
#line 378
{ 
#line 384
} 
#endif
#line 387 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\texture_indirect_functions.h"
template< class T> static typename __nv_itex_trait< T> ::type 
#line 388
texCubemapGrad(T *ptr, ::cudaTextureObject_t obj, float x, float y, float z, ::float4 dPdx, ::float4 dPdy) 
#line 389
{int volatile ___ = 1;(void)ptr;(void)obj;(void)x;(void)y;(void)z;(void)dPdx;(void)dPdy;
#line 393
::exit(___);}
#if 0
#line 389
{ 
#line 393
} 
#endif
#line 395 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\texture_indirect_functions.h"
template< class T> static T 
#line 396
texCubemapGrad(::cudaTextureObject_t texObject, float x, float y, float z, ::float4 dPdx, ::float4 dPdy) 
#line 397
{int volatile ___ = 1;(void)texObject;(void)x;(void)y;(void)z;(void)dPdx;(void)dPdy;
#line 403
::exit(___);}
#if 0
#line 397
{ 
#line 403
} 
#endif
#line 405 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\texture_indirect_functions.h"
template< class T> static typename __nv_itex_trait< T> ::type 
#line 406
texCubemapLayeredLod(T *ptr, ::cudaTextureObject_t obj, float x, float y, float z, int layer, float level) 
#line 407
{int volatile ___ = 1;(void)ptr;(void)obj;(void)x;(void)y;(void)z;(void)layer;(void)level;
#line 411
::exit(___);}
#if 0
#line 407
{ 
#line 411
} 
#endif
#line 413 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\texture_indirect_functions.h"
template< class T> static T 
#line 414
texCubemapLayeredLod(::cudaTextureObject_t texObject, float x, float y, float z, int layer, float level) 
#line 415
{int volatile ___ = 1;(void)texObject;(void)x;(void)y;(void)z;(void)layer;(void)level;
#line 421
::exit(___);}
#if 0
#line 415
{ 
#line 421
} 
#endif
#line 423 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\texture_indirect_functions.h"
template< class T> static typename __nv_itex_trait< T> ::type 
#line 424
tex1DGrad(T *ptr, ::cudaTextureObject_t obj, float x, float dPdx, float dPdy) 
#line 425
{int volatile ___ = 1;(void)ptr;(void)obj;(void)x;(void)dPdx;(void)dPdy;
#line 429
::exit(___);}
#if 0
#line 425
{ 
#line 429
} 
#endif
#line 431 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\texture_indirect_functions.h"
template< class T> static T 
#line 432
tex1DGrad(::cudaTextureObject_t texObject, float x, float dPdx, float dPdy) 
#line 433
{int volatile ___ = 1;(void)texObject;(void)x;(void)dPdx;(void)dPdy;
#line 439
::exit(___);}
#if 0
#line 433
{ 
#line 439
} 
#endif
#line 442 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\texture_indirect_functions.h"
template< class T> static typename __nv_itex_trait< T> ::type 
#line 443
tex2DGrad(T *ptr, ::cudaTextureObject_t obj, float x, float y, ::float2 dPdx, ::float2 dPdy) 
#line 444
{int volatile ___ = 1;(void)ptr;(void)obj;(void)x;(void)y;(void)dPdx;(void)dPdy;
#line 449
::exit(___);}
#if 0
#line 444
{ 
#line 449
} 
#endif
#line 451 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\texture_indirect_functions.h"
template< class T> static T 
#line 452
tex2DGrad(::cudaTextureObject_t texObject, float x, float y, ::float2 dPdx, ::float2 dPdy) 
#line 453
{int volatile ___ = 1;(void)texObject;(void)x;(void)y;(void)dPdx;(void)dPdy;
#line 459
::exit(___);}
#if 0
#line 453
{ 
#line 459
} 
#endif
#line 462 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\texture_indirect_functions.h"
template< class T> static typename __nv_itex_trait< T> ::type 
#line 463
tex3DGrad(T *ptr, ::cudaTextureObject_t obj, float x, float y, float z, ::float4 dPdx, ::float4 dPdy) 
#line 464
{int volatile ___ = 1;(void)ptr;(void)obj;(void)x;(void)y;(void)z;(void)dPdx;(void)dPdy;
#line 468
::exit(___);}
#if 0
#line 464
{ 
#line 468
} 
#endif
#line 470 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\texture_indirect_functions.h"
template< class T> static T 
#line 471
tex3DGrad(::cudaTextureObject_t texObject, float x, float y, float z, ::float4 dPdx, ::float4 dPdy) 
#line 472
{int volatile ___ = 1;(void)texObject;(void)x;(void)y;(void)z;(void)dPdx;(void)dPdy;
#line 478
::exit(___);}
#if 0
#line 472
{ 
#line 478
} 
#endif
#line 481 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\texture_indirect_functions.h"
template< class T> static typename __nv_itex_trait< T> ::type 
#line 482
tex1DLayeredGrad(T *ptr, ::cudaTextureObject_t obj, float x, int layer, float dPdx, float dPdy) 
#line 483
{int volatile ___ = 1;(void)ptr;(void)obj;(void)x;(void)layer;(void)dPdx;(void)dPdy;
#line 487
::exit(___);}
#if 0
#line 483
{ 
#line 487
} 
#endif
#line 489 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\texture_indirect_functions.h"
template< class T> static T 
#line 490
tex1DLayeredGrad(::cudaTextureObject_t texObject, float x, int layer, float dPdx, float dPdy) 
#line 491
{int volatile ___ = 1;(void)texObject;(void)x;(void)layer;(void)dPdx;(void)dPdy;
#line 497
::exit(___);}
#if 0
#line 491
{ 
#line 497
} 
#endif
#line 500 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\texture_indirect_functions.h"
template< class T> static typename __nv_itex_trait< T> ::type 
#line 501
tex2DLayeredGrad(T *ptr, ::cudaTextureObject_t obj, float x, float y, int layer, ::float2 dPdx, ::float2 dPdy) 
#line 502
{int volatile ___ = 1;(void)ptr;(void)obj;(void)x;(void)y;(void)layer;(void)dPdx;(void)dPdy;
#line 506
::exit(___);}
#if 0
#line 502
{ 
#line 506
} 
#endif
#line 508 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\texture_indirect_functions.h"
template< class T> static T 
#line 509
tex2DLayeredGrad(::cudaTextureObject_t texObject, float x, float y, int layer, ::float2 dPdx, ::float2 dPdy) 
#line 510
{int volatile ___ = 1;(void)texObject;(void)x;(void)y;(void)layer;(void)dPdx;(void)dPdy;
#line 516
::exit(___);}
#if 0
#line 510
{ 
#line 516
} 
#endif
#line 519 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\texture_indirect_functions.h"
template< class T> static typename __nv_itex_trait< T> ::type 
#line 520
texCubemapLayeredGrad(T *ptr, ::cudaTextureObject_t obj, float x, float y, float z, int layer, ::float4 dPdx, ::float4 dPdy) 
#line 521
{int volatile ___ = 1;(void)ptr;(void)obj;(void)x;(void)y;(void)z;(void)layer;(void)dPdx;(void)dPdy;
#line 525
::exit(___);}
#if 0
#line 521
{ 
#line 525
} 
#endif
#line 527 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\texture_indirect_functions.h"
template< class T> static T 
#line 528
texCubemapLayeredGrad(::cudaTextureObject_t texObject, float x, float y, float z, int layer, ::float4 dPdx, ::float4 dPdy) 
#line 529
{int volatile ___ = 1;(void)texObject;(void)x;(void)y;(void)z;(void)layer;(void)dPdx;(void)dPdy;
#line 535
::exit(___);}
#if 0
#line 529
{ 
#line 535
} 
#endif
#line 60 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\surface_indirect_functions.h"
template< class T> struct __nv_isurf_trait { }; 
#line 61
template<> struct __nv_isurf_trait< char>  { typedef void type; }; 
#line 62
template<> struct __nv_isurf_trait< signed char>  { typedef void type; }; 
#line 63
template<> struct __nv_isurf_trait< char1>  { typedef void type; }; 
#line 64
template<> struct __nv_isurf_trait< unsigned char>  { typedef void type; }; 
#line 65
template<> struct __nv_isurf_trait< uchar1>  { typedef void type; }; 
#line 66
template<> struct __nv_isurf_trait< short>  { typedef void type; }; 
#line 67
template<> struct __nv_isurf_trait< short1>  { typedef void type; }; 
#line 68
template<> struct __nv_isurf_trait< unsigned short>  { typedef void type; }; 
#line 69
template<> struct __nv_isurf_trait< ushort1>  { typedef void type; }; 
#line 70
template<> struct __nv_isurf_trait< int>  { typedef void type; }; 
#line 71
template<> struct __nv_isurf_trait< int1>  { typedef void type; }; 
#line 72
template<> struct __nv_isurf_trait< unsigned>  { typedef void type; }; 
#line 73
template<> struct __nv_isurf_trait< uint1>  { typedef void type; }; 
#line 74
template<> struct __nv_isurf_trait< __int64>  { typedef void type; }; 
#line 75
template<> struct __nv_isurf_trait< longlong1>  { typedef void type; }; 
#line 76
template<> struct __nv_isurf_trait< unsigned __int64>  { typedef void type; }; 
#line 77
template<> struct __nv_isurf_trait< ulonglong1>  { typedef void type; }; 
#line 78
template<> struct __nv_isurf_trait< float>  { typedef void type; }; 
#line 79
template<> struct __nv_isurf_trait< float1>  { typedef void type; }; 
#line 81
template<> struct __nv_isurf_trait< char2>  { typedef void type; }; 
#line 82
template<> struct __nv_isurf_trait< uchar2>  { typedef void type; }; 
#line 83
template<> struct __nv_isurf_trait< short2>  { typedef void type; }; 
#line 84
template<> struct __nv_isurf_trait< ushort2>  { typedef void type; }; 
#line 85
template<> struct __nv_isurf_trait< int2>  { typedef void type; }; 
#line 86
template<> struct __nv_isurf_trait< uint2>  { typedef void type; }; 
#line 87
template<> struct __nv_isurf_trait< longlong2>  { typedef void type; }; 
#line 88
template<> struct __nv_isurf_trait< ulonglong2>  { typedef void type; }; 
#line 89
template<> struct __nv_isurf_trait< float2>  { typedef void type; }; 
#line 91
template<> struct __nv_isurf_trait< char4>  { typedef void type; }; 
#line 92
template<> struct __nv_isurf_trait< uchar4>  { typedef void type; }; 
#line 93
template<> struct __nv_isurf_trait< short4>  { typedef void type; }; 
#line 94
template<> struct __nv_isurf_trait< ushort4>  { typedef void type; }; 
#line 95
template<> struct __nv_isurf_trait< int4>  { typedef void type; }; 
#line 96
template<> struct __nv_isurf_trait< uint4>  { typedef void type; }; 
#line 97
template<> struct __nv_isurf_trait< float4>  { typedef void type; }; 
#line 100
template< class T> static typename __nv_isurf_trait< T> ::type 
#line 101
surf1Dread(T *ptr, ::cudaSurfaceObject_t obj, int x, ::cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
#line 102
{int volatile ___ = 1;(void)ptr;(void)obj;(void)x;(void)mode;
#line 106
::exit(___);}
#if 0
#line 102
{ 
#line 106
} 
#endif
#line 108 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\surface_indirect_functions.h"
template< class T> static T 
#line 109
surf1Dread(::cudaSurfaceObject_t surfObject, int x, ::cudaSurfaceBoundaryMode boundaryMode = cudaBoundaryModeTrap) 
#line 110
{int volatile ___ = 1;(void)surfObject;(void)x;(void)boundaryMode;
#line 116
::exit(___);}
#if 0
#line 110
{ 
#line 116
} 
#endif
#line 118 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\surface_indirect_functions.h"
template< class T> static typename __nv_isurf_trait< T> ::type 
#line 119
surf2Dread(T *ptr, ::cudaSurfaceObject_t obj, int x, int y, ::cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
#line 120
{int volatile ___ = 1;(void)ptr;(void)obj;(void)x;(void)y;(void)mode;
#line 124
::exit(___);}
#if 0
#line 120
{ 
#line 124
} 
#endif
#line 126 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\surface_indirect_functions.h"
template< class T> static T 
#line 127
surf2Dread(::cudaSurfaceObject_t surfObject, int x, int y, ::cudaSurfaceBoundaryMode boundaryMode = cudaBoundaryModeTrap) 
#line 128
{int volatile ___ = 1;(void)surfObject;(void)x;(void)y;(void)boundaryMode;
#line 134
::exit(___);}
#if 0
#line 128
{ 
#line 134
} 
#endif
#line 137 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\surface_indirect_functions.h"
template< class T> static typename __nv_isurf_trait< T> ::type 
#line 138
surf3Dread(T *ptr, ::cudaSurfaceObject_t obj, int x, int y, int z, ::cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
#line 139
{int volatile ___ = 1;(void)ptr;(void)obj;(void)x;(void)y;(void)z;(void)mode;
#line 143
::exit(___);}
#if 0
#line 139
{ 
#line 143
} 
#endif
#line 145 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\surface_indirect_functions.h"
template< class T> static T 
#line 146
surf3Dread(::cudaSurfaceObject_t surfObject, int x, int y, int z, ::cudaSurfaceBoundaryMode boundaryMode = cudaBoundaryModeTrap) 
#line 147
{int volatile ___ = 1;(void)surfObject;(void)x;(void)y;(void)z;(void)boundaryMode;
#line 153
::exit(___);}
#if 0
#line 147
{ 
#line 153
} 
#endif
#line 155 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\surface_indirect_functions.h"
template< class T> static typename __nv_isurf_trait< T> ::type 
#line 156
surf1DLayeredread(T *ptr, ::cudaSurfaceObject_t obj, int x, int layer, ::cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
#line 157
{int volatile ___ = 1;(void)ptr;(void)obj;(void)x;(void)layer;(void)mode;
#line 161
::exit(___);}
#if 0
#line 157
{ 
#line 161
} 
#endif
#line 163 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\surface_indirect_functions.h"
template< class T> static T 
#line 164
surf1DLayeredread(::cudaSurfaceObject_t surfObject, int x, int layer, ::cudaSurfaceBoundaryMode boundaryMode = cudaBoundaryModeTrap) 
#line 165
{int volatile ___ = 1;(void)surfObject;(void)x;(void)layer;(void)boundaryMode;
#line 171
::exit(___);}
#if 0
#line 165
{ 
#line 171
} 
#endif
#line 173 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\surface_indirect_functions.h"
template< class T> static typename __nv_isurf_trait< T> ::type 
#line 174
surf2DLayeredread(T *ptr, ::cudaSurfaceObject_t obj, int x, int y, int layer, ::cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
#line 175
{int volatile ___ = 1;(void)ptr;(void)obj;(void)x;(void)y;(void)layer;(void)mode;
#line 179
::exit(___);}
#if 0
#line 175
{ 
#line 179
} 
#endif
#line 181 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\surface_indirect_functions.h"
template< class T> static T 
#line 182
surf2DLayeredread(::cudaSurfaceObject_t surfObject, int x, int y, int layer, ::cudaSurfaceBoundaryMode boundaryMode = cudaBoundaryModeTrap) 
#line 183
{int volatile ___ = 1;(void)surfObject;(void)x;(void)y;(void)layer;(void)boundaryMode;
#line 189
::exit(___);}
#if 0
#line 183
{ 
#line 189
} 
#endif
#line 191 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\surface_indirect_functions.h"
template< class T> static typename __nv_isurf_trait< T> ::type 
#line 192
surfCubemapread(T *ptr, ::cudaSurfaceObject_t obj, int x, int y, int face, ::cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
#line 193
{int volatile ___ = 1;(void)ptr;(void)obj;(void)x;(void)y;(void)face;(void)mode;
#line 197
::exit(___);}
#if 0
#line 193
{ 
#line 197
} 
#endif
#line 199 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\surface_indirect_functions.h"
template< class T> static T 
#line 200
surfCubemapread(::cudaSurfaceObject_t surfObject, int x, int y, int face, ::cudaSurfaceBoundaryMode boundaryMode = cudaBoundaryModeTrap) 
#line 201
{int volatile ___ = 1;(void)surfObject;(void)x;(void)y;(void)face;(void)boundaryMode;
#line 207
::exit(___);}
#if 0
#line 201
{ 
#line 207
} 
#endif
#line 209 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\surface_indirect_functions.h"
template< class T> static typename __nv_isurf_trait< T> ::type 
#line 210
surfCubemapLayeredread(T *ptr, ::cudaSurfaceObject_t obj, int x, int y, int layerface, ::cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
#line 211
{int volatile ___ = 1;(void)ptr;(void)obj;(void)x;(void)y;(void)layerface;(void)mode;
#line 215
::exit(___);}
#if 0
#line 211
{ 
#line 215
} 
#endif
#line 217 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\surface_indirect_functions.h"
template< class T> static T 
#line 218
surfCubemapLayeredread(::cudaSurfaceObject_t surfObject, int x, int y, int layerface, ::cudaSurfaceBoundaryMode boundaryMode = cudaBoundaryModeTrap) 
#line 219
{int volatile ___ = 1;(void)surfObject;(void)x;(void)y;(void)layerface;(void)boundaryMode;
#line 225
::exit(___);}
#if 0
#line 219
{ 
#line 225
} 
#endif
#line 227 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\surface_indirect_functions.h"
template< class T> static typename __nv_isurf_trait< T> ::type 
#line 228
surf1Dwrite(T val, ::cudaSurfaceObject_t obj, int x, ::cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
#line 229
{int volatile ___ = 1;(void)val;(void)obj;(void)x;(void)mode;
#line 233
::exit(___);}
#if 0
#line 229
{ 
#line 233
} 
#endif
#line 235 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\surface_indirect_functions.h"
template< class T> static typename __nv_isurf_trait< T> ::type 
#line 236
surf2Dwrite(T val, ::cudaSurfaceObject_t obj, int x, int y, ::cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
#line 237
{int volatile ___ = 1;(void)val;(void)obj;(void)x;(void)y;(void)mode;
#line 241
::exit(___);}
#if 0
#line 237
{ 
#line 241
} 
#endif
#line 243 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\surface_indirect_functions.h"
template< class T> static typename __nv_isurf_trait< T> ::type 
#line 244
surf3Dwrite(T val, ::cudaSurfaceObject_t obj, int x, int y, int z, ::cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
#line 245
{int volatile ___ = 1;(void)val;(void)obj;(void)x;(void)y;(void)z;(void)mode;
#line 249
::exit(___);}
#if 0
#line 245
{ 
#line 249
} 
#endif
#line 251 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\surface_indirect_functions.h"
template< class T> static typename __nv_isurf_trait< T> ::type 
#line 252
surf1DLayeredwrite(T val, ::cudaSurfaceObject_t obj, int x, int layer, ::cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
#line 253
{int volatile ___ = 1;(void)val;(void)obj;(void)x;(void)layer;(void)mode;
#line 257
::exit(___);}
#if 0
#line 253
{ 
#line 257
} 
#endif
#line 259 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\surface_indirect_functions.h"
template< class T> static typename __nv_isurf_trait< T> ::type 
#line 260
surf2DLayeredwrite(T val, ::cudaSurfaceObject_t obj, int x, int y, int layer, ::cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
#line 261
{int volatile ___ = 1;(void)val;(void)obj;(void)x;(void)y;(void)layer;(void)mode;
#line 265
::exit(___);}
#if 0
#line 261
{ 
#line 265
} 
#endif
#line 267 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\surface_indirect_functions.h"
template< class T> static typename __nv_isurf_trait< T> ::type 
#line 268
surfCubemapwrite(T val, ::cudaSurfaceObject_t obj, int x, int y, int face, ::cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
#line 269
{int volatile ___ = 1;(void)val;(void)obj;(void)x;(void)y;(void)face;(void)mode;
#line 273
::exit(___);}
#if 0
#line 269
{ 
#line 273
} 
#endif
#line 275 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\surface_indirect_functions.h"
template< class T> static typename __nv_isurf_trait< T> ::type 
#line 276
surfCubemapLayeredwrite(T val, ::cudaSurfaceObject_t obj, int x, int y, int layerface, ::cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
#line 277
{int volatile ___ = 1;(void)val;(void)obj;(void)x;(void)y;(void)layerface;(void)mode;
#line 281
::exit(___);}
#if 0
#line 277
{ 
#line 281
} 
#endif
#line 68 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\device_launch_parameters.h"
extern "C" {
#line 71 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v9.1\\include\\device_launch_parameters.h"
extern const uint3 __device_builtin_variable_threadIdx; 
#line 72
extern const uint3 __device_builtin_variable_blockIdx; 
#line 73
extern const dim3 __device_builtin_variable_blockDim; 
#line 74
extern const dim3 __device_builtin_variable_gridDim; 
#line 75
extern const int __device_builtin_variable_warpSize; 
#line 80
}
#line 185 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v9.1\\include\\cuda_runtime.h"
template< class T> static __inline ::cudaError_t 
#line 186
cudaLaunchKernel(const T *
#line 187
func, ::dim3 
#line 188
gridDim, ::dim3 
#line 189
blockDim, void **
#line 190
args, ::size_t 
#line 191
sharedMem = 0, ::cudaStream_t 
#line 192
stream = 0) 
#line 194
{ 
#line 195
return ::cudaLaunchKernel((const void *)func, gridDim, blockDim, args, sharedMem, stream); 
#line 196
} 
#line 245
template< class T> static __inline ::cudaError_t 
#line 246
cudaLaunchCooperativeKernel(const T *
#line 247
func, ::dim3 
#line 248
gridDim, ::dim3 
#line 249
blockDim, void **
#line 250
args, ::size_t 
#line 251
sharedMem = 0, ::cudaStream_t 
#line 252
stream = 0) 
#line 254
{ 
#line 255
return ::cudaLaunchCooperativeKernel((const void *)func, gridDim, blockDim, args, sharedMem, stream); 
#line 256
} 
#line 283
template< class T> static __inline ::cudaError_t 
#line 284
cudaSetupArgument(T 
#line 285
arg, ::size_t 
#line 286
offset) 
#line 288
{ 
#line 289
return ::cudaSetupArgument((const void *)(&arg), sizeof(T), offset); 
#line 290
} 
#line 322
static __inline cudaError_t cudaEventCreate(cudaEvent_t *
#line 323
event, unsigned 
#line 324
flags) 
#line 326
{ 
#line 327
return ::cudaEventCreateWithFlags(event, flags); 
#line 328
} 
#line 385
static __inline cudaError_t cudaMallocHost(void **
#line 386
ptr, size_t 
#line 387
size, unsigned 
#line 388
flags) 
#line 390
{ 
#line 391
return ::cudaHostAlloc(ptr, size, flags); 
#line 392
} 
#line 394
template< class T> static __inline ::cudaError_t 
#line 395
cudaHostAlloc(T **
#line 396
ptr, ::size_t 
#line 397
size, unsigned 
#line 398
flags) 
#line 400
{ 
#line 401
return ::cudaHostAlloc((void **)((void *)ptr), size, flags); 
#line 402
} 
#line 404
template< class T> static __inline ::cudaError_t 
#line 405
cudaHostGetDevicePointer(T **
#line 406
pDevice, void *
#line 407
pHost, unsigned 
#line 408
flags) 
#line 410
{ 
#line 411
return ::cudaHostGetDevicePointer((void **)((void *)pDevice), pHost, flags); 
#line 412
} 
#line 512
template< class T> static __inline ::cudaError_t 
#line 513
cudaMallocManaged(T **
#line 514
devPtr, ::size_t 
#line 515
size, unsigned 
#line 516
flags = 1) 
#line 518
{ 
#line 519
return ::cudaMallocManaged((void **)((void *)devPtr), size, flags); 
#line 520
} 
#line 591
template< class T> static __inline ::cudaError_t 
#line 592
cudaStreamAttachMemAsync(::cudaStream_t 
#line 593
stream, T *
#line 594
devPtr, ::size_t 
#line 595
length = 0, unsigned 
#line 596
flags = 4) 
#line 598
{ 
#line 599
return ::cudaStreamAttachMemAsync(stream, (void *)devPtr, length, flags); 
#line 600
} 
#line 602
template< class T> __inline ::cudaError_t 
#line 603
cudaMalloc(T **
#line 604
devPtr, ::size_t 
#line 605
size) 
#line 607
{ 
#line 608
return ::cudaMalloc((void **)((void *)devPtr), size); 
#line 609
} 
#line 611
template< class T> static __inline ::cudaError_t 
#line 612
cudaMallocHost(T **
#line 613
ptr, ::size_t 
#line 614
size, unsigned 
#line 615
flags = 0) 
#line 617
{ 
#line 618
return cudaMallocHost((void **)((void *)ptr), size, flags); 
#line 619
} 
#line 621
template< class T> static __inline ::cudaError_t 
#line 622
cudaMallocPitch(T **
#line 623
devPtr, ::size_t *
#line 624
pitch, ::size_t 
#line 625
width, ::size_t 
#line 626
height) 
#line 628
{ 
#line 629
return ::cudaMallocPitch((void **)((void *)devPtr), pitch, width, height); 
#line 630
} 
#line 667
template< class T> static __inline ::cudaError_t 
#line 668
cudaMemcpyToSymbol(const T &
#line 669
symbol, const void *
#line 670
src, ::size_t 
#line 671
count, ::size_t 
#line 672
offset = 0, ::cudaMemcpyKind 
#line 673
kind = cudaMemcpyHostToDevice) 
#line 675
{ 
#line 676
return ::cudaMemcpyToSymbol((const void *)(&symbol), src, count, offset, kind); 
#line 677
} 
#line 719
template< class T> static __inline ::cudaError_t 
#line 720
cudaMemcpyToSymbolAsync(const T &
#line 721
symbol, const void *
#line 722
src, ::size_t 
#line 723
count, ::size_t 
#line 724
offset = 0, ::cudaMemcpyKind 
#line 725
kind = cudaMemcpyHostToDevice, ::cudaStream_t 
#line 726
stream = 0) 
#line 728
{ 
#line 729
return ::cudaMemcpyToSymbolAsync((const void *)(&symbol), src, count, offset, kind, stream); 
#line 730
} 
#line 765
template< class T> static __inline ::cudaError_t 
#line 766
cudaMemcpyFromSymbol(void *
#line 767
dst, const T &
#line 768
symbol, ::size_t 
#line 769
count, ::size_t 
#line 770
offset = 0, ::cudaMemcpyKind 
#line 771
kind = cudaMemcpyDeviceToHost) 
#line 773
{ 
#line 774
return ::cudaMemcpyFromSymbol(dst, (const void *)(&symbol), count, offset, kind); 
#line 775
} 
#line 817
template< class T> static __inline ::cudaError_t 
#line 818
cudaMemcpyFromSymbolAsync(void *
#line 819
dst, const T &
#line 820
symbol, ::size_t 
#line 821
count, ::size_t 
#line 822
offset = 0, ::cudaMemcpyKind 
#line 823
kind = cudaMemcpyDeviceToHost, ::cudaStream_t 
#line 824
stream = 0) 
#line 826
{ 
#line 827
return ::cudaMemcpyFromSymbolAsync(dst, (const void *)(&symbol), count, offset, kind, stream); 
#line 828
} 
#line 851
template< class T> static __inline ::cudaError_t 
#line 852
cudaGetSymbolAddress(void **
#line 853
devPtr, const T &
#line 854
symbol) 
#line 856
{ 
#line 857
return ::cudaGetSymbolAddress(devPtr, (const void *)(&symbol)); 
#line 858
} 
#line 881
template< class T> static __inline ::cudaError_t 
#line 882
cudaGetSymbolSize(::size_t *
#line 883
size, const T &
#line 884
symbol) 
#line 886
{ 
#line 887
return ::cudaGetSymbolSize(size, (const void *)(&symbol)); 
#line 888
} 
#line 923
template< class T, int dim, cudaTextureReadMode readMode> static __inline ::cudaError_t 
#line 924
cudaBindTexture(::size_t *
#line 925
offset, const texture< T, dim, readMode>  &
#line 926
tex, const void *
#line 927
devPtr, const ::cudaChannelFormatDesc &
#line 928
desc, ::size_t 
#line 929
size = 4294967295U) 
#line 931
{ 
#line 932
return ::cudaBindTexture(offset, &tex, devPtr, &desc, size); 
#line 933
} 
#line 967
template< class T, int dim, cudaTextureReadMode readMode> static __inline ::cudaError_t 
#line 968
cudaBindTexture(::size_t *
#line 969
offset, const texture< T, dim, readMode>  &
#line 970
tex, const void *
#line 971
devPtr, ::size_t 
#line 972
size = 4294967295U) 
#line 974
{ 
#line 975
return cudaBindTexture(offset, tex, devPtr, (tex.channelDesc), size); 
#line 976
} 
#line 1022
template< class T, int dim, cudaTextureReadMode readMode> static __inline ::cudaError_t 
#line 1023
cudaBindTexture2D(::size_t *
#line 1024
offset, const texture< T, dim, readMode>  &
#line 1025
tex, const void *
#line 1026
devPtr, const ::cudaChannelFormatDesc &
#line 1027
desc, ::size_t 
#line 1028
width, ::size_t 
#line 1029
height, ::size_t 
#line 1030
pitch) 
#line 1032
{ 
#line 1033
return ::cudaBindTexture2D(offset, &tex, devPtr, &desc, width, height, pitch); 
#line 1034
} 
#line 1079
template< class T, int dim, cudaTextureReadMode readMode> static __inline ::cudaError_t 
#line 1080
cudaBindTexture2D(::size_t *
#line 1081
offset, const texture< T, dim, readMode>  &
#line 1082
tex, const void *
#line 1083
devPtr, ::size_t 
#line 1084
width, ::size_t 
#line 1085
height, ::size_t 
#line 1086
pitch) 
#line 1088
{ 
#line 1089
return ::cudaBindTexture2D(offset, &tex, devPtr, &(tex.channelDesc), width, height, pitch); 
#line 1090
} 
#line 1120
template< class T, int dim, cudaTextureReadMode readMode> static __inline ::cudaError_t 
#line 1121
cudaBindTextureToArray(const texture< T, dim, readMode>  &
#line 1122
tex, ::cudaArray_const_t 
#line 1123
array, const ::cudaChannelFormatDesc &
#line 1124
desc) 
#line 1126
{ 
#line 1127
return ::cudaBindTextureToArray(&tex, array, &desc); 
#line 1128
} 
#line 1157
template< class T, int dim, cudaTextureReadMode readMode> static __inline ::cudaError_t 
#line 1158
cudaBindTextureToArray(const texture< T, dim, readMode>  &
#line 1159
tex, ::cudaArray_const_t 
#line 1160
array) 
#line 1162
{ 
#line 1163
::cudaChannelFormatDesc desc; 
#line 1164
::cudaError_t err = ::cudaGetChannelDesc(&desc, array); 
#line 1166
return (err == (cudaSuccess)) ? cudaBindTextureToArray(tex, array, desc) : err; 
#line 1167
} 
#line 1197
template< class T, int dim, cudaTextureReadMode readMode> static __inline ::cudaError_t 
#line 1198
cudaBindTextureToMipmappedArray(const texture< T, dim, readMode>  &
#line 1199
tex, ::cudaMipmappedArray_const_t 
#line 1200
mipmappedArray, const ::cudaChannelFormatDesc &
#line 1201
desc) 
#line 1203
{ 
#line 1204
return ::cudaBindTextureToMipmappedArray(&tex, mipmappedArray, &desc); 
#line 1205
} 
#line 1234
template< class T, int dim, cudaTextureReadMode readMode> static __inline ::cudaError_t 
#line 1235
cudaBindTextureToMipmappedArray(const texture< T, dim, readMode>  &
#line 1236
tex, ::cudaMipmappedArray_const_t 
#line 1237
mipmappedArray) 
#line 1239
{ 
#line 1240
::cudaChannelFormatDesc desc; 
#line 1241
::cudaArray_t levelArray; 
#line 1242
::cudaError_t err = ::cudaGetMipmappedArrayLevel(&levelArray, mipmappedArray, 0); 
#line 1244
if (err != (cudaSuccess)) { 
#line 1245
return err; 
#line 1246
}  
#line 1247
err = ::cudaGetChannelDesc(&desc, levelArray); 
#line 1249
return (err == (cudaSuccess)) ? cudaBindTextureToMipmappedArray(tex, mipmappedArray, desc) : err; 
#line 1250
} 
#line 1273
template< class T, int dim, cudaTextureReadMode readMode> static __inline ::cudaError_t 
#line 1274
cudaUnbindTexture(const texture< T, dim, readMode>  &
#line 1275
tex) 
#line 1277
{ 
#line 1278
return ::cudaUnbindTexture(&tex); 
#line 1279
} 
#line 1307
template< class T, int dim, cudaTextureReadMode readMode> static __inline ::cudaError_t 
#line 1308
cudaGetTextureAlignmentOffset(::size_t *
#line 1309
offset, const texture< T, dim, readMode>  &
#line 1310
tex) 
#line 1312
{ 
#line 1313
return ::cudaGetTextureAlignmentOffset(offset, &tex); 
#line 1314
} 
#line 1359
template< class T> static __inline ::cudaError_t 
#line 1360
cudaFuncSetCacheConfig(T *
#line 1361
func, ::cudaFuncCache 
#line 1362
cacheConfig) 
#line 1364
{ 
#line 1365
return ::cudaFuncSetCacheConfig((const void *)func, cacheConfig); 
#line 1366
} 
#line 1368
template< class T> static __inline ::cudaError_t 
#line 1369
cudaFuncSetSharedMemConfig(T *
#line 1370
func, ::cudaSharedMemConfig 
#line 1371
config) 
#line 1373
{ 
#line 1374
return ::cudaFuncSetSharedMemConfig((const void *)func, config); 
#line 1375
} 
#line 1404
template< class T> __inline ::cudaError_t 
#line 1405
cudaOccupancyMaxActiveBlocksPerMultiprocessor(int *
#line 1406
numBlocks, T 
#line 1407
func, int 
#line 1408
blockSize, ::size_t 
#line 1409
dynamicSMemSize) 
#line 1410
{ 
#line 1411
return ::cudaOccupancyMaxActiveBlocksPerMultiprocessorWithFlags(numBlocks, (const void *)func, blockSize, dynamicSMemSize, 0); 
#line 1412
} 
#line 1455
template< class T> __inline ::cudaError_t 
#line 1456
cudaOccupancyMaxActiveBlocksPerMultiprocessorWithFlags(int *
#line 1457
numBlocks, T 
#line 1458
func, int 
#line 1459
blockSize, ::size_t 
#line 1460
dynamicSMemSize, unsigned 
#line 1461
flags) 
#line 1462
{ 
#line 1463
return ::cudaOccupancyMaxActiveBlocksPerMultiprocessorWithFlags(numBlocks, (const void *)func, blockSize, dynamicSMemSize, flags); 
#line 1464
} 
#line 1469
class __cudaOccupancyB2DHelper { 
#line 1470
size_t n; 
#line 1472
public: __cudaOccupancyB2DHelper(size_t n_) : n(n_) { } 
#line 1473
size_t operator()(int) 
#line 1474
{ 
#line 1475
return n; 
#line 1476
} 
#line 1477
}; 
#line 1524
template< class UnaryFunction, class T> static __inline ::cudaError_t 
#line 1525
cudaOccupancyMaxPotentialBlockSizeVariableSMemWithFlags(int *
#line 1526
minGridSize, int *
#line 1527
blockSize, T 
#line 1528
func, UnaryFunction 
#line 1529
blockSizeToDynamicSMemSize, int 
#line 1530
blockSizeLimit = 0, unsigned 
#line 1531
flags = 0) 
#line 1532
{ 
#line 1533
::cudaError_t status; 
#line 1536
int device; 
#line 1537
::cudaFuncAttributes attr; 
#line 1540
int maxThreadsPerMultiProcessor; 
#line 1541
int warpSize; 
#line 1542
int devMaxThreadsPerBlock; 
#line 1543
int multiProcessorCount; 
#line 1544
int funcMaxThreadsPerBlock; 
#line 1545
int occupancyLimit; 
#line 1546
int granularity; 
#line 1549
int maxBlockSize = 0; 
#line 1550
int numBlocks = 0; 
#line 1551
int maxOccupancy = 0; 
#line 1554
int blockSizeToTryAligned; 
#line 1555
int blockSizeToTry; 
#line 1556
int blockSizeLimitAligned; 
#line 1557
int occupancyInBlocks; 
#line 1558
int occupancyInThreads; 
#line 1559
::size_t dynamicSMemSize; 
#line 1565
if (((!minGridSize) || (!blockSize)) || (!func)) { 
#line 1566
return cudaErrorInvalidValue; 
#line 1567
}  
#line 1573
status = ::cudaGetDevice(&device); 
#line 1574
if (status != (cudaSuccess)) { 
#line 1575
return status; 
#line 1576
}  
#line 1578
status = cudaDeviceGetAttribute(&maxThreadsPerMultiProcessor, cudaDevAttrMaxThreadsPerMultiProcessor, device); 
#line 1582
if (status != (cudaSuccess)) { 
#line 1583
return status; 
#line 1584
}  
#line 1586
status = cudaDeviceGetAttribute(&warpSize, cudaDevAttrWarpSize, device); 
#line 1590
if (status != (cudaSuccess)) { 
#line 1591
return status; 
#line 1592
}  
#line 1594
status = cudaDeviceGetAttribute(&devMaxThreadsPerBlock, cudaDevAttrMaxThreadsPerBlock, device); 
#line 1598
if (status != (cudaSuccess)) { 
#line 1599
return status; 
#line 1600
}  
#line 1602
status = cudaDeviceGetAttribute(&multiProcessorCount, cudaDevAttrMultiProcessorCount, device); 
#line 1606
if (status != (cudaSuccess)) { 
#line 1607
return status; 
#line 1608
}  
#line 1610
status = cudaFuncGetAttributes(&attr, func); 
#line 1611
if (status != (cudaSuccess)) { 
#line 1612
return status; 
#line 1613
}  
#line 1615
funcMaxThreadsPerBlock = (attr.maxThreadsPerBlock); 
#line 1621
occupancyLimit = maxThreadsPerMultiProcessor; 
#line 1622
granularity = warpSize; 
#line 1624
if (blockSizeLimit == 0) { 
#line 1625
blockSizeLimit = devMaxThreadsPerBlock; 
#line 1626
}  
#line 1628
if (devMaxThreadsPerBlock < blockSizeLimit) { 
#line 1629
blockSizeLimit = devMaxThreadsPerBlock; 
#line 1630
}  
#line 1632
if (funcMaxThreadsPerBlock < blockSizeLimit) { 
#line 1633
blockSizeLimit = funcMaxThreadsPerBlock; 
#line 1634
}  
#line 1636
blockSizeLimitAligned = (((blockSizeLimit + (granularity - 1)) / granularity) * granularity); 
#line 1638
for (blockSizeToTryAligned = blockSizeLimitAligned; blockSizeToTryAligned > 0; blockSizeToTryAligned -= granularity) { 
#line 1642
if (blockSizeLimit < blockSizeToTryAligned) { 
#line 1643
blockSizeToTry = blockSizeLimit; 
#line 1644
} else { 
#line 1645
blockSizeToTry = blockSizeToTryAligned; 
#line 1646
}  
#line 1648
dynamicSMemSize = blockSizeToDynamicSMemSize(blockSizeToTry); 
#line 1650
status = cudaOccupancyMaxActiveBlocksPerMultiprocessorWithFlags(&occupancyInBlocks, func, blockSizeToTry, dynamicSMemSize, flags); 
#line 1657
if (status != (cudaSuccess)) { 
#line 1658
return status; 
#line 1659
}  
#line 1661
occupancyInThreads = (blockSizeToTry * occupancyInBlocks); 
#line 1663
if (occupancyInThreads > maxOccupancy) { 
#line 1664
maxBlockSize = blockSizeToTry; 
#line 1665
numBlocks = occupancyInBlocks; 
#line 1666
maxOccupancy = occupancyInThreads; 
#line 1667
}  
#line 1671
if (occupancyLimit == maxOccupancy) { 
#line 1672
break; 
#line 1673
}  
#line 1674
}  
#line 1682
(*minGridSize) = (numBlocks * multiProcessorCount); 
#line 1683
(*blockSize) = maxBlockSize; 
#line 1685
return status; 
#line 1686
} 
#line 1719
template< class UnaryFunction, class T> static __inline ::cudaError_t 
#line 1720
cudaOccupancyMaxPotentialBlockSizeVariableSMem(int *
#line 1721
minGridSize, int *
#line 1722
blockSize, T 
#line 1723
func, UnaryFunction 
#line 1724
blockSizeToDynamicSMemSize, int 
#line 1725
blockSizeLimit = 0) 
#line 1726
{ 
#line 1727
return cudaOccupancyMaxPotentialBlockSizeVariableSMemWithFlags(minGridSize, blockSize, func, blockSizeToDynamicSMemSize, blockSizeLimit, 0); 
#line 1728
} 
#line 1764
template< class T> static __inline ::cudaError_t 
#line 1765
cudaOccupancyMaxPotentialBlockSize(int *
#line 1766
minGridSize, int *
#line 1767
blockSize, T 
#line 1768
func, ::size_t 
#line 1769
dynamicSMemSize = 0, int 
#line 1770
blockSizeLimit = 0) 
#line 1771
{ 
#line 1772
return cudaOccupancyMaxPotentialBlockSizeVariableSMemWithFlags(minGridSize, blockSize, func, ((::__cudaOccupancyB2DHelper)(dynamicSMemSize)), blockSizeLimit, 0); 
#line 1773
} 
#line 1823
template< class T> static __inline ::cudaError_t 
#line 1824
cudaOccupancyMaxPotentialBlockSizeWithFlags(int *
#line 1825
minGridSize, int *
#line 1826
blockSize, T 
#line 1827
func, ::size_t 
#line 1828
dynamicSMemSize = 0, int 
#line 1829
blockSizeLimit = 0, unsigned 
#line 1830
flags = 0) 
#line 1831
{ 
#line 1832
return cudaOccupancyMaxPotentialBlockSizeVariableSMemWithFlags(minGridSize, blockSize, func, ((::__cudaOccupancyB2DHelper)(dynamicSMemSize)), blockSizeLimit, flags); 
#line 1833
} 
#line 1874
template< class T> static __inline ::cudaError_t 
#line 1875
cudaLaunch(T *
#line 1876
func) 
#line 1878
{ 
#line 1879
return ::cudaLaunch((const void *)func); 
#line 1880
} 
#line 1911
template< class T> __inline ::cudaError_t 
#line 1912
cudaFuncGetAttributes(::cudaFuncAttributes *
#line 1913
attr, T *
#line 1914
entry) 
#line 1916
{ 
#line 1917
return ::cudaFuncGetAttributes(attr, (const void *)entry); 
#line 1918
} 
#line 1953
template< class T> static __inline ::cudaError_t 
#line 1954
cudaFuncSetAttribute(T *
#line 1955
entry, ::cudaFuncAttribute 
#line 1956
attr, int 
#line 1957
value) 
#line 1959
{ 
#line 1960
return ::cudaFuncSetAttribute((const void *)entry, attr, value); 
#line 1961
} 
#line 1983
template< class T, int dim> static __inline ::cudaError_t 
#line 1984
cudaBindSurfaceToArray(const surface< T, dim>  &
#line 1985
surf, ::cudaArray_const_t 
#line 1986
array, const ::cudaChannelFormatDesc &
#line 1987
desc) 
#line 1989
{ 
#line 1990
return ::cudaBindSurfaceToArray(&surf, array, &desc); 
#line 1991
} 
#line 2012
template< class T, int dim> static __inline ::cudaError_t 
#line 2013
cudaBindSurfaceToArray(const surface< T, dim>  &
#line 2014
surf, ::cudaArray_const_t 
#line 2015
array) 
#line 2017
{ 
#line 2018
::cudaChannelFormatDesc desc; 
#line 2019
::cudaError_t err = ::cudaGetChannelDesc(&desc, array); 
#line 2021
return (err == (cudaSuccess)) ? cudaBindSurfaceToArray(surf, array, desc) : err; 
#line 2022
} 
#line 2036 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v9.1\\include\\cuda_runtime.h"
#pragma warning(pop)
#line 4 "c:/Users/nein/source/repos/flow_test/flow_test/pushrelabel.cu"
extern "C" {
#line 5
 __noinline__ void testOnGPU(int *capacityGPU, int *excessGPU, int *heightGPU, int 
#line 6
N, int s_x, int s_y, int t_x, int t_y, int *changed, int *mapGPU) ;
#if 0
#line 7
{ 
#line 9
int x = (__device_builtin_variable_threadIdx.x) + ((__device_builtin_variable_blockIdx.x) * (__device_builtin_variable_blockDim.x)); 
#line 10
int y = (__device_builtin_variable_threadIdx.y) + ((__device_builtin_variable_blockIdx.y) * (__device_builtin_variable_blockDim.y)); 
#line 11
int u = (y * N) + x; 
#line 14
if ((((s_y * N) + s_x) == u) || (((t_y * N) + t_x) == u)) { 
#line 15
return; 
#line 16
}  
#line 18
if ((excessGPU[u]) > 0) { 
#line 19
int e_temp = excessGPU[u]; 
#line 20
int h_temp = 2000000000; 
#line 21
int v_temp = (-1); 
#line 22
int u_to_v = (-1); 
#line 23
int v_to_u = (-1); 
#line 33
if ((capacityGPU[(4 * u) + 0]) > 0) { 
#line 34
int v = ((y - 1) * N) + x; 
#line 35
if ((heightGPU[v]) < h_temp) { 
#line 36
u_to_v = 0; 
#line 37
v_to_u = 2; 
#line 38
v_temp = v; 
#line 39
h_temp = (heightGPU[v]); 
#line 40
}  
#line 41
}  
#line 43
if ((capacityGPU[(4 * u) + 2]) > 0) { 
#line 44
int v = ((y + 1) * N) + x; 
#line 45
if ((heightGPU[v]) < h_temp) { 
#line 46
u_to_v = 2; 
#line 47
v_to_u = 0; 
#line 48
v_temp = v; 
#line 49
h_temp = (heightGPU[v]); 
#line 50
}  
#line 51
}  
#line 53
if ((capacityGPU[(4 * u) + 1]) > 0) { 
#line 54
int v = (y * N) + (x + 1); 
#line 55
if ((heightGPU[v]) < h_temp) { 
#line 56
u_to_v = 1; 
#line 57
v_to_u = 3; 
#line 58
v_temp = v; 
#line 59
h_temp = (heightGPU[v]); 
#line 60
}  
#line 61
}  
#line 63
if ((capacityGPU[(4 * u) + 3]) > 0) { 
#line 64
int v = (y * N) + (x - 1); 
#line 65
if ((heightGPU[v]) < h_temp) { 
#line 66
u_to_v = 3; 
#line 67
v_to_u = 1; 
#line 68
v_temp = v; 
#line 69
h_temp = (heightGPU[v]); 
#line 70
}  
#line 71
}  
#line 73
if (v_temp == (-1)) { 
#line 75
return; 
#line 76
}  
#line 78
if ((heightGPU[u]) > h_temp) { 
#line 79
int d = min(e_temp, capacityGPU[(4 * u) + u_to_v]); 
#line 80
atomicSub(&(capacityGPU[(4 * u) + u_to_v]), d); 
#line 81
atomicAdd(&(capacityGPU[(4 * v_temp) + v_to_u]), d); 
#line 83
atomicSub(&(excessGPU[u]), d); 
#line 84
atomicAdd(&(excessGPU[v_temp]), d); 
#line 87
} else { 
#line 88
(heightGPU[u]) = (h_temp + 1); 
#line 89
}  
#line 90
(*changed) = 1; 
#line 92
}  
#line 93
} 
#endif
#line 95 "c:/Users/nein/source/repos/flow_test/flow_test/pushrelabel.cu"
}
#line 1 "pushrelabel.cudafe1.stub.c"
#define _NV_ANON_NAMESPACE _GLOBAL__N__19_pushrelabel_cpp1_ii_4b4b810b
#line 1 "pushrelabel.cudafe1.stub.c"
#include "pushrelabel.cudafe1.stub.c"
#line 1 "pushrelabel.cudafe1.stub.c"
#undef _NV_ANON_NAMESPACE
