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
struct slotinfo {TYPE_1__* si_funcs; } ;
struct businfo {struct slotinfo* slotinfo; } ;
struct TYPE_2__ {int /*<<< orphan*/ * fi_devi; } ;

/* Variables and functions */
 int MAXFUNCS ; 
 struct businfo** pci_businfo ; 

__attribute__((used)) static int
pci_emul_is_mfdev(int bus, int slot)
{
	struct businfo *bi;
	struct slotinfo *si;
	int f, numfuncs;

	numfuncs = 0;
	if ((bi = pci_businfo[bus]) != NULL) {
		si = &bi->slotinfo[slot];
		for (f = 0; f < MAXFUNCS; f++) {
			if (si->si_funcs[f].fi_devi != NULL) {
				numfuncs++;
			}
		}
	}
	return (numfuncs > 1);
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
          int bus = 100;
          int slot = 100;
          int benchRet = pci_emul_is_mfdev(bus,slot);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          int bus = 255;
          int slot = 255;
          int benchRet = pci_emul_is_mfdev(bus,slot);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int bus = 10;
          int slot = 10;
          int benchRet = pci_emul_is_mfdev(bus,slot);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
