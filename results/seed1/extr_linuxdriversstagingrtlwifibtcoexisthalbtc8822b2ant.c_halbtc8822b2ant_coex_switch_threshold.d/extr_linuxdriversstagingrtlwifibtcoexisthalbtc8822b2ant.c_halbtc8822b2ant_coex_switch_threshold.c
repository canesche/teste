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
typedef  scalar_t__ u8 ;
struct btc_coexist {int dummy; } ;
typedef  scalar_t__ s8 ;
struct TYPE_2__ {int /*<<< orphan*/  bt_coex_thres2; int /*<<< orphan*/  bt_coex_thres; int /*<<< orphan*/  wifi_coex_thres2; int /*<<< orphan*/  wifi_coex_thres; } ;

/* Variables and functions */
 scalar_t__ BT_8822B_2ANT_BT_MAX_TX_POWER ; 
 int /*<<< orphan*/  BT_8822B_2ANT_BT_RSSI_COEXSWITCH_THRES1 ; 
 int /*<<< orphan*/  BT_8822B_2ANT_BT_RSSI_COEXSWITCH_THRES2 ; 
 scalar_t__ BT_8822B_2ANT_WIFI_MAX_TX_POWER ; 
 int /*<<< orphan*/  BT_8822B_2ANT_WIFI_RSSI_COEXSWITCH_THRES1 ; 
 int /*<<< orphan*/  BT_8822B_2ANT_WIFI_RSSI_COEXSWITCH_THRES2 ; 
 TYPE_1__* coex_sta ; 

__attribute__((used)) static void halbtc8822b2ant_coex_switch_threshold(struct btc_coexist *btcoexist,
						  u8 isolation_measuared)
{
	s8 interference_wl_tx = 0, interference_bt_tx = 0;

	interference_wl_tx =
		BT_8822B_2ANT_WIFI_MAX_TX_POWER - isolation_measuared;
	interference_bt_tx =
		BT_8822B_2ANT_BT_MAX_TX_POWER - isolation_measuared;

	coex_sta->wifi_coex_thres = BT_8822B_2ANT_WIFI_RSSI_COEXSWITCH_THRES1;
	coex_sta->wifi_coex_thres2 = BT_8822B_2ANT_WIFI_RSSI_COEXSWITCH_THRES2;

	coex_sta->bt_coex_thres = BT_8822B_2ANT_BT_RSSI_COEXSWITCH_THRES1;
	coex_sta->bt_coex_thres2 = BT_8822B_2ANT_BT_RSSI_COEXSWITCH_THRES2;
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
          long isolation_measuared = 100;
          int _len_btcoexist0 = 1;
          struct btc_coexist * btcoexist = (struct btc_coexist *) malloc(_len_btcoexist0*sizeof(struct btc_coexist));
          for(int _i0 = 0; _i0 < _len_btcoexist0; _i0++) {
            btcoexist[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          halbtc8822b2ant_coex_switch_threshold(btcoexist,isolation_measuared);
          free(btcoexist);
        
        break;
    }
    // big-arr
    case 1:
    {
          long isolation_measuared = 255;
          int _len_btcoexist0 = 65025;
          struct btc_coexist * btcoexist = (struct btc_coexist *) malloc(_len_btcoexist0*sizeof(struct btc_coexist));
          for(int _i0 = 0; _i0 < _len_btcoexist0; _i0++) {
            btcoexist[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          halbtc8822b2ant_coex_switch_threshold(btcoexist,isolation_measuared);
          free(btcoexist);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          long isolation_measuared = 10;
          int _len_btcoexist0 = 100;
          struct btc_coexist * btcoexist = (struct btc_coexist *) malloc(_len_btcoexist0*sizeof(struct btc_coexist));
          for(int _i0 = 0; _i0 < _len_btcoexist0; _i0++) {
            btcoexist[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          halbtc8822b2ant_coex_switch_threshold(btcoexist,isolation_measuared);
          free(btcoexist);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
