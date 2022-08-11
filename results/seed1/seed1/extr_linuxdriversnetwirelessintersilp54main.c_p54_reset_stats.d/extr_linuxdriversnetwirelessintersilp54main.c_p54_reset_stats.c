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
struct survey_info {scalar_t__ time_tx; scalar_t__ time_busy; scalar_t__ time; } ;
struct TYPE_2__ {scalar_t__ tx; scalar_t__ cca; scalar_t__ active; } ;
struct p54_common {int update_stats; TYPE_1__ survey_raw; struct survey_info* survey; struct ieee80211_channel* curchan; } ;
struct ieee80211_channel {size_t hw_value; } ;

/* Variables and functions */

__attribute__((used)) static void p54_reset_stats(struct p54_common *priv)
{
	struct ieee80211_channel *chan = priv->curchan;

	if (chan) {
		struct survey_info *info = &priv->survey[chan->hw_value];

		/* only reset channel statistics, don't touch .filled, etc. */
		info->time = 0;
		info->time_busy = 0;
		info->time_tx = 0;
	}

	priv->update_stats = true;
	priv->survey_raw.active = 0;
	priv->survey_raw.cca = 0;
	priv->survey_raw.tx = 0;
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
          int _len_priv0 = 1;
          struct p54_common * priv = (struct p54_common *) malloc(_len_priv0*sizeof(struct p54_common));
          for(int _i0 = 0; _i0 < _len_priv0; _i0++) {
            priv[_i0].update_stats = ((-2 * (next_i()%2)) + 1) * next_i();
        priv[_i0].survey_raw.tx = ((-2 * (next_i()%2)) + 1) * next_i();
        priv[_i0].survey_raw.cca = ((-2 * (next_i()%2)) + 1) * next_i();
        priv[_i0].survey_raw.active = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_priv__i0__survey0 = 1;
          priv[_i0].survey = (struct survey_info *) malloc(_len_priv__i0__survey0*sizeof(struct survey_info));
          for(int _j0 = 0; _j0 < _len_priv__i0__survey0; _j0++) {
            priv[_i0].survey->time_tx = ((-2 * (next_i()%2)) + 1) * next_i();
        priv[_i0].survey->time_busy = ((-2 * (next_i()%2)) + 1) * next_i();
        priv[_i0].survey->time = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_priv__i0__curchan0 = 1;
          priv[_i0].curchan = (struct ieee80211_channel *) malloc(_len_priv__i0__curchan0*sizeof(struct ieee80211_channel));
          for(int _j0 = 0; _j0 < _len_priv__i0__curchan0; _j0++) {
            priv[_i0].curchan->hw_value = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          p54_reset_stats(priv);
          for(int _aux = 0; _aux < _len_priv0; _aux++) {
          free(priv[_aux].survey);
          }
          for(int _aux = 0; _aux < _len_priv0; _aux++) {
          free(priv[_aux].curchan);
          }
          free(priv);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_priv0 = 65025;
          struct p54_common * priv = (struct p54_common *) malloc(_len_priv0*sizeof(struct p54_common));
          for(int _i0 = 0; _i0 < _len_priv0; _i0++) {
            priv[_i0].update_stats = ((-2 * (next_i()%2)) + 1) * next_i();
        priv[_i0].survey_raw.tx = ((-2 * (next_i()%2)) + 1) * next_i();
        priv[_i0].survey_raw.cca = ((-2 * (next_i()%2)) + 1) * next_i();
        priv[_i0].survey_raw.active = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_priv__i0__survey0 = 1;
          priv[_i0].survey = (struct survey_info *) malloc(_len_priv__i0__survey0*sizeof(struct survey_info));
          for(int _j0 = 0; _j0 < _len_priv__i0__survey0; _j0++) {
            priv[_i0].survey->time_tx = ((-2 * (next_i()%2)) + 1) * next_i();
        priv[_i0].survey->time_busy = ((-2 * (next_i()%2)) + 1) * next_i();
        priv[_i0].survey->time = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_priv__i0__curchan0 = 1;
          priv[_i0].curchan = (struct ieee80211_channel *) malloc(_len_priv__i0__curchan0*sizeof(struct ieee80211_channel));
          for(int _j0 = 0; _j0 < _len_priv__i0__curchan0; _j0++) {
            priv[_i0].curchan->hw_value = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          p54_reset_stats(priv);
          for(int _aux = 0; _aux < _len_priv0; _aux++) {
          free(priv[_aux].survey);
          }
          for(int _aux = 0; _aux < _len_priv0; _aux++) {
          free(priv[_aux].curchan);
          }
          free(priv);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_priv0 = 100;
          struct p54_common * priv = (struct p54_common *) malloc(_len_priv0*sizeof(struct p54_common));
          for(int _i0 = 0; _i0 < _len_priv0; _i0++) {
            priv[_i0].update_stats = ((-2 * (next_i()%2)) + 1) * next_i();
        priv[_i0].survey_raw.tx = ((-2 * (next_i()%2)) + 1) * next_i();
        priv[_i0].survey_raw.cca = ((-2 * (next_i()%2)) + 1) * next_i();
        priv[_i0].survey_raw.active = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_priv__i0__survey0 = 1;
          priv[_i0].survey = (struct survey_info *) malloc(_len_priv__i0__survey0*sizeof(struct survey_info));
          for(int _j0 = 0; _j0 < _len_priv__i0__survey0; _j0++) {
            priv[_i0].survey->time_tx = ((-2 * (next_i()%2)) + 1) * next_i();
        priv[_i0].survey->time_busy = ((-2 * (next_i()%2)) + 1) * next_i();
        priv[_i0].survey->time = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_priv__i0__curchan0 = 1;
          priv[_i0].curchan = (struct ieee80211_channel *) malloc(_len_priv__i0__curchan0*sizeof(struct ieee80211_channel));
          for(int _j0 = 0; _j0 < _len_priv__i0__curchan0; _j0++) {
            priv[_i0].curchan->hw_value = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          p54_reset_stats(priv);
          for(int _aux = 0; _aux < _len_priv0; _aux++) {
          free(priv[_aux].survey);
          }
          for(int _aux = 0; _aux < _len_priv0; _aux++) {
          free(priv[_aux].curchan);
          }
          free(priv);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
