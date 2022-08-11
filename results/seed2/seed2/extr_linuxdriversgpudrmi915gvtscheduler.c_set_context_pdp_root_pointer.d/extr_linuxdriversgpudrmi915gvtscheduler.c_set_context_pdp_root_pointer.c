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
typedef  int /*<<< orphan*/  u32 ;
struct execlist_ring_context {TYPE_1__* pdps; } ;
struct TYPE_2__ {int /*<<< orphan*/  val; } ;

/* Variables and functions */

__attribute__((used)) static void set_context_pdp_root_pointer(
		struct execlist_ring_context *ring_context,
		u32 pdp[8])
{
	int i;

	for (i = 0; i < 8; i++)
		ring_context->pdps[i].val = pdp[7 - i];
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
          int _len_ring_context0 = 1;
          struct execlist_ring_context * ring_context = (struct execlist_ring_context *) malloc(_len_ring_context0*sizeof(struct execlist_ring_context));
          for(int _i0 = 0; _i0 < _len_ring_context0; _i0++) {
              int _len_ring_context__i0__pdps0 = 1;
          ring_context[_i0].pdps = (struct TYPE_2__ *) malloc(_len_ring_context__i0__pdps0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_ring_context__i0__pdps0; _j0++) {
            ring_context[_i0].pdps->val = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_pdp0 = 8;
          int * pdp = (int *) malloc(_len_pdp0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_pdp0; _i0++) {
            pdp[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          set_context_pdp_root_pointer(ring_context,pdp);
          for(int _aux = 0; _aux < _len_ring_context0; _aux++) {
          free(ring_context[_aux].pdps);
          }
          free(ring_context);
          free(pdp);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_ring_context0 = 65025;
          struct execlist_ring_context * ring_context = (struct execlist_ring_context *) malloc(_len_ring_context0*sizeof(struct execlist_ring_context));
          for(int _i0 = 0; _i0 < _len_ring_context0; _i0++) {
              int _len_ring_context__i0__pdps0 = 1;
          ring_context[_i0].pdps = (struct TYPE_2__ *) malloc(_len_ring_context__i0__pdps0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_ring_context__i0__pdps0; _j0++) {
            ring_context[_i0].pdps->val = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_pdp0 = 65025;
          int * pdp = (int *) malloc(_len_pdp0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_pdp0; _i0++) {
            pdp[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          set_context_pdp_root_pointer(ring_context,pdp);
          for(int _aux = 0; _aux < _len_ring_context0; _aux++) {
          free(ring_context[_aux].pdps);
          }
          free(ring_context);
          free(pdp);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_ring_context0 = 100;
          struct execlist_ring_context * ring_context = (struct execlist_ring_context *) malloc(_len_ring_context0*sizeof(struct execlist_ring_context));
          for(int _i0 = 0; _i0 < _len_ring_context0; _i0++) {
              int _len_ring_context__i0__pdps0 = 1;
          ring_context[_i0].pdps = (struct TYPE_2__ *) malloc(_len_ring_context__i0__pdps0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_ring_context__i0__pdps0; _j0++) {
            ring_context[_i0].pdps->val = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_pdp0 = 100;
          int * pdp = (int *) malloc(_len_pdp0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_pdp0; _i0++) {
            pdp[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          set_context_pdp_root_pointer(ring_context,pdp);
          for(int _aux = 0; _aux < _len_ring_context0; _aux++) {
          free(ring_context[_aux].pdps);
          }
          free(ring_context);
          free(pdp);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
