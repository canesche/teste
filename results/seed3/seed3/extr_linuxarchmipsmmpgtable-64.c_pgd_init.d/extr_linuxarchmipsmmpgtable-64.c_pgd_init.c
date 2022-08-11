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
 int PTRS_PER_PGD ; 
 scalar_t__ invalid_pud_table ; 

void pgd_init(unsigned long page)
{
	unsigned long *p, *end;
	unsigned long entry;

#if !defined(__PAGETABLE_PUD_FOLDED)
	entry = (unsigned long)invalid_pud_table;
#elif !defined(__PAGETABLE_PMD_FOLDED)
	entry = (unsigned long)invalid_pmd_table;
#else
	entry = (unsigned long)invalid_pte_table;
#endif

	p = (unsigned long *) page;
	end = p + PTRS_PER_PGD;

	do {
		p[0] = entry;
		p[1] = entry;
		p[2] = entry;
		p[3] = entry;
		p[4] = entry;
		p += 8;
		p[-3] = entry;
		p[-2] = entry;
		p[-1] = entry;
	} while (p != end);
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
          unsigned long page = 100;
          pgd_init(page);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned long page = 255;
          pgd_init(page);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned long page = 10;
          pgd_init(page);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
