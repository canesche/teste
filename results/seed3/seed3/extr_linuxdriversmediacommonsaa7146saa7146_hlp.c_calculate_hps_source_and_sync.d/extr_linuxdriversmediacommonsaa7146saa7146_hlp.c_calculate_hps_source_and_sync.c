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
struct saa7146_dev {int dummy; } ;

/* Variables and functions */
 int MASK_28 ; 
 int MASK_30 ; 
 int MASK_31 ; 

__attribute__((used)) static void calculate_hps_source_and_sync(struct saa7146_dev *dev, int source, int sync, u32* hps_ctrl)
{
	*hps_ctrl &= ~(MASK_30 | MASK_31 | MASK_28);
	*hps_ctrl |= (source << 30) | (sync << 28);
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
          int source = 100;
          int sync = 100;
          int _len_dev0 = 1;
          struct saa7146_dev * dev = (struct saa7146_dev *) malloc(_len_dev0*sizeof(struct saa7146_dev));
          for(int _i0 = 0; _i0 < _len_dev0; _i0++) {
            dev[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_hps_ctrl0 = 1;
          int * hps_ctrl = (int *) malloc(_len_hps_ctrl0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_hps_ctrl0; _i0++) {
            hps_ctrl[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          calculate_hps_source_and_sync(dev,source,sync,hps_ctrl);
          free(dev);
          free(hps_ctrl);
        
        break;
    }
    // big-arr
    case 1:
    {
          int source = 255;
          int sync = 255;
          int _len_dev0 = 65025;
          struct saa7146_dev * dev = (struct saa7146_dev *) malloc(_len_dev0*sizeof(struct saa7146_dev));
          for(int _i0 = 0; _i0 < _len_dev0; _i0++) {
            dev[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_hps_ctrl0 = 65025;
          int * hps_ctrl = (int *) malloc(_len_hps_ctrl0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_hps_ctrl0; _i0++) {
            hps_ctrl[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          calculate_hps_source_and_sync(dev,source,sync,hps_ctrl);
          free(dev);
          free(hps_ctrl);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int source = 10;
          int sync = 10;
          int _len_dev0 = 100;
          struct saa7146_dev * dev = (struct saa7146_dev *) malloc(_len_dev0*sizeof(struct saa7146_dev));
          for(int _i0 = 0; _i0 < _len_dev0; _i0++) {
            dev[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_hps_ctrl0 = 100;
          int * hps_ctrl = (int *) malloc(_len_hps_ctrl0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_hps_ctrl0; _i0++) {
            hps_ctrl[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          calculate_hps_source_and_sync(dev,source,sync,hps_ctrl);
          free(dev);
          free(hps_ctrl);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
