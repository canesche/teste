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
struct wireless_dev {TYPE_1__* wiphy; } ;
struct net_device {struct wireless_dev* ieee80211_ptr; } ;
struct ethtool_regs {scalar_t__ len; int /*<<< orphan*/  version; } ;
struct TYPE_2__ {int /*<<< orphan*/  hw_version; } ;

/* Variables and functions */

__attribute__((used)) static void ieee80211_get_regs(struct net_device *dev,
			       struct ethtool_regs *regs,
			       void *data)
{
	struct wireless_dev *wdev = dev->ieee80211_ptr;

	regs->version = wdev->wiphy->hw_version;
	regs->len = 0;
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
          struct net_device * dev = (struct net_device *) malloc(_len_dev0*sizeof(struct net_device));
          for(int _i0 = 0; _i0 < _len_dev0; _i0++) {
              int _len_dev__i0__ieee80211_ptr0 = 1;
          dev[_i0].ieee80211_ptr = (struct wireless_dev *) malloc(_len_dev__i0__ieee80211_ptr0*sizeof(struct wireless_dev));
          for(int _j0 = 0; _j0 < _len_dev__i0__ieee80211_ptr0; _j0++) {
              int _len_dev__i0__ieee80211_ptr_wiphy0 = 1;
          dev[_i0].ieee80211_ptr->wiphy = (struct TYPE_2__ *) malloc(_len_dev__i0__ieee80211_ptr_wiphy0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_dev__i0__ieee80211_ptr_wiphy0; _j0++) {
            dev[_i0].ieee80211_ptr->wiphy->hw_version = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int _len_regs0 = 1;
          struct ethtool_regs * regs = (struct ethtool_regs *) malloc(_len_regs0*sizeof(struct ethtool_regs));
          for(int _i0 = 0; _i0 < _len_regs0; _i0++) {
            regs[_i0].len = ((-2 * (next_i()%2)) + 1) * next_i();
        regs[_i0].version = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          void * data;
          ieee80211_get_regs(dev,regs,data);
          for(int _aux = 0; _aux < _len_dev0; _aux++) {
          free(dev[_aux].ieee80211_ptr);
          }
          free(dev);
          free(regs);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_dev0 = 65025;
          struct net_device * dev = (struct net_device *) malloc(_len_dev0*sizeof(struct net_device));
          for(int _i0 = 0; _i0 < _len_dev0; _i0++) {
              int _len_dev__i0__ieee80211_ptr0 = 1;
          dev[_i0].ieee80211_ptr = (struct wireless_dev *) malloc(_len_dev__i0__ieee80211_ptr0*sizeof(struct wireless_dev));
          for(int _j0 = 0; _j0 < _len_dev__i0__ieee80211_ptr0; _j0++) {
              int _len_dev__i0__ieee80211_ptr_wiphy0 = 1;
          dev[_i0].ieee80211_ptr->wiphy = (struct TYPE_2__ *) malloc(_len_dev__i0__ieee80211_ptr_wiphy0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_dev__i0__ieee80211_ptr_wiphy0; _j0++) {
            dev[_i0].ieee80211_ptr->wiphy->hw_version = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int _len_regs0 = 65025;
          struct ethtool_regs * regs = (struct ethtool_regs *) malloc(_len_regs0*sizeof(struct ethtool_regs));
          for(int _i0 = 0; _i0 < _len_regs0; _i0++) {
            regs[_i0].len = ((-2 * (next_i()%2)) + 1) * next_i();
        regs[_i0].version = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          void * data;
          ieee80211_get_regs(dev,regs,data);
          for(int _aux = 0; _aux < _len_dev0; _aux++) {
          free(dev[_aux].ieee80211_ptr);
          }
          free(dev);
          free(regs);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_dev0 = 100;
          struct net_device * dev = (struct net_device *) malloc(_len_dev0*sizeof(struct net_device));
          for(int _i0 = 0; _i0 < _len_dev0; _i0++) {
              int _len_dev__i0__ieee80211_ptr0 = 1;
          dev[_i0].ieee80211_ptr = (struct wireless_dev *) malloc(_len_dev__i0__ieee80211_ptr0*sizeof(struct wireless_dev));
          for(int _j0 = 0; _j0 < _len_dev__i0__ieee80211_ptr0; _j0++) {
              int _len_dev__i0__ieee80211_ptr_wiphy0 = 1;
          dev[_i0].ieee80211_ptr->wiphy = (struct TYPE_2__ *) malloc(_len_dev__i0__ieee80211_ptr_wiphy0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_dev__i0__ieee80211_ptr_wiphy0; _j0++) {
            dev[_i0].ieee80211_ptr->wiphy->hw_version = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int _len_regs0 = 100;
          struct ethtool_regs * regs = (struct ethtool_regs *) malloc(_len_regs0*sizeof(struct ethtool_regs));
          for(int _i0 = 0; _i0 < _len_regs0; _i0++) {
            regs[_i0].len = ((-2 * (next_i()%2)) + 1) * next_i();
        regs[_i0].version = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          void * data;
          ieee80211_get_regs(dev,regs,data);
          for(int _aux = 0; _aux < _len_dev0; _aux++) {
          free(dev[_aux].ieee80211_ptr);
          }
          free(dev);
          free(regs);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
