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
struct net_device {int /*<<< orphan*/  flags; int /*<<< orphan*/  type; int /*<<< orphan*/  addr_len; scalar_t__ hard_header_len; int /*<<< orphan*/ * header_ops; int /*<<< orphan*/ * netdev_ops; scalar_t__ mtu; } ;

/* Variables and functions */
 int /*<<< orphan*/  ARPHRD_ROSE ; 
 scalar_t__ AX25_BPQ_HEADER_LEN ; 
 scalar_t__ AX25_MAX_HEADER_LEN ; 
 int /*<<< orphan*/  IFF_NOARP ; 
 int /*<<< orphan*/  ROSE_ADDR_LEN ; 
 scalar_t__ ROSE_MAX_PACKET_SIZE ; 
 scalar_t__ ROSE_MIN_LEN ; 
 int /*<<< orphan*/  rose_header_ops ; 
 int /*<<< orphan*/  rose_netdev_ops ; 

void rose_setup(struct net_device *dev)
{
	dev->mtu		= ROSE_MAX_PACKET_SIZE - 2;
	dev->netdev_ops		= &rose_netdev_ops;

	dev->header_ops		= &rose_header_ops;
	dev->hard_header_len	= AX25_BPQ_HEADER_LEN + AX25_MAX_HEADER_LEN + ROSE_MIN_LEN;
	dev->addr_len		= ROSE_ADDR_LEN;
	dev->type		= ARPHRD_ROSE;

	/* New-style flags. */
	dev->flags		= IFF_NOARP;
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
            dev[_i0].flags = ((-2 * (next_i()%2)) + 1) * next_i();
        dev[_i0].type = ((-2 * (next_i()%2)) + 1) * next_i();
        dev[_i0].addr_len = ((-2 * (next_i()%2)) + 1) * next_i();
        dev[_i0].hard_header_len = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_dev__i0__header_ops0 = 1;
          dev[_i0].header_ops = (int *) malloc(_len_dev__i0__header_ops0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_dev__i0__header_ops0; _j0++) {
            dev[_i0].header_ops[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_dev__i0__netdev_ops0 = 1;
          dev[_i0].netdev_ops = (int *) malloc(_len_dev__i0__netdev_ops0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_dev__i0__netdev_ops0; _j0++) {
            dev[_i0].netdev_ops[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        dev[_i0].mtu = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          rose_setup(dev);
          for(int _aux = 0; _aux < _len_dev0; _aux++) {
          free(dev[_aux].header_ops);
          }
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
            dev[_i0].flags = ((-2 * (next_i()%2)) + 1) * next_i();
        dev[_i0].type = ((-2 * (next_i()%2)) + 1) * next_i();
        dev[_i0].addr_len = ((-2 * (next_i()%2)) + 1) * next_i();
        dev[_i0].hard_header_len = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_dev__i0__header_ops0 = 1;
          dev[_i0].header_ops = (int *) malloc(_len_dev__i0__header_ops0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_dev__i0__header_ops0; _j0++) {
            dev[_i0].header_ops[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_dev__i0__netdev_ops0 = 1;
          dev[_i0].netdev_ops = (int *) malloc(_len_dev__i0__netdev_ops0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_dev__i0__netdev_ops0; _j0++) {
            dev[_i0].netdev_ops[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        dev[_i0].mtu = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          rose_setup(dev);
          for(int _aux = 0; _aux < _len_dev0; _aux++) {
          free(dev[_aux].header_ops);
          }
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
            dev[_i0].flags = ((-2 * (next_i()%2)) + 1) * next_i();
        dev[_i0].type = ((-2 * (next_i()%2)) + 1) * next_i();
        dev[_i0].addr_len = ((-2 * (next_i()%2)) + 1) * next_i();
        dev[_i0].hard_header_len = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_dev__i0__header_ops0 = 1;
          dev[_i0].header_ops = (int *) malloc(_len_dev__i0__header_ops0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_dev__i0__header_ops0; _j0++) {
            dev[_i0].header_ops[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_dev__i0__netdev_ops0 = 1;
          dev[_i0].netdev_ops = (int *) malloc(_len_dev__i0__netdev_ops0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_dev__i0__netdev_ops0; _j0++) {
            dev[_i0].netdev_ops[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        dev[_i0].mtu = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          rose_setup(dev);
          for(int _aux = 0; _aux < _len_dev0; _aux++) {
          free(dev[_aux].header_ops);
          }
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
