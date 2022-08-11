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
struct commit_stack {int nr; struct commit** items; } ;
struct commit {int dummy; } ;

/* Variables and functions */

__attribute__((used)) static struct commit *commit_stack_pop(struct commit_stack *stack)
{
	return stack->nr ? stack->items[--stack->nr] : NULL;
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
          int _len_stack0 = 1;
          struct commit_stack * stack = (struct commit_stack *) malloc(_len_stack0*sizeof(struct commit_stack));
          for(int _i0 = 0; _i0 < _len_stack0; _i0++) {
            stack[_i0].nr = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_stack__i0__items0 = 1;
          stack[_i0].items = (struct commit **) malloc(_len_stack__i0__items0*sizeof(struct commit *));
          for(int _j0 = 0; _j0 < _len_stack__i0__items0; _j0++) {
            int _len_stack__i0__items1 = 1;
            stack[_i0].items[_j0] = (struct commit *) malloc(_len_stack__i0__items1*sizeof(struct commit));
            for(int _j1 = 0; _j1 < _len_stack__i0__items1; _j1++) {
              stack[_i0].items[_j0]->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          struct commit * benchRet = commit_stack_pop(stack);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_stack0; _aux++) {
          free(*(stack[_aux].items));
        free(stack[_aux].items);
          }
          free(stack);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_stack0 = 65025;
          struct commit_stack * stack = (struct commit_stack *) malloc(_len_stack0*sizeof(struct commit_stack));
          for(int _i0 = 0; _i0 < _len_stack0; _i0++) {
            stack[_i0].nr = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_stack__i0__items0 = 1;
          stack[_i0].items = (struct commit **) malloc(_len_stack__i0__items0*sizeof(struct commit *));
          for(int _j0 = 0; _j0 < _len_stack__i0__items0; _j0++) {
            int _len_stack__i0__items1 = 1;
            stack[_i0].items[_j0] = (struct commit *) malloc(_len_stack__i0__items1*sizeof(struct commit));
            for(int _j1 = 0; _j1 < _len_stack__i0__items1; _j1++) {
              stack[_i0].items[_j0]->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          struct commit * benchRet = commit_stack_pop(stack);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_stack0; _aux++) {
          free(*(stack[_aux].items));
        free(stack[_aux].items);
          }
          free(stack);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_stack0 = 100;
          struct commit_stack * stack = (struct commit_stack *) malloc(_len_stack0*sizeof(struct commit_stack));
          for(int _i0 = 0; _i0 < _len_stack0; _i0++) {
            stack[_i0].nr = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_stack__i0__items0 = 1;
          stack[_i0].items = (struct commit **) malloc(_len_stack__i0__items0*sizeof(struct commit *));
          for(int _j0 = 0; _j0 < _len_stack__i0__items0; _j0++) {
            int _len_stack__i0__items1 = 1;
            stack[_i0].items[_j0] = (struct commit *) malloc(_len_stack__i0__items1*sizeof(struct commit));
            for(int _j1 = 0; _j1 < _len_stack__i0__items1; _j1++) {
              stack[_i0].items[_j0]->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          struct commit * benchRet = commit_stack_pop(stack);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_stack0; _aux++) {
          free(*(stack[_aux].items));
        free(stack[_aux].items);
          }
          free(stack);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
