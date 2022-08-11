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
typedef  int /*<<< orphan*/  mp_obj_t ;
typedef  int /*<<< orphan*/  mp_map_t ;

/* Variables and functions */
 int /*<<< orphan*/  mp_const_none ; 

mp_obj_t mp_builtin_open(size_t n_args, const mp_obj_t *args, mp_map_t *kwargs) {
    return mp_const_none;
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
          unsigned long n_args = 100;
          int _len_args0 = 1;
          const int * args = (const int *) malloc(_len_args0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_args0; _i0++) {
            args[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_kwargs0 = 1;
          int * kwargs = (int *) malloc(_len_kwargs0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_kwargs0; _i0++) {
            kwargs[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = mp_builtin_open(n_args,args,kwargs);
          printf("%d\n", benchRet); 
          free(args);
          free(kwargs);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned long n_args = 255;
          int _len_args0 = 65025;
          const int * args = (const int *) malloc(_len_args0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_args0; _i0++) {
            args[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_kwargs0 = 65025;
          int * kwargs = (int *) malloc(_len_kwargs0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_kwargs0; _i0++) {
            kwargs[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = mp_builtin_open(n_args,args,kwargs);
          printf("%d\n", benchRet); 
          free(args);
          free(kwargs);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned long n_args = 10;
          int _len_args0 = 100;
          const int * args = (const int *) malloc(_len_args0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_args0; _i0++) {
            args[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_kwargs0 = 100;
          int * kwargs = (int *) malloc(_len_kwargs0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_kwargs0; _i0++) {
            kwargs[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = mp_builtin_open(n_args,args,kwargs);
          printf("%d\n", benchRet); 
          free(args);
          free(kwargs);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
