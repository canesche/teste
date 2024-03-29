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
struct mmp_clk_mix {unsigned int* mux_table; } ;

/* Variables and functions */

__attribute__((used)) static unsigned int _get_mux_val(struct mmp_clk_mix *mix, unsigned int mux)
{
	if (mix->mux_table)
		return mix->mux_table[mux];

	return mux;
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
          unsigned int mux = 100;
          int _len_mix0 = 1;
          struct mmp_clk_mix * mix = (struct mmp_clk_mix *) malloc(_len_mix0*sizeof(struct mmp_clk_mix));
          for(int _i0 = 0; _i0 < _len_mix0; _i0++) {
              int _len_mix__i0__mux_table0 = 1;
          mix[_i0].mux_table = (unsigned int *) malloc(_len_mix__i0__mux_table0*sizeof(unsigned int));
          for(int _j0 = 0; _j0 < _len_mix__i0__mux_table0; _j0++) {
            mix[_i0].mux_table[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          unsigned int benchRet = _get_mux_val(mix,mux);
          printf("%u\n", benchRet); 
          for(int _aux = 0; _aux < _len_mix0; _aux++) {
          free(mix[_aux].mux_table);
          }
          free(mix);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned int mux = 255;
          int _len_mix0 = 65025;
          struct mmp_clk_mix * mix = (struct mmp_clk_mix *) malloc(_len_mix0*sizeof(struct mmp_clk_mix));
          for(int _i0 = 0; _i0 < _len_mix0; _i0++) {
              int _len_mix__i0__mux_table0 = 1;
          mix[_i0].mux_table = (unsigned int *) malloc(_len_mix__i0__mux_table0*sizeof(unsigned int));
          for(int _j0 = 0; _j0 < _len_mix__i0__mux_table0; _j0++) {
            mix[_i0].mux_table[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          unsigned int benchRet = _get_mux_val(mix,mux);
          printf("%u\n", benchRet); 
          for(int _aux = 0; _aux < _len_mix0; _aux++) {
          free(mix[_aux].mux_table);
          }
          free(mix);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned int mux = 10;
          int _len_mix0 = 100;
          struct mmp_clk_mix * mix = (struct mmp_clk_mix *) malloc(_len_mix0*sizeof(struct mmp_clk_mix));
          for(int _i0 = 0; _i0 < _len_mix0; _i0++) {
              int _len_mix__i0__mux_table0 = 1;
          mix[_i0].mux_table = (unsigned int *) malloc(_len_mix__i0__mux_table0*sizeof(unsigned int));
          for(int _j0 = 0; _j0 < _len_mix__i0__mux_table0; _j0++) {
            mix[_i0].mux_table[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          unsigned int benchRet = _get_mux_val(mix,mux);
          printf("%u\n", benchRet); 
          for(int _aux = 0; _aux < _len_mix0; _aux++) {
          free(mix[_aux].mux_table);
          }
          free(mix);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
