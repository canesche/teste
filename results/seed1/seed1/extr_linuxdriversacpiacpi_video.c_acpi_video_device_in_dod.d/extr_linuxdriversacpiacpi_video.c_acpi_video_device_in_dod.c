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
struct acpi_video_device {int device_id; struct acpi_video_bus* video; } ;
struct acpi_video_bus {int attached_count; int child_count; TYPE_2__* attached_array; } ;
struct TYPE_3__ {int int_val; } ;
struct TYPE_4__ {TYPE_1__ value; } ;

/* Variables and functions */

__attribute__((used)) static bool acpi_video_device_in_dod(struct acpi_video_device *device)
{
	struct acpi_video_bus *video = device->video;
	int i;

	/*
	 * If we have a broken _DOD or we have more than 8 output devices
	 * under the graphics controller node that we can't proper deal with
	 * in the operation region code currently, no need to test.
	 */
	if (!video->attached_count || video->child_count > 8)
		return true;

	for (i = 0; i < video->attached_count; i++) {
		if ((video->attached_array[i].value.int_val & 0xfff) ==
		    (device->device_id & 0xfff))
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
          int _len_device0 = 1;
          struct acpi_video_device * device = (struct acpi_video_device *) malloc(_len_device0*sizeof(struct acpi_video_device));
          for(int _i0 = 0; _i0 < _len_device0; _i0++) {
            device[_i0].device_id = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_device__i0__video0 = 1;
          device[_i0].video = (struct acpi_video_bus *) malloc(_len_device__i0__video0*sizeof(struct acpi_video_bus));
          for(int _j0 = 0; _j0 < _len_device__i0__video0; _j0++) {
            device[_i0].video->attached_count = ((-2 * (next_i()%2)) + 1) * next_i();
        device[_i0].video->child_count = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_device__i0__video_attached_array0 = 1;
          device[_i0].video->attached_array = (struct TYPE_4__ *) malloc(_len_device__i0__video_attached_array0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_device__i0__video_attached_array0; _j0++) {
            device[_i0].video->attached_array->value.int_val = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int benchRet = acpi_video_device_in_dod(device);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_device0; _aux++) {
          free(device[_aux].video);
          }
          free(device);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_device0 = 65025;
          struct acpi_video_device * device = (struct acpi_video_device *) malloc(_len_device0*sizeof(struct acpi_video_device));
          for(int _i0 = 0; _i0 < _len_device0; _i0++) {
            device[_i0].device_id = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_device__i0__video0 = 1;
          device[_i0].video = (struct acpi_video_bus *) malloc(_len_device__i0__video0*sizeof(struct acpi_video_bus));
          for(int _j0 = 0; _j0 < _len_device__i0__video0; _j0++) {
            device[_i0].video->attached_count = ((-2 * (next_i()%2)) + 1) * next_i();
        device[_i0].video->child_count = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_device__i0__video_attached_array0 = 1;
          device[_i0].video->attached_array = (struct TYPE_4__ *) malloc(_len_device__i0__video_attached_array0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_device__i0__video_attached_array0; _j0++) {
            device[_i0].video->attached_array->value.int_val = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int benchRet = acpi_video_device_in_dod(device);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_device0; _aux++) {
          free(device[_aux].video);
          }
          free(device);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_device0 = 100;
          struct acpi_video_device * device = (struct acpi_video_device *) malloc(_len_device0*sizeof(struct acpi_video_device));
          for(int _i0 = 0; _i0 < _len_device0; _i0++) {
            device[_i0].device_id = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_device__i0__video0 = 1;
          device[_i0].video = (struct acpi_video_bus *) malloc(_len_device__i0__video0*sizeof(struct acpi_video_bus));
          for(int _j0 = 0; _j0 < _len_device__i0__video0; _j0++) {
            device[_i0].video->attached_count = ((-2 * (next_i()%2)) + 1) * next_i();
        device[_i0].video->child_count = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_device__i0__video_attached_array0 = 1;
          device[_i0].video->attached_array = (struct TYPE_4__ *) malloc(_len_device__i0__video_attached_array0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_device__i0__video_attached_array0; _j0++) {
            device[_i0].video->attached_array->value.int_val = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int benchRet = acpi_video_device_in_dod(device);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_device0; _aux++) {
          free(device[_aux].video);
          }
          free(device);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
