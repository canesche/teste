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
typedef  struct TYPE_2__   TYPE_1__ ;

/* Type definitions */
typedef  int u32 ;
struct TYPE_2__ {int l4_khz; } ;

/* Variables and functions */
 TYPE_1__ rfbi ; 

__attribute__((used)) static void rfbi_get_clk_info(u32 *clk_period, u32 *max_clk_div)
{
	*clk_period = 1000000000 / rfbi.l4_khz;
	*max_clk_div = 2;
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
          int _len_clk_period0 = 1;
          int * clk_period = (int *) malloc(_len_clk_period0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_clk_period0; _i0++) {
            clk_period[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_max_clk_div0 = 1;
          int * max_clk_div = (int *) malloc(_len_max_clk_div0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_max_clk_div0; _i0++) {
            max_clk_div[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          rfbi_get_clk_info(clk_period,max_clk_div);
          free(clk_period);
          free(max_clk_div);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_clk_period0 = 65025;
          int * clk_period = (int *) malloc(_len_clk_period0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_clk_period0; _i0++) {
            clk_period[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_max_clk_div0 = 65025;
          int * max_clk_div = (int *) malloc(_len_max_clk_div0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_max_clk_div0; _i0++) {
            max_clk_div[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          rfbi_get_clk_info(clk_period,max_clk_div);
          free(clk_period);
          free(max_clk_div);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_clk_period0 = 100;
          int * clk_period = (int *) malloc(_len_clk_period0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_clk_period0; _i0++) {
            clk_period[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_max_clk_div0 = 100;
          int * max_clk_div = (int *) malloc(_len_max_clk_div0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_max_clk_div0; _i0++) {
            max_clk_div[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          rfbi_get_clk_info(clk_period,max_clk_div);
          free(clk_period);
          free(max_clk_div);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
