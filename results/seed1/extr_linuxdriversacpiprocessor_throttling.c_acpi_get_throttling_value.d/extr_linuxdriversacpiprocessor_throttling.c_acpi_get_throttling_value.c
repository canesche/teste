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
typedef  int /*<<< orphan*/  u64 ;
struct acpi_processor_tx_tss {int /*<<< orphan*/  control; } ;
struct TYPE_2__ {int state_count; int /*<<< orphan*/ * states_tss; } ;
struct acpi_processor {TYPE_1__ throttling; } ;

/* Variables and functions */

__attribute__((used)) static int acpi_get_throttling_value(struct acpi_processor *pr,
			int state, u64 *value)
{
	int ret = -1;

	if (state >= 0 && state <= pr->throttling.state_count) {
		struct acpi_processor_tx_tss *tx =
		    (struct acpi_processor_tx_tss *)&(pr->throttling.
						      states_tss[state]);
		*value = tx->control;
		ret = 0;
	}
	return ret;
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
          int state = 100;
          int _len_pr0 = 1;
          struct acpi_processor * pr = (struct acpi_processor *) malloc(_len_pr0*sizeof(struct acpi_processor));
          for(int _i0 = 0; _i0 < _len_pr0; _i0++) {
            pr[_i0].throttling.state_count = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_pr__i0__throttling_states_tss0 = 1;
          pr[_i0].throttling.states_tss = (int *) malloc(_len_pr__i0__throttling_states_tss0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_pr__i0__throttling_states_tss0; _j0++) {
            pr[_i0].throttling.states_tss[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_value0 = 1;
          int * value = (int *) malloc(_len_value0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_value0; _i0++) {
            value[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = acpi_get_throttling_value(pr,state,value);
          printf("%d\n", benchRet); 
          free(pr);
          free(value);
        
        break;
    }
    // big-arr
    case 1:
    {
          int state = 255;
          int _len_pr0 = 65025;
          struct acpi_processor * pr = (struct acpi_processor *) malloc(_len_pr0*sizeof(struct acpi_processor));
          for(int _i0 = 0; _i0 < _len_pr0; _i0++) {
            pr[_i0].throttling.state_count = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_pr__i0__throttling_states_tss0 = 1;
          pr[_i0].throttling.states_tss = (int *) malloc(_len_pr__i0__throttling_states_tss0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_pr__i0__throttling_states_tss0; _j0++) {
            pr[_i0].throttling.states_tss[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_value0 = 65025;
          int * value = (int *) malloc(_len_value0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_value0; _i0++) {
            value[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = acpi_get_throttling_value(pr,state,value);
          printf("%d\n", benchRet); 
          free(pr);
          free(value);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int state = 10;
          int _len_pr0 = 100;
          struct acpi_processor * pr = (struct acpi_processor *) malloc(_len_pr0*sizeof(struct acpi_processor));
          for(int _i0 = 0; _i0 < _len_pr0; _i0++) {
            pr[_i0].throttling.state_count = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_pr__i0__throttling_states_tss0 = 1;
          pr[_i0].throttling.states_tss = (int *) malloc(_len_pr__i0__throttling_states_tss0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_pr__i0__throttling_states_tss0; _j0++) {
            pr[_i0].throttling.states_tss[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_value0 = 100;
          int * value = (int *) malloc(_len_value0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_value0; _i0++) {
            value[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = acpi_get_throttling_value(pr,state,value);
          printf("%d\n", benchRet); 
          free(pr);
          free(value);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
