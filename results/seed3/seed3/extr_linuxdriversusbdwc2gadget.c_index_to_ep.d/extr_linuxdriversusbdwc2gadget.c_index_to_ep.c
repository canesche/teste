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
typedef  size_t u32 ;
struct dwc2_hsotg_ep {int dummy; } ;
struct dwc2_hsotg {struct dwc2_hsotg_ep** eps_out; struct dwc2_hsotg_ep** eps_in; } ;

/* Variables and functions */

__attribute__((used)) static inline struct dwc2_hsotg_ep *index_to_ep(struct dwc2_hsotg *hsotg,
						u32 ep_index, u32 dir_in)
{
	if (dir_in)
		return hsotg->eps_in[ep_index];
	else
		return hsotg->eps_out[ep_index];
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
          unsigned long ep_index = 100;
          unsigned long dir_in = 100;
          int _len_hsotg0 = 1;
          struct dwc2_hsotg * hsotg = (struct dwc2_hsotg *) malloc(_len_hsotg0*sizeof(struct dwc2_hsotg));
          for(int _i0 = 0; _i0 < _len_hsotg0; _i0++) {
              int _len_hsotg__i0__eps_out0 = 1;
          hsotg[_i0].eps_out = (struct dwc2_hsotg_ep **) malloc(_len_hsotg__i0__eps_out0*sizeof(struct dwc2_hsotg_ep *));
          for(int _j0 = 0; _j0 < _len_hsotg__i0__eps_out0; _j0++) {
            int _len_hsotg__i0__eps_out1 = 1;
            hsotg[_i0].eps_out[_j0] = (struct dwc2_hsotg_ep *) malloc(_len_hsotg__i0__eps_out1*sizeof(struct dwc2_hsotg_ep));
            for(int _j1 = 0; _j1 < _len_hsotg__i0__eps_out1; _j1++) {
              hsotg[_i0].eps_out[_j0]->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_hsotg__i0__eps_in0 = 1;
          hsotg[_i0].eps_in = (struct dwc2_hsotg_ep **) malloc(_len_hsotg__i0__eps_in0*sizeof(struct dwc2_hsotg_ep *));
          for(int _j0 = 0; _j0 < _len_hsotg__i0__eps_in0; _j0++) {
            int _len_hsotg__i0__eps_in1 = 1;
            hsotg[_i0].eps_in[_j0] = (struct dwc2_hsotg_ep *) malloc(_len_hsotg__i0__eps_in1*sizeof(struct dwc2_hsotg_ep));
            for(int _j1 = 0; _j1 < _len_hsotg__i0__eps_in1; _j1++) {
              hsotg[_i0].eps_in[_j0]->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          struct dwc2_hsotg_ep * benchRet = index_to_ep(hsotg,ep_index,dir_in);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_hsotg0; _aux++) {
          free(*(hsotg[_aux].eps_out));
        free(hsotg[_aux].eps_out);
          }
          for(int _aux = 0; _aux < _len_hsotg0; _aux++) {
          free(*(hsotg[_aux].eps_in));
        free(hsotg[_aux].eps_in);
          }
          free(hsotg);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned long ep_index = 255;
          unsigned long dir_in = 255;
          int _len_hsotg0 = 65025;
          struct dwc2_hsotg * hsotg = (struct dwc2_hsotg *) malloc(_len_hsotg0*sizeof(struct dwc2_hsotg));
          for(int _i0 = 0; _i0 < _len_hsotg0; _i0++) {
              int _len_hsotg__i0__eps_out0 = 1;
          hsotg[_i0].eps_out = (struct dwc2_hsotg_ep **) malloc(_len_hsotg__i0__eps_out0*sizeof(struct dwc2_hsotg_ep *));
          for(int _j0 = 0; _j0 < _len_hsotg__i0__eps_out0; _j0++) {
            int _len_hsotg__i0__eps_out1 = 1;
            hsotg[_i0].eps_out[_j0] = (struct dwc2_hsotg_ep *) malloc(_len_hsotg__i0__eps_out1*sizeof(struct dwc2_hsotg_ep));
            for(int _j1 = 0; _j1 < _len_hsotg__i0__eps_out1; _j1++) {
              hsotg[_i0].eps_out[_j0]->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_hsotg__i0__eps_in0 = 1;
          hsotg[_i0].eps_in = (struct dwc2_hsotg_ep **) malloc(_len_hsotg__i0__eps_in0*sizeof(struct dwc2_hsotg_ep *));
          for(int _j0 = 0; _j0 < _len_hsotg__i0__eps_in0; _j0++) {
            int _len_hsotg__i0__eps_in1 = 1;
            hsotg[_i0].eps_in[_j0] = (struct dwc2_hsotg_ep *) malloc(_len_hsotg__i0__eps_in1*sizeof(struct dwc2_hsotg_ep));
            for(int _j1 = 0; _j1 < _len_hsotg__i0__eps_in1; _j1++) {
              hsotg[_i0].eps_in[_j0]->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          struct dwc2_hsotg_ep * benchRet = index_to_ep(hsotg,ep_index,dir_in);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_hsotg0; _aux++) {
          free(*(hsotg[_aux].eps_out));
        free(hsotg[_aux].eps_out);
          }
          for(int _aux = 0; _aux < _len_hsotg0; _aux++) {
          free(*(hsotg[_aux].eps_in));
        free(hsotg[_aux].eps_in);
          }
          free(hsotg);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned long ep_index = 10;
          unsigned long dir_in = 10;
          int _len_hsotg0 = 100;
          struct dwc2_hsotg * hsotg = (struct dwc2_hsotg *) malloc(_len_hsotg0*sizeof(struct dwc2_hsotg));
          for(int _i0 = 0; _i0 < _len_hsotg0; _i0++) {
              int _len_hsotg__i0__eps_out0 = 1;
          hsotg[_i0].eps_out = (struct dwc2_hsotg_ep **) malloc(_len_hsotg__i0__eps_out0*sizeof(struct dwc2_hsotg_ep *));
          for(int _j0 = 0; _j0 < _len_hsotg__i0__eps_out0; _j0++) {
            int _len_hsotg__i0__eps_out1 = 1;
            hsotg[_i0].eps_out[_j0] = (struct dwc2_hsotg_ep *) malloc(_len_hsotg__i0__eps_out1*sizeof(struct dwc2_hsotg_ep));
            for(int _j1 = 0; _j1 < _len_hsotg__i0__eps_out1; _j1++) {
              hsotg[_i0].eps_out[_j0]->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_hsotg__i0__eps_in0 = 1;
          hsotg[_i0].eps_in = (struct dwc2_hsotg_ep **) malloc(_len_hsotg__i0__eps_in0*sizeof(struct dwc2_hsotg_ep *));
          for(int _j0 = 0; _j0 < _len_hsotg__i0__eps_in0; _j0++) {
            int _len_hsotg__i0__eps_in1 = 1;
            hsotg[_i0].eps_in[_j0] = (struct dwc2_hsotg_ep *) malloc(_len_hsotg__i0__eps_in1*sizeof(struct dwc2_hsotg_ep));
            for(int _j1 = 0; _j1 < _len_hsotg__i0__eps_in1; _j1++) {
              hsotg[_i0].eps_in[_j0]->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          struct dwc2_hsotg_ep * benchRet = index_to_ep(hsotg,ep_index,dir_in);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_hsotg0; _aux++) {
          free(*(hsotg[_aux].eps_out));
        free(hsotg[_aux].eps_out);
          }
          for(int _aux = 0; _aux < _len_hsotg0; _aux++) {
          free(*(hsotg[_aux].eps_in));
        free(hsotg[_aux].eps_in);
          }
          free(hsotg);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
