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
struct wiphy {struct ieee80211_supported_band** bands; } ;
struct ieee80211_supported_band {int n_bitrates; TYPE_1__* bitrates; } ;
struct cfg80211_registered_device {struct wiphy wiphy; } ;
struct TYPE_2__ {int bitrate; } ;

/* Variables and functions */
 int NUM_NL80211_BANDS ; 

__attribute__((used)) static bool
nl80211_parse_mcast_rate(struct cfg80211_registered_device *rdev,
			 int mcast_rate[NUM_NL80211_BANDS],
			 int rateval)
{
	struct wiphy *wiphy = &rdev->wiphy;
	bool found = false;
	int band, i;

	for (band = 0; band < NUM_NL80211_BANDS; band++) {
		struct ieee80211_supported_band *sband;

		sband = wiphy->bands[band];
		if (!sband)
			continue;

		for (i = 0; i < sband->n_bitrates; i++) {
			if (sband->bitrates[i].bitrate == rateval) {
				mcast_rate[band] = i + 1;
				found = true;
				break;
			}
		}
	}

	return found;
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
          int rateval = 100;
          int _len_rdev0 = 1;
          struct cfg80211_registered_device * rdev = (struct cfg80211_registered_device *) malloc(_len_rdev0*sizeof(struct cfg80211_registered_device));
          for(int _i0 = 0; _i0 < _len_rdev0; _i0++) {
              int _len_rdev__i0__wiphy_bands0 = 1;
          rdev[_i0].wiphy.bands = (struct ieee80211_supported_band **) malloc(_len_rdev__i0__wiphy_bands0*sizeof(struct ieee80211_supported_band *));
          for(int _j0 = 0; _j0 < _len_rdev__i0__wiphy_bands0; _j0++) {
            int _len_rdev__i0__wiphy_bands1 = 1;
            rdev[_i0].wiphy.bands[_j0] = (struct ieee80211_supported_band *) malloc(_len_rdev__i0__wiphy_bands1*sizeof(struct ieee80211_supported_band));
            for(int _j1 = 0; _j1 < _len_rdev__i0__wiphy_bands1; _j1++) {
              rdev[_i0].wiphy.bands[_j0]->n_bitrates = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_rdev__i0__wiphy_bands__j0__bitrates0 = 1;
          rdev[_i0].wiphy.bands[_j0]->bitrates = (struct TYPE_2__ *) malloc(_len_rdev__i0__wiphy_bands__j0__bitrates0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_rdev__i0__wiphy_bands__j0__bitrates0; _j0++) {
            rdev[_i0].wiphy.bands[_j0]->bitrates->bitrate = ((-2 * (next_i()%2)) + 1) * next_i();
          }
            }
          }
          }
          int _len_mcast_rate0 = NUM_NL80211_BANDS;
          int * mcast_rate = (int *) malloc(_len_mcast_rate0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_mcast_rate0; _i0++) {
            mcast_rate[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = nl80211_parse_mcast_rate(rdev,mcast_rate,rateval);
          printf("%d\n", benchRet); 
          free(rdev);
          free(mcast_rate);
        
        break;
    }
    // big-arr
    case 1:
    {
          int rateval = 255;
          int _len_rdev0 = 65025;
          struct cfg80211_registered_device * rdev = (struct cfg80211_registered_device *) malloc(_len_rdev0*sizeof(struct cfg80211_registered_device));
          for(int _i0 = 0; _i0 < _len_rdev0; _i0++) {
              int _len_rdev__i0__wiphy_bands0 = 1;
          rdev[_i0].wiphy.bands = (struct ieee80211_supported_band **) malloc(_len_rdev__i0__wiphy_bands0*sizeof(struct ieee80211_supported_band *));
          for(int _j0 = 0; _j0 < _len_rdev__i0__wiphy_bands0; _j0++) {
            int _len_rdev__i0__wiphy_bands1 = 1;
            rdev[_i0].wiphy.bands[_j0] = (struct ieee80211_supported_band *) malloc(_len_rdev__i0__wiphy_bands1*sizeof(struct ieee80211_supported_band));
            for(int _j1 = 0; _j1 < _len_rdev__i0__wiphy_bands1; _j1++) {
              rdev[_i0].wiphy.bands[_j0]->n_bitrates = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_rdev__i0__wiphy_bands__j0__bitrates0 = 1;
          rdev[_i0].wiphy.bands[_j0]->bitrates = (struct TYPE_2__ *) malloc(_len_rdev__i0__wiphy_bands__j0__bitrates0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_rdev__i0__wiphy_bands__j0__bitrates0; _j0++) {
            rdev[_i0].wiphy.bands[_j0]->bitrates->bitrate = ((-2 * (next_i()%2)) + 1) * next_i();
          }
            }
          }
          }
          int _len_mcast_rate0 = 65025;
          int * mcast_rate = (int *) malloc(_len_mcast_rate0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_mcast_rate0; _i0++) {
            mcast_rate[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = nl80211_parse_mcast_rate(rdev,mcast_rate,rateval);
          printf("%d\n", benchRet); 
          free(rdev);
          free(mcast_rate);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int rateval = 10;
          int _len_rdev0 = 100;
          struct cfg80211_registered_device * rdev = (struct cfg80211_registered_device *) malloc(_len_rdev0*sizeof(struct cfg80211_registered_device));
          for(int _i0 = 0; _i0 < _len_rdev0; _i0++) {
              int _len_rdev__i0__wiphy_bands0 = 1;
          rdev[_i0].wiphy.bands = (struct ieee80211_supported_band **) malloc(_len_rdev__i0__wiphy_bands0*sizeof(struct ieee80211_supported_band *));
          for(int _j0 = 0; _j0 < _len_rdev__i0__wiphy_bands0; _j0++) {
            int _len_rdev__i0__wiphy_bands1 = 1;
            rdev[_i0].wiphy.bands[_j0] = (struct ieee80211_supported_band *) malloc(_len_rdev__i0__wiphy_bands1*sizeof(struct ieee80211_supported_band));
            for(int _j1 = 0; _j1 < _len_rdev__i0__wiphy_bands1; _j1++) {
              rdev[_i0].wiphy.bands[_j0]->n_bitrates = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_rdev__i0__wiphy_bands__j0__bitrates0 = 1;
          rdev[_i0].wiphy.bands[_j0]->bitrates = (struct TYPE_2__ *) malloc(_len_rdev__i0__wiphy_bands__j0__bitrates0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_rdev__i0__wiphy_bands__j0__bitrates0; _j0++) {
            rdev[_i0].wiphy.bands[_j0]->bitrates->bitrate = ((-2 * (next_i()%2)) + 1) * next_i();
          }
            }
          }
          }
          int _len_mcast_rate0 = 100;
          int * mcast_rate = (int *) malloc(_len_mcast_rate0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_mcast_rate0; _i0++) {
            mcast_rate[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = nl80211_parse_mcast_rate(rdev,mcast_rate,rateval);
          printf("%d\n", benchRet); 
          free(rdev);
          free(mcast_rate);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
