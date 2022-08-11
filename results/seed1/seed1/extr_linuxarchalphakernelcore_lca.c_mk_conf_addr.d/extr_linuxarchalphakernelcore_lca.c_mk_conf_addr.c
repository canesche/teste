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
typedef  int* vulp ;
typedef  int u8 ;
struct pci_bus {int number; } ;

/* Variables and functions */
 scalar_t__ LCA_IOC_CONF ; 

__attribute__((used)) static int
mk_conf_addr(struct pci_bus *pbus, unsigned int device_fn, int where,
	     unsigned long *pci_addr)
{
	unsigned long addr;
	u8 bus = pbus->number;

	if (bus == 0) {
		int device = device_fn >> 3;
		int func = device_fn & 0x7;

		/* Type 0 configuration cycle.  */

		if (device > 12) {
			return -1;
		}

		*(vulp)LCA_IOC_CONF = 0;
		addr = (1 << (11 + device)) | (func << 8) | where;
	} else {
		/* Type 1 configuration cycle.  */
		*(vulp)LCA_IOC_CONF = 1;
		addr = (bus << 16) | (device_fn << 8) | where;
	}
	*pci_addr = addr;
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
          unsigned int device_fn = 100;
          int where = 100;
          int _len_pbus0 = 1;
          struct pci_bus * pbus = (struct pci_bus *) malloc(_len_pbus0*sizeof(struct pci_bus));
          for(int _i0 = 0; _i0 < _len_pbus0; _i0++) {
            pbus[_i0].number = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pci_addr0 = 1;
          unsigned long * pci_addr = (unsigned long *) malloc(_len_pci_addr0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_pci_addr0; _i0++) {
            pci_addr[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = mk_conf_addr(pbus,device_fn,where,pci_addr);
          printf("%d\n", benchRet); 
          free(pbus);
          free(pci_addr);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned int device_fn = 255;
          int where = 255;
          int _len_pbus0 = 65025;
          struct pci_bus * pbus = (struct pci_bus *) malloc(_len_pbus0*sizeof(struct pci_bus));
          for(int _i0 = 0; _i0 < _len_pbus0; _i0++) {
            pbus[_i0].number = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pci_addr0 = 65025;
          unsigned long * pci_addr = (unsigned long *) malloc(_len_pci_addr0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_pci_addr0; _i0++) {
            pci_addr[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = mk_conf_addr(pbus,device_fn,where,pci_addr);
          printf("%d\n", benchRet); 
          free(pbus);
          free(pci_addr);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned int device_fn = 10;
          int where = 10;
          int _len_pbus0 = 100;
          struct pci_bus * pbus = (struct pci_bus *) malloc(_len_pbus0*sizeof(struct pci_bus));
          for(int _i0 = 0; _i0 < _len_pbus0; _i0++) {
            pbus[_i0].number = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pci_addr0 = 100;
          unsigned long * pci_addr = (unsigned long *) malloc(_len_pci_addr0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_pci_addr0; _i0++) {
            pci_addr[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = mk_conf_addr(pbus,device_fn,where,pci_addr);
          printf("%d\n", benchRet); 
          free(pbus);
          free(pci_addr);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
