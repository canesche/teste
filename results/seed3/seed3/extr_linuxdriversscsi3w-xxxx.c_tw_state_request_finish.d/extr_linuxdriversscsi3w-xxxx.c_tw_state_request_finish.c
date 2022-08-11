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
struct TYPE_3__ {int* free_queue; size_t free_tail; int /*<<< orphan*/ * state; } ;
typedef  TYPE_1__ TW_Device_Extension ;

/* Variables and functions */
 int TW_Q_LENGTH ; 
 int /*<<< orphan*/  TW_S_FINISHED ; 

__attribute__((used)) static void tw_state_request_finish(TW_Device_Extension *tw_dev, int request_id)
{
	tw_dev->free_queue[tw_dev->free_tail] = request_id;
	tw_dev->state[request_id] = TW_S_FINISHED;
	tw_dev->free_tail = (tw_dev->free_tail + 1) % TW_Q_LENGTH;
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
          int request_id = 100;
          int _len_tw_dev0 = 1;
          struct TYPE_3__ * tw_dev = (struct TYPE_3__ *) malloc(_len_tw_dev0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_tw_dev0; _i0++) {
              int _len_tw_dev__i0__free_queue0 = 1;
          tw_dev[_i0].free_queue = (int *) malloc(_len_tw_dev__i0__free_queue0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_tw_dev__i0__free_queue0; _j0++) {
            tw_dev[_i0].free_queue[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        tw_dev[_i0].free_tail = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_tw_dev__i0__state0 = 1;
          tw_dev[_i0].state = (int *) malloc(_len_tw_dev__i0__state0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_tw_dev__i0__state0; _j0++) {
            tw_dev[_i0].state[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          tw_state_request_finish(tw_dev,request_id);
          for(int _aux = 0; _aux < _len_tw_dev0; _aux++) {
          free(tw_dev[_aux].free_queue);
          }
          for(int _aux = 0; _aux < _len_tw_dev0; _aux++) {
          free(tw_dev[_aux].state);
          }
          free(tw_dev);
        
        break;
    }
    // big-arr
    case 1:
    {
          int request_id = 255;
          int _len_tw_dev0 = 65025;
          struct TYPE_3__ * tw_dev = (struct TYPE_3__ *) malloc(_len_tw_dev0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_tw_dev0; _i0++) {
              int _len_tw_dev__i0__free_queue0 = 1;
          tw_dev[_i0].free_queue = (int *) malloc(_len_tw_dev__i0__free_queue0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_tw_dev__i0__free_queue0; _j0++) {
            tw_dev[_i0].free_queue[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        tw_dev[_i0].free_tail = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_tw_dev__i0__state0 = 1;
          tw_dev[_i0].state = (int *) malloc(_len_tw_dev__i0__state0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_tw_dev__i0__state0; _j0++) {
            tw_dev[_i0].state[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          tw_state_request_finish(tw_dev,request_id);
          for(int _aux = 0; _aux < _len_tw_dev0; _aux++) {
          free(tw_dev[_aux].free_queue);
          }
          for(int _aux = 0; _aux < _len_tw_dev0; _aux++) {
          free(tw_dev[_aux].state);
          }
          free(tw_dev);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int request_id = 10;
          int _len_tw_dev0 = 100;
          struct TYPE_3__ * tw_dev = (struct TYPE_3__ *) malloc(_len_tw_dev0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_tw_dev0; _i0++) {
              int _len_tw_dev__i0__free_queue0 = 1;
          tw_dev[_i0].free_queue = (int *) malloc(_len_tw_dev__i0__free_queue0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_tw_dev__i0__free_queue0; _j0++) {
            tw_dev[_i0].free_queue[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        tw_dev[_i0].free_tail = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_tw_dev__i0__state0 = 1;
          tw_dev[_i0].state = (int *) malloc(_len_tw_dev__i0__state0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_tw_dev__i0__state0; _j0++) {
            tw_dev[_i0].state[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          tw_state_request_finish(tw_dev,request_id);
          for(int _aux = 0; _aux < _len_tw_dev0; _aux++) {
          free(tw_dev[_aux].free_queue);
          }
          for(int _aux = 0; _aux < _len_tw_dev0; _aux++) {
          free(tw_dev[_aux].state);
          }
          free(tw_dev);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
