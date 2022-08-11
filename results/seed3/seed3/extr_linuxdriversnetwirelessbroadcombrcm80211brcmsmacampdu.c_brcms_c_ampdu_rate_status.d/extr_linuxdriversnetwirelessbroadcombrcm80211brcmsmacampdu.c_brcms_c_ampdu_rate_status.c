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
typedef  int /*<<< orphan*/  u8 ;
struct tx_status {int dummy; } ;
struct ieee80211_tx_rate {int idx; scalar_t__ count; } ;
struct TYPE_2__ {struct ieee80211_tx_rate* rates; } ;
struct ieee80211_tx_info {TYPE_1__ status; } ;
struct brcms_c_info {int dummy; } ;

/* Variables and functions */
 int IEEE80211_TX_MAX_RATES ; 

__attribute__((used)) static void
brcms_c_ampdu_rate_status(struct brcms_c_info *wlc,
			  struct ieee80211_tx_info *tx_info,
			  struct tx_status *txs, u8 mcs)
{
	struct ieee80211_tx_rate *txrate = tx_info->status.rates;
	int i;

	/* clear the rest of the rates */
	for (i = 2; i < IEEE80211_TX_MAX_RATES; i++) {
		txrate[i].idx = -1;
		txrate[i].count = 0;
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
          int mcs = 100;
          int _len_wlc0 = 1;
          struct brcms_c_info * wlc = (struct brcms_c_info *) malloc(_len_wlc0*sizeof(struct brcms_c_info));
          for(int _i0 = 0; _i0 < _len_wlc0; _i0++) {
            wlc[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_tx_info0 = 1;
          struct ieee80211_tx_info * tx_info = (struct ieee80211_tx_info *) malloc(_len_tx_info0*sizeof(struct ieee80211_tx_info));
          for(int _i0 = 0; _i0 < _len_tx_info0; _i0++) {
              int _len_tx_info__i0__status_rates0 = 1;
          tx_info[_i0].status.rates = (struct ieee80211_tx_rate *) malloc(_len_tx_info__i0__status_rates0*sizeof(struct ieee80211_tx_rate));
          for(int _j0 = 0; _j0 < _len_tx_info__i0__status_rates0; _j0++) {
            tx_info[_i0].status.rates->idx = ((-2 * (next_i()%2)) + 1) * next_i();
        tx_info[_i0].status.rates->count = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_txs0 = 1;
          struct tx_status * txs = (struct tx_status *) malloc(_len_txs0*sizeof(struct tx_status));
          for(int _i0 = 0; _i0 < _len_txs0; _i0++) {
            txs[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          brcms_c_ampdu_rate_status(wlc,tx_info,txs,mcs);
          free(wlc);
          free(tx_info);
          free(txs);
        
        break;
    }
    // big-arr
    case 1:
    {
          int mcs = 255;
          int _len_wlc0 = 65025;
          struct brcms_c_info * wlc = (struct brcms_c_info *) malloc(_len_wlc0*sizeof(struct brcms_c_info));
          for(int _i0 = 0; _i0 < _len_wlc0; _i0++) {
            wlc[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_tx_info0 = 65025;
          struct ieee80211_tx_info * tx_info = (struct ieee80211_tx_info *) malloc(_len_tx_info0*sizeof(struct ieee80211_tx_info));
          for(int _i0 = 0; _i0 < _len_tx_info0; _i0++) {
              int _len_tx_info__i0__status_rates0 = 1;
          tx_info[_i0].status.rates = (struct ieee80211_tx_rate *) malloc(_len_tx_info__i0__status_rates0*sizeof(struct ieee80211_tx_rate));
          for(int _j0 = 0; _j0 < _len_tx_info__i0__status_rates0; _j0++) {
            tx_info[_i0].status.rates->idx = ((-2 * (next_i()%2)) + 1) * next_i();
        tx_info[_i0].status.rates->count = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_txs0 = 65025;
          struct tx_status * txs = (struct tx_status *) malloc(_len_txs0*sizeof(struct tx_status));
          for(int _i0 = 0; _i0 < _len_txs0; _i0++) {
            txs[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          brcms_c_ampdu_rate_status(wlc,tx_info,txs,mcs);
          free(wlc);
          free(tx_info);
          free(txs);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int mcs = 10;
          int _len_wlc0 = 100;
          struct brcms_c_info * wlc = (struct brcms_c_info *) malloc(_len_wlc0*sizeof(struct brcms_c_info));
          for(int _i0 = 0; _i0 < _len_wlc0; _i0++) {
            wlc[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_tx_info0 = 100;
          struct ieee80211_tx_info * tx_info = (struct ieee80211_tx_info *) malloc(_len_tx_info0*sizeof(struct ieee80211_tx_info));
          for(int _i0 = 0; _i0 < _len_tx_info0; _i0++) {
              int _len_tx_info__i0__status_rates0 = 1;
          tx_info[_i0].status.rates = (struct ieee80211_tx_rate *) malloc(_len_tx_info__i0__status_rates0*sizeof(struct ieee80211_tx_rate));
          for(int _j0 = 0; _j0 < _len_tx_info__i0__status_rates0; _j0++) {
            tx_info[_i0].status.rates->idx = ((-2 * (next_i()%2)) + 1) * next_i();
        tx_info[_i0].status.rates->count = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_txs0 = 100;
          struct tx_status * txs = (struct tx_status *) malloc(_len_txs0*sizeof(struct tx_status));
          for(int _i0 = 0; _i0 < _len_txs0; _i0++) {
            txs[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          brcms_c_ampdu_rate_status(wlc,tx_info,txs,mcs);
          free(wlc);
          free(tx_info);
          free(txs);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
