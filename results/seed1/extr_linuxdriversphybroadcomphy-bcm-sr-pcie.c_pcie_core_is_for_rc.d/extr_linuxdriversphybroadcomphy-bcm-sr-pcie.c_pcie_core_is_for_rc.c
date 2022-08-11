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
       3            linked\n\
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
struct sr_pcie_phy_core {size_t pipemux; } ;
struct sr_pcie_phy {unsigned int index; struct sr_pcie_phy_core* core; } ;

/* Variables and functions */
 unsigned int* pipemux_table ; 

__attribute__((used)) static bool pcie_core_is_for_rc(struct sr_pcie_phy *phy)
{
	struct sr_pcie_phy_core *core = phy->core;
	unsigned int core_idx = phy->index;

	return !!((pipemux_table[core->pipemux] >> core_idx) & 0x1);
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
          int _len_phy0 = 1;
          struct sr_pcie_phy * phy = (struct sr_pcie_phy *) malloc(_len_phy0*sizeof(struct sr_pcie_phy));
          for(int _i0 = 0; _i0 < _len_phy0; _i0++) {
            phy[_i0].index = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_phy__i0__core0 = 1;
          phy[_i0].core = (struct sr_pcie_phy_core *) malloc(_len_phy__i0__core0*sizeof(struct sr_pcie_phy_core));
          for(int _j0 = 0; _j0 < _len_phy__i0__core0; _j0++) {
            phy[_i0].core->pipemux = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = pcie_core_is_for_rc(phy);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_phy0; _aux++) {
          free(phy[_aux].core);
          }
          free(phy);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_phy0 = 65025;
          struct sr_pcie_phy * phy = (struct sr_pcie_phy *) malloc(_len_phy0*sizeof(struct sr_pcie_phy));
          for(int _i0 = 0; _i0 < _len_phy0; _i0++) {
            phy[_i0].index = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_phy__i0__core0 = 1;
          phy[_i0].core = (struct sr_pcie_phy_core *) malloc(_len_phy__i0__core0*sizeof(struct sr_pcie_phy_core));
          for(int _j0 = 0; _j0 < _len_phy__i0__core0; _j0++) {
            phy[_i0].core->pipemux = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = pcie_core_is_for_rc(phy);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_phy0; _aux++) {
          free(phy[_aux].core);
          }
          free(phy);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_phy0 = 100;
          struct sr_pcie_phy * phy = (struct sr_pcie_phy *) malloc(_len_phy0*sizeof(struct sr_pcie_phy));
          for(int _i0 = 0; _i0 < _len_phy0; _i0++) {
            phy[_i0].index = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_phy__i0__core0 = 1;
          phy[_i0].core = (struct sr_pcie_phy_core *) malloc(_len_phy__i0__core0*sizeof(struct sr_pcie_phy_core));
          for(int _j0 = 0; _j0 < _len_phy__i0__core0; _j0++) {
            phy[_i0].core->pipemux = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = pcie_core_is_for_rc(phy);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_phy0; _aux++) {
          free(phy[_aux].core);
          }
          free(phy);
        
        break;
    }
    // linked
    case 3:
    {
          int _len_phy0 = 1;
          struct sr_pcie_phy * phy = (struct sr_pcie_phy *) malloc(_len_phy0*sizeof(struct sr_pcie_phy));
          for(int _i0 = 0; _i0 < _len_phy0; _i0++) {
            phy[_i0].index = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_phy__i0__core0 = 1;
          phy[_i0].core = (struct sr_pcie_phy_core *) malloc(_len_phy__i0__core0*sizeof(struct sr_pcie_phy_core));
          for(int _j0 = 0; _j0 < _len_phy__i0__core0; _j0++) {
            phy[_i0].core->pipemux = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = pcie_core_is_for_rc(phy);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_phy0; _aux++) {
          free(phy[_aux].core);
          }
          free(phy);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
