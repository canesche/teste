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
typedef  int u32 ;
struct wl1271 {TYPE_1__* hw; } ;
struct ieee80211_supported_band {int n_bitrates; TYPE_2__* bitrates; } ;
typedef  enum nl80211_band { ____Placeholder_nl80211_band } nl80211_band ;
struct TYPE_6__ {struct ieee80211_supported_band** bands; } ;
struct TYPE_5__ {int hw_value; } ;
struct TYPE_4__ {TYPE_3__* wiphy; } ;

/* Variables and functions */
 int CONF_HW_BIT_RATE_MCS_0 ; 
 int HW_HT_RATES_OFFSET ; 

u32 wl1271_tx_enabled_rates_get(struct wl1271 *wl, u32 rate_set,
				enum nl80211_band rate_band)
{
	struct ieee80211_supported_band *band;
	u32 enabled_rates = 0;
	int bit;

	band = wl->hw->wiphy->bands[rate_band];
	for (bit = 0; bit < band->n_bitrates; bit++) {
		if (rate_set & 0x1)
			enabled_rates |= band->bitrates[bit].hw_value;
		rate_set >>= 1;
	}

	/* MCS rates indication are on bits 16 - 31 */
	rate_set >>= HW_HT_RATES_OFFSET - band->n_bitrates;

	for (bit = 0; bit < 16; bit++) {
		if (rate_set & 0x1)
			enabled_rates |= (CONF_HW_BIT_RATE_MCS_0 << bit);
		rate_set >>= 1;
	}

