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

/* Variables and functions */
 int MMCR0_PMC1SEL_SH ; 
 int MMCR1_PMC3SEL_SH ; 

__attribute__((used)) static void p970_disable_pmc(unsigned int pmc, unsigned long mmcr[])
{
	int shift, i;

	if (pmc <= 1) {
		shift = MMCR0_PMC1SEL_SH - 7 * pmc;
		i = 0;
	} else {
		shift = MMCR1_PMC3SEL_SH - 5 * (pmc - 2);
		i = 1;
	}
	/*
	 * Setting the PMCxSEL field to 0x08 disables PMC x.
	 */
	mmcr[i] = (mmcr[i] & ~(0x1fUL << shift)) | (0x08UL << shift);
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
          unsigned int pmc = 100;
          int _len_mmcr0 = 1;
          unsigned long * mmcr = (unsigned long *) malloc(_len_mmcr0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_mmcr0; _i0++) {
            mmcr[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          p970_disable_pmc(pmc,mmcr);
          free(mmcr);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned int pmc = 255;
          int _len_mmcr0 = 65025;
          unsigned long * mmcr = (unsigned long *) malloc(_len_mmcr0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_mmcr0; _i0++) {
            mmcr[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          p970_disable_pmc(pmc,mmcr);
          free(mmcr);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned int pmc = 10;
          int _len_mmcr0 = 100;
          unsigned long * mmcr = (unsigned long *) malloc(_len_mmcr0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_mmcr0; _i0++) {
            mmcr[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          p970_disable_pmc(pmc,mmcr);
          free(mmcr);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
