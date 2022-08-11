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
typedef  struct TYPE_5__   TYPE_3__ ;
typedef  struct TYPE_4__   TYPE_1__ ;

/* Type definitions */
struct TYPE_4__ {int /*<<< orphan*/  netdev; int /*<<< orphan*/  isdn_channel; int /*<<< orphan*/  isdn_device; int /*<<< orphan*/  flags; } ;
typedef  TYPE_1__ isdn_net_local ;
struct TYPE_5__ {int /*<<< orphan*/ * st_netdev; int /*<<< orphan*/ * rx_netdev; int /*<<< orphan*/ * chanmap; int /*<<< orphan*/ * drvmap; } ;

/* Variables and functions */
 int /*<<< orphan*/  ISDN_NET_CONNECTED ; 
 TYPE_3__* dev ; 

__attribute__((used)) static void
isdn_net_bind_channel(isdn_net_local *lp, int idx)
{
	lp->flags |= ISDN_NET_CONNECTED;
	lp->isdn_device = dev->drvmap[idx];
	lp->isdn_channel = dev->chanmap[idx];
	dev->rx_netdev[idx] = lp->netdev;
	dev->st_netdev[idx] = lp->netdev;
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
          int idx = 100;
          int _len_lp0 = 1;
          struct TYPE_4__ * lp = (struct TYPE_4__ *) malloc(_len_lp0*sizeof(struct TYPE_4__));
          for(int _i0 = 0; _i0 < _len_lp0; _i0++) {
            lp[_i0].netdev = ((-2 * (next_i()%2)) + 1) * next_i();
        lp[_i0].isdn_channel = ((-2 * (next_i()%2)) + 1) * next_i();
        lp[_i0].isdn_device = ((-2 * (next_i()%2)) + 1) * next_i();
        lp[_i0].flags = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          isdn_net_bind_channel(lp,idx);
          free(lp);
        
        break;
    }
    // big-arr
    case 1:
    {
          int idx = 255;
          int _len_lp0 = 65025;
          struct TYPE_4__ * lp = (struct TYPE_4__ *) malloc(_len_lp0*sizeof(struct TYPE_4__));
          for(int _i0 = 0; _i0 < _len_lp0; _i0++) {
            lp[_i0].netdev = ((-2 * (next_i()%2)) + 1) * next_i();
        lp[_i0].isdn_channel = ((-2 * (next_i()%2)) + 1) * next_i();
        lp[_i0].isdn_device = ((-2 * (next_i()%2)) + 1) * next_i();
        lp[_i0].flags = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          isdn_net_bind_channel(lp,idx);
          free(lp);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int idx = 10;
          int _len_lp0 = 100;
          struct TYPE_4__ * lp = (struct TYPE_4__ *) malloc(_len_lp0*sizeof(struct TYPE_4__));
          for(int _i0 = 0; _i0 < _len_lp0; _i0++) {
            lp[_i0].netdev = ((-2 * (next_i()%2)) + 1) * next_i();
        lp[_i0].isdn_channel = ((-2 * (next_i()%2)) + 1) * next_i();
        lp[_i0].isdn_device = ((-2 * (next_i()%2)) + 1) * next_i();
        lp[_i0].flags = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          isdn_net_bind_channel(lp,idx);
          free(lp);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
