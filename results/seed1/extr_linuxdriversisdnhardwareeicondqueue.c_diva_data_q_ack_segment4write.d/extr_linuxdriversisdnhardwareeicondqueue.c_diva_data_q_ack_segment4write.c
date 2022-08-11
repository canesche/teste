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
struct TYPE_3__ {int* length; size_t write; size_t segments; scalar_t__ segment_pending; int /*<<< orphan*/  count; } ;
typedef  TYPE_1__ diva_um_idi_data_queue_t ;

/* Variables and functions */

void
diva_data_q_ack_segment4write(diva_um_idi_data_queue_t *q, int length)
{
	if (q->segment_pending) {
		q->length[q->write] = length;
		q->count++;
		q->write++;
		if (q->write >= q->segments) {
			q->write = 0;
		}
		q->segment_pending = 0;
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
          int length = 100;
          int _len_q0 = 1;
          struct TYPE_3__ * q = (struct TYPE_3__ *) malloc(_len_q0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_q0; _i0++) {
              int _len_q__i0__length0 = 1;
          q[_i0].length = (int *) malloc(_len_q__i0__length0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_q__i0__length0; _j0++) {
            q[_i0].length[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        q[_i0].write = ((-2 * (next_i()%2)) + 1) * next_i();
        q[_i0].segments = ((-2 * (next_i()%2)) + 1) * next_i();
        q[_i0].segment_pending = ((-2 * (next_i()%2)) + 1) * next_i();
        q[_i0].count = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          diva_data_q_ack_segment4write(q,length);
          for(int _aux = 0; _aux < _len_q0; _aux++) {
          free(q[_aux].length);
          }
          free(q);
        
        break;
    }
    // big-arr
    case 1:
    {
          int length = 255;
          int _len_q0 = 65025;
          struct TYPE_3__ * q = (struct TYPE_3__ *) malloc(_len_q0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_q0; _i0++) {
              int _len_q__i0__length0 = 1;
          q[_i0].length = (int *) malloc(_len_q__i0__length0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_q__i0__length0; _j0++) {
            q[_i0].length[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        q[_i0].write = ((-2 * (next_i()%2)) + 1) * next_i();
        q[_i0].segments = ((-2 * (next_i()%2)) + 1) * next_i();
        q[_i0].segment_pending = ((-2 * (next_i()%2)) + 1) * next_i();
        q[_i0].count = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          diva_data_q_ack_segment4write(q,length);
          for(int _aux = 0; _aux < _len_q0; _aux++) {
          free(q[_aux].length);
          }
          free(q);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int length = 10;
          int _len_q0 = 100;
          struct TYPE_3__ * q = (struct TYPE_3__ *) malloc(_len_q0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_q0; _i0++) {
              int _len_q__i0__length0 = 1;
          q[_i0].length = (int *) malloc(_len_q__i0__length0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_q__i0__length0; _j0++) {
            q[_i0].length[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        q[_i0].write = ((-2 * (next_i()%2)) + 1) * next_i();
        q[_i0].segments = ((-2 * (next_i()%2)) + 1) * next_i();
        q[_i0].segment_pending = ((-2 * (next_i()%2)) + 1) * next_i();
        q[_i0].count = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          diva_data_q_ack_segment4write(q,length);
          for(int _aux = 0; _aux < _len_q0; _aux++) {
          free(q[_aux].length);
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
