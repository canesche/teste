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
struct net_device {int watchdog_timeo; int flags; int /*<<< orphan*/ * ethtool_ops; int /*<<< orphan*/  tx_queue_len; int /*<<< orphan*/  type; int /*<<< orphan*/  hard_header_len; int /*<<< orphan*/  addr_len; int /*<<< orphan*/  features; int /*<<< orphan*/ * netdev_ops; int /*<<< orphan*/ * header_ops; } ;

/* Variables and functions */
 int /*<<< orphan*/  ARPHRD_IEEE1394 ; 
 int /*<<< orphan*/  FWNET_ALEN ; 
 int /*<<< orphan*/  FWNET_HLEN ; 
 int /*<<< orphan*/  FWNET_TX_QUEUE_LEN ; 
 int HZ ; 
 int IFF_BROADCAST ; 
 int IFF_MULTICAST ; 
 int /*<<< orphan*/  NETIF_F_HIGHDMA ; 
 int /*<<< orphan*/  fwnet_ethtool_ops ; 
 int /*<<< orphan*/  fwnet_header_ops ; 
 int /*<<< orphan*/  fwnet_netdev_ops ; 

__attribute__((used)) static void fwnet_init_dev(struct net_device *net)
{
	net->header_ops		= &fwnet_header_ops;
	net->netdev_ops		= &fwnet_netdev_ops;
	net->watchdog_timeo	= 2 * HZ;
	net->flags		= IFF_BROADCAST | IFF_MULTICAST;
	net->features		= NETIF_F_HIGHDMA;
	net->addr_len		= FWNET_ALEN;
	net->hard_header_len	= FWNET_HLEN;
	net->type		= ARPHRD_IEEE1394;
	net->tx_queue_len	= FWNET_TX_QUEUE_LEN;
	net->ethtool_ops	= &fwnet_ethtool_ops;
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
          struct net_device * net = (struct net_device *) malloc(_len_net0*sizeof(struct net_device));
          for(int _i0 = 0; _i0 < _len_net0; _i0++) {
            net[_i0].watchdog_timeo = ((-2 * (next_i()%2)) + 1) * next_i();
        net[_i0].flags = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_net__i0__ethtool_ops0 = 1;
          net[_i0].ethtool_ops = (int *) malloc(_len_net__i0__ethtool_ops0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_net__i0__ethtool_ops0; _j0++) {
            net[_i0].ethtool_ops[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        net[_i0].tx_queue_len = ((-2 * (next_i()%2)) + 1) * next_i();
        net[_i0].type = ((-2 * (next_i()%2)) + 1) * next_i();
        net[_i0].hard_header_len = ((-2 * (next_i()%2)) + 1) * next_i();
        net[_i0].addr_len = ((-2 * (next_i()%2)) + 1) * next_i();
        net[_i0].features = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_net__i0__netdev_ops0 = 1;
          net[_i0].netdev_ops = (int *) malloc(_len_net__i0__netdev_ops0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_net__i0__netdev_ops0; _j0++) {
            net[_i0].netdev_ops[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_net__i0__header_ops0 = 1;
          net[_i0].header_ops = (int *) malloc(_len_net__i0__header_ops0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_net__i0__header_ops0; _j0++) {
            net[_i0].header_ops[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          fwnet_init_dev(net);
          for(int _aux = 0; _aux < _len_net0; _aux++) {
          free(net[_aux].ethtool_ops);
          }
          for(int _aux = 0; _aux < _len_net0; _aux++) {
          free(net[_aux].netdev_ops);
          }
          for(int _aux = 0; _aux < _len_net0; _aux++) {
          free(net[_aux].header_ops);
          }
          free(net);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_net0 = 65025;
          struct net_device * net = (struct net_device *) malloc(_len_net0*sizeof(struct net_device));
          for(int _i0 = 0; _i0 < _len_net0; _i0++) {
            net[_i0].watchdog_timeo = ((-2 * (next_i()%2)) + 1) * next_i();
        net[_i0].flags = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_net__i0__ethtool_ops0 = 1;
          net[_i0].ethtool_ops = (int *) malloc(_len_net__i0__ethtool_ops0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_net__i0__ethtool_ops0; _j0++) {
            net[_i0].ethtool_ops[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        net[_i0].tx_queue_len = ((-2 * (next_i()%2)) + 1) * next_i();
        net[_i0].type = ((-2 * (next_i()%2)) + 1) * next_i();
        net[_i0].hard_header_len = ((-2 * (next_i()%2)) + 1) * next_i();
        net[_i0].addr_len = ((-2 * (next_i()%2)) + 1) * next_i();
        net[_i0].features = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_net__i0__netdev_ops0 = 1;
          net[_i0].netdev_ops = (int *) malloc(_len_net__i0__netdev_ops0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_net__i0__netdev_ops0; _j0++) {
            net[_i0].netdev_ops[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_net__i0__header_ops0 = 1;
          net[_i0].header_ops = (int *) malloc(_len_net__i0__header_ops0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_net__i0__header_ops0; _j0++) {
            net[_i0].header_ops[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          fwnet_init_dev(net);
          for(int _aux = 0; _aux < _len_net0; _aux++) {
          free(net[_aux].ethtool_ops);
          }
          for(int _aux = 0; _aux < _len_net0; _aux++) {
          free(net[_aux].netdev_ops);
          }
          for(int _aux = 0; _aux < _len_net0; _aux++) {
          free(net[_aux].header_ops);
          }
          free(net);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_net0 = 100;
          struct net_device * net = (struct net_device *) malloc(_len_net0*sizeof(struct net_device));
          for(int _i0 = 0; _i0 < _len_net0; _i0++) {
            net[_i0].watchdog_timeo = ((-2 * (next_i()%2)) + 1) * next_i();
        net[_i0].flags = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_net__i0__ethtool_ops0 = 1;
          net[_i0].ethtool_ops = (int *) malloc(_len_net__i0__ethtool_ops0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_net__i0__ethtool_ops0; _j0++) {
            net[_i0].ethtool_ops[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        net[_i0].tx_queue_len = ((-2 * (next_i()%2)) + 1) * next_i();
        net[_i0].type = ((-2 * (next_i()%2)) + 1) * next_i();
        net[_i0].hard_header_len = ((-2 * (next_i()%2)) + 1) * next_i();
        net[_i0].addr_len = ((-2 * (next_i()%2)) + 1) * next_i();
        net[_i0].features = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_net__i0__netdev_ops0 = 1;
          net[_i0].netdev_ops = (int *) malloc(_len_net__i0__netdev_ops0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_net__i0__netdev_ops0; _j0++) {
            net[_i0].netdev_ops[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_net__i0__header_ops0 = 1;
          net[_i0].header_ops = (int *) malloc(_len_net__i0__header_ops0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_net__i0__header_ops0; _j0++) {
            net[_i0].header_ops[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          fwnet_init_dev(net);
          for(int _aux = 0; _aux < _len_net0; _aux++) {
          free(net[_aux].ethtool_ops);
          }
          for(int _aux = 0; _aux < _len_net0; _aux++) {
          free(net[_aux].netdev_ops);
          }
          for(int _aux = 0; _aux < _len_net0; _aux++) {
          free(net[_aux].header_ops);
          }
          free(net);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
