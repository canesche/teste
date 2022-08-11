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
typedef  int u8 ;
struct ieee80211_supported_band {scalar_t__ band; int n_iftype_data; TYPE_3__* iftype_data; } ;
struct TYPE_4__ {int /*<<< orphan*/ * phy_cap_info; } ;
struct TYPE_5__ {TYPE_1__ he_cap_elem; } ;
struct TYPE_6__ {TYPE_2__ he_cap; } ;

/* Variables and functions */
 int ANT_AB ; 
 int /*<<< orphan*/  IEEE80211_HE_PHY_CAP1_MIDAMBLE_RX_MAX_NSTS ; 
 int /*<<< orphan*/  IEEE80211_HE_PHY_CAP2_MIDAMBLE_RX_MAX_NSTS ; 
 scalar_t__ NL80211_BAND_2GHZ ; 
 scalar_t__ NL80211_BAND_5GHZ ; 
 TYPE_3__ iwl_he_capa ; 

__attribute__((used)) static void iwl_init_he_hw_capab(struct ieee80211_supported_band *sband,
				 u8 tx_chains, u8 rx_chains)
{
	if (sband->band == NL80211_BAND_2GHZ ||
	    sband->band == NL80211_BAND_5GHZ)
		sband->iftype_data = &iwl_he_capa;
	else
		return;

	sband->n_iftype_data = 1;

	/* If not 2x2, we need to indicate 1x1 in the Midamble RX Max NSTS */
	if ((tx_chains & rx_chains) != ANT_AB) {
		iwl_he_capa.he_cap.he_cap_elem.phy_cap_info[1] &=
			~IEEE80211_HE_PHY_CAP1_MIDAMBLE_RX_MAX_NSTS;
		iwl_he_capa.he_cap.he_cap_elem.phy_cap_info[2] &=
			~IEEE80211_HE_PHY_CAP2_MIDAMBLE_RX_MAX_NSTS;
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
          int tx_chains = 100;
          int rx_chains = 100;
          int _len_sband0 = 1;
          struct ieee80211_supported_band * sband = (struct ieee80211_supported_band *) malloc(_len_sband0*sizeof(struct ieee80211_supported_band));
          for(int _i0 = 0; _i0 < _len_sband0; _i0++) {
            sband[_i0].band = ((-2 * (next_i()%2)) + 1) * next_i();
        sband[_i0].n_iftype_data = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_sband__i0__iftype_data0 = 1;
          sband[_i0].iftype_data = (struct TYPE_6__ *) malloc(_len_sband__i0__iftype_data0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_sband__i0__iftype_data0; _j0++) {
              int _len_sband__i0__iftype_data_he_cap_he_cap_elem_phy_cap_info0 = 1;
          sband[_i0].iftype_data->he_cap.he_cap_elem.phy_cap_info = (int *) malloc(_len_sband__i0__iftype_data_he_cap_he_cap_elem_phy_cap_info0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_sband__i0__iftype_data_he_cap_he_cap_elem_phy_cap_info0; _j0++) {
            sband[_i0].iftype_data->he_cap.he_cap_elem.phy_cap_info[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          iwl_init_he_hw_capab(sband,tx_chains,rx_chains);
          for(int _aux = 0; _aux < _len_sband0; _aux++) {
          free(sband[_aux].iftype_data);
          }
          free(sband);
        
        break;
    }
    // big-arr
    case 1:
    {
          int tx_chains = 255;
          int rx_chains = 255;
          int _len_sband0 = 65025;
          struct ieee80211_supported_band * sband = (struct ieee80211_supported_band *) malloc(_len_sband0*sizeof(struct ieee80211_supported_band));
          for(int _i0 = 0; _i0 < _len_sband0; _i0++) {
            sband[_i0].band = ((-2 * (next_i()%2)) + 1) * next_i();
        sband[_i0].n_iftype_data = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_sband__i0__iftype_data0 = 1;
          sband[_i0].iftype_data = (struct TYPE_6__ *) malloc(_len_sband__i0__iftype_data0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_sband__i0__iftype_data0; _j0++) {
              int _len_sband__i0__iftype_data_he_cap_he_cap_elem_phy_cap_info0 = 1;
          sband[_i0].iftype_data->he_cap.he_cap_elem.phy_cap_info = (int *) malloc(_len_sband__i0__iftype_data_he_cap_he_cap_elem_phy_cap_info0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_sband__i0__iftype_data_he_cap_he_cap_elem_phy_cap_info0; _j0++) {
            sband[_i0].iftype_data->he_cap.he_cap_elem.phy_cap_info[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          iwl_init_he_hw_capab(sband,tx_chains,rx_chains);
          for(int _aux = 0; _aux < _len_sband0; _aux++) {
          free(sband[_aux].iftype_data);
          }
          free(sband);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int tx_chains = 10;
          int rx_chains = 10;
          int _len_sband0 = 100;
          struct ieee80211_supported_band * sband = (struct ieee80211_supported_band *) malloc(_len_sband0*sizeof(struct ieee80211_supported_band));
          for(int _i0 = 0; _i0 < _len_sband0; _i0++) {
            sband[_i0].band = ((-2 * (next_i()%2)) + 1) * next_i();
        sband[_i0].n_iftype_data = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_sband__i0__iftype_data0 = 1;
          sband[_i0].iftype_data = (struct TYPE_6__ *) malloc(_len_sband__i0__iftype_data0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_sband__i0__iftype_data0; _j0++) {
              int _len_sband__i0__iftype_data_he_cap_he_cap_elem_phy_cap_info0 = 1;
          sband[_i0].iftype_data->he_cap.he_cap_elem.phy_cap_info = (int *) malloc(_len_sband__i0__iftype_data_he_cap_he_cap_elem_phy_cap_info0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_sband__i0__iftype_data_he_cap_he_cap_elem_phy_cap_info0; _j0++) {
            sband[_i0].iftype_data->he_cap.he_cap_elem.phy_cap_info[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          iwl_init_he_hw_capab(sband,tx_chains,rx_chains);
          for(int _aux = 0; _aux < _len_sband0; _aux++) {
          free(sband[_aux].iftype_data);
          }
          free(sband);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
