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
typedef  struct TYPE_4__   TYPE_2__ ;
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
struct TYPE_4__ {TYPE_1__* rates; } ;
struct ieee80211_tx_info {int flags; TYPE_2__ status; } ;
struct ieee80211_hw {int max_report_rates; } ;
struct TYPE_3__ {int idx; scalar_t__ count; } ;

/* Variables and functions */
 int IEEE80211_TX_CTL_AMPDU ; 
 int IEEE80211_TX_MAX_RATES ; 
 int IEEE80211_TX_STAT_AMPDU ; 

__attribute__((used)) static int ieee80211_tx_get_rates(struct ieee80211_hw *hw,
				  struct ieee80211_tx_info *info,
				  int *retry_count)
{
	int rates_idx = -1;
	int count = -1;
	int i;

	for (i = 0; i < IEEE80211_TX_MAX_RATES; i++) {
		if ((info->flags & IEEE80211_TX_CTL_AMPDU) &&
		    !(info->flags & IEEE80211_TX_STAT_AMPDU)) {
			/* just the first aggr frame carry status info */
			info->status.rates[i].idx = -1;
			info->status.rates[i].count = 0;
			break;
		} else if (info->status.rates[i].idx < 0) {
			break;
		} else if (i >= hw->max_report_rates) {
			/* the HW cannot have attempted that rate */
			info->status.rates[i].idx = -1;
			info->status.rates[i].count = 0;
			break;
		}

		count += info->status.rates[i].count;
	}
	rates_idx = i - 1;

	if (count < 0)
		count = 0;

	*retry_count = count;
	return rates_idx;
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
          int _len_hw0 = 1;
          struct ieee80211_hw * hw = (struct ieee80211_hw *) malloc(_len_hw0*sizeof(struct ieee80211_hw));
          for(int _i0 = 0; _i0 < _len_hw0; _i0++) {
            hw[_i0].max_report_rates = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_info0 = 1;
          struct ieee80211_tx_info * info = (struct ieee80211_tx_info *) malloc(_len_info0*sizeof(struct ieee80211_tx_info));
          for(int _i0 = 0; _i0 < _len_info0; _i0++) {
            info[_i0].flags = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_info__i0__status_rates0 = 1;
          info[_i0].status.rates = (struct TYPE_3__ *) malloc(_len_info__i0__status_rates0*sizeof(struct TYPE_3__));
          for(int _j0 = 0; _j0 < _len_info__i0__status_rates0; _j0++) {
            info[_i0].status.rates->idx = ((-2 * (next_i()%2)) + 1) * next_i();
        info[_i0].status.rates->count = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_retry_count0 = 1;
          int * retry_count = (int *) malloc(_len_retry_count0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_retry_count0; _i0++) {
            retry_count[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = ieee80211_tx_get_rates(hw,info,retry_count);
          printf("%d\n", benchRet); 
          free(hw);
          free(info);
          free(retry_count);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_hw0 = 65025;
          struct ieee80211_hw * hw = (struct ieee80211_hw *) malloc(_len_hw0*sizeof(struct ieee80211_hw));
          for(int _i0 = 0; _i0 < _len_hw0; _i0++) {
            hw[_i0].max_report_rates = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_info0 = 65025;
          struct ieee80211_tx_info * info = (struct ieee80211_tx_info *) malloc(_len_info0*sizeof(struct ieee80211_tx_info));
          for(int _i0 = 0; _i0 < _len_info0; _i0++) {
            info[_i0].flags = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_info__i0__status_rates0 = 1;
          info[_i0].status.rates = (struct TYPE_3__ *) malloc(_len_info__i0__status_rates0*sizeof(struct TYPE_3__));
          for(int _j0 = 0; _j0 < _len_info__i0__status_rates0; _j0++) {
            info[_i0].status.rates->idx = ((-2 * (next_i()%2)) + 1) * next_i();
        info[_i0].status.rates->count = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_retry_count0 = 65025;
          int * retry_count = (int *) malloc(_len_retry_count0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_retry_count0; _i0++) {
            retry_count[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = ieee80211_tx_get_rates(hw,info,retry_count);
          printf("%d\n", benchRet); 
          free(hw);
          free(info);
          free(retry_count);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_hw0 = 100;
          struct ieee80211_hw * hw = (struct ieee80211_hw *) malloc(_len_hw0*sizeof(struct ieee80211_hw));
          for(int _i0 = 0; _i0 < _len_hw0; _i0++) {
            hw[_i0].max_report_rates = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_info0 = 100;
          struct ieee80211_tx_info * info = (struct ieee80211_tx_info *) malloc(_len_info0*sizeof(struct ieee80211_tx_info));
          for(int _i0 = 0; _i0 < _len_info0; _i0++) {
            info[_i0].flags = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_info__i0__status_rates0 = 1;
          info[_i0].status.rates = (struct TYPE_3__ *) malloc(_len_info__i0__status_rates0*sizeof(struct TYPE_3__));
          for(int _j0 = 0; _j0 < _len_info__i0__status_rates0; _j0++) {
            info[_i0].status.rates->idx = ((-2 * (next_i()%2)) + 1) * next_i();
        info[_i0].status.rates->count = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_retry_count0 = 100;
          int * retry_count = (int *) malloc(_len_retry_count0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_retry_count0; _i0++) {
            retry_count[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = ieee80211_tx_get_rates(hw,info,retry_count);
          printf("%d\n", benchRet); 
          free(hw);
          free(info);
          free(retry_count);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
