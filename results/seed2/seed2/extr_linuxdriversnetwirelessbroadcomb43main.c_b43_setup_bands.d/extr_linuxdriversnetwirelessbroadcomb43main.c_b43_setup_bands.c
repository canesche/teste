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
struct ieee80211_hw {TYPE_2__* wiphy; } ;
struct b43_phy {int radio_ver; int radio_rev; scalar_t__ type; int supports_2ghz; int supports_5ghz; } ;
struct b43_wldev {struct b43_phy phy; TYPE_1__* wl; } ;
struct TYPE_4__ {int /*<<< orphan*/ ** bands; } ;
struct TYPE_3__ {struct ieee80211_hw* hw; } ;

/* Variables and functions */
 scalar_t__ B43_PHYTYPE_N ; 
 size_t NL80211_BAND_2GHZ ; 
 size_t NL80211_BAND_5GHZ ; 
 int /*<<< orphan*/  b43_band_2GHz ; 
 int /*<<< orphan*/  b43_band_2ghz_limited ; 
 int /*<<< orphan*/  b43_band_5GHz_aphy ; 
 int /*<<< orphan*/  b43_band_5GHz_nphy ; 
 int /*<<< orphan*/  b43_band_5GHz_nphy_limited ; 

__attribute__((used)) static int b43_setup_bands(struct b43_wldev *dev,
			   bool have_2ghz_phy, bool have_5ghz_phy)
{
	struct ieee80211_hw *hw = dev->wl->hw;
	struct b43_phy *phy = &dev->phy;
	bool limited_2g;
	bool limited_5g;

	/* We don't support all 2 GHz channels on some devices */
	limited_2g = phy->radio_ver == 0x2057 &&
		     (phy->radio_rev == 9 || phy->radio_rev == 14);
	limited_5g = phy->radio_ver == 0x2057 &&
		     phy->radio_rev == 9;

	if (have_2ghz_phy)
		hw->wiphy->bands[NL80211_BAND_2GHZ] = limited_2g ?
			&b43_band_2ghz_limited : &b43_band_2GHz;
	if (dev->phy.type == B43_PHYTYPE_N) {
		if (have_5ghz_phy)
			hw->wiphy->bands[NL80211_BAND_5GHZ] = limited_5g ?
				&b43_band_5GHz_nphy_limited :
				&b43_band_5GHz_nphy;
	} else {
		if (have_5ghz_phy)
			hw->wiphy->bands[NL80211_BAND_5GHZ] = &b43_band_5GHz_aphy;
	}

	dev->phy.supports_2ghz = have_2ghz_phy;
	dev->phy.supports_5ghz = have_5ghz_phy;

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
          int have_2ghz_phy = 100;
          int have_5ghz_phy = 100;
          int _len_dev0 = 1;
          struct b43_wldev * dev = (struct b43_wldev *) malloc(_len_dev0*sizeof(struct b43_wldev));
          for(int _i0 = 0; _i0 < _len_dev0; _i0++) {
            dev[_i0].phy.radio_ver = ((-2 * (next_i()%2)) + 1) * next_i();
        dev[_i0].phy.radio_rev = ((-2 * (next_i()%2)) + 1) * next_i();
        dev[_i0].phy.type = ((-2 * (next_i()%2)) + 1) * next_i();
        dev[_i0].phy.supports_2ghz = ((-2 * (next_i()%2)) + 1) * next_i();
        dev[_i0].phy.supports_5ghz = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_dev__i0__wl0 = 1;
          dev[_i0].wl = (struct TYPE_3__ *) malloc(_len_dev__i0__wl0*sizeof(struct TYPE_3__));
          for(int _j0 = 0; _j0 < _len_dev__i0__wl0; _j0++) {
              int _len_dev__i0__wl_hw0 = 1;
          dev[_i0].wl->hw = (struct ieee80211_hw *) malloc(_len_dev__i0__wl_hw0*sizeof(struct ieee80211_hw));
          for(int _j0 = 0; _j0 < _len_dev__i0__wl_hw0; _j0++) {
              int _len_dev__i0__wl_hw_wiphy0 = 1;
          dev[_i0].wl->hw->wiphy = (struct TYPE_4__ *) malloc(_len_dev__i0__wl_hw_wiphy0*sizeof(struct TYPE_4__));
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
          int benchRet = b43_setup_bands(dev,have_2ghz_phy,have_5ghz_phy);
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
          int have_2ghz_phy = 255;
          int have_5ghz_phy = 255;
          int _len_dev0 = 65025;
          struct b43_wldev * dev = (struct b43_wldev *) malloc(_len_dev0*sizeof(struct b43_wldev));
          for(int _i0 = 0; _i0 < _len_dev0; _i0++) {
            dev[_i0].phy.radio_ver = ((-2 * (next_i()%2)) + 1) * next_i();
        dev[_i0].phy.radio_rev = ((-2 * (next_i()%2)) + 1) * next_i();
        dev[_i0].phy.type = ((-2 * (next_i()%2)) + 1) * next_i();
        dev[_i0].phy.supports_2ghz = ((-2 * (next_i()%2)) + 1) * next_i();
        dev[_i0].phy.supports_5ghz = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_dev__i0__wl0 = 1;
          dev[_i0].wl = (struct TYPE_3__ *) malloc(_len_dev__i0__wl0*sizeof(struct TYPE_3__));
          for(int _j0 = 0; _j0 < _len_dev__i0__wl0; _j0++) {
              int _len_dev__i0__wl_hw0 = 1;
          dev[_i0].wl->hw = (struct ieee80211_hw *) malloc(_len_dev__i0__wl_hw0*sizeof(struct ieee80211_hw));
          for(int _j0 = 0; _j0 < _len_dev__i0__wl_hw0; _j0++) {
              int _len_dev__i0__wl_hw_wiphy0 = 1;
          dev[_i0].wl->hw->wiphy = (struct TYPE_4__ *) malloc(_len_dev__i0__wl_hw_wiphy0*sizeof(struct TYPE_4__));
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
          int benchRet = b43_setup_bands(dev,have_2ghz_phy,have_5ghz_phy);
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
          int have_2ghz_phy = 10;
          int have_5ghz_phy = 10;
          int _len_dev0 = 100;
          struct b43_wldev * dev = (struct b43_wldev *) malloc(_len_dev0*sizeof(struct b43_wldev));
          for(int _i0 = 0; _i0 < _len_dev0; _i0++) {
            dev[_i0].phy.radio_ver = ((-2 * (next_i()%2)) + 1) * next_i();
        dev[_i0].phy.radio_rev = ((-2 * (next_i()%2)) + 1) * next_i();
        dev[_i0].phy.type = ((-2 * (next_i()%2)) + 1) * next_i();
        dev[_i0].phy.supports_2ghz = ((-2 * (next_i()%2)) + 1) * next_i();
        dev[_i0].phy.supports_5ghz = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_dev__i0__wl0 = 1;
          dev[_i0].wl = (struct TYPE_3__ *) malloc(_len_dev__i0__wl0*sizeof(struct TYPE_3__));
          for(int _j0 = 0; _j0 < _len_dev__i0__wl0; _j0++) {
              int _len_dev__i0__wl_hw0 = 1;
          dev[_i0].wl->hw = (struct ieee80211_hw *) malloc(_len_dev__i0__wl_hw0*sizeof(struct ieee80211_hw));
          for(int _j0 = 0; _j0 < _len_dev__i0__wl_hw0; _j0++) {
              int _len_dev__i0__wl_hw_wiphy0 = 1;
          dev[_i0].wl->hw->wiphy = (struct TYPE_4__ *) malloc(_len_dev__i0__wl_hw_wiphy0*sizeof(struct TYPE_4__));
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
          int benchRet = b43_setup_bands(dev,have_2ghz_phy,have_5ghz_phy);
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
