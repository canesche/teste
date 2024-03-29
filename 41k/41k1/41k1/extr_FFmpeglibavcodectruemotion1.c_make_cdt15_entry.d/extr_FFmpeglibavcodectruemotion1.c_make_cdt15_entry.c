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
typedef  int int16_t ;

/* Variables and functions */

__attribute__((used)) static int make_cdt15_entry(int p1, int p2, int16_t *cdt)
{
    int r, b, lo;

    b = cdt[p2];
    r = cdt[p1] * 1024;
    lo = b + r;
    return (lo + (lo * (1U << 16))) * 2;
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
          int p1 = 100;
          int p2 = 100;
          int _len_cdt0 = 1;
          int * cdt = (int *) malloc(_len_cdt0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_cdt0; _i0++) {
            cdt[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = make_cdt15_entry(p1,p2,cdt);
          printf("%d\n", benchRet); 
          free(cdt);
        
        break;
    }
    // big-arr
    case 1:
    {
          int p1 = 255;
          int p2 = 255;
          int _len_cdt0 = 65025;
          int * cdt = (int *) malloc(_len_cdt0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_cdt0; _i0++) {
            cdt[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = make_cdt15_entry(p1,p2,cdt);
          printf("%d\n", benchRet); 
          free(cdt);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int p1 = 10;
          int p2 = 10;
          int _len_cdt0 = 100;
          int * cdt = (int *) malloc(_len_cdt0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_cdt0; _i0++) {
            cdt[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = make_cdt15_entry(p1,p2,cdt);
          printf("%d\n", benchRet); 
          free(cdt);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
