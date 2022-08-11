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
struct harbor_msg_queue {size_t head; size_t tail; int size; struct harbor_msg* data; } ;
struct harbor_msg {int dummy; } ;

/* Variables and functions */

__attribute__((used)) static struct harbor_msg *
pop_queue(struct harbor_msg_queue * queue) {
	if (queue->head == queue->tail) {
		return NULL;
	}
	struct harbor_msg * slot = &queue->data[queue->head];
	queue->head = (queue->head + 1) % queue->size;
	return slot;
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
          int _len_queue0 = 1;
          struct harbor_msg_queue * queue = (struct harbor_msg_queue *) malloc(_len_queue0*sizeof(struct harbor_msg_queue));
          for(int _i0 = 0; _i0 < _len_queue0; _i0++) {
            queue[_i0].head = ((-2 * (next_i()%2)) + 1) * next_i();
        queue[_i0].tail = ((-2 * (next_i()%2)) + 1) * next_i();
        queue[_i0].size = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_queue__i0__data0 = 1;
          queue[_i0].data = (struct harbor_msg *) malloc(_len_queue__i0__data0*sizeof(struct harbor_msg));
          for(int _j0 = 0; _j0 < _len_queue__i0__data0; _j0++) {
            queue[_i0].data->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          struct harbor_msg * benchRet = pop_queue(queue);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_queue0; _aux++) {
          free(queue[_aux].data);
          }
          free(queue);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_queue0 = 65025;
          struct harbor_msg_queue * queue = (struct harbor_msg_queue *) malloc(_len_queue0*sizeof(struct harbor_msg_queue));
          for(int _i0 = 0; _i0 < _len_queue0; _i0++) {
            queue[_i0].head = ((-2 * (next_i()%2)) + 1) * next_i();
        queue[_i0].tail = ((-2 * (next_i()%2)) + 1) * next_i();
        queue[_i0].size = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_queue__i0__data0 = 1;
          queue[_i0].data = (struct harbor_msg *) malloc(_len_queue__i0__data0*sizeof(struct harbor_msg));
          for(int _j0 = 0; _j0 < _len_queue__i0__data0; _j0++) {
            queue[_i0].data->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          struct harbor_msg * benchRet = pop_queue(queue);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_queue0; _aux++) {
          free(queue[_aux].data);
          }
          free(queue);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_queue0 = 100;
          struct harbor_msg_queue * queue = (struct harbor_msg_queue *) malloc(_len_queue0*sizeof(struct harbor_msg_queue));
          for(int _i0 = 0; _i0 < _len_queue0; _i0++) {
            queue[_i0].head = ((-2 * (next_i()%2)) + 1) * next_i();
        queue[_i0].tail = ((-2 * (next_i()%2)) + 1) * next_i();
        queue[_i0].size = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_queue__i0__data0 = 1;
          queue[_i0].data = (struct harbor_msg *) malloc(_len_queue__i0__data0*sizeof(struct harbor_msg));
          for(int _j0 = 0; _j0 < _len_queue__i0__data0; _j0++) {
            queue[_i0].data->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          struct harbor_msg * benchRet = pop_queue(queue);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_queue0; _aux++) {
          free(queue[_aux].data);
          }
          free(queue);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
