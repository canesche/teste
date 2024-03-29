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
typedef  int /*<<< orphan*/  u8 ;
struct ieee80211_sta {int bandwidth; } ;

/* Variables and functions */
#define  IEEE80211_STA_RX_BW_160 131 
#define  IEEE80211_STA_RX_BW_20 130 
#define  IEEE80211_STA_RX_BW_40 129 
#define  IEEE80211_STA_RX_BW_80 128 
 int /*<<< orphan*/  IWL_TLC_MNG_CH_WIDTH_160MHZ ; 
 int /*<<< orphan*/  IWL_TLC_MNG_CH_WIDTH_20MHZ ; 
 int /*<<< orphan*/  IWL_TLC_MNG_CH_WIDTH_40MHZ ; 
 int /*<<< orphan*/  IWL_TLC_MNG_CH_WIDTH_80MHZ ; 

__attribute__((used)) static u8 rs_fw_bw_from_sta_bw(struct ieee80211_sta *sta)
{
	switch (sta->bandwidth) {
	case IEEE80211_STA_RX_BW_160:
		return IWL_TLC_MNG_CH_WIDTH_160MHZ;
	case IEEE80211_STA_RX_BW_80:
		return IWL_TLC_MNG_CH_WIDTH_80MHZ;
	case IEEE80211_STA_RX_BW_40:
		return IWL_TLC_MNG_CH_WIDTH_40MHZ;
	case IEEE80211_STA_RX_BW_20:
	default:
		return IWL_TLC_MNG_CH_WIDTH_20MHZ;
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
          int _len_sta0 = 1;
          struct ieee80211_sta * sta = (struct ieee80211_sta *) malloc(_len_sta0*sizeof(struct ieee80211_sta));
          for(int _i0 = 0; _i0 < _len_sta0; _i0++) {
            sta[_i0].bandwidth = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = rs_fw_bw_from_sta_bw(sta);
          printf("%d\n", benchRet); 
          free(sta);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_sta0 = 65025;
          struct ieee80211_sta * sta = (struct ieee80211_sta *) malloc(_len_sta0*sizeof(struct ieee80211_sta));
          for(int _i0 = 0; _i0 < _len_sta0; _i0++) {
            sta[_i0].bandwidth = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = rs_fw_bw_from_sta_bw(sta);
          printf("%d\n", benchRet); 
          free(sta);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_sta0 = 100;
          struct ieee80211_sta * sta = (struct ieee80211_sta *) malloc(_len_sta0*sizeof(struct ieee80211_sta));
          for(int _i0 = 0; _i0 < _len_sta0; _i0++) {
            sta[_i0].bandwidth = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = rs_fw_bw_from_sta_bw(sta);
          printf("%d\n", benchRet); 
          free(sta);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
