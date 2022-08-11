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
struct TYPE_6__ {TYPE_2__* net_dev; } ;
struct i2400m {TYPE_3__ wimax_dev; } ;
struct device {int dummy; } ;
struct TYPE_4__ {struct device* parent; } ;
struct TYPE_5__ {TYPE_1__ dev; } ;

/* Variables and functions */

__attribute__((used)) static inline
struct device *i2400m_dev(struct i2400m *i2400m)
{
	return i2400m->wimax_dev.net_dev->dev.parent;
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
          int _len_i2400m0 = 1;
          struct i2400m * i2400m = (struct i2400m *) malloc(_len_i2400m0*sizeof(struct i2400m));
          for(int _i0 = 0; _i0 < _len_i2400m0; _i0++) {
              int _len_i2400m__i0__wimax_dev_net_dev0 = 1;
          i2400m[_i0].wimax_dev.net_dev = (struct TYPE_5__ *) malloc(_len_i2400m__i0__wimax_dev_net_dev0*sizeof(struct TYPE_5__));
          for(int _j0 = 0; _j0 < _len_i2400m__i0__wimax_dev_net_dev0; _j0++) {
              int _len_i2400m__i0__wimax_dev_net_dev_dev_parent0 = 1;
          i2400m[_i0].wimax_dev.net_dev->dev.parent = (struct device *) malloc(_len_i2400m__i0__wimax_dev_net_dev_dev_parent0*sizeof(struct device));
          for(int _j0 = 0; _j0 < _len_i2400m__i0__wimax_dev_net_dev_dev_parent0; _j0++) {
            i2400m[_i0].wimax_dev.net_dev->dev.parent->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          struct device * benchRet = i2400m_dev(i2400m);
          printf("%d\n", (*benchRet).dummy);
          free(i2400m);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_i2400m0 = 65025;
          struct i2400m * i2400m = (struct i2400m *) malloc(_len_i2400m0*sizeof(struct i2400m));
          for(int _i0 = 0; _i0 < _len_i2400m0; _i0++) {
              int _len_i2400m__i0__wimax_dev_net_dev0 = 1;
          i2400m[_i0].wimax_dev.net_dev = (struct TYPE_5__ *) malloc(_len_i2400m__i0__wimax_dev_net_dev0*sizeof(struct TYPE_5__));
          for(int _j0 = 0; _j0 < _len_i2400m__i0__wimax_dev_net_dev0; _j0++) {
              int _len_i2400m__i0__wimax_dev_net_dev_dev_parent0 = 1;
          i2400m[_i0].wimax_dev.net_dev->dev.parent = (struct device *) malloc(_len_i2400m__i0__wimax_dev_net_dev_dev_parent0*sizeof(struct device));
          for(int _j0 = 0; _j0 < _len_i2400m__i0__wimax_dev_net_dev_dev_parent0; _j0++) {
            i2400m[_i0].wimax_dev.net_dev->dev.parent->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          struct device * benchRet = i2400m_dev(i2400m);
          printf("%d\n", (*benchRet).dummy);
          free(i2400m);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_i2400m0 = 100;
          struct i2400m * i2400m = (struct i2400m *) malloc(_len_i2400m0*sizeof(struct i2400m));
          for(int _i0 = 0; _i0 < _len_i2400m0; _i0++) {
              int _len_i2400m__i0__wimax_dev_net_dev0 = 1;
          i2400m[_i0].wimax_dev.net_dev = (struct TYPE_5__ *) malloc(_len_i2400m__i0__wimax_dev_net_dev0*sizeof(struct TYPE_5__));
          for(int _j0 = 0; _j0 < _len_i2400m__i0__wimax_dev_net_dev0; _j0++) {
              int _len_i2400m__i0__wimax_dev_net_dev_dev_parent0 = 1;
          i2400m[_i0].wimax_dev.net_dev->dev.parent = (struct device *) malloc(_len_i2400m__i0__wimax_dev_net_dev_dev_parent0*sizeof(struct device));
          for(int _j0 = 0; _j0 < _len_i2400m__i0__wimax_dev_net_dev_dev_parent0; _j0++) {
            i2400m[_i0].wimax_dev.net_dev->dev.parent->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          struct device * benchRet = i2400m_dev(i2400m);
          printf("%d\n", (*benchRet).dummy);
          free(i2400m);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
