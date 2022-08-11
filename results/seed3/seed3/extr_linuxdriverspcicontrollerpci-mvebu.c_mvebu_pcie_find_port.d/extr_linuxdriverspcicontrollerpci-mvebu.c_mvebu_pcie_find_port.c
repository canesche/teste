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
       3            linked\n\
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
struct pci_bus {scalar_t__ number; } ;
struct TYPE_2__ {scalar_t__ secondary_bus; scalar_t__ subordinate_bus; } ;
struct mvebu_pcie_port {int devfn; TYPE_1__ bridge; } ;
struct mvebu_pcie {int nports; struct mvebu_pcie_port* ports; } ;

/* Variables and functions */

__attribute__((used)) static struct mvebu_pcie_port *mvebu_pcie_find_port(struct mvebu_pcie *pcie,
						    struct pci_bus *bus,
						    int devfn)
{
	int i;

	for (i = 0; i < pcie->nports; i++) {
		struct mvebu_pcie_port *port = &pcie->ports[i];

		if (bus->number == 0 && port->devfn == devfn)
			return port;
		if (bus->number != 0 &&
		    bus->number >= port->bridge.secondary_bus &&
		    bus->number <= port->bridge.subordinate_bus)
			return port;
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
          int devfn = 100;
          int _len_pcie0 = 1;
          struct mvebu_pcie * pcie = (struct mvebu_pcie *) malloc(_len_pcie0*sizeof(struct mvebu_pcie));
          for(int _i0 = 0; _i0 < _len_pcie0; _i0++) {
            pcie[_i0].nports = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_pcie__i0__ports0 = 1;
          pcie[_i0].ports = (struct mvebu_pcie_port *) malloc(_len_pcie__i0__ports0*sizeof(struct mvebu_pcie_port));
          for(int _j0 = 0; _j0 < _len_pcie__i0__ports0; _j0++) {
            pcie[_i0].ports->devfn = ((-2 * (next_i()%2)) + 1) * next_i();
        pcie[_i0].ports->bridge.secondary_bus = ((-2 * (next_i()%2)) + 1) * next_i();
        pcie[_i0].ports->bridge.subordinate_bus = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_bus0 = 1;
          struct pci_bus * bus = (struct pci_bus *) malloc(_len_bus0*sizeof(struct pci_bus));
          for(int _i0 = 0; _i0 < _len_bus0; _i0++) {
            bus[_i0].number = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          struct mvebu_pcie_port * benchRet = mvebu_pcie_find_port(pcie,bus,devfn);
          printf("%d\n", (*benchRet).devfn);
          for(int _aux = 0; _aux < _len_pcie0; _aux++) {
          free(pcie[_aux].ports);
          }
          free(pcie);
          free(bus);
        
        break;
    }
    // big-arr
    case 1:
    {
          int devfn = 255;
          int _len_pcie0 = 65025;
          struct mvebu_pcie * pcie = (struct mvebu_pcie *) malloc(_len_pcie0*sizeof(struct mvebu_pcie));
          for(int _i0 = 0; _i0 < _len_pcie0; _i0++) {
            pcie[_i0].nports = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_pcie__i0__ports0 = 1;
          pcie[_i0].ports = (struct mvebu_pcie_port *) malloc(_len_pcie__i0__ports0*sizeof(struct mvebu_pcie_port));
          for(int _j0 = 0; _j0 < _len_pcie__i0__ports0; _j0++) {
            pcie[_i0].ports->devfn = ((-2 * (next_i()%2)) + 1) * next_i();
        pcie[_i0].ports->bridge.secondary_bus = ((-2 * (next_i()%2)) + 1) * next_i();
        pcie[_i0].ports->bridge.subordinate_bus = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_bus0 = 65025;
          struct pci_bus * bus = (struct pci_bus *) malloc(_len_bus0*sizeof(struct pci_bus));
          for(int _i0 = 0; _i0 < _len_bus0; _i0++) {
            bus[_i0].number = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          struct mvebu_pcie_port * benchRet = mvebu_pcie_find_port(pcie,bus,devfn);
          printf("%d\n", (*benchRet).devfn);
          for(int _aux = 0; _aux < _len_pcie0; _aux++) {
          free(pcie[_aux].ports);
          }
          free(pcie);
          free(bus);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int devfn = 10;
          int _len_pcie0 = 100;
          struct mvebu_pcie * pcie = (struct mvebu_pcie *) malloc(_len_pcie0*sizeof(struct mvebu_pcie));
          for(int _i0 = 0; _i0 < _len_pcie0; _i0++) {
            pcie[_i0].nports = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_pcie__i0__ports0 = 1;
          pcie[_i0].ports = (struct mvebu_pcie_port *) malloc(_len_pcie__i0__ports0*sizeof(struct mvebu_pcie_port));
          for(int _j0 = 0; _j0 < _len_pcie__i0__ports0; _j0++) {
            pcie[_i0].ports->devfn = ((-2 * (next_i()%2)) + 1) * next_i();
        pcie[_i0].ports->bridge.secondary_bus = ((-2 * (next_i()%2)) + 1) * next_i();
        pcie[_i0].ports->bridge.subordinate_bus = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_bus0 = 100;
          struct pci_bus * bus = (struct pci_bus *) malloc(_len_bus0*sizeof(struct pci_bus));
          for(int _i0 = 0; _i0 < _len_bus0; _i0++) {
            bus[_i0].number = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          struct mvebu_pcie_port * benchRet = mvebu_pcie_find_port(pcie,bus,devfn);
          printf("%d\n", (*benchRet).devfn);
          for(int _aux = 0; _aux < _len_pcie0; _aux++) {
          free(pcie[_aux].ports);
          }
          free(pcie);
          free(bus);
        
        break;
    }
    // linked
    case 3:
    {
          int devfn = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_pcie0 = 1;
          struct mvebu_pcie * pcie = (struct mvebu_pcie *) malloc(_len_pcie0*sizeof(struct mvebu_pcie));
          for(int _i0 = 0; _i0 < _len_pcie0; _i0++) {
            pcie[_i0].nports = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_pcie__i0__ports0 = 1;
          pcie[_i0].ports = (struct mvebu_pcie_port *) malloc(_len_pcie__i0__ports0*sizeof(struct mvebu_pcie_port));
          for(int _j0 = 0; _j0 < _len_pcie__i0__ports0; _j0++) {
            pcie[_i0].ports->devfn = ((-2 * (next_i()%2)) + 1) * next_i();
        pcie[_i0].ports->bridge.secondary_bus = ((-2 * (next_i()%2)) + 1) * next_i();
        pcie[_i0].ports->bridge.subordinate_bus = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_bus0 = 1;
          struct pci_bus * bus = (struct pci_bus *) malloc(_len_bus0*sizeof(struct pci_bus));
          for(int _i0 = 0; _i0 < _len_bus0; _i0++) {
            bus[_i0].number = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          struct mvebu_pcie_port * benchRet = mvebu_pcie_find_port(pcie,bus,devfn);
          printf("%d\n", (*benchRet).devfn);
          for(int _aux = 0; _aux < _len_pcie0; _aux++) {
          free(pcie[_aux].ports);
          }
          free(pcie);
          free(bus);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
