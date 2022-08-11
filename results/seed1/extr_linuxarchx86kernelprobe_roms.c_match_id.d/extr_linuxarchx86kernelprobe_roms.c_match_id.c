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
struct pci_driver {struct pci_device_id* id_table; } ;
struct pci_device_id {unsigned short vendor; unsigned short device; } ;
struct pci_dev {unsigned short vendor; unsigned short device; struct pci_driver* driver; } ;

/* Variables and functions */

__attribute__((used)) static bool match_id(struct pci_dev *pdev, unsigned short vendor, unsigned short device)
{
	struct pci_driver *drv = pdev->driver;
	const struct pci_device_id *id;

	if (pdev->vendor == vendor && pdev->device == device)
		return true;

	for (id = drv ? drv->id_table : NULL; id && id->vendor; id++)
		if (id->vendor == vendor && id->device == device)
			break;

	return id && id->vendor;
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
          unsigned short vendor = 100;
          unsigned short device = 100;
          int _len_pdev0 = 1;
          struct pci_dev * pdev = (struct pci_dev *) malloc(_len_pdev0*sizeof(struct pci_dev));
          for(int _i0 = 0; _i0 < _len_pdev0; _i0++) {
            pdev[_i0].vendor = ((-2 * (next_i()%2)) + 1) * next_i();
        pdev[_i0].device = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_pdev__i0__driver0 = 1;
          pdev[_i0].driver = (struct pci_driver *) malloc(_len_pdev__i0__driver0*sizeof(struct pci_driver));
          for(int _j0 = 0; _j0 < _len_pdev__i0__driver0; _j0++) {
              int _len_pdev__i0__driver_id_table0 = 1;
          pdev[_i0].driver->id_table = (struct pci_device_id *) malloc(_len_pdev__i0__driver_id_table0*sizeof(struct pci_device_id));
          for(int _j0 = 0; _j0 < _len_pdev__i0__driver_id_table0; _j0++) {
            pdev[_i0].driver->id_table->vendor = ((-2 * (next_i()%2)) + 1) * next_i();
        pdev[_i0].driver->id_table->device = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int benchRet = match_id(pdev,vendor,device);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_pdev0; _aux++) {
          free(pdev[_aux].driver);
          }
          free(pdev);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned short vendor = 255;
          unsigned short device = 255;
          int _len_pdev0 = 65025;
          struct pci_dev * pdev = (struct pci_dev *) malloc(_len_pdev0*sizeof(struct pci_dev));
          for(int _i0 = 0; _i0 < _len_pdev0; _i0++) {
            pdev[_i0].vendor = ((-2 * (next_i()%2)) + 1) * next_i();
        pdev[_i0].device = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_pdev__i0__driver0 = 1;
          pdev[_i0].driver = (struct pci_driver *) malloc(_len_pdev__i0__driver0*sizeof(struct pci_driver));
          for(int _j0 = 0; _j0 < _len_pdev__i0__driver0; _j0++) {
              int _len_pdev__i0__driver_id_table0 = 1;
          pdev[_i0].driver->id_table = (struct pci_device_id *) malloc(_len_pdev__i0__driver_id_table0*sizeof(struct pci_device_id));
          for(int _j0 = 0; _j0 < _len_pdev__i0__driver_id_table0; _j0++) {
            pdev[_i0].driver->id_table->vendor = ((-2 * (next_i()%2)) + 1) * next_i();
        pdev[_i0].driver->id_table->device = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int benchRet = match_id(pdev,vendor,device);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_pdev0; _aux++) {
          free(pdev[_aux].driver);
          }
          free(pdev);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned short vendor = 10;
          unsigned short device = 10;
          int _len_pdev0 = 100;
          struct pci_dev * pdev = (struct pci_dev *) malloc(_len_pdev0*sizeof(struct pci_dev));
          for(int _i0 = 0; _i0 < _len_pdev0; _i0++) {
            pdev[_i0].vendor = ((-2 * (next_i()%2)) + 1) * next_i();
        pdev[_i0].device = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_pdev__i0__driver0 = 1;
          pdev[_i0].driver = (struct pci_driver *) malloc(_len_pdev__i0__driver0*sizeof(struct pci_driver));
          for(int _j0 = 0; _j0 < _len_pdev__i0__driver0; _j0++) {
              int _len_pdev__i0__driver_id_table0 = 1;
          pdev[_i0].driver->id_table = (struct pci_device_id *) malloc(_len_pdev__i0__driver_id_table0*sizeof(struct pci_device_id));
          for(int _j0 = 0; _j0 < _len_pdev__i0__driver_id_table0; _j0++) {
            pdev[_i0].driver->id_table->vendor = ((-2 * (next_i()%2)) + 1) * next_i();
        pdev[_i0].driver->id_table->device = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int benchRet = match_id(pdev,vendor,device);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_pdev0; _aux++) {
          free(pdev[_aux].driver);
          }
          free(pdev);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
