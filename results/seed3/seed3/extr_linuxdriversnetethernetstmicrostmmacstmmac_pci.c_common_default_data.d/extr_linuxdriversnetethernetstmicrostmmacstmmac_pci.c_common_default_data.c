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
struct plat_stmmacenet_data {int clk_csr; int has_gmac; int force_sf_dma_mode; int unicast_filter_entries; int tx_queues_to_use; int rx_queues_to_use; TYPE_3__* rx_queues_cfg; TYPE_2__* tx_queues_cfg; int /*<<< orphan*/  maxmtu; int /*<<< orphan*/  multicast_filter_bins; TYPE_1__* mdio_bus_data; } ;
struct TYPE_6__ {int use_prio; int pkt_route; } ;
struct TYPE_5__ {int use_prio; } ;
struct TYPE_4__ {scalar_t__ phy_mask; int /*<<< orphan*/ * phy_reset; } ;

/* Variables and functions */
 int /*<<< orphan*/  HASH_TABLE_SIZE ; 
 int /*<<< orphan*/  JUMBO_LEN ; 

__attribute__((used)) static void common_default_data(struct plat_stmmacenet_data *plat)
{
	plat->clk_csr = 2;	/* clk_csr_i = 20-35MHz & MDC = clk_csr_i/16 */
	plat->has_gmac = 1;
	plat->force_sf_dma_mode = 1;

	plat->mdio_bus_data->phy_reset = NULL;
	plat->mdio_bus_data->phy_mask = 0;

	/* Set default value for multicast hash bins */
	plat->multicast_filter_bins = HASH_TABLE_SIZE;

	/* Set default value for unicast filter entries */
	plat->unicast_filter_entries = 1;

	/* Set the maxmtu to a default of JUMBO_LEN */
	plat->maxmtu = JUMBO_LEN;

	/* Set default number of RX and TX queues to use */
	plat->tx_queues_to_use = 1;
	plat->rx_queues_to_use = 1;

	/* Disable Priority config by default */
	plat->tx_queues_cfg[0].use_prio = false;
	plat->rx_queues_cfg[0].use_prio = false;

	/* Disable RX queues routing by default */
	plat->rx_queues_cfg[0].pkt_route = 0x0;
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
          int _len_plat0 = 1;
          struct plat_stmmacenet_data * plat = (struct plat_stmmacenet_data *) malloc(_len_plat0*sizeof(struct plat_stmmacenet_data));
          for(int _i0 = 0; _i0 < _len_plat0; _i0++) {
            plat[_i0].clk_csr = ((-2 * (next_i()%2)) + 1) * next_i();
        plat[_i0].has_gmac = ((-2 * (next_i()%2)) + 1) * next_i();
        plat[_i0].force_sf_dma_mode = ((-2 * (next_i()%2)) + 1) * next_i();
        plat[_i0].unicast_filter_entries = ((-2 * (next_i()%2)) + 1) * next_i();
        plat[_i0].tx_queues_to_use = ((-2 * (next_i()%2)) + 1) * next_i();
        plat[_i0].rx_queues_to_use = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_plat__i0__rx_queues_cfg0 = 1;
          plat[_i0].rx_queues_cfg = (struct TYPE_6__ *) malloc(_len_plat__i0__rx_queues_cfg0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_plat__i0__rx_queues_cfg0; _j0++) {
            plat[_i0].rx_queues_cfg->use_prio = ((-2 * (next_i()%2)) + 1) * next_i();
        plat[_i0].rx_queues_cfg->pkt_route = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_plat__i0__tx_queues_cfg0 = 1;
          plat[_i0].tx_queues_cfg = (struct TYPE_5__ *) malloc(_len_plat__i0__tx_queues_cfg0*sizeof(struct TYPE_5__));
          for(int _j0 = 0; _j0 < _len_plat__i0__tx_queues_cfg0; _j0++) {
            plat[_i0].tx_queues_cfg->use_prio = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        plat[_i0].maxmtu = ((-2 * (next_i()%2)) + 1) * next_i();
        plat[_i0].multicast_filter_bins = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_plat__i0__mdio_bus_data0 = 1;
          plat[_i0].mdio_bus_data = (struct TYPE_4__ *) malloc(_len_plat__i0__mdio_bus_data0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_plat__i0__mdio_bus_data0; _j0++) {
            plat[_i0].mdio_bus_data->phy_mask = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_plat__i0__mdio_bus_data_phy_reset0 = 1;
          plat[_i0].mdio_bus_data->phy_reset = (int *) malloc(_len_plat__i0__mdio_bus_data_phy_reset0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_plat__i0__mdio_bus_data_phy_reset0; _j0++) {
            plat[_i0].mdio_bus_data->phy_reset[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          common_default_data(plat);
          for(int _aux = 0; _aux < _len_plat0; _aux++) {
          free(plat[_aux].rx_queues_cfg);
          }
          for(int _aux = 0; _aux < _len_plat0; _aux++) {
          free(plat[_aux].tx_queues_cfg);
          }
          for(int _aux = 0; _aux < _len_plat0; _aux++) {
          free(plat[_aux].mdio_bus_data);
          }
          free(plat);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_plat0 = 65025;
          struct plat_stmmacenet_data * plat = (struct plat_stmmacenet_data *) malloc(_len_plat0*sizeof(struct plat_stmmacenet_data));
          for(int _i0 = 0; _i0 < _len_plat0; _i0++) {
            plat[_i0].clk_csr = ((-2 * (next_i()%2)) + 1) * next_i();
        plat[_i0].has_gmac = ((-2 * (next_i()%2)) + 1) * next_i();
        plat[_i0].force_sf_dma_mode = ((-2 * (next_i()%2)) + 1) * next_i();
        plat[_i0].unicast_filter_entries = ((-2 * (next_i()%2)) + 1) * next_i();
        plat[_i0].tx_queues_to_use = ((-2 * (next_i()%2)) + 1) * next_i();
        plat[_i0].rx_queues_to_use = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_plat__i0__rx_queues_cfg0 = 1;
          plat[_i0].rx_queues_cfg = (struct TYPE_6__ *) malloc(_len_plat__i0__rx_queues_cfg0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_plat__i0__rx_queues_cfg0; _j0++) {
            plat[_i0].rx_queues_cfg->use_prio = ((-2 * (next_i()%2)) + 1) * next_i();
        plat[_i0].rx_queues_cfg->pkt_route = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_plat__i0__tx_queues_cfg0 = 1;
          plat[_i0].tx_queues_cfg = (struct TYPE_5__ *) malloc(_len_plat__i0__tx_queues_cfg0*sizeof(struct TYPE_5__));
          for(int _j0 = 0; _j0 < _len_plat__i0__tx_queues_cfg0; _j0++) {
            plat[_i0].tx_queues_cfg->use_prio = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        plat[_i0].maxmtu = ((-2 * (next_i()%2)) + 1) * next_i();
        plat[_i0].multicast_filter_bins = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_plat__i0__mdio_bus_data0 = 1;
          plat[_i0].mdio_bus_data = (struct TYPE_4__ *) malloc(_len_plat__i0__mdio_bus_data0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_plat__i0__mdio_bus_data0; _j0++) {
            plat[_i0].mdio_bus_data->phy_mask = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_plat__i0__mdio_bus_data_phy_reset0 = 1;
          plat[_i0].mdio_bus_data->phy_reset = (int *) malloc(_len_plat__i0__mdio_bus_data_phy_reset0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_plat__i0__mdio_bus_data_phy_reset0; _j0++) {
            plat[_i0].mdio_bus_data->phy_reset[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          common_default_data(plat);
          for(int _aux = 0; _aux < _len_plat0; _aux++) {
          free(plat[_aux].rx_queues_cfg);
          }
          for(int _aux = 0; _aux < _len_plat0; _aux++) {
          free(plat[_aux].tx_queues_cfg);
          }
          for(int _aux = 0; _aux < _len_plat0; _aux++) {
          free(plat[_aux].mdio_bus_data);
          }
          free(plat);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_plat0 = 100;
          struct plat_stmmacenet_data * plat = (struct plat_stmmacenet_data *) malloc(_len_plat0*sizeof(struct plat_stmmacenet_data));
          for(int _i0 = 0; _i0 < _len_plat0; _i0++) {
            plat[_i0].clk_csr = ((-2 * (next_i()%2)) + 1) * next_i();
        plat[_i0].has_gmac = ((-2 * (next_i()%2)) + 1) * next_i();
        plat[_i0].force_sf_dma_mode = ((-2 * (next_i()%2)) + 1) * next_i();
        plat[_i0].unicast_filter_entries = ((-2 * (next_i()%2)) + 1) * next_i();
        plat[_i0].tx_queues_to_use = ((-2 * (next_i()%2)) + 1) * next_i();
        plat[_i0].rx_queues_to_use = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_plat__i0__rx_queues_cfg0 = 1;
          plat[_i0].rx_queues_cfg = (struct TYPE_6__ *) malloc(_len_plat__i0__rx_queues_cfg0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_plat__i0__rx_queues_cfg0; _j0++) {
            plat[_i0].rx_queues_cfg->use_prio = ((-2 * (next_i()%2)) + 1) * next_i();
        plat[_i0].rx_queues_cfg->pkt_route = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_plat__i0__tx_queues_cfg0 = 1;
          plat[_i0].tx_queues_cfg = (struct TYPE_5__ *) malloc(_len_plat__i0__tx_queues_cfg0*sizeof(struct TYPE_5__));
          for(int _j0 = 0; _j0 < _len_plat__i0__tx_queues_cfg0; _j0++) {
            plat[_i0].tx_queues_cfg->use_prio = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        plat[_i0].maxmtu = ((-2 * (next_i()%2)) + 1) * next_i();
        plat[_i0].multicast_filter_bins = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_plat__i0__mdio_bus_data0 = 1;
          plat[_i0].mdio_bus_data = (struct TYPE_4__ *) malloc(_len_plat__i0__mdio_bus_data0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_plat__i0__mdio_bus_data0; _j0++) {
            plat[_i0].mdio_bus_data->phy_mask = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_plat__i0__mdio_bus_data_phy_reset0 = 1;
          plat[_i0].mdio_bus_data->phy_reset = (int *) malloc(_len_plat__i0__mdio_bus_data_phy_reset0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_plat__i0__mdio_bus_data_phy_reset0; _j0++) {
            plat[_i0].mdio_bus_data->phy_reset[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          common_default_data(plat);
          for(int _aux = 0; _aux < _len_plat0; _aux++) {
          free(plat[_aux].rx_queues_cfg);
          }
          for(int _aux = 0; _aux < _len_plat0; _aux++) {
          free(plat[_aux].tx_queues_cfg);
          }
          for(int _aux = 0; _aux < _len_plat0; _aux++) {
          free(plat[_aux].mdio_bus_data);
          }
          free(plat);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
