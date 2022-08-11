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
typedef  scalar_t__ UInt32 ;
typedef  unsigned int Byte ;

/* Variables and functions */

__attribute__((used)) static UInt32 CountDefinedBits(const Byte *bits, UInt32 numItems)
{
  Byte b = 0;
  unsigned m = 0;
  UInt32 sum = 0;
  for (; numItems != 0; numItems--)
  {
    if (m == 0)
    {
      b = *bits++;
      m = 8;
    }
    m--;
    sum += ((b >> m) & 1);
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
          long numItems = 100;
          int _len_bits0 = 1;
          const unsigned int * bits = (const unsigned int *) malloc(_len_bits0*sizeof(const unsigned int));
          for(int _i0 = 0; _i0 < _len_bits0; _i0++) {
            bits[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          long benchRet = CountDefinedBits(bits,numItems);
          printf("%ld\n", benchRet); 
          free(bits);
        
        break;
    }
    // big-arr
    case 1:
    {
          long numItems = 255;
          int _len_bits0 = 65025;
          const unsigned int * bits = (const unsigned int *) malloc(_len_bits0*sizeof(const unsigned int));
          for(int _i0 = 0; _i0 < _len_bits0; _i0++) {
            bits[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          long benchRet = CountDefinedBits(bits,numItems);
          printf("%ld\n", benchRet); 
          free(bits);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          long numItems = 10;
          int _len_bits0 = 100;
          const unsigned int * bits = (const unsigned int *) malloc(_len_bits0*sizeof(const unsigned int));
          for(int _i0 = 0; _i0 < _len_bits0; _i0++) {
            bits[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          long benchRet = CountDefinedBits(bits,numItems);
          printf("%ld\n", benchRet); 
          free(bits);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
