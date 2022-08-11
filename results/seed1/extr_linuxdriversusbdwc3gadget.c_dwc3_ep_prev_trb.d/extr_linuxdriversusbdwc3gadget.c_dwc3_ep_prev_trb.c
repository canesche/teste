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
struct dwc3_trb {int dummy; } ;
struct dwc3_ep {struct dwc3_trb* trb_pool; } ;

/* Variables and functions */
 int DWC3_TRB_NUM ; 

__attribute__((used)) static struct dwc3_trb *dwc3_ep_prev_trb(struct dwc3_ep *dep, u8 index)
{
	u8 tmp = index;

	if (!tmp)
		tmp = DWC3_TRB_NUM - 1;

	return &dep->trb_pool[tmp - 1];
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
          int index = 100;
          int _len_dep0 = 1;
          struct dwc3_ep * dep = (struct dwc3_ep *) malloc(_len_dep0*sizeof(struct dwc3_ep));
          for(int _i0 = 0; _i0 < _len_dep0; _i0++) {
              int _len_dep__i0__trb_pool0 = 1;
          dep[_i0].trb_pool = (struct dwc3_trb *) malloc(_len_dep__i0__trb_pool0*sizeof(struct dwc3_trb));
          for(int _j0 = 0; _j0 < _len_dep__i0__trb_pool0; _j0++) {
            dep[_i0].trb_pool->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          struct dwc3_trb * benchRet = dwc3_ep_prev_trb(dep,index);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_dep0; _aux++) {
          free(dep[_aux].trb_pool);
          }
          free(dep);
        
        break;
    }
    // big-arr
    case 1:
    {
          int index = 255;
          int _len_dep0 = 65025;
          struct dwc3_ep * dep = (struct dwc3_ep *) malloc(_len_dep0*sizeof(struct dwc3_ep));
          for(int _i0 = 0; _i0 < _len_dep0; _i0++) {
              int _len_dep__i0__trb_pool0 = 1;
          dep[_i0].trb_pool = (struct dwc3_trb *) malloc(_len_dep__i0__trb_pool0*sizeof(struct dwc3_trb));
          for(int _j0 = 0; _j0 < _len_dep__i0__trb_pool0; _j0++) {
            dep[_i0].trb_pool->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          struct dwc3_trb * benchRet = dwc3_ep_prev_trb(dep,index);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_dep0; _aux++) {
          free(dep[_aux].trb_pool);
          }
          free(dep);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int index = 10;
          int _len_dep0 = 100;
          struct dwc3_ep * dep = (struct dwc3_ep *) malloc(_len_dep0*sizeof(struct dwc3_ep));
          for(int _i0 = 0; _i0 < _len_dep0; _i0++) {
              int _len_dep__i0__trb_pool0 = 1;
          dep[_i0].trb_pool = (struct dwc3_trb *) malloc(_len_dep__i0__trb_pool0*sizeof(struct dwc3_trb));
          for(int _j0 = 0; _j0 < _len_dep__i0__trb_pool0; _j0++) {
            dep[_i0].trb_pool->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          struct dwc3_trb * benchRet = dwc3_ep_prev_trb(dep,index);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_dep0; _aux++) {
          free(dep[_aux].trb_pool);
          }
          free(dep);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
