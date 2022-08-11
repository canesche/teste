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
struct TYPE_4__ {int count; TYPE_1__* elements; } ;
union acpi_object {int type; TYPE_2__ package; } ;
struct TYPE_3__ {int /*<<< orphan*/  type; } ;

/* Variables and functions */
#define  ACPI_TYPE_INTEGER 131 
#define  ACPI_TYPE_LOCAL_REFERENCE 130 
#define  ACPI_TYPE_PACKAGE 129 
#define  ACPI_TYPE_STRING 128 

__attribute__((used)) static bool acpi_property_value_ok(const union acpi_object *value)
{
	int j;

	/*
	 * The value must be an integer, a string, a reference, or a package
	 * whose every element must be an integer, a string, or a reference.
	 */
	switch (value->type) {
	case ACPI_TYPE_INTEGER:
	case ACPI_TYPE_STRING:
	case ACPI_TYPE_LOCAL_REFERENCE:
		return true;

	case ACPI_TYPE_PACKAGE:
		for (j = 0; j < value->package.count; j++)
			switch (value->package.elements[j].type) {
			case ACPI_TYPE_INTEGER:
			case ACPI_TYPE_STRING:
			case ACPI_TYPE_LOCAL_REFERENCE:
				continue;

			default:
				return false;
			}

		return true;
	}
	return false;
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
          int _len_value0 = 1;
          const union acpi_object * value = (const union acpi_object *) malloc(_len_value0*sizeof(const union acpi_object));
          for(int _i0 = 0; _i0 < _len_value0; _i0++) {
            value[_i0] = 0;
          }
          int benchRet = acpi_property_value_ok(value);
          printf("%d\n", benchRet); 
          free(value);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_value0 = 65025;
          const union acpi_object * value = (const union acpi_object *) malloc(_len_value0*sizeof(const union acpi_object));
          for(int _i0 = 0; _i0 < _len_value0; _i0++) {
            value[_i0] = 0;
          }
          int benchRet = acpi_property_value_ok(value);
          printf("%d\n", benchRet); 
          free(value);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_value0 = 100;
          const union acpi_object * value = (const union acpi_object *) malloc(_len_value0*sizeof(const union acpi_object));
          for(int _i0 = 0; _i0 < _len_value0; _i0++) {
            value[_i0] = 0;
          }
          int benchRet = acpi_property_value_ok(value);
          printf("%d\n", benchRet); 
          free(value);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
