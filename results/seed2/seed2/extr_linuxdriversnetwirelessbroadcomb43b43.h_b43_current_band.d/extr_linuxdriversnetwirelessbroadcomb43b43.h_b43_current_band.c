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
typedef  struct TYPE_8__   TYPE_4__ ;
typedef  struct TYPE_7__   TYPE_3__ ;
typedef  struct TYPE_6__   TYPE_2__ ;
typedef  struct TYPE_5__   TYPE_1__ ;

/* Type definitions */
struct b43_wl {TYPE_4__* hw; } ;
typedef  enum nl80211_band { ____Placeholder_nl80211_band } nl80211_band ;
struct TYPE_6__ {TYPE_1__* chan; } ;
struct TYPE_7__ {TYPE_2__ chandef; } ;
struct TYPE_8__ {TYPE_3__ conf; } ;
struct TYPE_5__ {int band; } ;

/* Variables and functions */

__attribute__((used)) static inline enum nl80211_band b43_current_band(struct b43_wl *wl)
{
	return wl->hw->conf.chandef.chan->band;
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
          int _len_wl0 = 1;
          struct b43_wl * wl = (struct b43_wl *) malloc(_len_wl0*sizeof(struct b43_wl));
          for(int _i0 = 0; _i0 < _len_wl0; _i0++) {
              int _len_wl__i0__hw0 = 1;
          wl[_i0].hw = (struct TYPE_8__ *) malloc(_len_wl__i0__hw0*sizeof(struct TYPE_8__));
          for(int _j0 = 0; _j0 < _len_wl__i0__hw0; _j0++) {
              int _len_wl__i0__hw_conf_chandef_chan0 = 1;
          wl[_i0].hw->conf.chandef.chan = (struct TYPE_5__ *) malloc(_len_wl__i0__hw_conf_chandef_chan0*sizeof(struct TYPE_5__));
          for(int _j0 = 0; _j0 < _len_wl__i0__hw_conf_chandef_chan0; _j0++) {
            wl[_i0].hw->conf.chandef.chan->band = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          enum nl80211_band benchRet = b43_current_band(wl);
          for(int _aux = 0; _aux < _len_wl0; _aux++) {
          free(wl[_aux].hw);
          }
          free(wl);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_wl0 = 65025;
          struct b43_wl * wl = (struct b43_wl *) malloc(_len_wl0*sizeof(struct b43_wl));
          for(int _i0 = 0; _i0 < _len_wl0; _i0++) {
              int _len_wl__i0__hw0 = 1;
          wl[_i0].hw = (struct TYPE_8__ *) malloc(_len_wl__i0__hw0*sizeof(struct TYPE_8__));
          for(int _j0 = 0; _j0 < _len_wl__i0__hw0; _j0++) {
              int _len_wl__i0__hw_conf_chandef_chan0 = 1;
          wl[_i0].hw->conf.chandef.chan = (struct TYPE_5__ *) malloc(_len_wl__i0__hw_conf_chandef_chan0*sizeof(struct TYPE_5__));
          for(int _j0 = 0; _j0 < _len_wl__i0__hw_conf_chandef_chan0; _j0++) {
            wl[_i0].hw->conf.chandef.chan->band = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          enum nl80211_band benchRet = b43_current_band(wl);
          for(int _aux = 0; _aux < _len_wl0; _aux++) {
          free(wl[_aux].hw);
          }
          free(wl);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_wl0 = 100;
          struct b43_wl * wl = (struct b43_wl *) malloc(_len_wl0*sizeof(struct b43_wl));
          for(int _i0 = 0; _i0 < _len_wl0; _i0++) {
              int _len_wl__i0__hw0 = 1;
          wl[_i0].hw = (struct TYPE_8__ *) malloc(_len_wl__i0__hw0*sizeof(struct TYPE_8__));
          for(int _j0 = 0; _j0 < _len_wl__i0__hw0; _j0++) {
              int _len_wl__i0__hw_conf_chandef_chan0 = 1;
          wl[_i0].hw->conf.chandef.chan = (struct TYPE_5__ *) malloc(_len_wl__i0__hw_conf_chandef_chan0*sizeof(struct TYPE_5__));
          for(int _j0 = 0; _j0 < _len_wl__i0__hw_conf_chandef_chan0; _j0++) {
            wl[_i0].hw->conf.chandef.chan->band = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          enum nl80211_band benchRet = b43_current_band(wl);
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
