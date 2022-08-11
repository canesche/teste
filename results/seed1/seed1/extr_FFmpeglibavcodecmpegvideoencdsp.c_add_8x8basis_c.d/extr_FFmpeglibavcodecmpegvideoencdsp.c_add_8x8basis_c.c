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
typedef  int int16_t ;

/* Variables and functions */
 int BASIS_SHIFT ; 
 int RECON_SHIFT ; 

__attribute__((used)) static void add_8x8basis_c(int16_t rem[64], int16_t basis[64], int scale)
{
    int i;

    for (i = 0; i < 8 * 8; i++)
        rem[i] += (basis[i] * scale +
                   (1 << (BASIS_SHIFT - RECON_SHIFT - 1))) >>
                  (BASIS_SHIFT - RECON_SHIFT);
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
          int scale = 100;
          int _len_rem0 = 64;
          int * rem = (int *) malloc(_len_rem0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_rem0; _i0++) {
            rem[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_basis0 = 64;
          int * basis = (int *) malloc(_len_basis0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_basis0; _i0++) {
            basis[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          add_8x8basis_c(rem,basis,scale);
          free(rem);
          free(basis);
        
        break;
    }
    // big-arr
    case 1:
    {
          int scale = 255;
          int _len_rem0 = 65025;
          int * rem = (int *) malloc(_len_rem0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_rem0; _i0++) {
            rem[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_basis0 = 65025;
          int * basis = (int *) malloc(_len_basis0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_basis0; _i0++) {
            basis[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          add_8x8basis_c(rem,basis,scale);
          free(rem);
          free(basis);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int scale = 10;
          int _len_rem0 = 100;
          int * rem = (int *) malloc(_len_rem0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_rem0; _i0++) {
            rem[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_basis0 = 100;
          int * basis = (int *) malloc(_len_basis0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_basis0; _i0++) {
            basis[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          add_8x8basis_c(rem,basis,scale);
          free(rem);
          free(basis);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
