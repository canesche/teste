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
typedef  unsigned int u64 ;

/* Variables and functions */

__attribute__((used)) static u64 vli_test_bit(const u64 *vli, unsigned int bit)
{
	return (vli[bit / 64] & ((u64)1 << (bit % 64)));
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
          unsigned int bit = 100;
          int _len_vli0 = 1;
          const unsigned int * vli = (const unsigned int *) malloc(_len_vli0*sizeof(const unsigned int));
          for(int _i0 = 0; _i0 < _len_vli0; _i0++) {
            vli[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned int benchRet = vli_test_bit(vli,bit);
          printf("%u\n", benchRet); 
          free(vli);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned int bit = 255;
          int _len_vli0 = 65025;
          const unsigned int * vli = (const unsigned int *) malloc(_len_vli0*sizeof(const unsigned int));
          for(int _i0 = 0; _i0 < _len_vli0; _i0++) {
            vli[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned int benchRet = vli_test_bit(vli,bit);
          printf("%u\n", benchRet); 
          free(vli);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned int bit = 10;
          int _len_vli0 = 100;
          const unsigned int * vli = (const unsigned int *) malloc(_len_vli0*sizeof(const unsigned int));
          for(int _i0 = 0; _i0 < _len_vli0; _i0++) {
            vli[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned int benchRet = vli_test_bit(vli,bit);
          printf("%u\n", benchRet); 
          free(vli);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
