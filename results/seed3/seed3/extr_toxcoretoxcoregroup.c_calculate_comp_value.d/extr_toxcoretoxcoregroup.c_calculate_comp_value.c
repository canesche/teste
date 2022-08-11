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
typedef  scalar_t__ uint8_t ;
typedef  int uint64_t ;

/* Variables and functions */

__attribute__((used)) static uint64_t calculate_comp_value(const uint8_t *pk1, const uint8_t *pk2)
{
    uint64_t cmp1 = 0, cmp2 = 0;

    unsigned int i;

    for (i = 0; i < sizeof(uint64_t); ++i) {
        cmp1 = (cmp1 << 8) + (uint64_t)pk1[i];
        cmp2 = (cmp2 << 8) + (uint64_t)pk2[i];
    }

    return (cmp1 - cmp2);
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
          int _len_pk10 = 1;
          const long * pk1 = (const long *) malloc(_len_pk10*sizeof(const long));
          for(int _i0 = 0; _i0 < _len_pk10; _i0++) {
            pk1[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pk20 = 1;
          const long * pk2 = (const long *) malloc(_len_pk20*sizeof(const long));
          for(int _i0 = 0; _i0 < _len_pk20; _i0++) {
            pk2[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = calculate_comp_value(pk1,pk2);
          printf("%d\n", benchRet); 
          free(pk1);
          free(pk2);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_pk10 = 65025;
          const long * pk1 = (const long *) malloc(_len_pk10*sizeof(const long));
          for(int _i0 = 0; _i0 < _len_pk10; _i0++) {
            pk1[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pk20 = 65025;
          const long * pk2 = (const long *) malloc(_len_pk20*sizeof(const long));
          for(int _i0 = 0; _i0 < _len_pk20; _i0++) {
            pk2[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = calculate_comp_value(pk1,pk2);
          printf("%d\n", benchRet); 
          free(pk1);
          free(pk2);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_pk10 = 100;
          const long * pk1 = (const long *) malloc(_len_pk10*sizeof(const long));
          for(int _i0 = 0; _i0 < _len_pk10; _i0++) {
            pk1[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pk20 = 100;
          const long * pk2 = (const long *) malloc(_len_pk20*sizeof(const long));
          for(int _i0 = 0; _i0 < _len_pk20; _i0++) {
            pk2[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = calculate_comp_value(pk1,pk2);
          printf("%d\n", benchRet); 
          free(pk1);
          free(pk2);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
