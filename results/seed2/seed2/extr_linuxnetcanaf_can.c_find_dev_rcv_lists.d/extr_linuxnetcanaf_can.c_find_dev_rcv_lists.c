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
struct net_device {scalar_t__ ml_priv; } ;
struct TYPE_2__ {struct can_dev_rcv_lists* can_rx_alldev_list; } ;
struct net {TYPE_1__ can; } ;
struct can_dev_rcv_lists {int dummy; } ;

/* Variables and functions */

__attribute__((used)) static struct can_dev_rcv_lists *find_dev_rcv_lists(struct net *net,
						struct net_device *dev)
{
	if (!dev)
		return net->can.can_rx_alldev_list;
	else
		return (struct can_dev_rcv_lists *)dev->ml_priv;
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
          int _len_net0 = 1;
          struct net * net = (struct net *) malloc(_len_net0*sizeof(struct net));
          for(int _i0 = 0; _i0 < _len_net0; _i0++) {
              int _len_net__i0__can_can_rx_alldev_list0 = 1;
          net[_i0].can.can_rx_alldev_list = (struct can_dev_rcv_lists *) malloc(_len_net__i0__can_can_rx_alldev_list0*sizeof(struct can_dev_rcv_lists));
          for(int _j0 = 0; _j0 < _len_net__i0__can_can_rx_alldev_list0; _j0++) {
            net[_i0].can.can_rx_alldev_list->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_dev0 = 1;
          struct net_device * dev = (struct net_device *) malloc(_len_dev0*sizeof(struct net_device));
          for(int _i0 = 0; _i0 < _len_dev0; _i0++) {
            dev[_i0].ml_priv = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          struct can_dev_rcv_lists * benchRet = find_dev_rcv_lists(net,dev);
          printf("%d\n", (*benchRet).dummy);
          free(net);
          free(dev);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_net0 = 65025;
          struct net * net = (struct net *) malloc(_len_net0*sizeof(struct net));
          for(int _i0 = 0; _i0 < _len_net0; _i0++) {
              int _len_net__i0__can_can_rx_alldev_list0 = 1;
          net[_i0].can.can_rx_alldev_list = (struct can_dev_rcv_lists *) malloc(_len_net__i0__can_can_rx_alldev_list0*sizeof(struct can_dev_rcv_lists));
          for(int _j0 = 0; _j0 < _len_net__i0__can_can_rx_alldev_list0; _j0++) {
            net[_i0].can.can_rx_alldev_list->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_dev0 = 65025;
          struct net_device * dev = (struct net_device *) malloc(_len_dev0*sizeof(struct net_device));
          for(int _i0 = 0; _i0 < _len_dev0; _i0++) {
            dev[_i0].ml_priv = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          struct can_dev_rcv_lists * benchRet = find_dev_rcv_lists(net,dev);
          printf("%d\n", (*benchRet).dummy);
          free(net);
          free(dev);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_net0 = 100;
          struct net * net = (struct net *) malloc(_len_net0*sizeof(struct net));
          for(int _i0 = 0; _i0 < _len_net0; _i0++) {
              int _len_net__i0__can_can_rx_alldev_list0 = 1;
          net[_i0].can.can_rx_alldev_list = (struct can_dev_rcv_lists *) malloc(_len_net__i0__can_can_rx_alldev_list0*sizeof(struct can_dev_rcv_lists));
          for(int _j0 = 0; _j0 < _len_net__i0__can_can_rx_alldev_list0; _j0++) {
            net[_i0].can.can_rx_alldev_list->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_dev0 = 100;
          struct net_device * dev = (struct net_device *) malloc(_len_dev0*sizeof(struct net_device));
          for(int _i0 = 0; _i0 < _len_dev0; _i0++) {
            dev[_i0].ml_priv = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          struct can_dev_rcv_lists * benchRet = find_dev_rcv_lists(net,dev);
          printf("%d\n", (*benchRet).dummy);
          free(net);
          free(dev);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
