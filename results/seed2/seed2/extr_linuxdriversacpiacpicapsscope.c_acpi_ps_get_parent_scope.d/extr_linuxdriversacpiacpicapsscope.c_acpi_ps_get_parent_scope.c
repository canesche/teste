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
typedef  union acpi_parse_object {int dummy; } acpi_parse_object ;
struct acpi_parse_state {TYPE_2__* scope; } ;
struct TYPE_3__ {union acpi_parse_object* op; } ;
struct TYPE_4__ {TYPE_1__ parse_scope; } ;

/* Variables and functions */

union acpi_parse_object *acpi_ps_get_parent_scope(struct acpi_parse_state
						  *parser_state)
{

	return (parser_state->scope->parse_scope.op);
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
          int _len_parser_state0 = 1;
          struct acpi_parse_state * parser_state = (struct acpi_parse_state *) malloc(_len_parser_state0*sizeof(struct acpi_parse_state));
          for(int _i0 = 0; _i0 < _len_parser_state0; _i0++) {
              int _len_parser_state__i0__scope0 = 1;
          parser_state[_i0].scope = (struct TYPE_4__ *) malloc(_len_parser_state__i0__scope0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_parser_state__i0__scope0; _j0++) {
              int _len_parser_state__i0__scope_parse_scope_op0 = 1;
          parser_state[_i0].scope->parse_scope.op = (union acpi_parse_object *) malloc(_len_parser_state__i0__scope_parse_scope_op0*sizeof(union acpi_parse_object));
          for(int _j0 = 0; _j0 < _len_parser_state__i0__scope_parse_scope_op0; _j0++) {
            parser_state[_i0].scope->parse_scope.op[_j0] = 0;
          }
          }
          }
          union acpi_parse_object * benchRet = acpi_ps_get_parent_scope(parser_state);
          for(int _aux = 0; _aux < _len_parser_state0; _aux++) {
          free(parser_state[_aux].scope);
          }
          free(parser_state);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_parser_state0 = 65025;
          struct acpi_parse_state * parser_state = (struct acpi_parse_state *) malloc(_len_parser_state0*sizeof(struct acpi_parse_state));
          for(int _i0 = 0; _i0 < _len_parser_state0; _i0++) {
              int _len_parser_state__i0__scope0 = 1;
          parser_state[_i0].scope = (struct TYPE_4__ *) malloc(_len_parser_state__i0__scope0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_parser_state__i0__scope0; _j0++) {
              int _len_parser_state__i0__scope_parse_scope_op0 = 1;
          parser_state[_i0].scope->parse_scope.op = (union acpi_parse_object *) malloc(_len_parser_state__i0__scope_parse_scope_op0*sizeof(union acpi_parse_object));
          for(int _j0 = 0; _j0 < _len_parser_state__i0__scope_parse_scope_op0; _j0++) {
            parser_state[_i0].scope->parse_scope.op[_j0] = 0;
          }
          }
          }
          union acpi_parse_object * benchRet = acpi_ps_get_parent_scope(parser_state);
          for(int _aux = 0; _aux < _len_parser_state0; _aux++) {
          free(parser_state[_aux].scope);
          }
          free(parser_state);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_parser_state0 = 100;
          struct acpi_parse_state * parser_state = (struct acpi_parse_state *) malloc(_len_parser_state0*sizeof(struct acpi_parse_state));
          for(int _i0 = 0; _i0 < _len_parser_state0; _i0++) {
              int _len_parser_state__i0__scope0 = 1;
          parser_state[_i0].scope = (struct TYPE_4__ *) malloc(_len_parser_state__i0__scope0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_parser_state__i0__scope0; _j0++) {
              int _len_parser_state__i0__scope_parse_scope_op0 = 1;
          parser_state[_i0].scope->parse_scope.op = (union acpi_parse_object *) malloc(_len_parser_state__i0__scope_parse_scope_op0*sizeof(union acpi_parse_object));
          for(int _j0 = 0; _j0 < _len_parser_state__i0__scope_parse_scope_op0; _j0++) {
            parser_state[_i0].scope->parse_scope.op[_j0] = 0;
          }
          }
          }
          union acpi_parse_object * benchRet = acpi_ps_get_parent_scope(parser_state);
          for(int _aux = 0; _aux < _len_parser_state0; _aux++) {
          free(parser_state[_aux].scope);
          }
          free(parser_state);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
