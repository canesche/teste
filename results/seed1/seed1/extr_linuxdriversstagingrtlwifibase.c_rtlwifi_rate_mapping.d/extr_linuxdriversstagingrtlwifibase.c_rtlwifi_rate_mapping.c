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
typedef  int u8 ;
struct TYPE_5__ {TYPE_1__* chan; } ;
struct TYPE_6__ {TYPE_2__ chandef; } ;
struct ieee80211_hw {TYPE_3__ conf; } ;
struct TYPE_4__ {scalar_t__ band; } ;

/* Variables and functions */
#define  DESC_RATE11M 175 
#define  DESC_RATE12M 174 
#define  DESC_RATE18M 173 
#define  DESC_RATE1M 172 
#define  DESC_RATE24M 171 
#define  DESC_RATE2M 170 
#define  DESC_RATE36M 169 
#define  DESC_RATE48M 168 
#define  DESC_RATE54M 167 
#define  DESC_RATE5_5M 166 
#define  DESC_RATE6M 165 
#define  DESC_RATE9M 164 
#define  DESC_RATEMCS0 163 
#define  DESC_RATEMCS1 162 
#define  DESC_RATEMCS10 161 
#define  DESC_RATEMCS11 160 
#define  DESC_RATEMCS12 159 
#define  DESC_RATEMCS13 158 
#define  DESC_RATEMCS14 157 
#define  DESC_RATEMCS15 156 
#define  DESC_RATEMCS2 155 
#define  DESC_RATEMCS3 154 
#define  DESC_RATEMCS4 153 
#define  DESC_RATEMCS5 152 
#define  DESC_RATEMCS6 151 
#define  DESC_RATEMCS7 150 
#define  DESC_RATEMCS8 149 
#define  DESC_RATEMCS9 148 
#define  DESC_RATEVHT1SS_MCS0 147 
#define  DESC_RATEVHT1SS_MCS1 146 
#define  DESC_RATEVHT1SS_MCS2 145 
#define  DESC_RATEVHT1SS_MCS3 144 
#define  DESC_RATEVHT1SS_MCS4 143 
#define  DESC_RATEVHT1SS_MCS5 142 
#define  DESC_RATEVHT1SS_MCS6 141 
#define  DESC_RATEVHT1SS_MCS7 140 
#define  DESC_RATEVHT1SS_MCS8 139 
#define  DESC_RATEVHT1SS_MCS9 138 
#define  DESC_RATEVHT2SS_MCS0 137 
#define  DESC_RATEVHT2SS_MCS1 136 
#define  DESC_RATEVHT2SS_MCS2 135 
#define  DESC_RATEVHT2SS_MCS3 134 
#define  DESC_RATEVHT2SS_MCS4 133 
#define  DESC_RATEVHT2SS_MCS5 132 
#define  DESC_RATEVHT2SS_MCS6 131 
#define  DESC_RATEVHT2SS_MCS7 130 
#define  DESC_RATEVHT2SS_MCS8 129 
#define  DESC_RATEVHT2SS_MCS9 128 
 scalar_t__ NL80211_BAND_2GHZ ; 

