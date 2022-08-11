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
struct rcu_segcblist {int /*<<< orphan*/ *** tails; int /*<<< orphan*/ * head; } ;
struct rcu_cblist {int /*<<< orphan*/ * head; int /*<<< orphan*/ ** tail; } ;

/* Variables and functions */
 int RCU_CBLIST_NSEGS ; 
 int RCU_DONE_TAIL ; 

void rcu_segcblist_insert_done_cbs(struct rcu_segcblist *rsclp,
				   struct rcu_cblist *rclp)
{
	int i;

	if (!rclp->head)
		return; /* No callbacks to move. */
	*rclp->tail = rsclp->head;
	rsclp->head = rclp->head;
	for (i = RCU_DONE_TAIL; i < RCU_CBLIST_NSEGS; i++)
		if (&rsclp->head == rsclp->tails[i])
			rsclp->tails[i] = rclp->tail;
		else
			break;
	rclp->head = NULL;
	rclp->tail = &rclp->head;
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
          int _len_rsclp0 = 1;
          struct rcu_segcblist * rsclp = (struct rcu_segcblist *) malloc(_len_rsclp0*sizeof(struct rcu_segcblist));
          for(int _i0 = 0; _i0 < _len_rsclp0; _i0++) {
              int _len_rsclp__i0__tails0 = 1;
          rsclp[_i0].tails = (int ***) malloc(_len_rsclp__i0__tails0*sizeof(int **));
          for(int _j0 = 0; _j0 < _len_rsclp__i0__tails0; _j0++) {
            int _len_rsclp__i0__tails1 = 1;
            rsclp[_i0].tails[_j0] = (int **) malloc(_len_rsclp__i0__tails1*sizeof(int *));
            for(int _j1 = 0; _j1 < _len_rsclp__i0__tails1; _j1++) {
              int _len_rsclp__i0__tails2 = 1;
              rsclp[_i0].tails[_j0][_j1] = (int *) malloc(_len_rsclp__i0__tails2*sizeof(int));
              for(int _j2 = 0; _j2 < _len_rsclp__i0__tails2; _j2++) {
                rsclp[_i0].tails[_j0][_j1][_j2] = ((-2 * (next_i()%2)) + 1) * next_i();
              }
            }
          }
          int _len_rsclp__i0__head0 = 1;
          rsclp[_i0].head = (int *) malloc(_len_rsclp__i0__head0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_rsclp__i0__head0; _j0++) {
            rsclp[_i0].head[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_rclp0 = 1;
          struct rcu_cblist * rclp = (struct rcu_cblist *) malloc(_len_rclp0*sizeof(struct rcu_cblist));
          for(int _i0 = 0; _i0 < _len_rclp0; _i0++) {
              int _len_rclp__i0__head0 = 1;
          rclp[_i0].head = (int *) malloc(_len_rclp__i0__head0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_rclp__i0__head0; _j0++) {
            rclp[_i0].head[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_rclp__i0__tail0 = 1;
          rclp[_i0].tail = (int **) malloc(_len_rclp__i0__tail0*sizeof(int *));
          for(int _j0 = 0; _j0 < _len_rclp__i0__tail0; _j0++) {
            int _len_rclp__i0__tail1 = 1;
            rclp[_i0].tail[_j0] = (int *) malloc(_len_rclp__i0__tail1*sizeof(int));
            for(int _j1 = 0; _j1 < _len_rclp__i0__tail1; _j1++) {
              rclp[_i0].tail[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          rcu_segcblist_insert_done_cbs(rsclp,rclp);
          for(int _aux = 0; _aux < _len_rsclp0; _aux++) {
          }
          for(int _aux = 0; _aux < _len_rsclp0; _aux++) {
          free(rsclp[_aux].head);
          }
          free(rsclp);
          for(int _aux = 0; _aux < _len_rclp0; _aux++) {
          free(rclp[_aux].head);
          }
          for(int _aux = 0; _aux < _len_rclp0; _aux++) {
          free(*(rclp[_aux].tail));
        free(rclp[_aux].tail);
          }
          free(rclp);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_rsclp0 = 65025;
          struct rcu_segcblist * rsclp = (struct rcu_segcblist *) malloc(_len_rsclp0*sizeof(struct rcu_segcblist));
          for(int _i0 = 0; _i0 < _len_rsclp0; _i0++) {
              int _len_rsclp__i0__tails0 = 1;
          rsclp[_i0].tails = (int ***) malloc(_len_rsclp__i0__tails0*sizeof(int **));
          for(int _j0 = 0; _j0 < _len_rsclp__i0__tails0; _j0++) {
            int _len_rsclp__i0__tails1 = 1;
            rsclp[_i0].tails[_j0] = (int **) malloc(_len_rsclp__i0__tails1*sizeof(int *));
            for(int _j1 = 0; _j1 < _len_rsclp__i0__tails1; _j1++) {
              int _len_rsclp__i0__tails2 = 1;
              rsclp[_i0].tails[_j0][_j1] = (int *) malloc(_len_rsclp__i0__tails2*sizeof(int));
              for(int _j2 = 0; _j2 < _len_rsclp__i0__tails2; _j2++) {
                rsclp[_i0].tails[_j0][_j1][_j2] = ((-2 * (next_i()%2)) + 1) * next_i();
              }
            }
          }
          int _len_rsclp__i0__head0 = 1;
          rsclp[_i0].head = (int *) malloc(_len_rsclp__i0__head0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_rsclp__i0__head0; _j0++) {
            rsclp[_i0].head[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_rclp0 = 65025;
          struct rcu_cblist * rclp = (struct rcu_cblist *) malloc(_len_rclp0*sizeof(struct rcu_cblist));
          for(int _i0 = 0; _i0 < _len_rclp0; _i0++) {
              int _len_rclp__i0__head0 = 1;
          rclp[_i0].head = (int *) malloc(_len_rclp__i0__head0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_rclp__i0__head0; _j0++) {
            rclp[_i0].head[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_rclp__i0__tail0 = 1;
          rclp[_i0].tail = (int **) malloc(_len_rclp__i0__tail0*sizeof(int *));
          for(int _j0 = 0; _j0 < _len_rclp__i0__tail0; _j0++) {
            int _len_rclp__i0__tail1 = 1;
            rclp[_i0].tail[_j0] = (int *) malloc(_len_rclp__i0__tail1*sizeof(int));
            for(int _j1 = 0; _j1 < _len_rclp__i0__tail1; _j1++) {
              rclp[_i0].tail[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          rcu_segcblist_insert_done_cbs(rsclp,rclp);
          for(int _aux = 0; _aux < _len_rsclp0; _aux++) {
          }
          for(int _aux = 0; _aux < _len_rsclp0; _aux++) {
          free(rsclp[_aux].head);
          }
          free(rsclp);
          for(int _aux = 0; _aux < _len_rclp0; _aux++) {
          free(rclp[_aux].head);
          }
          for(int _aux = 0; _aux < _len_rclp0; _aux++) {
          free(*(rclp[_aux].tail));
        free(rclp[_aux].tail);
          }
          free(rclp);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_rsclp0 = 100;
          struct rcu_segcblist * rsclp = (struct rcu_segcblist *) malloc(_len_rsclp0*sizeof(struct rcu_segcblist));
          for(int _i0 = 0; _i0 < _len_rsclp0; _i0++) {
              int _len_rsclp__i0__tails0 = 1;
          rsclp[_i0].tails = (int ***) malloc(_len_rsclp__i0__tails0*sizeof(int **));
          for(int _j0 = 0; _j0 < _len_rsclp__i0__tails0; _j0++) {
            int _len_rsclp__i0__tails1 = 1;
            rsclp[_i0].tails[_j0] = (int **) malloc(_len_rsclp__i0__tails1*sizeof(int *));
            for(int _j1 = 0; _j1 < _len_rsclp__i0__tails1; _j1++) {
              int _len_rsclp__i0__tails2 = 1;
              rsclp[_i0].tails[_j0][_j1] = (int *) malloc(_len_rsclp__i0__tails2*sizeof(int));
              for(int _j2 = 0; _j2 < _len_rsclp__i0__tails2; _j2++) {
                rsclp[_i0].tails[_j0][_j1][_j2] = ((-2 * (next_i()%2)) + 1) * next_i();
              }
            }
          }
          int _len_rsclp__i0__head0 = 1;
          rsclp[_i0].head = (int *) malloc(_len_rsclp__i0__head0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_rsclp__i0__head0; _j0++) {
            rsclp[_i0].head[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_rclp0 = 100;
          struct rcu_cblist * rclp = (struct rcu_cblist *) malloc(_len_rclp0*sizeof(struct rcu_cblist));
          for(int _i0 = 0; _i0 < _len_rclp0; _i0++) {
              int _len_rclp__i0__head0 = 1;
          rclp[_i0].head = (int *) malloc(_len_rclp__i0__head0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_rclp__i0__head0; _j0++) {
            rclp[_i0].head[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_rclp__i0__tail0 = 1;
          rclp[_i0].tail = (int **) malloc(_len_rclp__i0__tail0*sizeof(int *));
          for(int _j0 = 0; _j0 < _len_rclp__i0__tail0; _j0++) {
            int _len_rclp__i0__tail1 = 1;
            rclp[_i0].tail[_j0] = (int *) malloc(_len_rclp__i0__tail1*sizeof(int));
            for(int _j1 = 0; _j1 < _len_rclp__i0__tail1; _j1++) {
              rclp[_i0].tail[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          rcu_segcblist_insert_done_cbs(rsclp,rclp);
          for(int _aux = 0; _aux < _len_rsclp0; _aux++) {
          }
          for(int _aux = 0; _aux < _len_rsclp0; _aux++) {
          free(rsclp[_aux].head);
          }
          free(rsclp);
          for(int _aux = 0; _aux < _len_rclp0; _aux++) {
          free(rclp[_aux].head);
          }
          for(int _aux = 0; _aux < _len_rclp0; _aux++) {
          free(*(rclp[_aux].tail));
        free(rclp[_aux].tail);
          }
          free(rclp);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
