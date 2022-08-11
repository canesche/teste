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
struct TYPE_2__ {int requested_fc; int fc; } ;
struct port_info {TYPE_1__ link_config; } ;
struct net_device {size_t if_port; struct adapter* ml_priv; } ;
struct ethtool_pauseparam {int autoneg; int rx_pause; int tx_pause; } ;
struct adapter {struct port_info* port; } ;

/* Variables and functions */
 int PAUSE_AUTONEG ; 
 int PAUSE_RX ; 
 int PAUSE_TX ; 

__attribute__((used)) static void get_pauseparam(struct net_device *dev,
			   struct ethtool_pauseparam *epause)
{
	struct adapter *adapter = dev->ml_priv;
	struct port_info *p = &adapter->port[dev->if_port];

	epause->autoneg = (p->link_config.requested_fc & PAUSE_AUTONEG) != 0;
	epause->rx_pause = (p->link_config.fc & PAUSE_RX) != 0;
	epause->tx_pause = (p->link_config.fc & PAUSE_TX) != 0;
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
            dev[_i0].if_port = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_dev__i0__ml_priv0 = 1;
          dev[_i0].ml_priv = (struct adapter *) malloc(_len_dev__i0__ml_priv0*sizeof(struct adapter));
          for(int _j0 = 0; _j0 < _len_dev__i0__ml_priv0; _j0++) {
              int _len_dev__i0__ml_priv_port0 = 1;
          dev[_i0].ml_priv->port = (struct port_info *) malloc(_len_dev__i0__ml_priv_port0*sizeof(struct port_info));
          for(int _j0 = 0; _j0 < _len_dev__i0__ml_priv_port0; _j0++) {
            dev[_i0].ml_priv->port->link_config.requested_fc = ((-2 * (next_i()%2)) + 1) * next_i();
        dev[_i0].ml_priv->port->link_config.fc = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int _len_epause0 = 1;
          struct ethtool_pauseparam * epause = (struct ethtool_pauseparam *) malloc(_len_epause0*sizeof(struct ethtool_pauseparam));
          for(int _i0 = 0; _i0 < _len_epause0; _i0++) {
            epause[_i0].autoneg = ((-2 * (next_i()%2)) + 1) * next_i();
        epause[_i0].rx_pause = ((-2 * (next_i()%2)) + 1) * next_i();
        epause[_i0].tx_pause = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          get_pauseparam(dev,epause);
          for(int _aux = 0; _aux < _len_dev0; _aux++) {
          free(dev[_aux].ml_priv);
          }
          free(dev);
          free(epause);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_dev0 = 65025;
          struct net_device * dev = (struct net_device *) malloc(_len_dev0*sizeof(struct net_device));
          for(int _i0 = 0; _i0 < _len_dev0; _i0++) {
            dev[_i0].if_port = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_dev__i0__ml_priv0 = 1;
          dev[_i0].ml_priv = (struct adapter *) malloc(_len_dev__i0__ml_priv0*sizeof(struct adapter));
          for(int _j0 = 0; _j0 < _len_dev__i0__ml_priv0; _j0++) {
              int _len_dev__i0__ml_priv_port0 = 1;
          dev[_i0].ml_priv->port = (struct port_info *) malloc(_len_dev__i0__ml_priv_port0*sizeof(struct port_info));
          for(int _j0 = 0; _j0 < _len_dev__i0__ml_priv_port0; _j0++) {
            dev[_i0].ml_priv->port->link_config.requested_fc = ((-2 * (next_i()%2)) + 1) * next_i();
        dev[_i0].ml_priv->port->link_config.fc = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int _len_epause0 = 65025;
          struct ethtool_pauseparam * epause = (struct ethtool_pauseparam *) malloc(_len_epause0*sizeof(struct ethtool_pauseparam));
          for(int _i0 = 0; _i0 < _len_epause0; _i0++) {
            epause[_i0].autoneg = ((-2 * (next_i()%2)) + 1) * next_i();
        epause[_i0].rx_pause = ((-2 * (next_i()%2)) + 1) * next_i();
        epause[_i0].tx_pause = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          get_pauseparam(dev,epause);
          for(int _aux = 0; _aux < _len_dev0; _aux++) {
          free(dev[_aux].ml_priv);
          }
          free(dev);
          free(epause);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_dev0 = 100;
          struct net_device * dev = (struct net_device *) malloc(_len_dev0*sizeof(struct net_device));
          for(int _i0 = 0; _i0 < _len_dev0; _i0++) {
            dev[_i0].if_port = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_dev__i0__ml_priv0 = 1;
          dev[_i0].ml_priv = (struct adapter *) malloc(_len_dev__i0__ml_priv0*sizeof(struct adapter));
          for(int _j0 = 0; _j0 < _len_dev__i0__ml_priv0; _j0++) {
              int _len_dev__i0__ml_priv_port0 = 1;
          dev[_i0].ml_priv->port = (struct port_info *) malloc(_len_dev__i0__ml_priv_port0*sizeof(struct port_info));
          for(int _j0 = 0; _j0 < _len_dev__i0__ml_priv_port0; _j0++) {
            dev[_i0].ml_priv->port->link_config.requested_fc = ((-2 * (next_i()%2)) + 1) * next_i();
        dev[_i0].ml_priv->port->link_config.fc = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int _len_epause0 = 100;
          struct ethtool_pauseparam * epause = (struct ethtool_pauseparam *) malloc(_len_epause0*sizeof(struct ethtool_pauseparam));
          for(int _i0 = 0; _i0 < _len_epause0; _i0++) {
            epause[_i0].autoneg = ((-2 * (next_i()%2)) + 1) * next_i();
        epause[_i0].rx_pause = ((-2 * (next_i()%2)) + 1) * next_i();
        epause[_i0].tx_pause = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          get_pauseparam(dev,epause);
          for(int _aux = 0; _aux < _len_dev0; _aux++) {
          free(dev[_aux].ml_priv);
          }
          free(dev);
          free(epause);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
