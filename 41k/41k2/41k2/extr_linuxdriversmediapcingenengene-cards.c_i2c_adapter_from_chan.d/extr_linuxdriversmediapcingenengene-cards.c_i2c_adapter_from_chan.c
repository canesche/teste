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
struct ngene_channel {int number; TYPE_2__* dev; } ;
struct i2c_adapter {int dummy; } ;
struct TYPE_4__ {TYPE_1__* channel; } ;
struct TYPE_3__ {struct i2c_adapter i2c_adapter; } ;

/* Variables and functions */

__attribute__((used)) static struct i2c_adapter *i2c_adapter_from_chan(struct ngene_channel *chan)
{
	/* tuner 1+2: i2c adapter #0, tuner 3+4: i2c adapter #1 */
	if (chan->number < 2)
		return &chan->dev->channel[0].i2c_adapter;

	return &chan->dev->channel[1].i2c_adapter;
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
          int _len_chan0 = 1;
          struct ngene_channel * chan = (struct ngene_channel *) malloc(_len_chan0*sizeof(struct ngene_channel));
          for(int _i0 = 0; _i0 < _len_chan0; _i0++) {
            chan[_i0].number = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_chan__i0__dev0 = 1;
          chan[_i0].dev = (struct TYPE_4__ *) malloc(_len_chan__i0__dev0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_chan__i0__dev0; _j0++) {
              int _len_chan__i0__dev_channel0 = 1;
          chan[_i0].dev->channel = (struct TYPE_3__ *) malloc(_len_chan__i0__dev_channel0*sizeof(struct TYPE_3__));
          for(int _j0 = 0; _j0 < _len_chan__i0__dev_channel0; _j0++) {
            chan[_i0].dev->channel->i2c_adapter.dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          struct i2c_adapter * benchRet = i2c_adapter_from_chan(chan);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_chan0; _aux++) {
          free(chan[_aux].dev);
          }
          free(chan);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_chan0 = 65025;
          struct ngene_channel * chan = (struct ngene_channel *) malloc(_len_chan0*sizeof(struct ngene_channel));
          for(int _i0 = 0; _i0 < _len_chan0; _i0++) {
            chan[_i0].number = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_chan__i0__dev0 = 1;
          chan[_i0].dev = (struct TYPE_4__ *) malloc(_len_chan__i0__dev0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_chan__i0__dev0; _j0++) {
              int _len_chan__i0__dev_channel0 = 1;
          chan[_i0].dev->channel = (struct TYPE_3__ *) malloc(_len_chan__i0__dev_channel0*sizeof(struct TYPE_3__));
          for(int _j0 = 0; _j0 < _len_chan__i0__dev_channel0; _j0++) {
            chan[_i0].dev->channel->i2c_adapter.dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          struct i2c_adapter * benchRet = i2c_adapter_from_chan(chan);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_chan0; _aux++) {
          free(chan[_aux].dev);
          }
          free(chan);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_chan0 = 100;
          struct ngene_channel * chan = (struct ngene_channel *) malloc(_len_chan0*sizeof(struct ngene_channel));
          for(int _i0 = 0; _i0 < _len_chan0; _i0++) {
            chan[_i0].number = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_chan__i0__dev0 = 1;
          chan[_i0].dev = (struct TYPE_4__ *) malloc(_len_chan__i0__dev0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_chan__i0__dev0; _j0++) {
              int _len_chan__i0__dev_channel0 = 1;
          chan[_i0].dev->channel = (struct TYPE_3__ *) malloc(_len_chan__i0__dev_channel0*sizeof(struct TYPE_3__));
          for(int _j0 = 0; _j0 < _len_chan__i0__dev_channel0; _j0++) {
            chan[_i0].dev->channel->i2c_adapter.dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          struct i2c_adapter * benchRet = i2c_adapter_from_chan(chan);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_chan0; _aux++) {
          free(chan[_aux].dev);
          }
          free(chan);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
