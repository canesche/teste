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
typedef  struct TYPE_6__   TYPE_3__ ;
typedef  struct TYPE_5__   TYPE_2__ ;
typedef  struct TYPE_4__   TYPE_1__ ;

/* Type definitions */
struct TYPE_6__ {TYPE_2__* elements; } ;
union acpi_object {TYPE_3__ package; } ;
typedef  scalar_t__ acpi_handle ;
struct TYPE_4__ {scalar_t__ handle; } ;
struct TYPE_5__ {TYPE_1__ reference; } ;

/* Variables and functions */

__attribute__((used)) static bool acpi_power_resource_is_dup(union acpi_object *package,
				       unsigned int start, unsigned int i)
{
	acpi_handle rhandle, dup;
	unsigned int j;

	/* The caller is expected to check the package element types */
	rhandle = package->package.elements[i].reference.handle;
	for (j = start; j < i; j++) {
		dup = package->package.elements[j].reference.handle;
		if (dup == rhandle)
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
          unsigned int start = 100;
          unsigned int i = 100;
          int _len_package0 = 1;
          union acpi_object * package = (union acpi_object *) malloc(_len_package0*sizeof(union acpi_object));
          for(int _i0 = 0; _i0 < _len_package0; _i0++) {
            package[_i0] = 0;
          }
          int benchRet = acpi_power_resource_is_dup(package,start,i);
          printf("%d\n", benchRet); 
          free(package);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned int start = 255;
          unsigned int i = 255;
          int _len_package0 = 65025;
          union acpi_object * package = (union acpi_object *) malloc(_len_package0*sizeof(union acpi_object));
          for(int _i0 = 0; _i0 < _len_package0; _i0++) {
            package[_i0] = 0;
          }
          int benchRet = acpi_power_resource_is_dup(package,start,i);
          printf("%d\n", benchRet); 
          free(package);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned int start = 10;
          unsigned int i = 10;
          int _len_package0 = 100;
          union acpi_object * package = (union acpi_object *) malloc(_len_package0*sizeof(union acpi_object));
          for(int _i0 = 0; _i0 < _len_package0; _i0++) {
            package[_i0] = 0;
          }
          int benchRet = acpi_power_resource_is_dup(package,start,i);
          printf("%d\n", benchRet); 
          free(package);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
