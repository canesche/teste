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
typedef  size_t u32 ;
struct radeon_device {int dummy; } ;
struct radeon_clock_voltage_dependency_table {size_t count; TYPE_1__* entries; } ;
struct atom_voltage_table {size_t count; TYPE_2__* entries; scalar_t__ phase_delay; scalar_t__ mask_low; } ;
struct TYPE_4__ {scalar_t__ smio_low; int /*<<< orphan*/  value; } ;
struct TYPE_3__ {int /*<<< orphan*/  v; } ;

/* Variables and functions */
 int EINVAL ; 

__attribute__((used)) static int ci_get_svi2_voltage_table(struct radeon_device *rdev,
				     struct radeon_clock_voltage_dependency_table *voltage_dependency_table,
				     struct atom_voltage_table *voltage_table)
{
	u32 i;

	if (voltage_dependency_table == NULL)
		return -EINVAL;

	voltage_table->mask_low = 0;
	voltage_table->phase_delay = 0;

	voltage_table->count = voltage_dependency_table->count;
	for (i = 0; i < voltage_table->count; i++) {
		voltage_table->entries[i].value = voltage_dependency_table->entries[i].v;
		voltage_table->entries[i].smio_low = 0;
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
          int _len_rdev0 = 1;
          struct radeon_device * rdev = (struct radeon_device *) malloc(_len_rdev0*sizeof(struct radeon_device));
          for(int _i0 = 0; _i0 < _len_rdev0; _i0++) {
            rdev[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_voltage_dependency_table0 = 1;
          struct radeon_clock_voltage_dependency_table * voltage_dependency_table = (struct radeon_clock_voltage_dependency_table *) malloc(_len_voltage_dependency_table0*sizeof(struct radeon_clock_voltage_dependency_table));
          for(int _i0 = 0; _i0 < _len_voltage_dependency_table0; _i0++) {
            voltage_dependency_table[_i0].count = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_voltage_dependency_table__i0__entries0 = 1;
          voltage_dependency_table[_i0].entries = (struct TYPE_3__ *) malloc(_len_voltage_dependency_table__i0__entries0*sizeof(struct TYPE_3__));
          for(int _j0 = 0; _j0 < _len_voltage_dependency_table__i0__entries0; _j0++) {
            voltage_dependency_table[_i0].entries->v = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_voltage_table0 = 1;
          struct atom_voltage_table * voltage_table = (struct atom_voltage_table *) malloc(_len_voltage_table0*sizeof(struct atom_voltage_table));
          for(int _i0 = 0; _i0 < _len_voltage_table0; _i0++) {
            voltage_table[_i0].count = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_voltage_table__i0__entries0 = 1;
          voltage_table[_i0].entries = (struct TYPE_4__ *) malloc(_len_voltage_table__i0__entries0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_voltage_table__i0__entries0; _j0++) {
            voltage_table[_i0].entries->smio_low = ((-2 * (next_i()%2)) + 1) * next_i();
        voltage_table[_i0].entries->value = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        voltage_table[_i0].phase_delay = ((-2 * (next_i()%2)) + 1) * next_i();
        voltage_table[_i0].mask_low = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = ci_get_svi2_voltage_table(rdev,voltage_dependency_table,voltage_table);
          printf("%d\n", benchRet); 
          free(rdev);
          for(int _aux = 0; _aux < _len_voltage_dependency_table0; _aux++) {
          free(voltage_dependency_table[_aux].entries);
          }
          free(voltage_dependency_table);
          for(int _aux = 0; _aux < _len_voltage_table0; _aux++) {
          free(voltage_table[_aux].entries);
          }
          free(voltage_table);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_rdev0 = 65025;
          struct radeon_device * rdev = (struct radeon_device *) malloc(_len_rdev0*sizeof(struct radeon_device));
          for(int _i0 = 0; _i0 < _len_rdev0; _i0++) {
            rdev[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_voltage_dependency_table0 = 65025;
          struct radeon_clock_voltage_dependency_table * voltage_dependency_table = (struct radeon_clock_voltage_dependency_table *) malloc(_len_voltage_dependency_table0*sizeof(struct radeon_clock_voltage_dependency_table));
          for(int _i0 = 0; _i0 < _len_voltage_dependency_table0; _i0++) {
            voltage_dependency_table[_i0].count = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_voltage_dependency_table__i0__entries0 = 1;
          voltage_dependency_table[_i0].entries = (struct TYPE_3__ *) malloc(_len_voltage_dependency_table__i0__entries0*sizeof(struct TYPE_3__));
          for(int _j0 = 0; _j0 < _len_voltage_dependency_table__i0__entries0; _j0++) {
            voltage_dependency_table[_i0].entries->v = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_voltage_table0 = 65025;
          struct atom_voltage_table * voltage_table = (struct atom_voltage_table *) malloc(_len_voltage_table0*sizeof(struct atom_voltage_table));
          for(int _i0 = 0; _i0 < _len_voltage_table0; _i0++) {
            voltage_table[_i0].count = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_voltage_table__i0__entries0 = 1;
          voltage_table[_i0].entries = (struct TYPE_4__ *) malloc(_len_voltage_table__i0__entries0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_voltage_table__i0__entries0; _j0++) {
            voltage_table[_i0].entries->smio_low = ((-2 * (next_i()%2)) + 1) * next_i();
        voltage_table[_i0].entries->value = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        voltage_table[_i0].phase_delay = ((-2 * (next_i()%2)) + 1) * next_i();
        voltage_table[_i0].mask_low = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = ci_get_svi2_voltage_table(rdev,voltage_dependency_table,voltage_table);
          printf("%d\n", benchRet); 
          free(rdev);
          for(int _aux = 0; _aux < _len_voltage_dependency_table0; _aux++) {
          free(voltage_dependency_table[_aux].entries);
          }
          free(voltage_dependency_table);
          for(int _aux = 0; _aux < _len_voltage_table0; _aux++) {
          free(voltage_table[_aux].entries);
          }
          free(voltage_table);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_rdev0 = 100;
          struct radeon_device * rdev = (struct radeon_device *) malloc(_len_rdev0*sizeof(struct radeon_device));
          for(int _i0 = 0; _i0 < _len_rdev0; _i0++) {
            rdev[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_voltage_dependency_table0 = 100;
          struct radeon_clock_voltage_dependency_table * voltage_dependency_table = (struct radeon_clock_voltage_dependency_table *) malloc(_len_voltage_dependency_table0*sizeof(struct radeon_clock_voltage_dependency_table));
          for(int _i0 = 0; _i0 < _len_voltage_dependency_table0; _i0++) {
            voltage_dependency_table[_i0].count = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_voltage_dependency_table__i0__entries0 = 1;
          voltage_dependency_table[_i0].entries = (struct TYPE_3__ *) malloc(_len_voltage_dependency_table__i0__entries0*sizeof(struct TYPE_3__));
          for(int _j0 = 0; _j0 < _len_voltage_dependency_table__i0__entries0; _j0++) {
            voltage_dependency_table[_i0].entries->v = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_voltage_table0 = 100;
          struct atom_voltage_table * voltage_table = (struct atom_voltage_table *) malloc(_len_voltage_table0*sizeof(struct atom_voltage_table));
          for(int _i0 = 0; _i0 < _len_voltage_table0; _i0++) {
            voltage_table[_i0].count = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_voltage_table__i0__entries0 = 1;
          voltage_table[_i0].entries = (struct TYPE_4__ *) malloc(_len_voltage_table__i0__entries0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_voltage_table__i0__entries0; _j0++) {
            voltage_table[_i0].entries->smio_low = ((-2 * (next_i()%2)) + 1) * next_i();
        voltage_table[_i0].entries->value = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        voltage_table[_i0].phase_delay = ((-2 * (next_i()%2)) + 1) * next_i();
        voltage_table[_i0].mask_low = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = ci_get_svi2_voltage_table(rdev,voltage_dependency_table,voltage_table);
          printf("%d\n", benchRet); 
          free(rdev);
          for(int _aux = 0; _aux < _len_voltage_dependency_table0; _aux++) {
          free(voltage_dependency_table[_aux].entries);
          }
          free(voltage_dependency_table);
          for(int _aux = 0; _aux < _len_voltage_table0; _aux++) {
          free(voltage_table[_aux].entries);
          }
          free(voltage_table);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
