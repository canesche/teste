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

/* Variables and functions */

__attribute__((used)) static unsigned int calc_code_bit(unsigned int i, unsigned int *p_cache)
{
	unsigned int b, p = 0;

	/*
	 * Data bits are 0-based, but we're talking code bits, which
	 * are 1-based.
	 */
	b = i + 1;

	/* Use the cache if it is there */
	if (p_cache)
		p = *p_cache;
        b += p;

	/*
	 * For every power of two below our bit number, bump our bit.
	 *
	 * We compare with (b + 1) because we have to compare with what b
	 * would be _if_ it were bumped up by the parity bit.  Capice?
	 *
	 * p is set above.
	 */
	for (; (1 << p) < (b + 1); p++)
		b++;

	if (p_cache)
		*p_cache = p;

	return b;
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
          unsigned int i = 100;
          int _len_p_cache0 = 1;
          unsigned int * p_cache = (unsigned int *) malloc(_len_p_cache0*sizeof(unsigned int));
          for(int _i0 = 0; _i0 < _len_p_cache0; _i0++) {
            p_cache[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned int benchRet = calc_code_bit(i,p_cache);
          printf("%u\n", benchRet); 
          free(p_cache);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned int i = 255;
          int _len_p_cache0 = 65025;
          unsigned int * p_cache = (unsigned int *) malloc(_len_p_cache0*sizeof(unsigned int));
          for(int _i0 = 0; _i0 < _len_p_cache0; _i0++) {
            p_cache[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned int benchRet = calc_code_bit(i,p_cache);
          printf("%u\n", benchRet); 
          free(p_cache);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned int i = 10;
          int _len_p_cache0 = 100;
          unsigned int * p_cache = (unsigned int *) malloc(_len_p_cache0*sizeof(unsigned int));
          for(int _i0 = 0; _i0 < _len_p_cache0; _i0++) {
            p_cache[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned int benchRet = calc_code_bit(i,p_cache);
          printf("%u\n", benchRet); 
          free(p_cache);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
