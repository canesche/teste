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
struct nvme_queue {int /*<<< orphan*/ * tags; } ;
struct blk_mq_hw_ctx {struct nvme_queue* driver_data; } ;

/* Variables and functions */

__attribute__((used)) static void nvme_admin_exit_hctx(struct blk_mq_hw_ctx *hctx, unsigned int hctx_idx)
{
	struct nvme_queue *nvmeq = hctx->driver_data;

	nvmeq->tags = NULL;
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
          unsigned int hctx_idx = 100;
          int _len_hctx0 = 1;
          struct blk_mq_hw_ctx * hctx = (struct blk_mq_hw_ctx *) malloc(_len_hctx0*sizeof(struct blk_mq_hw_ctx));
          for(int _i0 = 0; _i0 < _len_hctx0; _i0++) {
              int _len_hctx__i0__driver_data0 = 1;
          hctx[_i0].driver_data = (struct nvme_queue *) malloc(_len_hctx__i0__driver_data0*sizeof(struct nvme_queue));
          for(int _j0 = 0; _j0 < _len_hctx__i0__driver_data0; _j0++) {
              int _len_hctx__i0__driver_data_tags0 = 1;
          hctx[_i0].driver_data->tags = (int *) malloc(_len_hctx__i0__driver_data_tags0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_hctx__i0__driver_data_tags0; _j0++) {
            hctx[_i0].driver_data->tags[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          nvme_admin_exit_hctx(hctx,hctx_idx);
          for(int _aux = 0; _aux < _len_hctx0; _aux++) {
          free(hctx[_aux].driver_data);
          }
          free(hctx);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned int hctx_idx = 255;
          int _len_hctx0 = 65025;
          struct blk_mq_hw_ctx * hctx = (struct blk_mq_hw_ctx *) malloc(_len_hctx0*sizeof(struct blk_mq_hw_ctx));
          for(int _i0 = 0; _i0 < _len_hctx0; _i0++) {
              int _len_hctx__i0__driver_data0 = 1;
          hctx[_i0].driver_data = (struct nvme_queue *) malloc(_len_hctx__i0__driver_data0*sizeof(struct nvme_queue));
          for(int _j0 = 0; _j0 < _len_hctx__i0__driver_data0; _j0++) {
              int _len_hctx__i0__driver_data_tags0 = 1;
          hctx[_i0].driver_data->tags = (int *) malloc(_len_hctx__i0__driver_data_tags0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_hctx__i0__driver_data_tags0; _j0++) {
            hctx[_i0].driver_data->tags[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          nvme_admin_exit_hctx(hctx,hctx_idx);
          for(int _aux = 0; _aux < _len_hctx0; _aux++) {
          free(hctx[_aux].driver_data);
          }
          free(hctx);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned int hctx_idx = 10;
          int _len_hctx0 = 100;
          struct blk_mq_hw_ctx * hctx = (struct blk_mq_hw_ctx *) malloc(_len_hctx0*sizeof(struct blk_mq_hw_ctx));
          for(int _i0 = 0; _i0 < _len_hctx0; _i0++) {
              int _len_hctx__i0__driver_data0 = 1;
          hctx[_i0].driver_data = (struct nvme_queue *) malloc(_len_hctx__i0__driver_data0*sizeof(struct nvme_queue));
          for(int _j0 = 0; _j0 < _len_hctx__i0__driver_data0; _j0++) {
              int _len_hctx__i0__driver_data_tags0 = 1;
          hctx[_i0].driver_data->tags = (int *) malloc(_len_hctx__i0__driver_data_tags0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_hctx__i0__driver_data_tags0; _j0++) {
            hctx[_i0].driver_data->tags[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          nvme_admin_exit_hctx(hctx,hctx_idx);
          for(int _aux = 0; _aux < _len_hctx0; _aux++) {
          free(hctx[_aux].driver_data);
          }
          free(hctx);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
