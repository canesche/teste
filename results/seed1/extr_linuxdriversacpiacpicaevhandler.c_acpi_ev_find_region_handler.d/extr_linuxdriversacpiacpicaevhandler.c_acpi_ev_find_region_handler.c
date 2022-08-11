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
struct TYPE_2__ {scalar_t__ space_id; union acpi_operand_object* next; } ;
union acpi_operand_object {TYPE_1__ address_space; } ;
typedef  scalar_t__ acpi_adr_space_type ;

/* Variables and functions */

union acpi_operand_object *acpi_ev_find_region_handler(acpi_adr_space_type
						       space_id,
						       union acpi_operand_object
						       *handler_obj)
{

	/* Walk the handler list for this device */

	while (handler_obj) {

		/* Same space_id indicates a handler is installed */

		if (handler_obj->address_space.space_id == space_id) {
			return (handler_obj);
		}

		/* Next handler object */

		handler_obj = handler_obj->address_space.next;
	}

	return (NULL);
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
          long space_id = 100;
          int _len_handler_obj0 = 1;
          union acpi_operand_object * handler_obj = (union acpi_operand_object *) malloc(_len_handler_obj0*sizeof(union acpi_operand_object));
          for(int _i0 = 0; _i0 < _len_handler_obj0; _i0++) {
            handler_obj[_i0] = 0;
          }
          union acpi_operand_object * benchRet = acpi_ev_find_region_handler(space_id,handler_obj);
          free(handler_obj);
        
        break;
    }
    // big-arr
    case 1:
    {
          long space_id = 255;
          int _len_handler_obj0 = 65025;
          union acpi_operand_object * handler_obj = (union acpi_operand_object *) malloc(_len_handler_obj0*sizeof(union acpi_operand_object));
          for(int _i0 = 0; _i0 < _len_handler_obj0; _i0++) {
            handler_obj[_i0] = 0;
          }
          union acpi_operand_object * benchRet = acpi_ev_find_region_handler(space_id,handler_obj);
          free(handler_obj);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          long space_id = 10;
          int _len_handler_obj0 = 100;
          union acpi_operand_object * handler_obj = (union acpi_operand_object *) malloc(_len_handler_obj0*sizeof(union acpi_operand_object));
          for(int _i0 = 0; _i0 < _len_handler_obj0; _i0++) {
            handler_obj[_i0] = 0;
          }
          union acpi_operand_object * benchRet = acpi_ev_find_region_handler(space_id,handler_obj);
          free(handler_obj);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
