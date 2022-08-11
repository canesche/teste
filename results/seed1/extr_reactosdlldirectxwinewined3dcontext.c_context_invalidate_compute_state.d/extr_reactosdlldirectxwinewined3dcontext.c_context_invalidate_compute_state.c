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
struct wined3d_context {unsigned int* dirty_compute_states; TYPE_1__* state_table; } ;
struct TYPE_2__ {size_t representative; } ;
typedef  size_t DWORD ;

/* Variables and functions */
 int CHAR_BIT ; 
 size_t STATE_COMPUTE_OFFSET ; 

void context_invalidate_compute_state(struct wined3d_context *context, DWORD state_id)
{
    DWORD representative = context->state_table[state_id].representative - STATE_COMPUTE_OFFSET;
    unsigned int index, shift;

    index = representative / (sizeof(*context->dirty_compute_states) * CHAR_BIT);
    shift = representative & (sizeof(*context->dirty_compute_states) * CHAR_BIT - 1);
    context->dirty_compute_states[index] |= (1u << shift);
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
          unsigned long state_id = 100;
          int _len_context0 = 1;
          struct wined3d_context * context = (struct wined3d_context *) malloc(_len_context0*sizeof(struct wined3d_context));
          for(int _i0 = 0; _i0 < _len_context0; _i0++) {
              int _len_context__i0__dirty_compute_states0 = 1;
          context[_i0].dirty_compute_states = (unsigned int *) malloc(_len_context__i0__dirty_compute_states0*sizeof(unsigned int));
          for(int _j0 = 0; _j0 < _len_context__i0__dirty_compute_states0; _j0++) {
            context[_i0].dirty_compute_states[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_context__i0__state_table0 = 1;
          context[_i0].state_table = (struct TYPE_2__ *) malloc(_len_context__i0__state_table0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_context__i0__state_table0; _j0++) {
            context[_i0].state_table->representative = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          context_invalidate_compute_state(context,state_id);
          for(int _aux = 0; _aux < _len_context0; _aux++) {
          free(context[_aux].dirty_compute_states);
          }
          for(int _aux = 0; _aux < _len_context0; _aux++) {
          free(context[_aux].state_table);
          }
          free(context);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned long state_id = 255;
          int _len_context0 = 65025;
          struct wined3d_context * context = (struct wined3d_context *) malloc(_len_context0*sizeof(struct wined3d_context));
          for(int _i0 = 0; _i0 < _len_context0; _i0++) {
              int _len_context__i0__dirty_compute_states0 = 1;
          context[_i0].dirty_compute_states = (unsigned int *) malloc(_len_context__i0__dirty_compute_states0*sizeof(unsigned int));
          for(int _j0 = 0; _j0 < _len_context__i0__dirty_compute_states0; _j0++) {
            context[_i0].dirty_compute_states[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_context__i0__state_table0 = 1;
          context[_i0].state_table = (struct TYPE_2__ *) malloc(_len_context__i0__state_table0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_context__i0__state_table0; _j0++) {
            context[_i0].state_table->representative = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          context_invalidate_compute_state(context,state_id);
          for(int _aux = 0; _aux < _len_context0; _aux++) {
          free(context[_aux].dirty_compute_states);
          }
          for(int _aux = 0; _aux < _len_context0; _aux++) {
          free(context[_aux].state_table);
          }
          free(context);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned long state_id = 10;
          int _len_context0 = 100;
          struct wined3d_context * context = (struct wined3d_context *) malloc(_len_context0*sizeof(struct wined3d_context));
          for(int _i0 = 0; _i0 < _len_context0; _i0++) {
              int _len_context__i0__dirty_compute_states0 = 1;
          context[_i0].dirty_compute_states = (unsigned int *) malloc(_len_context__i0__dirty_compute_states0*sizeof(unsigned int));
          for(int _j0 = 0; _j0 < _len_context__i0__dirty_compute_states0; _j0++) {
            context[_i0].dirty_compute_states[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_context__i0__state_table0 = 1;
          context[_i0].state_table = (struct TYPE_2__ *) malloc(_len_context__i0__state_table0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_context__i0__state_table0; _j0++) {
            context[_i0].state_table->representative = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          context_invalidate_compute_state(context,state_id);
          for(int _aux = 0; _aux < _len_context0; _aux++) {
          free(context[_aux].dirty_compute_states);
          }
          for(int _aux = 0; _aux < _len_context0; _aux++) {
          free(context[_aux].state_table);
          }
          free(context);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
