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
 unsigned long SIRF_IOCLK_DIV_MAX ; 
 unsigned short SIRF_MAX_SAMPLE_DIV ; 
 unsigned short SIRF_USP_MIN_SAMPLE_DIV ; 

__attribute__((used)) static unsigned int
sirfsoc_usp_calc_sample_div(unsigned long set_rate,
		unsigned long ioclk_rate, unsigned long *sample_reg)
{
	unsigned long min_delta = ~0UL;
	unsigned short sample_div;
	unsigned long ioclk_div = 0;
	unsigned long temp_delta;

	for (sample_div = SIRF_USP_MIN_SAMPLE_DIV;
			sample_div <= SIRF_MAX_SAMPLE_DIV; sample_div++) {
		temp_delta = ioclk_rate -
		(ioclk_rate + (set_rate * sample_div) / 2)
		/ (set_rate * sample_div) * set_rate * sample_div;

		temp_delta = (temp_delta > 0) ? temp_delta : -temp_delta;
		if (temp_delta < min_delta) {
			ioclk_div = (2 * ioclk_rate /
				(set_rate * sample_div) + 1) / 2 - 1;
			if (ioclk_div > SIRF_IOCLK_DIV_MAX)
				continue;
			min_delta = temp_delta;
			*sample_reg = sample_div;
			if (!temp_delta)
				break;
		}
	}
	return ioclk_div;
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
          unsigned long set_rate = 100;
          unsigned long ioclk_rate = 100;
          int _len_sample_reg0 = 1;
          unsigned long * sample_reg = (unsigned long *) malloc(_len_sample_reg0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_sample_reg0; _i0++) {
            sample_reg[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned int benchRet = sirfsoc_usp_calc_sample_div(set_rate,ioclk_rate,sample_reg);
          printf("%u\n", benchRet); 
          free(sample_reg);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned long set_rate = 255;
          unsigned long ioclk_rate = 255;
          int _len_sample_reg0 = 65025;
          unsigned long * sample_reg = (unsigned long *) malloc(_len_sample_reg0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_sample_reg0; _i0++) {
            sample_reg[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned int benchRet = sirfsoc_usp_calc_sample_div(set_rate,ioclk_rate,sample_reg);
          printf("%u\n", benchRet); 
          free(sample_reg);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned long set_rate = 10;
          unsigned long ioclk_rate = 10;
          int _len_sample_reg0 = 100;
          unsigned long * sample_reg = (unsigned long *) malloc(_len_sample_reg0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_sample_reg0; _i0++) {
            sample_reg[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned int benchRet = sirfsoc_usp_calc_sample_div(set_rate,ioclk_rate,sample_reg);
          printf("%u\n", benchRet); 
          free(sample_reg);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
