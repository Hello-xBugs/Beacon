/*-
 *
 * extc2: open source dns over http(s)
 * transport for cs. does not use the
 * smb beacon.
 *
-*/

#pragma once

#define H_NTDLL		0x1edab0ed	
#define H_KERNEL32	0x6ddb9555

#define H_LOCALLOCK	0x32064bd9
#define H_LOCALFREE	0x32030e92
#define H_LOCALSIZE	0x320a0beb
#define H_LOCALALLOC	0x72073b5b
#define H_LOCALUNLOCK	0xe1ba049c
#define H_LOCALREALLOC	0x1c44e892

#define H_FREELIBRARY	0x4ad9b11c
#define H_LOADLIBRARYA	0xb7072fdb
