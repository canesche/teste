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
struct mt76x2_rx_freq_cal {scalar_t__ lna_gain; scalar_t__* rssi_offset; } ;
struct TYPE_2__ {struct mt76x2_rx_freq_cal rx; } ;
struct mt76x2_dev {TYPE_1__ cal; } ;
typedef  int s8 ;

/* Variables and functions */

int mt76x2_mac_get_rssi(struct mt76x2_dev *dev, s8 rssi, int chain)
{
	struct mt76x2_rx_freq_cal *cal = &dev->cal.rx;

	rssi += cal->rssi_offset[chain];
	rssi -= cal->lna_gain;

	return rssi;
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
          int rssi = 100;
          int chain = 100;
          int _len_dev0 = 1;
          struct mt76x2_dev * dev = (struct mt76x2_dev *) malloc(_len_dev0*sizeof(struct mt76x2_dev));
          for(int _i0 = 0; _i0 < _len_dev0; _i0++) {
            dev[_i0].cal.rx.lna_gain = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_dev__i0__cal_rx_rssi_offset0 = 1;
          dev[_i0].cal.rx.rssi_offset = (long *) malloc(_len_dev__i0__cal_rx_rssi_offset0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_dev__i0__cal_rx_rssi_offset0; _j0++) {
            dev[_i0].cal.rx.rssi_offset[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = mt76x2_mac_get_rssi(dev,rssi,chain);
          printf("%d\n", benchRet); 
          free(dev);
        
        break;
    }
    // big-arr
    case 1:
    {
          int rssi = 255;
          int chain = 255;
          int _len_dev0 = 65025;
          struct mt76x2_dev * dev = (struct mt76x2_dev *) malloc(_len_dev0*sizeof(struct mt76x2_dev));
          for(int _i0 = 0; _i0 < _len_dev0; _i0++) {
            dev[_i0].cal.rx.lna_gain = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_dev__i0__cal_rx_rssi_offset0 = 1;
          dev[_i0].cal.rx.rssi_offset = (long *) malloc(_len_dev__i0__cal_rx_rssi_offset0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_dev__i0__cal_rx_rssi_offset0; _j0++) {
            dev[_i0].cal.rx.rssi_offset[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = mt76x2_mac_get_rssi(dev,rssi,chain);
          printf("%d\n", benchRet); 
          free(dev);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int rssi = 10;
          int chain = 10;
          int _len_dev0 = 100;
          struct mt76x2_dev * dev = (struct mt76x2_dev *) malloc(_len_dev0*sizeof(struct mt76x2_dev));
          for(int _i0 = 0; _i0 < _len_dev0; _i0++) {
            dev[_i0].cal.rx.lna_gain = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_dev__i0__cal_rx_rssi_offset0 = 1;
          dev[_i0].cal.rx.rssi_offset = (long *) malloc(_len_dev__i0__cal_rx_rssi_offset0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_dev__i0__cal_rx_rssi_offset0; _j0++) {
            dev[_i0].cal.rx.rssi_offset[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = mt76x2_mac_get_rssi(dev,rssi,chain);
          printf("%d\n", benchRet); 
          free(dev);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
