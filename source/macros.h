/*-
 *
 * extc2: open source dns over http(s)
 * transport for cs. does not use the
 * smb beacon.
 *
-*/

#pragma once

#define DEFINESEC(x)	__attribute__((section(".text$" #x "" )))

#define HTONL(x)	__builtin_bswap32(x)
#define NTOHL(x)	__builtin_bswap32(x)

#define HTONS(x)	__builtin_bswap16(x)
#define NTOHS(x)	__builtin_bswap16(x)

#define FUNC(x)		__typeof__(x) * x

#define UPTR(x)		((ULONG_PTR)x)
#define CPTR(x)		((PVOID)x)
