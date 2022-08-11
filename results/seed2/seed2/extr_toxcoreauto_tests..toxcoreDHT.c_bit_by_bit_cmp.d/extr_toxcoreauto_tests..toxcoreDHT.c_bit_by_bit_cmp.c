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

/* Variables and functions */
 unsigned int crypto_box_PUBLICKEYBYTES ; 

__attribute__((used)) static unsigned int bit_by_bit_cmp(const uint8_t *pk1, const uint8_t *pk2)
{
    unsigned int i, j = 0;

    for (i = 0; i < crypto_box_PUBLICKEYBYTES; ++i) {
        if (pk1[i] == pk2[i])
            continue;

        for (j = 0; j < 8; ++j) {
            if ((pk1[i] & (1 << (7 - j))) != (pk2[i] & (1 << (7 - j))))
                break;
        }

        break;
    }

    return i * 8 + j;
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
          const int * pk1 = (const int *) malloc(_len_pk10*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_pk10; _i0++) {
            pk1[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pk20 = 1;
          const int * pk2 = (const int *) malloc(_len_pk20*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_pk20; _i0++) {
            pk2[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned int benchRet = bit_by_bit_cmp(pk1,pk2);
          printf("%u\n", benchRet); 
          free(pk1);
          free(pk2);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_pk10 = 65025;
          const int * pk1 = (const int *) malloc(_len_pk10*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_pk10; _i0++) {
            pk1[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pk20 = 65025;
          const int * pk2 = (const int *) malloc(_len_pk20*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_pk20; _i0++) {
            pk2[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned int benchRet = bit_by_bit_cmp(pk1,pk2);
          printf("%u\n", benchRet); 
          free(pk1);
          free(pk2);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_pk10 = 100;
          const int * pk1 = (const int *) malloc(_len_pk10*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_pk10; _i0++) {
            pk1[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pk20 = 100;
          const int * pk2 = (const int *) malloc(_len_pk20*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_pk20; _i0++) {
            pk2[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned int benchRet = bit_by_bit_cmp(pk1,pk2);
          printf("%u\n", benchRet); 
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
