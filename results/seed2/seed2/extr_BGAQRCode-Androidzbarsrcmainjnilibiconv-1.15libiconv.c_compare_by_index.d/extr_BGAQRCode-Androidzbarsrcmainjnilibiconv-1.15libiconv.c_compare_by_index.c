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
struct nalias {scalar_t__ encoding_index; } ;

/* Variables and functions */

__attribute__((used)) static int compare_by_index (const void * arg1, const void * arg2)
{
  const struct nalias * alias1 = (const struct nalias *) arg1;
  const struct nalias * alias2 = (const struct nalias *) arg2;
  return (int)alias1->encoding_index - (int)alias2->encoding_index;
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
          int _len_arg10 = 1;
          const void * arg1 = (const void *) malloc(_len_arg10*sizeof(const void));
          for(int _i0 = 0; _i0 < _len_arg10; _i0++) {
            arg1[_i0] = 0;
          }
          int _len_arg20 = 1;
          const void * arg2 = (const void *) malloc(_len_arg20*sizeof(const void));
          for(int _i0 = 0; _i0 < _len_arg20; _i0++) {
            arg2[_i0] = 0;
          }
          int benchRet = compare_by_index(arg1,arg2);
          printf("%d\n", benchRet); 
          free(arg1);
          free(arg2);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_arg10 = 65025;
          const void * arg1 = (const void *) malloc(_len_arg10*sizeof(const void));
          for(int _i0 = 0; _i0 < _len_arg10; _i0++) {
            arg1[_i0] = 0;
          }
          int _len_arg20 = 65025;
          const void * arg2 = (const void *) malloc(_len_arg20*sizeof(const void));
          for(int _i0 = 0; _i0 < _len_arg20; _i0++) {
            arg2[_i0] = 0;
          }
          int benchRet = compare_by_index(arg1,arg2);
          printf("%d\n", benchRet); 
          free(arg1);
          free(arg2);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_arg10 = 100;
          const void * arg1 = (const void *) malloc(_len_arg10*sizeof(const void));
          for(int _i0 = 0; _i0 < _len_arg10; _i0++) {
            arg1[_i0] = 0;
          }
          int _len_arg20 = 100;
          const void * arg2 = (const void *) malloc(_len_arg20*sizeof(const void));
          for(int _i0 = 0; _i0 < _len_arg20; _i0++) {
            arg2[_i0] = 0;
          }
          int benchRet = compare_by_index(arg1,arg2);
          printf("%d\n", benchRet); 
          free(arg1);
          free(arg2);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
