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
struct continuum {scalar_t__ value; } ;

/* Variables and functions */

__attribute__((used)) static int
ketama_item_cmp(const void *t1, const void *t2)
{
    const struct continuum *ct1 = t1, *ct2 = t2;

    if (ct1->value == ct2->value) {
        return 0;
    } else if (ct1->value > ct2->value) {
        return 1;
    } else {
        return -1;
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
          int _len_t10 = 1;
          const void * t1 = (const void *) malloc(_len_t10*sizeof(const void));
          for(int _i0 = 0; _i0 < _len_t10; _i0++) {
            t1[_i0] = 0;
          }
          int _len_t20 = 1;
          const void * t2 = (const void *) malloc(_len_t20*sizeof(const void));
          for(int _i0 = 0; _i0 < _len_t20; _i0++) {
            t2[_i0] = 0;
          }
          int benchRet = ketama_item_cmp(t1,t2);
          printf("%d\n", benchRet); 
          free(t1);
          free(t2);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_t10 = 65025;
          const void * t1 = (const void *) malloc(_len_t10*sizeof(const void));
          for(int _i0 = 0; _i0 < _len_t10; _i0++) {
            t1[_i0] = 0;
          }
          int _len_t20 = 65025;
          const void * t2 = (const void *) malloc(_len_t20*sizeof(const void));
          for(int _i0 = 0; _i0 < _len_t20; _i0++) {
            t2[_i0] = 0;
          }
          int benchRet = ketama_item_cmp(t1,t2);
          printf("%d\n", benchRet); 
          free(t1);
          free(t2);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_t10 = 100;
          const void * t1 = (const void *) malloc(_len_t10*sizeof(const void));
          for(int _i0 = 0; _i0 < _len_t10; _i0++) {
            t1[_i0] = 0;
          }
          int _len_t20 = 100;
          const void * t2 = (const void *) malloc(_len_t20*sizeof(const void));
          for(int _i0 = 0; _i0 < _len_t20; _i0++) {
            t2[_i0] = 0;
          }
          int benchRet = ketama_item_cmp(t1,t2);
          printf("%d\n", benchRet); 
          free(t1);
          free(t2);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
