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
struct queue {size_t pipe; int queue; } ;
struct device_queue_manager {int* allocated_queues; } ;

/* Variables and functions */

__attribute__((used)) static inline void deallocate_hqd(struct device_queue_manager *dqm,
				struct queue *q)
{
	dqm->allocated_queues[q->pipe] |= (1 << q->queue);
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
          int _len_dqm0 = 1;
          struct device_queue_manager * dqm = (struct device_queue_manager *) malloc(_len_dqm0*sizeof(struct device_queue_manager));
          for(int _i0 = 0; _i0 < _len_dqm0; _i0++) {
              int _len_dqm__i0__allocated_queues0 = 1;
          dqm[_i0].allocated_queues = (int *) malloc(_len_dqm__i0__allocated_queues0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_dqm__i0__allocated_queues0; _j0++) {
            dqm[_i0].allocated_queues[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_q0 = 1;
          struct queue * q = (struct queue *) malloc(_len_q0*sizeof(struct queue));
          for(int _i0 = 0; _i0 < _len_q0; _i0++) {
            q[_i0].pipe = ((-2 * (next_i()%2)) + 1) * next_i();
        q[_i0].queue = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          deallocate_hqd(dqm,q);
          for(int _aux = 0; _aux < _len_dqm0; _aux++) {
          free(dqm[_aux].allocated_queues);
          }
          free(dqm);
          free(q);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_dqm0 = 65025;
          struct device_queue_manager * dqm = (struct device_queue_manager *) malloc(_len_dqm0*sizeof(struct device_queue_manager));
          for(int _i0 = 0; _i0 < _len_dqm0; _i0++) {
              int _len_dqm__i0__allocated_queues0 = 1;
          dqm[_i0].allocated_queues = (int *) malloc(_len_dqm__i0__allocated_queues0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_dqm__i0__allocated_queues0; _j0++) {
            dqm[_i0].allocated_queues[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_q0 = 65025;
          struct queue * q = (struct queue *) malloc(_len_q0*sizeof(struct queue));
          for(int _i0 = 0; _i0 < _len_q0; _i0++) {
            q[_i0].pipe = ((-2 * (next_i()%2)) + 1) * next_i();
        q[_i0].queue = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          deallocate_hqd(dqm,q);
          for(int _aux = 0; _aux < _len_dqm0; _aux++) {
          free(dqm[_aux].allocated_queues);
          }
          free(dqm);
          free(q);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_dqm0 = 100;
          struct device_queue_manager * dqm = (struct device_queue_manager *) malloc(_len_dqm0*sizeof(struct device_queue_manager));
          for(int _i0 = 0; _i0 < _len_dqm0; _i0++) {
              int _len_dqm__i0__allocated_queues0 = 1;
          dqm[_i0].allocated_queues = (int *) malloc(_len_dqm__i0__allocated_queues0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_dqm__i0__allocated_queues0; _j0++) {
            dqm[_i0].allocated_queues[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_q0 = 100;
          struct queue * q = (struct queue *) malloc(_len_q0*sizeof(struct queue));
          for(int _i0 = 0; _i0 < _len_q0; _i0++) {
            q[_i0].pipe = ((-2 * (next_i()%2)) + 1) * next_i();
        q[_i0].queue = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          deallocate_hqd(dqm,q);
          for(int _aux = 0; _aux < _len_dqm0; _aux++) {
          free(dqm[_aux].allocated_queues);
          }
          free(dqm);
          free(q);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
