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
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
struct TYPE_3__ {int _a_transferredcanvases; } ;
typedef  TYPE_1__ pthread_attr_t ;

/* Variables and functions */

int emscripten_pthread_attr_settransferredcanvases(pthread_attr_t *a, const char *str)
{
	a->_a_transferredcanvases = (int)str;
	return 0;
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
          int _len_a0 = 1;
          struct TYPE_3__ * a = (struct TYPE_3__ *) malloc(_len_a0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_a0; _i0++) {
            a[_i0]._a_transferredcanvases = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_str0 = 1;
          const char * str = (const char *) malloc(_len_str0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_str0; _i0++) {
            str[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = emscripten_pthread_attr_settransferredcanvases(a,str);
          printf("%d\n", benchRet); 
          free(a);
          free(str);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_a0 = 65025;
          struct TYPE_3__ * a = (struct TYPE_3__ *) malloc(_len_a0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_a0; _i0++) {
            a[_i0]._a_transferredcanvases = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_str0 = 65025;
          const char * str = (const char *) malloc(_len_str0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_str0; _i0++) {
            str[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = emscripten_pthread_attr_settransferredcanvases(a,str);
          printf("%d\n", benchRet); 
          free(a);
          free(str);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_a0 = 100;
          struct TYPE_3__ * a = (struct TYPE_3__ *) malloc(_len_a0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_a0; _i0++) {
            a[_i0]._a_transferredcanvases = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_str0 = 100;
          const char * str = (const char *) malloc(_len_str0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_str0; _i0++) {
            str[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = emscripten_pthread_attr_settransferredcanvases(a,str);
          printf("%d\n", benchRet); 
          free(a);
          free(str);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
