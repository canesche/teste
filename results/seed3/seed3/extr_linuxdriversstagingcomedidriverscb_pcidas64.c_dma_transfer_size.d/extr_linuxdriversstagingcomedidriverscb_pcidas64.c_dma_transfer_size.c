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
typedef  int /*<<< orphan*/  u16 ;
struct pcidas64_private {unsigned int ai_fifo_segment_length; } ;
struct pcidas64_board {TYPE_1__* ai_fifo; } ;
struct comedi_device {struct pcidas64_private* private; struct pcidas64_board* board_ptr; } ;
struct TYPE_2__ {unsigned int sample_packing_ratio; } ;

/* Variables and functions */
 int DMA_BUFFER_SIZE ; 

__attribute__((used)) static inline unsigned int dma_transfer_size(struct comedi_device *dev)
{
	const struct pcidas64_board *board = dev->board_ptr;
	struct pcidas64_private *devpriv = dev->private;
	unsigned int num_samples;

	num_samples = devpriv->ai_fifo_segment_length *
		      board->ai_fifo->sample_packing_ratio;
	if (num_samples > DMA_BUFFER_SIZE / sizeof(u16))
		num_samples = DMA_BUFFER_SIZE / sizeof(u16);

	return num_samples;
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
          struct comedi_device * dev = (struct comedi_device *) malloc(_len_dev0*sizeof(struct comedi_device));
          for(int _i0 = 0; _i0 < _len_dev0; _i0++) {
              int _len_dev__i0__private0 = 1;
          dev[_i0].private = (struct pcidas64_private *) malloc(_len_dev__i0__private0*sizeof(struct pcidas64_private));
          for(int _j0 = 0; _j0 < _len_dev__i0__private0; _j0++) {
            dev[_i0].private->ai_fifo_segment_length = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_dev__i0__board_ptr0 = 1;
          dev[_i0].board_ptr = (struct pcidas64_board *) malloc(_len_dev__i0__board_ptr0*sizeof(struct pcidas64_board));
          for(int _j0 = 0; _j0 < _len_dev__i0__board_ptr0; _j0++) {
              int _len_dev__i0__board_ptr_ai_fifo0 = 1;
          dev[_i0].board_ptr->ai_fifo = (struct TYPE_2__ *) malloc(_len_dev__i0__board_ptr_ai_fifo0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_dev__i0__board_ptr_ai_fifo0; _j0++) {
            dev[_i0].board_ptr->ai_fifo->sample_packing_ratio = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          unsigned int benchRet = dma_transfer_size(dev);
          printf("%u\n", benchRet); 
          for(int _aux = 0; _aux < _len_dev0; _aux++) {
          free(dev[_aux].private);
          }
          for(int _aux = 0; _aux < _len_dev0; _aux++) {
          free(dev[_aux].board_ptr);
          }
          free(dev);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_dev0 = 65025;
          struct comedi_device * dev = (struct comedi_device *) malloc(_len_dev0*sizeof(struct comedi_device));
          for(int _i0 = 0; _i0 < _len_dev0; _i0++) {
              int _len_dev__i0__private0 = 1;
          dev[_i0].private = (struct pcidas64_private *) malloc(_len_dev__i0__private0*sizeof(struct pcidas64_private));
          for(int _j0 = 0; _j0 < _len_dev__i0__private0; _j0++) {
            dev[_i0].private->ai_fifo_segment_length = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_dev__i0__board_ptr0 = 1;
          dev[_i0].board_ptr = (struct pcidas64_board *) malloc(_len_dev__i0__board_ptr0*sizeof(struct pcidas64_board));
          for(int _j0 = 0; _j0 < _len_dev__i0__board_ptr0; _j0++) {
              int _len_dev__i0__board_ptr_ai_fifo0 = 1;
          dev[_i0].board_ptr->ai_fifo = (struct TYPE_2__ *) malloc(_len_dev__i0__board_ptr_ai_fifo0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_dev__i0__board_ptr_ai_fifo0; _j0++) {
            dev[_i0].board_ptr->ai_fifo->sample_packing_ratio = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          unsigned int benchRet = dma_transfer_size(dev);
          printf("%u\n", benchRet); 
          for(int _aux = 0; _aux < _len_dev0; _aux++) {
          free(dev[_aux].private);
          }
          for(int _aux = 0; _aux < _len_dev0; _aux++) {
          free(dev[_aux].board_ptr);
          }
          free(dev);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_dev0 = 100;
          struct comedi_device * dev = (struct comedi_device *) malloc(_len_dev0*sizeof(struct comedi_device));
          for(int _i0 = 0; _i0 < _len_dev0; _i0++) {
              int _len_dev__i0__private0 = 1;
          dev[_i0].private = (struct pcidas64_private *) malloc(_len_dev__i0__private0*sizeof(struct pcidas64_private));
          for(int _j0 = 0; _j0 < _len_dev__i0__private0; _j0++) {
            dev[_i0].private->ai_fifo_segment_length = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_dev__i0__board_ptr0 = 1;
          dev[_i0].board_ptr = (struct pcidas64_board *) malloc(_len_dev__i0__board_ptr0*sizeof(struct pcidas64_board));
          for(int _j0 = 0; _j0 < _len_dev__i0__board_ptr0; _j0++) {
              int _len_dev__i0__board_ptr_ai_fifo0 = 1;
          dev[_i0].board_ptr->ai_fifo = (struct TYPE_2__ *) malloc(_len_dev__i0__board_ptr_ai_fifo0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_dev__i0__board_ptr_ai_fifo0; _j0++) {
            dev[_i0].board_ptr->ai_fifo->sample_packing_ratio = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          unsigned int benchRet = dma_transfer_size(dev);
          printf("%u\n", benchRet); 
          for(int _aux = 0; _aux < _len_dev0; _aux++) {
          free(dev[_aux].private);
          }
          for(int _aux = 0; _aux < _len_dev0; _aux++) {
          free(dev[_aux].board_ptr);
          }
          free(dev);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
