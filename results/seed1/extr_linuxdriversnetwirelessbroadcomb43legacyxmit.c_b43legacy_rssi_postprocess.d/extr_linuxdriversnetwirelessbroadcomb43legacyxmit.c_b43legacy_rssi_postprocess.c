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
struct b43legacy_phy {int radio_ver; int* nrssi_lt; int /*<<< orphan*/  type; } ;
struct b43legacy_wldev {TYPE_3__* dev; struct b43legacy_phy phy; } ;
typedef  int /*<<< orphan*/  s8 ;
typedef  int s32 ;
struct TYPE_6__ {TYPE_2__* bus; } ;
struct TYPE_4__ {int boardflags_lo; } ;
struct TYPE_5__ {TYPE_1__ sprom; } ;

/* Variables and functions */
 int B43legacy_BFL_RSSI ; 
 int /*<<< orphan*/  B43legacy_PHYTYPE_G ; 

__attribute__((used)) static s8 b43legacy_rssi_postprocess(struct b43legacy_wldev *dev,
				     u8 in_rssi, int ofdm,
				     int adjust_2053, int adjust_2050)
{
	struct b43legacy_phy *phy = &dev->phy;
	s32 tmp;

	switch (phy->radio_ver) {
	case 0x2050:
		if (ofdm) {
			tmp = in_rssi;
			if (tmp > 127)
				tmp -= 256;
			tmp *= 73;
			tmp /= 64;
			if (adjust_2050)
				tmp += 25;
			else
				tmp -= 3;
		} else {
			if (dev->dev->bus->sprom.boardflags_lo
			    & B43legacy_BFL_RSSI) {
				if (in_rssi > 63)
					in_rssi = 63;
				tmp = phy->nrssi_lt[in_rssi];
				tmp = 31 - tmp;
				tmp *= -131;
				tmp /= 128;
				tmp -= 57;
			} else {
				tmp = in_rssi;
				tmp = 31 - tmp;
				tmp *= -149;
				tmp /= 128;
				tmp -= 68;
			}
			if (phy->type == B43legacy_PHYTYPE_G &&
			    adjust_2050)
				tmp += 25;
		}
		break;
	case 0x2060:
		if (in_rssi > 127)
			tmp = in_rssi - 256;
		else
			tmp = in_rssi;
		break;
	default:
		tmp = in_rssi;
		tmp -= 11;
		tmp *= 103;
		tmp /= 64;
		if (adjust_2053)
			tmp -= 109;
		else
			tmp -= 83;
	}

	return (s8)tmp;
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
          int in_rssi = 100;
          int ofdm = 100;
          int adjust_2053 = 100;
          int adjust_2050 = 100;
          int _len_dev0 = 1;
          struct b43legacy_wldev * dev = (struct b43legacy_wldev *) malloc(_len_dev0*sizeof(struct b43legacy_wldev));
          for(int _i0 = 0; _i0 < _len_dev0; _i0++) {
              int _len_dev__i0__dev0 = 1;
          dev[_i0].dev = (struct TYPE_6__ *) malloc(_len_dev__i0__dev0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_dev__i0__dev0; _j0++) {
              int _len_dev__i0__dev_bus0 = 1;
          dev[_i0].dev->bus = (struct TYPE_5__ *) malloc(_len_dev__i0__dev_bus0*sizeof(struct TYPE_5__));
          for(int _j0 = 0; _j0 < _len_dev__i0__dev_bus0; _j0++) {
            dev[_i0].dev->bus->sprom.boardflags_lo = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
        dev[_i0].phy.radio_ver = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_dev__i0__phy_nrssi_lt0 = 1;
          dev[_i0].phy.nrssi_lt = (int *) malloc(_len_dev__i0__phy_nrssi_lt0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_dev__i0__phy_nrssi_lt0; _j0++) {
            dev[_i0].phy.nrssi_lt[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        dev[_i0].phy.type = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = b43legacy_rssi_postprocess(dev,in_rssi,ofdm,adjust_2053,adjust_2050);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_dev0; _aux++) {
          free(dev[_aux].dev);
          }
          free(dev);
        
        break;
    }
    // big-arr
    case 1:
    {
          int in_rssi = 255;
          int ofdm = 255;
          int adjust_2053 = 255;
          int adjust_2050 = 255;
          int _len_dev0 = 65025;
          struct b43legacy_wldev * dev = (struct b43legacy_wldev *) malloc(_len_dev0*sizeof(struct b43legacy_wldev));
          for(int _i0 = 0; _i0 < _len_dev0; _i0++) {
              int _len_dev__i0__dev0 = 1;
          dev[_i0].dev = (struct TYPE_6__ *) malloc(_len_dev__i0__dev0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_dev__i0__dev0; _j0++) {
              int _len_dev__i0__dev_bus0 = 1;
          dev[_i0].dev->bus = (struct TYPE_5__ *) malloc(_len_dev__i0__dev_bus0*sizeof(struct TYPE_5__));
          for(int _j0 = 0; _j0 < _len_dev__i0__dev_bus0; _j0++) {
            dev[_i0].dev->bus->sprom.boardflags_lo = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
        dev[_i0].phy.radio_ver = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_dev__i0__phy_nrssi_lt0 = 1;
          dev[_i0].phy.nrssi_lt = (int *) malloc(_len_dev__i0__phy_nrssi_lt0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_dev__i0__phy_nrssi_lt0; _j0++) {
            dev[_i0].phy.nrssi_lt[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        dev[_i0].phy.type = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = b43legacy_rssi_postprocess(dev,in_rssi,ofdm,adjust_2053,adjust_2050);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_dev0; _aux++) {
          free(dev[_aux].dev);
          }
          free(dev);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int in_rssi = 10;
          int ofdm = 10;
          int adjust_2053 = 10;
          int adjust_2050 = 10;
          int _len_dev0 = 100;
          struct b43legacy_wldev * dev = (struct b43legacy_wldev *) malloc(_len_dev0*sizeof(struct b43legacy_wldev));
          for(int _i0 = 0; _i0 < _len_dev0; _i0++) {
              int _len_dev__i0__dev0 = 1;
          dev[_i0].dev = (struct TYPE_6__ *) malloc(_len_dev__i0__dev0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_dev__i0__dev0; _j0++) {
              int _len_dev__i0__dev_bus0 = 1;
          dev[_i0].dev->bus = (struct TYPE_5__ *) malloc(_len_dev__i0__dev_bus0*sizeof(struct TYPE_5__));
          for(int _j0 = 0; _j0 < _len_dev__i0__dev_bus0; _j0++) {
            dev[_i0].dev->bus->sprom.boardflags_lo = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
        dev[_i0].phy.radio_ver = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_dev__i0__phy_nrssi_lt0 = 1;
          dev[_i0].phy.nrssi_lt = (int *) malloc(_len_dev__i0__phy_nrssi_lt0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_dev__i0__phy_nrssi_lt0; _j0++) {
            dev[_i0].phy.nrssi_lt[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        dev[_i0].phy.type = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = b43legacy_rssi_postprocess(dev,in_rssi,ofdm,adjust_2053,adjust_2050);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_dev0; _aux++) {
          free(dev[_aux].dev);
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
