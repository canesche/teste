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
struct wakeup_source {int /*<<< orphan*/ * wakeirq; } ;
struct TYPE_2__ {struct wakeup_source* wakeup; } ;
struct device {TYPE_1__ power; } ;

/* Variables and functions */

void device_wakeup_detach_irq(struct device *dev)
{
	struct wakeup_source *ws;

	ws = dev->power.wakeup;
	if (ws)
		ws->wakeirq = NULL;
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
          struct device * dev = (struct device *) malloc(_len_dev0*sizeof(struct device));
          for(int _i0 = 0; _i0 < _len_dev0; _i0++) {
              int _len_dev__i0__power_wakeup0 = 1;
          dev[_i0].power.wakeup = (struct wakeup_source *) malloc(_len_dev__i0__power_wakeup0*sizeof(struct wakeup_source));
          for(int _j0 = 0; _j0 < _len_dev__i0__power_wakeup0; _j0++) {
              int _len_dev__i0__power_wakeup_wakeirq0 = 1;
          dev[_i0].power.wakeup->wakeirq = (int *) malloc(_len_dev__i0__power_wakeup_wakeirq0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_dev__i0__power_wakeup_wakeirq0; _j0++) {
            dev[_i0].power.wakeup->wakeirq[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          device_wakeup_detach_irq(dev);
          free(dev);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_dev0 = 65025;
          struct device * dev = (struct device *) malloc(_len_dev0*sizeof(struct device));
          for(int _i0 = 0; _i0 < _len_dev0; _i0++) {
              int _len_dev__i0__power_wakeup0 = 1;
          dev[_i0].power.wakeup = (struct wakeup_source *) malloc(_len_dev__i0__power_wakeup0*sizeof(struct wakeup_source));
          for(int _j0 = 0; _j0 < _len_dev__i0__power_wakeup0; _j0++) {
              int _len_dev__i0__power_wakeup_wakeirq0 = 1;
          dev[_i0].power.wakeup->wakeirq = (int *) malloc(_len_dev__i0__power_wakeup_wakeirq0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_dev__i0__power_wakeup_wakeirq0; _j0++) {
            dev[_i0].power.wakeup->wakeirq[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          device_wakeup_detach_irq(dev);
          free(dev);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_dev0 = 100;
          struct device * dev = (struct device *) malloc(_len_dev0*sizeof(struct device));
          for(int _i0 = 0; _i0 < _len_dev0; _i0++) {
              int _len_dev__i0__power_wakeup0 = 1;
          dev[_i0].power.wakeup = (struct wakeup_source *) malloc(_len_dev__i0__power_wakeup0*sizeof(struct wakeup_source));
          for(int _j0 = 0; _j0 < _len_dev__i0__power_wakeup0; _j0++) {
              int _len_dev__i0__power_wakeup_wakeirq0 = 1;
          dev[_i0].power.wakeup->wakeirq = (int *) malloc(_len_dev__i0__power_wakeup_wakeirq0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_dev__i0__power_wakeup_wakeirq0; _j0++) {
            dev[_i0].power.wakeup->wakeirq[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          device_wakeup_detach_irq(dev);
          free(dev);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
