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
typedef  unsigned int u8 ;
struct spmi_voltage_range {unsigned int n_voltages; unsigned int set_point_min_uV; unsigned int min_uV; unsigned int step_uV; unsigned int range_sel; } ;
struct spmi_regulator {TYPE_1__* set_points; } ;
struct TYPE_2__ {int count; struct spmi_voltage_range* range; } ;

/* Variables and functions */
 int EINVAL ; 

__attribute__((used)) static int spmi_sw_selector_to_hw(struct spmi_regulator *vreg,
				  unsigned selector, u8 *range_sel,
				  u8 *voltage_sel)
{
	const struct spmi_voltage_range *range, *end;
	unsigned offset;

	range = vreg->set_points->range;
	end = range + vreg->set_points->count;

	for (; range < end; range++) {
		if (selector < range->n_voltages) {
			/*
			 * hardware selectors between set point min and real
			 * min are invalid so we ignore them
			 */
			offset = range->set_point_min_uV - range->min_uV;
			offset /= range->step_uV;
			*voltage_sel = selector + offset;
			*range_sel = range->range_sel;
			return 0;
		}

		selector -= range->n_voltages;
	}

	return -EINVAL;
}


// ------------------------------------------------------------------------- //




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
          unsigned int selector = 100;
          int _len_vreg0 = 1;
          struct spmi_regulator * vreg = (struct spmi_regulator *) malloc(_len_vreg0*sizeof(struct spmi_regulator));
          for(int _i0 = 0; _i0 < _len_vreg0; _i0++) {
              int _len_vreg__i0__set_points0 = 1;
          vreg[_i0].set_points = (struct TYPE_2__ *) malloc(_len_vreg__i0__set_points0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_vreg__i0__set_points0; _j0++) {
            vreg[_i0].set_points->count = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_vreg__i0__set_points_range0 = 1;
          vreg[_i0].set_points->range = (struct spmi_voltage_range *) malloc(_len_vreg__i0__set_points_range0*sizeof(struct spmi_voltage_range));
          for(int _j0 = 0; _j0 < _len_vreg__i0__set_points_range0; _j0++) {
            vreg[_i0].set_points->range->n_voltages = ((-2 * (next_i()%2)) + 1) * next_i();
        vreg[_i0].set_points->range->set_point_min_uV = ((-2 * (next_i()%2)) + 1) * next_i();
        vreg[_i0].set_points->range->min_uV = ((-2 * (next_i()%2)) + 1) * next_i();
        vreg[_i0].set_points->range->step_uV = ((-2 * (next_i()%2)) + 1) * next_i();
        vreg[_i0].set_points->range->range_sel = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int _len_range_sel0 = 1;
          unsigned int * range_sel = (unsigned int *) malloc(_len_range_sel0*sizeof(unsigned int));
          for(int _i0 = 0; _i0 < _len_range_sel0; _i0++) {
            range_sel[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_voltage_sel0 = 1;
          unsigned int * voltage_sel = (unsigned int *) malloc(_len_voltage_sel0*sizeof(unsigned int));
          for(int _i0 = 0; _i0 < _len_voltage_sel0; _i0++) {
            voltage_sel[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = spmi_sw_selector_to_hw(vreg,selector,range_sel,voltage_sel);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_vreg0; _aux++) {
          free(vreg[_aux].set_points);
          }
          free(vreg);
          free(range_sel);
          free(voltage_sel);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
