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
struct TYPE_2__ {scalar_t__ properties; } ;
struct acpi_device {scalar_t__ driver_gpios; TYPE_1__ data; } ;

/* Variables and functions */

bool acpi_can_fallback_to_crs(struct acpi_device *adev, const char *con_id)
{
	/* Never allow fallback if the device has properties */
	if (adev->data.properties || adev->driver_gpios)
		return false;

	return con_id == NULL;
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
          int _len_adev0 = 1;
          struct acpi_device * adev = (struct acpi_device *) malloc(_len_adev0*sizeof(struct acpi_device));
          for(int _i0 = 0; _i0 < _len_adev0; _i0++) {
            adev[_i0].driver_gpios = ((-2 * (next_i()%2)) + 1) * next_i();
        adev[_i0].data.properties = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_con_id0 = 1;
          const char * con_id = (const char *) malloc(_len_con_id0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_con_id0; _i0++) {
            con_id[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = acpi_can_fallback_to_crs(adev,con_id);
          printf("%d\n", benchRet); 
          free(adev);
          free(con_id);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_adev0 = 65025;
          struct acpi_device * adev = (struct acpi_device *) malloc(_len_adev0*sizeof(struct acpi_device));
          for(int _i0 = 0; _i0 < _len_adev0; _i0++) {
            adev[_i0].driver_gpios = ((-2 * (next_i()%2)) + 1) * next_i();
        adev[_i0].data.properties = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_con_id0 = 65025;
          const char * con_id = (const char *) malloc(_len_con_id0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_con_id0; _i0++) {
            con_id[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = acpi_can_fallback_to_crs(adev,con_id);
          printf("%d\n", benchRet); 
          free(adev);
          free(con_id);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_adev0 = 100;
          struct acpi_device * adev = (struct acpi_device *) malloc(_len_adev0*sizeof(struct acpi_device));
          for(int _i0 = 0; _i0 < _len_adev0; _i0++) {
            adev[_i0].driver_gpios = ((-2 * (next_i()%2)) + 1) * next_i();
        adev[_i0].data.properties = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_con_id0 = 100;
          const char * con_id = (const char *) malloc(_len_con_id0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_con_id0; _i0++) {
            con_id[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = acpi_can_fallback_to_crs(adev,con_id);
          printf("%d\n", benchRet); 
          free(adev);
          free(con_id);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
