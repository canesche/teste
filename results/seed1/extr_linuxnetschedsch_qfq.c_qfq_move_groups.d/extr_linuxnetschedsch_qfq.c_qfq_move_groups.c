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
struct qfq_sched {unsigned long* bitmaps; } ;

/* Variables and functions */

__attribute__((used)) static inline void qfq_move_groups(struct qfq_sched *q, unsigned long mask,
				   int src, int dst)
{
	q->bitmaps[dst] |= q->bitmaps[src] & mask;
	q->bitmaps[src] &= ~mask;
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
          unsigned long mask = 100;
          int src = 100;
          int dst = 100;
          int _len_q0 = 1;
          struct qfq_sched * q = (struct qfq_sched *) malloc(_len_q0*sizeof(struct qfq_sched));
          for(int _i0 = 0; _i0 < _len_q0; _i0++) {
              int _len_q__i0__bitmaps0 = 1;
          q[_i0].bitmaps = (unsigned long *) malloc(_len_q__i0__bitmaps0*sizeof(unsigned long));
          for(int _j0 = 0; _j0 < _len_q__i0__bitmaps0; _j0++) {
            q[_i0].bitmaps[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          qfq_move_groups(q,mask,src,dst);
          for(int _aux = 0; _aux < _len_q0; _aux++) {
          free(q[_aux].bitmaps);
          }
          free(q);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned long mask = 255;
          int src = 255;
          int dst = 255;
          int _len_q0 = 65025;
          struct qfq_sched * q = (struct qfq_sched *) malloc(_len_q0*sizeof(struct qfq_sched));
          for(int _i0 = 0; _i0 < _len_q0; _i0++) {
              int _len_q__i0__bitmaps0 = 1;
          q[_i0].bitmaps = (unsigned long *) malloc(_len_q__i0__bitmaps0*sizeof(unsigned long));
          for(int _j0 = 0; _j0 < _len_q__i0__bitmaps0; _j0++) {
            q[_i0].bitmaps[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          qfq_move_groups(q,mask,src,dst);
          for(int _aux = 0; _aux < _len_q0; _aux++) {
          free(q[_aux].bitmaps);
          }
          free(q);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned long mask = 10;
          int src = 10;
          int dst = 10;
          int _len_q0 = 100;
          struct qfq_sched * q = (struct qfq_sched *) malloc(_len_q0*sizeof(struct qfq_sched));
          for(int _i0 = 0; _i0 < _len_q0; _i0++) {
              int _len_q__i0__bitmaps0 = 1;
          q[_i0].bitmaps = (unsigned long *) malloc(_len_q__i0__bitmaps0*sizeof(unsigned long));
          for(int _j0 = 0; _j0 < _len_q__i0__bitmaps0; _j0++) {
            q[_i0].bitmaps[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          qfq_move_groups(q,mask,src,dst);
          for(int _aux = 0; _aux < _len_q0; _aux++) {
          free(q[_aux].bitmaps);
          }
          free(q);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
