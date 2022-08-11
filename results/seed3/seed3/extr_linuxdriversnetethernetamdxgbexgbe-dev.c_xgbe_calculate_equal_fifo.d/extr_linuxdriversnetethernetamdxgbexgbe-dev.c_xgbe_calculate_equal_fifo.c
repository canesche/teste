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

/* Variables and functions */
 unsigned int XGMAC_FIFO_UNIT ; 

__attribute__((used)) static void xgbe_calculate_equal_fifo(unsigned int fifo_size,
				      unsigned int queue_count,
				      unsigned int *fifo)
{
	unsigned int q_fifo_size;
	unsigned int p_fifo;
	unsigned int i;

	q_fifo_size = fifo_size / queue_count;

	/* Calculate the fifo setting by dividing the queue's fifo size
	 * by the fifo allocation increment (with 0 representing the
	 * base allocation increment so decrement the result by 1).
	 */
	p_fifo = q_fifo_size / XGMAC_FIFO_UNIT;
	if (p_fifo)
		p_fifo--;

	/* Distribute the fifo equally amongst the queues */
	for (i = 0; i < queue_count; i++)
		fifo[i] = p_fifo;
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
          unsigned int fifo_size = 100;
          unsigned int queue_count = 100;
          int _len_fifo0 = 1;
          unsigned int * fifo = (unsigned int *) malloc(_len_fifo0*sizeof(unsigned int));
          for(int _i0 = 0; _i0 < _len_fifo0; _i0++) {
            fifo[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          xgbe_calculate_equal_fifo(fifo_size,queue_count,fifo);
          free(fifo);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned int fifo_size = 255;
          unsigned int queue_count = 255;
          int _len_fifo0 = 65025;
          unsigned int * fifo = (unsigned int *) malloc(_len_fifo0*sizeof(unsigned int));
          for(int _i0 = 0; _i0 < _len_fifo0; _i0++) {
            fifo[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          xgbe_calculate_equal_fifo(fifo_size,queue_count,fifo);
          free(fifo);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned int fifo_size = 10;
          unsigned int queue_count = 10;
          int _len_fifo0 = 100;
          unsigned int * fifo = (unsigned int *) malloc(_len_fifo0*sizeof(unsigned int));
          for(int _i0 = 0; _i0 < _len_fifo0; _i0++) {
            fifo[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          xgbe_calculate_equal_fifo(fifo_size,queue_count,fifo);
          free(fifo);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
