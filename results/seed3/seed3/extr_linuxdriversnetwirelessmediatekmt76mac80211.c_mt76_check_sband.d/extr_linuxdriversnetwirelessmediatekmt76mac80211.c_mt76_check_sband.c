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
struct mt76_dev {TYPE_3__* hw; } ;
struct ieee80211_supported_band {int n_channels; TYPE_1__* channels; } ;
struct TYPE_6__ {TYPE_2__* wiphy; } ;
struct TYPE_5__ {struct ieee80211_supported_band** bands; } ;
struct TYPE_4__ {int flags; } ;

/* Variables and functions */
 int IEEE80211_CHAN_DISABLED ; 

__attribute__((used)) static void
mt76_check_sband(struct mt76_dev *dev, int band)
{
	struct ieee80211_supported_band *sband = dev->hw->wiphy->bands[band];
	bool found = false;
	int i;

	if (!sband)
		return;

	for (i = 0; i < sband->n_channels; i++) {
		if (sband->channels[i].flags & IEEE80211_CHAN_DISABLED)
			continue;

		found = true;
		break;
	}

	if (found)
		return;

	sband->n_channels = 0;
	dev->hw->wiphy->bands[band] = NULL;
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
          int band = 100;
          int _len_dev0 = 1;
          struct mt76_dev * dev = (struct mt76_dev *) malloc(_len_dev0*sizeof(struct mt76_dev));
          for(int _i0 = 0; _i0 < _len_dev0; _i0++) {
              int _len_dev__i0__hw0 = 1;
          dev[_i0].hw = (struct TYPE_6__ *) malloc(_len_dev__i0__hw0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_dev__i0__hw0; _j0++) {
              int _len_dev__i0__hw_wiphy0 = 1;
          dev[_i0].hw->wiphy = (struct TYPE_5__ *) malloc(_len_dev__i0__hw_wiphy0*sizeof(struct TYPE_5__));
          for(int _j0 = 0; _j0 < _len_dev__i0__hw_wiphy0; _j0++) {
              int _len_dev__i0__hw_wiphy_bands0 = 1;
          dev[_i0].hw->wiphy->bands = (struct ieee80211_supported_band **) malloc(_len_dev__i0__hw_wiphy_bands0*sizeof(struct ieee80211_supported_band *));
          for(int _j0 = 0; _j0 < _len_dev__i0__hw_wiphy_bands0; _j0++) {
            int _len_dev__i0__hw_wiphy_bands1 = 1;
            dev[_i0].hw->wiphy->bands[_j0] = (struct ieee80211_supported_band *) malloc(_len_dev__i0__hw_wiphy_bands1*sizeof(struct ieee80211_supported_band));
            for(int _j1 = 0; _j1 < _len_dev__i0__hw_wiphy_bands1; _j1++) {
              dev[_i0].hw->wiphy->bands[_j0]->n_channels = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_dev__i0__hw_wiphy_bands__j0__channels0 = 1;
          dev[_i0].hw->wiphy->bands[_j0]->channels = (struct TYPE_4__ *) malloc(_len_dev__i0__hw_wiphy_bands__j0__channels0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_dev__i0__hw_wiphy_bands__j0__channels0; _j0++) {
            dev[_i0].hw->wiphy->bands[_j0]->channels->flags = ((-2 * (next_i()%2)) + 1) * next_i();
          }
            }
          }
          }
          }
          }
          mt76_check_sband(dev,band);
          for(int _aux = 0; _aux < _len_dev0; _aux++) {
          free(dev[_aux].hw);
          }
          free(dev);
        
        break;
    }
    // big-arr
    case 1:
    {
          int band = 255;
          int _len_dev0 = 65025;
          struct mt76_dev * dev = (struct mt76_dev *) malloc(_len_dev0*sizeof(struct mt76_dev));
          for(int _i0 = 0; _i0 < _len_dev0; _i0++) {
              int _len_dev__i0__hw0 = 1;
          dev[_i0].hw = (struct TYPE_6__ *) malloc(_len_dev__i0__hw0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_dev__i0__hw0; _j0++) {
              int _len_dev__i0__hw_wiphy0 = 1;
          dev[_i0].hw->wiphy = (struct TYPE_5__ *) malloc(_len_dev__i0__hw_wiphy0*sizeof(struct TYPE_5__));
          for(int _j0 = 0; _j0 < _len_dev__i0__hw_wiphy0; _j0++) {
              int _len_dev__i0__hw_wiphy_bands0 = 1;
          dev[_i0].hw->wiphy->bands = (struct ieee80211_supported_band **) malloc(_len_dev__i0__hw_wiphy_bands0*sizeof(struct ieee80211_supported_band *));
          for(int _j0 = 0; _j0 < _len_dev__i0__hw_wiphy_bands0; _j0++) {
            int _len_dev__i0__hw_wiphy_bands1 = 1;
            dev[_i0].hw->wiphy->bands[_j0] = (struct ieee80211_supported_band *) malloc(_len_dev__i0__hw_wiphy_bands1*sizeof(struct ieee80211_supported_band));
            for(int _j1 = 0; _j1 < _len_dev__i0__hw_wiphy_bands1; _j1++) {
              dev[_i0].hw->wiphy->bands[_j0]->n_channels = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_dev__i0__hw_wiphy_bands__j0__channels0 = 1;
          dev[_i0].hw->wiphy->bands[_j0]->channels = (struct TYPE_4__ *) malloc(_len_dev__i0__hw_wiphy_bands__j0__channels0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_dev__i0__hw_wiphy_bands__j0__channels0; _j0++) {
            dev[_i0].hw->wiphy->bands[_j0]->channels->flags = ((-2 * (next_i()%2)) + 1) * next_i();
          }
            }
          }
          }
          }
          }
          mt76_check_sband(dev,band);
          for(int _aux = 0; _aux < _len_dev0; _aux++) {
          free(dev[_aux].hw);
          }
          free(dev);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int band = 10;
          int _len_dev0 = 100;
          struct mt76_dev * dev = (struct mt76_dev *) malloc(_len_dev0*sizeof(struct mt76_dev));
          for(int _i0 = 0; _i0 < _len_dev0; _i0++) {
              int _len_dev__i0__hw0 = 1;
          dev[_i0].hw = (struct TYPE_6__ *) malloc(_len_dev__i0__hw0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_dev__i0__hw0; _j0++) {
              int _len_dev__i0__hw_wiphy0 = 1;
          dev[_i0].hw->wiphy = (struct TYPE_5__ *) malloc(_len_dev__i0__hw_wiphy0*sizeof(struct TYPE_5__));
          for(int _j0 = 0; _j0 < _len_dev__i0__hw_wiphy0; _j0++) {
              int _len_dev__i0__hw_wiphy_bands0 = 1;
          dev[_i0].hw->wiphy->bands = (struct ieee80211_supported_band **) malloc(_len_dev__i0__hw_wiphy_bands0*sizeof(struct ieee80211_supported_band *));
          for(int _j0 = 0; _j0 < _len_dev__i0__hw_wiphy_bands0; _j0++) {
            int _len_dev__i0__hw_wiphy_bands1 = 1;
            dev[_i0].hw->wiphy->bands[_j0] = (struct ieee80211_supported_band *) malloc(_len_dev__i0__hw_wiphy_bands1*sizeof(struct ieee80211_supported_band));
            for(int _j1 = 0; _j1 < _len_dev__i0__hw_wiphy_bands1; _j1++) {
              dev[_i0].hw->wiphy->bands[_j0]->n_channels = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_dev__i0__hw_wiphy_bands__j0__channels0 = 1;
          dev[_i0].hw->wiphy->bands[_j0]->channels = (struct TYPE_4__ *) malloc(_len_dev__i0__hw_wiphy_bands__j0__channels0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_dev__i0__hw_wiphy_bands__j0__channels0; _j0++) {
            dev[_i0].hw->wiphy->bands[_j0]->channels->flags = ((-2 * (next_i()%2)) + 1) * next_i();
          }
            }
          }
          }
          }
          }
          mt76_check_sband(dev,band);
          for(int _aux = 0; _aux < _len_dev0; _aux++) {
          free(dev[_aux].hw);
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
