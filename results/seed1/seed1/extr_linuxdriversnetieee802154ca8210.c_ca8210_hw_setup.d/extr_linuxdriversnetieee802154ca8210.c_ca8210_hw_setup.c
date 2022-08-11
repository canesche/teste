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
struct ieee802154_hw {int flags; TYPE_3__* phy; } ;
struct TYPE_5__ {int /*<<< orphan*/  opt; int /*<<< orphan*/  mode; } ;
struct TYPE_4__ {int /*<<< orphan*/  cca_ed_levels; int /*<<< orphan*/  cca_ed_levels_size; int /*<<< orphan*/  tx_powers; int /*<<< orphan*/  tx_powers_size; int /*<<< orphan*/ * channels; } ;
struct TYPE_6__ {int current_channel; int transmit_power; int cca_ed_level; int symbol_duration; int lifs_period; int sifs_period; int flags; TYPE_2__ cca; scalar_t__ current_page; TYPE_1__ supported; } ;

/* Variables and functions */
 int /*<<< orphan*/  CA8210_MAX_ED_LEVELS ; 
 int /*<<< orphan*/  CA8210_MAX_TX_POWERS ; 
 int /*<<< orphan*/  CA8210_VALID_CHANNELS ; 
 int IEEE802154_HW_AFILT ; 
 int IEEE802154_HW_CSMA_PARAMS ; 
 int IEEE802154_HW_FRAME_RETRIES ; 
 int IEEE802154_HW_OMIT_CKSUM ; 
 int IEEE802154_HW_PROMISCUOUS ; 
 int /*<<< orphan*/  NL802154_CCA_ENERGY_CARRIER ; 
 int /*<<< orphan*/  NL802154_CCA_OPT_ENERGY_CARRIER_AND ; 
 int WPAN_PHY_FLAG_CCA_ED_LEVEL ; 
 int WPAN_PHY_FLAG_CCA_MODE ; 
 int WPAN_PHY_FLAG_TXPOWER ; 
 int /*<<< orphan*/  ca8210_ed_levels ; 
 int /*<<< orphan*/  ca8210_tx_powers ; 

