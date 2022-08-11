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
typedef  int u32 ;
struct mt7601u_dev {int* rf_pa_mode; } ;
typedef  int s16 ;

/* Variables and functions */
#define  MT_PHY_TYPE_CCK 129 
#define  MT_PHY_TYPE_OFDM 128 

__attribute__((used)) static s16
mt7601u_phy_rf_pa_mode_val(struct mt7601u_dev *dev, int phy_mode, int tx_rate)
{
	static const s16 decode_tb[] = { 0, 8847, -5734, -5734 };
	u32 reg;

	switch (phy_mode) {
	case MT_PHY_TYPE_OFDM:
		tx_rate += 4;
		/* fall through */
	case MT_PHY_TYPE_CCK:
		reg = dev->rf_pa_mode[0];
		break;
	default:
		reg = dev->rf_pa_mode[1];
		break;
	}

	return decode_tb[(reg >> (tx_rate * 2)) & 0x3];
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
          int phy_mode = 100;
          int tx_rate = 100;
          int _len_dev0 = 1;
          struct mt7601u_dev * dev = (struct mt7601u_dev *) malloc(_len_dev0*sizeof(struct mt7601u_dev));
          for(int _i0 = 0; _i0 < _len_dev0; _i0++) {
              int _len_dev__i0__rf_pa_mode0 = 1;
          dev[_i0].rf_pa_mode = (int *) malloc(_len_dev__i0__rf_pa_mode0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_dev__i0__rf_pa_mode0; _j0++) {
            dev[_i0].rf_pa_mode[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = mt7601u_phy_rf_pa_mode_val(dev,phy_mode,tx_rate);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_dev0; _aux++) {
          free(dev[_aux].rf_pa_mode);
          }
          free(dev);
        
        break;
    }
    // big-arr
    case 1:
    {
          int phy_mode = 255;
          int tx_rate = 255;
          int _len_dev0 = 65025;
          struct mt7601u_dev * dev = (struct mt7601u_dev *) malloc(_len_dev0*sizeof(struct mt7601u_dev));
          for(int _i0 = 0; _i0 < _len_dev0; _i0++) {
              int _len_dev__i0__rf_pa_mode0 = 1;
          dev[_i0].rf_pa_mode = (int *) malloc(_len_dev__i0__rf_pa_mode0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_dev__i0__rf_pa_mode0; _j0++) {
            dev[_i0].rf_pa_mode[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = mt7601u_phy_rf_pa_mode_val(dev,phy_mode,tx_rate);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_dev0; _aux++) {
          free(dev[_aux].rf_pa_mode);
          }
          free(dev);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int phy_mode = 10;
          int tx_rate = 10;
          int _len_dev0 = 100;
          struct mt7601u_dev * dev = (struct mt7601u_dev *) malloc(_len_dev0*sizeof(struct mt7601u_dev));
          for(int _i0 = 0; _i0 < _len_dev0; _i0++) {
              int _len_dev__i0__rf_pa_mode0 = 1;
          dev[_i0].rf_pa_mode = (int *) malloc(_len_dev__i0__rf_pa_mode0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_dev__i0__rf_pa_mode0; _j0++) {
            dev[_i0].rf_pa_mode[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = mt7601u_phy_rf_pa_mode_val(dev,phy_mode,tx_rate);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_dev0; _aux++) {
          free(dev[_aux].rf_pa_mode);
          }
          free(dev);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
