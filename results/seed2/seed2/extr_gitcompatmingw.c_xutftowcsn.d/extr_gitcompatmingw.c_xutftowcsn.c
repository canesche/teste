// ========================================================================= //

// includes
#include "stdio.h"
#include "stdlib.h"
#include "time.h"
#include "string.h"
#include "limits.h"
#include "float.h"



#define JOTAI_NUM_RANDS_ 25

const unsigned rand_primes[JOTAI_NUM_RANDS_] = {179, 103, 479, 647, 229, 37, 271, 557, 263, 607, 18743, 50359, 21929, 48757, 98179, 12907, 52937, 64579, 49957, 52567, 507163, 149939, 412157, 680861, 757751};

int next_i() {
  int counter = 0;
  return rand_primes[(++counter)%JOTAI_NUM_RANDS_];
}

float next_f() {
  int counter = 0;
  return rand_primes[(++counter)%JOTAI_NUM_RANDS_] / 757751.0F;
} 


// Usage menu
void usage() {
    printf("%s", "Usage:\n\
    prog [ARGS]\n\
\nARGS:\n\
       0            int-bounds\n\
       1            big-arr\n\
       2            big-arr-10x\n\
\n\
");

}


// ------------------------------------------------------------------------- //

#define NULL ((void*)0)
typedef unsigned long size_t;  // Customize by platform.
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;  // Either arithmetic or pointer type.
/* By default, we understand bool (as a convenience). */
typedef int bool;
#define false 0
#define true 1

/* Forward declarations */

/* Type definitions */
typedef  char wchar_t ;

/* Variables and functions */
 int /*<<< orphan*/  EINVAL ; 
 int /*<<< orphan*/  ERANGE ; 
 int INT_MAX ; 
 int /*<<< orphan*/  errno ; 

int xutftowcsn(wchar_t *wcs, const char *utfs, size_t wcslen, int utflen)
{
	int upos = 0, wpos = 0;
	const unsigned char *utf = (const unsigned char*) utfs;
	if (!utf || !wcs || wcslen < 1) {
		errno = EINVAL;
		return -1;
	}
	/* reserve space for \0 */
	wcslen--;
	if (utflen < 0)
		utflen = INT_MAX;

	while (upos < utflen) {
		int c = utf[upos++] & 0xff;
		if (utflen == INT_MAX && c == 0)
			break;

		if (wpos >= wcslen) {
			wcs[wpos] = 0;
			errno = ERANGE;
			return -1;
		}

		if (c < 0x80) {
			/* ASCII */
			wcs[wpos++] = c;
		} else if (c >= 0xc2 && c < 0xe0 && upos < utflen &&
				(utf[upos] & 0xc0) == 0x80) {
			/* 2-byte utf-8 */
			c = ((c & 0x1f) << 6);
			c |= (utf[upos++] & 0x3f);
			wcs[wpos++] = c;
		} else if (c >= 0xe0 && c < 0xf0 && upos + 1 < utflen &&
				!(c == 0xe0 && utf[upos] < 0xa0) && /* over-long encoding */
				(utf[upos] & 0xc0) == 0x80 &&
				(utf[upos + 1] & 0xc0) == 0x80) {
			/* 3-byte utf-8 */
			c = ((c & 0x0f) << 12);
			c |= ((utf[upos++] & 0x3f) << 6);
			c |= (utf[upos++] & 0x3f);
			wcs[wpos++] = c;
		} else if (c >= 0xf0 && c < 0xf5 && upos + 2 < utflen &&
				wpos + 1 < wcslen &&
				!(c == 0xf0 && utf[upos] < 0x90) && /* over-long encoding */
				!(c == 0xf4 && utf[upos] >= 0x90) && /* > \u10ffff */
				(utf[upos] & 0xc0) == 0x80 &&
				(utf[upos + 1] & 0xc0) == 0x80 &&
				(utf[upos + 2] & 0xc0) == 0x80) {
			/* 4-byte utf-8: convert to \ud8xx \udcxx surrogate pair */
			c = ((c & 0x07) << 18);
			c |= ((utf[upos++] & 0x3f) << 12);
			c |= ((utf[upos++] & 0x3f) << 6);
			c |= (utf[upos++] & 0x3f);
			c -= 0x10000;
			wcs[wpos++] = 0xd800 | (c >> 10);
			wcs[wpos++] = 0xdc00 | (c & 0x3ff);
		} else if (c >= 0xa0) {
			/* invalid utf-8 byte, printable unicode char: convert 1:1 */
			wcs[wpos++] = c;
		} else {
			/* invalid utf-8 byte, non-printable unicode: convert to hex */
			static const char *hex = "0123456789abcdef";
			wcs[wpos++] = hex[c >> 4];
			if (wpos < wcslen)
				wcs[wpos++] = hex[c & 0x0f];
		}
	}
	wcs[wpos] = 0;
	return wpos;
}


// ------------------------------------------------------------------------- //

int main(int argc, char *argv[]) {

    if (argc != 2) {
        usage();
        return 1;
    }

    int opt = atoi(argv[1]);
    switch(opt) {

    // int-bounds
    case 0:
    {
          unsigned long wcslen = 100;
          int utflen = 100;
          int _len_wcs0 = 1;
          char * wcs = (char *) malloc(_len_wcs0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_wcs0; _i0++) {
            wcs[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_utfs0 = 1;
          const char * utfs = (const char *) malloc(_len_utfs0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_utfs0; _i0++) {
            utfs[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = xutftowcsn(wcs,utfs,wcslen,utflen);
          printf("%d\n", benchRet); 
          free(wcs);
          free(utfs);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned long wcslen = 255;
          int utflen = 255;
          int _len_wcs0 = 65025;
          char * wcs = (char *) malloc(_len_wcs0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_wcs0; _i0++) {
            wcs[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_utfs0 = 65025;
          const char * utfs = (const char *) malloc(_len_utfs0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_utfs0; _i0++) {
            utfs[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = xutftowcsn(wcs,utfs,wcslen,utflen);
          printf("%d\n", benchRet); 
          free(wcs);
          free(utfs);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned long wcslen = 10;
          int utflen = 10;
          int _len_wcs0 = 100;
          char * wcs = (char *) malloc(_len_wcs0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_wcs0; _i0++) {
            wcs[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_utfs0 = 100;
          const char * utfs = (const char *) malloc(_len_utfs0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_utfs0; _i0++) {
            utfs[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = xutftowcsn(wcs,utfs,wcslen,utflen);
          printf("%d\n", benchRet); 
          free(wcs);
          free(utfs);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
