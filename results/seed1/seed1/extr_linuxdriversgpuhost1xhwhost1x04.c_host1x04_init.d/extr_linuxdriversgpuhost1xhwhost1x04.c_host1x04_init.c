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
struct host1x {int /*<<< orphan*/ * debug_op; int /*<<< orphan*/ * intr_op; int /*<<< orphan*/ * syncpt_op; int /*<<< orphan*/ * cdma_pb_op; int /*<<< orphan*/ * cdma_op; int /*<<< orphan*/ * channel_op; } ;

/* Variables and functions */
 int /*<<< orphan*/  host1x_cdma_ops ; 
 int /*<<< orphan*/  host1x_channel_ops ; 
 int /*<<< orphan*/  host1x_debug_ops ; 
 int /*<<< orphan*/  host1x_intr_ops ; 
 int /*<<< orphan*/  host1x_pushbuffer_ops ; 
 int /*<<< orphan*/  host1x_syncpt_ops ; 

int host1x04_init(struct host1x *host)
{
	host->channel_op = &host1x_channel_ops;
	host->cdma_op = &host1x_cdma_ops;
	host->cdma_pb_op = &host1x_pushbuffer_ops;
	host->syncpt_op = &host1x_syncpt_ops;
	host->intr_op = &host1x_intr_ops;
	host->debug_op = &host1x_debug_ops;

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
          int _len_host0 = 1;
          struct host1x * host = (struct host1x *) malloc(_len_host0*sizeof(struct host1x));
          for(int _i0 = 0; _i0 < _len_host0; _i0++) {
              int _len_host__i0__debug_op0 = 1;
          host[_i0].debug_op = (int *) malloc(_len_host__i0__debug_op0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_host__i0__debug_op0; _j0++) {
            host[_i0].debug_op[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_host__i0__intr_op0 = 1;
          host[_i0].intr_op = (int *) malloc(_len_host__i0__intr_op0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_host__i0__intr_op0; _j0++) {
            host[_i0].intr_op[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_host__i0__syncpt_op0 = 1;
          host[_i0].syncpt_op = (int *) malloc(_len_host__i0__syncpt_op0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_host__i0__syncpt_op0; _j0++) {
            host[_i0].syncpt_op[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_host__i0__cdma_pb_op0 = 1;
          host[_i0].cdma_pb_op = (int *) malloc(_len_host__i0__cdma_pb_op0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_host__i0__cdma_pb_op0; _j0++) {
            host[_i0].cdma_pb_op[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_host__i0__cdma_op0 = 1;
          host[_i0].cdma_op = (int *) malloc(_len_host__i0__cdma_op0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_host__i0__cdma_op0; _j0++) {
            host[_i0].cdma_op[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_host__i0__channel_op0 = 1;
          host[_i0].channel_op = (int *) malloc(_len_host__i0__channel_op0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_host__i0__channel_op0; _j0++) {
            host[_i0].channel_op[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = host1x04_init(host);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_host0; _aux++) {
          free(host[_aux].debug_op);
          }
          for(int _aux = 0; _aux < _len_host0; _aux++) {
          free(host[_aux].intr_op);
          }
          for(int _aux = 0; _aux < _len_host0; _aux++) {
          free(host[_aux].syncpt_op);
          }
          for(int _aux = 0; _aux < _len_host0; _aux++) {
          free(host[_aux].cdma_pb_op);
          }
          for(int _aux = 0; _aux < _len_host0; _aux++) {
          free(host[_aux].cdma_op);
          }
          for(int _aux = 0; _aux < _len_host0; _aux++) {
          free(host[_aux].channel_op);
          }
          free(host);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_host0 = 65025;
          struct host1x * host = (struct host1x *) malloc(_len_host0*sizeof(struct host1x));
          for(int _i0 = 0; _i0 < _len_host0; _i0++) {
              int _len_host__i0__debug_op0 = 1;
          host[_i0].debug_op = (int *) malloc(_len_host__i0__debug_op0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_host__i0__debug_op0; _j0++) {
            host[_i0].debug_op[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_host__i0__intr_op0 = 1;
          host[_i0].intr_op = (int *) malloc(_len_host__i0__intr_op0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_host__i0__intr_op0; _j0++) {
            host[_i0].intr_op[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_host__i0__syncpt_op0 = 1;
          host[_i0].syncpt_op = (int *) malloc(_len_host__i0__syncpt_op0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_host__i0__syncpt_op0; _j0++) {
            host[_i0].syncpt_op[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_host__i0__cdma_pb_op0 = 1;
          host[_i0].cdma_pb_op = (int *) malloc(_len_host__i0__cdma_pb_op0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_host__i0__cdma_pb_op0; _j0++) {
            host[_i0].cdma_pb_op[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_host__i0__cdma_op0 = 1;
          host[_i0].cdma_op = (int *) malloc(_len_host__i0__cdma_op0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_host__i0__cdma_op0; _j0++) {
            host[_i0].cdma_op[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_host__i0__channel_op0 = 1;
          host[_i0].channel_op = (int *) malloc(_len_host__i0__channel_op0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_host__i0__channel_op0; _j0++) {
            host[_i0].channel_op[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = host1x04_init(host);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_host0; _aux++) {
          free(host[_aux].debug_op);
          }
          for(int _aux = 0; _aux < _len_host0; _aux++) {
          free(host[_aux].intr_op);
          }
          for(int _aux = 0; _aux < _len_host0; _aux++) {
          free(host[_aux].syncpt_op);
          }
          for(int _aux = 0; _aux < _len_host0; _aux++) {
          free(host[_aux].cdma_pb_op);
          }
          for(int _aux = 0; _aux < _len_host0; _aux++) {
          free(host[_aux].cdma_op);
          }
          for(int _aux = 0; _aux < _len_host0; _aux++) {
          free(host[_aux].channel_op);
          }
          free(host);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_host0 = 100;
          struct host1x * host = (struct host1x *) malloc(_len_host0*sizeof(struct host1x));
          for(int _i0 = 0; _i0 < _len_host0; _i0++) {
              int _len_host__i0__debug_op0 = 1;
          host[_i0].debug_op = (int *) malloc(_len_host__i0__debug_op0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_host__i0__debug_op0; _j0++) {
            host[_i0].debug_op[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_host__i0__intr_op0 = 1;
          host[_i0].intr_op = (int *) malloc(_len_host__i0__intr_op0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_host__i0__intr_op0; _j0++) {
            host[_i0].intr_op[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_host__i0__syncpt_op0 = 1;
          host[_i0].syncpt_op = (int *) malloc(_len_host__i0__syncpt_op0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_host__i0__syncpt_op0; _j0++) {
            host[_i0].syncpt_op[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_host__i0__cdma_pb_op0 = 1;
          host[_i0].cdma_pb_op = (int *) malloc(_len_host__i0__cdma_pb_op0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_host__i0__cdma_pb_op0; _j0++) {
            host[_i0].cdma_pb_op[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_host__i0__cdma_op0 = 1;
          host[_i0].cdma_op = (int *) malloc(_len_host__i0__cdma_op0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_host__i0__cdma_op0; _j0++) {
            host[_i0].cdma_op[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_host__i0__channel_op0 = 1;
          host[_i0].channel_op = (int *) malloc(_len_host__i0__channel_op0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_host__i0__channel_op0; _j0++) {
            host[_i0].channel_op[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = host1x04_init(host);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_host0; _aux++) {
          free(host[_aux].debug_op);
          }
          for(int _aux = 0; _aux < _len_host0; _aux++) {
          free(host[_aux].intr_op);
          }
          for(int _aux = 0; _aux < _len_host0; _aux++) {
          free(host[_aux].syncpt_op);
          }
          for(int _aux = 0; _aux < _len_host0; _aux++) {
          free(host[_aux].cdma_pb_op);
          }
          for(int _aux = 0; _aux < _len_host0; _aux++) {
          free(host[_aux].cdma_op);
          }
          for(int _aux = 0; _aux < _len_host0; _aux++) {
          free(host[_aux].channel_op);
          }
          free(host);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
