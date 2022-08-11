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
typedef  int u32 ;

/* Variables and functions */
 int SSP_FACTOR_WITH_MS ; 
 int SSP_INVERTED_SCALING_FACTOR ; 

__attribute__((used)) static inline void ssp_convert_to_freq(u32 time, int *integer_part,
				       int *fractional)
{
	if (time == 0) {
		*fractional = 0;
		*integer_part = 0;
		return;
	}

	*integer_part = SSP_FACTOR_WITH_MS / time;
	*fractional = *integer_part % SSP_INVERTED_SCALING_FACTOR;
	*integer_part = *integer_part / SSP_INVERTED_SCALING_FACTOR;
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
          int time = 100;
          int _len_integer_part0 = 1;
          int * integer_part = (int *) malloc(_len_integer_part0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_integer_part0; _i0++) {
            integer_part[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_fractional0 = 1;
          int * fractional = (int *) malloc(_len_fractional0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_fractional0; _i0++) {
            fractional[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          ssp_convert_to_freq(time,integer_part,fractional);
          free(integer_part);
          free(fractional);
        
        break;
    }
    // big-arr
    case 1:
    {
          int time = 255;
          int _len_integer_part0 = 65025;
          int * integer_part = (int *) malloc(_len_integer_part0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_integer_part0; _i0++) {
            integer_part[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_fractional0 = 65025;
          int * fractional = (int *) malloc(_len_fractional0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_fractional0; _i0++) {
            fractional[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          ssp_convert_to_freq(time,integer_part,fractional);
          free(integer_part);
          free(fractional);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int time = 10;
          int _len_integer_part0 = 100;
          int * integer_part = (int *) malloc(_len_integer_part0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_integer_part0; _i0++) {
            integer_part[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_fractional0 = 100;
          int * fractional = (int *) malloc(_len_fractional0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_fractional0; _i0++) {
            fractional[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          ssp_convert_to_freq(time,integer_part,fractional);
          free(integer_part);
          free(fractional);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
