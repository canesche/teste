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
typedef  int u_int ;

/* Variables and functions */

__attribute__((used)) static inline void set_mdcas(u_int *mdcas, int delayed, u_int rcd)
{
	u_int shift;

	rcd = 2 * rcd - 1;
	shift = delayed + 1 + rcd;

	mdcas[0]  = (1 << rcd) - 1;
	mdcas[0] |= 0x55555555 << shift;
	mdcas[1]  = mdcas[2] = 0x55555555 << (shift & 1);
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
          int delayed = 100;
          int rcd = 100;
          int _len_mdcas0 = 1;
          int * mdcas = (int *) malloc(_len_mdcas0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_mdcas0; _i0++) {
            mdcas[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          set_mdcas(mdcas,delayed,rcd);
          free(mdcas);
        
        break;
    }
    // big-arr
    case 1:
    {
          int delayed = 255;
          int rcd = 255;
          int _len_mdcas0 = 65025;
          int * mdcas = (int *) malloc(_len_mdcas0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_mdcas0; _i0++) {
            mdcas[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          set_mdcas(mdcas,delayed,rcd);
          free(mdcas);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int delayed = 10;
          int rcd = 10;
          int _len_mdcas0 = 100;
          int * mdcas = (int *) malloc(_len_mdcas0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_mdcas0; _i0++) {
            mdcas[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          set_mdcas(mdcas,delayed,rcd);
          free(mdcas);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
