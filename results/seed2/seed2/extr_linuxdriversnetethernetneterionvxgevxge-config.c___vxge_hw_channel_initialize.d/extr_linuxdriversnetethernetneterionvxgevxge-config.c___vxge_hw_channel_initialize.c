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
typedef  struct TYPE_6__   TYPE_3__ ;
typedef  struct TYPE_5__   TYPE_2__ ;
typedef  struct TYPE_4__   TYPE_1__ ;

/* Type definitions */
typedef  size_t u32 ;
struct __vxge_hw_virtualpath {struct __vxge_hw_ring* ringh; struct __vxge_hw_fifo* fifoh; } ;
struct __vxge_hw_ring {TYPE_3__* stats; } ;
struct __vxge_hw_fifo {TYPE_2__* stats; } ;
struct __vxge_hw_channel {size_t length; int type; int /*<<< orphan*/ * stats; int /*<<< orphan*/ * reserve_arr; int /*<<< orphan*/ * orig_arr; TYPE_1__* vph; } ;
typedef  enum vxge_hw_status { ____Placeholder_vxge_hw_status } vxge_hw_status ;
struct TYPE_6__ {int /*<<< orphan*/  common_stats; } ;
struct TYPE_5__ {int /*<<< orphan*/  common_stats; } ;
struct TYPE_4__ {struct __vxge_hw_virtualpath* vpath; } ;

/* Variables and functions */
#define  VXGE_HW_CHANNEL_TYPE_FIFO 129 
#define  VXGE_HW_CHANNEL_TYPE_RING 128 
 int VXGE_HW_OK ; 

