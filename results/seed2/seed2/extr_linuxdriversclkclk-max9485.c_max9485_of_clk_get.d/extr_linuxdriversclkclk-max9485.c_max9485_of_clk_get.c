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
struct of_phandle_args {unsigned int* args; } ;
struct max9485_driver_data {TYPE_1__* hw; } ;
struct clk_hw {int dummy; } ;
struct TYPE_2__ {struct clk_hw hw; } ;

/* Variables and functions */

__attribute__((used)) static struct clk_hw *
max9485_of_clk_get(struct of_phandle_args *clkspec, void *data)
{
	struct max9485_driver_data *drvdata = data;
	unsigned int idx = clkspec->args[0];

	return &drvdata->hw[idx].hw;
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
          int _len_clkspec0 = 1;
          struct of_phandle_args * clkspec = (struct of_phandle_args *) malloc(_len_clkspec0*sizeof(struct of_phandle_args));
          for(int _i0 = 0; _i0 < _len_clkspec0; _i0++) {
              int _len_clkspec__i0__args0 = 1;
          clkspec[_i0].args = (unsigned int *) malloc(_len_clkspec__i0__args0*sizeof(unsigned int));
          for(int _j0 = 0; _j0 < _len_clkspec__i0__args0; _j0++) {
            clkspec[_i0].args[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          void * data;
          struct clk_hw * benchRet = max9485_of_clk_get(clkspec,data);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_clkspec0; _aux++) {
          free(clkspec[_aux].args);
          }
          free(clkspec);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_clkspec0 = 65025;
          struct of_phandle_args * clkspec = (struct of_phandle_args *) malloc(_len_clkspec0*sizeof(struct of_phandle_args));
          for(int _i0 = 0; _i0 < _len_clkspec0; _i0++) {
              int _len_clkspec__i0__args0 = 1;
          clkspec[_i0].args = (unsigned int *) malloc(_len_clkspec__i0__args0*sizeof(unsigned int));
          for(int _j0 = 0; _j0 < _len_clkspec__i0__args0; _j0++) {
            clkspec[_i0].args[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          void * data;
          struct clk_hw * benchRet = max9485_of_clk_get(clkspec,data);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_clkspec0; _aux++) {
          free(clkspec[_aux].args);
          }
          free(clkspec);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_clkspec0 = 100;
          struct of_phandle_args * clkspec = (struct of_phandle_args *) malloc(_len_clkspec0*sizeof(struct of_phandle_args));
          for(int _i0 = 0; _i0 < _len_clkspec0; _i0++) {
              int _len_clkspec__i0__args0 = 1;
          clkspec[_i0].args = (unsigned int *) malloc(_len_clkspec__i0__args0*sizeof(unsigned int));
          for(int _j0 = 0; _j0 < _len_clkspec__i0__args0; _j0++) {
            clkspec[_i0].args[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          void * data;
          struct clk_hw * benchRet = max9485_of_clk_get(clkspec,data);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_clkspec0; _aux++) {
          free(clkspec[_aux].args);
          }
          free(clkspec);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
