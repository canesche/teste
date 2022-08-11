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
typedef  union acpi_parse_object {int dummy; } acpi_parse_object ;
struct acpi_walk_state {int dummy; } ;
typedef  int /*<<< orphan*/  acpi_status ;

/* Variables and functions */

void
acpi_ds_dump_method_stack(acpi_status status,
			  struct acpi_walk_state *walk_state,
			  union acpi_parse_object *op)
{
	return;
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
          int status = 100;
          int _len_walk_state0 = 1;
          struct acpi_walk_state * walk_state = (struct acpi_walk_state *) malloc(_len_walk_state0*sizeof(struct acpi_walk_state));
          for(int _i0 = 0; _i0 < _len_walk_state0; _i0++) {
            walk_state[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_op0 = 1;
          union acpi_parse_object * op = (union acpi_parse_object *) malloc(_len_op0*sizeof(union acpi_parse_object));
          for(int _i0 = 0; _i0 < _len_op0; _i0++) {
            op[_i0] = 0;
          }
          acpi_ds_dump_method_stack(status,walk_state,op);
          free(walk_state);
          free(op);
        
        break;
    }
    // big-arr
    case 1:
    {
          int status = 255;
          int _len_walk_state0 = 65025;
          struct acpi_walk_state * walk_state = (struct acpi_walk_state *) malloc(_len_walk_state0*sizeof(struct acpi_walk_state));
          for(int _i0 = 0; _i0 < _len_walk_state0; _i0++) {
            walk_state[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_op0 = 65025;
          union acpi_parse_object * op = (union acpi_parse_object *) malloc(_len_op0*sizeof(union acpi_parse_object));
          for(int _i0 = 0; _i0 < _len_op0; _i0++) {
            op[_i0] = 0;
          }
          acpi_ds_dump_method_stack(status,walk_state,op);
          free(walk_state);
          free(op);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int status = 10;
          int _len_walk_state0 = 100;
          struct acpi_walk_state * walk_state = (struct acpi_walk_state *) malloc(_len_walk_state0*sizeof(struct acpi_walk_state));
          for(int _i0 = 0; _i0 < _len_walk_state0; _i0++) {
            walk_state[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_op0 = 100;
          union acpi_parse_object * op = (union acpi_parse_object *) malloc(_len_op0*sizeof(union acpi_parse_object));
          for(int _i0 = 0; _i0 < _len_op0; _i0++) {
            op[_i0] = 0;
          }
          acpi_ds_dump_method_stack(status,walk_state,op);
          free(walk_state);
          free(op);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
