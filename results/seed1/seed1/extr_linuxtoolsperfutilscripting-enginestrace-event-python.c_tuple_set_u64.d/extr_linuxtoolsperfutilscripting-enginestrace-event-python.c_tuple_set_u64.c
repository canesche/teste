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
typedef  int /*<<< orphan*/  u64 ;
typedef  int /*<<< orphan*/  PyObject ;

/* Variables and functions */

__attribute__((used)) static int tuple_set_u64(PyObject *t, unsigned int pos, u64 val)
{
#if BITS_PER_LONG == 64
	return PyTuple_SetItem(t, pos, _PyLong_FromLong(val));
#endif
#if BITS_PER_LONG == 32
	return PyTuple_SetItem(t, pos, PyLong_FromLongLong(val));
#endif
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
          unsigned int pos = 100;
          int val = 100;
          int _len_t0 = 1;
          int * t = (int *) malloc(_len_t0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_t0; _i0++) {
            t[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = tuple_set_u64(t,pos,val);
          printf("%d\n", benchRet); 
          free(t);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned int pos = 255;
          int val = 255;
          int _len_t0 = 65025;
          int * t = (int *) malloc(_len_t0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_t0; _i0++) {
            t[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = tuple_set_u64(t,pos,val);
          printf("%d\n", benchRet); 
          free(t);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned int pos = 10;
          int val = 10;
          int _len_t0 = 100;
          int * t = (int *) malloc(_len_t0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_t0; _i0++) {
            t[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = tuple_set_u64(t,pos,val);
          printf("%d\n", benchRet); 
          free(t);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
