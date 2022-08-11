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
typedef  size_t u32 ;
struct __vxge_hw_channel {size_t length; size_t free_ptr; size_t reserve_ptr; scalar_t__ compl_index; scalar_t__ post_index; scalar_t__ reserve_top; int /*<<< orphan*/ ** work_arr; int /*<<< orphan*/ ** free_arr; int /*<<< orphan*/ * orig_arr; int /*<<< orphan*/ * reserve_arr; } ;
typedef  enum vxge_hw_status { ____Placeholder_vxge_hw_status } vxge_hw_status ;

/* Variables and functions */
 int VXGE_HW_OK ; 

__attribute__((used)) static enum vxge_hw_status
__vxge_hw_channel_reset(struct __vxge_hw_channel *channel)
{
	u32 i;

	for (i = 0; i < channel->length; i++) {
		if (channel->reserve_arr != NULL)
			channel->reserve_arr[i] = channel->orig_arr[i];
		if (channel->free_arr != NULL)
			channel->free_arr[i] = NULL;
		if (channel->work_arr != NULL)
			channel->work_arr[i] = NULL;
	}
	channel->free_ptr = channel->length;
	channel->reserve_ptr = channel->length;
	channel->reserve_top = 0;
	channel->post_index = 0;
	channel->compl_index = 0;

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
        channel[_i0].free_ptr = ((-2 * (next_i()%2)) + 1) * next_i();
        channel[_i0].reserve_ptr = ((-2 * (next_i()%2)) + 1) * next_i();
        channel[_i0].compl_index = ((-2 * (next_i()%2)) + 1) * next_i();
        channel[_i0].post_index = ((-2 * (next_i()%2)) + 1) * next_i();
        channel[_i0].reserve_top = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_channel__i0__work_arr0 = 1;
          channel[_i0].work_arr = (int **) malloc(_len_channel__i0__work_arr0*sizeof(int *));
          for(int _j0 = 0; _j0 < _len_channel__i0__work_arr0; _j0++) {
            int _len_channel__i0__work_arr1 = 1;
            channel[_i0].work_arr[_j0] = (int *) malloc(_len_channel__i0__work_arr1*sizeof(int));
            for(int _j1 = 0; _j1 < _len_channel__i0__work_arr1; _j1++) {
              channel[_i0].work_arr[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_channel__i0__free_arr0 = 1;
          channel[_i0].free_arr = (int **) malloc(_len_channel__i0__free_arr0*sizeof(int *));
          for(int _j0 = 0; _j0 < _len_channel__i0__free_arr0; _j0++) {
            int _len_channel__i0__free_arr1 = 1;
            channel[_i0].free_arr[_j0] = (int *) malloc(_len_channel__i0__free_arr1*sizeof(int));
            for(int _j1 = 0; _j1 < _len_channel__i0__free_arr1; _j1++) {
              channel[_i0].free_arr[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_channel__i0__orig_arr0 = 1;
          channel[_i0].orig_arr = (int *) malloc(_len_channel__i0__orig_arr0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_channel__i0__orig_arr0; _j0++) {
            channel[_i0].orig_arr[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_channel__i0__reserve_arr0 = 1;
          channel[_i0].reserve_arr = (int *) malloc(_len_channel__i0__reserve_arr0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_channel__i0__reserve_arr0; _j0++) {
            channel[_i0].reserve_arr[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          enum vxge_hw_status benchRet = __vxge_hw_channel_reset(channel);
          for(int _aux = 0; _aux < _len_channel0; _aux++) {
          free(*(channel[_aux].work_arr));
        free(channel[_aux].work_arr);
          }
          for(int _aux = 0; _aux < _len_channel0; _aux++) {
          free(*(channel[_aux].free_arr));
        free(channel[_aux].free_arr);
          }
          for(int _aux = 0; _aux < _len_channel0; _aux++) {
          free(channel[_aux].orig_arr);
          }
          for(int _aux = 0; _aux < _len_channel0; _aux++) {
          free(channel[_aux].reserve_arr);
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
        channel[_i0].free_ptr = ((-2 * (next_i()%2)) + 1) * next_i();
        channel[_i0].reserve_ptr = ((-2 * (next_i()%2)) + 1) * next_i();
        channel[_i0].compl_index = ((-2 * (next_i()%2)) + 1) * next_i();
        channel[_i0].post_index = ((-2 * (next_i()%2)) + 1) * next_i();
        channel[_i0].reserve_top = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_channel__i0__work_arr0 = 1;
          channel[_i0].work_arr = (int **) malloc(_len_channel__i0__work_arr0*sizeof(int *));
          for(int _j0 = 0; _j0 < _len_channel__i0__work_arr0; _j0++) {
            int _len_channel__i0__work_arr1 = 1;
            channel[_i0].work_arr[_j0] = (int *) malloc(_len_channel__i0__work_arr1*sizeof(int));
            for(int _j1 = 0; _j1 < _len_channel__i0__work_arr1; _j1++) {
              channel[_i0].work_arr[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_channel__i0__free_arr0 = 1;
          channel[_i0].free_arr = (int **) malloc(_len_channel__i0__free_arr0*sizeof(int *));
          for(int _j0 = 0; _j0 < _len_channel__i0__free_arr0; _j0++) {
            int _len_channel__i0__free_arr1 = 1;
            channel[_i0].free_arr[_j0] = (int *) malloc(_len_channel__i0__free_arr1*sizeof(int));
            for(int _j1 = 0; _j1 < _len_channel__i0__free_arr1; _j1++) {
              channel[_i0].free_arr[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_channel__i0__orig_arr0 = 1;
          channel[_i0].orig_arr = (int *) malloc(_len_channel__i0__orig_arr0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_channel__i0__orig_arr0; _j0++) {
            channel[_i0].orig_arr[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_channel__i0__reserve_arr0 = 1;
          channel[_i0].reserve_arr = (int *) malloc(_len_channel__i0__reserve_arr0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_channel__i0__reserve_arr0; _j0++) {
            channel[_i0].reserve_arr[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          enum vxge_hw_status benchRet = __vxge_hw_channel_reset(channel);
          for(int _aux = 0; _aux < _len_channel0; _aux++) {
          free(*(channel[_aux].work_arr));
        free(channel[_aux].work_arr);
          }
          for(int _aux = 0; _aux < _len_channel0; _aux++) {
          free(*(channel[_aux].free_arr));
        free(channel[_aux].free_arr);
          }
          for(int _aux = 0; _aux < _len_channel0; _aux++) {
          free(channel[_aux].orig_arr);
          }
          for(int _aux = 0; _aux < _len_channel0; _aux++) {
          free(channel[_aux].reserve_arr);
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
        channel[_i0].free_ptr = ((-2 * (next_i()%2)) + 1) * next_i();
        channel[_i0].reserve_ptr = ((-2 * (next_i()%2)) + 1) * next_i();
        channel[_i0].compl_index = ((-2 * (next_i()%2)) + 1) * next_i();
        channel[_i0].post_index = ((-2 * (next_i()%2)) + 1) * next_i();
        channel[_i0].reserve_top = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_channel__i0__work_arr0 = 1;
          channel[_i0].work_arr = (int **) malloc(_len_channel__i0__work_arr0*sizeof(int *));
          for(int _j0 = 0; _j0 < _len_channel__i0__work_arr0; _j0++) {
            int _len_channel__i0__work_arr1 = 1;
            channel[_i0].work_arr[_j0] = (int *) malloc(_len_channel__i0__work_arr1*sizeof(int));
            for(int _j1 = 0; _j1 < _len_channel__i0__work_arr1; _j1++) {
              channel[_i0].work_arr[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_channel__i0__free_arr0 = 1;
          channel[_i0].free_arr = (int **) malloc(_len_channel__i0__free_arr0*sizeof(int *));
          for(int _j0 = 0; _j0 < _len_channel__i0__free_arr0; _j0++) {
            int _len_channel__i0__free_arr1 = 1;
            channel[_i0].free_arr[_j0] = (int *) malloc(_len_channel__i0__free_arr1*sizeof(int));
            for(int _j1 = 0; _j1 < _len_channel__i0__free_arr1; _j1++) {
              channel[_i0].free_arr[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_channel__i0__orig_arr0 = 1;
          channel[_i0].orig_arr = (int *) malloc(_len_channel__i0__orig_arr0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_channel__i0__orig_arr0; _j0++) {
            channel[_i0].orig_arr[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_channel__i0__reserve_arr0 = 1;
          channel[_i0].reserve_arr = (int *) malloc(_len_channel__i0__reserve_arr0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_channel__i0__reserve_arr0; _j0++) {
            channel[_i0].reserve_arr[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          enum vxge_hw_status benchRet = __vxge_hw_channel_reset(channel);
          for(int _aux = 0; _aux < _len_channel0; _aux++) {
          free(*(channel[_aux].work_arr));
        free(channel[_aux].work_arr);
          }
          for(int _aux = 0; _aux < _len_channel0; _aux++) {
          free(*(channel[_aux].free_arr));
        free(channel[_aux].free_arr);
          }
          for(int _aux = 0; _aux < _len_channel0; _aux++) {
          free(channel[_aux].orig_arr);
          }
          for(int _aux = 0; _aux < _len_channel0; _aux++) {
          free(channel[_aux].reserve_arr);
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