__attribute__((used)) static void ca8210_hw_setup(struct ieee802154_hw *ca8210_hw)
{
	/* Support channels 11-26 */
	ca8210_hw->phy->supported.channels[0] = CA8210_VALID_CHANNELS;
	ca8210_hw->phy->supported.tx_powers_size = CA8210_MAX_TX_POWERS;
	ca8210_hw->phy->supported.tx_powers = ca8210_tx_powers;
	ca8210_hw->phy->supported.cca_ed_levels_size = CA8210_MAX_ED_LEVELS;
	ca8210_hw->phy->supported.cca_ed_levels = ca8210_ed_levels;
	ca8210_hw->phy->current_channel = 18;
	ca8210_hw->phy->current_page = 0;
	ca8210_hw->phy->transmit_power = 800;
	ca8210_hw->phy->cca.mode = NL802154_CCA_ENERGY_CARRIER;
	ca8210_hw->phy->cca.opt = NL802154_CCA_OPT_ENERGY_CARRIER_AND;
	ca8210_hw->phy->cca_ed_level = -9800;
	ca8210_hw->phy->symbol_duration = 16;
	ca8210_hw->phy->lifs_period = 40;
	ca8210_hw->phy->sifs_period = 12;
	ca8210_hw->flags =
		IEEE802154_HW_AFILT |
		IEEE802154_HW_OMIT_CKSUM |
		IEEE802154_HW_FRAME_RETRIES |
		IEEE802154_HW_PROMISCUOUS |
		IEEE802154_HW_CSMA_PARAMS;
	ca8210_hw->phy->flags =
		WPAN_PHY_FLAG_TXPOWER |
		WPAN_PHY_FLAG_CCA_ED_LEVEL |
		WPAN_PHY_FLAG_CCA_MODE;
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
          int _len_ca8210_hw0 = 1;
          struct ieee802154_hw * ca8210_hw = (struct ieee802154_hw *) malloc(_len_ca8210_hw0*sizeof(struct ieee802154_hw));
          for(int _i0 = 0; _i0 < _len_ca8210_hw0; _i0++) {
            ca8210_hw[_i0].flags = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ca8210_hw__i0__phy0 = 1;
          ca8210_hw[_i0].phy = (struct TYPE_6__ *) malloc(_len_ca8210_hw__i0__phy0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_ca8210_hw__i0__phy0; _j0++) {
            ca8210_hw[_i0].phy->current_channel = ((-2 * (next_i()%2)) + 1) * next_i();
        ca8210_hw[_i0].phy->transmit_power = ((-2 * (next_i()%2)) + 1) * next_i();
        ca8210_hw[_i0].phy->cca_ed_level = ((-2 * (next_i()%2)) + 1) * next_i();
        ca8210_hw[_i0].phy->symbol_duration = ((-2 * (next_i()%2)) + 1) * next_i();
        ca8210_hw[_i0].phy->lifs_period = ((-2 * (next_i()%2)) + 1) * next_i();
        ca8210_hw[_i0].phy->sifs_period = ((-2 * (next_i()%2)) + 1) * next_i();
        ca8210_hw[_i0].phy->flags = ((-2 * (next_i()%2)) + 1) * next_i();
        ca8210_hw[_i0].phy->cca.opt = ((-2 * (next_i()%2)) + 1) * next_i();
        ca8210_hw[_i0].phy->cca.mode = ((-2 * (next_i()%2)) + 1) * next_i();
        ca8210_hw[_i0].phy->current_page = ((-2 * (next_i()%2)) + 1) * next_i();
        ca8210_hw[_i0].phy->supported.cca_ed_levels = ((-2 * (next_i()%2)) + 1) * next_i();
        ca8210_hw[_i0].phy->supported.cca_ed_levels_size = ((-2 * (next_i()%2)) + 1) * next_i();
        ca8210_hw[_i0].phy->supported.tx_powers = ((-2 * (next_i()%2)) + 1) * next_i();
        ca8210_hw[_i0].phy->supported.tx_powers_size = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ca8210_hw__i0__phy_supported_channels0 = 1;
          ca8210_hw[_i0].phy->supported.channels = (int *) malloc(_len_ca8210_hw__i0__phy_supported_channels0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ca8210_hw__i0__phy_supported_channels0; _j0++) {
            ca8210_hw[_i0].phy->supported.channels[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          ca8210_hw_setup(ca8210_hw);
          for(int _aux = 0; _aux < _len_ca8210_hw0; _aux++) {
          free(ca8210_hw[_aux].phy);
          }
          free(ca8210_hw);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_ca8210_hw0 = 65025;
          struct ieee802154_hw * ca8210_hw = (struct ieee802154_hw *) malloc(_len_ca8210_hw0*sizeof(struct ieee802154_hw));
          for(int _i0 = 0; _i0 < _len_ca8210_hw0; _i0++) {
            ca8210_hw[_i0].flags = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ca8210_hw__i0__phy0 = 1;
          ca8210_hw[_i0].phy = (struct TYPE_6__ *) malloc(_len_ca8210_hw__i0__phy0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_ca8210_hw__i0__phy0; _j0++) {
            ca8210_hw[_i0].phy->current_channel = ((-2 * (next_i()%2)) + 1) * next_i();
        ca8210_hw[_i0].phy->transmit_power = ((-2 * (next_i()%2)) + 1) * next_i();
        ca8210_hw[_i0].phy->cca_ed_level = ((-2 * (next_i()%2)) + 1) * next_i();
        ca8210_hw[_i0].phy->symbol_duration = ((-2 * (next_i()%2)) + 1) * next_i();
        ca8210_hw[_i0].phy->lifs_period = ((-2 * (next_i()%2)) + 1) * next_i();
        ca8210_hw[_i0].phy->sifs_period = ((-2 * (next_i()%2)) + 1) * next_i();
        ca8210_hw[_i0].phy->flags = ((-2 * (next_i()%2)) + 1) * next_i();
        ca8210_hw[_i0].phy->cca.opt = ((-2 * (next_i()%2)) + 1) * next_i();
        ca8210_hw[_i0].phy->cca.mode = ((-2 * (next_i()%2)) + 1) * next_i();
        ca8210_hw[_i0].phy->current_page = ((-2 * (next_i()%2)) + 1) * next_i();
        ca8210_hw[_i0].phy->supported.cca_ed_levels = ((-2 * (next_i()%2)) + 1) * next_i();
        ca8210_hw[_i0].phy->supported.cca_ed_levels_size = ((-2 * (next_i()%2)) + 1) * next_i();
        ca8210_hw[_i0].phy->supported.tx_powers = ((-2 * (next_i()%2)) + 1) * next_i();
        ca8210_hw[_i0].phy->supported.tx_powers_size = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ca8210_hw__i0__phy_supported_channels0 = 1;
          ca8210_hw[_i0].phy->supported.channels = (int *) malloc(_len_ca8210_hw__i0__phy_supported_channels0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ca8210_hw__i0__phy_supported_channels0; _j0++) {
            ca8210_hw[_i0].phy->supported.channels[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          ca8210_hw_setup(ca8210_hw);
          for(int _aux = 0; _aux < _len_ca8210_hw0; _aux++) {
          free(ca8210_hw[_aux].phy);
          }
          free(ca8210_hw);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_ca8210_hw0 = 100;
          struct ieee802154_hw * ca8210_hw = (struct ieee802154_hw *) malloc(_len_ca8210_hw0*sizeof(struct ieee802154_hw));
          for(int _i0 = 0; _i0 < _len_ca8210_hw0; _i0++) {
            ca8210_hw[_i0].flags = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ca8210_hw__i0__phy0 = 1;
          ca8210_hw[_i0].phy = (struct TYPE_6__ *) malloc(_len_ca8210_hw__i0__phy0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_ca8210_hw__i0__phy0; _j0++) {
            ca8210_hw[_i0].phy->current_channel = ((-2 * (next_i()%2)) + 1) * next_i();
        ca8210_hw[_i0].phy->transmit_power = ((-2 * (next_i()%2)) + 1) * next_i();
        ca8210_hw[_i0].phy->cca_ed_level = ((-2 * (next_i()%2)) + 1) * next_i();
        ca8210_hw[_i0].phy->symbol_duration = ((-2 * (next_i()%2)) + 1) * next_i();
        ca8210_hw[_i0].phy->lifs_period = ((-2 * (next_i()%2)) + 1) * next_i();
        ca8210_hw[_i0].phy->sifs_period = ((-2 * (next_i()%2)) + 1) * next_i();
        ca8210_hw[_i0].phy->flags = ((-2 * (next_i()%2)) + 1) * next_i();
        ca8210_hw[_i0].phy->cca.opt = ((-2 * (next_i()%2)) + 1) * next_i();
        ca8210_hw[_i0].phy->cca.mode = ((-2 * (next_i()%2)) + 1) * next_i();
        ca8210_hw[_i0].phy->current_page = ((-2 * (next_i()%2)) + 1) * next_i();
        ca8210_hw[_i0].phy->supported.cca_ed_levels = ((-2 * (next_i()%2)) + 1) * next_i();
        ca8210_hw[_i0].phy->supported.cca_ed_levels_size = ((-2 * (next_i()%2)) + 1) * next_i();
        ca8210_hw[_i0].phy->supported.tx_powers = ((-2 * (next_i()%2)) + 1) * next_i();
        ca8210_hw[_i0].phy->supported.tx_powers_size = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ca8210_hw__i0__phy_supported_channels0 = 1;
          ca8210_hw[_i0].phy->supported.channels = (int *) malloc(_len_ca8210_hw__i0__phy_supported_channels0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ca8210_hw__i0__phy_supported_channels0; _j0++) {
            ca8210_hw[_i0].phy->supported.channels[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          ca8210_hw_setup(ca8210_hw);
          for(int _aux = 0; _aux < _len_ca8210_hw0; _aux++) {
          free(ca8210_hw[_aux].phy);
          }
          free(ca8210_hw);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
