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
struct sis_laptop {scalar_t__ device; scalar_t__ subvendor; scalar_t__ subdevice; } ;
struct pci_dev {scalar_t__ device; scalar_t__ subsystem_vendor; scalar_t__ subsystem_device; } ;

/* Variables and functions */
 struct sis_laptop* sis_laptop ; 

__attribute__((used)) static int sis_short_ata40(struct pci_dev *dev)
{
	const struct sis_laptop *lap = &sis_laptop[0];

	while (lap->device) {
		if (lap->device == dev->device &&
		    lap->subvendor == dev->subsystem_vendor &&
		    lap->subdevice == dev->subsystem_device)
			return 1;
		lap++;
	}

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
          int _len_dev0 = 1;
          struct pci_dev * dev = (struct pci_dev *) malloc(_len_dev0*sizeof(struct pci_dev));
          for(int _i0 = 0; _i0 < _len_dev0; _i0++) {
            dev[_i0].device = ((-2 * (next_i()%2)) + 1) * next_i();
        dev[_i0].subsystem_vendor = ((-2 * (next_i()%2)) + 1) * next_i();
        dev[_i0].subsystem_device = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = sis_short_ata40(dev);
          printf("%d\n", benchRet); 
          free(dev);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_dev0 = 65025;
          struct pci_dev * dev = (struct pci_dev *) malloc(_len_dev0*sizeof(struct pci_dev));
          for(int _i0 = 0; _i0 < _len_dev0; _i0++) {
            dev[_i0].device = ((-2 * (next_i()%2)) + 1) * next_i();
        dev[_i0].subsystem_vendor = ((-2 * (next_i()%2)) + 1) * next_i();
        dev[_i0].subsystem_device = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = sis_short_ata40(dev);
          printf("%d\n", benchRet); 
          free(dev);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_dev0 = 100;
          struct pci_dev * dev = (struct pci_dev *) malloc(_len_dev0*sizeof(struct pci_dev));
          for(int _i0 = 0; _i0 < _len_dev0; _i0++) {
            dev[_i0].device = ((-2 * (next_i()%2)) + 1) * next_i();
        dev[_i0].subsystem_vendor = ((-2 * (next_i()%2)) + 1) * next_i();
        dev[_i0].subsystem_device = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = sis_short_ata40(dev);
          printf("%d\n", benchRet); 
          free(dev);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
