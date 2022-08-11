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
struct acpi_gpio_mapping {int dummy; } ;
struct acpi_device {struct acpi_gpio_mapping const* driver_gpios; } ;

/* Variables and functions */
 int EINVAL ; 

int acpi_dev_add_driver_gpios(struct acpi_device *adev,
			      const struct acpi_gpio_mapping *gpios)
{
	if (adev && gpios) {
		adev->driver_gpios = gpios;
		return 0;
	}
	return -EINVAL;
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
              int _len_adev__i0__driver_gpios0 = 1;
          adev[_i0].driver_gpios = (const struct acpi_gpio_mapping *) malloc(_len_adev__i0__driver_gpios0*sizeof(const struct acpi_gpio_mapping));
          for(int _j0 = 0; _j0 < _len_adev__i0__driver_gpios0; _j0++) {
              }
          }
          int _len_gpios0 = 1;
          const struct acpi_gpio_mapping * gpios = (const struct acpi_gpio_mapping *) malloc(_len_gpios0*sizeof(const struct acpi_gpio_mapping));
          for(int _i0 = 0; _i0 < _len_gpios0; _i0++) {
              }
          int benchRet = acpi_dev_add_driver_gpios(adev,gpios);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_adev0; _aux++) {
          free(adev[_aux].driver_gpios);
          }
          free(adev);
          free(gpios);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_adev0 = 65025;
          struct acpi_device * adev = (struct acpi_device *) malloc(_len_adev0*sizeof(struct acpi_device));
          for(int _i0 = 0; _i0 < _len_adev0; _i0++) {
              int _len_adev__i0__driver_gpios0 = 1;
          adev[_i0].driver_gpios = (const struct acpi_gpio_mapping *) malloc(_len_adev__i0__driver_gpios0*sizeof(const struct acpi_gpio_mapping));
          for(int _j0 = 0; _j0 < _len_adev__i0__driver_gpios0; _j0++) {
              }
          }
          int _len_gpios0 = 65025;
          const struct acpi_gpio_mapping * gpios = (const struct acpi_gpio_mapping *) malloc(_len_gpios0*sizeof(const struct acpi_gpio_mapping));
          for(int _i0 = 0; _i0 < _len_gpios0; _i0++) {
              }
          int benchRet = acpi_dev_add_driver_gpios(adev,gpios);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_adev0; _aux++) {
          free(adev[_aux].driver_gpios);
          }
          free(adev);
          free(gpios);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_adev0 = 100;
          struct acpi_device * adev = (struct acpi_device *) malloc(_len_adev0*sizeof(struct acpi_device));
          for(int _i0 = 0; _i0 < _len_adev0; _i0++) {
              int _len_adev__i0__driver_gpios0 = 1;
          adev[_i0].driver_gpios = (const struct acpi_gpio_mapping *) malloc(_len_adev__i0__driver_gpios0*sizeof(const struct acpi_gpio_mapping));
          for(int _j0 = 0; _j0 < _len_adev__i0__driver_gpios0; _j0++) {
              }
          }
          int _len_gpios0 = 100;
          const struct acpi_gpio_mapping * gpios = (const struct acpi_gpio_mapping *) malloc(_len_gpios0*sizeof(const struct acpi_gpio_mapping));
          for(int _i0 = 0; _i0 < _len_gpios0; _i0++) {
              }
          int benchRet = acpi_dev_add_driver_gpios(adev,gpios);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_adev0; _aux++) {
          free(adev[_aux].driver_gpios);
          }
          free(adev);
          free(gpios);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
