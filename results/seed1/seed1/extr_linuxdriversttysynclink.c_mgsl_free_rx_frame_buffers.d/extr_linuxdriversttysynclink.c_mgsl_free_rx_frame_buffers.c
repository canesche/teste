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
struct mgsl_struct {unsigned int rx_buffer_count; unsigned int current_rx_buffer; TYPE_1__* rx_buffer_list; } ;
struct TYPE_2__ {int /*<<< orphan*/  count; } ;
typedef  TYPE_1__ DMABUFFERENTRY ;

/* Variables and functions */
 unsigned long DMABUFFERSIZE ; 

__attribute__((used)) static void mgsl_free_rx_frame_buffers( struct mgsl_struct *info, unsigned int StartIndex, unsigned int EndIndex )
{
	bool Done = false;
	DMABUFFERENTRY *pBufEntry;
	unsigned int Index;

	/* Starting with 1st buffer entry of the frame clear the status */
	/* field and set the count field to DMA Buffer Size. */

	Index = StartIndex;

	while( !Done ) {
		pBufEntry = &(info->rx_buffer_list[Index]);

		if ( Index == EndIndex ) {
			/* This is the last buffer of the frame! */
			Done = true;
		}

		/* reset current buffer for reuse */
//		pBufEntry->status = 0;
//		pBufEntry->count = DMABUFFERSIZE;
		*((unsigned long *)&(pBufEntry->count)) = DMABUFFERSIZE;

		/* advance to next buffer entry in linked list */
		Index++;
		if ( Index == info->rx_buffer_count )
			Index = 0;
	}

	/* set current buffer to next buffer after last buffer of frame */
	info->current_rx_buffer = Index;

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
          unsigned int StartIndex = 100;
          unsigned int EndIndex = 100;
          int _len_info0 = 1;
          struct mgsl_struct * info = (struct mgsl_struct *) malloc(_len_info0*sizeof(struct mgsl_struct));
          for(int _i0 = 0; _i0 < _len_info0; _i0++) {
            info[_i0].rx_buffer_count = ((-2 * (next_i()%2)) + 1) * next_i();
        info[_i0].current_rx_buffer = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_info__i0__rx_buffer_list0 = 1;
          info[_i0].rx_buffer_list = (struct TYPE_2__ *) malloc(_len_info__i0__rx_buffer_list0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_info__i0__rx_buffer_list0; _j0++) {
            info[_i0].rx_buffer_list->count = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          mgsl_free_rx_frame_buffers(info,StartIndex,EndIndex);
          for(int _aux = 0; _aux < _len_info0; _aux++) {
          free(info[_aux].rx_buffer_list);
          }
          free(info);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned int StartIndex = 255;
          unsigned int EndIndex = 255;
          int _len_info0 = 65025;
          struct mgsl_struct * info = (struct mgsl_struct *) malloc(_len_info0*sizeof(struct mgsl_struct));
          for(int _i0 = 0; _i0 < _len_info0; _i0++) {
            info[_i0].rx_buffer_count = ((-2 * (next_i()%2)) + 1) * next_i();
        info[_i0].current_rx_buffer = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_info__i0__rx_buffer_list0 = 1;
          info[_i0].rx_buffer_list = (struct TYPE_2__ *) malloc(_len_info__i0__rx_buffer_list0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_info__i0__rx_buffer_list0; _j0++) {
            info[_i0].rx_buffer_list->count = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          mgsl_free_rx_frame_buffers(info,StartIndex,EndIndex);
          for(int _aux = 0; _aux < _len_info0; _aux++) {
          free(info[_aux].rx_buffer_list);
          }
          free(info);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned int StartIndex = 10;
          unsigned int EndIndex = 10;
          int _len_info0 = 100;
          struct mgsl_struct * info = (struct mgsl_struct *) malloc(_len_info0*sizeof(struct mgsl_struct));
          for(int _i0 = 0; _i0 < _len_info0; _i0++) {
            info[_i0].rx_buffer_count = ((-2 * (next_i()%2)) + 1) * next_i();
        info[_i0].current_rx_buffer = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_info__i0__rx_buffer_list0 = 1;
          info[_i0].rx_buffer_list = (struct TYPE_2__ *) malloc(_len_info__i0__rx_buffer_list0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_info__i0__rx_buffer_list0; _j0++) {
            info[_i0].rx_buffer_list->count = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          mgsl_free_rx_frame_buffers(info,StartIndex,EndIndex);
          for(int _aux = 0; _aux < _len_info0; _aux++) {
          free(info[_aux].rx_buffer_list);
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
