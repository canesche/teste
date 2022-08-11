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
typedef  size_t u32 ;
struct kvmppc_xive_src_block {TYPE_1__* irq_state; } ;
struct kvmppc_xive {size_t max_sbid; scalar_t__ saved_src_count; struct kvmppc_xive_src_block** src_blocks; } ;
struct TYPE_2__ {int in_queue; } ;

/* Variables and functions */
 size_t KVMPPC_XICS_IRQ_PER_ICS ; 

__attribute__((used)) static void xive_post_save_scan(struct kvmppc_xive *xive)
{
	u32 i, j;

	/* Clear all the in_queue flags */
	for (i = 0; i <= xive->max_sbid; i++) {
		struct kvmppc_xive_src_block *sb = xive->src_blocks[i];
		if (!sb)
			continue;
		for (j = 0;  j < KVMPPC_XICS_IRQ_PER_ICS; j++)
			sb->irq_state[j].in_queue = false;
	}

	/* Next get_source() will do a new scan */
	xive->saved_src_count = 0;
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
          int _len_xive0 = 1;
          struct kvmppc_xive * xive = (struct kvmppc_xive *) malloc(_len_xive0*sizeof(struct kvmppc_xive));
          for(int _i0 = 0; _i0 < _len_xive0; _i0++) {
            xive[_i0].max_sbid = ((-2 * (next_i()%2)) + 1) * next_i();
        xive[_i0].saved_src_count = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_xive__i0__src_blocks0 = 1;
          xive[_i0].src_blocks = (struct kvmppc_xive_src_block **) malloc(_len_xive__i0__src_blocks0*sizeof(struct kvmppc_xive_src_block *));
          for(int _j0 = 0; _j0 < _len_xive__i0__src_blocks0; _j0++) {
            int _len_xive__i0__src_blocks1 = 1;
            xive[_i0].src_blocks[_j0] = (struct kvmppc_xive_src_block *) malloc(_len_xive__i0__src_blocks1*sizeof(struct kvmppc_xive_src_block));
            for(int _j1 = 0; _j1 < _len_xive__i0__src_blocks1; _j1++) {
                int _len_xive__i0__src_blocks__j0__irq_state0 = 1;
          xive[_i0].src_blocks[_j0]->irq_state = (struct TYPE_2__ *) malloc(_len_xive__i0__src_blocks__j0__irq_state0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_xive__i0__src_blocks__j0__irq_state0; _j0++) {
            xive[_i0].src_blocks[_j0]->irq_state->in_queue = ((-2 * (next_i()%2)) + 1) * next_i();
          }
            }
          }
          }
          xive_post_save_scan(xive);
          for(int _aux = 0; _aux < _len_xive0; _aux++) {
          free(*(xive[_aux].src_blocks));
        free(xive[_aux].src_blocks);
          }
          free(xive);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_xive0 = 65025;
          struct kvmppc_xive * xive = (struct kvmppc_xive *) malloc(_len_xive0*sizeof(struct kvmppc_xive));
          for(int _i0 = 0; _i0 < _len_xive0; _i0++) {
            xive[_i0].max_sbid = ((-2 * (next_i()%2)) + 1) * next_i();
        xive[_i0].saved_src_count = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_xive__i0__src_blocks0 = 1;
          xive[_i0].src_blocks = (struct kvmppc_xive_src_block **) malloc(_len_xive__i0__src_blocks0*sizeof(struct kvmppc_xive_src_block *));
          for(int _j0 = 0; _j0 < _len_xive__i0__src_blocks0; _j0++) {
            int _len_xive__i0__src_blocks1 = 1;
            xive[_i0].src_blocks[_j0] = (struct kvmppc_xive_src_block *) malloc(_len_xive__i0__src_blocks1*sizeof(struct kvmppc_xive_src_block));
            for(int _j1 = 0; _j1 < _len_xive__i0__src_blocks1; _j1++) {
                int _len_xive__i0__src_blocks__j0__irq_state0 = 1;
          xive[_i0].src_blocks[_j0]->irq_state = (struct TYPE_2__ *) malloc(_len_xive__i0__src_blocks__j0__irq_state0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_xive__i0__src_blocks__j0__irq_state0; _j0++) {
            xive[_i0].src_blocks[_j0]->irq_state->in_queue = ((-2 * (next_i()%2)) + 1) * next_i();
          }
            }
          }
          }
          xive_post_save_scan(xive);
          for(int _aux = 0; _aux < _len_xive0; _aux++) {
          free(*(xive[_aux].src_blocks));
        free(xive[_aux].src_blocks);
          }
          free(xive);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_xive0 = 100;
          struct kvmppc_xive * xive = (struct kvmppc_xive *) malloc(_len_xive0*sizeof(struct kvmppc_xive));
          for(int _i0 = 0; _i0 < _len_xive0; _i0++) {
            xive[_i0].max_sbid = ((-2 * (next_i()%2)) + 1) * next_i();
        xive[_i0].saved_src_count = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_xive__i0__src_blocks0 = 1;
          xive[_i0].src_blocks = (struct kvmppc_xive_src_block **) malloc(_len_xive__i0__src_blocks0*sizeof(struct kvmppc_xive_src_block *));
          for(int _j0 = 0; _j0 < _len_xive__i0__src_blocks0; _j0++) {
            int _len_xive__i0__src_blocks1 = 1;
            xive[_i0].src_blocks[_j0] = (struct kvmppc_xive_src_block *) malloc(_len_xive__i0__src_blocks1*sizeof(struct kvmppc_xive_src_block));
            for(int _j1 = 0; _j1 < _len_xive__i0__src_blocks1; _j1++) {
                int _len_xive__i0__src_blocks__j0__irq_state0 = 1;
          xive[_i0].src_blocks[_j0]->irq_state = (struct TYPE_2__ *) malloc(_len_xive__i0__src_blocks__j0__irq_state0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_xive__i0__src_blocks__j0__irq_state0; _j0++) {
            xive[_i0].src_blocks[_j0]->irq_state->in_queue = ((-2 * (next_i()%2)) + 1) * next_i();
          }
            }
          }
          }
          xive_post_save_scan(xive);
          for(int _aux = 0; _aux < _len_xive0; _aux++) {
          free(*(xive[_aux].src_blocks));
        free(xive[_aux].src_blocks);
          }
          free(xive);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
