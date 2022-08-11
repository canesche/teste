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
struct deferred_action {int dummy; } ;
struct action_fifo {int head; struct deferred_action* fifo; } ;

/* Variables and functions */
 int DEFERRED_ACTION_FIFO_SIZE ; 

__attribute__((used)) static struct deferred_action *action_fifo_put(struct action_fifo *fifo)
{
	if (fifo->head >= DEFERRED_ACTION_FIFO_SIZE - 1)
		return NULL;

	return &fifo->fifo[fifo->head++];
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
          int _len_fifo0 = 1;
          struct action_fifo * fifo = (struct action_fifo *) malloc(_len_fifo0*sizeof(struct action_fifo));
          for(int _i0 = 0; _i0 < _len_fifo0; _i0++) {
            fifo[_i0].head = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_fifo__i0__fifo0 = 1;
          fifo[_i0].fifo = (struct deferred_action *) malloc(_len_fifo__i0__fifo0*sizeof(struct deferred_action));
          for(int _j0 = 0; _j0 < _len_fifo__i0__fifo0; _j0++) {
            fifo[_i0].fifo->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          struct deferred_action * benchRet = action_fifo_put(fifo);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_fifo0; _aux++) {
          free(fifo[_aux].fifo);
          }
          free(fifo);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_fifo0 = 65025;
          struct action_fifo * fifo = (struct action_fifo *) malloc(_len_fifo0*sizeof(struct action_fifo));
          for(int _i0 = 0; _i0 < _len_fifo0; _i0++) {
            fifo[_i0].head = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_fifo__i0__fifo0 = 1;
          fifo[_i0].fifo = (struct deferred_action *) malloc(_len_fifo__i0__fifo0*sizeof(struct deferred_action));
          for(int _j0 = 0; _j0 < _len_fifo__i0__fifo0; _j0++) {
            fifo[_i0].fifo->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          struct deferred_action * benchRet = action_fifo_put(fifo);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_fifo0; _aux++) {
          free(fifo[_aux].fifo);
          }
          free(fifo);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_fifo0 = 100;
          struct action_fifo * fifo = (struct action_fifo *) malloc(_len_fifo0*sizeof(struct action_fifo));
          for(int _i0 = 0; _i0 < _len_fifo0; _i0++) {
            fifo[_i0].head = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_fifo__i0__fifo0 = 1;
          fifo[_i0].fifo = (struct deferred_action *) malloc(_len_fifo__i0__fifo0*sizeof(struct deferred_action));
          for(int _j0 = 0; _j0 < _len_fifo__i0__fifo0; _j0++) {
            fifo[_i0].fifo->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          struct deferred_action * benchRet = action_fifo_put(fifo);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_fifo0; _aux++) {
          free(fifo[_aux].fifo);
          }
          free(fifo);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
