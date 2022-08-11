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
typedef  int /*<<< orphan*/  u32 ;
struct tioca_kernel {int /*<<< orphan*/  ca_gfxgart_base; scalar_t__ ca_gfxgart; } ;
struct agp_bridge_data {int /*<<< orphan*/  gatt_bus_addr; int /*<<< orphan*/ * gatt_table_real; int /*<<< orphan*/ * gatt_table; scalar_t__ dev_private_data; } ;

/* Variables and functions */

__attribute__((used)) static int sgi_tioca_create_gatt_table(struct agp_bridge_data *bridge)
{
	struct tioca_kernel *info =
	    (struct tioca_kernel *)bridge->dev_private_data;

	bridge->gatt_table_real = (u32 *) info->ca_gfxgart;
	bridge->gatt_table = bridge->gatt_table_real;
	bridge->gatt_bus_addr = info->ca_gfxgart_base;

	return 0;
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
            bridge[_i0].gatt_bus_addr = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_bridge__i0__gatt_table_real0 = 1;
          bridge[_i0].gatt_table_real = (int *) malloc(_len_bridge__i0__gatt_table_real0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_bridge__i0__gatt_table_real0; _j0++) {
            bridge[_i0].gatt_table_real[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_bridge__i0__gatt_table0 = 1;
          bridge[_i0].gatt_table = (int *) malloc(_len_bridge__i0__gatt_table0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_bridge__i0__gatt_table0; _j0++) {
            bridge[_i0].gatt_table[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        bridge[_i0].dev_private_data = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = sgi_tioca_create_gatt_table(bridge);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_bridge0; _aux++) {
          free(bridge[_aux].gatt_table_real);
          }
          for(int _aux = 0; _aux < _len_bridge0; _aux++) {
          free(bridge[_aux].gatt_table);
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
            bridge[_i0].gatt_bus_addr = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_bridge__i0__gatt_table_real0 = 1;
          bridge[_i0].gatt_table_real = (int *) malloc(_len_bridge__i0__gatt_table_real0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_bridge__i0__gatt_table_real0; _j0++) {
            bridge[_i0].gatt_table_real[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_bridge__i0__gatt_table0 = 1;
          bridge[_i0].gatt_table = (int *) malloc(_len_bridge__i0__gatt_table0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_bridge__i0__gatt_table0; _j0++) {
            bridge[_i0].gatt_table[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        bridge[_i0].dev_private_data = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = sgi_tioca_create_gatt_table(bridge);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_bridge0; _aux++) {
          free(bridge[_aux].gatt_table_real);
          }
          for(int _aux = 0; _aux < _len_bridge0; _aux++) {
          free(bridge[_aux].gatt_table);
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
            bridge[_i0].gatt_bus_addr = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_bridge__i0__gatt_table_real0 = 1;
          bridge[_i0].gatt_table_real = (int *) malloc(_len_bridge__i0__gatt_table_real0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_bridge__i0__gatt_table_real0; _j0++) {
            bridge[_i0].gatt_table_real[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_bridge__i0__gatt_table0 = 1;
          bridge[_i0].gatt_table = (int *) malloc(_len_bridge__i0__gatt_table0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_bridge__i0__gatt_table0; _j0++) {
            bridge[_i0].gatt_table[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        bridge[_i0].dev_private_data = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = sgi_tioca_create_gatt_table(bridge);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_bridge0; _aux++) {
          free(bridge[_aux].gatt_table_real);
          }
          for(int _aux = 0; _aux < _len_bridge0; _aux++) {
          free(bridge[_aux].gatt_table);
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
