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
typedef  size_t u32 ;
struct amdgpu_clock_voltage_dependency_table {scalar_t__ count; TYPE_1__* entries; } ;
struct TYPE_2__ {size_t clk; } ;

/* Variables and functions */

__attribute__((used)) static void btc_get_max_clock_from_voltage_dependency_table(struct amdgpu_clock_voltage_dependency_table *table,
							    u32 *max_clock)
{
	u32 i, clock = 0;

	if ((table == NULL) || (table->count == 0)) {
		*max_clock = clock;
		return;
	}

	for (i = 0; i < table->count; i++) {
		if (clock < table->entries[i].clk)
			clock = table->entries[i].clk;
	}
	*max_clock = clock;
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
          int _len_table0 = 1;
          struct amdgpu_clock_voltage_dependency_table * table = (struct amdgpu_clock_voltage_dependency_table *) malloc(_len_table0*sizeof(struct amdgpu_clock_voltage_dependency_table));
          for(int _i0 = 0; _i0 < _len_table0; _i0++) {
            table[_i0].count = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_table__i0__entries0 = 1;
          table[_i0].entries = (struct TYPE_2__ *) malloc(_len_table__i0__entries0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_table__i0__entries0; _j0++) {
            table[_i0].entries->clk = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_max_clock0 = 1;
          unsigned long * max_clock = (unsigned long *) malloc(_len_max_clock0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_max_clock0; _i0++) {
            max_clock[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          btc_get_max_clock_from_voltage_dependency_table(table,max_clock);
          for(int _aux = 0; _aux < _len_table0; _aux++) {
          free(table[_aux].entries);
          }
          free(table);
          free(max_clock);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_table0 = 65025;
          struct amdgpu_clock_voltage_dependency_table * table = (struct amdgpu_clock_voltage_dependency_table *) malloc(_len_table0*sizeof(struct amdgpu_clock_voltage_dependency_table));
          for(int _i0 = 0; _i0 < _len_table0; _i0++) {
            table[_i0].count = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_table__i0__entries0 = 1;
          table[_i0].entries = (struct TYPE_2__ *) malloc(_len_table__i0__entries0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_table__i0__entries0; _j0++) {
            table[_i0].entries->clk = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_max_clock0 = 65025;
          unsigned long * max_clock = (unsigned long *) malloc(_len_max_clock0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_max_clock0; _i0++) {
            max_clock[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          btc_get_max_clock_from_voltage_dependency_table(table,max_clock);
          for(int _aux = 0; _aux < _len_table0; _aux++) {
          free(table[_aux].entries);
          }
          free(table);
          free(max_clock);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_table0 = 100;
          struct amdgpu_clock_voltage_dependency_table * table = (struct amdgpu_clock_voltage_dependency_table *) malloc(_len_table0*sizeof(struct amdgpu_clock_voltage_dependency_table));
          for(int _i0 = 0; _i0 < _len_table0; _i0++) {
            table[_i0].count = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_table__i0__entries0 = 1;
          table[_i0].entries = (struct TYPE_2__ *) malloc(_len_table__i0__entries0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_table__i0__entries0; _j0++) {
            table[_i0].entries->clk = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_max_clock0 = 100;
          unsigned long * max_clock = (unsigned long *) malloc(_len_max_clock0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_max_clock0; _i0++) {
            max_clock[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          btc_get_max_clock_from_voltage_dependency_table(table,max_clock);
          for(int _aux = 0; _aux < _len_table0; _aux++) {
          free(table[_aux].entries);
          }
          free(table);
          free(max_clock);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
