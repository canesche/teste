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
typedef  int uint8_t ;

/* Variables and functions */

__attribute__((used)) static size_t has_non_ascii(const char *s, size_t maxlen, size_t *strlen_c)
{
	const uint8_t *ptr = (const uint8_t *)s;
	size_t strlen_chars = 0;
	size_t ret = 0;

	if (!ptr || !*ptr)
		return 0;

	while (*ptr && maxlen) {
		if (*ptr & 0x80)
			ret++;
		strlen_chars++;
		ptr++;
		maxlen--;
	}
	if (strlen_c)
		*strlen_c = strlen_chars;

	return ret;
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
          unsigned long maxlen = 100;
          int _len_s0 = 1;
          const char * s = (const char *) malloc(_len_s0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
            s[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_strlen_c0 = 1;
          unsigned long * strlen_c = (unsigned long *) malloc(_len_strlen_c0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_strlen_c0; _i0++) {
            strlen_c[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned long benchRet = has_non_ascii(s,maxlen,strlen_c);
          printf("%lu\n", benchRet); 
          free(s);
          free(strlen_c);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned long maxlen = 255;
          int _len_s0 = 65025;
          const char * s = (const char *) malloc(_len_s0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
            s[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_strlen_c0 = 65025;
          unsigned long * strlen_c = (unsigned long *) malloc(_len_strlen_c0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_strlen_c0; _i0++) {
            strlen_c[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned long benchRet = has_non_ascii(s,maxlen,strlen_c);
          printf("%lu\n", benchRet); 
          free(s);
          free(strlen_c);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned long maxlen = 10;
          int _len_s0 = 100;
          const char * s = (const char *) malloc(_len_s0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
            s[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_strlen_c0 = 100;
          unsigned long * strlen_c = (unsigned long *) malloc(_len_strlen_c0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_strlen_c0; _i0++) {
            strlen_c[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned long benchRet = has_non_ascii(s,maxlen,strlen_c);
          printf("%lu\n", benchRet); 
          free(s);
          free(strlen_c);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
