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
typedef  size_t uint32_t ;
struct vega10_single_dpm_table {size_t count; TYPE_1__* dpm_levels; } ;
struct pp_hwmgr {int dummy; } ;
struct TYPE_2__ {size_t value; int enabled; } ;

/* Variables and functions */

__attribute__((used)) static int vega10_trim_single_dpm_states_with_mask(struct pp_hwmgr *hwmgr,
		struct vega10_single_dpm_table *dpm_table,
		uint32_t low_limit, uint32_t high_limit,
		uint32_t disable_dpm_mask)
{
	uint32_t i;

	for (i = 0; i < dpm_table->count; i++) {
		if ((dpm_table->dpm_levels[i].value < low_limit) ||
		    (dpm_table->dpm_levels[i].value > high_limit))
			dpm_table->dpm_levels[i].enabled = false;
		else if (!((1 << i) & disable_dpm_mask))
			dpm_table->dpm_levels[i].enabled = false;
		else
			dpm_table->dpm_levels[i].enabled = true;
	}
	return 0;
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
          unsigned long low_limit = 100;
          unsigned long high_limit = 100;
          unsigned long disable_dpm_mask = 100;
          int _len_hwmgr0 = 1;
          struct pp_hwmgr * hwmgr = (struct pp_hwmgr *) malloc(_len_hwmgr0*sizeof(struct pp_hwmgr));
          for(int _i0 = 0; _i0 < _len_hwmgr0; _i0++) {
            hwmgr[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_dpm_table0 = 1;
          struct vega10_single_dpm_table * dpm_table = (struct vega10_single_dpm_table *) malloc(_len_dpm_table0*sizeof(struct vega10_single_dpm_table));
          for(int _i0 = 0; _i0 < _len_dpm_table0; _i0++) {
            dpm_table[_i0].count = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_dpm_table__i0__dpm_levels0 = 1;
          dpm_table[_i0].dpm_levels = (struct TYPE_2__ *) malloc(_len_dpm_table__i0__dpm_levels0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_dpm_table__i0__dpm_levels0; _j0++) {
            dpm_table[_i0].dpm_levels->value = ((-2 * (next_i()%2)) + 1) * next_i();
        dpm_table[_i0].dpm_levels->enabled = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = vega10_trim_single_dpm_states_with_mask(hwmgr,dpm_table,low_limit,high_limit,disable_dpm_mask);
          printf("%d\n", benchRet); 
          free(hwmgr);
          for(int _aux = 0; _aux < _len_dpm_table0; _aux++) {
          free(dpm_table[_aux].dpm_levels);
          }
          free(dpm_table);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned long low_limit = 255;
          unsigned long high_limit = 255;
          unsigned long disable_dpm_mask = 255;
          int _len_hwmgr0 = 65025;
          struct pp_hwmgr * hwmgr = (struct pp_hwmgr *) malloc(_len_hwmgr0*sizeof(struct pp_hwmgr));
          for(int _i0 = 0; _i0 < _len_hwmgr0; _i0++) {
            hwmgr[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_dpm_table0 = 65025;
          struct vega10_single_dpm_table * dpm_table = (struct vega10_single_dpm_table *) malloc(_len_dpm_table0*sizeof(struct vega10_single_dpm_table));
          for(int _i0 = 0; _i0 < _len_dpm_table0; _i0++) {
            dpm_table[_i0].count = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_dpm_table__i0__dpm_levels0 = 1;
          dpm_table[_i0].dpm_levels = (struct TYPE_2__ *) malloc(_len_dpm_table__i0__dpm_levels0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_dpm_table__i0__dpm_levels0; _j0++) {
            dpm_table[_i0].dpm_levels->value = ((-2 * (next_i()%2)) + 1) * next_i();
        dpm_table[_i0].dpm_levels->enabled = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = vega10_trim_single_dpm_states_with_mask(hwmgr,dpm_table,low_limit,high_limit,disable_dpm_mask);
          printf("%d\n", benchRet); 
          free(hwmgr);
          for(int _aux = 0; _aux < _len_dpm_table0; _aux++) {
          free(dpm_table[_aux].dpm_levels);
          }
          free(dpm_table);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned long low_limit = 10;
          unsigned long high_limit = 10;
          unsigned long disable_dpm_mask = 10;
          int _len_hwmgr0 = 100;
          struct pp_hwmgr * hwmgr = (struct pp_hwmgr *) malloc(_len_hwmgr0*sizeof(struct pp_hwmgr));
          for(int _i0 = 0; _i0 < _len_hwmgr0; _i0++) {
            hwmgr[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_dpm_table0 = 100;
          struct vega10_single_dpm_table * dpm_table = (struct vega10_single_dpm_table *) malloc(_len_dpm_table0*sizeof(struct vega10_single_dpm_table));
          for(int _i0 = 0; _i0 < _len_dpm_table0; _i0++) {
            dpm_table[_i0].count = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_dpm_table__i0__dpm_levels0 = 1;
          dpm_table[_i0].dpm_levels = (struct TYPE_2__ *) malloc(_len_dpm_table__i0__dpm_levels0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_dpm_table__i0__dpm_levels0; _j0++) {
            dpm_table[_i0].dpm_levels->value = ((-2 * (next_i()%2)) + 1) * next_i();
        dpm_table[_i0].dpm_levels->enabled = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = vega10_trim_single_dpm_states_with_mask(hwmgr,dpm_table,low_limit,high_limit,disable_dpm_mask);
          printf("%d\n", benchRet); 
          free(hwmgr);
          for(int _aux = 0; _aux < _len_dpm_table0; _aux++) {
          free(dpm_table[_aux].dpm_levels);
          }
          free(dpm_table);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
