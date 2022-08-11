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
typedef  unsigned char ucs_char_t ;

/* Variables and functions */

__attribute__((used)) static ucs_char_t pick_one_utf8_char(const char **start, size_t *remainder_p)
{
	unsigned char *s = (unsigned char *)*start;
	ucs_char_t ch;
	size_t remainder, incr;

	/*
	 * A caller that assumes NUL terminated text can choose
	 * not to bother with the remainder length.  We will
	 * stop at the first NUL.
	 */
	remainder = (remainder_p ? *remainder_p : 999);

	if (remainder < 1) {
		goto invalid;
	} else if (*s < 0x80) {
		/* 0xxxxxxx */
		ch = *s;
		incr = 1;
	} else if ((s[0] & 0xe0) == 0xc0) {
		/* 110XXXXx 10xxxxxx */
		if (remainder < 2 ||
		    (s[1] & 0xc0) != 0x80 ||
		    (s[0] & 0xfe) == 0xc0)
			goto invalid;
		ch = ((s[0] & 0x1f) << 6) | (s[1] & 0x3f);
		incr = 2;
	} else if ((s[0] & 0xf0) == 0xe0) {
		/* 1110XXXX 10Xxxxxx 10xxxxxx */
		if (remainder < 3 ||
		    (s[1] & 0xc0) != 0x80 ||
		    (s[2] & 0xc0) != 0x80 ||
		    /* overlong? */
		    (s[0] == 0xe0 && (s[1] & 0xe0) == 0x80) ||
		    /* surrogate? */
		    (s[0] == 0xed && (s[1] & 0xe0) == 0xa0) ||
		    /* U+FFFE or U+FFFF? */
		    (s[0] == 0xef && s[1] == 0xbf &&
		     (s[2] & 0xfe) == 0xbe))
			goto invalid;
		ch = ((s[0] & 0x0f) << 12) |
			((s[1] & 0x3f) << 6) | (s[2] & 0x3f);
		incr = 3;
	} else if ((s[0] & 0xf8) == 0xf0) {
		/* 11110XXX 10XXxxxx 10xxxxxx 10xxxxxx */
		if (remainder < 4 ||
		    (s[1] & 0xc0) != 0x80 ||
		    (s[2] & 0xc0) != 0x80 ||
		    (s[3] & 0xc0) != 0x80 ||
		    /* overlong? */
		    (s[0] == 0xf0 && (s[1] & 0xf0) == 0x80) ||
		    /* > U+10FFFF? */
		    (s[0] == 0xf4 && s[1] > 0x8f) || s[0] > 0xf4)
			goto invalid;
		ch = ((s[0] & 0x07) << 18) | ((s[1] & 0x3f) << 12) |
			((s[2] & 0x3f) << 6) | (s[3] & 0x3f);
		incr = 4;
	} else {
invalid:
		*start = NULL;
		return 0;
	}

	*start += incr;
	if (remainder_p)
		*remainder_p = remainder - incr;
	return ch;
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
          int _len_start0 = 1;
          const char ** start = (const char **) malloc(_len_start0*sizeof(const char *));
          for(int _i0 = 0; _i0 < _len_start0; _i0++) {
            int _len_start1 = 1;
            start[_i0] = (const char *) malloc(_len_start1*sizeof(const char));
            for(int _i1 = 0; _i1 < _len_start1; _i1++) {
              start[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_remainder_p0 = 1;
          unsigned long * remainder_p = (unsigned long *) malloc(_len_remainder_p0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_remainder_p0; _i0++) {
            remainder_p[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned char benchRet = pick_one_utf8_char(start,remainder_p);
          printf("%c\n", (benchRet %26) + 'a'); 
          for(int i1 = 0; i1 < _len_start0; i1++) {
            int _len_start1 = 1;
              free(start[i1]);
          }
          free(start);
          free(remainder_p);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_start0 = 65025;
          const char ** start = (const char **) malloc(_len_start0*sizeof(const char *));
          for(int _i0 = 0; _i0 < _len_start0; _i0++) {
            int _len_start1 = 1;
            start[_i0] = (const char *) malloc(_len_start1*sizeof(const char));
            for(int _i1 = 0; _i1 < _len_start1; _i1++) {
              start[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_remainder_p0 = 65025;
          unsigned long * remainder_p = (unsigned long *) malloc(_len_remainder_p0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_remainder_p0; _i0++) {
            remainder_p[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned char benchRet = pick_one_utf8_char(start,remainder_p);
          printf("%c\n", (benchRet %26) + 'a'); 
          for(int i1 = 0; i1 < _len_start0; i1++) {
            int _len_start1 = 1;
              free(start[i1]);
          }
          free(start);
          free(remainder_p);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_start0 = 100;
          const char ** start = (const char **) malloc(_len_start0*sizeof(const char *));
          for(int _i0 = 0; _i0 < _len_start0; _i0++) {
            int _len_start1 = 1;
            start[_i0] = (const char *) malloc(_len_start1*sizeof(const char));
            for(int _i1 = 0; _i1 < _len_start1; _i1++) {
              start[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_remainder_p0 = 100;
          unsigned long * remainder_p = (unsigned long *) malloc(_len_remainder_p0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_remainder_p0; _i0++) {
            remainder_p[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned char benchRet = pick_one_utf8_char(start,remainder_p);
          printf("%c\n", (benchRet %26) + 'a'); 
          for(int i1 = 0; i1 < _len_start0; i1++) {
            int _len_start1 = 1;
              free(start[i1]);
          }
          free(start);
          free(remainder_p);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
