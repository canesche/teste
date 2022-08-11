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
typedef  long ptrdiff_t ;

/* Variables and functions */

ptrdiff_t THSize_nElement(long dims, long *size) {
  if(dims == 0)
    return 0;
  else
  {
    ptrdiff_t nElement = 1;
    int d;
    for(d = 0; d < dims; d++)
      nElement *= size[d];
    return nElement;
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
          long dims = 100;
          int _len_size0 = 1;
          long * size = (long *) malloc(_len_size0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_size0; _i0++) {
            size[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          long benchRet = THSize_nElement(dims,size);
          printf("%ld\n", benchRet); 
          free(size);
        
        break;
    }
    // big-arr
    case 1:
    {
          long dims = 255;
          int _len_size0 = 65025;
          long * size = (long *) malloc(_len_size0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_size0; _i0++) {
            size[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          long benchRet = THSize_nElement(dims,size);
          printf("%ld\n", benchRet); 
          free(size);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          long dims = 10;
          int _len_size0 = 100;
          long * size = (long *) malloc(_len_size0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_size0; _i0++) {
            size[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          long benchRet = THSize_nElement(dims,size);
          printf("%ld\n", benchRet); 
          free(size);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
