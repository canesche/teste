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
typedef  struct TYPE_4__   TYPE_2__ ;
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
struct ieee80211_hw {TYPE_1__* wiphy; } ;
struct b43legacy_phy {int /*<<< orphan*/  possible_phymodes; } ;
struct b43legacy_wldev {struct b43legacy_phy phy; TYPE_2__* wl; } ;
struct TYPE_4__ {struct ieee80211_hw* hw; } ;
struct TYPE_3__ {int /*<<< orphan*/ ** bands; } ;

/* Variables and functions */
 int /*<<< orphan*/  B43legacy_PHYMODE_B ; 
 int /*<<< orphan*/  B43legacy_PHYMODE_G ; 
 size_t NL80211_BAND_2GHZ ; 
 int /*<<< orphan*/  b43legacy_band_2GHz_BPHY ; 
 int /*<<< orphan*/  b43legacy_band_2GHz_GPHY ; 

__attribute__((used)) static int b43legacy_setup_modes(struct b43legacy_wldev *dev,
				 int have_bphy,
				 int have_gphy)
{
	struct ieee80211_hw *hw = dev->wl->hw;
	struct b43legacy_phy *phy = &dev->phy;

	phy->possible_phymodes = 0;
	if (have_bphy) {
		hw->wiphy->bands[NL80211_BAND_2GHZ] =
			&b43legacy_band_2GHz_BPHY;
		phy->possible_phymodes |= B43legacy_PHYMODE_B;
	}

	if (have_gphy) {
		hw->wiphy->bands[NL80211_BAND_2GHZ] =
			&b43legacy_band_2GHz_GPHY;
		phy->possible_phymodes |= B43legacy_PHYMODE_G;
	}

	return 0;
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
          int have_bphy = 100;
          int have_gphy = 100;
          int _len_dev0 = 1;
          struct b43legacy_wldev * dev = (struct b43legacy_wldev *) malloc(_len_dev0*sizeof(struct b43legacy_wldev));
          for(int _i0 = 0; _i0 < _len_dev0; _i0++) {
            dev[_i0].phy.possible_phymodes = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_dev__i0__wl0 = 1;
          dev[_i0].wl = (struct TYPE_4__ *) malloc(_len_dev__i0__wl0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_dev__i0__wl0; _j0++) {
              int _len_dev__i0__wl_hw0 = 1;
          dev[_i0].wl->hw = (struct ieee80211_hw *) malloc(_len_dev__i0__wl_hw0*sizeof(struct ieee80211_hw));
          for(int _j0 = 0; _j0 < _len_dev__i0__wl_hw0; _j0++) {
              int _len_dev__i0__wl_hw_wiphy0 = 1;
          dev[_i0].wl->hw->wiphy = (struct TYPE_3__ *) malloc(_len_dev__i0__wl_hw_wiphy0*sizeof(struct TYPE_3__));
          for(int _j0 = 0; _j0 < _len_dev__i0__wl_hw_wiphy0; _j0++) {
              int _len_dev__i0__wl_hw_wiphy_bands0 = 1;
          dev[_i0].wl->hw->wiphy->bands = (int **) malloc(_len_dev__i0__wl_hw_wiphy_bands0*sizeof(int *));
          for(int _j0 = 0; _j0 < _len_dev__i0__wl_hw_wiphy_bands0; _j0++) {
            int _len_dev__i0__wl_hw_wiphy_bands1 = 1;
            dev[_i0].wl->hw->wiphy->bands[_j0] = (int *) malloc(_len_dev__i0__wl_hw_wiphy_bands1*sizeof(int));
            for(int _j1 = 0; _j1 < _len_dev__i0__wl_hw_wiphy_bands1; _j1++) {
              dev[_i0].wl->hw->wiphy->bands[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          }
          }
          }
          int benchRet = b43legacy_setup_modes(dev,have_bphy,have_gphy);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_dev0; _aux++) {
          free(dev[_aux].wl);
          }
          free(dev);
        
        break;
    }
    // big-arr
    case 1:
    {
          int have_bphy = 255;
          int have_gphy = 255;
          int _len_dev0 = 65025;
          struct b43legacy_wldev * dev = (struct b43legacy_wldev *) malloc(_len_dev0*sizeof(struct b43legacy_wldev));
          for(int _i0 = 0; _i0 < _len_dev0; _i0++) {
            dev[_i0].phy.possible_phymodes = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_dev__i0__wl0 = 1;
          dev[_i0].wl = (struct TYPE_4__ *) malloc(_len_dev__i0__wl0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_dev__i0__wl0; _j0++) {
              int _len_dev__i0__wl_hw0 = 1;
          dev[_i0].wl->hw = (struct ieee80211_hw *) malloc(_len_dev__i0__wl_hw0*sizeof(struct ieee80211_hw));
          for(int _j0 = 0; _j0 < _len_dev__i0__wl_hw0; _j0++) {
              int _len_dev__i0__wl_hw_wiphy0 = 1;
          dev[_i0].wl->hw->wiphy = (struct TYPE_3__ *) malloc(_len_dev__i0__wl_hw_wiphy0*sizeof(struct TYPE_3__));
          for(int _j0 = 0; _j0 < _len_dev__i0__wl_hw_wiphy0; _j0++) {
              int _len_dev__i0__wl_hw_wiphy_bands0 = 1;
          dev[_i0].wl->hw->wiphy->bands = (int **) malloc(_len_dev__i0__wl_hw_wiphy_bands0*sizeof(int *));
          for(int _j0 = 0; _j0 < _len_dev__i0__wl_hw_wiphy_bands0; _j0++) {
            int _len_dev__i0__wl_hw_wiphy_bands1 = 1;
            dev[_i0].wl->hw->wiphy->bands[_j0] = (int *) malloc(_len_dev__i0__wl_hw_wiphy_bands1*sizeof(int));
            for(int _j1 = 0; _j1 < _len_dev__i0__wl_hw_wiphy_bands1; _j1++) {
              dev[_i0].wl->hw->wiphy->bands[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          }
          }
          }
          int benchRet = b43legacy_setup_modes(dev,have_bphy,have_gphy);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_dev0; _aux++) {
          free(dev[_aux].wl);
          }
          free(dev);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int have_bphy = 10;
          int have_gphy = 10;
          int _len_dev0 = 100;
          struct b43legacy_wldev * dev = (struct b43legacy_wldev *) malloc(_len_dev0*sizeof(struct b43legacy_wldev));
          for(int _i0 = 0; _i0 < _len_dev0; _i0++) {
            dev[_i0].phy.possible_phymodes = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_dev__i0__wl0 = 1;
          dev[_i0].wl = (struct TYPE_4__ *) malloc(_len_dev__i0__wl0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_dev__i0__wl0; _j0++) {
              int _len_dev__i0__wl_hw0 = 1;
          dev[_i0].wl->hw = (struct ieee80211_hw *) malloc(_len_dev__i0__wl_hw0*sizeof(struct ieee80211_hw));
          for(int _j0 = 0; _j0 < _len_dev__i0__wl_hw0; _j0++) {
              int _len_dev__i0__wl_hw_wiphy0 = 1;
          dev[_i0].wl->hw->wiphy = (struct TYPE_3__ *) malloc(_len_dev__i0__wl_hw_wiphy0*sizeof(struct TYPE_3__));
          for(int _j0 = 0; _j0 < _len_dev__i0__wl_hw_wiphy0; _j0++) {
              int _len_dev__i0__wl_hw_wiphy_bands0 = 1;
          dev[_i0].wl->hw->wiphy->bands = (int **) malloc(_len_dev__i0__wl_hw_wiphy_bands0*sizeof(int *));
          for(int _j0 = 0; _j0 < _len_dev__i0__wl_hw_wiphy_bands0; _j0++) {
            int _len_dev__i0__wl_hw_wiphy_bands1 = 1;
            dev[_i0].wl->hw->wiphy->bands[_j0] = (int *) malloc(_len_dev__i0__wl_hw_wiphy_bands1*sizeof(int));
            for(int _j1 = 0; _j1 < _len_dev__i0__wl_hw_wiphy_bands1; _j1++) {
              dev[_i0].wl->hw->wiphy->bands[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          }
          }
          }
          int benchRet = b43legacy_setup_modes(dev,have_bphy,have_gphy);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_dev0; _aux++) {
          free(dev[_aux].wl);
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
