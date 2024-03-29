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
typedef  scalar_t__ uint64_t ;

/* Variables and functions */

__attribute__((used)) static int cmp_key(const void *_x, const void *_y)
{
    uint64_t x = *(uint64_t *)_x, y = *(uint64_t *)_y;

    if (x < y) {
        return -1;
    } else if (x > y) {
        return 1;
    } else {
        return 0;
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
          int _len__x0 = 1;
          const void * _x = (const void *) malloc(_len__x0*sizeof(const void));
          for(int _i0 = 0; _i0 < _len__x0; _i0++) {
            _x[_i0] = 0;
          }
          int _len__y0 = 1;
          const void * _y = (const void *) malloc(_len__y0*sizeof(const void));
          for(int _i0 = 0; _i0 < _len__y0; _i0++) {
            _y[_i0] = 0;
          }
          int benchRet = cmp_key(_x,_y);
          printf("%d\n", benchRet); 
          free(_x);
          free(_y);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len__x0 = 65025;
          const void * _x = (const void *) malloc(_len__x0*sizeof(const void));
          for(int _i0 = 0; _i0 < _len__x0; _i0++) {
            _x[_i0] = 0;
          }
          int _len__y0 = 65025;
          const void * _y = (const void *) malloc(_len__y0*sizeof(const void));
          for(int _i0 = 0; _i0 < _len__y0; _i0++) {
            _y[_i0] = 0;
          }
          int benchRet = cmp_key(_x,_y);
          printf("%d\n", benchRet); 
          free(_x);
          free(_y);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len__x0 = 100;
          const void * _x = (const void *) malloc(_len__x0*sizeof(const void));
          for(int _i0 = 0; _i0 < _len__x0; _i0++) {
            _x[_i0] = 0;
          }
          int _len__y0 = 100;
          const void * _y = (const void *) malloc(_len__y0*sizeof(const void));
          for(int _i0 = 0; _i0 < _len__y0; _i0++) {
            _y[_i0] = 0;
          }
          int benchRet = cmp_key(_x,_y);
          printf("%d\n", benchRet); 
          free(_x);
          free(_y);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
