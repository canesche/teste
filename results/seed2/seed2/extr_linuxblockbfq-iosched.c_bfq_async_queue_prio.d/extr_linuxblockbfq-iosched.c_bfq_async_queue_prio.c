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
struct bfq_queue {int dummy; } ;
struct bfq_group {struct bfq_queue* async_idle_bfqq; struct bfq_queue*** async_bfqq; } ;
struct bfq_data {int dummy; } ;

/* Variables and functions */
#define  IOPRIO_CLASS_BE 131 
#define  IOPRIO_CLASS_IDLE 130 
#define  IOPRIO_CLASS_NONE 129 
#define  IOPRIO_CLASS_RT 128 
 int IOPRIO_NORM ; 

__attribute__((used)) static struct bfq_queue **bfq_async_queue_prio(struct bfq_data *bfqd,
					       struct bfq_group *bfqg,
					       int ioprio_class, int ioprio)
{
	switch (ioprio_class) {
	case IOPRIO_CLASS_RT:
		return &bfqg->async_bfqq[0][ioprio];
	case IOPRIO_CLASS_NONE:
		ioprio = IOPRIO_NORM;
		/* fall through */
	case IOPRIO_CLASS_BE:
		return &bfqg->async_bfqq[1][ioprio];
	case IOPRIO_CLASS_IDLE:
		return &bfqg->async_idle_bfqq;
	default:
		return NULL;
	}
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
          int ioprio_class = 100;
          int ioprio = 100;
          int _len_bfqd0 = 1;
          struct bfq_data * bfqd = (struct bfq_data *) malloc(_len_bfqd0*sizeof(struct bfq_data));
          for(int _i0 = 0; _i0 < _len_bfqd0; _i0++) {
            bfqd[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_bfqg0 = 1;
          struct bfq_group * bfqg = (struct bfq_group *) malloc(_len_bfqg0*sizeof(struct bfq_group));
          for(int _i0 = 0; _i0 < _len_bfqg0; _i0++) {
              int _len_bfqg__i0__async_idle_bfqq0 = 1;
          bfqg[_i0].async_idle_bfqq = (struct bfq_queue *) malloc(_len_bfqg__i0__async_idle_bfqq0*sizeof(struct bfq_queue));
          for(int _j0 = 0; _j0 < _len_bfqg__i0__async_idle_bfqq0; _j0++) {
            bfqg[_i0].async_idle_bfqq->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_bfqg__i0__async_bfqq0 = 1;
          bfqg[_i0].async_bfqq = (struct bfq_queue ***) malloc(_len_bfqg__i0__async_bfqq0*sizeof(struct bfq_queue **));
          for(int _j0 = 0; _j0 < _len_bfqg__i0__async_bfqq0; _j0++) {
            int _len_bfqg__i0__async_bfqq1 = 1;
            bfqg[_i0].async_bfqq[_j0] = (struct bfq_queue **) malloc(_len_bfqg__i0__async_bfqq1*sizeof(struct bfq_queue *));
            for(int _j1 = 0; _j1 < _len_bfqg__i0__async_bfqq1; _j1++) {
              int _len_bfqg__i0__async_bfqq2 = 1;
              bfqg[_i0].async_bfqq[_j0][_j1] = (struct bfq_queue *) malloc(_len_bfqg__i0__async_bfqq2*sizeof(struct bfq_queue));
              for(int _j2 = 0; _j2 < _len_bfqg__i0__async_bfqq2; _j2++) {
                bfqg[_i0].async_bfqq[_j0][_j1]->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
              }
            }
          }
          }
          struct bfq_queue ** benchRet = bfq_async_queue_prio(bfqd,bfqg,ioprio_class,ioprio);
          printf("%d\n", (**benchRet).dummy);
          free(bfqd);
          for(int _aux = 0; _aux < _len_bfqg0; _aux++) {
          free(bfqg[_aux].async_idle_bfqq);
          }
          for(int _aux = 0; _aux < _len_bfqg0; _aux++) {
          }
          free(bfqg);
        
        break;
    }
    // big-arr
    case 1:
    {
          int ioprio_class = 255;
          int ioprio = 255;
          int _len_bfqd0 = 65025;
          struct bfq_data * bfqd = (struct bfq_data *) malloc(_len_bfqd0*sizeof(struct bfq_data));
          for(int _i0 = 0; _i0 < _len_bfqd0; _i0++) {
            bfqd[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_bfqg0 = 65025;
          struct bfq_group * bfqg = (struct bfq_group *) malloc(_len_bfqg0*sizeof(struct bfq_group));
          for(int _i0 = 0; _i0 < _len_bfqg0; _i0++) {
              int _len_bfqg__i0__async_idle_bfqq0 = 1;
          bfqg[_i0].async_idle_bfqq = (struct bfq_queue *) malloc(_len_bfqg__i0__async_idle_bfqq0*sizeof(struct bfq_queue));
          for(int _j0 = 0; _j0 < _len_bfqg__i0__async_idle_bfqq0; _j0++) {
            bfqg[_i0].async_idle_bfqq->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_bfqg__i0__async_bfqq0 = 1;
          bfqg[_i0].async_bfqq = (struct bfq_queue ***) malloc(_len_bfqg__i0__async_bfqq0*sizeof(struct bfq_queue **));
          for(int _j0 = 0; _j0 < _len_bfqg__i0__async_bfqq0; _j0++) {
            int _len_bfqg__i0__async_bfqq1 = 1;
            bfqg[_i0].async_bfqq[_j0] = (struct bfq_queue **) malloc(_len_bfqg__i0__async_bfqq1*sizeof(struct bfq_queue *));
            for(int _j1 = 0; _j1 < _len_bfqg__i0__async_bfqq1; _j1++) {
              int _len_bfqg__i0__async_bfqq2 = 1;
              bfqg[_i0].async_bfqq[_j0][_j1] = (struct bfq_queue *) malloc(_len_bfqg__i0__async_bfqq2*sizeof(struct bfq_queue));
              for(int _j2 = 0; _j2 < _len_bfqg__i0__async_bfqq2; _j2++) {
                bfqg[_i0].async_bfqq[_j0][_j1]->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
              }
            }
          }
          }
          struct bfq_queue ** benchRet = bfq_async_queue_prio(bfqd,bfqg,ioprio_class,ioprio);
          printf("%d\n", (**benchRet).dummy);
          free(bfqd);
          for(int _aux = 0; _aux < _len_bfqg0; _aux++) {
          free(bfqg[_aux].async_idle_bfqq);
          }
          for(int _aux = 0; _aux < _len_bfqg0; _aux++) {
          }
          free(bfqg);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int ioprio_class = 10;
          int ioprio = 10;
          int _len_bfqd0 = 100;
          struct bfq_data * bfqd = (struct bfq_data *) malloc(_len_bfqd0*sizeof(struct bfq_data));
          for(int _i0 = 0; _i0 < _len_bfqd0; _i0++) {
            bfqd[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_bfqg0 = 100;
          struct bfq_group * bfqg = (struct bfq_group *) malloc(_len_bfqg0*sizeof(struct bfq_group));
          for(int _i0 = 0; _i0 < _len_bfqg0; _i0++) {
              int _len_bfqg__i0__async_idle_bfqq0 = 1;
          bfqg[_i0].async_idle_bfqq = (struct bfq_queue *) malloc(_len_bfqg__i0__async_idle_bfqq0*sizeof(struct bfq_queue));
          for(int _j0 = 0; _j0 < _len_bfqg__i0__async_idle_bfqq0; _j0++) {
            bfqg[_i0].async_idle_bfqq->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_bfqg__i0__async_bfqq0 = 1;
          bfqg[_i0].async_bfqq = (struct bfq_queue ***) malloc(_len_bfqg__i0__async_bfqq0*sizeof(struct bfq_queue **));
          for(int _j0 = 0; _j0 < _len_bfqg__i0__async_bfqq0; _j0++) {
            int _len_bfqg__i0__async_bfqq1 = 1;
            bfqg[_i0].async_bfqq[_j0] = (struct bfq_queue **) malloc(_len_bfqg__i0__async_bfqq1*sizeof(struct bfq_queue *));
            for(int _j1 = 0; _j1 < _len_bfqg__i0__async_bfqq1; _j1++) {
              int _len_bfqg__i0__async_bfqq2 = 1;
              bfqg[_i0].async_bfqq[_j0][_j1] = (struct bfq_queue *) malloc(_len_bfqg__i0__async_bfqq2*sizeof(struct bfq_queue));
              for(int _j2 = 0; _j2 < _len_bfqg__i0__async_bfqq2; _j2++) {
                bfqg[_i0].async_bfqq[_j0][_j1]->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
              }
            }
          }
          }
          struct bfq_queue ** benchRet = bfq_async_queue_prio(bfqd,bfqg,ioprio_class,ioprio);
          printf("%d\n", (**benchRet).dummy);
          free(bfqd);
          for(int _aux = 0; _aux < _len_bfqg0; _aux++) {
          free(bfqg[_aux].async_idle_bfqq);
          }
          for(int _aux = 0; _aux < _len_bfqg0; _aux++) {
          }
          free(bfqg);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
