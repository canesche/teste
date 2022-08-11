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
typedef  size_t u8 ;
struct pci_func {size_t device; struct pci_func* next; } ;

/* Variables and functions */
 struct pci_func** cpqhp_slot_list ; 

struct pci_func *cpqhp_slot_find(u8 bus, u8 device, u8 index)
{
	int found = -1;
	struct pci_func *func;

	func = cpqhp_slot_list[bus];

	if ((func == NULL) || ((func->device == device) && (index == 0)))
		return func;

	if (func->device == device)
		found++;

	while (func->next != NULL) {
		func = func->next;

		if (func->device == device)
			found++;

		if (found == index)
			return func;
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
          unsigned long bus = 100;
          unsigned long device = 100;
          unsigned long index = 100;
          struct pci_func * benchRet = cpqhp_slot_find(bus,device,index);
          printf("%lu\n", (*benchRet).device);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned long bus = 255;
          unsigned long device = 255;
          unsigned long index = 255;
          struct pci_func * benchRet = cpqhp_slot_find(bus,device,index);
          printf("%lu\n", (*benchRet).device);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned long bus = 10;
          unsigned long device = 10;
          unsigned long index = 10;
          struct pci_func * benchRet = cpqhp_slot_find(bus,device,index);
          printf("%lu\n", (*benchRet).device);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
