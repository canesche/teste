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
struct TYPE_4__ {TYPE_1__* dev; } ;
struct ep93xx_dma_chan {TYPE_2__ chan; } ;
struct device {int dummy; } ;
struct TYPE_3__ {struct device device; } ;

/* Variables and functions */

__attribute__((used)) static inline struct device *chan2dev(struct ep93xx_dma_chan *edmac)
{
	return &edmac->chan.dev->device;
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
          int _len_edmac0 = 1;
          struct ep93xx_dma_chan * edmac = (struct ep93xx_dma_chan *) malloc(_len_edmac0*sizeof(struct ep93xx_dma_chan));
          for(int _i0 = 0; _i0 < _len_edmac0; _i0++) {
              int _len_edmac__i0__chan_dev0 = 1;
          edmac[_i0].chan.dev = (struct TYPE_3__ *) malloc(_len_edmac__i0__chan_dev0*sizeof(struct TYPE_3__));
          for(int _j0 = 0; _j0 < _len_edmac__i0__chan_dev0; _j0++) {
            edmac[_i0].chan.dev->device.dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          struct device * benchRet = chan2dev(edmac);
          printf("%d\n", (*benchRet).dummy);
          free(edmac);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_edmac0 = 65025;
          struct ep93xx_dma_chan * edmac = (struct ep93xx_dma_chan *) malloc(_len_edmac0*sizeof(struct ep93xx_dma_chan));
          for(int _i0 = 0; _i0 < _len_edmac0; _i0++) {
              int _len_edmac__i0__chan_dev0 = 1;
          edmac[_i0].chan.dev = (struct TYPE_3__ *) malloc(_len_edmac__i0__chan_dev0*sizeof(struct TYPE_3__));
          for(int _j0 = 0; _j0 < _len_edmac__i0__chan_dev0; _j0++) {
            edmac[_i0].chan.dev->device.dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          struct device * benchRet = chan2dev(edmac);
          printf("%d\n", (*benchRet).dummy);
          free(edmac);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_edmac0 = 100;
          struct ep93xx_dma_chan * edmac = (struct ep93xx_dma_chan *) malloc(_len_edmac0*sizeof(struct ep93xx_dma_chan));
          for(int _i0 = 0; _i0 < _len_edmac0; _i0++) {
              int _len_edmac__i0__chan_dev0 = 1;
          edmac[_i0].chan.dev = (struct TYPE_3__ *) malloc(_len_edmac__i0__chan_dev0*sizeof(struct TYPE_3__));
          for(int _j0 = 0; _j0 < _len_edmac__i0__chan_dev0; _j0++) {
            edmac[_i0].chan.dev->device.dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          struct device * benchRet = chan2dev(edmac);
          printf("%d\n", (*benchRet).dummy);
          free(edmac);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
