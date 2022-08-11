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
struct TYPE_3__ {int gc_protected; scalar_t__ collected; scalar_t__ gc_runs; scalar_t__ num_roots; void* buf_size; void* gc_threshold; void* first_unused; void* unused; int /*<<< orphan*/ * buf; scalar_t__ gc_full; scalar_t__ gc_active; scalar_t__ gc_enabled; } ;
typedef  TYPE_1__ zend_gc_globals ;

/* Variables and functions */
 void* GC_INVALID ; 

__attribute__((used)) static void gc_globals_ctor_ex(zend_gc_globals *gc_globals)
{
	gc_globals->gc_enabled = 0;
	gc_globals->gc_active = 0;
	gc_globals->gc_protected = 1;
	gc_globals->gc_full = 0;

	gc_globals->buf = NULL;
	gc_globals->unused = GC_INVALID;
	gc_globals->first_unused = GC_INVALID;
	gc_globals->gc_threshold = GC_INVALID;
	gc_globals->buf_size = GC_INVALID;
	gc_globals->num_roots = 0;

	gc_globals->gc_runs = 0;
	gc_globals->collected = 0;

#if GC_BENCH
	gc_globals->root_buf_length = 0;
	gc_globals->root_buf_peak = 0;
	gc_globals->zval_possible_root = 0;
	gc_globals->zval_buffered = 0;
	gc_globals->zval_remove_from_buffer = 0;
	gc_globals->zval_marked_grey = 0;
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
          int _len_gc_globals0 = 1;
          struct TYPE_3__ * gc_globals = (struct TYPE_3__ *) malloc(_len_gc_globals0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_gc_globals0; _i0++) {
            gc_globals[_i0].gc_protected = ((-2 * (next_i()%2)) + 1) * next_i();
        gc_globals[_i0].collected = ((-2 * (next_i()%2)) + 1) * next_i();
        gc_globals[_i0].gc_runs = ((-2 * (next_i()%2)) + 1) * next_i();
        gc_globals[_i0].num_roots = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_gc_globals__i0__buf0 = 1;
          gc_globals[_i0].buf = (int *) malloc(_len_gc_globals__i0__buf0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_gc_globals__i0__buf0; _j0++) {
            gc_globals[_i0].buf[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        gc_globals[_i0].gc_full = ((-2 * (next_i()%2)) + 1) * next_i();
        gc_globals[_i0].gc_active = ((-2 * (next_i()%2)) + 1) * next_i();
        gc_globals[_i0].gc_enabled = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          gc_globals_ctor_ex(gc_globals);
          for(int _aux = 0; _aux < _len_gc_globals0; _aux++) {
          free(gc_globals[_aux].buf);
          }
          free(gc_globals);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_gc_globals0 = 65025;
          struct TYPE_3__ * gc_globals = (struct TYPE_3__ *) malloc(_len_gc_globals0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_gc_globals0; _i0++) {
            gc_globals[_i0].gc_protected = ((-2 * (next_i()%2)) + 1) * next_i();
        gc_globals[_i0].collected = ((-2 * (next_i()%2)) + 1) * next_i();
        gc_globals[_i0].gc_runs = ((-2 * (next_i()%2)) + 1) * next_i();
        gc_globals[_i0].num_roots = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_gc_globals__i0__buf0 = 1;
          gc_globals[_i0].buf = (int *) malloc(_len_gc_globals__i0__buf0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_gc_globals__i0__buf0; _j0++) {
            gc_globals[_i0].buf[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        gc_globals[_i0].gc_full = ((-2 * (next_i()%2)) + 1) * next_i();
        gc_globals[_i0].gc_active = ((-2 * (next_i()%2)) + 1) * next_i();
        gc_globals[_i0].gc_enabled = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          gc_globals_ctor_ex(gc_globals);
          for(int _aux = 0; _aux < _len_gc_globals0; _aux++) {
          free(gc_globals[_aux].buf);
          }
          free(gc_globals);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_gc_globals0 = 100;
          struct TYPE_3__ * gc_globals = (struct TYPE_3__ *) malloc(_len_gc_globals0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_gc_globals0; _i0++) {
            gc_globals[_i0].gc_protected = ((-2 * (next_i()%2)) + 1) * next_i();
        gc_globals[_i0].collected = ((-2 * (next_i()%2)) + 1) * next_i();
        gc_globals[_i0].gc_runs = ((-2 * (next_i()%2)) + 1) * next_i();
        gc_globals[_i0].num_roots = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_gc_globals__i0__buf0 = 1;
          gc_globals[_i0].buf = (int *) malloc(_len_gc_globals__i0__buf0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_gc_globals__i0__buf0; _j0++) {
            gc_globals[_i0].buf[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        gc_globals[_i0].gc_full = ((-2 * (next_i()%2)) + 1) * next_i();
        gc_globals[_i0].gc_active = ((-2 * (next_i()%2)) + 1) * next_i();
        gc_globals[_i0].gc_enabled = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          gc_globals_ctor_ex(gc_globals);
          for(int _aux = 0; _aux < _len_gc_globals0; _aux++) {
          free(gc_globals[_aux].buf);
          }
          free(gc_globals);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
