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
struct xgene_enet_pdata {int phy_mode; int rxq_cnt; int txq_cnt; int cq_cnt; scalar_t__ enet_id; int port_id; int /*<<< orphan*/ * ring_ops; void* rm; void* ring_num; void* bp_bufnum; void* eth_bufnum; void* cpu_bufnum; int /*<<< orphan*/ * cle_ops; int /*<<< orphan*/ * port_ops; int /*<<< orphan*/ * mac_ops; } ;

/* Variables and functions */
#define  PHY_INTERFACE_MODE_RGMII 132 
#define  PHY_INTERFACE_MODE_RGMII_ID 131 
#define  PHY_INTERFACE_MODE_RGMII_RXID 130 
#define  PHY_INTERFACE_MODE_RGMII_TXID 129 
#define  PHY_INTERFACE_MODE_SGMII 128 
 int PHY_INTERFACE_MODE_XGMII ; 
 void* RM0 ; 
 void* RM1 ; 
 void* RM3 ; 
 void* START_BP_BUFNUM_0 ; 
 void* START_BP_BUFNUM_1 ; 
 void* START_CPU_BUFNUM_0 ; 
 void* START_CPU_BUFNUM_1 ; 
 void* START_ETH_BUFNUM_0 ; 
 void* START_ETH_BUFNUM_1 ; 
 void* START_RING_NUM_0 ; 
 void* START_RING_NUM_1 ; 
 void* X2_START_BP_BUFNUM_0 ; 
 void* X2_START_BP_BUFNUM_1 ; 
 void* X2_START_CPU_BUFNUM_0 ; 
 void* X2_START_CPU_BUFNUM_1 ; 
 void* X2_START_ETH_BUFNUM_0 ; 
 void* X2_START_ETH_BUFNUM_1 ; 
 void* X2_START_RING_NUM_0 ; 
 void* X2_START_RING_NUM_1 ; 
 scalar_t__ XGENE_ENET1 ; 
 int XGENE_NUM_RX_RING ; 
 int XGENE_NUM_TXC_RING ; 
 int XGENE_NUM_TX_RING ; 
 void* XG_START_BP_BUFNUM_1 ; 
 void* XG_START_CPU_BUFNUM_1 ; 
 void* XG_START_ETH_BUFNUM_1 ; 
 void* XG_START_RING_NUM_1 ; 
 int /*<<< orphan*/  xgene_cle3in_ops ; 
 int /*<<< orphan*/  xgene_gmac_ops ; 
 int /*<<< orphan*/  xgene_gport_ops ; 
 int /*<<< orphan*/  xgene_ring1_ops ; 
 int /*<<< orphan*/  xgene_ring2_ops ; 
 int /*<<< orphan*/  xgene_sgmac_ops ; 
 int /*<<< orphan*/  xgene_sgport_ops ; 
 int /*<<< orphan*/  xgene_xgmac_ops ; 
 int /*<<< orphan*/  xgene_xgport_ops ; 

