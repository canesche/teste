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
struct request_queue {int dummy; } ;
struct carm_host {unsigned int wait_q_prod; unsigned int wait_q_cons; struct request_queue** wait_q; } ;

/* Variables and functions */
 unsigned int CARM_MAX_WAIT_Q ; 

__attribute__((used)) static inline struct request_queue *carm_pop_q(struct carm_host *host)
{
	unsigned int idx;

	if (host->wait_q_prod == host->wait_q_cons)
		return NULL;

	idx = host->wait_q_cons % CARM_MAX_WAIT_Q;
	host->wait_q_cons++;

	return host->wait_q[idx];
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
          int _len_host0 = 1;
          struct carm_host * host = (struct carm_host *) malloc(_len_host0*sizeof(struct carm_host));
          for(int _i0 = 0; _i0 < _len_host0; _i0++) {
            host[_i0].wait_q_prod = ((-2 * (next_i()%2)) + 1) * next_i();
        host[_i0].wait_q_cons = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_host__i0__wait_q0 = 1;
          host[_i0].wait_q = (struct request_queue **) malloc(_len_host__i0__wait_q0*sizeof(struct request_queue *));
          for(int _j0 = 0; _j0 < _len_host__i0__wait_q0; _j0++) {
            int _len_host__i0__wait_q1 = 1;
            host[_i0].wait_q[_j0] = (struct request_queue *) malloc(_len_host__i0__wait_q1*sizeof(struct request_queue));
            for(int _j1 = 0; _j1 < _len_host__i0__wait_q1; _j1++) {
              host[_i0].wait_q[_j0]->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          struct request_queue * benchRet = carm_pop_q(host);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_host0; _aux++) {
          free(*(host[_aux].wait_q));
        free(host[_aux].wait_q);
          }
          free(host);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_host0 = 65025;
          struct carm_host * host = (struct carm_host *) malloc(_len_host0*sizeof(struct carm_host));
          for(int _i0 = 0; _i0 < _len_host0; _i0++) {
            host[_i0].wait_q_prod = ((-2 * (next_i()%2)) + 1) * next_i();
        host[_i0].wait_q_cons = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_host__i0__wait_q0 = 1;
          host[_i0].wait_q = (struct request_queue **) malloc(_len_host__i0__wait_q0*sizeof(struct request_queue *));
          for(int _j0 = 0; _j0 < _len_host__i0__wait_q0; _j0++) {
            int _len_host__i0__wait_q1 = 1;
            host[_i0].wait_q[_j0] = (struct request_queue *) malloc(_len_host__i0__wait_q1*sizeof(struct request_queue));
            for(int _j1 = 0; _j1 < _len_host__i0__wait_q1; _j1++) {
              host[_i0].wait_q[_j0]->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          struct request_queue * benchRet = carm_pop_q(host);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_host0; _aux++) {
          free(*(host[_aux].wait_q));
        free(host[_aux].wait_q);
          }
          free(host);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_host0 = 100;
          struct carm_host * host = (struct carm_host *) malloc(_len_host0*sizeof(struct carm_host));
          for(int _i0 = 0; _i0 < _len_host0; _i0++) {
            host[_i0].wait_q_prod = ((-2 * (next_i()%2)) + 1) * next_i();
        host[_i0].wait_q_cons = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_host__i0__wait_q0 = 1;
          host[_i0].wait_q = (struct request_queue **) malloc(_len_host__i0__wait_q0*sizeof(struct request_queue *));
          for(int _j0 = 0; _j0 < _len_host__i0__wait_q0; _j0++) {
            int _len_host__i0__wait_q1 = 1;
            host[_i0].wait_q[_j0] = (struct request_queue *) malloc(_len_host__i0__wait_q1*sizeof(struct request_queue));
            for(int _j1 = 0; _j1 < _len_host__i0__wait_q1; _j1++) {
              host[_i0].wait_q[_j0]->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          struct request_queue * benchRet = carm_pop_q(host);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_host0; _aux++) {
          free(*(host[_aux].wait_q));
        free(host[_aux].wait_q);
          }
          free(host);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
