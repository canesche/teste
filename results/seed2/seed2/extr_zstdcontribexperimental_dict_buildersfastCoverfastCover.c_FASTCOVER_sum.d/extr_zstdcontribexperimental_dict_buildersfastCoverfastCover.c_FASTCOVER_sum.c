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

/* Variables and functions */

__attribute__((used)) static size_t FASTCOVER_sum(const size_t *samplesSizes, unsigned nbSamples) {
  size_t sum = 0;
  unsigned i;
  for (i = 0; i < nbSamples; ++i) {
    sum += samplesSizes[i];
  }
  return sum;
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
          unsigned int nbSamples = 100;
          int _len_samplesSizes0 = 1;
          const unsigned long * samplesSizes = (const unsigned long *) malloc(_len_samplesSizes0*sizeof(const unsigned long));
          for(int _i0 = 0; _i0 < _len_samplesSizes0; _i0++) {
            samplesSizes[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned long benchRet = FASTCOVER_sum(samplesSizes,nbSamples);
          printf("%lu\n", benchRet); 
          free(samplesSizes);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned int nbSamples = 255;
          int _len_samplesSizes0 = 65025;
          const unsigned long * samplesSizes = (const unsigned long *) malloc(_len_samplesSizes0*sizeof(const unsigned long));
          for(int _i0 = 0; _i0 < _len_samplesSizes0; _i0++) {
            samplesSizes[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned long benchRet = FASTCOVER_sum(samplesSizes,nbSamples);
          printf("%lu\n", benchRet); 
          free(samplesSizes);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned int nbSamples = 10;
          int _len_samplesSizes0 = 100;
          const unsigned long * samplesSizes = (const unsigned long *) malloc(_len_samplesSizes0*sizeof(const unsigned long));
          for(int _i0 = 0; _i0 < _len_samplesSizes0; _i0++) {
            samplesSizes[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned long benchRet = FASTCOVER_sum(samplesSizes,nbSamples);
          printf("%lu\n", benchRet); 
          free(samplesSizes);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
