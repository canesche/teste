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
struct tc_configuration {scalar_t__ dcb_pfc; TYPE_1__* path; } ;
struct ixgbe_dcb_config {scalar_t__** bw_percentage; scalar_t__ pfc_mode_enable; struct tc_configuration* tc_config; } ;
struct ixgbe_adapter {struct ixgbe_dcb_config dcb_cfg; struct ixgbe_dcb_config temp_dcb_cfg; } ;
struct TYPE_2__ {scalar_t__ prio_type; scalar_t__ bwg_id; scalar_t__ bwg_percent; scalar_t__ up_to_tc_bitmap; } ;

/* Variables and functions */
 int BIT_APP_UPCHG ; 
 int BIT_PFC ; 
 int BIT_PG_RX ; 
 int BIT_PG_TX ; 
 int DCB_PFC_UP_ATTR_0 ; 
 int DCB_PFC_UP_ATTR_MAX ; 
 int DCB_PG_ATTR_BW_ID_0 ; 
 int DCB_PG_ATTR_BW_ID_MAX ; 
 int DCB_PG_ATTR_TC_0 ; 
 int DCB_RX_CONFIG ; 
 int DCB_TX_CONFIG ; 

__attribute__((used)) static int ixgbe_copy_dcb_cfg(struct ixgbe_adapter *adapter, int tc_max)
{
	struct ixgbe_dcb_config *scfg = &adapter->temp_dcb_cfg;
	struct ixgbe_dcb_config *dcfg = &adapter->dcb_cfg;
	struct tc_configuration *src = NULL;
	struct tc_configuration *dst = NULL;
	int i, j;
	int tx = DCB_TX_CONFIG;
	int rx = DCB_RX_CONFIG;
	int changes = 0;
#ifdef IXGBE_FCOE
	struct dcb_app app = {
			      .selector = DCB_APP_IDTYPE_ETHTYPE,
			      .protocol = ETH_P_FCOE,
			     };
	u8 up = dcb_getapp(adapter->netdev, &app);

	if (up && !(up & BIT(adapter->fcoe.up)))
		changes |= BIT_APP_UPCHG;
#endif

	for (i = DCB_PG_ATTR_TC_0; i < tc_max + DCB_PG_ATTR_TC_0; i++) {
		src = &scfg->tc_config[i - DCB_PG_ATTR_TC_0];
		dst = &dcfg->tc_config[i - DCB_PG_ATTR_TC_0];

		if (dst->path[tx].prio_type != src->path[tx].prio_type) {
			dst->path[tx].prio_type = src->path[tx].prio_type;
			changes |= BIT_PG_TX;
		}

		if (dst->path[tx].bwg_id != src->path[tx].bwg_id) {
			dst->path[tx].bwg_id = src->path[tx].bwg_id;
			changes |= BIT_PG_TX;
		}

		if (dst->path[tx].bwg_percent != src->path[tx].bwg_percent) {
			dst->path[tx].bwg_percent = src->path[tx].bwg_percent;
			changes |= BIT_PG_TX;
		}

		if (dst->path[tx].up_to_tc_bitmap !=
				src->path[tx].up_to_tc_bitmap) {
			dst->path[tx].up_to_tc_bitmap =
				src->path[tx].up_to_tc_bitmap;
			changes |= (BIT_PG_TX | BIT_PFC | BIT_APP_UPCHG);
		}

		if (dst->path[rx].prio_type != src->path[rx].prio_type) {
			dst->path[rx].prio_type = src->path[rx].prio_type;
			changes |= BIT_PG_RX;
		}

		if (dst->path[rx].bwg_id != src->path[rx].bwg_id) {
			dst->path[rx].bwg_id = src->path[rx].bwg_id;
			changes |= BIT_PG_RX;
		}

		if (dst->path[rx].bwg_percent != src->path[rx].bwg_percent) {
			dst->path[rx].bwg_percent = src->path[rx].bwg_percent;
			changes |= BIT_PG_RX;
		}

		if (dst->path[rx].up_to_tc_bitmap !=
				src->path[rx].up_to_tc_bitmap) {
			dst->path[rx].up_to_tc_bitmap =
				src->path[rx].up_to_tc_bitmap;
			changes |= (BIT_PG_RX | BIT_PFC | BIT_APP_UPCHG);
		}
	}

	for (i = DCB_PG_ATTR_BW_ID_0; i < DCB_PG_ATTR_BW_ID_MAX; i++) {
		j = i - DCB_PG_ATTR_BW_ID_0;
		if (dcfg->bw_percentage[tx][j] != scfg->bw_percentage[tx][j]) {
			dcfg->bw_percentage[tx][j] = scfg->bw_percentage[tx][j];
			changes |= BIT_PG_TX;
		}
		if (dcfg->bw_percentage[rx][j] != scfg->bw_percentage[rx][j]) {
			dcfg->bw_percentage[rx][j] = scfg->bw_percentage[rx][j];
			changes |= BIT_PG_RX;
		}
	}

	for (i = DCB_PFC_UP_ATTR_0; i < DCB_PFC_UP_ATTR_MAX; i++) {
		j = i - DCB_PFC_UP_ATTR_0;
		if (dcfg->tc_config[j].dcb_pfc != scfg->tc_config[j].dcb_pfc) {
			dcfg->tc_config[j].dcb_pfc = scfg->tc_config[j].dcb_pfc;
			changes |= BIT_PFC;
		}
	}

	if (dcfg->pfc_mode_enable != scfg->pfc_mode_enable) {
		dcfg->pfc_mode_enable = scfg->pfc_mode_enable;
		changes |= BIT_PFC;
	}

	return changes;
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
          int tc_max = 100;
          int _len_adapter0 = 1;
          struct ixgbe_adapter * adapter = (struct ixgbe_adapter *) malloc(_len_adapter0*sizeof(struct ixgbe_adapter));
          for(int _i0 = 0; _i0 < _len_adapter0; _i0++) {
              int _len_adapter__i0__dcb_cfg_bw_percentage0 = 1;
          adapter[_i0].dcb_cfg.bw_percentage = (long **) malloc(_len_adapter__i0__dcb_cfg_bw_percentage0*sizeof(long *));
          for(int _j0 = 0; _j0 < _len_adapter__i0__dcb_cfg_bw_percentage0; _j0++) {
            int _len_adapter__i0__dcb_cfg_bw_percentage1 = 1;
            adapter[_i0].dcb_cfg.bw_percentage[_j0] = (long *) malloc(_len_adapter__i0__dcb_cfg_bw_percentage1*sizeof(long));
            for(int _j1 = 0; _j1 < _len_adapter__i0__dcb_cfg_bw_percentage1; _j1++) {
              adapter[_i0].dcb_cfg.bw_percentage[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
        adapter[_i0].dcb_cfg.pfc_mode_enable = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_adapter__i0__dcb_cfg_tc_config0 = 1;
          adapter[_i0].dcb_cfg.tc_config = (struct tc_configuration *) malloc(_len_adapter__i0__dcb_cfg_tc_config0*sizeof(struct tc_configuration));
          for(int _j0 = 0; _j0 < _len_adapter__i0__dcb_cfg_tc_config0; _j0++) {
            adapter[_i0].dcb_cfg.tc_config->dcb_pfc = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_adapter__i0__dcb_cfg_tc_config_path0 = 1;
          adapter[_i0].dcb_cfg.tc_config->path = (struct TYPE_2__ *) malloc(_len_adapter__i0__dcb_cfg_tc_config_path0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_adapter__i0__dcb_cfg_tc_config_path0; _j0++) {
            adapter[_i0].dcb_cfg.tc_config->path->prio_type = ((-2 * (next_i()%2)) + 1) * next_i();
        adapter[_i0].dcb_cfg.tc_config->path->bwg_id = ((-2 * (next_i()%2)) + 1) * next_i();
        adapter[_i0].dcb_cfg.tc_config->path->bwg_percent = ((-2 * (next_i()%2)) + 1) * next_i();
        adapter[_i0].dcb_cfg.tc_config->path->up_to_tc_bitmap = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_adapter__i0__temp_dcb_cfg_bw_percentage0 = 1;
          adapter[_i0].temp_dcb_cfg.bw_percentage = (long **) malloc(_len_adapter__i0__temp_dcb_cfg_bw_percentage0*sizeof(long *));
          for(int _j0 = 0; _j0 < _len_adapter__i0__temp_dcb_cfg_bw_percentage0; _j0++) {
            int _len_adapter__i0__temp_dcb_cfg_bw_percentage1 = 1;
            adapter[_i0].temp_dcb_cfg.bw_percentage[_j0] = (long *) malloc(_len_adapter__i0__temp_dcb_cfg_bw_percentage1*sizeof(long));
            for(int _j1 = 0; _j1 < _len_adapter__i0__temp_dcb_cfg_bw_percentage1; _j1++) {
              adapter[_i0].temp_dcb_cfg.bw_percentage[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
        adapter[_i0].temp_dcb_cfg.pfc_mode_enable = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_adapter__i0__temp_dcb_cfg_tc_config0 = 1;
          adapter[_i0].temp_dcb_cfg.tc_config = (struct tc_configuration *) malloc(_len_adapter__i0__temp_dcb_cfg_tc_config0*sizeof(struct tc_configuration));
          for(int _j0 = 0; _j0 < _len_adapter__i0__temp_dcb_cfg_tc_config0; _j0++) {
            adapter[_i0].temp_dcb_cfg.tc_config->dcb_pfc = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_adapter__i0__temp_dcb_cfg_tc_config_path0 = 1;
          adapter[_i0].temp_dcb_cfg.tc_config->path = (struct TYPE_2__ *) malloc(_len_adapter__i0__temp_dcb_cfg_tc_config_path0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_adapter__i0__temp_dcb_cfg_tc_config_path0; _j0++) {
            adapter[_i0].temp_dcb_cfg.tc_config->path->prio_type = ((-2 * (next_i()%2)) + 1) * next_i();
        adapter[_i0].temp_dcb_cfg.tc_config->path->bwg_id = ((-2 * (next_i()%2)) + 1) * next_i();
        adapter[_i0].temp_dcb_cfg.tc_config->path->bwg_percent = ((-2 * (next_i()%2)) + 1) * next_i();
        adapter[_i0].temp_dcb_cfg.tc_config->path->up_to_tc_bitmap = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int benchRet = ixgbe_copy_dcb_cfg(adapter,tc_max);
          printf("%d\n", benchRet); 
          free(adapter);
        
        break;
    }
    // big-arr
    case 1:
    {
          int tc_max = 255;
          int _len_adapter0 = 65025;
          struct ixgbe_adapter * adapter = (struct ixgbe_adapter *) malloc(_len_adapter0*sizeof(struct ixgbe_adapter));
          for(int _i0 = 0; _i0 < _len_adapter0; _i0++) {
              int _len_adapter__i0__dcb_cfg_bw_percentage0 = 1;
          adapter[_i0].dcb_cfg.bw_percentage = (long **) malloc(_len_adapter__i0__dcb_cfg_bw_percentage0*sizeof(long *));
          for(int _j0 = 0; _j0 < _len_adapter__i0__dcb_cfg_bw_percentage0; _j0++) {
            int _len_adapter__i0__dcb_cfg_bw_percentage1 = 1;
            adapter[_i0].dcb_cfg.bw_percentage[_j0] = (long *) malloc(_len_adapter__i0__dcb_cfg_bw_percentage1*sizeof(long));
            for(int _j1 = 0; _j1 < _len_adapter__i0__dcb_cfg_bw_percentage1; _j1++) {
              adapter[_i0].dcb_cfg.bw_percentage[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
        adapter[_i0].dcb_cfg.pfc_mode_enable = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_adapter__i0__dcb_cfg_tc_config0 = 1;
          adapter[_i0].dcb_cfg.tc_config = (struct tc_configuration *) malloc(_len_adapter__i0__dcb_cfg_tc_config0*sizeof(struct tc_configuration));
          for(int _j0 = 0; _j0 < _len_adapter__i0__dcb_cfg_tc_config0; _j0++) {
            adapter[_i0].dcb_cfg.tc_config->dcb_pfc = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_adapter__i0__dcb_cfg_tc_config_path0 = 1;
          adapter[_i0].dcb_cfg.tc_config->path = (struct TYPE_2__ *) malloc(_len_adapter__i0__dcb_cfg_tc_config_path0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_adapter__i0__dcb_cfg_tc_config_path0; _j0++) {
            adapter[_i0].dcb_cfg.tc_config->path->prio_type = ((-2 * (next_i()%2)) + 1) * next_i();
        adapter[_i0].dcb_cfg.tc_config->path->bwg_id = ((-2 * (next_i()%2)) + 1) * next_i();
        adapter[_i0].dcb_cfg.tc_config->path->bwg_percent = ((-2 * (next_i()%2)) + 1) * next_i();
        adapter[_i0].dcb_cfg.tc_config->path->up_to_tc_bitmap = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_adapter__i0__temp_dcb_cfg_bw_percentage0 = 1;
          adapter[_i0].temp_dcb_cfg.bw_percentage = (long **) malloc(_len_adapter__i0__temp_dcb_cfg_bw_percentage0*sizeof(long *));
          for(int _j0 = 0; _j0 < _len_adapter__i0__temp_dcb_cfg_bw_percentage0; _j0++) {
            int _len_adapter__i0__temp_dcb_cfg_bw_percentage1 = 1;
            adapter[_i0].temp_dcb_cfg.bw_percentage[_j0] = (long *) malloc(_len_adapter__i0__temp_dcb_cfg_bw_percentage1*sizeof(long));
            for(int _j1 = 0; _j1 < _len_adapter__i0__temp_dcb_cfg_bw_percentage1; _j1++) {
              adapter[_i0].temp_dcb_cfg.bw_percentage[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
        adapter[_i0].temp_dcb_cfg.pfc_mode_enable = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_adapter__i0__temp_dcb_cfg_tc_config0 = 1;
          adapter[_i0].temp_dcb_cfg.tc_config = (struct tc_configuration *) malloc(_len_adapter__i0__temp_dcb_cfg_tc_config0*sizeof(struct tc_configuration));
          for(int _j0 = 0; _j0 < _len_adapter__i0__temp_dcb_cfg_tc_config0; _j0++) {
            adapter[_i0].temp_dcb_cfg.tc_config->dcb_pfc = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_adapter__i0__temp_dcb_cfg_tc_config_path0 = 1;
          adapter[_i0].temp_dcb_cfg.tc_config->path = (struct TYPE_2__ *) malloc(_len_adapter__i0__temp_dcb_cfg_tc_config_path0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_adapter__i0__temp_dcb_cfg_tc_config_path0; _j0++) {
            adapter[_i0].temp_dcb_cfg.tc_config->path->prio_type = ((-2 * (next_i()%2)) + 1) * next_i();
        adapter[_i0].temp_dcb_cfg.tc_config->path->bwg_id = ((-2 * (next_i()%2)) + 1) * next_i();
        adapter[_i0].temp_dcb_cfg.tc_config->path->bwg_percent = ((-2 * (next_i()%2)) + 1) * next_i();
        adapter[_i0].temp_dcb_cfg.tc_config->path->up_to_tc_bitmap = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int benchRet = ixgbe_copy_dcb_cfg(adapter,tc_max);
          printf("%d\n", benchRet); 
          free(adapter);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int tc_max = 10;
          int _len_adapter0 = 100;
          struct ixgbe_adapter * adapter = (struct ixgbe_adapter *) malloc(_len_adapter0*sizeof(struct ixgbe_adapter));
          for(int _i0 = 0; _i0 < _len_adapter0; _i0++) {
              int _len_adapter__i0__dcb_cfg_bw_percentage0 = 1;
          adapter[_i0].dcb_cfg.bw_percentage = (long **) malloc(_len_adapter__i0__dcb_cfg_bw_percentage0*sizeof(long *));
          for(int _j0 = 0; _j0 < _len_adapter__i0__dcb_cfg_bw_percentage0; _j0++) {
            int _len_adapter__i0__dcb_cfg_bw_percentage1 = 1;
            adapter[_i0].dcb_cfg.bw_percentage[_j0] = (long *) malloc(_len_adapter__i0__dcb_cfg_bw_percentage1*sizeof(long));
            for(int _j1 = 0; _j1 < _len_adapter__i0__dcb_cfg_bw_percentage1; _j1++) {
              adapter[_i0].dcb_cfg.bw_percentage[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
        adapter[_i0].dcb_cfg.pfc_mode_enable = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_adapter__i0__dcb_cfg_tc_config0 = 1;
          adapter[_i0].dcb_cfg.tc_config = (struct tc_configuration *) malloc(_len_adapter__i0__dcb_cfg_tc_config0*sizeof(struct tc_configuration));
          for(int _j0 = 0; _j0 < _len_adapter__i0__dcb_cfg_tc_config0; _j0++) {
            adapter[_i0].dcb_cfg.tc_config->dcb_pfc = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_adapter__i0__dcb_cfg_tc_config_path0 = 1;
          adapter[_i0].dcb_cfg.tc_config->path = (struct TYPE_2__ *) malloc(_len_adapter__i0__dcb_cfg_tc_config_path0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_adapter__i0__dcb_cfg_tc_config_path0; _j0++) {
            adapter[_i0].dcb_cfg.tc_config->path->prio_type = ((-2 * (next_i()%2)) + 1) * next_i();
        adapter[_i0].dcb_cfg.tc_config->path->bwg_id = ((-2 * (next_i()%2)) + 1) * next_i();
        adapter[_i0].dcb_cfg.tc_config->path->bwg_percent = ((-2 * (next_i()%2)) + 1) * next_i();
        adapter[_i0].dcb_cfg.tc_config->path->up_to_tc_bitmap = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_adapter__i0__temp_dcb_cfg_bw_percentage0 = 1;
          adapter[_i0].temp_dcb_cfg.bw_percentage = (long **) malloc(_len_adapter__i0__temp_dcb_cfg_bw_percentage0*sizeof(long *));
          for(int _j0 = 0; _j0 < _len_adapter__i0__temp_dcb_cfg_bw_percentage0; _j0++) {
            int _len_adapter__i0__temp_dcb_cfg_bw_percentage1 = 1;
            adapter[_i0].temp_dcb_cfg.bw_percentage[_j0] = (long *) malloc(_len_adapter__i0__temp_dcb_cfg_bw_percentage1*sizeof(long));
            for(int _j1 = 0; _j1 < _len_adapter__i0__temp_dcb_cfg_bw_percentage1; _j1++) {
              adapter[_i0].temp_dcb_cfg.bw_percentage[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
        adapter[_i0].temp_dcb_cfg.pfc_mode_enable = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_adapter__i0__temp_dcb_cfg_tc_config0 = 1;
          adapter[_i0].temp_dcb_cfg.tc_config = (struct tc_configuration *) malloc(_len_adapter__i0__temp_dcb_cfg_tc_config0*sizeof(struct tc_configuration));
          for(int _j0 = 0; _j0 < _len_adapter__i0__temp_dcb_cfg_tc_config0; _j0++) {
            adapter[_i0].temp_dcb_cfg.tc_config->dcb_pfc = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_adapter__i0__temp_dcb_cfg_tc_config_path0 = 1;
          adapter[_i0].temp_dcb_cfg.tc_config->path = (struct TYPE_2__ *) malloc(_len_adapter__i0__temp_dcb_cfg_tc_config_path0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_adapter__i0__temp_dcb_cfg_tc_config_path0; _j0++) {
            adapter[_i0].temp_dcb_cfg.tc_config->path->prio_type = ((-2 * (next_i()%2)) + 1) * next_i();
        adapter[_i0].temp_dcb_cfg.tc_config->path->bwg_id = ((-2 * (next_i()%2)) + 1) * next_i();
        adapter[_i0].temp_dcb_cfg.tc_config->path->bwg_percent = ((-2 * (next_i()%2)) + 1) * next_i();
        adapter[_i0].temp_dcb_cfg.tc_config->path->up_to_tc_bitmap = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int benchRet = ixgbe_copy_dcb_cfg(adapter,tc_max);
          printf("%d\n", benchRet); 
          free(adapter);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
