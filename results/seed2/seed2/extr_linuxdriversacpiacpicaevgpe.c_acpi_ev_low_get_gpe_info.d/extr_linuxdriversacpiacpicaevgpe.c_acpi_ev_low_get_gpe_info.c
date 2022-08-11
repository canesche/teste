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
typedef  scalar_t__ u32 ;
struct acpi_gpe_event_info {int dummy; } ;
struct acpi_gpe_block_info {scalar_t__ block_base_number; scalar_t__ gpe_count; struct acpi_gpe_event_info* event_info; } ;

/* Variables and functions */

struct acpi_gpe_event_info *acpi_ev_low_get_gpe_info(u32 gpe_number,
						     struct acpi_gpe_block_info
						     *gpe_block)
{
	u32 gpe_index;

	/*
	 * Validate that the gpe_number is within the specified gpe_block.
	 * (Two steps)
	 */
	if (!gpe_block || (gpe_number < gpe_block->block_base_number)) {
		return (NULL);
	}

	gpe_index = gpe_number - gpe_block->block_base_number;
	if (gpe_index >= gpe_block->gpe_count) {
		return (NULL);
	}

	return (&gpe_block->event_info[gpe_index]);
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
          long gpe_number = 100;
          int _len_gpe_block0 = 1;
          struct acpi_gpe_block_info * gpe_block = (struct acpi_gpe_block_info *) malloc(_len_gpe_block0*sizeof(struct acpi_gpe_block_info));
          for(int _i0 = 0; _i0 < _len_gpe_block0; _i0++) {
            gpe_block[_i0].block_base_number = ((-2 * (next_i()%2)) + 1) * next_i();
        gpe_block[_i0].gpe_count = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_gpe_block__i0__event_info0 = 1;
          gpe_block[_i0].event_info = (struct acpi_gpe_event_info *) malloc(_len_gpe_block__i0__event_info0*sizeof(struct acpi_gpe_event_info));
          for(int _j0 = 0; _j0 < _len_gpe_block__i0__event_info0; _j0++) {
            gpe_block[_i0].event_info->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          struct acpi_gpe_event_info * benchRet = acpi_ev_low_get_gpe_info(gpe_number,gpe_block);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_gpe_block0; _aux++) {
          free(gpe_block[_aux].event_info);
          }
          free(gpe_block);
        
        break;
    }
    // big-arr
    case 1:
    {
          long gpe_number = 255;
          int _len_gpe_block0 = 65025;
          struct acpi_gpe_block_info * gpe_block = (struct acpi_gpe_block_info *) malloc(_len_gpe_block0*sizeof(struct acpi_gpe_block_info));
          for(int _i0 = 0; _i0 < _len_gpe_block0; _i0++) {
            gpe_block[_i0].block_base_number = ((-2 * (next_i()%2)) + 1) * next_i();
        gpe_block[_i0].gpe_count = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_gpe_block__i0__event_info0 = 1;
          gpe_block[_i0].event_info = (struct acpi_gpe_event_info *) malloc(_len_gpe_block__i0__event_info0*sizeof(struct acpi_gpe_event_info));
          for(int _j0 = 0; _j0 < _len_gpe_block__i0__event_info0; _j0++) {
            gpe_block[_i0].event_info->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          struct acpi_gpe_event_info * benchRet = acpi_ev_low_get_gpe_info(gpe_number,gpe_block);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_gpe_block0; _aux++) {
          free(gpe_block[_aux].event_info);
          }
          free(gpe_block);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          long gpe_number = 10;
          int _len_gpe_block0 = 100;
          struct acpi_gpe_block_info * gpe_block = (struct acpi_gpe_block_info *) malloc(_len_gpe_block0*sizeof(struct acpi_gpe_block_info));
          for(int _i0 = 0; _i0 < _len_gpe_block0; _i0++) {
            gpe_block[_i0].block_base_number = ((-2 * (next_i()%2)) + 1) * next_i();
        gpe_block[_i0].gpe_count = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_gpe_block__i0__event_info0 = 1;
          gpe_block[_i0].event_info = (struct acpi_gpe_event_info *) malloc(_len_gpe_block__i0__event_info0*sizeof(struct acpi_gpe_event_info));
          for(int _j0 = 0; _j0 < _len_gpe_block__i0__event_info0; _j0++) {
            gpe_block[_i0].event_info->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          struct acpi_gpe_event_info * benchRet = acpi_ev_low_get_gpe_info(gpe_number,gpe_block);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_gpe_block0; _aux++) {
          free(gpe_block[_aux].event_info);
          }
          free(gpe_block);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
