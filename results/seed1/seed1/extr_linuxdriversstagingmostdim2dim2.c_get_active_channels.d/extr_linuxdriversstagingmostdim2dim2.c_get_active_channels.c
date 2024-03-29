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
struct dim_channel {int dummy; } ;
struct dim2_hdm {TYPE_1__* hch; } ;
struct TYPE_2__ {struct dim_channel ch; scalar_t__ is_initialized; } ;

/* Variables and functions */
 int DMA_CHANNELS ; 

__attribute__((used)) static struct dim_channel **get_active_channels(struct dim2_hdm *dev,
						struct dim_channel **buffer)
{
	int idx = 0;
	int ch_idx;

	for (ch_idx = 0; ch_idx < DMA_CHANNELS; ch_idx++) {
		if (dev->hch[ch_idx].is_initialized)
			buffer[idx++] = &dev->hch[ch_idx].ch;
	}
	buffer[idx++] = NULL;

	return buffer;
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
          int _len_dev0 = 1;
          struct dim2_hdm * dev = (struct dim2_hdm *) malloc(_len_dev0*sizeof(struct dim2_hdm));
          for(int _i0 = 0; _i0 < _len_dev0; _i0++) {
              int _len_dev__i0__hch0 = 1;
          dev[_i0].hch = (struct TYPE_2__ *) malloc(_len_dev__i0__hch0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_dev__i0__hch0; _j0++) {
            dev[_i0].hch->ch.dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        dev[_i0].hch->is_initialized = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_buffer0 = 1;
          struct dim_channel ** buffer = (struct dim_channel **) malloc(_len_buffer0*sizeof(struct dim_channel *));
          for(int _i0 = 0; _i0 < _len_buffer0; _i0++) {
            int _len_buffer1 = 1;
            buffer[_i0] = (struct dim_channel *) malloc(_len_buffer1*sizeof(struct dim_channel));
            for(int _i1 = 0; _i1 < _len_buffer1; _i1++) {
              buffer[_i0][_i1].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          struct dim_channel ** benchRet = get_active_channels(dev,buffer);
          printf("%d\n", (**benchRet).dummy);
          for(int _aux = 0; _aux < _len_dev0; _aux++) {
          free(dev[_aux].hch);
          }
          free(dev);
          for(int i1 = 0; i1 < _len_buffer0; i1++) {
            int _len_buffer1 = 1;
              free(buffer[i1]);
          }
          free(buffer);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_dev0 = 65025;
          struct dim2_hdm * dev = (struct dim2_hdm *) malloc(_len_dev0*sizeof(struct dim2_hdm));
          for(int _i0 = 0; _i0 < _len_dev0; _i0++) {
              int _len_dev__i0__hch0 = 1;
          dev[_i0].hch = (struct TYPE_2__ *) malloc(_len_dev__i0__hch0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_dev__i0__hch0; _j0++) {
            dev[_i0].hch->ch.dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        dev[_i0].hch->is_initialized = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_buffer0 = 65025;
          struct dim_channel ** buffer = (struct dim_channel **) malloc(_len_buffer0*sizeof(struct dim_channel *));
          for(int _i0 = 0; _i0 < _len_buffer0; _i0++) {
            int _len_buffer1 = 1;
            buffer[_i0] = (struct dim_channel *) malloc(_len_buffer1*sizeof(struct dim_channel));
            for(int _i1 = 0; _i1 < _len_buffer1; _i1++) {
              buffer[_i0][_i1].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          struct dim_channel ** benchRet = get_active_channels(dev,buffer);
          printf("%d\n", (**benchRet).dummy);
          for(int _aux = 0; _aux < _len_dev0; _aux++) {
          free(dev[_aux].hch);
          }
          free(dev);
          for(int i1 = 0; i1 < _len_buffer0; i1++) {
            int _len_buffer1 = 1;
              free(buffer[i1]);
          }
          free(buffer);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_dev0 = 100;
          struct dim2_hdm * dev = (struct dim2_hdm *) malloc(_len_dev0*sizeof(struct dim2_hdm));
          for(int _i0 = 0; _i0 < _len_dev0; _i0++) {
              int _len_dev__i0__hch0 = 1;
          dev[_i0].hch = (struct TYPE_2__ *) malloc(_len_dev__i0__hch0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_dev__i0__hch0; _j0++) {
            dev[_i0].hch->ch.dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        dev[_i0].hch->is_initialized = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_buffer0 = 100;
          struct dim_channel ** buffer = (struct dim_channel **) malloc(_len_buffer0*sizeof(struct dim_channel *));
          for(int _i0 = 0; _i0 < _len_buffer0; _i0++) {
            int _len_buffer1 = 1;
            buffer[_i0] = (struct dim_channel *) malloc(_len_buffer1*sizeof(struct dim_channel));
            for(int _i1 = 0; _i1 < _len_buffer1; _i1++) {
              buffer[_i0][_i1].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          struct dim_channel ** benchRet = get_active_channels(dev,buffer);
          printf("%d\n", (**benchRet).dummy);
          for(int _aux = 0; _aux < _len_dev0; _aux++) {
          free(dev[_aux].hch);
          }
          free(dev);
          for(int i1 = 0; i1 < _len_buffer0; i1++) {
            int _len_buffer1 = 1;
              free(buffer[i1]);
          }
          free(buffer);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
