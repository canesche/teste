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
struct TYPE_2__ {struct ieee80211_channel* channels; } ;
struct mt76_sband {struct mt76_channel_state* chan; TYPE_1__ sband; } ;
struct mt76_dev {struct mt76_sband sband_5g; struct mt76_sband sband_2g; } ;
struct mt76_channel_state {int dummy; } ;
struct ieee80211_channel {scalar_t__ band; } ;

/* Variables and functions */
 scalar_t__ NL80211_BAND_2GHZ ; 

__attribute__((used)) static inline struct mt76_channel_state *
mt76_channel_state(struct mt76_dev *dev, struct ieee80211_channel *c)
{
	struct mt76_sband *msband;
	int idx;

	if (c->band == NL80211_BAND_2GHZ)
		msband = &dev->sband_2g;
	else
		msband = &dev->sband_5g;

	idx = c - &msband->sband.channels[0];
	return &msband->chan[idx];
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
          int _len_dev0 = 1;
          struct mt76_dev * dev = (struct mt76_dev *) malloc(_len_dev0*sizeof(struct mt76_dev));
          for(int _i0 = 0; _i0 < _len_dev0; _i0++) {
              int _len_dev__i0__sband_5g_chan0 = 1;
          dev[_i0].sband_5g.chan = (struct mt76_channel_state *) malloc(_len_dev__i0__sband_5g_chan0*sizeof(struct mt76_channel_state));
          for(int _j0 = 0; _j0 < _len_dev__i0__sband_5g_chan0; _j0++) {
            dev[_i0].sband_5g.chan->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_dev__i0__sband_5g_sband_channels0 = 1;
          dev[_i0].sband_5g.sband.channels = (struct ieee80211_channel *) malloc(_len_dev__i0__sband_5g_sband_channels0*sizeof(struct ieee80211_channel));
          for(int _j0 = 0; _j0 < _len_dev__i0__sband_5g_sband_channels0; _j0++) {
            dev[_i0].sband_5g.sband.channels->band = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_dev__i0__sband_2g_chan0 = 1;
          dev[_i0].sband_2g.chan = (struct mt76_channel_state *) malloc(_len_dev__i0__sband_2g_chan0*sizeof(struct mt76_channel_state));
          for(int _j0 = 0; _j0 < _len_dev__i0__sband_2g_chan0; _j0++) {
            dev[_i0].sband_2g.chan->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_dev__i0__sband_2g_sband_channels0 = 1;
          dev[_i0].sband_2g.sband.channels = (struct ieee80211_channel *) malloc(_len_dev__i0__sband_2g_sband_channels0*sizeof(struct ieee80211_channel));
          for(int _j0 = 0; _j0 < _len_dev__i0__sband_2g_sband_channels0; _j0++) {
            dev[_i0].sband_2g.sband.channels->band = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_c0 = 1;
          struct ieee80211_channel * c = (struct ieee80211_channel *) malloc(_len_c0*sizeof(struct ieee80211_channel));
          for(int _i0 = 0; _i0 < _len_c0; _i0++) {
            c[_i0].band = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          struct mt76_channel_state * benchRet = mt76_channel_state(dev,c);
          printf("%d\n", (*benchRet).dummy);
          free(dev);
          free(c);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_dev0 = 65025;
          struct mt76_dev * dev = (struct mt76_dev *) malloc(_len_dev0*sizeof(struct mt76_dev));
          for(int _i0 = 0; _i0 < _len_dev0; _i0++) {
              int _len_dev__i0__sband_5g_chan0 = 1;
          dev[_i0].sband_5g.chan = (struct mt76_channel_state *) malloc(_len_dev__i0__sband_5g_chan0*sizeof(struct mt76_channel_state));
          for(int _j0 = 0; _j0 < _len_dev__i0__sband_5g_chan0; _j0++) {
            dev[_i0].sband_5g.chan->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_dev__i0__sband_5g_sband_channels0 = 1;
          dev[_i0].sband_5g.sband.channels = (struct ieee80211_channel *) malloc(_len_dev__i0__sband_5g_sband_channels0*sizeof(struct ieee80211_channel));
          for(int _j0 = 0; _j0 < _len_dev__i0__sband_5g_sband_channels0; _j0++) {
            dev[_i0].sband_5g.sband.channels->band = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_dev__i0__sband_2g_chan0 = 1;
          dev[_i0].sband_2g.chan = (struct mt76_channel_state *) malloc(_len_dev__i0__sband_2g_chan0*sizeof(struct mt76_channel_state));
          for(int _j0 = 0; _j0 < _len_dev__i0__sband_2g_chan0; _j0++) {
            dev[_i0].sband_2g.chan->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_dev__i0__sband_2g_sband_channels0 = 1;
          dev[_i0].sband_2g.sband.channels = (struct ieee80211_channel *) malloc(_len_dev__i0__sband_2g_sband_channels0*sizeof(struct ieee80211_channel));
          for(int _j0 = 0; _j0 < _len_dev__i0__sband_2g_sband_channels0; _j0++) {
            dev[_i0].sband_2g.sband.channels->band = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_c0 = 65025;
          struct ieee80211_channel * c = (struct ieee80211_channel *) malloc(_len_c0*sizeof(struct ieee80211_channel));
          for(int _i0 = 0; _i0 < _len_c0; _i0++) {
            c[_i0].band = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          struct mt76_channel_state * benchRet = mt76_channel_state(dev,c);
          printf("%d\n", (*benchRet).dummy);
          free(dev);
          free(c);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_dev0 = 100;
          struct mt76_dev * dev = (struct mt76_dev *) malloc(_len_dev0*sizeof(struct mt76_dev));
          for(int _i0 = 0; _i0 < _len_dev0; _i0++) {
              int _len_dev__i0__sband_5g_chan0 = 1;
          dev[_i0].sband_5g.chan = (struct mt76_channel_state *) malloc(_len_dev__i0__sband_5g_chan0*sizeof(struct mt76_channel_state));
          for(int _j0 = 0; _j0 < _len_dev__i0__sband_5g_chan0; _j0++) {
            dev[_i0].sband_5g.chan->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_dev__i0__sband_5g_sband_channels0 = 1;
          dev[_i0].sband_5g.sband.channels = (struct ieee80211_channel *) malloc(_len_dev__i0__sband_5g_sband_channels0*sizeof(struct ieee80211_channel));
          for(int _j0 = 0; _j0 < _len_dev__i0__sband_5g_sband_channels0; _j0++) {
            dev[_i0].sband_5g.sband.channels->band = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_dev__i0__sband_2g_chan0 = 1;
          dev[_i0].sband_2g.chan = (struct mt76_channel_state *) malloc(_len_dev__i0__sband_2g_chan0*sizeof(struct mt76_channel_state));
          for(int _j0 = 0; _j0 < _len_dev__i0__sband_2g_chan0; _j0++) {
            dev[_i0].sband_2g.chan->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_dev__i0__sband_2g_sband_channels0 = 1;
          dev[_i0].sband_2g.sband.channels = (struct ieee80211_channel *) malloc(_len_dev__i0__sband_2g_sband_channels0*sizeof(struct ieee80211_channel));
          for(int _j0 = 0; _j0 < _len_dev__i0__sband_2g_sband_channels0; _j0++) {
            dev[_i0].sband_2g.sband.channels->band = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_c0 = 100;
          struct ieee80211_channel * c = (struct ieee80211_channel *) malloc(_len_c0*sizeof(struct ieee80211_channel));
          for(int _i0 = 0; _i0 < _len_c0; _i0++) {
            c[_i0].band = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          struct mt76_channel_state * benchRet = mt76_channel_state(dev,c);
          printf("%d\n", (*benchRet).dummy);
          free(dev);
          free(c);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