	return enabled_rates;
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
          int rate_set = 100;
          enum nl80211_band rate_band = 0;
          int _len_wl0 = 1;
          struct wl1271 * wl = (struct wl1271 *) malloc(_len_wl0*sizeof(struct wl1271));
          for(int _i0 = 0; _i0 < _len_wl0; _i0++) {
              int _len_wl__i0__hw0 = 1;
          wl[_i0].hw = (struct TYPE_4__ *) malloc(_len_wl__i0__hw0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_wl__i0__hw0; _j0++) {
              int _len_wl__i0__hw_wiphy0 = 1;
          wl[_i0].hw->wiphy = (struct TYPE_6__ *) malloc(_len_wl__i0__hw_wiphy0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_wl__i0__hw_wiphy0; _j0++) {
              int _len_wl__i0__hw_wiphy_bands0 = 1;
          wl[_i0].hw->wiphy->bands = (struct ieee80211_supported_band **) malloc(_len_wl__i0__hw_wiphy_bands0*sizeof(struct ieee80211_supported_band *));
          for(int _j0 = 0; _j0 < _len_wl__i0__hw_wiphy_bands0; _j0++) {
            int _len_wl__i0__hw_wiphy_bands1 = 1;
            wl[_i0].hw->wiphy->bands[_j0] = (struct ieee80211_supported_band *) malloc(_len_wl__i0__hw_wiphy_bands1*sizeof(struct ieee80211_supported_band));
            for(int _j1 = 0; _j1 < _len_wl__i0__hw_wiphy_bands1; _j1++) {
              wl[_i0].hw->wiphy->bands[_j0]->n_bitrates = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_wl__i0__hw_wiphy_bands__j0__bitrates0 = 1;
          wl[_i0].hw->wiphy->bands[_j0]->bitrates = (struct TYPE_5__ *) malloc(_len_wl__i0__hw_wiphy_bands__j0__bitrates0*sizeof(struct TYPE_5__));
          for(int _j0 = 0; _j0 < _len_wl__i0__hw_wiphy_bands__j0__bitrates0; _j0++) {
            wl[_i0].hw->wiphy->bands[_j0]->bitrates->hw_value = ((-2 * (next_i()%2)) + 1) * next_i();
          }
            }
          }
          }
          }
          }
          int benchRet = wl1271_tx_enabled_rates_get(wl,rate_set,rate_band);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_wl0; _aux++) {
          free(wl[_aux].hw);
          }
          free(wl);
        
        break;
    }
    // big-arr
    case 1:
    {
          int rate_set = 255;
          enum nl80211_band rate_band = 0;
          int _len_wl0 = 65025;
          struct wl1271 * wl = (struct wl1271 *) malloc(_len_wl0*sizeof(struct wl1271));
          for(int _i0 = 0; _i0 < _len_wl0; _i0++) {
              int _len_wl__i0__hw0 = 1;
          wl[_i0].hw = (struct TYPE_4__ *) malloc(_len_wl__i0__hw0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_wl__i0__hw0; _j0++) {
              int _len_wl__i0__hw_wiphy0 = 1;
          wl[_i0].hw->wiphy = (struct TYPE_6__ *) malloc(_len_wl__i0__hw_wiphy0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_wl__i0__hw_wiphy0; _j0++) {
              int _len_wl__i0__hw_wiphy_bands0 = 1;
          wl[_i0].hw->wiphy->bands = (struct ieee80211_supported_band **) malloc(_len_wl__i0__hw_wiphy_bands0*sizeof(struct ieee80211_supported_band *));
          for(int _j0 = 0; _j0 < _len_wl__i0__hw_wiphy_bands0; _j0++) {
            int _len_wl__i0__hw_wiphy_bands1 = 1;
            wl[_i0].hw->wiphy->bands[_j0] = (struct ieee80211_supported_band *) malloc(_len_wl__i0__hw_wiphy_bands1*sizeof(struct ieee80211_supported_band));
            for(int _j1 = 0; _j1 < _len_wl__i0__hw_wiphy_bands1; _j1++) {
              wl[_i0].hw->wiphy->bands[_j0]->n_bitrates = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_wl__i0__hw_wiphy_bands__j0__bitrates0 = 1;
          wl[_i0].hw->wiphy->bands[_j0]->bitrates = (struct TYPE_5__ *) malloc(_len_wl__i0__hw_wiphy_bands__j0__bitrates0*sizeof(struct TYPE_5__));
          for(int _j0 = 0; _j0 < _len_wl__i0__hw_wiphy_bands__j0__bitrates0; _j0++) {
            wl[_i0].hw->wiphy->bands[_j0]->bitrates->hw_value = ((-2 * (next_i()%2)) + 1) * next_i();
          }
            }
          }
          }
          }
          }
          int benchRet = wl1271_tx_enabled_rates_get(wl,rate_set,rate_band);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_wl0; _aux++) {
          free(wl[_aux].hw);
          }
          free(wl);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int rate_set = 10;
          enum nl80211_band rate_band = 0;
          int _len_wl0 = 100;
          struct wl1271 * wl = (struct wl1271 *) malloc(_len_wl0*sizeof(struct wl1271));
          for(int _i0 = 0; _i0 < _len_wl0; _i0++) {
              int _len_wl__i0__hw0 = 1;
          wl[_i0].hw = (struct TYPE_4__ *) malloc(_len_wl__i0__hw0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_wl__i0__hw0; _j0++) {
              int _len_wl__i0__hw_wiphy0 = 1;
          wl[_i0].hw->wiphy = (struct TYPE_6__ *) malloc(_len_wl__i0__hw_wiphy0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_wl__i0__hw_wiphy0; _j0++) {
              int _len_wl__i0__hw_wiphy_bands0 = 1;
          wl[_i0].hw->wiphy->bands = (struct ieee80211_supported_band **) malloc(_len_wl__i0__hw_wiphy_bands0*sizeof(struct ieee80211_supported_band *));
          for(int _j0 = 0; _j0 < _len_wl__i0__hw_wiphy_bands0; _j0++) {
            int _len_wl__i0__hw_wiphy_bands1 = 1;
            wl[_i0].hw->wiphy->bands[_j0] = (struct ieee80211_supported_band *) malloc(_len_wl__i0__hw_wiphy_bands1*sizeof(struct ieee80211_supported_band));
            for(int _j1 = 0; _j1 < _len_wl__i0__hw_wiphy_bands1; _j1++) {
              wl[_i0].hw->wiphy->bands[_j0]->n_bitrates = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_wl__i0__hw_wiphy_bands__j0__bitrates0 = 1;
          wl[_i0].hw->wiphy->bands[_j0]->bitrates = (struct TYPE_5__ *) malloc(_len_wl__i0__hw_wiphy_bands__j0__bitrates0*sizeof(struct TYPE_5__));
          for(int _j0 = 0; _j0 < _len_wl__i0__hw_wiphy_bands__j0__bitrates0; _j0++) {
            wl[_i0].hw->wiphy->bands[_j0]->bitrates->hw_value = ((-2 * (next_i()%2)) + 1) * next_i();
          }
            }
          }
          }
          }
          }
          int benchRet = wl1271_tx_enabled_rates_get(wl,rate_set,rate_band);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_wl0; _aux++) {
          free(wl[_aux].hw);
          }
          free(wl);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
