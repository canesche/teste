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
typedef  struct TYPE_4__   TYPE_2__ ;
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
struct qp_broker_entry {TYPE_2__* consume_q; TYPE_1__* produce_q; } ;
struct TYPE_4__ {int /*<<< orphan*/ * saved_header; } ;
struct TYPE_3__ {int /*<<< orphan*/ * saved_header; } ;

/* Variables and functions */

__attribute__((used)) static void qp_reset_saved_headers(struct qp_broker_entry *entry)
{
	entry->produce_q->saved_header = NULL;
	entry->consume_q->saved_header = NULL;
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
          int _len_entry0 = 1;
          struct qp_broker_entry * entry = (struct qp_broker_entry *) malloc(_len_entry0*sizeof(struct qp_broker_entry));
          for(int _i0 = 0; _i0 < _len_entry0; _i0++) {
              int _len_entry__i0__consume_q0 = 1;
          entry[_i0].consume_q = (struct TYPE_4__ *) malloc(_len_entry__i0__consume_q0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_entry__i0__consume_q0; _j0++) {
              int _len_entry__i0__consume_q_saved_header0 = 1;
          entry[_i0].consume_q->saved_header = (int *) malloc(_len_entry__i0__consume_q_saved_header0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_entry__i0__consume_q_saved_header0; _j0++) {
            entry[_i0].consume_q->saved_header[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_entry__i0__produce_q0 = 1;
          entry[_i0].produce_q = (struct TYPE_3__ *) malloc(_len_entry__i0__produce_q0*sizeof(struct TYPE_3__));
          for(int _j0 = 0; _j0 < _len_entry__i0__produce_q0; _j0++) {
              int _len_entry__i0__produce_q_saved_header0 = 1;
          entry[_i0].produce_q->saved_header = (int *) malloc(_len_entry__i0__produce_q_saved_header0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_entry__i0__produce_q_saved_header0; _j0++) {
            entry[_i0].produce_q->saved_header[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          qp_reset_saved_headers(entry);
          for(int _aux = 0; _aux < _len_entry0; _aux++) {
          free(entry[_aux].consume_q);
          }
          for(int _aux = 0; _aux < _len_entry0; _aux++) {
          free(entry[_aux].produce_q);
          }
          free(entry);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_entry0 = 65025;
          struct qp_broker_entry * entry = (struct qp_broker_entry *) malloc(_len_entry0*sizeof(struct qp_broker_entry));
          for(int _i0 = 0; _i0 < _len_entry0; _i0++) {
              int _len_entry__i0__consume_q0 = 1;
          entry[_i0].consume_q = (struct TYPE_4__ *) malloc(_len_entry__i0__consume_q0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_entry__i0__consume_q0; _j0++) {
              int _len_entry__i0__consume_q_saved_header0 = 1;
          entry[_i0].consume_q->saved_header = (int *) malloc(_len_entry__i0__consume_q_saved_header0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_entry__i0__consume_q_saved_header0; _j0++) {
            entry[_i0].consume_q->saved_header[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_entry__i0__produce_q0 = 1;
          entry[_i0].produce_q = (struct TYPE_3__ *) malloc(_len_entry__i0__produce_q0*sizeof(struct TYPE_3__));
          for(int _j0 = 0; _j0 < _len_entry__i0__produce_q0; _j0++) {
              int _len_entry__i0__produce_q_saved_header0 = 1;
          entry[_i0].produce_q->saved_header = (int *) malloc(_len_entry__i0__produce_q_saved_header0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_entry__i0__produce_q_saved_header0; _j0++) {
            entry[_i0].produce_q->saved_header[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          qp_reset_saved_headers(entry);
          for(int _aux = 0; _aux < _len_entry0; _aux++) {
          free(entry[_aux].consume_q);
          }
          for(int _aux = 0; _aux < _len_entry0; _aux++) {
          free(entry[_aux].produce_q);
          }
          free(entry);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_entry0 = 100;
          struct qp_broker_entry * entry = (struct qp_broker_entry *) malloc(_len_entry0*sizeof(struct qp_broker_entry));
          for(int _i0 = 0; _i0 < _len_entry0; _i0++) {
              int _len_entry__i0__consume_q0 = 1;
          entry[_i0].consume_q = (struct TYPE_4__ *) malloc(_len_entry__i0__consume_q0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_entry__i0__consume_q0; _j0++) {
              int _len_entry__i0__consume_q_saved_header0 = 1;
          entry[_i0].consume_q->saved_header = (int *) malloc(_len_entry__i0__consume_q_saved_header0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_entry__i0__consume_q_saved_header0; _j0++) {
            entry[_i0].consume_q->saved_header[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_entry__i0__produce_q0 = 1;
          entry[_i0].produce_q = (struct TYPE_3__ *) malloc(_len_entry__i0__produce_q0*sizeof(struct TYPE_3__));
          for(int _j0 = 0; _j0 < _len_entry__i0__produce_q0; _j0++) {
              int _len_entry__i0__produce_q_saved_header0 = 1;
          entry[_i0].produce_q->saved_header = (int *) malloc(_len_entry__i0__produce_q_saved_header0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_entry__i0__produce_q_saved_header0; _j0++) {
            entry[_i0].produce_q->saved_header[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          qp_reset_saved_headers(entry);
          for(int _aux = 0; _aux < _len_entry0; _aux++) {
          free(entry[_aux].consume_q);
          }
          for(int _aux = 0; _aux < _len_entry0; _aux++) {
          free(entry[_aux].produce_q);
          }
          free(entry);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
