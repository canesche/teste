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
typedef  struct TYPE_2__   TYPE_1__ ;

/* Type definitions */
struct TYPE_2__ {size_t num; struct signal_callback* array; } ;
struct signal_info {TYPE_1__ callbacks; } ;
struct signal_callback {scalar_t__ callback; void* data; } ;
typedef  scalar_t__ signal_callback_t ;

/* Variables and functions */
 size_t DARRAY_INVALID ; 

__attribute__((used)) static inline size_t signal_get_callback_idx(struct signal_info *si,
		signal_callback_t callback, void *data)
{
	for (size_t i = 0; i < si->callbacks.num; i++) {
		struct signal_callback *sc = si->callbacks.array+i;

		if (sc->callback == callback && sc->data == data)
			return i;
	}

	return DARRAY_INVALID;
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
          long callback = 100;
          int _len_si0 = 1;
          struct signal_info * si = (struct signal_info *) malloc(_len_si0*sizeof(struct signal_info));
          for(int _i0 = 0; _i0 < _len_si0; _i0++) {
            si[_i0].callbacks.num = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_si__i0__callbacks_array0 = 1;
          si[_i0].callbacks.array = (struct signal_callback *) malloc(_len_si__i0__callbacks_array0*sizeof(struct signal_callback));
          for(int _j0 = 0; _j0 < _len_si__i0__callbacks_array0; _j0++) {
            si[_i0].callbacks.array->callback = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          void * data;
          unsigned long benchRet = signal_get_callback_idx(si,callback,data);
          printf("%lu\n", benchRet); 
          free(si);
        
        break;
    }
    // big-arr
    case 1:
    {
          long callback = 255;
          int _len_si0 = 65025;
          struct signal_info * si = (struct signal_info *) malloc(_len_si0*sizeof(struct signal_info));
          for(int _i0 = 0; _i0 < _len_si0; _i0++) {
            si[_i0].callbacks.num = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_si__i0__callbacks_array0 = 1;
          si[_i0].callbacks.array = (struct signal_callback *) malloc(_len_si__i0__callbacks_array0*sizeof(struct signal_callback));
          for(int _j0 = 0; _j0 < _len_si__i0__callbacks_array0; _j0++) {
            si[_i0].callbacks.array->callback = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          void * data;
          unsigned long benchRet = signal_get_callback_idx(si,callback,data);
          printf("%lu\n", benchRet); 
          free(si);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          long callback = 10;
          int _len_si0 = 100;
          struct signal_info * si = (struct signal_info *) malloc(_len_si0*sizeof(struct signal_info));
          for(int _i0 = 0; _i0 < _len_si0; _i0++) {
            si[_i0].callbacks.num = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_si__i0__callbacks_array0 = 1;
          si[_i0].callbacks.array = (struct signal_callback *) malloc(_len_si__i0__callbacks_array0*sizeof(struct signal_callback));
          for(int _j0 = 0; _j0 < _len_si__i0__callbacks_array0; _j0++) {
            si[_i0].callbacks.array->callback = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          void * data;
          unsigned long benchRet = signal_get_callback_idx(si,callback,data);
          printf("%lu\n", benchRet); 
          free(si);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
