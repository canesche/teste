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
struct sdma_channel {int /*<<< orphan*/  status; TYPE_1__* desc; } ;
struct TYPE_4__ {int status; scalar_t__ count; } ;
struct sdma_buffer_descriptor {TYPE_2__ mode; } ;
struct TYPE_3__ {int num_bd; scalar_t__ chn_real_count; struct sdma_buffer_descriptor* bd; } ;

/* Variables and functions */
 int BD_DONE ; 
 int BD_RROR ; 
 int /*<<< orphan*/  DMA_COMPLETE ; 
 int /*<<< orphan*/  DMA_ERROR ; 
 int EIO ; 

__attribute__((used)) static void mxc_sdma_handle_channel_normal(struct sdma_channel *data)
{
	struct sdma_channel *sdmac = (struct sdma_channel *) data;
	struct sdma_buffer_descriptor *bd;
	int i, error = 0;

	sdmac->desc->chn_real_count = 0;
	/*
	 * non loop mode. Iterate over all descriptors, collect
	 * errors and call callback function
	 */
	for (i = 0; i < sdmac->desc->num_bd; i++) {
		bd = &sdmac->desc->bd[i];

		 if (bd->mode.status & (BD_DONE | BD_RROR))
			error = -EIO;
		 sdmac->desc->chn_real_count += bd->mode.count;
	}

	if (error)
		sdmac->status = DMA_ERROR;
	else
		sdmac->status = DMA_COMPLETE;
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
          int _len_data0 = 1;
          struct sdma_channel * data = (struct sdma_channel *) malloc(_len_data0*sizeof(struct sdma_channel));
          for(int _i0 = 0; _i0 < _len_data0; _i0++) {
            data[_i0].status = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_data__i0__desc0 = 1;
          data[_i0].desc = (struct TYPE_3__ *) malloc(_len_data__i0__desc0*sizeof(struct TYPE_3__));
          for(int _j0 = 0; _j0 < _len_data__i0__desc0; _j0++) {
            data[_i0].desc->num_bd = ((-2 * (next_i()%2)) + 1) * next_i();
        data[_i0].desc->chn_real_count = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_data__i0__desc_bd0 = 1;
          data[_i0].desc->bd = (struct sdma_buffer_descriptor *) malloc(_len_data__i0__desc_bd0*sizeof(struct sdma_buffer_descriptor));
          for(int _j0 = 0; _j0 < _len_data__i0__desc_bd0; _j0++) {
            data[_i0].desc->bd->mode.status = ((-2 * (next_i()%2)) + 1) * next_i();
        data[_i0].desc->bd->mode.count = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          mxc_sdma_handle_channel_normal(data);
          for(int _aux = 0; _aux < _len_data0; _aux++) {
          free(data[_aux].desc);
          }
          free(data);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_data0 = 65025;
          struct sdma_channel * data = (struct sdma_channel *) malloc(_len_data0*sizeof(struct sdma_channel));
          for(int _i0 = 0; _i0 < _len_data0; _i0++) {
            data[_i0].status = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_data__i0__desc0 = 1;
          data[_i0].desc = (struct TYPE_3__ *) malloc(_len_data__i0__desc0*sizeof(struct TYPE_3__));
          for(int _j0 = 0; _j0 < _len_data__i0__desc0; _j0++) {
            data[_i0].desc->num_bd = ((-2 * (next_i()%2)) + 1) * next_i();
        data[_i0].desc->chn_real_count = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_data__i0__desc_bd0 = 1;
          data[_i0].desc->bd = (struct sdma_buffer_descriptor *) malloc(_len_data__i0__desc_bd0*sizeof(struct sdma_buffer_descriptor));
          for(int _j0 = 0; _j0 < _len_data__i0__desc_bd0; _j0++) {
            data[_i0].desc->bd->mode.status = ((-2 * (next_i()%2)) + 1) * next_i();
        data[_i0].desc->bd->mode.count = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          mxc_sdma_handle_channel_normal(data);
          for(int _aux = 0; _aux < _len_data0; _aux++) {
          free(data[_aux].desc);
          }
          free(data);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_data0 = 100;
          struct sdma_channel * data = (struct sdma_channel *) malloc(_len_data0*sizeof(struct sdma_channel));
          for(int _i0 = 0; _i0 < _len_data0; _i0++) {
            data[_i0].status = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_data__i0__desc0 = 1;
          data[_i0].desc = (struct TYPE_3__ *) malloc(_len_data__i0__desc0*sizeof(struct TYPE_3__));
          for(int _j0 = 0; _j0 < _len_data__i0__desc0; _j0++) {
            data[_i0].desc->num_bd = ((-2 * (next_i()%2)) + 1) * next_i();
        data[_i0].desc->chn_real_count = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_data__i0__desc_bd0 = 1;
          data[_i0].desc->bd = (struct sdma_buffer_descriptor *) malloc(_len_data__i0__desc_bd0*sizeof(struct sdma_buffer_descriptor));
          for(int _j0 = 0; _j0 < _len_data__i0__desc_bd0; _j0++) {
            data[_i0].desc->bd->mode.status = ((-2 * (next_i()%2)) + 1) * next_i();
        data[_i0].desc->bd->mode.count = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          mxc_sdma_handle_channel_normal(data);
          for(int _aux = 0; _aux < _len_data0; _aux++) {
          free(data[_aux].desc);
          }
          free(data);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
