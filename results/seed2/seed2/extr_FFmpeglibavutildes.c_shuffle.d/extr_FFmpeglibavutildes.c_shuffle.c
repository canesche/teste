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
typedef  int /*<<< orphan*/  uint8_t ;
typedef  int uint64_t ;

/* Variables and functions */

__attribute__((used)) static uint64_t shuffle(uint64_t in, const uint8_t *shuffle, int shuffle_len)
{
    int i;
    uint64_t res = 0;
    for (i = 0; i < shuffle_len; i++)
        res += res + ((in >> *shuffle++) & 1);
    return res;
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
          int in = 100;
          int shuffle_len = 100;
          int _len_shuffle0 = 1;
          const int * shuffle = (const int *) malloc(_len_shuffle0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_shuffle0; _i0++) {
            shuffle[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = shuffle(in,shuffle,shuffle_len);
          printf("%d\n", benchRet); 
          free(shuffle);
        
        break;
    }
    // big-arr
    case 1:
    {
          int in = 255;
          int shuffle_len = 255;
          int _len_shuffle0 = 65025;
          const int * shuffle = (const int *) malloc(_len_shuffle0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_shuffle0; _i0++) {
            shuffle[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = shuffle(in,shuffle,shuffle_len);
          printf("%d\n", benchRet); 
          free(shuffle);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int in = 10;
          int shuffle_len = 10;
          int _len_shuffle0 = 100;
          const int * shuffle = (const int *) malloc(_len_shuffle0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_shuffle0; _i0++) {
            shuffle[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = shuffle(in,shuffle,shuffle_len);
          printf("%d\n", benchRet); 
          free(shuffle);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
