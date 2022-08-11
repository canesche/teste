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
typedef  int uint8_t ;
typedef  scalar_t__ int16_t ;

/* Variables and functions */

void ff_block_permute(int16_t *block, uint8_t *permutation,
                      const uint8_t *scantable, int last)
{
    int i;
    int16_t temp[64];

    if (last <= 0)
        return;
    //FIXME it is ok but not clean and might fail for some permutations
    // if (permutation[1] == 1)
    // return;

    for (i = 0; i <= last; i++) {
        const int j = scantable[i];
        temp[j] = block[j];
        block[j] = 0;
    }

    for (i = 0; i <= last; i++) {
        const int j = scantable[i];
        const int perm_j = permutation[j];
        block[perm_j] = temp[j];
    }
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
          int last = 100;
          int _len_block0 = 1;
          long * block = (long *) malloc(_len_block0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_block0; _i0++) {
            block[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_permutation0 = 1;
          int * permutation = (int *) malloc(_len_permutation0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_permutation0; _i0++) {
            permutation[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_scantable0 = 1;
          const int * scantable = (const int *) malloc(_len_scantable0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_scantable0; _i0++) {
            scantable[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          ff_block_permute(block,permutation,scantable,last);
          free(block);
          free(permutation);
          free(scantable);
        
        break;
    }
    // big-arr
    case 1:
    {
          int last = 255;
          int _len_block0 = 65025;
          long * block = (long *) malloc(_len_block0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_block0; _i0++) {
            block[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_permutation0 = 65025;
          int * permutation = (int *) malloc(_len_permutation0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_permutation0; _i0++) {
            permutation[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_scantable0 = 65025;
          const int * scantable = (const int *) malloc(_len_scantable0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_scantable0; _i0++) {
            scantable[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          ff_block_permute(block,permutation,scantable,last);
          free(block);
          free(permutation);
          free(scantable);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int last = 10;
          int _len_block0 = 100;
          long * block = (long *) malloc(_len_block0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_block0; _i0++) {
            block[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_permutation0 = 100;
          int * permutation = (int *) malloc(_len_permutation0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_permutation0; _i0++) {
            permutation[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_scantable0 = 100;
          const int * scantable = (const int *) malloc(_len_scantable0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_scantable0; _i0++) {
            scantable[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          ff_block_permute(block,permutation,scantable,last);
          free(block);
          free(permutation);
          free(scantable);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
