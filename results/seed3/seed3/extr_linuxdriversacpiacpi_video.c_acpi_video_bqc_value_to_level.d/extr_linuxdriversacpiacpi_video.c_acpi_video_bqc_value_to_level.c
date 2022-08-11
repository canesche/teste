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
struct acpi_video_device {TYPE_2__* brightness; } ;
struct TYPE_3__ {scalar_t__ _BCL_reversed; scalar_t__ _BQC_use_index; } ;
struct TYPE_4__ {int count; unsigned long long* levels; TYPE_1__ flags; } ;

/* Variables and functions */
 unsigned long long ACPI_VIDEO_FIRST_LEVEL ; 
 scalar_t__ bqc_offset_aml_bug_workaround ; 

__attribute__((used)) static unsigned long long
acpi_video_bqc_value_to_level(struct acpi_video_device *device,
			      unsigned long long bqc_value)
{
	unsigned long long level;

	if (device->brightness->flags._BQC_use_index) {
		/*
		 * _BQC returns an index that doesn't account for the first 2
		 * items with special meaning (see enum acpi_video_level_idx),
		 * so we need to compensate for that by offsetting ourselves
		 */
		if (device->brightness->flags._BCL_reversed)
			bqc_value = device->brightness->count -
				ACPI_VIDEO_FIRST_LEVEL - 1 - bqc_value;

		level = device->brightness->levels[bqc_value +
		                                   ACPI_VIDEO_FIRST_LEVEL];
	} else {
		level = bqc_value;
	}

	level += bqc_offset_aml_bug_workaround;

	return level;
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
          unsigned long long bqc_value = 100;
          int _len_device0 = 1;
          struct acpi_video_device * device = (struct acpi_video_device *) malloc(_len_device0*sizeof(struct acpi_video_device));
          for(int _i0 = 0; _i0 < _len_device0; _i0++) {
              int _len_device__i0__brightness0 = 1;
          device[_i0].brightness = (struct TYPE_4__ *) malloc(_len_device__i0__brightness0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_device__i0__brightness0; _j0++) {
            device[_i0].brightness->count = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_device__i0__brightness_levels0 = 1;
          device[_i0].brightness->levels = (unsigned long long *) malloc(_len_device__i0__brightness_levels0*sizeof(unsigned long long));
          for(int _j0 = 0; _j0 < _len_device__i0__brightness_levels0; _j0++) {
            device[_i0].brightness->levels[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        device[_i0].brightness->flags._BCL_reversed = ((-2 * (next_i()%2)) + 1) * next_i();
        device[_i0].brightness->flags._BQC_use_index = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          unsigned long long benchRet = acpi_video_bqc_value_to_level(device,bqc_value);
          printf("%llu\n", benchRet); 
          for(int _aux = 0; _aux < _len_device0; _aux++) {
          free(device[_aux].brightness);
          }
          free(device);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned long long bqc_value = 255;
          int _len_device0 = 65025;
          struct acpi_video_device * device = (struct acpi_video_device *) malloc(_len_device0*sizeof(struct acpi_video_device));
          for(int _i0 = 0; _i0 < _len_device0; _i0++) {
              int _len_device__i0__brightness0 = 1;
          device[_i0].brightness = (struct TYPE_4__ *) malloc(_len_device__i0__brightness0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_device__i0__brightness0; _j0++) {
            device[_i0].brightness->count = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_device__i0__brightness_levels0 = 1;
          device[_i0].brightness->levels = (unsigned long long *) malloc(_len_device__i0__brightness_levels0*sizeof(unsigned long long));
          for(int _j0 = 0; _j0 < _len_device__i0__brightness_levels0; _j0++) {
            device[_i0].brightness->levels[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        device[_i0].brightness->flags._BCL_reversed = ((-2 * (next_i()%2)) + 1) * next_i();
        device[_i0].brightness->flags._BQC_use_index = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          unsigned long long benchRet = acpi_video_bqc_value_to_level(device,bqc_value);
          printf("%llu\n", benchRet); 
          for(int _aux = 0; _aux < _len_device0; _aux++) {
          free(device[_aux].brightness);
          }
          free(device);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned long long bqc_value = 10;
          int _len_device0 = 100;
          struct acpi_video_device * device = (struct acpi_video_device *) malloc(_len_device0*sizeof(struct acpi_video_device));
          for(int _i0 = 0; _i0 < _len_device0; _i0++) {
              int _len_device__i0__brightness0 = 1;
          device[_i0].brightness = (struct TYPE_4__ *) malloc(_len_device__i0__brightness0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_device__i0__brightness0; _j0++) {
            device[_i0].brightness->count = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_device__i0__brightness_levels0 = 1;
          device[_i0].brightness->levels = (unsigned long long *) malloc(_len_device__i0__brightness_levels0*sizeof(unsigned long long));
          for(int _j0 = 0; _j0 < _len_device__i0__brightness_levels0; _j0++) {
            device[_i0].brightness->levels[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        device[_i0].brightness->flags._BCL_reversed = ((-2 * (next_i()%2)) + 1) * next_i();
        device[_i0].brightness->flags._BQC_use_index = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          unsigned long long benchRet = acpi_video_bqc_value_to_level(device,bqc_value);
          printf("%llu\n", benchRet); 
          for(int _aux = 0; _aux < _len_device0; _aux++) {
          free(device[_aux].brightness);
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
