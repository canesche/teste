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
struct device {int dummy; } ;
struct bcma_bus {int hosttype; TYPE_3__* host_sdio; TYPE_2__* host_pdev; TYPE_1__* host_pci; } ;
struct TYPE_6__ {struct device dev; } ;
struct TYPE_5__ {struct device dev; } ;
struct TYPE_4__ {struct device dev; } ;

/* Variables and functions */
#define  BCMA_HOSTTYPE_PCI 130 
#define  BCMA_HOSTTYPE_SDIO 129 
#define  BCMA_HOSTTYPE_SOC 128 

struct device *bcma_bus_get_host_dev(struct bcma_bus *bus)
{
	switch (bus->hosttype) {
	case BCMA_HOSTTYPE_PCI:
		if (bus->host_pci)
			return &bus->host_pci->dev;
		else
			return NULL;
	case BCMA_HOSTTYPE_SOC:
		if (bus->host_pdev)
			return &bus->host_pdev->dev;
		else
			return NULL;
	case BCMA_HOSTTYPE_SDIO:
		if (bus->host_sdio)
			return &bus->host_sdio->dev;
		else
			return NULL;
	}
	return NULL;
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
          int _len_bus0 = 1;
          struct bcma_bus * bus = (struct bcma_bus *) malloc(_len_bus0*sizeof(struct bcma_bus));
          for(int _i0 = 0; _i0 < _len_bus0; _i0++) {
            bus[_i0].hosttype = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_bus__i0__host_sdio0 = 1;
          bus[_i0].host_sdio = (struct TYPE_6__ *) malloc(_len_bus__i0__host_sdio0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_bus__i0__host_sdio0; _j0++) {
            bus[_i0].host_sdio->dev.dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_bus__i0__host_pdev0 = 1;
          bus[_i0].host_pdev = (struct TYPE_5__ *) malloc(_len_bus__i0__host_pdev0*sizeof(struct TYPE_5__));
          for(int _j0 = 0; _j0 < _len_bus__i0__host_pdev0; _j0++) {
            bus[_i0].host_pdev->dev.dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_bus__i0__host_pci0 = 1;
          bus[_i0].host_pci = (struct TYPE_4__ *) malloc(_len_bus__i0__host_pci0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_bus__i0__host_pci0; _j0++) {
            bus[_i0].host_pci->dev.dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          struct device * benchRet = bcma_bus_get_host_dev(bus);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_bus0; _aux++) {
          free(bus[_aux].host_sdio);
          }
          for(int _aux = 0; _aux < _len_bus0; _aux++) {
          free(bus[_aux].host_pdev);
          }
          for(int _aux = 0; _aux < _len_bus0; _aux++) {
          free(bus[_aux].host_pci);
          }
          free(bus);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_bus0 = 65025;
          struct bcma_bus * bus = (struct bcma_bus *) malloc(_len_bus0*sizeof(struct bcma_bus));
          for(int _i0 = 0; _i0 < _len_bus0; _i0++) {
            bus[_i0].hosttype = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_bus__i0__host_sdio0 = 1;
          bus[_i0].host_sdio = (struct TYPE_6__ *) malloc(_len_bus__i0__host_sdio0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_bus__i0__host_sdio0; _j0++) {
            bus[_i0].host_sdio->dev.dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_bus__i0__host_pdev0 = 1;
          bus[_i0].host_pdev = (struct TYPE_5__ *) malloc(_len_bus__i0__host_pdev0*sizeof(struct TYPE_5__));
          for(int _j0 = 0; _j0 < _len_bus__i0__host_pdev0; _j0++) {
            bus[_i0].host_pdev->dev.dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_bus__i0__host_pci0 = 1;
          bus[_i0].host_pci = (struct TYPE_4__ *) malloc(_len_bus__i0__host_pci0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_bus__i0__host_pci0; _j0++) {
            bus[_i0].host_pci->dev.dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          struct device * benchRet = bcma_bus_get_host_dev(bus);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_bus0; _aux++) {
          free(bus[_aux].host_sdio);
          }
          for(int _aux = 0; _aux < _len_bus0; _aux++) {
          free(bus[_aux].host_pdev);
          }
          for(int _aux = 0; _aux < _len_bus0; _aux++) {
          free(bus[_aux].host_pci);
          }
          free(bus);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_bus0 = 100;
          struct bcma_bus * bus = (struct bcma_bus *) malloc(_len_bus0*sizeof(struct bcma_bus));
          for(int _i0 = 0; _i0 < _len_bus0; _i0++) {
            bus[_i0].hosttype = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_bus__i0__host_sdio0 = 1;
          bus[_i0].host_sdio = (struct TYPE_6__ *) malloc(_len_bus__i0__host_sdio0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_bus__i0__host_sdio0; _j0++) {
            bus[_i0].host_sdio->dev.dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_bus__i0__host_pdev0 = 1;
          bus[_i0].host_pdev = (struct TYPE_5__ *) malloc(_len_bus__i0__host_pdev0*sizeof(struct TYPE_5__));
          for(int _j0 = 0; _j0 < _len_bus__i0__host_pdev0; _j0++) {
            bus[_i0].host_pdev->dev.dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_bus__i0__host_pci0 = 1;
          bus[_i0].host_pci = (struct TYPE_4__ *) malloc(_len_bus__i0__host_pci0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_bus__i0__host_pci0; _j0++) {
            bus[_i0].host_pci->dev.dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          struct device * benchRet = bcma_bus_get_host_dev(bus);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_bus0; _aux++) {
          free(bus[_aux].host_sdio);
          }
          for(int _aux = 0; _aux < _len_bus0; _aux++) {
          free(bus[_aux].host_pdev);
          }
          for(int _aux = 0; _aux < _len_bus0; _aux++) {
          free(bus[_aux].host_pci);
          }
          free(bus);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