__attribute__((used)) static void xgene_enet_setup_ops(struct xgene_enet_pdata *pdata)
{
	switch (pdata->phy_mode) {
	case PHY_INTERFACE_MODE_RGMII:
	case PHY_INTERFACE_MODE_RGMII_ID:
	case PHY_INTERFACE_MODE_RGMII_RXID:
	case PHY_INTERFACE_MODE_RGMII_TXID:
		pdata->mac_ops = &xgene_gmac_ops;
		pdata->port_ops = &xgene_gport_ops;
		pdata->rm = RM3;
		pdata->rxq_cnt = 1;
		pdata->txq_cnt = 1;
		pdata->cq_cnt = 0;
		break;
	case PHY_INTERFACE_MODE_SGMII:
		pdata->mac_ops = &xgene_sgmac_ops;
		pdata->port_ops = &xgene_sgport_ops;
		pdata->rm = RM1;
		pdata->rxq_cnt = 1;
		pdata->txq_cnt = 1;
		pdata->cq_cnt = 1;
		break;
	default:
		pdata->mac_ops = &xgene_xgmac_ops;
		pdata->port_ops = &xgene_xgport_ops;
		pdata->cle_ops = &xgene_cle3in_ops;
		pdata->rm = RM0;
		if (!pdata->rxq_cnt) {
			pdata->rxq_cnt = XGENE_NUM_RX_RING;
			pdata->txq_cnt = XGENE_NUM_TX_RING;
			pdata->cq_cnt = XGENE_NUM_TXC_RING;
		}
		break;
	}

	if (pdata->enet_id == XGENE_ENET1) {
		switch (pdata->port_id) {
		case 0:
			if (pdata->phy_mode == PHY_INTERFACE_MODE_XGMII) {
				pdata->cpu_bufnum = X2_START_CPU_BUFNUM_0;
				pdata->eth_bufnum = X2_START_ETH_BUFNUM_0;
				pdata->bp_bufnum = X2_START_BP_BUFNUM_0;
				pdata->ring_num = START_RING_NUM_0;
			} else {
				pdata->cpu_bufnum = START_CPU_BUFNUM_0;
				pdata->eth_bufnum = START_ETH_BUFNUM_0;
				pdata->bp_bufnum = START_BP_BUFNUM_0;
				pdata->ring_num = START_RING_NUM_0;
			}
			break;
		case 1:
			if (pdata->phy_mode == PHY_INTERFACE_MODE_XGMII) {
				pdata->cpu_bufnum = XG_START_CPU_BUFNUM_1;
				pdata->eth_bufnum = XG_START_ETH_BUFNUM_1;
				pdata->bp_bufnum = XG_START_BP_BUFNUM_1;
				pdata->ring_num = XG_START_RING_NUM_1;
			} else {
				pdata->cpu_bufnum = START_CPU_BUFNUM_1;
				pdata->eth_bufnum = START_ETH_BUFNUM_1;
				pdata->bp_bufnum = START_BP_BUFNUM_1;
				pdata->ring_num = START_RING_NUM_1;
			}
			break;
		default:
			break;
		}
		pdata->ring_ops = &xgene_ring1_ops;
	} else {
		switch (pdata->port_id) {
		case 0:
			pdata->cpu_bufnum = X2_START_CPU_BUFNUM_0;
			pdata->eth_bufnum = X2_START_ETH_BUFNUM_0;
			pdata->bp_bufnum = X2_START_BP_BUFNUM_0;
			pdata->ring_num = X2_START_RING_NUM_0;
			break;
		case 1:
			pdata->cpu_bufnum = X2_START_CPU_BUFNUM_1;
			pdata->eth_bufnum = X2_START_ETH_BUFNUM_1;
			pdata->bp_bufnum = X2_START_BP_BUFNUM_1;
			pdata->ring_num = X2_START_RING_NUM_1;
			break;
		default:
			break;
		}
		pdata->rm = RM0;
		pdata->ring_ops = &xgene_ring2_ops;
	}
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
          int _len_pdata0 = 1;
          struct xgene_enet_pdata * pdata = (struct xgene_enet_pdata *) malloc(_len_pdata0*sizeof(struct xgene_enet_pdata));
          for(int _i0 = 0; _i0 < _len_pdata0; _i0++) {
            pdata[_i0].phy_mode = ((-2 * (next_i()%2)) + 1) * next_i();
        pdata[_i0].rxq_cnt = ((-2 * (next_i()%2)) + 1) * next_i();
        pdata[_i0].txq_cnt = ((-2 * (next_i()%2)) + 1) * next_i();
        pdata[_i0].cq_cnt = ((-2 * (next_i()%2)) + 1) * next_i();
        pdata[_i0].enet_id = ((-2 * (next_i()%2)) + 1) * next_i();
        pdata[_i0].port_id = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_pdata__i0__ring_ops0 = 1;
          pdata[_i0].ring_ops = (int *) malloc(_len_pdata__i0__ring_ops0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_pdata__i0__ring_ops0; _j0++) {
            pdata[_i0].ring_ops[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pdata__i0__cle_ops0 = 1;
          pdata[_i0].cle_ops = (int *) malloc(_len_pdata__i0__cle_ops0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_pdata__i0__cle_ops0; _j0++) {
            pdata[_i0].cle_ops[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pdata__i0__port_ops0 = 1;
          pdata[_i0].port_ops = (int *) malloc(_len_pdata__i0__port_ops0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_pdata__i0__port_ops0; _j0++) {
            pdata[_i0].port_ops[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pdata__i0__mac_ops0 = 1;
          pdata[_i0].mac_ops = (int *) malloc(_len_pdata__i0__mac_ops0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_pdata__i0__mac_ops0; _j0++) {
            pdata[_i0].mac_ops[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          xgene_enet_setup_ops(pdata);
          for(int _aux = 0; _aux < _len_pdata0; _aux++) {
          free(pdata[_aux].ring_ops);
          }
          for(int _aux = 0; _aux < _len_pdata0; _aux++) {
          free(pdata[_aux].cle_ops);
          }
          for(int _aux = 0; _aux < _len_pdata0; _aux++) {
          free(pdata[_aux].port_ops);
          }
          for(int _aux = 0; _aux < _len_pdata0; _aux++) {
          free(pdata[_aux].mac_ops);
          }
          free(pdata);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_pdata0 = 65025;
          struct xgene_enet_pdata * pdata = (struct xgene_enet_pdata *) malloc(_len_pdata0*sizeof(struct xgene_enet_pdata));
          for(int _i0 = 0; _i0 < _len_pdata0; _i0++) {
            pdata[_i0].phy_mode = ((-2 * (next_i()%2)) + 1) * next_i();
        pdata[_i0].rxq_cnt = ((-2 * (next_i()%2)) + 1) * next_i();
        pdata[_i0].txq_cnt = ((-2 * (next_i()%2)) + 1) * next_i();
        pdata[_i0].cq_cnt = ((-2 * (next_i()%2)) + 1) * next_i();
        pdata[_i0].enet_id = ((-2 * (next_i()%2)) + 1) * next_i();
        pdata[_i0].port_id = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_pdata__i0__ring_ops0 = 1;
          pdata[_i0].ring_ops = (int *) malloc(_len_pdata__i0__ring_ops0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_pdata__i0__ring_ops0; _j0++) {
            pdata[_i0].ring_ops[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pdata__i0__cle_ops0 = 1;
          pdata[_i0].cle_ops = (int *) malloc(_len_pdata__i0__cle_ops0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_pdata__i0__cle_ops0; _j0++) {
            pdata[_i0].cle_ops[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pdata__i0__port_ops0 = 1;
          pdata[_i0].port_ops = (int *) malloc(_len_pdata__i0__port_ops0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_pdata__i0__port_ops0; _j0++) {
            pdata[_i0].port_ops[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pdata__i0__mac_ops0 = 1;
          pdata[_i0].mac_ops = (int *) malloc(_len_pdata__i0__mac_ops0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_pdata__i0__mac_ops0; _j0++) {
            pdata[_i0].mac_ops[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          xgene_enet_setup_ops(pdata);
          for(int _aux = 0; _aux < _len_pdata0; _aux++) {
          free(pdata[_aux].ring_ops);
          }
          for(int _aux = 0; _aux < _len_pdata0; _aux++) {
          free(pdata[_aux].cle_ops);
          }
          for(int _aux = 0; _aux < _len_pdata0; _aux++) {
          free(pdata[_aux].port_ops);
          }
          for(int _aux = 0; _aux < _len_pdata0; _aux++) {
          free(pdata[_aux].mac_ops);
          }
          free(pdata);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_pdata0 = 100;
          struct xgene_enet_pdata * pdata = (struct xgene_enet_pdata *) malloc(_len_pdata0*sizeof(struct xgene_enet_pdata));
          for(int _i0 = 0; _i0 < _len_pdata0; _i0++) {
            pdata[_i0].phy_mode = ((-2 * (next_i()%2)) + 1) * next_i();
        pdata[_i0].rxq_cnt = ((-2 * (next_i()%2)) + 1) * next_i();
        pdata[_i0].txq_cnt = ((-2 * (next_i()%2)) + 1) * next_i();
        pdata[_i0].cq_cnt = ((-2 * (next_i()%2)) + 1) * next_i();
        pdata[_i0].enet_id = ((-2 * (next_i()%2)) + 1) * next_i();
        pdata[_i0].port_id = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_pdata__i0__ring_ops0 = 1;
          pdata[_i0].ring_ops = (int *) malloc(_len_pdata__i0__ring_ops0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_pdata__i0__ring_ops0; _j0++) {
            pdata[_i0].ring_ops[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pdata__i0__cle_ops0 = 1;
          pdata[_i0].cle_ops = (int *) malloc(_len_pdata__i0__cle_ops0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_pdata__i0__cle_ops0; _j0++) {
            pdata[_i0].cle_ops[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pdata__i0__port_ops0 = 1;
          pdata[_i0].port_ops = (int *) malloc(_len_pdata__i0__port_ops0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_pdata__i0__port_ops0; _j0++) {
            pdata[_i0].port_ops[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pdata__i0__mac_ops0 = 1;
          pdata[_i0].mac_ops = (int *) malloc(_len_pdata__i0__mac_ops0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_pdata__i0__mac_ops0; _j0++) {
            pdata[_i0].mac_ops[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          xgene_enet_setup_ops(pdata);
          for(int _aux = 0; _aux < _len_pdata0; _aux++) {
          free(pdata[_aux].ring_ops);
          }
          for(int _aux = 0; _aux < _len_pdata0; _aux++) {
          free(pdata[_aux].cle_ops);
          }
          for(int _aux = 0; _aux < _len_pdata0; _aux++) {
          free(pdata[_aux].port_ops);
          }
          for(int _aux = 0; _aux < _len_pdata0; _aux++) {
          free(pdata[_aux].mac_ops);
          }
          free(pdata);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
