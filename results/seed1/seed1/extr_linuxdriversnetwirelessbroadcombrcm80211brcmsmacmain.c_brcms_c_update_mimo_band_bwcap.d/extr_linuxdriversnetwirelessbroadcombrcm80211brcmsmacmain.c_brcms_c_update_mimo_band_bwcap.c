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
typedef  size_t uint ;
typedef  scalar_t__ u8 ;
struct brcms_c_info {struct brcms_band** bandstate; TYPE_1__* pub; } ;
struct brcms_band {scalar_t__ bandtype; int mimo_cap_40; } ;
struct TYPE_2__ {size_t _nbands; } ;

/* Variables and functions */
 scalar_t__ BRCMS_N_BW_20IN2G_40IN5G ; 
 scalar_t__ BRCMS_N_BW_40ALL ; 
 scalar_t__ BRCM_BAND_5G ; 

__attribute__((used)) static void brcms_c_update_mimo_band_bwcap(struct brcms_c_info *wlc, u8 bwcap)
{
	uint i;
	struct brcms_band *band;

	for (i = 0; i < wlc->pub->_nbands; i++) {
		band = wlc->bandstate[i];
		if (band->bandtype == BRCM_BAND_5G) {
			if ((bwcap == BRCMS_N_BW_40ALL)
			    || (bwcap == BRCMS_N_BW_20IN2G_40IN5G))
				band->mimo_cap_40 = true;
			else
				band->mimo_cap_40 = false;
		} else {
			if (bwcap == BRCMS_N_BW_40ALL)
				band->mimo_cap_40 = true;
			else
				band->mimo_cap_40 = false;
		}
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
          long bwcap = 100;
          int _len_wlc0 = 1;
          struct brcms_c_info * wlc = (struct brcms_c_info *) malloc(_len_wlc0*sizeof(struct brcms_c_info));
          for(int _i0 = 0; _i0 < _len_wlc0; _i0++) {
              int _len_wlc__i0__bandstate0 = 1;
          wlc[_i0].bandstate = (struct brcms_band **) malloc(_len_wlc__i0__bandstate0*sizeof(struct brcms_band *));
          for(int _j0 = 0; _j0 < _len_wlc__i0__bandstate0; _j0++) {
            int _len_wlc__i0__bandstate1 = 1;
            wlc[_i0].bandstate[_j0] = (struct brcms_band *) malloc(_len_wlc__i0__bandstate1*sizeof(struct brcms_band));
            for(int _j1 = 0; _j1 < _len_wlc__i0__bandstate1; _j1++) {
              wlc[_i0].bandstate[_j0]->bandtype = ((-2 * (next_i()%2)) + 1) * next_i();
        wlc[_i0].bandstate[_j0]->mimo_cap_40 = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_wlc__i0__pub0 = 1;
          wlc[_i0].pub = (struct TYPE_2__ *) malloc(_len_wlc__i0__pub0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_wlc__i0__pub0; _j0++) {
            wlc[_i0].pub->_nbands = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          brcms_c_update_mimo_band_bwcap(wlc,bwcap);
          for(int _aux = 0; _aux < _len_wlc0; _aux++) {
          free(*(wlc[_aux].bandstate));
        free(wlc[_aux].bandstate);
          }
          for(int _aux = 0; _aux < _len_wlc0; _aux++) {
          free(wlc[_aux].pub);
          }
          free(wlc);
        
        break;
    }
    // big-arr
    case 1:
    {
          long bwcap = 255;
          int _len_wlc0 = 65025;
          struct brcms_c_info * wlc = (struct brcms_c_info *) malloc(_len_wlc0*sizeof(struct brcms_c_info));
          for(int _i0 = 0; _i0 < _len_wlc0; _i0++) {
              int _len_wlc__i0__bandstate0 = 1;
          wlc[_i0].bandstate = (struct brcms_band **) malloc(_len_wlc__i0__bandstate0*sizeof(struct brcms_band *));
          for(int _j0 = 0; _j0 < _len_wlc__i0__bandstate0; _j0++) {
            int _len_wlc__i0__bandstate1 = 1;
            wlc[_i0].bandstate[_j0] = (struct brcms_band *) malloc(_len_wlc__i0__bandstate1*sizeof(struct brcms_band));
            for(int _j1 = 0; _j1 < _len_wlc__i0__bandstate1; _j1++) {
              wlc[_i0].bandstate[_j0]->bandtype = ((-2 * (next_i()%2)) + 1) * next_i();
        wlc[_i0].bandstate[_j0]->mimo_cap_40 = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_wlc__i0__pub0 = 1;
          wlc[_i0].pub = (struct TYPE_2__ *) malloc(_len_wlc__i0__pub0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_wlc__i0__pub0; _j0++) {
            wlc[_i0].pub->_nbands = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          brcms_c_update_mimo_band_bwcap(wlc,bwcap);
          for(int _aux = 0; _aux < _len_wlc0; _aux++) {
          free(*(wlc[_aux].bandstate));
        free(wlc[_aux].bandstate);
          }
          for(int _aux = 0; _aux < _len_wlc0; _aux++) {
          free(wlc[_aux].pub);
          }
          free(wlc);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          long bwcap = 10;
          int _len_wlc0 = 100;
          struct brcms_c_info * wlc = (struct brcms_c_info *) malloc(_len_wlc0*sizeof(struct brcms_c_info));
          for(int _i0 = 0; _i0 < _len_wlc0; _i0++) {
              int _len_wlc__i0__bandstate0 = 1;
          wlc[_i0].bandstate = (struct brcms_band **) malloc(_len_wlc__i0__bandstate0*sizeof(struct brcms_band *));
          for(int _j0 = 0; _j0 < _len_wlc__i0__bandstate0; _j0++) {
            int _len_wlc__i0__bandstate1 = 1;
            wlc[_i0].bandstate[_j0] = (struct brcms_band *) malloc(_len_wlc__i0__bandstate1*sizeof(struct brcms_band));
            for(int _j1 = 0; _j1 < _len_wlc__i0__bandstate1; _j1++) {
              wlc[_i0].bandstate[_j0]->bandtype = ((-2 * (next_i()%2)) + 1) * next_i();
        wlc[_i0].bandstate[_j0]->mimo_cap_40 = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_wlc__i0__pub0 = 1;
          wlc[_i0].pub = (struct TYPE_2__ *) malloc(_len_wlc__i0__pub0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_wlc__i0__pub0; _j0++) {
            wlc[_i0].pub->_nbands = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          brcms_c_update_mimo_band_bwcap(wlc,bwcap);
          for(int _aux = 0; _aux < _len_wlc0; _aux++) {
          free(*(wlc[_aux].bandstate));
        free(wlc[_aux].bandstate);
          }
          for(int _aux = 0; _aux < _len_wlc0; _aux++) {
          free(wlc[_aux].pub);
          }
          free(wlc);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
