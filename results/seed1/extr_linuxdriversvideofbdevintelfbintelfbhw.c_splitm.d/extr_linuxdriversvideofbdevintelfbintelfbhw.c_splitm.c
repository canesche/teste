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
struct pll_min_max {int min_m1; int max_m1; int min_m2; int max_m2; } ;

/* Variables and functions */
 struct pll_min_max* plls ; 

__attribute__((used)) static int splitm(int index, unsigned int m, unsigned int *retm1,
		  unsigned int *retm2)
{
	int m1, m2;
	int testm;
	struct pll_min_max *pll = &plls[index];

	/* no point optimising too much - brute force m */
	for (m1 = pll->min_m1; m1 < pll->max_m1 + 1; m1++) {
		for (m2 = pll->min_m2; m2 < pll->max_m2 + 1; m2++) {
			testm = (5 * (m1 + 2)) + (m2 + 2);
			if (testm == m) {
				*retm1 = (unsigned int)m1;
				*retm2 = (unsigned int)m2;
				return 0;
			}
		}
	}
	return 1;
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
          int index = 100;
          unsigned int m = 100;
          int _len_retm10 = 1;
          unsigned int * retm1 = (unsigned int *) malloc(_len_retm10*sizeof(unsigned int));
          for(int _i0 = 0; _i0 < _len_retm10; _i0++) {
            retm1[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_retm20 = 1;
          unsigned int * retm2 = (unsigned int *) malloc(_len_retm20*sizeof(unsigned int));
          for(int _i0 = 0; _i0 < _len_retm20; _i0++) {
            retm2[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = splitm(index,m,retm1,retm2);
          printf("%d\n", benchRet); 
          free(retm1);
          free(retm2);
        
        break;
    }
    // big-arr
    case 1:
    {
          int index = 255;
          unsigned int m = 255;
          int _len_retm10 = 65025;
          unsigned int * retm1 = (unsigned int *) malloc(_len_retm10*sizeof(unsigned int));
          for(int _i0 = 0; _i0 < _len_retm10; _i0++) {
            retm1[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_retm20 = 65025;
          unsigned int * retm2 = (unsigned int *) malloc(_len_retm20*sizeof(unsigned int));
          for(int _i0 = 0; _i0 < _len_retm20; _i0++) {
            retm2[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = splitm(index,m,retm1,retm2);
          printf("%d\n", benchRet); 
          free(retm1);
          free(retm2);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int index = 10;
          unsigned int m = 10;
          int _len_retm10 = 100;
          unsigned int * retm1 = (unsigned int *) malloc(_len_retm10*sizeof(unsigned int));
          for(int _i0 = 0; _i0 < _len_retm10; _i0++) {
            retm1[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_retm20 = 100;
          unsigned int * retm2 = (unsigned int *) malloc(_len_retm20*sizeof(unsigned int));
          for(int _i0 = 0; _i0 < _len_retm20; _i0++) {
            retm2[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = splitm(index,m,retm1,retm2);
          printf("%d\n", benchRet); 
          free(retm1);
          free(retm2);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
