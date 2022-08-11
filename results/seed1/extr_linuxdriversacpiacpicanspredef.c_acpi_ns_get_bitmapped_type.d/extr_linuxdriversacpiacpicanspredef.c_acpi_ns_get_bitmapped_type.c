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
struct TYPE_2__ {int type; } ;
union acpi_operand_object {TYPE_1__ common; } ;
typedef  int /*<<< orphan*/  u32 ;

/* Variables and functions */
 int /*<<< orphan*/  ACPI_RTYPE_ANY ; 
 int /*<<< orphan*/  ACPI_RTYPE_BUFFER ; 
 int /*<<< orphan*/  ACPI_RTYPE_INTEGER ; 
 int /*<<< orphan*/  ACPI_RTYPE_NONE ; 
 int /*<<< orphan*/  ACPI_RTYPE_PACKAGE ; 
 int /*<<< orphan*/  ACPI_RTYPE_REFERENCE ; 
 int /*<<< orphan*/  ACPI_RTYPE_STRING ; 
#define  ACPI_TYPE_BUFFER 132 
#define  ACPI_TYPE_INTEGER 131 
#define  ACPI_TYPE_LOCAL_REFERENCE 130 
#define  ACPI_TYPE_PACKAGE 129 
#define  ACPI_TYPE_STRING 128 

__attribute__((used)) static u32 acpi_ns_get_bitmapped_type(union acpi_operand_object *return_object)
{
	u32 return_btype;

	if (!return_object) {
		return (ACPI_RTYPE_NONE);
	}

	/* Map acpi_object_type to internal bitmapped type */

	switch (return_object->common.type) {
	case ACPI_TYPE_INTEGER:

		return_btype = ACPI_RTYPE_INTEGER;
		break;

	case ACPI_TYPE_BUFFER:

		return_btype = ACPI_RTYPE_BUFFER;
		break;

	case ACPI_TYPE_STRING:

		return_btype = ACPI_RTYPE_STRING;
		break;

	case ACPI_TYPE_PACKAGE:

		return_btype = ACPI_RTYPE_PACKAGE;
		break;

	case ACPI_TYPE_LOCAL_REFERENCE:

		return_btype = ACPI_RTYPE_REFERENCE;
		break;

	default:

		/* Not one of the supported objects, must be incorrect */

		return_btype = ACPI_RTYPE_ANY;
		break;
	}

	return (return_btype);
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
          int _len_return_object0 = 1;
          union acpi_operand_object * return_object = (union acpi_operand_object *) malloc(_len_return_object0*sizeof(union acpi_operand_object));
          for(int _i0 = 0; _i0 < _len_return_object0; _i0++) {
            return_object[_i0] = 0;
          }
          int benchRet = acpi_ns_get_bitmapped_type(return_object);
          printf("%d\n", benchRet); 
          free(return_object);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_return_object0 = 65025;
          union acpi_operand_object * return_object = (union acpi_operand_object *) malloc(_len_return_object0*sizeof(union acpi_operand_object));
          for(int _i0 = 0; _i0 < _len_return_object0; _i0++) {
            return_object[_i0] = 0;
          }
          int benchRet = acpi_ns_get_bitmapped_type(return_object);
          printf("%d\n", benchRet); 
          free(return_object);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_return_object0 = 100;
          union acpi_operand_object * return_object = (union acpi_operand_object *) malloc(_len_return_object0*sizeof(union acpi_operand_object));
          for(int _i0 = 0; _i0 < _len_return_object0; _i0++) {
            return_object[_i0] = 0;
          }
          int benchRet = acpi_ns_get_bitmapped_type(return_object);
          printf("%d\n", benchRet); 
          free(return_object);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
