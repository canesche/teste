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
struct ieee80211_txq {scalar_t__ drv_priv; } ;
struct ieee80211_hw {struct ath10k* priv; } ;
struct ath10k_txq {scalar_t__ num_fw_queued; scalar_t__ num_push_allowed; } ;
struct TYPE_3__ {scalar_t__ mode; scalar_t__ num_push_allowed; } ;
struct TYPE_4__ {scalar_t__ num_pending_tx; TYPE_1__ tx_q_state; } ;
struct ath10k {TYPE_2__ htt; } ;

/* Variables and functions */
 scalar_t__ HTT_TX_MODE_SWITCH_PUSH ; 

__attribute__((used)) static bool ath10k_mac_tx_can_push(struct ieee80211_hw *hw,
				   struct ieee80211_txq *txq)
{
	struct ath10k *ar = hw->priv;
	struct ath10k_txq *artxq = (void *)txq->drv_priv;

	/* No need to get locks */

	if (ar->htt.tx_q_state.mode == HTT_TX_MODE_SWITCH_PUSH)
		return true;

	if (ar->htt.num_pending_tx < ar->htt.tx_q_state.num_push_allowed)
		return true;

	if (artxq->num_fw_queued < artxq->num_push_allowed)
		return true;

	return false;
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
              int _len_hw__i0__priv0 = 1;
          hw[_i0].priv = (struct ath10k *) malloc(_len_hw__i0__priv0*sizeof(struct ath10k));
          for(int _j0 = 0; _j0 < _len_hw__i0__priv0; _j0++) {
            hw[_i0].priv->htt.num_pending_tx = ((-2 * (next_i()%2)) + 1) * next_i();
        hw[_i0].priv->htt.tx_q_state.mode = ((-2 * (next_i()%2)) + 1) * next_i();
        hw[_i0].priv->htt.tx_q_state.num_push_allowed = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_txq0 = 1;
          struct ieee80211_txq * txq = (struct ieee80211_txq *) malloc(_len_txq0*sizeof(struct ieee80211_txq));
          for(int _i0 = 0; _i0 < _len_txq0; _i0++) {
            txq[_i0].drv_priv = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = ath10k_mac_tx_can_push(hw,txq);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_hw0; _aux++) {
          free(hw[_aux].priv);
          }
          free(hw);
          free(txq);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_hw0 = 65025;
          struct ieee80211_hw * hw = (struct ieee80211_hw *) malloc(_len_hw0*sizeof(struct ieee80211_hw));
          for(int _i0 = 0; _i0 < _len_hw0; _i0++) {
              int _len_hw__i0__priv0 = 1;
          hw[_i0].priv = (struct ath10k *) malloc(_len_hw__i0__priv0*sizeof(struct ath10k));
          for(int _j0 = 0; _j0 < _len_hw__i0__priv0; _j0++) {
            hw[_i0].priv->htt.num_pending_tx = ((-2 * (next_i()%2)) + 1) * next_i();
        hw[_i0].priv->htt.tx_q_state.mode = ((-2 * (next_i()%2)) + 1) * next_i();
        hw[_i0].priv->htt.tx_q_state.num_push_allowed = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_txq0 = 65025;
          struct ieee80211_txq * txq = (struct ieee80211_txq *) malloc(_len_txq0*sizeof(struct ieee80211_txq));
          for(int _i0 = 0; _i0 < _len_txq0; _i0++) {
            txq[_i0].drv_priv = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = ath10k_mac_tx_can_push(hw,txq);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_hw0; _aux++) {
          free(hw[_aux].priv);
          }
          free(hw);
          free(txq);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_hw0 = 100;
          struct ieee80211_hw * hw = (struct ieee80211_hw *) malloc(_len_hw0*sizeof(struct ieee80211_hw));
          for(int _i0 = 0; _i0 < _len_hw0; _i0++) {
              int _len_hw__i0__priv0 = 1;
          hw[_i0].priv = (struct ath10k *) malloc(_len_hw__i0__priv0*sizeof(struct ath10k));
          for(int _j0 = 0; _j0 < _len_hw__i0__priv0; _j0++) {
            hw[_i0].priv->htt.num_pending_tx = ((-2 * (next_i()%2)) + 1) * next_i();
        hw[_i0].priv->htt.tx_q_state.mode = ((-2 * (next_i()%2)) + 1) * next_i();
        hw[_i0].priv->htt.tx_q_state.num_push_allowed = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_txq0 = 100;
          struct ieee80211_txq * txq = (struct ieee80211_txq *) malloc(_len_txq0*sizeof(struct ieee80211_txq));
          for(int _i0 = 0; _i0 < _len_txq0; _i0++) {
            txq[_i0].drv_priv = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = ath10k_mac_tx_can_push(hw,txq);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_hw0; _aux++) {
          free(hw[_aux].priv);
          }
          free(hw);
          free(txq);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
