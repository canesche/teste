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
struct TYPE_4__ {scalar_t__ bdHTInfoLen; int /*<<< orphan*/  bdHTInfoBuf; } ;
struct ieee80211_network {TYPE_1__ bssht; } ;
struct ieee80211_device {TYPE_2__* pHTInfo; } ;
struct TYPE_6__ {int /*<<< orphan*/  OptMode; } ;
struct TYPE_5__ {int /*<<< orphan*/  CurrentOpMode; scalar_t__ bCurrentHTSupport; } ;
typedef  TYPE_2__* PRT_HIGH_THROUGHPUT ;
typedef  TYPE_3__* PHT_INFORMATION_ELE ;

/* Variables and functions */

void HTUpdateSelfAndPeerSetting(struct ieee80211_device *ieee,	struct ieee80211_network *pNetwork)
{
	PRT_HIGH_THROUGHPUT	pHTInfo = ieee->pHTInfo;
//	PHT_CAPABILITY_ELE		pPeerHTCap = (PHT_CAPABILITY_ELE)pNetwork->bssht.bdHTCapBuf;
	PHT_INFORMATION_ELE		pPeerHTInfo = (PHT_INFORMATION_ELE)pNetwork->bssht.bdHTInfoBuf;

	if (pHTInfo->bCurrentHTSupport) {
		/*
		 * Config current operation mode.
		 */
		if (pNetwork->bssht.bdHTInfoLen != 0)
			pHTInfo->CurrentOpMode = pPeerHTInfo->OptMode;

		/*
		 * <TODO: Config according to OBSS non-HT STA present!!>
		 */
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
          int _len_ieee0 = 1;
          struct ieee80211_device * ieee = (struct ieee80211_device *) malloc(_len_ieee0*sizeof(struct ieee80211_device));
          for(int _i0 = 0; _i0 < _len_ieee0; _i0++) {
              int _len_ieee__i0__pHTInfo0 = 1;
          ieee[_i0].pHTInfo = (struct TYPE_5__ *) malloc(_len_ieee__i0__pHTInfo0*sizeof(struct TYPE_5__));
          for(int _j0 = 0; _j0 < _len_ieee__i0__pHTInfo0; _j0++) {
            ieee[_i0].pHTInfo->CurrentOpMode = ((-2 * (next_i()%2)) + 1) * next_i();
        ieee[_i0].pHTInfo->bCurrentHTSupport = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_pNetwork0 = 1;
          struct ieee80211_network * pNetwork = (struct ieee80211_network *) malloc(_len_pNetwork0*sizeof(struct ieee80211_network));
          for(int _i0 = 0; _i0 < _len_pNetwork0; _i0++) {
            pNetwork[_i0].bssht.bdHTInfoLen = ((-2 * (next_i()%2)) + 1) * next_i();
        pNetwork[_i0].bssht.bdHTInfoBuf = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          HTUpdateSelfAndPeerSetting(ieee,pNetwork);
          for(int _aux = 0; _aux < _len_ieee0; _aux++) {
          free(ieee[_aux].pHTInfo);
          }
          free(ieee);
          free(pNetwork);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_ieee0 = 65025;
          struct ieee80211_device * ieee = (struct ieee80211_device *) malloc(_len_ieee0*sizeof(struct ieee80211_device));
          for(int _i0 = 0; _i0 < _len_ieee0; _i0++) {
              int _len_ieee__i0__pHTInfo0 = 1;
          ieee[_i0].pHTInfo = (struct TYPE_5__ *) malloc(_len_ieee__i0__pHTInfo0*sizeof(struct TYPE_5__));
          for(int _j0 = 0; _j0 < _len_ieee__i0__pHTInfo0; _j0++) {
            ieee[_i0].pHTInfo->CurrentOpMode = ((-2 * (next_i()%2)) + 1) * next_i();
        ieee[_i0].pHTInfo->bCurrentHTSupport = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_pNetwork0 = 65025;
          struct ieee80211_network * pNetwork = (struct ieee80211_network *) malloc(_len_pNetwork0*sizeof(struct ieee80211_network));
          for(int _i0 = 0; _i0 < _len_pNetwork0; _i0++) {
            pNetwork[_i0].bssht.bdHTInfoLen = ((-2 * (next_i()%2)) + 1) * next_i();
        pNetwork[_i0].bssht.bdHTInfoBuf = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          HTUpdateSelfAndPeerSetting(ieee,pNetwork);
          for(int _aux = 0; _aux < _len_ieee0; _aux++) {
          free(ieee[_aux].pHTInfo);
          }
          free(ieee);
          free(pNetwork);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_ieee0 = 100;
          struct ieee80211_device * ieee = (struct ieee80211_device *) malloc(_len_ieee0*sizeof(struct ieee80211_device));
          for(int _i0 = 0; _i0 < _len_ieee0; _i0++) {
              int _len_ieee__i0__pHTInfo0 = 1;
          ieee[_i0].pHTInfo = (struct TYPE_5__ *) malloc(_len_ieee__i0__pHTInfo0*sizeof(struct TYPE_5__));
          for(int _j0 = 0; _j0 < _len_ieee__i0__pHTInfo0; _j0++) {
            ieee[_i0].pHTInfo->CurrentOpMode = ((-2 * (next_i()%2)) + 1) * next_i();
        ieee[_i0].pHTInfo->bCurrentHTSupport = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_pNetwork0 = 100;
          struct ieee80211_network * pNetwork = (struct ieee80211_network *) malloc(_len_pNetwork0*sizeof(struct ieee80211_network));
          for(int _i0 = 0; _i0 < _len_pNetwork0; _i0++) {
            pNetwork[_i0].bssht.bdHTInfoLen = ((-2 * (next_i()%2)) + 1) * next_i();
        pNetwork[_i0].bssht.bdHTInfoBuf = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          HTUpdateSelfAndPeerSetting(ieee,pNetwork);
          for(int _aux = 0; _aux < _len_ieee0; _aux++) {
          free(ieee[_aux].pHTInfo);
          }
          free(ieee);
          free(pNetwork);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
