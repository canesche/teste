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
typedef  struct TYPE_6__   TYPE_3__ ;
typedef  struct TYPE_5__   TYPE_2__ ;
typedef  struct TYPE_4__   TYPE_1__ ;

/* Type definitions */
typedef  int u8 ;
struct TYPE_4__ {scalar_t__ gmode; } ;
struct b43_wldev {TYPE_3__* dev; TYPE_1__ phy; } ;
struct TYPE_6__ {TYPE_2__* bus_sprom; } ;
struct TYPE_5__ {int ant_available_bg; int ant_available_a; } ;

/* Variables and functions */

u8 b43_ieee80211_antenna_sanitize(struct b43_wldev *dev,
				  u8 antenna_nr)
{
	u8 antenna_mask;

	if (antenna_nr == 0) {
		/* Zero means "use default antenna". That's always OK. */
		return 0;
	}

	/* Get the mask of available antennas. */
	if (dev->phy.gmode)
		antenna_mask = dev->dev->bus_sprom->ant_available_bg;
	else
		antenna_mask = dev->dev->bus_sprom->ant_available_a;

	if (!(antenna_mask & (1 << (antenna_nr - 1)))) {
		/* This antenna is not available. Fall back to default. */
		return 0;
	}

	return antenna_nr;
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
          int antenna_nr = 100;
          int _len_dev0 = 1;
          struct b43_wldev * dev = (struct b43_wldev *) malloc(_len_dev0*sizeof(struct b43_wldev));
          for(int _i0 = 0; _i0 < _len_dev0; _i0++) {
              int _len_dev__i0__dev0 = 1;
          dev[_i0].dev = (struct TYPE_6__ *) malloc(_len_dev__i0__dev0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_dev__i0__dev0; _j0++) {
              int _len_dev__i0__dev_bus_sprom0 = 1;
          dev[_i0].dev->bus_sprom = (struct TYPE_5__ *) malloc(_len_dev__i0__dev_bus_sprom0*sizeof(struct TYPE_5__));
          for(int _j0 = 0; _j0 < _len_dev__i0__dev_bus_sprom0; _j0++) {
            dev[_i0].dev->bus_sprom->ant_available_bg = ((-2 * (next_i()%2)) + 1) * next_i();
        dev[_i0].dev->bus_sprom->ant_available_a = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
        dev[_i0].phy.gmode = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = b43_ieee80211_antenna_sanitize(dev,antenna_nr);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_dev0; _aux++) {
          free(dev[_aux].dev);
          }
          free(dev);
        
        break;
    }
    // big-arr
    case 1:
    {
          int antenna_nr = 255;
          int _len_dev0 = 65025;
          struct b43_wldev * dev = (struct b43_wldev *) malloc(_len_dev0*sizeof(struct b43_wldev));
          for(int _i0 = 0; _i0 < _len_dev0; _i0++) {
              int _len_dev__i0__dev0 = 1;
          dev[_i0].dev = (struct TYPE_6__ *) malloc(_len_dev__i0__dev0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_dev__i0__dev0; _j0++) {
              int _len_dev__i0__dev_bus_sprom0 = 1;
          dev[_i0].dev->bus_sprom = (struct TYPE_5__ *) malloc(_len_dev__i0__dev_bus_sprom0*sizeof(struct TYPE_5__));
          for(int _j0 = 0; _j0 < _len_dev__i0__dev_bus_sprom0; _j0++) {
            dev[_i0].dev->bus_sprom->ant_available_bg = ((-2 * (next_i()%2)) + 1) * next_i();
        dev[_i0].dev->bus_sprom->ant_available_a = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
        dev[_i0].phy.gmode = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = b43_ieee80211_antenna_sanitize(dev,antenna_nr);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_dev0; _aux++) {
          free(dev[_aux].dev);
          }
          free(dev);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int antenna_nr = 10;
          int _len_dev0 = 100;
          struct b43_wldev * dev = (struct b43_wldev *) malloc(_len_dev0*sizeof(struct b43_wldev));
          for(int _i0 = 0; _i0 < _len_dev0; _i0++) {
              int _len_dev__i0__dev0 = 1;
          dev[_i0].dev = (struct TYPE_6__ *) malloc(_len_dev__i0__dev0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_dev__i0__dev0; _j0++) {
              int _len_dev__i0__dev_bus_sprom0 = 1;
          dev[_i0].dev->bus_sprom = (struct TYPE_5__ *) malloc(_len_dev__i0__dev_bus_sprom0*sizeof(struct TYPE_5__));
          for(int _j0 = 0; _j0 < _len_dev__i0__dev_bus_sprom0; _j0++) {
            dev[_i0].dev->bus_sprom->ant_available_bg = ((-2 * (next_i()%2)) + 1) * next_i();
        dev[_i0].dev->bus_sprom->ant_available_a = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
        dev[_i0].phy.gmode = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = b43_ieee80211_antenna_sanitize(dev,antenna_nr);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_dev0; _aux++) {
          free(dev[_aux].dev);
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
