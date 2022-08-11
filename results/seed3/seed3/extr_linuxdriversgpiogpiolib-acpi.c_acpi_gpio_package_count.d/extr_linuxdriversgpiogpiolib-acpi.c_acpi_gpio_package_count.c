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
struct TYPE_2__ {int count; union acpi_object* elements; } ;
union acpi_object {int type; TYPE_1__ package; } ;

/* Variables and functions */
#define  ACPI_TYPE_INTEGER 129 
#define  ACPI_TYPE_LOCAL_REFERENCE 128 
 int EPROTO ; 

__attribute__((used)) static int acpi_gpio_package_count(const union acpi_object *obj)
{
	const union acpi_object *element = obj->package.elements;
	const union acpi_object *end = element + obj->package.count;
	unsigned int count = 0;

	while (element < end) {
		switch (element->type) {
		case ACPI_TYPE_LOCAL_REFERENCE:
			element += 3;
			/* Fallthrough */
		case ACPI_TYPE_INTEGER:
			element++;
			count++;
			break;

		default:
			return -EPROTO;
		}
	}

	return count;
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
          int _len_obj0 = 1;
          const union acpi_object * obj = (const union acpi_object *) malloc(_len_obj0*sizeof(const union acpi_object));
          for(int _i0 = 0; _i0 < _len_obj0; _i0++) {
            obj[_i0] = 0;
          }
          int benchRet = acpi_gpio_package_count(obj);
          printf("%d\n", benchRet); 
          free(obj);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_obj0 = 65025;
          const union acpi_object * obj = (const union acpi_object *) malloc(_len_obj0*sizeof(const union acpi_object));
          for(int _i0 = 0; _i0 < _len_obj0; _i0++) {
            obj[_i0] = 0;
          }
          int benchRet = acpi_gpio_package_count(obj);
          printf("%d\n", benchRet); 
          free(obj);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_obj0 = 100;
          const union acpi_object * obj = (const union acpi_object *) malloc(_len_obj0*sizeof(const union acpi_object));
          for(int _i0 = 0; _i0 < _len_obj0; _i0++) {
            obj[_i0] = 0;
          }
          int benchRet = acpi_gpio_package_count(obj);
          printf("%d\n", benchRet); 
          free(obj);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
