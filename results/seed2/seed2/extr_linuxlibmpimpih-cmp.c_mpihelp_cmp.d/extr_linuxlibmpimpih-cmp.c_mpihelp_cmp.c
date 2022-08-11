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
typedef  scalar_t__* mpi_ptr_t ;
typedef  scalar_t__ mpi_limb_t ;

/* Variables and functions */

int mpihelp_cmp(mpi_ptr_t op1_ptr, mpi_ptr_t op2_ptr, mpi_size_t size)
{
	mpi_size_t i;
	mpi_limb_t op1_word, op2_word;

	for (i = size - 1; i >= 0; i--) {
		op1_word = op1_ptr[i];
		op2_word = op2_ptr[i];
		if (op1_word != op2_word)
			goto diff;
	}
	return 0;

diff:
	/* This can *not* be simplified to
	 *   op2_word - op2_word
	 * since that expression might give signed overflow.  */
	return (op1_word > op2_word) ? 1 : -1;
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
          unsigned long size = 100;
          int _len_op1_ptr0 = 1;
          long * op1_ptr = (long *) malloc(_len_op1_ptr0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_op1_ptr0; _i0++) {
            op1_ptr[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_op2_ptr0 = 1;
          long * op2_ptr = (long *) malloc(_len_op2_ptr0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_op2_ptr0; _i0++) {
            op2_ptr[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = mpihelp_cmp(op1_ptr,op2_ptr,size);
          printf("%d\n", benchRet); 
          free(op1_ptr);
          free(op2_ptr);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned long size = 255;
          int _len_op1_ptr0 = 65025;
          long * op1_ptr = (long *) malloc(_len_op1_ptr0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_op1_ptr0; _i0++) {
            op1_ptr[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_op2_ptr0 = 65025;
          long * op2_ptr = (long *) malloc(_len_op2_ptr0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_op2_ptr0; _i0++) {
            op2_ptr[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = mpihelp_cmp(op1_ptr,op2_ptr,size);
          printf("%d\n", benchRet); 
          free(op1_ptr);
          free(op2_ptr);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned long size = 10;
          int _len_op1_ptr0 = 100;
          long * op1_ptr = (long *) malloc(_len_op1_ptr0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_op1_ptr0; _i0++) {
            op1_ptr[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_op2_ptr0 = 100;
          long * op2_ptr = (long *) malloc(_len_op2_ptr0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_op2_ptr0; _i0++) {
            op2_ptr[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = mpihelp_cmp(op1_ptr,op2_ptr,size);
          printf("%d\n", benchRet); 
          free(op1_ptr);
          free(op2_ptr);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
