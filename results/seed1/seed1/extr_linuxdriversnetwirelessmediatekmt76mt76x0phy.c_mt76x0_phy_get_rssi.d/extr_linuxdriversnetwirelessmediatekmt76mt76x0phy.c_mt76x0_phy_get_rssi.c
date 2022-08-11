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
typedef  struct TYPE_8__   TYPE_4__ ;
typedef  struct TYPE_7__   TYPE_3__ ;
typedef  struct TYPE_6__   TYPE_2__ ;
typedef  struct TYPE_5__   TYPE_1__ ;

/* Type definitions */
struct mt76x0_rxwi {int* rssi; } ;
struct TYPE_8__ {TYPE_2__* chan; } ;
struct TYPE_7__ {TYPE_4__ chandef; } ;
struct mt76x0_dev {TYPE_1__* ee; TYPE_3__ mt76; } ;
typedef  int s8 ;
struct TYPE_6__ {scalar_t__ band; } ;
struct TYPE_5__ {int lna_gain_2ghz; int* rssi_offset_2ghz; int* lna_gain_5ghz; int* rssi_offset_5ghz; } ;

/* Variables and functions */
 scalar_t__ NL80211_BAND_2GHZ ; 

int mt76x0_phy_get_rssi(struct mt76x0_dev *dev, struct mt76x0_rxwi *rxwi)
{
	s8 lna_gain, rssi_offset;
	int val;

	if (dev->mt76.chandef.chan->band == NL80211_BAND_2GHZ) {
		lna_gain = dev->ee->lna_gain_2ghz;
		rssi_offset = dev->ee->rssi_offset_2ghz[0];
	} else {
		lna_gain = dev->ee->lna_gain_5ghz[0];
		rssi_offset = dev->ee->rssi_offset_5ghz[0];
	}

	val = rxwi->rssi[0] + rssi_offset - lna_gain;

	return val;
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
          int _len_dev0 = 1;
          struct mt76x0_dev * dev = (struct mt76x0_dev *) malloc(_len_dev0*sizeof(struct mt76x0_dev));
          for(int _i0 = 0; _i0 < _len_dev0; _i0++) {
              int _len_dev__i0__ee0 = 1;
          dev[_i0].ee = (struct TYPE_5__ *) malloc(_len_dev__i0__ee0*sizeof(struct TYPE_5__));
          for(int _j0 = 0; _j0 < _len_dev__i0__ee0; _j0++) {
            dev[_i0].ee->lna_gain_2ghz = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_dev__i0__ee_rssi_offset_2ghz0 = 1;
          dev[_i0].ee->rssi_offset_2ghz = (int *) malloc(_len_dev__i0__ee_rssi_offset_2ghz0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_dev__i0__ee_rssi_offset_2ghz0; _j0++) {
            dev[_i0].ee->rssi_offset_2ghz[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_dev__i0__ee_lna_gain_5ghz0 = 1;
          dev[_i0].ee->lna_gain_5ghz = (int *) malloc(_len_dev__i0__ee_lna_gain_5ghz0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_dev__i0__ee_lna_gain_5ghz0; _j0++) {
            dev[_i0].ee->lna_gain_5ghz[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_dev__i0__ee_rssi_offset_5ghz0 = 1;
          dev[_i0].ee->rssi_offset_5ghz = (int *) malloc(_len_dev__i0__ee_rssi_offset_5ghz0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_dev__i0__ee_rssi_offset_5ghz0; _j0++) {
            dev[_i0].ee->rssi_offset_5ghz[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_dev__i0__mt76_chandef_chan0 = 1;
          dev[_i0].mt76.chandef.chan = (struct TYPE_6__ *) malloc(_len_dev__i0__mt76_chandef_chan0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_dev__i0__mt76_chandef_chan0; _j0++) {
            dev[_i0].mt76.chandef.chan->band = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_rxwi0 = 1;
          struct mt76x0_rxwi * rxwi = (struct mt76x0_rxwi *) malloc(_len_rxwi0*sizeof(struct mt76x0_rxwi));
          for(int _i0 = 0; _i0 < _len_rxwi0; _i0++) {
              int _len_rxwi__i0__rssi0 = 1;
          rxwi[_i0].rssi = (int *) malloc(_len_rxwi__i0__rssi0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_rxwi__i0__rssi0; _j0++) {
            rxwi[_i0].rssi[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = mt76x0_phy_get_rssi(dev,rxwi);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_dev0; _aux++) {
          free(dev[_aux].ee);
          }
          free(dev);
          for(int _aux = 0; _aux < _len_rxwi0; _aux++) {
          free(rxwi[_aux].rssi);
          }
          free(rxwi);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_dev0 = 65025;
          struct mt76x0_dev * dev = (struct mt76x0_dev *) malloc(_len_dev0*sizeof(struct mt76x0_dev));
          for(int _i0 = 0; _i0 < _len_dev0; _i0++) {
              int _len_dev__i0__ee0 = 1;
          dev[_i0].ee = (struct TYPE_5__ *) malloc(_len_dev__i0__ee0*sizeof(struct TYPE_5__));
          for(int _j0 = 0; _j0 < _len_dev__i0__ee0; _j0++) {
            dev[_i0].ee->lna_gain_2ghz = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_dev__i0__ee_rssi_offset_2ghz0 = 1;
          dev[_i0].ee->rssi_offset_2ghz = (int *) malloc(_len_dev__i0__ee_rssi_offset_2ghz0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_dev__i0__ee_rssi_offset_2ghz0; _j0++) {
            dev[_i0].ee->rssi_offset_2ghz[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_dev__i0__ee_lna_gain_5ghz0 = 1;
          dev[_i0].ee->lna_gain_5ghz = (int *) malloc(_len_dev__i0__ee_lna_gain_5ghz0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_dev__i0__ee_lna_gain_5ghz0; _j0++) {
            dev[_i0].ee->lna_gain_5ghz[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_dev__i0__ee_rssi_offset_5ghz0 = 1;
          dev[_i0].ee->rssi_offset_5ghz = (int *) malloc(_len_dev__i0__ee_rssi_offset_5ghz0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_dev__i0__ee_rssi_offset_5ghz0; _j0++) {
            dev[_i0].ee->rssi_offset_5ghz[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_dev__i0__mt76_chandef_chan0 = 1;
          dev[_i0].mt76.chandef.chan = (struct TYPE_6__ *) malloc(_len_dev__i0__mt76_chandef_chan0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_dev__i0__mt76_chandef_chan0; _j0++) {
            dev[_i0].mt76.chandef.chan->band = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_rxwi0 = 65025;
          struct mt76x0_rxwi * rxwi = (struct mt76x0_rxwi *) malloc(_len_rxwi0*sizeof(struct mt76x0_rxwi));
          for(int _i0 = 0; _i0 < _len_rxwi0; _i0++) {
              int _len_rxwi__i0__rssi0 = 1;
          rxwi[_i0].rssi = (int *) malloc(_len_rxwi__i0__rssi0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_rxwi__i0__rssi0; _j0++) {
            rxwi[_i0].rssi[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = mt76x0_phy_get_rssi(dev,rxwi);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_dev0; _aux++) {
          free(dev[_aux].ee);
          }
          free(dev);
          for(int _aux = 0; _aux < _len_rxwi0; _aux++) {
          free(rxwi[_aux].rssi);
          }
          free(rxwi);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_dev0 = 100;
          struct mt76x0_dev * dev = (struct mt76x0_dev *) malloc(_len_dev0*sizeof(struct mt76x0_dev));
          for(int _i0 = 0; _i0 < _len_dev0; _i0++) {
              int _len_dev__i0__ee0 = 1;
          dev[_i0].ee = (struct TYPE_5__ *) malloc(_len_dev__i0__ee0*sizeof(struct TYPE_5__));
          for(int _j0 = 0; _j0 < _len_dev__i0__ee0; _j0++) {
            dev[_i0].ee->lna_gain_2ghz = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_dev__i0__ee_rssi_offset_2ghz0 = 1;
          dev[_i0].ee->rssi_offset_2ghz = (int *) malloc(_len_dev__i0__ee_rssi_offset_2ghz0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_dev__i0__ee_rssi_offset_2ghz0; _j0++) {
            dev[_i0].ee->rssi_offset_2ghz[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_dev__i0__ee_lna_gain_5ghz0 = 1;
          dev[_i0].ee->lna_gain_5ghz = (int *) malloc(_len_dev__i0__ee_lna_gain_5ghz0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_dev__i0__ee_lna_gain_5ghz0; _j0++) {
            dev[_i0].ee->lna_gain_5ghz[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_dev__i0__ee_rssi_offset_5ghz0 = 1;
          dev[_i0].ee->rssi_offset_5ghz = (int *) malloc(_len_dev__i0__ee_rssi_offset_5ghz0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_dev__i0__ee_rssi_offset_5ghz0; _j0++) {
            dev[_i0].ee->rssi_offset_5ghz[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_dev__i0__mt76_chandef_chan0 = 1;
          dev[_i0].mt76.chandef.chan = (struct TYPE_6__ *) malloc(_len_dev__i0__mt76_chandef_chan0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_dev__i0__mt76_chandef_chan0; _j0++) {
            dev[_i0].mt76.chandef.chan->band = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_rxwi0 = 100;
          struct mt76x0_rxwi * rxwi = (struct mt76x0_rxwi *) malloc(_len_rxwi0*sizeof(struct mt76x0_rxwi));
          for(int _i0 = 0; _i0 < _len_rxwi0; _i0++) {
              int _len_rxwi__i0__rssi0 = 1;
          rxwi[_i0].rssi = (int *) malloc(_len_rxwi__i0__rssi0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_rxwi__i0__rssi0; _j0++) {
            rxwi[_i0].rssi[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = mt76x0_phy_get_rssi(dev,rxwi);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_dev0; _aux++) {
          free(dev[_aux].ee);
          }
          free(dev);
          for(int _aux = 0; _aux < _len_rxwi0; _aux++) {
          free(rxwi[_aux].rssi);
          }
          free(rxwi);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
