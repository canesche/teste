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
typedef  struct TYPE_5__   TYPE_2__ ;
typedef  struct TYPE_4__   TYPE_1__ ;

/* Type definitions */
typedef  TYPE_2__* rfftp_plan ;
struct TYPE_5__ {size_t nfct; size_t length; TYPE_1__* fct; } ;
struct TYPE_4__ {size_t fct; } ;

/* Variables and functions */

__attribute__((used)) static size_t rfftp_twsize(rfftp_plan plan)
  {
  size_t twsize=0, l1=1;
  for (size_t k=0; k<plan->nfct; ++k)
    {
    size_t ip=plan->fct[k].fct, ido= plan->length/(l1*ip);
    twsize+=(ip-1)*(ido-1);
    if (ip>5) twsize+=2*ip;
    l1*=ip;
    }
  return twsize;
  return 0;
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
          int _len_plan0 = 1;
          struct TYPE_5__ * plan = (struct TYPE_5__ *) malloc(_len_plan0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_plan0; _i0++) {
            plan[_i0].nfct = ((-2 * (next_i()%2)) + 1) * next_i();
        plan[_i0].length = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_plan__i0__fct0 = 1;
          plan[_i0].fct = (struct TYPE_4__ *) malloc(_len_plan__i0__fct0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_plan__i0__fct0; _j0++) {
            plan[_i0].fct->fct = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          unsigned long benchRet = rfftp_twsize(plan);
          printf("%lu\n", benchRet); 
          for(int _aux = 0; _aux < _len_plan0; _aux++) {
          free(plan[_aux].fct);
          }
          free(plan);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_plan0 = 65025;
          struct TYPE_5__ * plan = (struct TYPE_5__ *) malloc(_len_plan0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_plan0; _i0++) {
            plan[_i0].nfct = ((-2 * (next_i()%2)) + 1) * next_i();
        plan[_i0].length = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_plan__i0__fct0 = 1;
          plan[_i0].fct = (struct TYPE_4__ *) malloc(_len_plan__i0__fct0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_plan__i0__fct0; _j0++) {
            plan[_i0].fct->fct = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          unsigned long benchRet = rfftp_twsize(plan);
          printf("%lu\n", benchRet); 
          for(int _aux = 0; _aux < _len_plan0; _aux++) {
          free(plan[_aux].fct);
          }
          free(plan);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_plan0 = 100;
          struct TYPE_5__ * plan = (struct TYPE_5__ *) malloc(_len_plan0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_plan0; _i0++) {
            plan[_i0].nfct = ((-2 * (next_i()%2)) + 1) * next_i();
        plan[_i0].length = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_plan__i0__fct0 = 1;
          plan[_i0].fct = (struct TYPE_4__ *) malloc(_len_plan__i0__fct0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_plan__i0__fct0; _j0++) {
            plan[_i0].fct->fct = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          unsigned long benchRet = rfftp_twsize(plan);
          printf("%lu\n", benchRet); 
          for(int _aux = 0; _aux < _len_plan0; _aux++) {
          free(plan[_aux].fct);
          }
          free(plan);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
