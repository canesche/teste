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
typedef  int u8 ;
typedef  int u32 ;

/* Variables and functions */

__attribute__((used)) static void qed_llh_mac_to_filter(u32 *p_high, u32 *p_low,
				  u8 *p_filter)
{
	*p_high = p_filter[1] | (p_filter[0] << 8);
	*p_low = p_filter[5] | (p_filter[4] << 8) |
		 (p_filter[3] << 16) | (p_filter[2] << 24);
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
          int _len_p_high0 = 1;
          int * p_high = (int *) malloc(_len_p_high0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_p_high0; _i0++) {
            p_high[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_p_low0 = 1;
          int * p_low = (int *) malloc(_len_p_low0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_p_low0; _i0++) {
            p_low[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_p_filter0 = 1;
          int * p_filter = (int *) malloc(_len_p_filter0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_p_filter0; _i0++) {
            p_filter[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          qed_llh_mac_to_filter(p_high,p_low,p_filter);
          free(p_high);
          free(p_low);
          free(p_filter);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_p_high0 = 65025;
          int * p_high = (int *) malloc(_len_p_high0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_p_high0; _i0++) {
            p_high[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_p_low0 = 65025;
          int * p_low = (int *) malloc(_len_p_low0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_p_low0; _i0++) {
            p_low[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_p_filter0 = 65025;
          int * p_filter = (int *) malloc(_len_p_filter0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_p_filter0; _i0++) {
            p_filter[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          qed_llh_mac_to_filter(p_high,p_low,p_filter);
          free(p_high);
          free(p_low);
          free(p_filter);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_p_high0 = 100;
          int * p_high = (int *) malloc(_len_p_high0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_p_high0; _i0++) {
            p_high[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_p_low0 = 100;
          int * p_low = (int *) malloc(_len_p_low0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_p_low0; _i0++) {
            p_low[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_p_filter0 = 100;
          int * p_filter = (int *) malloc(_len_p_filter0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_p_filter0; _i0++) {
            p_filter[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          qed_llh_mac_to_filter(p_high,p_low,p_filter);
          free(p_high);
          free(p_low);
          free(p_filter);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
