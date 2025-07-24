#define _Addr int
#define _Int64 long long
#define _Reg int

// BEGIN QNX
#define __BYTE_ORDER 1234
// END QNX

#define __LONG_MAX 0x7fffffffL

#ifndef __cplusplus
typedef unsigned wchar_t;
#endif
typedef unsigned wint_t;

typedef int blksize_t;
typedef unsigned int nlink_t;

typedef float float_t;
typedef double double_t;

// QNX: max_align_t removed

typedef signed char     int8_t;
typedef short           int16_t;
typedef int             int32_t;
typedef long long       int64_t;
typedef long long       intmax_t;
typedef unsigned char   uint8_t;
typedef unsigned short  uint16_t;
typedef unsigned int    uint32_t;
typedef unsigned long long uint64_t;
typedef unsigned long long uintmax_t;

// Note: intptr_t, uintptr_t, ptrdiff_t, size_t, ssize_t are already defined by QNX headers
