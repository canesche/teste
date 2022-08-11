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
typedef  int /*<<< orphan*/  ut32 ;

/* Variables and functions */
 int DW_BY_BLOCK ; 

void apply_xor(ut32 block[DW_BY_BLOCK], ut32 subkey[DW_BY_BLOCK]) {
	int i;
	for (i = 0; i < DW_BY_BLOCK; i++) {
		block[i] ^= subkey[i];
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
          int _len_block0 = DW_BY_BLOCK;
          int * block = (int *) malloc(_len_block0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_block0; _i0++) {
            block[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_subkey0 = DW_BY_BLOCK;
          int * subkey = (int *) malloc(_len_subkey0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_subkey0; _i0++) {
            subkey[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          apply_xor(block,subkey);
          free(block);
          free(subkey);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_block0 = 65025;
          int * block = (int *) malloc(_len_block0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_block0; _i0++) {
            block[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_subkey0 = 65025;
          int * subkey = (int *) malloc(_len_subkey0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_subkey0; _i0++) {
            subkey[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          apply_xor(block,subkey);
          free(block);
          free(subkey);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_block0 = 100;
          int * block = (int *) malloc(_len_block0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_block0; _i0++) {
            block[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_subkey0 = 100;
          int * subkey = (int *) malloc(_len_subkey0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_subkey0; _i0++) {
            subkey[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          apply_xor(block,subkey);
          free(block);
          free(subkey);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
