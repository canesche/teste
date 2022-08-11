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
struct net_device {int tx_queue_len; int /*<<< orphan*/  max_mtu; int /*<<< orphan*/  min_mtu; int /*<<< orphan*/  priv_flags; int /*<<< orphan*/  watchdog_timeo; int /*<<< orphan*/ * netdev_ops; } ;

/* Variables and functions */
 int /*<<< orphan*/  IFF_TX_SKB_SHARING ; 
 int /*<<< orphan*/  QCAFRM_MAX_MTU ; 
 int /*<<< orphan*/  QCAFRM_MIN_MTU ; 
 int /*<<< orphan*/  QCAUART_TX_TIMEOUT ; 
 int /*<<< orphan*/  qcauart_netdev_ops ; 

__attribute__((used)) static void qcauart_netdev_setup(struct net_device *dev)
{
	dev->netdev_ops = &qcauart_netdev_ops;
	dev->watchdog_timeo = QCAUART_TX_TIMEOUT;
	dev->priv_flags &= ~IFF_TX_SKB_SHARING;
	dev->tx_queue_len = 100;

	/* MTU range: 46 - 1500 */
	dev->min_mtu = QCAFRM_MIN_MTU;
	dev->max_mtu = QCAFRM_MAX_MTU;
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
          struct net_device * dev = (struct net_device *) malloc(_len_dev0*sizeof(struct net_device));
          for(int _i0 = 0; _i0 < _len_dev0; _i0++) {
            dev[_i0].tx_queue_len = ((-2 * (next_i()%2)) + 1) * next_i();
        dev[_i0].max_mtu = ((-2 * (next_i()%2)) + 1) * next_i();
        dev[_i0].min_mtu = ((-2 * (next_i()%2)) + 1) * next_i();
        dev[_i0].priv_flags = ((-2 * (next_i()%2)) + 1) * next_i();
        dev[_i0].watchdog_timeo = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_dev__i0__netdev_ops0 = 1;
          dev[_i0].netdev_ops = (int *) malloc(_len_dev__i0__netdev_ops0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_dev__i0__netdev_ops0; _j0++) {
            dev[_i0].netdev_ops[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          qcauart_netdev_setup(dev);
          for(int _aux = 0; _aux < _len_dev0; _aux++) {
          free(dev[_aux].netdev_ops);
          }
          free(dev);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_dev0 = 65025;
          struct net_device * dev = (struct net_device *) malloc(_len_dev0*sizeof(struct net_device));
          for(int _i0 = 0; _i0 < _len_dev0; _i0++) {
            dev[_i0].tx_queue_len = ((-2 * (next_i()%2)) + 1) * next_i();
        dev[_i0].max_mtu = ((-2 * (next_i()%2)) + 1) * next_i();
        dev[_i0].min_mtu = ((-2 * (next_i()%2)) + 1) * next_i();
        dev[_i0].priv_flags = ((-2 * (next_i()%2)) + 1) * next_i();
        dev[_i0].watchdog_timeo = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_dev__i0__netdev_ops0 = 1;
          dev[_i0].netdev_ops = (int *) malloc(_len_dev__i0__netdev_ops0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_dev__i0__netdev_ops0; _j0++) {
            dev[_i0].netdev_ops[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          qcauart_netdev_setup(dev);
          for(int _aux = 0; _aux < _len_dev0; _aux++) {
          free(dev[_aux].netdev_ops);
          }
          free(dev);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_dev0 = 100;
          struct net_device * dev = (struct net_device *) malloc(_len_dev0*sizeof(struct net_device));
          for(int _i0 = 0; _i0 < _len_dev0; _i0++) {
            dev[_i0].tx_queue_len = ((-2 * (next_i()%2)) + 1) * next_i();
        dev[_i0].max_mtu = ((-2 * (next_i()%2)) + 1) * next_i();
        dev[_i0].min_mtu = ((-2 * (next_i()%2)) + 1) * next_i();
        dev[_i0].priv_flags = ((-2 * (next_i()%2)) + 1) * next_i();
        dev[_i0].watchdog_timeo = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_dev__i0__netdev_ops0 = 1;
          dev[_i0].netdev_ops = (int *) malloc(_len_dev__i0__netdev_ops0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_dev__i0__netdev_ops0; _j0++) {
            dev[_i0].netdev_ops[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          qcauart_netdev_setup(dev);
          for(int _aux = 0; _aux < _len_dev0; _aux++) {
          free(dev[_aux].netdev_ops);
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
