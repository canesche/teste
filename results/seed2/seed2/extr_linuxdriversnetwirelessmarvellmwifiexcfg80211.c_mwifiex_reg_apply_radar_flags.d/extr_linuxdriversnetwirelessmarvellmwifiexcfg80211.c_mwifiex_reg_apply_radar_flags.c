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
struct wiphy {struct ieee80211_supported_band** bands; } ;
struct ieee80211_supported_band {unsigned int n_channels; struct ieee80211_channel* channels; } ;
struct ieee80211_channel {int flags; } ;

/* Variables and functions */
 int IEEE80211_CHAN_DISABLED ; 
 int IEEE80211_CHAN_NO_IR ; 
 int IEEE80211_CHAN_RADAR ; 
 size_t NL80211_BAND_5GHZ ; 

__attribute__((used)) static void mwifiex_reg_apply_radar_flags(struct wiphy *wiphy)
{
	struct ieee80211_supported_band *sband;
	struct ieee80211_channel *chan;
	unsigned int i;

	if (!wiphy->bands[NL80211_BAND_5GHZ])
		return;
	sband = wiphy->bands[NL80211_BAND_5GHZ];

	for (i = 0; i < sband->n_channels; i++) {
		chan = &sband->channels[i];
		if ((!(chan->flags & IEEE80211_CHAN_DISABLED)) &&
		    (chan->flags & IEEE80211_CHAN_RADAR))
			chan->flags |= IEEE80211_CHAN_NO_IR;
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
          int _len_wiphy0 = 1;
          struct wiphy * wiphy = (struct wiphy *) malloc(_len_wiphy0*sizeof(struct wiphy));
          for(int _i0 = 0; _i0 < _len_wiphy0; _i0++) {
              int _len_wiphy__i0__bands0 = 1;
          wiphy[_i0].bands = (struct ieee80211_supported_band **) malloc(_len_wiphy__i0__bands0*sizeof(struct ieee80211_supported_band *));
          for(int _j0 = 0; _j0 < _len_wiphy__i0__bands0; _j0++) {
            int _len_wiphy__i0__bands1 = 1;
            wiphy[_i0].bands[_j0] = (struct ieee80211_supported_band *) malloc(_len_wiphy__i0__bands1*sizeof(struct ieee80211_supported_band));
            for(int _j1 = 0; _j1 < _len_wiphy__i0__bands1; _j1++) {
              wiphy[_i0].bands[_j0]->n_channels = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_wiphy__i0__bands__j0__channels0 = 1;
          wiphy[_i0].bands[_j0]->channels = (struct ieee80211_channel *) malloc(_len_wiphy__i0__bands__j0__channels0*sizeof(struct ieee80211_channel));
          for(int _j0 = 0; _j0 < _len_wiphy__i0__bands__j0__channels0; _j0++) {
            wiphy[_i0].bands[_j0]->channels->flags = ((-2 * (next_i()%2)) + 1) * next_i();
          }
            }
          }
          }
          mwifiex_reg_apply_radar_flags(wiphy);
          for(int _aux = 0; _aux < _len_wiphy0; _aux++) {
          free(*(wiphy[_aux].bands));
        free(wiphy[_aux].bands);
          }
          free(wiphy);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_wiphy0 = 65025;
          struct wiphy * wiphy = (struct wiphy *) malloc(_len_wiphy0*sizeof(struct wiphy));
          for(int _i0 = 0; _i0 < _len_wiphy0; _i0++) {
              int _len_wiphy__i0__bands0 = 1;
          wiphy[_i0].bands = (struct ieee80211_supported_band **) malloc(_len_wiphy__i0__bands0*sizeof(struct ieee80211_supported_band *));
          for(int _j0 = 0; _j0 < _len_wiphy__i0__bands0; _j0++) {
            int _len_wiphy__i0__bands1 = 1;
            wiphy[_i0].bands[_j0] = (struct ieee80211_supported_band *) malloc(_len_wiphy__i0__bands1*sizeof(struct ieee80211_supported_band));
            for(int _j1 = 0; _j1 < _len_wiphy__i0__bands1; _j1++) {
              wiphy[_i0].bands[_j0]->n_channels = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_wiphy__i0__bands__j0__channels0 = 1;
          wiphy[_i0].bands[_j0]->channels = (struct ieee80211_channel *) malloc(_len_wiphy__i0__bands__j0__channels0*sizeof(struct ieee80211_channel));
          for(int _j0 = 0; _j0 < _len_wiphy__i0__bands__j0__channels0; _j0++) {
            wiphy[_i0].bands[_j0]->channels->flags = ((-2 * (next_i()%2)) + 1) * next_i();
          }
            }
          }
          }
          mwifiex_reg_apply_radar_flags(wiphy);
          for(int _aux = 0; _aux < _len_wiphy0; _aux++) {
          free(*(wiphy[_aux].bands));
        free(wiphy[_aux].bands);
          }
          free(wiphy);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_wiphy0 = 100;
          struct wiphy * wiphy = (struct wiphy *) malloc(_len_wiphy0*sizeof(struct wiphy));
          for(int _i0 = 0; _i0 < _len_wiphy0; _i0++) {
              int _len_wiphy__i0__bands0 = 1;
          wiphy[_i0].bands = (struct ieee80211_supported_band **) malloc(_len_wiphy__i0__bands0*sizeof(struct ieee80211_supported_band *));
          for(int _j0 = 0; _j0 < _len_wiphy__i0__bands0; _j0++) {
            int _len_wiphy__i0__bands1 = 1;
            wiphy[_i0].bands[_j0] = (struct ieee80211_supported_band *) malloc(_len_wiphy__i0__bands1*sizeof(struct ieee80211_supported_band));
            for(int _j1 = 0; _j1 < _len_wiphy__i0__bands1; _j1++) {
              wiphy[_i0].bands[_j0]->n_channels = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_wiphy__i0__bands__j0__channels0 = 1;
          wiphy[_i0].bands[_j0]->channels = (struct ieee80211_channel *) malloc(_len_wiphy__i0__bands__j0__channels0*sizeof(struct ieee80211_channel));
          for(int _j0 = 0; _j0 < _len_wiphy__i0__bands__j0__channels0; _j0++) {
            wiphy[_i0].bands[_j0]->channels->flags = ((-2 * (next_i()%2)) + 1) * next_i();
          }
            }
          }
          }
          mwifiex_reg_apply_radar_flags(wiphy);
          for(int _aux = 0; _aux < _len_wiphy0; _aux++) {
          free(*(wiphy[_aux].bands));
        free(wiphy[_aux].bands);
          }
          free(wiphy);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
