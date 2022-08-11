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
struct TYPE_3__ {int busy; int update; } ;

/* Variables and functions */

__attribute__((used)) static u32
preview_params_lock(struct isp_prev_device *prev, u32 update, bool shadow)
{
	u32 active = prev->params.active;

	if (shadow) {
		/* Mark all shadow parameters we are going to touch as busy. */
		prev->params.params[0].busy |= ~active & update;
		prev->params.params[1].busy |= active & update;
	} else {
		/* Mark all active parameters we are going to touch as busy. */
		update = (prev->params.params[0].update & active)
		       | (prev->params.params[1].update & ~active);

		prev->params.params[0].busy |= active & update;
		prev->params.params[1].busy |= ~active & update;
	}

	return update;
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
          int update = 100;
          int shadow = 100;
          int _len_prev0 = 1;
          struct isp_prev_device * prev = (struct isp_prev_device *) malloc(_len_prev0*sizeof(struct isp_prev_device));
          for(int _i0 = 0; _i0 < _len_prev0; _i0++) {
            prev[_i0].params.active = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_prev__i0__params_params0 = 1;
          prev[_i0].params.params = (struct TYPE_3__ *) malloc(_len_prev__i0__params_params0*sizeof(struct TYPE_3__));
          for(int _j0 = 0; _j0 < _len_prev__i0__params_params0; _j0++) {
            prev[_i0].params.params->busy = ((-2 * (next_i()%2)) + 1) * next_i();
        prev[_i0].params.params->update = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = preview_params_lock(prev,update,shadow);
          printf("%d\n", benchRet); 
          free(prev);
        
        break;
    }
    // big-arr
    case 1:
    {
          int update = 255;
          int shadow = 255;
          int _len_prev0 = 65025;
          struct isp_prev_device * prev = (struct isp_prev_device *) malloc(_len_prev0*sizeof(struct isp_prev_device));
          for(int _i0 = 0; _i0 < _len_prev0; _i0++) {
            prev[_i0].params.active = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_prev__i0__params_params0 = 1;
          prev[_i0].params.params = (struct TYPE_3__ *) malloc(_len_prev__i0__params_params0*sizeof(struct TYPE_3__));
          for(int _j0 = 0; _j0 < _len_prev__i0__params_params0; _j0++) {
            prev[_i0].params.params->busy = ((-2 * (next_i()%2)) + 1) * next_i();
        prev[_i0].params.params->update = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = preview_params_lock(prev,update,shadow);
          printf("%d\n", benchRet); 
          free(prev);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int update = 10;
          int shadow = 10;
          int _len_prev0 = 100;
          struct isp_prev_device * prev = (struct isp_prev_device *) malloc(_len_prev0*sizeof(struct isp_prev_device));
          for(int _i0 = 0; _i0 < _len_prev0; _i0++) {
            prev[_i0].params.active = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_prev__i0__params_params0 = 1;
          prev[_i0].params.params = (struct TYPE_3__ *) malloc(_len_prev__i0__params_params0*sizeof(struct TYPE_3__));
          for(int _j0 = 0; _j0 < _len_prev__i0__params_params0; _j0++) {
            prev[_i0].params.params->busy = ((-2 * (next_i()%2)) + 1) * next_i();
        prev[_i0].params.params->update = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = preview_params_lock(prev,update,shadow);
          printf("%d\n", benchRet); 
          free(prev);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
