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
typedef  struct TYPE_4__   TYPE_1__ ;

/* Type definitions */
struct TYPE_4__ {int /*<<< orphan*/ * ev_first; } ;
typedef  TYPE_1__ queue ;
typedef  int /*<<< orphan*/  event ;

/* Variables and functions */
 TYPE_1__* qs ; 
 int /*<<< orphan*/  queues_cnt ; 

void queue_free (queue *q) {
  queues_cnt--;
  q->ev_first = (event *)qs;
  qs = q;
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
          int _len_q0 = 1;
          struct TYPE_4__ * q = (struct TYPE_4__ *) malloc(_len_q0*sizeof(struct TYPE_4__));
          for(int _i0 = 0; _i0 < _len_q0; _i0++) {
              int _len_q__i0__ev_first0 = 1;
          q[_i0].ev_first = (int *) malloc(_len_q__i0__ev_first0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_q__i0__ev_first0; _j0++) {
            q[_i0].ev_first[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          queue_free(q);
          for(int _aux = 0; _aux < _len_q0; _aux++) {
          free(q[_aux].ev_first);
          }
          free(q);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_q0 = 65025;
          struct TYPE_4__ * q = (struct TYPE_4__ *) malloc(_len_q0*sizeof(struct TYPE_4__));
          for(int _i0 = 0; _i0 < _len_q0; _i0++) {
              int _len_q__i0__ev_first0 = 1;
          q[_i0].ev_first = (int *) malloc(_len_q__i0__ev_first0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_q__i0__ev_first0; _j0++) {
            q[_i0].ev_first[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          queue_free(q);
          for(int _aux = 0; _aux < _len_q0; _aux++) {
          free(q[_aux].ev_first);
          }
          free(q);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_q0 = 100;
          struct TYPE_4__ * q = (struct TYPE_4__ *) malloc(_len_q0*sizeof(struct TYPE_4__));
          for(int _i0 = 0; _i0 < _len_q0; _i0++) {
              int _len_q__i0__ev_first0 = 1;
          q[_i0].ev_first = (int *) malloc(_len_q__i0__ev_first0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_q__i0__ev_first0; _j0++) {
            q[_i0].ev_first[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          queue_free(q);
          for(int _aux = 0; _aux < _len_q0; _aux++) {
          free(q[_aux].ev_first);
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
