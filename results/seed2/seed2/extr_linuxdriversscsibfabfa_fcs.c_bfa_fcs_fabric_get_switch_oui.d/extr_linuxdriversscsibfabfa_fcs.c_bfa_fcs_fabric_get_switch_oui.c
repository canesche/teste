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
typedef  int /*<<< orphan*/  wwn_t ;
typedef  int u8 ;
typedef  int u16 ;
struct bfa_fcs_fabric_s {TYPE_1__* lps; } ;
struct TYPE_2__ {int /*<<< orphan*/  pr_nwwn; } ;

/* Variables and functions */

u16
bfa_fcs_fabric_get_switch_oui(struct bfa_fcs_fabric_s *fabric)
{
	wwn_t fab_nwwn;
	u8 *tmp;
	u16 oui;

	fab_nwwn = fabric->lps->pr_nwwn;

	tmp = (u8 *)&fab_nwwn;
	oui = (tmp[3] << 8) | tmp[4];

	return oui;
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
          int _len_fabric0 = 1;
          struct bfa_fcs_fabric_s * fabric = (struct bfa_fcs_fabric_s *) malloc(_len_fabric0*sizeof(struct bfa_fcs_fabric_s));
          for(int _i0 = 0; _i0 < _len_fabric0; _i0++) {
              int _len_fabric__i0__lps0 = 1;
          fabric[_i0].lps = (struct TYPE_2__ *) malloc(_len_fabric__i0__lps0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_fabric__i0__lps0; _j0++) {
            fabric[_i0].lps->pr_nwwn = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = bfa_fcs_fabric_get_switch_oui(fabric);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_fabric0; _aux++) {
          free(fabric[_aux].lps);
          }
          free(fabric);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_fabric0 = 65025;
          struct bfa_fcs_fabric_s * fabric = (struct bfa_fcs_fabric_s *) malloc(_len_fabric0*sizeof(struct bfa_fcs_fabric_s));
          for(int _i0 = 0; _i0 < _len_fabric0; _i0++) {
              int _len_fabric__i0__lps0 = 1;
          fabric[_i0].lps = (struct TYPE_2__ *) malloc(_len_fabric__i0__lps0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_fabric__i0__lps0; _j0++) {
            fabric[_i0].lps->pr_nwwn = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = bfa_fcs_fabric_get_switch_oui(fabric);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_fabric0; _aux++) {
          free(fabric[_aux].lps);
          }
          free(fabric);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_fabric0 = 100;
          struct bfa_fcs_fabric_s * fabric = (struct bfa_fcs_fabric_s *) malloc(_len_fabric0*sizeof(struct bfa_fcs_fabric_s));
          for(int _i0 = 0; _i0 < _len_fabric0; _i0++) {
              int _len_fabric__i0__lps0 = 1;
          fabric[_i0].lps = (struct TYPE_2__ *) malloc(_len_fabric__i0__lps0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_fabric__i0__lps0; _j0++) {
            fabric[_i0].lps->pr_nwwn = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = bfa_fcs_fabric_get_switch_oui(fabric);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_fabric0; _aux++) {
          free(fabric[_aux].lps);
          }
          free(fabric);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
