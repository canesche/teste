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
struct mgsl_struct {unsigned int tx_buffer_count; scalar_t__ tx_holding_count; scalar_t__ put_tx_holding_index; scalar_t__ get_tx_holding_index; scalar_t__ tx_dma_buffers_used; scalar_t__ start_tx_dma_buffer; scalar_t__ current_tx_buffer; TYPE_1__* tx_buffer_list; } ;
struct TYPE_2__ {int /*<<< orphan*/  count; } ;

/* Variables and functions */

__attribute__((used)) static void mgsl_reset_tx_dma_buffers( struct mgsl_struct *info )
{
	unsigned int i;

	for ( i = 0; i < info->tx_buffer_count; i++ ) {
		*((unsigned long *)&(info->tx_buffer_list[i].count)) = 0;
	}

	info->current_tx_buffer = 0;
	info->start_tx_dma_buffer = 0;
	info->tx_dma_buffers_used = 0;

	info->get_tx_holding_index = 0;
	info->put_tx_holding_index = 0;
	info->tx_holding_count = 0;

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
          int _len_info0 = 1;
          struct mgsl_struct * info = (struct mgsl_struct *) malloc(_len_info0*sizeof(struct mgsl_struct));
          for(int _i0 = 0; _i0 < _len_info0; _i0++) {
            info[_i0].tx_buffer_count = ((-2 * (next_i()%2)) + 1) * next_i();
        info[_i0].tx_holding_count = ((-2 * (next_i()%2)) + 1) * next_i();
        info[_i0].put_tx_holding_index = ((-2 * (next_i()%2)) + 1) * next_i();
        info[_i0].get_tx_holding_index = ((-2 * (next_i()%2)) + 1) * next_i();
        info[_i0].tx_dma_buffers_used = ((-2 * (next_i()%2)) + 1) * next_i();
        info[_i0].start_tx_dma_buffer = ((-2 * (next_i()%2)) + 1) * next_i();
        info[_i0].current_tx_buffer = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_info__i0__tx_buffer_list0 = 1;
          info[_i0].tx_buffer_list = (struct TYPE_2__ *) malloc(_len_info__i0__tx_buffer_list0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_info__i0__tx_buffer_list0; _j0++) {
            info[_i0].tx_buffer_list->count = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          mgsl_reset_tx_dma_buffers(info);
          for(int _aux = 0; _aux < _len_info0; _aux++) {
          free(info[_aux].tx_buffer_list);
          }
          free(info);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_info0 = 65025;
          struct mgsl_struct * info = (struct mgsl_struct *) malloc(_len_info0*sizeof(struct mgsl_struct));
          for(int _i0 = 0; _i0 < _len_info0; _i0++) {
            info[_i0].tx_buffer_count = ((-2 * (next_i()%2)) + 1) * next_i();
        info[_i0].tx_holding_count = ((-2 * (next_i()%2)) + 1) * next_i();
        info[_i0].put_tx_holding_index = ((-2 * (next_i()%2)) + 1) * next_i();
        info[_i0].get_tx_holding_index = ((-2 * (next_i()%2)) + 1) * next_i();
        info[_i0].tx_dma_buffers_used = ((-2 * (next_i()%2)) + 1) * next_i();
        info[_i0].start_tx_dma_buffer = ((-2 * (next_i()%2)) + 1) * next_i();
        info[_i0].current_tx_buffer = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_info__i0__tx_buffer_list0 = 1;
          info[_i0].tx_buffer_list = (struct TYPE_2__ *) malloc(_len_info__i0__tx_buffer_list0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_info__i0__tx_buffer_list0; _j0++) {
            info[_i0].tx_buffer_list->count = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          mgsl_reset_tx_dma_buffers(info);
          for(int _aux = 0; _aux < _len_info0; _aux++) {
          free(info[_aux].tx_buffer_list);
          }
          free(info);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_info0 = 100;
          struct mgsl_struct * info = (struct mgsl_struct *) malloc(_len_info0*sizeof(struct mgsl_struct));
          for(int _i0 = 0; _i0 < _len_info0; _i0++) {
            info[_i0].tx_buffer_count = ((-2 * (next_i()%2)) + 1) * next_i();
        info[_i0].tx_holding_count = ((-2 * (next_i()%2)) + 1) * next_i();
        info[_i0].put_tx_holding_index = ((-2 * (next_i()%2)) + 1) * next_i();
        info[_i0].get_tx_holding_index = ((-2 * (next_i()%2)) + 1) * next_i();
        info[_i0].tx_dma_buffers_used = ((-2 * (next_i()%2)) + 1) * next_i();
        info[_i0].start_tx_dma_buffer = ((-2 * (next_i()%2)) + 1) * next_i();
        info[_i0].current_tx_buffer = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_info__i0__tx_buffer_list0 = 1;
          info[_i0].tx_buffer_list = (struct TYPE_2__ *) malloc(_len_info__i0__tx_buffer_list0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_info__i0__tx_buffer_list0; _j0++) {
            info[_i0].tx_buffer_list->count = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          mgsl_reset_tx_dma_buffers(info);
          for(int _aux = 0; _aux < _len_info0; _aux++) {
          free(info[_aux].tx_buffer_list);
          }
          free(info);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
