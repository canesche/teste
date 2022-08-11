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
struct __vxge_hw_channel {size_t compl_index; size_t length; TYPE_1__* stats; int /*<<< orphan*/ ** work_arr; } ;
struct TYPE_2__ {int /*<<< orphan*/  total_compl_cnt; } ;

/* Variables and functions */

void vxge_hw_channel_dtr_complete(struct __vxge_hw_channel *channel)
{
	channel->work_arr[channel->compl_index]	= NULL;

	/* wrap-around */
	if (++channel->compl_index == channel->length)
		channel->compl_index = 0;

	channel->stats->total_compl_cnt++;
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
            channel[_i0].compl_index = ((-2 * (next_i()%2)) + 1) * next_i();
        channel[_i0].length = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_channel__i0__stats0 = 1;
          channel[_i0].stats = (struct TYPE_2__ *) malloc(_len_channel__i0__stats0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_channel__i0__stats0; _j0++) {
            channel[_i0].stats->total_compl_cnt = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_channel__i0__work_arr0 = 1;
          channel[_i0].work_arr = (int **) malloc(_len_channel__i0__work_arr0*sizeof(int *));
          for(int _j0 = 0; _j0 < _len_channel__i0__work_arr0; _j0++) {
            int _len_channel__i0__work_arr1 = 1;
            channel[_i0].work_arr[_j0] = (int *) malloc(_len_channel__i0__work_arr1*sizeof(int));
            for(int _j1 = 0; _j1 < _len_channel__i0__work_arr1; _j1++) {
              channel[_i0].work_arr[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          vxge_hw_channel_dtr_complete(channel);
          for(int _aux = 0; _aux < _len_channel0; _aux++) {
          free(channel[_aux].stats);
          }
          for(int _aux = 0; _aux < _len_channel0; _aux++) {
          free(*(channel[_aux].work_arr));
        free(channel[_aux].work_arr);
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
            channel[_i0].compl_index = ((-2 * (next_i()%2)) + 1) * next_i();
        channel[_i0].length = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_channel__i0__stats0 = 1;
          channel[_i0].stats = (struct TYPE_2__ *) malloc(_len_channel__i0__stats0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_channel__i0__stats0; _j0++) {
            channel[_i0].stats->total_compl_cnt = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_channel__i0__work_arr0 = 1;
          channel[_i0].work_arr = (int **) malloc(_len_channel__i0__work_arr0*sizeof(int *));
          for(int _j0 = 0; _j0 < _len_channel__i0__work_arr0; _j0++) {
            int _len_channel__i0__work_arr1 = 1;
            channel[_i0].work_arr[_j0] = (int *) malloc(_len_channel__i0__work_arr1*sizeof(int));
            for(int _j1 = 0; _j1 < _len_channel__i0__work_arr1; _j1++) {
              channel[_i0].work_arr[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          vxge_hw_channel_dtr_complete(channel);
          for(int _aux = 0; _aux < _len_channel0; _aux++) {
          free(channel[_aux].stats);
          }
          for(int _aux = 0; _aux < _len_channel0; _aux++) {
          free(*(channel[_aux].work_arr));
        free(channel[_aux].work_arr);
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
            channel[_i0].compl_index = ((-2 * (next_i()%2)) + 1) * next_i();
        channel[_i0].length = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_channel__i0__stats0 = 1;
          channel[_i0].stats = (struct TYPE_2__ *) malloc(_len_channel__i0__stats0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_channel__i0__stats0; _j0++) {
            channel[_i0].stats->total_compl_cnt = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_channel__i0__work_arr0 = 1;
          channel[_i0].work_arr = (int **) malloc(_len_channel__i0__work_arr0*sizeof(int *));
          for(int _j0 = 0; _j0 < _len_channel__i0__work_arr0; _j0++) {
            int _len_channel__i0__work_arr1 = 1;
            channel[_i0].work_arr[_j0] = (int *) malloc(_len_channel__i0__work_arr1*sizeof(int));
            for(int _j1 = 0; _j1 < _len_channel__i0__work_arr1; _j1++) {
              channel[_i0].work_arr[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          vxge_hw_channel_dtr_complete(channel);
          for(int _aux = 0; _aux < _len_channel0; _aux++) {
          free(channel[_aux].stats);
          }
          for(int _aux = 0; _aux < _len_channel0; _aux++) {
          free(*(channel[_aux].work_arr));
        free(channel[_aux].work_arr);
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
