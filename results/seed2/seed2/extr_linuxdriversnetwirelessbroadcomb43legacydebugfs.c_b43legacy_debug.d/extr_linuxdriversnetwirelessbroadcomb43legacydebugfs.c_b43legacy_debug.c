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
struct b43legacy_wldev {TYPE_1__* dfsentry; } ;
typedef  enum b43legacy_dyndbg { ____Placeholder_b43legacy_dyndbg } b43legacy_dyndbg ;
struct TYPE_2__ {scalar_t__* dyn_debug; } ;

/* Variables and functions */

int b43legacy_debug(struct b43legacy_wldev *dev, enum b43legacy_dyndbg feature)
{
	return !!(dev->dfsentry && dev->dfsentry->dyn_debug[feature]);
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
          enum b43legacy_dyndbg feature = 0;
          int _len_dev0 = 1;
          struct b43legacy_wldev * dev = (struct b43legacy_wldev *) malloc(_len_dev0*sizeof(struct b43legacy_wldev));
          for(int _i0 = 0; _i0 < _len_dev0; _i0++) {
              int _len_dev__i0__dfsentry0 = 1;
          dev[_i0].dfsentry = (struct TYPE_2__ *) malloc(_len_dev__i0__dfsentry0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_dev__i0__dfsentry0; _j0++) {
              int _len_dev__i0__dfsentry_dyn_debug0 = 1;
          dev[_i0].dfsentry->dyn_debug = (long *) malloc(_len_dev__i0__dfsentry_dyn_debug0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_dev__i0__dfsentry_dyn_debug0; _j0++) {
            dev[_i0].dfsentry->dyn_debug[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int benchRet = b43legacy_debug(dev,feature);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_dev0; _aux++) {
          free(dev[_aux].dfsentry);
          }
          free(dev);
        
        break;
    }
    // big-arr
    case 1:
    {
          enum b43legacy_dyndbg feature = 0;
          int _len_dev0 = 65025;
          struct b43legacy_wldev * dev = (struct b43legacy_wldev *) malloc(_len_dev0*sizeof(struct b43legacy_wldev));
          for(int _i0 = 0; _i0 < _len_dev0; _i0++) {
              int _len_dev__i0__dfsentry0 = 1;
          dev[_i0].dfsentry = (struct TYPE_2__ *) malloc(_len_dev__i0__dfsentry0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_dev__i0__dfsentry0; _j0++) {
              int _len_dev__i0__dfsentry_dyn_debug0 = 1;
          dev[_i0].dfsentry->dyn_debug = (long *) malloc(_len_dev__i0__dfsentry_dyn_debug0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_dev__i0__dfsentry_dyn_debug0; _j0++) {
            dev[_i0].dfsentry->dyn_debug[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int benchRet = b43legacy_debug(dev,feature);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_dev0; _aux++) {
          free(dev[_aux].dfsentry);
          }
          free(dev);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          enum b43legacy_dyndbg feature = 0;
          int _len_dev0 = 100;
          struct b43legacy_wldev * dev = (struct b43legacy_wldev *) malloc(_len_dev0*sizeof(struct b43legacy_wldev));
          for(int _i0 = 0; _i0 < _len_dev0; _i0++) {
              int _len_dev__i0__dfsentry0 = 1;
          dev[_i0].dfsentry = (struct TYPE_2__ *) malloc(_len_dev__i0__dfsentry0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_dev__i0__dfsentry0; _j0++) {
              int _len_dev__i0__dfsentry_dyn_debug0 = 1;
          dev[_i0].dfsentry->dyn_debug = (long *) malloc(_len_dev__i0__dfsentry_dyn_debug0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_dev__i0__dfsentry_dyn_debug0; _j0++) {
            dev[_i0].dfsentry->dyn_debug[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int benchRet = b43legacy_debug(dev,feature);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_dev0; _aux++) {
          free(dev[_aux].dfsentry);
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
