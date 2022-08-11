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

/* Type definitions */
struct acpi_lpi_states_array {int /*<<< orphan*/  composite_states_size; struct acpi_lpi_state** composite_states; } ;
struct acpi_lpi_state {int dummy; } ;

/* Variables and functions */

__attribute__((used)) static void stash_composite_state(struct acpi_lpi_states_array *curr_level,
				  struct acpi_lpi_state *t)
{
	curr_level->composite_states[curr_level->composite_states_size++] = t;
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
          int _len_curr_level0 = 1;
          struct acpi_lpi_states_array * curr_level = (struct acpi_lpi_states_array *) malloc(_len_curr_level0*sizeof(struct acpi_lpi_states_array));
          for(int _i0 = 0; _i0 < _len_curr_level0; _i0++) {
            curr_level[_i0].composite_states_size = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_curr_level__i0__composite_states0 = 1;
          curr_level[_i0].composite_states = (struct acpi_lpi_state **) malloc(_len_curr_level__i0__composite_states0*sizeof(struct acpi_lpi_state *));
          for(int _j0 = 0; _j0 < _len_curr_level__i0__composite_states0; _j0++) {
            int _len_curr_level__i0__composite_states1 = 1;
            curr_level[_i0].composite_states[_j0] = (struct acpi_lpi_state *) malloc(_len_curr_level__i0__composite_states1*sizeof(struct acpi_lpi_state));
            for(int _j1 = 0; _j1 < _len_curr_level__i0__composite_states1; _j1++) {
              curr_level[_i0].composite_states[_j0]->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          int _len_t0 = 1;
          struct acpi_lpi_state * t = (struct acpi_lpi_state *) malloc(_len_t0*sizeof(struct acpi_lpi_state));
          for(int _i0 = 0; _i0 < _len_t0; _i0++) {
            t[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          stash_composite_state(curr_level,t);
          for(int _aux = 0; _aux < _len_curr_level0; _aux++) {
          free(*(curr_level[_aux].composite_states));
        free(curr_level[_aux].composite_states);
          }
          free(curr_level);
          free(t);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_curr_level0 = 65025;
          struct acpi_lpi_states_array * curr_level = (struct acpi_lpi_states_array *) malloc(_len_curr_level0*sizeof(struct acpi_lpi_states_array));
          for(int _i0 = 0; _i0 < _len_curr_level0; _i0++) {
            curr_level[_i0].composite_states_size = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_curr_level__i0__composite_states0 = 1;
          curr_level[_i0].composite_states = (struct acpi_lpi_state **) malloc(_len_curr_level__i0__composite_states0*sizeof(struct acpi_lpi_state *));
          for(int _j0 = 0; _j0 < _len_curr_level__i0__composite_states0; _j0++) {
            int _len_curr_level__i0__composite_states1 = 1;
            curr_level[_i0].composite_states[_j0] = (struct acpi_lpi_state *) malloc(_len_curr_level__i0__composite_states1*sizeof(struct acpi_lpi_state));
            for(int _j1 = 0; _j1 < _len_curr_level__i0__composite_states1; _j1++) {
              curr_level[_i0].composite_states[_j0]->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          int _len_t0 = 65025;
          struct acpi_lpi_state * t = (struct acpi_lpi_state *) malloc(_len_t0*sizeof(struct acpi_lpi_state));
          for(int _i0 = 0; _i0 < _len_t0; _i0++) {
            t[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          stash_composite_state(curr_level,t);
          for(int _aux = 0; _aux < _len_curr_level0; _aux++) {
          free(*(curr_level[_aux].composite_states));
        free(curr_level[_aux].composite_states);
          }
          free(curr_level);
          free(t);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_curr_level0 = 100;
          struct acpi_lpi_states_array * curr_level = (struct acpi_lpi_states_array *) malloc(_len_curr_level0*sizeof(struct acpi_lpi_states_array));
          for(int _i0 = 0; _i0 < _len_curr_level0; _i0++) {
            curr_level[_i0].composite_states_size = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_curr_level__i0__composite_states0 = 1;
          curr_level[_i0].composite_states = (struct acpi_lpi_state **) malloc(_len_curr_level__i0__composite_states0*sizeof(struct acpi_lpi_state *));
          for(int _j0 = 0; _j0 < _len_curr_level__i0__composite_states0; _j0++) {
            int _len_curr_level__i0__composite_states1 = 1;
            curr_level[_i0].composite_states[_j0] = (struct acpi_lpi_state *) malloc(_len_curr_level__i0__composite_states1*sizeof(struct acpi_lpi_state));
            for(int _j1 = 0; _j1 < _len_curr_level__i0__composite_states1; _j1++) {
              curr_level[_i0].composite_states[_j0]->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          int _len_t0 = 100;
          struct acpi_lpi_state * t = (struct acpi_lpi_state *) malloc(_len_t0*sizeof(struct acpi_lpi_state));
          for(int _i0 = 0; _i0 < _len_t0; _i0++) {
            t[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          stash_composite_state(curr_level,t);
          for(int _aux = 0; _aux < _len_curr_level0; _aux++) {
          free(*(curr_level[_aux].composite_states));
        free(curr_level[_aux].composite_states);
          }
          free(curr_level);
          free(t);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