int rtlwifi_rate_mapping(struct ieee80211_hw *hw, bool isht, bool isvht,
			 u8 desc_rate)
{
	int rate_idx;

	if (isvht) {
		switch (desc_rate) {
		case DESC_RATEVHT1SS_MCS0:
			rate_idx = 0;
			break;
		case DESC_RATEVHT1SS_MCS1:
			rate_idx = 1;
			break;
		case DESC_RATEVHT1SS_MCS2:
			rate_idx = 2;
			break;
		case DESC_RATEVHT1SS_MCS3:
			rate_idx = 3;
			break;
		case DESC_RATEVHT1SS_MCS4:
			rate_idx = 4;
			break;
		case DESC_RATEVHT1SS_MCS5:
			rate_idx = 5;
			break;
		case DESC_RATEVHT1SS_MCS6:
			rate_idx = 6;
			break;
		case DESC_RATEVHT1SS_MCS7:
			rate_idx = 7;
			break;
		case DESC_RATEVHT1SS_MCS8:
			rate_idx = 8;
			break;
		case DESC_RATEVHT1SS_MCS9:
			rate_idx = 9;
			break;
		case DESC_RATEVHT2SS_MCS0:
			rate_idx = 0;
			break;
		case DESC_RATEVHT2SS_MCS1:
			rate_idx = 1;
			break;
		case DESC_RATEVHT2SS_MCS2:
			rate_idx = 2;
			break;
		case DESC_RATEVHT2SS_MCS3:
			rate_idx = 3;
			break;
		case DESC_RATEVHT2SS_MCS4:
			rate_idx = 4;
			break;
		case DESC_RATEVHT2SS_MCS5:
			rate_idx = 5;
			break;
		case DESC_RATEVHT2SS_MCS6:
			rate_idx = 6;
			break;
		case DESC_RATEVHT2SS_MCS7:
			rate_idx = 7;
			break;
		case DESC_RATEVHT2SS_MCS8:
			rate_idx = 8;
			break;
		case DESC_RATEVHT2SS_MCS9:
			rate_idx = 9;
			break;
		default:
			rate_idx = 0;
			break;
		}
		return rate_idx;
	}
	if (!isht) {
		if (hw->conf.chandef.chan->band == NL80211_BAND_2GHZ) {
			switch (desc_rate) {
			case DESC_RATE1M:
				rate_idx = 0;
				break;
			case DESC_RATE2M:
				rate_idx = 1;
				break;
			case DESC_RATE5_5M:
				rate_idx = 2;
				break;
			case DESC_RATE11M:
				rate_idx = 3;
				break;
			case DESC_RATE6M:
				rate_idx = 4;
				break;
			case DESC_RATE9M:
				rate_idx = 5;
				break;
			case DESC_RATE12M:
				rate_idx = 6;
				break;
			case DESC_RATE18M:
				rate_idx = 7;
				break;
			case DESC_RATE24M:
				rate_idx = 8;
				break;
			case DESC_RATE36M:
				rate_idx = 9;
				break;
			case DESC_RATE48M:
				rate_idx = 10;
				break;
			case DESC_RATE54M:
				rate_idx = 11;
				break;
			default:
				rate_idx = 0;
				break;
			}
		} else {
			switch (desc_rate) {
			case DESC_RATE6M:
				rate_idx = 0;
				break;
			case DESC_RATE9M:
				rate_idx = 1;
				break;
			case DESC_RATE12M:
				rate_idx = 2;
				break;
			case DESC_RATE18M:
				rate_idx = 3;
				break;
			case DESC_RATE24M:
				rate_idx = 4;
				break;
			case DESC_RATE36M:
				rate_idx = 5;
				break;
			case DESC_RATE48M:
				rate_idx = 6;
				break;
			case DESC_RATE54M:
				rate_idx = 7;
				break;
			default:
				rate_idx = 0;
				break;
			}
		}
	} else {
		switch (desc_rate) {
		case DESC_RATEMCS0:
			rate_idx = 0;
			break;
		case DESC_RATEMCS1:
			rate_idx = 1;
			break;
		case DESC_RATEMCS2:
			rate_idx = 2;
			break;
		case DESC_RATEMCS3:
			rate_idx = 3;
			break;
		case DESC_RATEMCS4:
			rate_idx = 4;
			break;
		case DESC_RATEMCS5:
			rate_idx = 5;
			break;
		case DESC_RATEMCS6:
			rate_idx = 6;
			break;
		case DESC_RATEMCS7:
			rate_idx = 7;
			break;
		case DESC_RATEMCS8:
			rate_idx = 8;
			break;
		case DESC_RATEMCS9:
			rate_idx = 9;
			break;
		case DESC_RATEMCS10:
			rate_idx = 10;
			break;
		case DESC_RATEMCS11:
			rate_idx = 11;
			break;
		case DESC_RATEMCS12:
			rate_idx = 12;
			break;
		case DESC_RATEMCS13:
			rate_idx = 13;
			break;
		case DESC_RATEMCS14:
			rate_idx = 14;
			break;
		case DESC_RATEMCS15:
			rate_idx = 15;
			break;
		default:
			rate_idx = 0;
			break;
		}
	}
	return rate_idx;
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
          int isht = 100;
          int isvht = 100;
          int desc_rate = 100;
          int _len_hw0 = 1;
          struct ieee80211_hw * hw = (struct ieee80211_hw *) malloc(_len_hw0*sizeof(struct ieee80211_hw));
          for(int _i0 = 0; _i0 < _len_hw0; _i0++) {
              int _len_hw__i0__conf_chandef_chan0 = 1;
          hw[_i0].conf.chandef.chan = (struct TYPE_4__ *) malloc(_len_hw__i0__conf_chandef_chan0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_hw__i0__conf_chandef_chan0; _j0++) {
            hw[_i0].conf.chandef.chan->band = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = rtlwifi_rate_mapping(hw,isht,isvht,desc_rate);
          printf("%d\n", benchRet); 
          free(hw);
        
        break;
    }
    // big-arr
    case 1:
    {
          int isht = 255;
          int isvht = 255;
          int desc_rate = 255;
          int _len_hw0 = 65025;
          struct ieee80211_hw * hw = (struct ieee80211_hw *) malloc(_len_hw0*sizeof(struct ieee80211_hw));
          for(int _i0 = 0; _i0 < _len_hw0; _i0++) {
              int _len_hw__i0__conf_chandef_chan0 = 1;
          hw[_i0].conf.chandef.chan = (struct TYPE_4__ *) malloc(_len_hw__i0__conf_chandef_chan0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_hw__i0__conf_chandef_chan0; _j0++) {
            hw[_i0].conf.chandef.chan->band = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = rtlwifi_rate_mapping(hw,isht,isvht,desc_rate);
          printf("%d\n", benchRet); 
          free(hw);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int isht = 10;
          int isvht = 10;
          int desc_rate = 10;
          int _len_hw0 = 100;
          struct ieee80211_hw * hw = (struct ieee80211_hw *) malloc(_len_hw0*sizeof(struct ieee80211_hw));
          for(int _i0 = 0; _i0 < _len_hw0; _i0++) {
              int _len_hw__i0__conf_chandef_chan0 = 1;
          hw[_i0].conf.chandef.chan = (struct TYPE_4__ *) malloc(_len_hw__i0__conf_chandef_chan0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_hw__i0__conf_chandef_chan0; _j0++) {
            hw[_i0].conf.chandef.chan->band = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = rtlwifi_rate_mapping(hw,isht,isvht,desc_rate);
          printf("%d\n", benchRet); 
          free(hw);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
