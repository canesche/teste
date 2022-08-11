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
struct net_device {int min_mtu; int needs_free_netdev; int flags; int /*<<< orphan*/ * netdev_ops; int /*<<< orphan*/  tx_queue_len; int /*<<< orphan*/  type; scalar_t__ addr_len; int /*<<< orphan*/  hard_header_len; int /*<<< orphan*/  priv_destructor; int /*<<< orphan*/  max_mtu; int /*<<< orphan*/  mtu; } ;

/* Variables and functions */
 int /*<<< orphan*/  ARPHRD_SLIP ; 
 int IFF_NOARP ; 
 int IFF_POINTOPOINT ; 
 int /*<<< orphan*/  NETIUCV_HDRLEN ; 
 int /*<<< orphan*/  NETIUCV_MTU_DEFAULT ; 
 int /*<<< orphan*/  NETIUCV_MTU_MAX ; 
 int /*<<< orphan*/  NETIUCV_QUEUELEN_DEFAULT ; 
 int /*<<< orphan*/  netiucv_free_netdevice ; 
 int /*<<< orphan*/  netiucv_netdev_ops ; 

__attribute__((used)) static void netiucv_setup_netdevice(struct net_device *dev)
{
	dev->mtu	         = NETIUCV_MTU_DEFAULT;
	dev->min_mtu		 = 576;
	dev->max_mtu		 = NETIUCV_MTU_MAX;
	dev->needs_free_netdev   = true;
	dev->priv_destructor     = netiucv_free_netdevice;
	dev->hard_header_len     = NETIUCV_HDRLEN;
	dev->addr_len            = 0;
	dev->type                = ARPHRD_SLIP;
	dev->tx_queue_len        = NETIUCV_QUEUELEN_DEFAULT;
	dev->flags	         = IFF_POINTOPOINT | IFF_NOARP;
	dev->netdev_ops		 = &netiucv_netdev_ops;
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
            dev[_i0].min_mtu = ((-2 * (next_i()%2)) + 1) * next_i();
        dev[_i0].needs_free_netdev = ((-2 * (next_i()%2)) + 1) * next_i();
        dev[_i0].flags = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_dev__i0__netdev_ops0 = 1;
          dev[_i0].netdev_ops = (int *) malloc(_len_dev__i0__netdev_ops0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_dev__i0__netdev_ops0; _j0++) {
            dev[_i0].netdev_ops[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        dev[_i0].tx_queue_len = ((-2 * (next_i()%2)) + 1) * next_i();
        dev[_i0].type = ((-2 * (next_i()%2)) + 1) * next_i();
        dev[_i0].addr_len = ((-2 * (next_i()%2)) + 1) * next_i();
        dev[_i0].hard_header_len = ((-2 * (next_i()%2)) + 1) * next_i();
        dev[_i0].priv_destructor = ((-2 * (next_i()%2)) + 1) * next_i();
        dev[_i0].max_mtu = ((-2 * (next_i()%2)) + 1) * next_i();
        dev[_i0].mtu = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          netiucv_setup_netdevice(dev);
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
            dev[_i0].min_mtu = ((-2 * (next_i()%2)) + 1) * next_i();
        dev[_i0].needs_free_netdev = ((-2 * (next_i()%2)) + 1) * next_i();
        dev[_i0].flags = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_dev__i0__netdev_ops0 = 1;
          dev[_i0].netdev_ops = (int *) malloc(_len_dev__i0__netdev_ops0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_dev__i0__netdev_ops0; _j0++) {
            dev[_i0].netdev_ops[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        dev[_i0].tx_queue_len = ((-2 * (next_i()%2)) + 1) * next_i();
        dev[_i0].type = ((-2 * (next_i()%2)) + 1) * next_i();
        dev[_i0].addr_len = ((-2 * (next_i()%2)) + 1) * next_i();
        dev[_i0].hard_header_len = ((-2 * (next_i()%2)) + 1) * next_i();
        dev[_i0].priv_destructor = ((-2 * (next_i()%2)) + 1) * next_i();
        dev[_i0].max_mtu = ((-2 * (next_i()%2)) + 1) * next_i();
        dev[_i0].mtu = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          netiucv_setup_netdevice(dev);
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
            dev[_i0].min_mtu = ((-2 * (next_i()%2)) + 1) * next_i();
        dev[_i0].needs_free_netdev = ((-2 * (next_i()%2)) + 1) * next_i();
        dev[_i0].flags = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_dev__i0__netdev_ops0 = 1;
          dev[_i0].netdev_ops = (int *) malloc(_len_dev__i0__netdev_ops0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_dev__i0__netdev_ops0; _j0++) {
            dev[_i0].netdev_ops[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        dev[_i0].tx_queue_len = ((-2 * (next_i()%2)) + 1) * next_i();
        dev[_i0].type = ((-2 * (next_i()%2)) + 1) * next_i();
        dev[_i0].addr_len = ((-2 * (next_i()%2)) + 1) * next_i();
        dev[_i0].hard_header_len = ((-2 * (next_i()%2)) + 1) * next_i();
        dev[_i0].priv_destructor = ((-2 * (next_i()%2)) + 1) * next_i();
        dev[_i0].max_mtu = ((-2 * (next_i()%2)) + 1) * next_i();
        dev[_i0].mtu = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          netiucv_setup_netdevice(dev);
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
