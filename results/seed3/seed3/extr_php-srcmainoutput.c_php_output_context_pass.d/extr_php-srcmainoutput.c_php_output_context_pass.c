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
typedef  struct TYPE_7__   TYPE_3__ ;
typedef  struct TYPE_6__   TYPE_2__ ;
typedef  struct TYPE_5__   TYPE_1__ ;

/* Type definitions */
struct TYPE_5__ {scalar_t__ size; scalar_t__ free; scalar_t__ used; int /*<<< orphan*/ * data; } ;
struct TYPE_6__ {scalar_t__ free; scalar_t__ size; scalar_t__ used; int /*<<< orphan*/ * data; } ;
struct TYPE_7__ {TYPE_1__ in; TYPE_2__ out; } ;
typedef  TYPE_3__ php_output_context ;

/* Variables and functions */

__attribute__((used)) static inline void php_output_context_pass(php_output_context *context)
{
	context->out.data = context->in.data;
	context->out.used = context->in.used;
	context->out.size = context->in.size;
	context->out.free = context->in.free;
	context->in.data = NULL;
	context->in.used = 0;
	context->in.free = 0;
	context->in.size = 0;
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
          int _len_context0 = 1;
          struct TYPE_7__ * context = (struct TYPE_7__ *) malloc(_len_context0*sizeof(struct TYPE_7__));
          for(int _i0 = 0; _i0 < _len_context0; _i0++) {
            context[_i0].in.size = ((-2 * (next_i()%2)) + 1) * next_i();
        context[_i0].in.free = ((-2 * (next_i()%2)) + 1) * next_i();
        context[_i0].in.used = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_context__i0__in_data0 = 1;
          context[_i0].in.data = (int *) malloc(_len_context__i0__in_data0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_context__i0__in_data0; _j0++) {
            context[_i0].in.data[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        context[_i0].out.free = ((-2 * (next_i()%2)) + 1) * next_i();
        context[_i0].out.size = ((-2 * (next_i()%2)) + 1) * next_i();
        context[_i0].out.used = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_context__i0__out_data0 = 1;
          context[_i0].out.data = (int *) malloc(_len_context__i0__out_data0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_context__i0__out_data0; _j0++) {
            context[_i0].out.data[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          php_output_context_pass(context);
          free(context);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_context0 = 65025;
          struct TYPE_7__ * context = (struct TYPE_7__ *) malloc(_len_context0*sizeof(struct TYPE_7__));
          for(int _i0 = 0; _i0 < _len_context0; _i0++) {
            context[_i0].in.size = ((-2 * (next_i()%2)) + 1) * next_i();
        context[_i0].in.free = ((-2 * (next_i()%2)) + 1) * next_i();
        context[_i0].in.used = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_context__i0__in_data0 = 1;
          context[_i0].in.data = (int *) malloc(_len_context__i0__in_data0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_context__i0__in_data0; _j0++) {
            context[_i0].in.data[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        context[_i0].out.free = ((-2 * (next_i()%2)) + 1) * next_i();
        context[_i0].out.size = ((-2 * (next_i()%2)) + 1) * next_i();
        context[_i0].out.used = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_context__i0__out_data0 = 1;
          context[_i0].out.data = (int *) malloc(_len_context__i0__out_data0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_context__i0__out_data0; _j0++) {
            context[_i0].out.data[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          php_output_context_pass(context);
          free(context);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_context0 = 100;
          struct TYPE_7__ * context = (struct TYPE_7__ *) malloc(_len_context0*sizeof(struct TYPE_7__));
          for(int _i0 = 0; _i0 < _len_context0; _i0++) {
            context[_i0].in.size = ((-2 * (next_i()%2)) + 1) * next_i();
        context[_i0].in.free = ((-2 * (next_i()%2)) + 1) * next_i();
        context[_i0].in.used = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_context__i0__in_data0 = 1;
          context[_i0].in.data = (int *) malloc(_len_context__i0__in_data0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_context__i0__in_data0; _j0++) {
            context[_i0].in.data[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        context[_i0].out.free = ((-2 * (next_i()%2)) + 1) * next_i();
        context[_i0].out.size = ((-2 * (next_i()%2)) + 1) * next_i();
        context[_i0].out.used = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_context__i0__out_data0 = 1;
          context[_i0].out.data = (int *) malloc(_len_context__i0__out_data0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_context__i0__out_data0; _j0++) {
            context[_i0].out.data[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          php_output_context_pass(context);
          free(context);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
