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
typedef  scalar_t__ u8 ;
struct resource {int dummy; } ;
struct pci_dev {struct resource* resource; } ;

/* Variables and functions */
 scalar_t__ PCI_EA_BEI_BAR5 ; 
 scalar_t__ PCI_EA_BEI_ROM ; 
 scalar_t__ PCI_EA_P_IO ; 
 size_t PCI_ROM_RESOURCE ; 

__attribute__((used)) static struct resource *pci_ea_get_resource(struct pci_dev *dev, u8 bei,
					    u8 prop)
{
	if (bei <= PCI_EA_BEI_BAR5 && prop <= PCI_EA_P_IO)
		return &dev->resource[bei];
#ifdef CONFIG_PCI_IOV
	else if (bei >= PCI_EA_BEI_VF_BAR0 && bei <= PCI_EA_BEI_VF_BAR5 &&
		 (prop == PCI_EA_P_VF_MEM || prop == PCI_EA_P_VF_MEM_PREFETCH))
		return &dev->resource[PCI_IOV_RESOURCES +
				      bei - PCI_EA_BEI_VF_BAR0];
#endif
	else if (bei == PCI_EA_BEI_ROM)
		return &dev->resource[PCI_ROM_RESOURCE];
	else
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
          long bei = 100;
          long prop = 100;
          int _len_dev0 = 1;
          struct pci_dev * dev = (struct pci_dev *) malloc(_len_dev0*sizeof(struct pci_dev));
          for(int _i0 = 0; _i0 < _len_dev0; _i0++) {
              int _len_dev__i0__resource0 = 1;
          dev[_i0].resource = (struct resource *) malloc(_len_dev__i0__resource0*sizeof(struct resource));
          for(int _j0 = 0; _j0 < _len_dev__i0__resource0; _j0++) {
            dev[_i0].resource->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          struct resource * benchRet = pci_ea_get_resource(dev,bei,prop);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_dev0; _aux++) {
          free(dev[_aux].resource);
          }
          free(dev);
        
        break;
    }
    // big-arr
    case 1:
    {
          long bei = 255;
          long prop = 255;
          int _len_dev0 = 65025;
          struct pci_dev * dev = (struct pci_dev *) malloc(_len_dev0*sizeof(struct pci_dev));
          for(int _i0 = 0; _i0 < _len_dev0; _i0++) {
              int _len_dev__i0__resource0 = 1;
          dev[_i0].resource = (struct resource *) malloc(_len_dev__i0__resource0*sizeof(struct resource));
          for(int _j0 = 0; _j0 < _len_dev__i0__resource0; _j0++) {
            dev[_i0].resource->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          struct resource * benchRet = pci_ea_get_resource(dev,bei,prop);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_dev0; _aux++) {
          free(dev[_aux].resource);
          }
          free(dev);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          long bei = 10;
          long prop = 10;
          int _len_dev0 = 100;
          struct pci_dev * dev = (struct pci_dev *) malloc(_len_dev0*sizeof(struct pci_dev));
          for(int _i0 = 0; _i0 < _len_dev0; _i0++) {
              int _len_dev__i0__resource0 = 1;
          dev[_i0].resource = (struct resource *) malloc(_len_dev__i0__resource0*sizeof(struct resource));
          for(int _j0 = 0; _j0 < _len_dev__i0__resource0; _j0++) {
            dev[_i0].resource->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          struct resource * benchRet = pci_ea_get_resource(dev,bei,prop);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_dev0; _aux++) {
          free(dev[_aux].resource);
          }
          free(dev);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
