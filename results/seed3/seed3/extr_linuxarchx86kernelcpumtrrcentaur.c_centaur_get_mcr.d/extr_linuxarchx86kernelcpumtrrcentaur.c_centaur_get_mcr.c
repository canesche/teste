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
typedef  int /*<<< orphan*/  mtrr_type ;
struct TYPE_2__ {int high; int low; } ;

/* Variables and functions */
 int /*<<< orphan*/  MTRR_TYPE_UNCACHABLE ; 
 int /*<<< orphan*/  MTRR_TYPE_WRBACK ; 
 int /*<<< orphan*/  MTRR_TYPE_WRCOMB ; 
 int PAGE_SHIFT ; 
 TYPE_1__* centaur_mcr ; 
 int centaur_mcr_type ; 

__attribute__((used)) static void
centaur_get_mcr(unsigned int reg, unsigned long *base,
		unsigned long *size, mtrr_type * type)
{
	*base = centaur_mcr[reg].high >> PAGE_SHIFT;
	*size = -(centaur_mcr[reg].low & 0xfffff000) >> PAGE_SHIFT;
	*type = MTRR_TYPE_WRCOMB;		/* write-combining  */

	if (centaur_mcr_type == 1 && ((centaur_mcr[reg].low & 31) & 2))
		*type = MTRR_TYPE_UNCACHABLE;
	if (centaur_mcr_type == 1 && (centaur_mcr[reg].low & 31) == 25)
		*type = MTRR_TYPE_WRBACK;
	if (centaur_mcr_type == 0 && (centaur_mcr[reg].low & 31) == 31)
		*type = MTRR_TYPE_WRBACK;
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
          unsigned int reg = 100;
          int _len_base0 = 1;
          unsigned long * base = (unsigned long *) malloc(_len_base0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_base0; _i0++) {
            base[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_size0 = 1;
          unsigned long * size = (unsigned long *) malloc(_len_size0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_size0; _i0++) {
            size[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_type0 = 1;
          int * type = (int *) malloc(_len_type0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_type0; _i0++) {
            type[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          centaur_get_mcr(reg,base,size,type);
          free(base);
          free(size);
          free(type);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned int reg = 255;
          int _len_base0 = 65025;
          unsigned long * base = (unsigned long *) malloc(_len_base0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_base0; _i0++) {
            base[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_size0 = 65025;
          unsigned long * size = (unsigned long *) malloc(_len_size0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_size0; _i0++) {
            size[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_type0 = 65025;
          int * type = (int *) malloc(_len_type0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_type0; _i0++) {
            type[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          centaur_get_mcr(reg,base,size,type);
          free(base);
          free(size);
          free(type);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned int reg = 10;
          int _len_base0 = 100;
          unsigned long * base = (unsigned long *) malloc(_len_base0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_base0; _i0++) {
            base[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_size0 = 100;
          unsigned long * size = (unsigned long *) malloc(_len_size0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_size0; _i0++) {
            size[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_type0 = 100;
          int * type = (int *) malloc(_len_type0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_type0; _i0++) {
            type[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          centaur_get_mcr(reg,base,size,type);
          free(base);
          free(size);
          free(type);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
