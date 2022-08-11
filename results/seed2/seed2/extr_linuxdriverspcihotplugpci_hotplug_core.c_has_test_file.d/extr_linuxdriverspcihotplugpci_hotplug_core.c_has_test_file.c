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
typedef  struct TYPE_2__   TYPE_1__ ;

/* Type definitions */
struct pci_slot {struct hotplug_slot* hotplug; } ;
struct hotplug_slot {TYPE_1__* ops; } ;
struct TYPE_2__ {scalar_t__ hardware_test; } ;

/* Variables and functions */

__attribute__((used)) static bool has_test_file(struct pci_slot *pci_slot)
{
	struct hotplug_slot *slot = pci_slot->hotplug;

	if ((!slot) || (!slot->ops))
		return false;
	if (slot->ops->hardware_test)
		return true;
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
          int _len_pci_slot0 = 1;
          struct pci_slot * pci_slot = (struct pci_slot *) malloc(_len_pci_slot0*sizeof(struct pci_slot));
          for(int _i0 = 0; _i0 < _len_pci_slot0; _i0++) {
              int _len_pci_slot__i0__hotplug0 = 1;
          pci_slot[_i0].hotplug = (struct hotplug_slot *) malloc(_len_pci_slot__i0__hotplug0*sizeof(struct hotplug_slot));
          for(int _j0 = 0; _j0 < _len_pci_slot__i0__hotplug0; _j0++) {
              int _len_pci_slot__i0__hotplug_ops0 = 1;
          pci_slot[_i0].hotplug->ops = (struct TYPE_2__ *) malloc(_len_pci_slot__i0__hotplug_ops0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_pci_slot__i0__hotplug_ops0; _j0++) {
            pci_slot[_i0].hotplug->ops->hardware_test = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int benchRet = has_test_file(pci_slot);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_pci_slot0; _aux++) {
          free(pci_slot[_aux].hotplug);
          }
          free(pci_slot);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_pci_slot0 = 65025;
          struct pci_slot * pci_slot = (struct pci_slot *) malloc(_len_pci_slot0*sizeof(struct pci_slot));
          for(int _i0 = 0; _i0 < _len_pci_slot0; _i0++) {
              int _len_pci_slot__i0__hotplug0 = 1;
          pci_slot[_i0].hotplug = (struct hotplug_slot *) malloc(_len_pci_slot__i0__hotplug0*sizeof(struct hotplug_slot));
          for(int _j0 = 0; _j0 < _len_pci_slot__i0__hotplug0; _j0++) {
              int _len_pci_slot__i0__hotplug_ops0 = 1;
          pci_slot[_i0].hotplug->ops = (struct TYPE_2__ *) malloc(_len_pci_slot__i0__hotplug_ops0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_pci_slot__i0__hotplug_ops0; _j0++) {
            pci_slot[_i0].hotplug->ops->hardware_test = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int benchRet = has_test_file(pci_slot);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_pci_slot0; _aux++) {
          free(pci_slot[_aux].hotplug);
          }
          free(pci_slot);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_pci_slot0 = 100;
          struct pci_slot * pci_slot = (struct pci_slot *) malloc(_len_pci_slot0*sizeof(struct pci_slot));
          for(int _i0 = 0; _i0 < _len_pci_slot0; _i0++) {
              int _len_pci_slot__i0__hotplug0 = 1;
          pci_slot[_i0].hotplug = (struct hotplug_slot *) malloc(_len_pci_slot__i0__hotplug0*sizeof(struct hotplug_slot));
          for(int _j0 = 0; _j0 < _len_pci_slot__i0__hotplug0; _j0++) {
              int _len_pci_slot__i0__hotplug_ops0 = 1;
          pci_slot[_i0].hotplug->ops = (struct TYPE_2__ *) malloc(_len_pci_slot__i0__hotplug_ops0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_pci_slot__i0__hotplug_ops0; _j0++) {
            pci_slot[_i0].hotplug->ops->hardware_test = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int benchRet = has_test_file(pci_slot);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_pci_slot0; _aux++) {
          free(pci_slot[_aux].hotplug);
          }
          free(pci_slot);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
