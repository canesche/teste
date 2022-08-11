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
struct agp_bridge_data {TYPE_1__* dev; } ;
struct TYPE_6__ {int major_version; int minor_version; } ;
struct TYPE_5__ {int /*<<< orphan*/  tlb_flush; int /*<<< orphan*/  cleanup; int /*<<< orphan*/  fetch_size; int /*<<< orphan*/  configure; int /*<<< orphan*/  num_aperture_sizes; int /*<<< orphan*/  size_type; int /*<<< orphan*/  aperture_sizes; int /*<<< orphan*/  agp_enable; } ;
struct TYPE_4__ {scalar_t__ device; } ;

/* Variables and functions */
 int /*<<< orphan*/  AGP_GENERIC_SIZES_ENTRIES ; 
 int /*<<< orphan*/  U16_APER_SIZE ; 
 int /*<<< orphan*/  agp3_generic_cleanup ; 
 int /*<<< orphan*/  agp3_generic_configure ; 
 int /*<<< orphan*/  agp3_generic_fetch_size ; 
 int /*<<< orphan*/  agp3_generic_sizes ; 
 int /*<<< orphan*/  agp3_generic_tlbflush ; 
 TYPE_3__* agp_bridge ; 
 int agp_sis_agp_spec ; 
 scalar_t__ agp_sis_force_delay ; 
 scalar_t__* sis_broken_chipsets ; 
 int /*<<< orphan*/  sis_delayed_enable ; 
 TYPE_2__ sis_driver ; 

__attribute__((used)) static void sis_get_driver(struct agp_bridge_data *bridge)
{
	int i;

	for (i=0; sis_broken_chipsets[i]!=0; ++i)
		if (bridge->dev->device==sis_broken_chipsets[i])
			break;

	if (sis_broken_chipsets[i] || agp_sis_force_delay)
		sis_driver.agp_enable=sis_delayed_enable;

	// sis chipsets that indicate less than agp3.5
	// are not actually fully agp3 compliant
	if ((agp_bridge->major_version == 3 && agp_bridge->minor_version >= 5
	     && agp_sis_agp_spec!=0) || agp_sis_agp_spec==1) {
		sis_driver.aperture_sizes = agp3_generic_sizes;
		sis_driver.size_type = U16_APER_SIZE;
		sis_driver.num_aperture_sizes = AGP_GENERIC_SIZES_ENTRIES;
		sis_driver.configure = agp3_generic_configure;
		sis_driver.fetch_size = agp3_generic_fetch_size;
		sis_driver.cleanup = agp3_generic_cleanup;
		sis_driver.tlb_flush = agp3_generic_tlbflush;
	}
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
          int _len_bridge0 = 1;
          struct agp_bridge_data * bridge = (struct agp_bridge_data *) malloc(_len_bridge0*sizeof(struct agp_bridge_data));
          for(int _i0 = 0; _i0 < _len_bridge0; _i0++) {
              int _len_bridge__i0__dev0 = 1;
          bridge[_i0].dev = (struct TYPE_4__ *) malloc(_len_bridge__i0__dev0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_bridge__i0__dev0; _j0++) {
            bridge[_i0].dev->device = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          sis_get_driver(bridge);
          for(int _aux = 0; _aux < _len_bridge0; _aux++) {
          free(bridge[_aux].dev);
          }
          free(bridge);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_bridge0 = 65025;
          struct agp_bridge_data * bridge = (struct agp_bridge_data *) malloc(_len_bridge0*sizeof(struct agp_bridge_data));
          for(int _i0 = 0; _i0 < _len_bridge0; _i0++) {
              int _len_bridge__i0__dev0 = 1;
          bridge[_i0].dev = (struct TYPE_4__ *) malloc(_len_bridge__i0__dev0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_bridge__i0__dev0; _j0++) {
            bridge[_i0].dev->device = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          sis_get_driver(bridge);
          for(int _aux = 0; _aux < _len_bridge0; _aux++) {
          free(bridge[_aux].dev);
          }
          free(bridge);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_bridge0 = 100;
          struct agp_bridge_data * bridge = (struct agp_bridge_data *) malloc(_len_bridge0*sizeof(struct agp_bridge_data));
          for(int _i0 = 0; _i0 < _len_bridge0; _i0++) {
              int _len_bridge__i0__dev0 = 1;
          bridge[_i0].dev = (struct TYPE_4__ *) malloc(_len_bridge__i0__dev0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_bridge__i0__dev0; _j0++) {
            bridge[_i0].dev->device = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          sis_get_driver(bridge);
          for(int _aux = 0; _aux < _len_bridge0; _aux++) {
          free(bridge[_aux].dev);
          }
          free(bridge);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
