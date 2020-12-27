/*-
 *
 * extc2: open source dns over http(s)
 * transport for cs. does not use the
 * smb beacon.
 *
-*/

#pragma once

typedef struct __attribute__((packed, scalar_storage_order("big-endian")))
{
	USHORT	Index;
	USHORT	Type;
	USHORT	Size;
	UCHAR	Buffer[0];
} SETTING, *PSETTING;