__attribute__((used)) static enum vxge_hw_status
__vxge_hw_channel_initialize(struct __vxge_hw_channel *channel)
{
	u32 i;
	struct __vxge_hw_virtualpath *vpath;

	vpath = channel->vph->vpath;

	if ((channel->reserve_arr != NULL) && (channel->orig_arr != NULL)) {
		for (i = 0; i < channel->length; i++)
			channel->orig_arr[i] = channel->reserve_arr[i];
	}

	switch (channel->type) {
	case VXGE_HW_CHANNEL_TYPE_FIFO:
		vpath->fifoh = (struct __vxge_hw_fifo *)channel;
		channel->stats = &((struct __vxge_hw_fifo *)
				channel)->stats->common_stats;
		break;
	case VXGE_HW_CHANNEL_TYPE_RING:
		vpath->ringh = (struct __vxge_hw_ring *)channel;
		channel->stats = &((struct __vxge_hw_ring *)
				channel)->stats->common_stats;
		break;
	default:
		break;
	}

	return VXGE_HW_OK;
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
          int _len_channel0 = 1;
          struct __vxge_hw_channel * channel = (struct __vxge_hw_channel *) malloc(_len_channel0*sizeof(struct __vxge_hw_channel));
          for(int _i0 = 0; _i0 < _len_channel0; _i0++) {
            channel[_i0].length = ((-2 * (next_i()%2)) + 1) * next_i();
        channel[_i0].type = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_channel__i0__stats0 = 1;
          channel[_i0].stats = (int *) malloc(_len_channel__i0__stats0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_channel__i0__stats0; _j0++) {
            channel[_i0].stats[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_channel__i0__reserve_arr0 = 1;
          channel[_i0].reserve_arr = (int *) malloc(_len_channel__i0__reserve_arr0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_channel__i0__reserve_arr0; _j0++) {
            channel[_i0].reserve_arr[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_channel__i0__orig_arr0 = 1;
          channel[_i0].orig_arr = (int *) malloc(_len_channel__i0__orig_arr0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_channel__i0__orig_arr0; _j0++) {
            channel[_i0].orig_arr[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_channel__i0__vph0 = 1;
          channel[_i0].vph = (struct TYPE_4__ *) malloc(_len_channel__i0__vph0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_channel__i0__vph0; _j0++) {
              int _len_channel__i0__vph_vpath0 = 1;
          channel[_i0].vph->vpath = (struct __vxge_hw_virtualpath *) malloc(_len_channel__i0__vph_vpath0*sizeof(struct __vxge_hw_virtualpath));
          for(int _j0 = 0; _j0 < _len_channel__i0__vph_vpath0; _j0++) {
              int _len_channel__i0__vph_vpath_ringh0 = 1;
          channel[_i0].vph->vpath->ringh = (struct __vxge_hw_ring *) malloc(_len_channel__i0__vph_vpath_ringh0*sizeof(struct __vxge_hw_ring));
          for(int _j0 = 0; _j0 < _len_channel__i0__vph_vpath_ringh0; _j0++) {
              int _len_channel__i0__vph_vpath_ringh_stats0 = 1;
          channel[_i0].vph->vpath->ringh->stats = (struct TYPE_6__ *) malloc(_len_channel__i0__vph_vpath_ringh_stats0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_channel__i0__vph_vpath_ringh_stats0; _j0++) {
            channel[_i0].vph->vpath->ringh->stats->common_stats = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_channel__i0__vph_vpath_fifoh0 = 1;
          channel[_i0].vph->vpath->fifoh = (struct __vxge_hw_fifo *) malloc(_len_channel__i0__vph_vpath_fifoh0*sizeof(struct __vxge_hw_fifo));
          for(int _j0 = 0; _j0 < _len_channel__i0__vph_vpath_fifoh0; _j0++) {
              int _len_channel__i0__vph_vpath_fifoh_stats0 = 1;
          channel[_i0].vph->vpath->fifoh->stats = (struct TYPE_5__ *) malloc(_len_channel__i0__vph_vpath_fifoh_stats0*sizeof(struct TYPE_5__));
          for(int _j0 = 0; _j0 < _len_channel__i0__vph_vpath_fifoh_stats0; _j0++) {
            channel[_i0].vph->vpath->fifoh->stats->common_stats = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          }
          }
          enum vxge_hw_status benchRet = __vxge_hw_channel_initialize(channel);
          for(int _aux = 0; _aux < _len_channel0; _aux++) {
          free(channel[_aux].stats);
          }
          for(int _aux = 0; _aux < _len_channel0; _aux++) {
          free(channel[_aux].reserve_arr);
          }
          for(int _aux = 0; _aux < _len_channel0; _aux++) {
          free(channel[_aux].orig_arr);
          }
          for(int _aux = 0; _aux < _len_channel0; _aux++) {
          free(channel[_aux].vph);
          }
          free(channel);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_channel0 = 65025;
          struct __vxge_hw_channel * channel = (struct __vxge_hw_channel *) malloc(_len_channel0*sizeof(struct __vxge_hw_channel));
          for(int _i0 = 0; _i0 < _len_channel0; _i0++) {
            channel[_i0].length = ((-2 * (next_i()%2)) + 1) * next_i();
        channel[_i0].type = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_channel__i0__stats0 = 1;
          channel[_i0].stats = (int *) malloc(_len_channel__i0__stats0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_channel__i0__stats0; _j0++) {
            channel[_i0].stats[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_channel__i0__reserve_arr0 = 1;
          channel[_i0].reserve_arr = (int *) malloc(_len_channel__i0__reserve_arr0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_channel__i0__reserve_arr0; _j0++) {
            channel[_i0].reserve_arr[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_channel__i0__orig_arr0 = 1;
          channel[_i0].orig_arr = (int *) malloc(_len_channel__i0__orig_arr0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_channel__i0__orig_arr0; _j0++) {
            channel[_i0].orig_arr[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_channel__i0__vph0 = 1;
          channel[_i0].vph = (struct TYPE_4__ *) malloc(_len_channel__i0__vph0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_channel__i0__vph0; _j0++) {
              int _len_channel__i0__vph_vpath0 = 1;
          channel[_i0].vph->vpath = (struct __vxge_hw_virtualpath *) malloc(_len_channel__i0__vph_vpath0*sizeof(struct __vxge_hw_virtualpath));
          for(int _j0 = 0; _j0 < _len_channel__i0__vph_vpath0; _j0++) {
              int _len_channel__i0__vph_vpath_ringh0 = 1;
          channel[_i0].vph->vpath->ringh = (struct __vxge_hw_ring *) malloc(_len_channel__i0__vph_vpath_ringh0*sizeof(struct __vxge_hw_ring));
          for(int _j0 = 0; _j0 < _len_channel__i0__vph_vpath_ringh0; _j0++) {
              int _len_channel__i0__vph_vpath_ringh_stats0 = 1;
          channel[_i0].vph->vpath->ringh->stats = (struct TYPE_6__ *) malloc(_len_channel__i0__vph_vpath_ringh_stats0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_channel__i0__vph_vpath_ringh_stats0; _j0++) {
            channel[_i0].vph->vpath->ringh->stats->common_stats = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_channel__i0__vph_vpath_fifoh0 = 1;
          channel[_i0].vph->vpath->fifoh = (struct __vxge_hw_fifo *) malloc(_len_channel__i0__vph_vpath_fifoh0*sizeof(struct __vxge_hw_fifo));
          for(int _j0 = 0; _j0 < _len_channel__i0__vph_vpath_fifoh0; _j0++) {
              int _len_channel__i0__vph_vpath_fifoh_stats0 = 1;
          channel[_i0].vph->vpath->fifoh->stats = (struct TYPE_5__ *) malloc(_len_channel__i0__vph_vpath_fifoh_stats0*sizeof(struct TYPE_5__));
          for(int _j0 = 0; _j0 < _len_channel__i0__vph_vpath_fifoh_stats0; _j0++) {
            channel[_i0].vph->vpath->fifoh->stats->common_stats = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          }
          }
          enum vxge_hw_status benchRet = __vxge_hw_channel_initialize(channel);
          for(int _aux = 0; _aux < _len_channel0; _aux++) {
          free(channel[_aux].stats);
          }
          for(int _aux = 0; _aux < _len_channel0; _aux++) {
          free(channel[_aux].reserve_arr);
          }
          for(int _aux = 0; _aux < _len_channel0; _aux++) {
          free(channel[_aux].orig_arr);
          }
          for(int _aux = 0; _aux < _len_channel0; _aux++) {
          free(channel[_aux].vph);
          }
          free(channel);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_channel0 = 100;
          struct __vxge_hw_channel * channel = (struct __vxge_hw_channel *) malloc(_len_channel0*sizeof(struct __vxge_hw_channel));
          for(int _i0 = 0; _i0 < _len_channel0; _i0++) {
            channel[_i0].length = ((-2 * (next_i()%2)) + 1) * next_i();
        channel[_i0].type = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_channel__i0__stats0 = 1;
          channel[_i0].stats = (int *) malloc(_len_channel__i0__stats0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_channel__i0__stats0; _j0++) {
            channel[_i0].stats[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_channel__i0__reserve_arr0 = 1;
          channel[_i0].reserve_arr = (int *) malloc(_len_channel__i0__reserve_arr0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_channel__i0__reserve_arr0; _j0++) {
            channel[_i0].reserve_arr[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_channel__i0__orig_arr0 = 1;
          channel[_i0].orig_arr = (int *) malloc(_len_channel__i0__orig_arr0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_channel__i0__orig_arr0; _j0++) {
            channel[_i0].orig_arr[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_channel__i0__vph0 = 1;
          channel[_i0].vph = (struct TYPE_4__ *) malloc(_len_channel__i0__vph0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_channel__i0__vph0; _j0++) {
              int _len_channel__i0__vph_vpath0 = 1;
          channel[_i0].vph->vpath = (struct __vxge_hw_virtualpath *) malloc(_len_channel__i0__vph_vpath0*sizeof(struct __vxge_hw_virtualpath));
          for(int _j0 = 0; _j0 < _len_channel__i0__vph_vpath0; _j0++) {
              int _len_channel__i0__vph_vpath_ringh0 = 1;
          channel[_i0].vph->vpath->ringh = (struct __vxge_hw_ring *) malloc(_len_channel__i0__vph_vpath_ringh0*sizeof(struct __vxge_hw_ring));
          for(int _j0 = 0; _j0 < _len_channel__i0__vph_vpath_ringh0; _j0++) {
              int _len_channel__i0__vph_vpath_ringh_stats0 = 1;
          channel[_i0].vph->vpath->ringh->stats = (struct TYPE_6__ *) malloc(_len_channel__i0__vph_vpath_ringh_stats0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_channel__i0__vph_vpath_ringh_stats0; _j0++) {
            channel[_i0].vph->vpath->ringh->stats->common_stats = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_channel__i0__vph_vpath_fifoh0 = 1;
          channel[_i0].vph->vpath->fifoh = (struct __vxge_hw_fifo *) malloc(_len_channel__i0__vph_vpath_fifoh0*sizeof(struct __vxge_hw_fifo));
          for(int _j0 = 0; _j0 < _len_channel__i0__vph_vpath_fifoh0; _j0++) {
              int _len_channel__i0__vph_vpath_fifoh_stats0 = 1;
          channel[_i0].vph->vpath->fifoh->stats = (struct TYPE_5__ *) malloc(_len_channel__i0__vph_vpath_fifoh_stats0*sizeof(struct TYPE_5__));
          for(int _j0 = 0; _j0 < _len_channel__i0__vph_vpath_fifoh_stats0; _j0++) {
            channel[_i0].vph->vpath->fifoh->stats->common_stats = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          }
          }
          enum vxge_hw_status benchRet = __vxge_hw_channel_initialize(channel);
          for(int _aux = 0; _aux < _len_channel0; _aux++) {
          free(channel[_aux].stats);
          }
          for(int _aux = 0; _aux < _len_channel0; _aux++) {
          free(channel[_aux].reserve_arr);
          }
          for(int _aux = 0; _aux < _len_channel0; _aux++) {
          free(channel[_aux].orig_arr);
          }
          for(int _aux = 0; _aux < _len_channel0; _aux++) {
          free(channel[_aux].vph);
          }
          free(channel);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
