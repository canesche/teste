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
typedef  struct TYPE_9__   TYPE_4__ ;
typedef  struct TYPE_8__   TYPE_3__ ;
typedef  struct TYPE_7__   TYPE_2__ ;
typedef  struct TYPE_6__   TYPE_1__ ;

/* Type definitions */
struct TYPE_8__ {int ram; int cfg; int Address; int reset; int port; int ctlReg; } ;
struct TYPE_6__ {int* mem_type_id; int* addr; } ;
struct TYPE_7__ {TYPE_1__ pci; } ;
struct TYPE_9__ {TYPE_3__ xdi_adapter; TYPE_2__ resources; } ;
typedef  TYPE_4__ diva_os_xdi_adapter_t ;

/* Variables and functions */
 size_t MEM_TYPE_ADDRESS ; 
 size_t MEM_TYPE_CFG ; 
 size_t MEM_TYPE_CTLREG ; 
 size_t MEM_TYPE_PORT ; 
 size_t MEM_TYPE_RAM ; 
 size_t MEM_TYPE_RESET ; 
 int M_PCI_RESET ; 

__attribute__((used)) static void diva_bri_set_addresses(diva_os_xdi_adapter_t *a)
{
	a->resources.pci.mem_type_id[MEM_TYPE_RAM] = 0;
	a->resources.pci.mem_type_id[MEM_TYPE_CFG] = 1;
	a->resources.pci.mem_type_id[MEM_TYPE_ADDRESS] = 2;
	a->resources.pci.mem_type_id[MEM_TYPE_RESET] = 1;
	a->resources.pci.mem_type_id[MEM_TYPE_PORT] = 2;
	a->resources.pci.mem_type_id[MEM_TYPE_CTLREG] = 2;

	a->xdi_adapter.ram = a->resources.pci.addr[0];
	a->xdi_adapter.cfg = a->resources.pci.addr[1];
	a->xdi_adapter.Address = a->resources.pci.addr[2];

	a->xdi_adapter.reset = a->xdi_adapter.cfg;
	a->xdi_adapter.port = a->xdi_adapter.Address;

	a->xdi_adapter.ctlReg = a->xdi_adapter.port + M_PCI_RESET;

	a->xdi_adapter.reset += 0x4C;	/* PLX 9050 !! */
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
          int _len_a0 = 1;
          struct TYPE_9__ * a = (struct TYPE_9__ *) malloc(_len_a0*sizeof(struct TYPE_9__));
          for(int _i0 = 0; _i0 < _len_a0; _i0++) {
            a[_i0].xdi_adapter.ram = ((-2 * (next_i()%2)) + 1) * next_i();
        a[_i0].xdi_adapter.cfg = ((-2 * (next_i()%2)) + 1) * next_i();
        a[_i0].xdi_adapter.Address = ((-2 * (next_i()%2)) + 1) * next_i();
        a[_i0].xdi_adapter.reset = ((-2 * (next_i()%2)) + 1) * next_i();
        a[_i0].xdi_adapter.port = ((-2 * (next_i()%2)) + 1) * next_i();
        a[_i0].xdi_adapter.ctlReg = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_a__i0__resources_pci_mem_type_id0 = 1;
          a[_i0].resources.pci.mem_type_id = (int *) malloc(_len_a__i0__resources_pci_mem_type_id0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_a__i0__resources_pci_mem_type_id0; _j0++) {
            a[_i0].resources.pci.mem_type_id[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_a__i0__resources_pci_addr0 = 1;
          a[_i0].resources.pci.addr = (int *) malloc(_len_a__i0__resources_pci_addr0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_a__i0__resources_pci_addr0; _j0++) {
            a[_i0].resources.pci.addr[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          diva_bri_set_addresses(a);
          free(a);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_a0 = 65025;
          struct TYPE_9__ * a = (struct TYPE_9__ *) malloc(_len_a0*sizeof(struct TYPE_9__));
          for(int _i0 = 0; _i0 < _len_a0; _i0++) {
            a[_i0].xdi_adapter.ram = ((-2 * (next_i()%2)) + 1) * next_i();
        a[_i0].xdi_adapter.cfg = ((-2 * (next_i()%2)) + 1) * next_i();
        a[_i0].xdi_adapter.Address = ((-2 * (next_i()%2)) + 1) * next_i();
        a[_i0].xdi_adapter.reset = ((-2 * (next_i()%2)) + 1) * next_i();
        a[_i0].xdi_adapter.port = ((-2 * (next_i()%2)) + 1) * next_i();
        a[_i0].xdi_adapter.ctlReg = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_a__i0__resources_pci_mem_type_id0 = 1;
          a[_i0].resources.pci.mem_type_id = (int *) malloc(_len_a__i0__resources_pci_mem_type_id0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_a__i0__resources_pci_mem_type_id0; _j0++) {
            a[_i0].resources.pci.mem_type_id[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_a__i0__resources_pci_addr0 = 1;
          a[_i0].resources.pci.addr = (int *) malloc(_len_a__i0__resources_pci_addr0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_a__i0__resources_pci_addr0; _j0++) {
            a[_i0].resources.pci.addr[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          diva_bri_set_addresses(a);
          free(a);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_a0 = 100;
          struct TYPE_9__ * a = (struct TYPE_9__ *) malloc(_len_a0*sizeof(struct TYPE_9__));
          for(int _i0 = 0; _i0 < _len_a0; _i0++) {
            a[_i0].xdi_adapter.ram = ((-2 * (next_i()%2)) + 1) * next_i();
        a[_i0].xdi_adapter.cfg = ((-2 * (next_i()%2)) + 1) * next_i();
        a[_i0].xdi_adapter.Address = ((-2 * (next_i()%2)) + 1) * next_i();
        a[_i0].xdi_adapter.reset = ((-2 * (next_i()%2)) + 1) * next_i();
        a[_i0].xdi_adapter.port = ((-2 * (next_i()%2)) + 1) * next_i();
        a[_i0].xdi_adapter.ctlReg = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_a__i0__resources_pci_mem_type_id0 = 1;
          a[_i0].resources.pci.mem_type_id = (int *) malloc(_len_a__i0__resources_pci_mem_type_id0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_a__i0__resources_pci_mem_type_id0; _j0++) {
            a[_i0].resources.pci.mem_type_id[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_a__i0__resources_pci_addr0 = 1;
          a[_i0].resources.pci.addr = (int *) malloc(_len_a__i0__resources_pci_addr0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_a__i0__resources_pci_addr0; _j0++) {
            a[_i0].resources.pci.addr[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          diva_bri_set_addresses(a);
          free(a);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
