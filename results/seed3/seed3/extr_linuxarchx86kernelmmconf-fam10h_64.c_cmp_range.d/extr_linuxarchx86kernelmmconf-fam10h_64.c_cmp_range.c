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
struct range {int start; } ;

/* Variables and functions */

__attribute__((used)) static int cmp_range(const void *x1, const void *x2)
{
	const struct range *r1 = x1;
	const struct range *r2 = x2;
	int start1, start2;

	start1 = r1->start >> 32;
	start2 = r2->start >> 32;

	return start1 - start2;
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
          int _len_x10 = 1;
          const void * x1 = (const void *) malloc(_len_x10*sizeof(const void));
          for(int _i0 = 0; _i0 < _len_x10; _i0++) {
            x1[_i0] = 0;
          }
          int _len_x20 = 1;
          const void * x2 = (const void *) malloc(_len_x20*sizeof(const void));
          for(int _i0 = 0; _i0 < _len_x20; _i0++) {
            x2[_i0] = 0;
          }
          int benchRet = cmp_range(x1,x2);
          printf("%d\n", benchRet); 
          free(x1);
          free(x2);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_x10 = 65025;
          const void * x1 = (const void *) malloc(_len_x10*sizeof(const void));
          for(int _i0 = 0; _i0 < _len_x10; _i0++) {
            x1[_i0] = 0;
          }
          int _len_x20 = 65025;
          const void * x2 = (const void *) malloc(_len_x20*sizeof(const void));
          for(int _i0 = 0; _i0 < _len_x20; _i0++) {
            x2[_i0] = 0;
          }
          int benchRet = cmp_range(x1,x2);
          printf("%d\n", benchRet); 
          free(x1);
          free(x2);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_x10 = 100;
          const void * x1 = (const void *) malloc(_len_x10*sizeof(const void));
          for(int _i0 = 0; _i0 < _len_x10; _i0++) {
            x1[_i0] = 0;
          }
          int _len_x20 = 100;
          const void * x2 = (const void *) malloc(_len_x20*sizeof(const void));
          for(int _i0 = 0; _i0 < _len_x20; _i0++) {
            x2[_i0] = 0;
          }
          int benchRet = cmp_range(x1,x2);
          printf("%d\n", benchRet); 
          free(x1);
          free(x2);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
