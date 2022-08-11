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
union handle_parts {size_t slabindex; size_t offset; int /*<<< orphan*/  handle; } ;
struct stack_trace {scalar_t__ skip; int /*<<< orphan*/  entries; int /*<<< orphan*/  max_entries; int /*<<< orphan*/  nr_entries; } ;
struct stack_record {int /*<<< orphan*/  entries; int /*<<< orphan*/  size; } ;
typedef  int /*<<< orphan*/  depot_stack_handle_t ;

/* Variables and functions */
 size_t STACK_ALLOC_ALIGN ; 
 void** stack_slabs ; 

void depot_fetch_stack(depot_stack_handle_t handle, struct stack_trace *trace)
{
	union handle_parts parts = { .handle = handle };
	void *slab = stack_slabs[parts.slabindex];
	size_t offset = parts.offset << STACK_ALLOC_ALIGN;
	struct stack_record *stack = slab + offset;

	trace->nr_entries = trace->max_entries = stack->size;
	trace->entries = stack->entries;
	trace->skip = 0;
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
          int handle = 100;
          int _len_trace0 = 1;
          struct stack_trace * trace = (struct stack_trace *) malloc(_len_trace0*sizeof(struct stack_trace));
          for(int _i0 = 0; _i0 < _len_trace0; _i0++) {
            trace[_i0].skip = ((-2 * (next_i()%2)) + 1) * next_i();
        trace[_i0].entries = ((-2 * (next_i()%2)) + 1) * next_i();
        trace[_i0].max_entries = ((-2 * (next_i()%2)) + 1) * next_i();
        trace[_i0].nr_entries = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          depot_fetch_stack(handle,trace);
          free(trace);
        
        break;
    }
    // big-arr
    case 1:
    {
          int handle = 255;
          int _len_trace0 = 65025;
          struct stack_trace * trace = (struct stack_trace *) malloc(_len_trace0*sizeof(struct stack_trace));
          for(int _i0 = 0; _i0 < _len_trace0; _i0++) {
            trace[_i0].skip = ((-2 * (next_i()%2)) + 1) * next_i();
        trace[_i0].entries = ((-2 * (next_i()%2)) + 1) * next_i();
        trace[_i0].max_entries = ((-2 * (next_i()%2)) + 1) * next_i();
        trace[_i0].nr_entries = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          depot_fetch_stack(handle,trace);
          free(trace);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int handle = 10;
          int _len_trace0 = 100;
          struct stack_trace * trace = (struct stack_trace *) malloc(_len_trace0*sizeof(struct stack_trace));
          for(int _i0 = 0; _i0 < _len_trace0; _i0++) {
            trace[_i0].skip = ((-2 * (next_i()%2)) + 1) * next_i();
        trace[_i0].entries = ((-2 * (next_i()%2)) + 1) * next_i();
        trace[_i0].max_entries = ((-2 * (next_i()%2)) + 1) * next_i();
        trace[_i0].nr_entries = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          depot_fetch_stack(handle,trace);
          free(trace);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
