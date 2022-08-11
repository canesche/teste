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
typedef  void* u8 ;
struct ath_btcoex_hw {scalar_t__ scheme; void* btpriority_gpio; void* wlanactive_gpio; void* btactive_gpio; } ;
struct ath_hw {TYPE_1__* dev; struct ath_btcoex_hw btcoex_hw; } ;
struct ath9k_platform_data {void* bt_priority_pin; void* wlan_active_pin; void* bt_active_pin; } ;
struct TYPE_2__ {struct ath9k_platform_data* platform_data; } ;

/* Variables and functions */
 scalar_t__ ATH_BTCOEX_CFG_2WIRE ; 
 scalar_t__ ATH_BTCOEX_CFG_3WIRE ; 

__attribute__((used)) static void ath9k_hw_btcoex_pin_init(struct ath_hw *ah, u8 wlanactive_gpio,
				     u8 btactive_gpio, u8 btpriority_gpio)
{
	struct ath_btcoex_hw *btcoex_hw = &ah->btcoex_hw;
	struct ath9k_platform_data *pdata = ah->dev->platform_data;

	if (btcoex_hw->scheme != ATH_BTCOEX_CFG_2WIRE &&
	    btcoex_hw->scheme != ATH_BTCOEX_CFG_3WIRE)
		return;

	/* bt priority GPIO will be ignored by 2 wire scheme */
	if (pdata && (pdata->bt_active_pin || pdata->bt_priority_pin ||
		      pdata->wlan_active_pin)) {
		btcoex_hw->btactive_gpio = pdata->bt_active_pin;
		btcoex_hw->wlanactive_gpio = pdata->wlan_active_pin;
		btcoex_hw->btpriority_gpio = pdata->bt_priority_pin;
	} else {
		btcoex_hw->btactive_gpio = btactive_gpio;
		btcoex_hw->wlanactive_gpio = wlanactive_gpio;
		btcoex_hw->btpriority_gpio = btpriority_gpio;
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
          int _len_ah0 = 1;
          struct ath_hw * ah = (struct ath_hw *) malloc(_len_ah0*sizeof(struct ath_hw));
          for(int _i0 = 0; _i0 < _len_ah0; _i0++) {
              int _len_ah__i0__dev0 = 1;
          ah[_i0].dev = (struct TYPE_2__ *) malloc(_len_ah__i0__dev0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_ah__i0__dev0; _j0++) {
              int _len_ah__i0__dev_platform_data0 = 1;
          ah[_i0].dev->platform_data = (struct ath9k_platform_data *) malloc(_len_ah__i0__dev_platform_data0*sizeof(struct ath9k_platform_data));
          for(int _j0 = 0; _j0 < _len_ah__i0__dev_platform_data0; _j0++) {
              }
          }
        ah[_i0].btcoex_hw.scheme = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          void * wlanactive_gpio;
          void * btactive_gpio;
          void * btpriority_gpio;
          ath9k_hw_btcoex_pin_init(ah,wlanactive_gpio,btactive_gpio,btpriority_gpio);
          for(int _aux = 0; _aux < _len_ah0; _aux++) {
          free(ah[_aux].dev);
          }
          free(ah);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_ah0 = 65025;
          struct ath_hw * ah = (struct ath_hw *) malloc(_len_ah0*sizeof(struct ath_hw));
          for(int _i0 = 0; _i0 < _len_ah0; _i0++) {
              int _len_ah__i0__dev0 = 1;
          ah[_i0].dev = (struct TYPE_2__ *) malloc(_len_ah__i0__dev0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_ah__i0__dev0; _j0++) {
              int _len_ah__i0__dev_platform_data0 = 1;
          ah[_i0].dev->platform_data = (struct ath9k_platform_data *) malloc(_len_ah__i0__dev_platform_data0*sizeof(struct ath9k_platform_data));
          for(int _j0 = 0; _j0 < _len_ah__i0__dev_platform_data0; _j0++) {
              }
          }
        ah[_i0].btcoex_hw.scheme = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          void * wlanactive_gpio;
          void * btactive_gpio;
          void * btpriority_gpio;
          ath9k_hw_btcoex_pin_init(ah,wlanactive_gpio,btactive_gpio,btpriority_gpio);
          for(int _aux = 0; _aux < _len_ah0; _aux++) {
          free(ah[_aux].dev);
          }
          free(ah);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_ah0 = 100;
          struct ath_hw * ah = (struct ath_hw *) malloc(_len_ah0*sizeof(struct ath_hw));
          for(int _i0 = 0; _i0 < _len_ah0; _i0++) {
              int _len_ah__i0__dev0 = 1;
          ah[_i0].dev = (struct TYPE_2__ *) malloc(_len_ah__i0__dev0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_ah__i0__dev0; _j0++) {
              int _len_ah__i0__dev_platform_data0 = 1;
          ah[_i0].dev->platform_data = (struct ath9k_platform_data *) malloc(_len_ah__i0__dev_platform_data0*sizeof(struct ath9k_platform_data));
          for(int _j0 = 0; _j0 < _len_ah__i0__dev_platform_data0; _j0++) {
              }
          }
        ah[_i0].btcoex_hw.scheme = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          void * wlanactive_gpio;
          void * btactive_gpio;
          void * btpriority_gpio;
          ath9k_hw_btcoex_pin_init(ah,wlanactive_gpio,btactive_gpio,btpriority_gpio);
          for(int _aux = 0; _aux < _len_ah0; _aux++) {
          free(ah[_aux].dev);
          }
          free(ah);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
