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
typedef  struct TYPE_4__   TYPE_2__ ;
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
typedef  int u32 ;
struct TYPE_4__ {int active; TYPE_1__* params; } ;
struct isp_prev_device {TYPE_2__ params; } ;
struct TYPE_3__ {int update; int busy; } ;

/* Variables and functions */

__attribute__((used)) static void preview_params_switch(struct isp_prev_device *prev)
{
	u32 to_switch;

	/* Switch active parameters with updated shadow parameters when the
	 * shadow parameter has been updated and neither the active not the
	 * shadow parameter is busy.
	 */
	to_switch = (prev->params.params[0].update & ~prev->params.active)
		  | (prev->params.params[1].update & prev->params.active);
	to_switch &= ~(prev->params.params[0].busy |
		       prev->params.params[1].busy);
	if (to_switch == 0)
		return;

	prev->params.active ^= to_switch;

	/* Remove the update flag for the shadow copy of parameters we have
	 * switched.
	 */
	prev->params.params[0].update &= ~(~prev->params.active & to_switch);
	prev->params.params[1].update &= ~(prev->params.active & to_switch);
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
          int _len_prev0 = 1;
          struct isp_prev_device * prev = (struct isp_prev_device *) malloc(_len_prev0*sizeof(struct isp_prev_device));
          for(int _i0 = 0; _i0 < _len_prev0; _i0++) {
            prev[_i0].params.active = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_prev__i0__params_params0 = 1;
          prev[_i0].params.params = (struct TYPE_3__ *) malloc(_len_prev__i0__params_params0*sizeof(struct TYPE_3__));
          for(int _j0 = 0; _j0 < _len_prev__i0__params_params0; _j0++) {
            prev[_i0].params.params->update = ((-2 * (next_i()%2)) + 1) * next_i();
        prev[_i0].params.params->busy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          preview_params_switch(prev);
          free(prev);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_prev0 = 65025;
          struct isp_prev_device * prev = (struct isp_prev_device *) malloc(_len_prev0*sizeof(struct isp_prev_device));
          for(int _i0 = 0; _i0 < _len_prev0; _i0++) {
            prev[_i0].params.active = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_prev__i0__params_params0 = 1;
          prev[_i0].params.params = (struct TYPE_3__ *) malloc(_len_prev__i0__params_params0*sizeof(struct TYPE_3__));
          for(int _j0 = 0; _j0 < _len_prev__i0__params_params0; _j0++) {
            prev[_i0].params.params->update = ((-2 * (next_i()%2)) + 1) * next_i();
        prev[_i0].params.params->busy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          preview_params_switch(prev);
          free(prev);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_prev0 = 100;
          struct isp_prev_device * prev = (struct isp_prev_device *) malloc(_len_prev0*sizeof(struct isp_prev_device));
          for(int _i0 = 0; _i0 < _len_prev0; _i0++) {
            prev[_i0].params.active = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_prev__i0__params_params0 = 1;
          prev[_i0].params.params = (struct TYPE_3__ *) malloc(_len_prev__i0__params_params0*sizeof(struct TYPE_3__));
          for(int _j0 = 0; _j0 < _len_prev__i0__params_params0; _j0++) {
            prev[_i0].params.params->update = ((-2 * (next_i()%2)) + 1) * next_i();
        prev[_i0].params.params->busy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          preview_params_switch(prev);
          free(prev);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
