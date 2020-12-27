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
 * HashString
 *
 * Purpose:
 *
 * Converts a string of the specified length
 * into a 32 bit DJB2 hash.
 *
-*/
DEFINESEC(B) ULONG HashString( IN PVOID Inp, IN ULONG Len );
