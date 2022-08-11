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
typedef  size_t mpi_size_t ;
typedef  unsigned int* mpi_ptr_t ;
typedef  unsigned int mpi_limb_t ;

/* Variables and functions */
 unsigned int BITS_PER_MPI_LIMB ; 

mpi_limb_t
mpihelp_rshift(mpi_ptr_t wp, mpi_ptr_t up, mpi_size_t usize, unsigned cnt)
{
	mpi_limb_t high_limb, low_limb;
	unsigned sh_1, sh_2;
	mpi_size_t i;
	mpi_limb_t retval;

	sh_1 = cnt;
	wp -= 1;
	sh_2 = BITS_PER_MPI_LIMB - sh_1;
	high_limb = up[0];
	retval = high_limb << sh_2;
	low_limb = high_limb;
	for (i = 1; i < usize; i++) {
		high_limb = up[i];
		wp[i] = (low_limb >> sh_1) | (high_limb << sh_2);
		low_limb = high_limb;
	}
	wp[i] = low_limb >> sh_1;

	return retval;
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
          unsigned long usize = 100;
          unsigned int cnt = 100;
          int _len_wp0 = 1;
          unsigned int * wp = (unsigned int *) malloc(_len_wp0*sizeof(unsigned int));
          for(int _i0 = 0; _i0 < _len_wp0; _i0++) {
            wp[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_up0 = 1;
          unsigned int * up = (unsigned int *) malloc(_len_up0*sizeof(unsigned int));
          for(int _i0 = 0; _i0 < _len_up0; _i0++) {
            up[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned int benchRet = mpihelp_rshift(wp,up,usize,cnt);
          printf("%u\n", benchRet); 
          free(wp);
          free(up);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned long usize = 255;
          unsigned int cnt = 255;
          int _len_wp0 = 65025;
          unsigned int * wp = (unsigned int *) malloc(_len_wp0*sizeof(unsigned int));
          for(int _i0 = 0; _i0 < _len_wp0; _i0++) {
            wp[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_up0 = 65025;
          unsigned int * up = (unsigned int *) malloc(_len_up0*sizeof(unsigned int));
          for(int _i0 = 0; _i0 < _len_up0; _i0++) {
            up[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned int benchRet = mpihelp_rshift(wp,up,usize,cnt);
          printf("%u\n", benchRet); 
          free(wp);
          free(up);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned long usize = 10;
          unsigned int cnt = 10;
          int _len_wp0 = 100;
          unsigned int * wp = (unsigned int *) malloc(_len_wp0*sizeof(unsigned int));
          for(int _i0 = 0; _i0 < _len_wp0; _i0++) {
            wp[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_up0 = 100;
          unsigned int * up = (unsigned int *) malloc(_len_up0*sizeof(unsigned int));
          for(int _i0 = 0; _i0 < _len_up0; _i0++) {
            up[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned int benchRet = mpihelp_rshift(wp,up,usize,cnt);
          printf("%u\n", benchRet); 
          free(wp);
          free(up);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
