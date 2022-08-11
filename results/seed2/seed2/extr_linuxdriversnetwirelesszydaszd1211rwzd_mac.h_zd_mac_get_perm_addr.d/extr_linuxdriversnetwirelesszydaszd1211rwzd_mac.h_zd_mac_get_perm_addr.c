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
typedef  int /*<<< orphan*/  u8 ;
struct zd_mac {TYPE_2__* hw; } ;
struct TYPE_4__ {TYPE_1__* wiphy; } ;
struct TYPE_3__ {int /*<<< orphan*/ * perm_addr; } ;

/* Variables and functions */

__attribute__((used)) static inline u8 *zd_mac_get_perm_addr(struct zd_mac *mac)
{
	return mac->hw->wiphy->perm_addr;
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
          int _len_mac0 = 1;
          struct zd_mac * mac = (struct zd_mac *) malloc(_len_mac0*sizeof(struct zd_mac));
          for(int _i0 = 0; _i0 < _len_mac0; _i0++) {
              int _len_mac__i0__hw0 = 1;
          mac[_i0].hw = (struct TYPE_4__ *) malloc(_len_mac__i0__hw0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_mac__i0__hw0; _j0++) {
              int _len_mac__i0__hw_wiphy0 = 1;
          mac[_i0].hw->wiphy = (struct TYPE_3__ *) malloc(_len_mac__i0__hw_wiphy0*sizeof(struct TYPE_3__));
          for(int _j0 = 0; _j0 < _len_mac__i0__hw_wiphy0; _j0++) {
              int _len_mac__i0__hw_wiphy_perm_addr0 = 1;
          mac[_i0].hw->wiphy->perm_addr = (int *) malloc(_len_mac__i0__hw_wiphy_perm_addr0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_mac__i0__hw_wiphy_perm_addr0; _j0++) {
            mac[_i0].hw->wiphy->perm_addr[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          }
          int * benchRet = zd_mac_get_perm_addr(mac);
          printf("%d\n", (*benchRet)); 
          for(int _aux = 0; _aux < _len_mac0; _aux++) {
          free(mac[_aux].hw);
          }
          free(mac);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_mac0 = 65025;
          struct zd_mac * mac = (struct zd_mac *) malloc(_len_mac0*sizeof(struct zd_mac));
          for(int _i0 = 0; _i0 < _len_mac0; _i0++) {
              int _len_mac__i0__hw0 = 1;
          mac[_i0].hw = (struct TYPE_4__ *) malloc(_len_mac__i0__hw0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_mac__i0__hw0; _j0++) {
              int _len_mac__i0__hw_wiphy0 = 1;
          mac[_i0].hw->wiphy = (struct TYPE_3__ *) malloc(_len_mac__i0__hw_wiphy0*sizeof(struct TYPE_3__));
          for(int _j0 = 0; _j0 < _len_mac__i0__hw_wiphy0; _j0++) {
              int _len_mac__i0__hw_wiphy_perm_addr0 = 1;
          mac[_i0].hw->wiphy->perm_addr = (int *) malloc(_len_mac__i0__hw_wiphy_perm_addr0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_mac__i0__hw_wiphy_perm_addr0; _j0++) {
            mac[_i0].hw->wiphy->perm_addr[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          }
          int * benchRet = zd_mac_get_perm_addr(mac);
          printf("%d\n", (*benchRet)); 
          for(int _aux = 0; _aux < _len_mac0; _aux++) {
          free(mac[_aux].hw);
          }
          free(mac);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_mac0 = 100;
          struct zd_mac * mac = (struct zd_mac *) malloc(_len_mac0*sizeof(struct zd_mac));
          for(int _i0 = 0; _i0 < _len_mac0; _i0++) {
              int _len_mac__i0__hw0 = 1;
          mac[_i0].hw = (struct TYPE_4__ *) malloc(_len_mac__i0__hw0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_mac__i0__hw0; _j0++) {
              int _len_mac__i0__hw_wiphy0 = 1;
          mac[_i0].hw->wiphy = (struct TYPE_3__ *) malloc(_len_mac__i0__hw_wiphy0*sizeof(struct TYPE_3__));
          for(int _j0 = 0; _j0 < _len_mac__i0__hw_wiphy0; _j0++) {
              int _len_mac__i0__hw_wiphy_perm_addr0 = 1;
          mac[_i0].hw->wiphy->perm_addr = (int *) malloc(_len_mac__i0__hw_wiphy_perm_addr0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_mac__i0__hw_wiphy_perm_addr0; _j0++) {
            mac[_i0].hw->wiphy->perm_addr[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          }
          int * benchRet = zd_mac_get_perm_addr(mac);
          printf("%d\n", (*benchRet)); 
          for(int _aux = 0; _aux < _len_mac0; _aux++) {
          free(mac[_aux].hw);
          }
          free(mac);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
