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
struct io_accel2_cmd {int reply_queue; size_t sg_count; } ;
struct ctlr_info {int /*<<< orphan*/ * ioaccel2_blockFetchTable; struct io_accel2_cmd* ioaccel2_cmd_pool; } ;
struct CommandList {size_t cmdindex; int /*<<< orphan*/  busaddr; } ;

/* Variables and functions */

__attribute__((used)) static void set_ioaccel2_performant_mode(struct ctlr_info *h,
						struct CommandList *c,
						int reply_queue)
{
	struct io_accel2_cmd *cp = &h->ioaccel2_cmd_pool[c->cmdindex];

	/*
	 * Tell the controller to post the reply to the queue for this
	 * processor.  This seems to give the best I/O throughput.
	 */
	cp->reply_queue = reply_queue;
	/*
	 * Set the bits in the address sent down to include:
	 *  - performant mode bit not used in ioaccel mode 2
	 *  - pull count (bits 0-3)
	 *  - command type isn't needed for ioaccel2
	 */
	c->busaddr |= (h->ioaccel2_blockFetchTable[cp->sg_count]);
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
          int reply_queue = 100;
          int _len_h0 = 1;
          struct ctlr_info * h = (struct ctlr_info *) malloc(_len_h0*sizeof(struct ctlr_info));
          for(int _i0 = 0; _i0 < _len_h0; _i0++) {
              int _len_h__i0__ioaccel2_blockFetchTable0 = 1;
          h[_i0].ioaccel2_blockFetchTable = (int *) malloc(_len_h__i0__ioaccel2_blockFetchTable0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_h__i0__ioaccel2_blockFetchTable0; _j0++) {
            h[_i0].ioaccel2_blockFetchTable[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_h__i0__ioaccel2_cmd_pool0 = 1;
          h[_i0].ioaccel2_cmd_pool = (struct io_accel2_cmd *) malloc(_len_h__i0__ioaccel2_cmd_pool0*sizeof(struct io_accel2_cmd));
          for(int _j0 = 0; _j0 < _len_h__i0__ioaccel2_cmd_pool0; _j0++) {
            h[_i0].ioaccel2_cmd_pool->reply_queue = ((-2 * (next_i()%2)) + 1) * next_i();
        h[_i0].ioaccel2_cmd_pool->sg_count = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_c0 = 1;
          struct CommandList * c = (struct CommandList *) malloc(_len_c0*sizeof(struct CommandList));
          for(int _i0 = 0; _i0 < _len_c0; _i0++) {
            c[_i0].cmdindex = ((-2 * (next_i()%2)) + 1) * next_i();
        c[_i0].busaddr = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          set_ioaccel2_performant_mode(h,c,reply_queue);
          for(int _aux = 0; _aux < _len_h0; _aux++) {
          free(h[_aux].ioaccel2_blockFetchTable);
          }
          for(int _aux = 0; _aux < _len_h0; _aux++) {
          free(h[_aux].ioaccel2_cmd_pool);
          }
          free(h);
          free(c);
        
        break;
    }
    // big-arr
    case 1:
    {
          int reply_queue = 255;
          int _len_h0 = 65025;
          struct ctlr_info * h = (struct ctlr_info *) malloc(_len_h0*sizeof(struct ctlr_info));
          for(int _i0 = 0; _i0 < _len_h0; _i0++) {
              int _len_h__i0__ioaccel2_blockFetchTable0 = 1;
          h[_i0].ioaccel2_blockFetchTable = (int *) malloc(_len_h__i0__ioaccel2_blockFetchTable0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_h__i0__ioaccel2_blockFetchTable0; _j0++) {
            h[_i0].ioaccel2_blockFetchTable[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_h__i0__ioaccel2_cmd_pool0 = 1;
          h[_i0].ioaccel2_cmd_pool = (struct io_accel2_cmd *) malloc(_len_h__i0__ioaccel2_cmd_pool0*sizeof(struct io_accel2_cmd));
          for(int _j0 = 0; _j0 < _len_h__i0__ioaccel2_cmd_pool0; _j0++) {
            h[_i0].ioaccel2_cmd_pool->reply_queue = ((-2 * (next_i()%2)) + 1) * next_i();
        h[_i0].ioaccel2_cmd_pool->sg_count = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_c0 = 65025;
          struct CommandList * c = (struct CommandList *) malloc(_len_c0*sizeof(struct CommandList));
          for(int _i0 = 0; _i0 < _len_c0; _i0++) {
            c[_i0].cmdindex = ((-2 * (next_i()%2)) + 1) * next_i();
        c[_i0].busaddr = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          set_ioaccel2_performant_mode(h,c,reply_queue);
          for(int _aux = 0; _aux < _len_h0; _aux++) {
          free(h[_aux].ioaccel2_blockFetchTable);
          }
          for(int _aux = 0; _aux < _len_h0; _aux++) {
          free(h[_aux].ioaccel2_cmd_pool);
          }
          free(h);
          free(c);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int reply_queue = 10;
          int _len_h0 = 100;
          struct ctlr_info * h = (struct ctlr_info *) malloc(_len_h0*sizeof(struct ctlr_info));
          for(int _i0 = 0; _i0 < _len_h0; _i0++) {
              int _len_h__i0__ioaccel2_blockFetchTable0 = 1;
          h[_i0].ioaccel2_blockFetchTable = (int *) malloc(_len_h__i0__ioaccel2_blockFetchTable0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_h__i0__ioaccel2_blockFetchTable0; _j0++) {
            h[_i0].ioaccel2_blockFetchTable[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_h__i0__ioaccel2_cmd_pool0 = 1;
          h[_i0].ioaccel2_cmd_pool = (struct io_accel2_cmd *) malloc(_len_h__i0__ioaccel2_cmd_pool0*sizeof(struct io_accel2_cmd));
          for(int _j0 = 0; _j0 < _len_h__i0__ioaccel2_cmd_pool0; _j0++) {
            h[_i0].ioaccel2_cmd_pool->reply_queue = ((-2 * (next_i()%2)) + 1) * next_i();
        h[_i0].ioaccel2_cmd_pool->sg_count = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_c0 = 100;
          struct CommandList * c = (struct CommandList *) malloc(_len_c0*sizeof(struct CommandList));
          for(int _i0 = 0; _i0 < _len_c0; _i0++) {
            c[_i0].cmdindex = ((-2 * (next_i()%2)) + 1) * next_i();
        c[_i0].busaddr = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          set_ioaccel2_performant_mode(h,c,reply_queue);
          for(int _aux = 0; _aux < _len_h0; _aux++) {
          free(h[_aux].ioaccel2_blockFetchTable);
          }
          for(int _aux = 0; _aux < _len_h0; _aux++) {
          free(h[_aux].ioaccel2_cmd_pool);
          }
          free(h);
          free(c);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
