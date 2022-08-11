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
struct h_elem {scalar_t__ pathlength; int sym; } ;

/* Variables and functions */

__attribute__((used)) static int
cmp_pathlengths(const void *in_a, const void *in_b)
{
  const struct h_elem *a = in_a;
  const struct h_elem *b = in_b;
  
  if (a->pathlength == b->pathlength)
#if 0
    return a->sym - b->sym;
#else
  /* see note on canonical pathlengths */
    return b->sym - a->sym;
#endif
  return b->pathlength - a->pathlength;
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
          int _len_in_a0 = 1;
          const void * in_a = (const void *) malloc(_len_in_a0*sizeof(const void));
          for(int _i0 = 0; _i0 < _len_in_a0; _i0++) {
            in_a[_i0] = 0;
          }
          int _len_in_b0 = 1;
          const void * in_b = (const void *) malloc(_len_in_b0*sizeof(const void));
          for(int _i0 = 0; _i0 < _len_in_b0; _i0++) {
            in_b[_i0] = 0;
          }
          int benchRet = cmp_pathlengths(in_a,in_b);
          printf("%d\n", benchRet); 
          free(in_a);
          free(in_b);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_in_a0 = 65025;
          const void * in_a = (const void *) malloc(_len_in_a0*sizeof(const void));
          for(int _i0 = 0; _i0 < _len_in_a0; _i0++) {
            in_a[_i0] = 0;
          }
          int _len_in_b0 = 65025;
          const void * in_b = (const void *) malloc(_len_in_b0*sizeof(const void));
          for(int _i0 = 0; _i0 < _len_in_b0; _i0++) {
            in_b[_i0] = 0;
          }
          int benchRet = cmp_pathlengths(in_a,in_b);
          printf("%d\n", benchRet); 
          free(in_a);
          free(in_b);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_in_a0 = 100;
          const void * in_a = (const void *) malloc(_len_in_a0*sizeof(const void));
          for(int _i0 = 0; _i0 < _len_in_a0; _i0++) {
            in_a[_i0] = 0;
          }
          int _len_in_b0 = 100;
          const void * in_b = (const void *) malloc(_len_in_b0*sizeof(const void));
          for(int _i0 = 0; _i0 < _len_in_b0; _i0++) {
            in_b[_i0] = 0;
          }
          int benchRet = cmp_pathlengths(in_a,in_b);
          printf("%d\n", benchRet); 
          free(in_a);
          free(in_b);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
