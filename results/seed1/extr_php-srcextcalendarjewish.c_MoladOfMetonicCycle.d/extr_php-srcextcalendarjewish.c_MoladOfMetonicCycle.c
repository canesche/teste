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
typedef  int zend_ulong ;
typedef  int zend_long ;

/* Variables and functions */
 int HALAKIM_PER_DAY ; 
 int HALAKIM_PER_METONIC_CYCLE ; 
 int NEW_MOON_OF_CREATION ; 

__attribute__((used)) static void MoladOfMetonicCycle(
								   int metonicCycle,
								   zend_long *pMoladDay,
								   zend_long *pMoladHalakim)
{
	register zend_ulong r1, r2, d1, d2;

	/* Start with the time of the first molad after creation. */
	r1 = NEW_MOON_OF_CREATION;

	/* Calculate metonicCycle * HALAKIM_PER_METONIC_CYCLE.  The upper 32
	 * bits of the result will be in r2 and the lower 16 bits will be
	 * in r1. */
	r1 += metonicCycle * (HALAKIM_PER_METONIC_CYCLE & 0xFFFF);
	r2 = r1 >> 16;
	r2 += metonicCycle * ((HALAKIM_PER_METONIC_CYCLE >> 16) & 0xFFFF);

	/* Calculate r2r1 / HALAKIM_PER_DAY.  The remainder will be in r1, the
	 * upper 16 bits of the quotient will be in d2 and the lower 16 bits
	 * will be in d1. */
	d2 = r2 / HALAKIM_PER_DAY;
	r2 -= d2 * HALAKIM_PER_DAY;
	r1 = (r2 << 16) | (r1 & 0xFFFF);
	d1 = r1 / HALAKIM_PER_DAY;
	r1 -= d1 * HALAKIM_PER_DAY;

	*pMoladDay = (d2 << 16) | d1;
	*pMoladHalakim = r1;
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
          int metonicCycle = 100;
          int _len_pMoladDay0 = 1;
          int * pMoladDay = (int *) malloc(_len_pMoladDay0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_pMoladDay0; _i0++) {
            pMoladDay[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pMoladHalakim0 = 1;
          int * pMoladHalakim = (int *) malloc(_len_pMoladHalakim0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_pMoladHalakim0; _i0++) {
            pMoladHalakim[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          MoladOfMetonicCycle(metonicCycle,pMoladDay,pMoladHalakim);
          free(pMoladDay);
          free(pMoladHalakim);
        
        break;
    }
    // big-arr
    case 1:
    {
          int metonicCycle = 255;
          int _len_pMoladDay0 = 65025;
          int * pMoladDay = (int *) malloc(_len_pMoladDay0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_pMoladDay0; _i0++) {
            pMoladDay[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pMoladHalakim0 = 65025;
          int * pMoladHalakim = (int *) malloc(_len_pMoladHalakim0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_pMoladHalakim0; _i0++) {
            pMoladHalakim[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          MoladOfMetonicCycle(metonicCycle,pMoladDay,pMoladHalakim);
          free(pMoladDay);
          free(pMoladHalakim);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int metonicCycle = 10;
          int _len_pMoladDay0 = 100;
          int * pMoladDay = (int *) malloc(_len_pMoladDay0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_pMoladDay0; _i0++) {
            pMoladDay[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pMoladHalakim0 = 100;
          int * pMoladHalakim = (int *) malloc(_len_pMoladHalakim0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_pMoladHalakim0; _i0++) {
            pMoladHalakim[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          MoladOfMetonicCycle(metonicCycle,pMoladDay,pMoladHalakim);
          free(pMoladDay);
          free(pMoladHalakim);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
