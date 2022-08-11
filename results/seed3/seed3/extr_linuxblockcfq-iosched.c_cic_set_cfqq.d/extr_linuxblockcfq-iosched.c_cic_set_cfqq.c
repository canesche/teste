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
struct cfq_queue {int dummy; } ;
struct cfq_io_cq {struct cfq_queue** cfqq; } ;

/* Variables and functions */

__attribute__((used)) static inline void cic_set_cfqq(struct cfq_io_cq *cic, struct cfq_queue *cfqq,
				bool is_sync)
{
	cic->cfqq[is_sync] = cfqq;
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
          int is_sync = 100;
          int _len_cic0 = 1;
          struct cfq_io_cq * cic = (struct cfq_io_cq *) malloc(_len_cic0*sizeof(struct cfq_io_cq));
          for(int _i0 = 0; _i0 < _len_cic0; _i0++) {
              int _len_cic__i0__cfqq0 = 1;
          cic[_i0].cfqq = (struct cfq_queue **) malloc(_len_cic__i0__cfqq0*sizeof(struct cfq_queue *));
          for(int _j0 = 0; _j0 < _len_cic__i0__cfqq0; _j0++) {
            int _len_cic__i0__cfqq1 = 1;
            cic[_i0].cfqq[_j0] = (struct cfq_queue *) malloc(_len_cic__i0__cfqq1*sizeof(struct cfq_queue));
            for(int _j1 = 0; _j1 < _len_cic__i0__cfqq1; _j1++) {
              cic[_i0].cfqq[_j0]->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          int _len_cfqq0 = 1;
          struct cfq_queue * cfqq = (struct cfq_queue *) malloc(_len_cfqq0*sizeof(struct cfq_queue));
          for(int _i0 = 0; _i0 < _len_cfqq0; _i0++) {
            cfqq[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          cic_set_cfqq(cic,cfqq,is_sync);
          for(int _aux = 0; _aux < _len_cic0; _aux++) {
          free(*(cic[_aux].cfqq));
        free(cic[_aux].cfqq);
          }
          free(cic);
          free(cfqq);
        
        break;
    }
    // big-arr
    case 1:
    {
          int is_sync = 255;
          int _len_cic0 = 65025;
          struct cfq_io_cq * cic = (struct cfq_io_cq *) malloc(_len_cic0*sizeof(struct cfq_io_cq));
          for(int _i0 = 0; _i0 < _len_cic0; _i0++) {
              int _len_cic__i0__cfqq0 = 1;
          cic[_i0].cfqq = (struct cfq_queue **) malloc(_len_cic__i0__cfqq0*sizeof(struct cfq_queue *));
          for(int _j0 = 0; _j0 < _len_cic__i0__cfqq0; _j0++) {
            int _len_cic__i0__cfqq1 = 1;
            cic[_i0].cfqq[_j0] = (struct cfq_queue *) malloc(_len_cic__i0__cfqq1*sizeof(struct cfq_queue));
            for(int _j1 = 0; _j1 < _len_cic__i0__cfqq1; _j1++) {
              cic[_i0].cfqq[_j0]->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          int _len_cfqq0 = 65025;
          struct cfq_queue * cfqq = (struct cfq_queue *) malloc(_len_cfqq0*sizeof(struct cfq_queue));
          for(int _i0 = 0; _i0 < _len_cfqq0; _i0++) {
            cfqq[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          cic_set_cfqq(cic,cfqq,is_sync);
          for(int _aux = 0; _aux < _len_cic0; _aux++) {
          free(*(cic[_aux].cfqq));
        free(cic[_aux].cfqq);
          }
          free(cic);
          free(cfqq);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int is_sync = 10;
          int _len_cic0 = 100;
          struct cfq_io_cq * cic = (struct cfq_io_cq *) malloc(_len_cic0*sizeof(struct cfq_io_cq));
          for(int _i0 = 0; _i0 < _len_cic0; _i0++) {
              int _len_cic__i0__cfqq0 = 1;
          cic[_i0].cfqq = (struct cfq_queue **) malloc(_len_cic__i0__cfqq0*sizeof(struct cfq_queue *));
          for(int _j0 = 0; _j0 < _len_cic__i0__cfqq0; _j0++) {
            int _len_cic__i0__cfqq1 = 1;
            cic[_i0].cfqq[_j0] = (struct cfq_queue *) malloc(_len_cic__i0__cfqq1*sizeof(struct cfq_queue));
            for(int _j1 = 0; _j1 < _len_cic__i0__cfqq1; _j1++) {
              cic[_i0].cfqq[_j0]->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          int _len_cfqq0 = 100;
          struct cfq_queue * cfqq = (struct cfq_queue *) malloc(_len_cfqq0*sizeof(struct cfq_queue));
          for(int _i0 = 0; _i0 < _len_cfqq0; _i0++) {
            cfqq[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          cic_set_cfqq(cic,cfqq,is_sync);
          for(int _aux = 0; _aux < _len_cic0; _aux++) {
          free(*(cic[_aux].cfqq));
        free(cic[_aux].cfqq);
          }
          free(cic);
          free(cfqq);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
