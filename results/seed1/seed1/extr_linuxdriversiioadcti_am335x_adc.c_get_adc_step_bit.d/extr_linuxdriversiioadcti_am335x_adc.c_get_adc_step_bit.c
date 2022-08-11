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
typedef  int u32 ;
struct tiadc_device {int* channel_step; } ;

/* Variables and functions */

__attribute__((used)) static u32 get_adc_step_bit(struct tiadc_device *adc_dev, int chan)
{
	return 1 << adc_dev->channel_step[chan];
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
          int chan = 100;
          int _len_adc_dev0 = 1;
          struct tiadc_device * adc_dev = (struct tiadc_device *) malloc(_len_adc_dev0*sizeof(struct tiadc_device));
          for(int _i0 = 0; _i0 < _len_adc_dev0; _i0++) {
              int _len_adc_dev__i0__channel_step0 = 1;
          adc_dev[_i0].channel_step = (int *) malloc(_len_adc_dev__i0__channel_step0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_adc_dev__i0__channel_step0; _j0++) {
            adc_dev[_i0].channel_step[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = get_adc_step_bit(adc_dev,chan);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_adc_dev0; _aux++) {
          free(adc_dev[_aux].channel_step);
          }
          free(adc_dev);
        
        break;
    }
    // big-arr
    case 1:
    {
          int chan = 255;
          int _len_adc_dev0 = 65025;
          struct tiadc_device * adc_dev = (struct tiadc_device *) malloc(_len_adc_dev0*sizeof(struct tiadc_device));
          for(int _i0 = 0; _i0 < _len_adc_dev0; _i0++) {
              int _len_adc_dev__i0__channel_step0 = 1;
          adc_dev[_i0].channel_step = (int *) malloc(_len_adc_dev__i0__channel_step0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_adc_dev__i0__channel_step0; _j0++) {
            adc_dev[_i0].channel_step[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = get_adc_step_bit(adc_dev,chan);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_adc_dev0; _aux++) {
          free(adc_dev[_aux].channel_step);
          }
          free(adc_dev);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int chan = 10;
          int _len_adc_dev0 = 100;
          struct tiadc_device * adc_dev = (struct tiadc_device *) malloc(_len_adc_dev0*sizeof(struct tiadc_device));
          for(int _i0 = 0; _i0 < _len_adc_dev0; _i0++) {
              int _len_adc_dev__i0__channel_step0 = 1;
          adc_dev[_i0].channel_step = (int *) malloc(_len_adc_dev__i0__channel_step0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_adc_dev__i0__channel_step0; _j0++) {
            adc_dev[_i0].channel_step[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = get_adc_step_bit(adc_dev,chan);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_adc_dev0; _aux++) {
          free(adc_dev[_aux].channel_step);
          }
          free(adc_dev);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
