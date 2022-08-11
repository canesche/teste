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
struct iwl_priv {int dummy; } ;
struct TYPE_4__ {TYPE_1__* rates; } ;
struct ieee80211_tx_info {int flags; TYPE_2__ control; } ;
typedef  int /*<<< orphan*/  __le32 ;
typedef  int /*<<< orphan*/  __le16 ;
struct TYPE_3__ {int flags; } ;

/* Variables and functions */
 int IEEE80211_TX_CTL_AMPDU ; 
 int IEEE80211_TX_RC_USE_CTS_PROTECT ; 
 int IEEE80211_TX_RC_USE_RTS_CTS ; 
 int /*<<< orphan*/  TX_CMD_FLG_PROT_REQUIRE_MSK ; 

__attribute__((used)) static void iwlagn_tx_cmd_protection(struct iwl_priv *priv,
				     struct ieee80211_tx_info *info,
				     __le16 fc, __le32 *tx_flags)
{
	if (info->control.rates[0].flags & IEEE80211_TX_RC_USE_RTS_CTS ||
	    info->control.rates[0].flags & IEEE80211_TX_RC_USE_CTS_PROTECT ||
	    info->flags & IEEE80211_TX_CTL_AMPDU)
		*tx_flags |= TX_CMD_FLG_PROT_REQUIRE_MSK;
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
          int fc = 100;
          int _len_priv0 = 1;
          struct iwl_priv * priv = (struct iwl_priv *) malloc(_len_priv0*sizeof(struct iwl_priv));
          for(int _i0 = 0; _i0 < _len_priv0; _i0++) {
            priv[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_info0 = 1;
          struct ieee80211_tx_info * info = (struct ieee80211_tx_info *) malloc(_len_info0*sizeof(struct ieee80211_tx_info));
          for(int _i0 = 0; _i0 < _len_info0; _i0++) {
            info[_i0].flags = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_info__i0__control_rates0 = 1;
          info[_i0].control.rates = (struct TYPE_3__ *) malloc(_len_info__i0__control_rates0*sizeof(struct TYPE_3__));
          for(int _j0 = 0; _j0 < _len_info__i0__control_rates0; _j0++) {
            info[_i0].control.rates->flags = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_tx_flags0 = 1;
          int * tx_flags = (int *) malloc(_len_tx_flags0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_tx_flags0; _i0++) {
            tx_flags[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          iwlagn_tx_cmd_protection(priv,info,fc,tx_flags);
          free(priv);
          free(info);
          free(tx_flags);
        
        break;
    }
    // big-arr
    case 1:
    {
          int fc = 255;
          int _len_priv0 = 65025;
          struct iwl_priv * priv = (struct iwl_priv *) malloc(_len_priv0*sizeof(struct iwl_priv));
          for(int _i0 = 0; _i0 < _len_priv0; _i0++) {
            priv[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_info0 = 65025;
          struct ieee80211_tx_info * info = (struct ieee80211_tx_info *) malloc(_len_info0*sizeof(struct ieee80211_tx_info));
          for(int _i0 = 0; _i0 < _len_info0; _i0++) {
            info[_i0].flags = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_info__i0__control_rates0 = 1;
          info[_i0].control.rates = (struct TYPE_3__ *) malloc(_len_info__i0__control_rates0*sizeof(struct TYPE_3__));
          for(int _j0 = 0; _j0 < _len_info__i0__control_rates0; _j0++) {
            info[_i0].control.rates->flags = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_tx_flags0 = 65025;
          int * tx_flags = (int *) malloc(_len_tx_flags0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_tx_flags0; _i0++) {
            tx_flags[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          iwlagn_tx_cmd_protection(priv,info,fc,tx_flags);
          free(priv);
          free(info);
          free(tx_flags);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int fc = 10;
          int _len_priv0 = 100;
          struct iwl_priv * priv = (struct iwl_priv *) malloc(_len_priv0*sizeof(struct iwl_priv));
          for(int _i0 = 0; _i0 < _len_priv0; _i0++) {
            priv[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_info0 = 100;
          struct ieee80211_tx_info * info = (struct ieee80211_tx_info *) malloc(_len_info0*sizeof(struct ieee80211_tx_info));
          for(int _i0 = 0; _i0 < _len_info0; _i0++) {
            info[_i0].flags = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_info__i0__control_rates0 = 1;
          info[_i0].control.rates = (struct TYPE_3__ *) malloc(_len_info__i0__control_rates0*sizeof(struct TYPE_3__));
          for(int _j0 = 0; _j0 < _len_info__i0__control_rates0; _j0++) {
            info[_i0].control.rates->flags = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_tx_flags0 = 100;
          int * tx_flags = (int *) malloc(_len_tx_flags0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_tx_flags0; _i0++) {
            tx_flags[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          iwlagn_tx_cmd_protection(priv,info,fc,tx_flags);
          free(priv);
          free(info);
          free(tx_flags);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
