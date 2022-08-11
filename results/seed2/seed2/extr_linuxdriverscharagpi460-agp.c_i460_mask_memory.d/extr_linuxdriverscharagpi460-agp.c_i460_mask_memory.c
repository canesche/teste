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
struct agp_bridge_data {TYPE_2__* driver; } ;
typedef  int dma_addr_t ;
struct TYPE_4__ {TYPE_1__* masks; } ;
struct TYPE_3__ {int mask; } ;

/* Variables and functions */
 int I460_IO_PAGE_SHIFT ; 

__attribute__((used)) static unsigned long i460_mask_memory (struct agp_bridge_data *bridge,
				       dma_addr_t addr, int type)
{
	/* Make sure the returned address is a valid GATT entry */
	return bridge->driver->masks[0].mask
		| (((addr & ~((1 << I460_IO_PAGE_SHIFT) - 1)) & 0xfffff000) >> 12);
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
          int addr = 100;
          int type = 100;
          int _len_bridge0 = 1;
          struct agp_bridge_data * bridge = (struct agp_bridge_data *) malloc(_len_bridge0*sizeof(struct agp_bridge_data));
          for(int _i0 = 0; _i0 < _len_bridge0; _i0++) {
              int _len_bridge__i0__driver0 = 1;
          bridge[_i0].driver = (struct TYPE_4__ *) malloc(_len_bridge__i0__driver0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_bridge__i0__driver0; _j0++) {
              int _len_bridge__i0__driver_masks0 = 1;
          bridge[_i0].driver->masks = (struct TYPE_3__ *) malloc(_len_bridge__i0__driver_masks0*sizeof(struct TYPE_3__));
          for(int _j0 = 0; _j0 < _len_bridge__i0__driver_masks0; _j0++) {
            bridge[_i0].driver->masks->mask = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          unsigned long benchRet = i460_mask_memory(bridge,addr,type);
          printf("%lu\n", benchRet); 
          for(int _aux = 0; _aux < _len_bridge0; _aux++) {
          free(bridge[_aux].driver);
          }
          free(bridge);
        
        break;
    }
    // big-arr
    case 1:
    {
          int addr = 255;
          int type = 255;
          int _len_bridge0 = 65025;
          struct agp_bridge_data * bridge = (struct agp_bridge_data *) malloc(_len_bridge0*sizeof(struct agp_bridge_data));
          for(int _i0 = 0; _i0 < _len_bridge0; _i0++) {
              int _len_bridge__i0__driver0 = 1;
          bridge[_i0].driver = (struct TYPE_4__ *) malloc(_len_bridge__i0__driver0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_bridge__i0__driver0; _j0++) {
              int _len_bridge__i0__driver_masks0 = 1;
          bridge[_i0].driver->masks = (struct TYPE_3__ *) malloc(_len_bridge__i0__driver_masks0*sizeof(struct TYPE_3__));
          for(int _j0 = 0; _j0 < _len_bridge__i0__driver_masks0; _j0++) {
            bridge[_i0].driver->masks->mask = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          unsigned long benchRet = i460_mask_memory(bridge,addr,type);
          printf("%lu\n", benchRet); 
          for(int _aux = 0; _aux < _len_bridge0; _aux++) {
          free(bridge[_aux].driver);
          }
          free(bridge);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int addr = 10;
          int type = 10;
          int _len_bridge0 = 100;
          struct agp_bridge_data * bridge = (struct agp_bridge_data *) malloc(_len_bridge0*sizeof(struct agp_bridge_data));
          for(int _i0 = 0; _i0 < _len_bridge0; _i0++) {
              int _len_bridge__i0__driver0 = 1;
          bridge[_i0].driver = (struct TYPE_4__ *) malloc(_len_bridge__i0__driver0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_bridge__i0__driver0; _j0++) {
              int _len_bridge__i0__driver_masks0 = 1;
          bridge[_i0].driver->masks = (struct TYPE_3__ *) malloc(_len_bridge__i0__driver_masks0*sizeof(struct TYPE_3__));
          for(int _j0 = 0; _j0 < _len_bridge__i0__driver_masks0; _j0++) {
            bridge[_i0].driver->masks->mask = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          unsigned long benchRet = i460_mask_memory(bridge,addr,type);
          printf("%lu\n", benchRet); 
          for(int _aux = 0; _aux < _len_bridge0; _aux++) {
          free(bridge[_aux].driver);
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
