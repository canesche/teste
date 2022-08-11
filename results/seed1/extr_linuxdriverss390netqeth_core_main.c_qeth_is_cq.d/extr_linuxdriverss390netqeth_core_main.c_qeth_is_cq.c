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
struct TYPE_4__ {int no_in_queues; int /*<<< orphan*/ * c_q; } ;
struct TYPE_3__ {scalar_t__ cq; } ;
struct qeth_card {TYPE_2__ qdio; TYPE_1__ options; } ;

/* Variables and functions */
 scalar_t__ QETH_CQ_ENABLED ; 

__attribute__((used)) static inline int qeth_is_cq(struct qeth_card *card, unsigned int queue)
{
	return card->options.cq == QETH_CQ_ENABLED &&
	    card->qdio.c_q != NULL &&
	    queue != 0 &&
	    queue == card->qdio.no_in_queues - 1;
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
          unsigned int queue = 100;
          int _len_card0 = 1;
          struct qeth_card * card = (struct qeth_card *) malloc(_len_card0*sizeof(struct qeth_card));
          for(int _i0 = 0; _i0 < _len_card0; _i0++) {
            card[_i0].qdio.no_in_queues = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_card__i0__qdio_c_q0 = 1;
          card[_i0].qdio.c_q = (int *) malloc(_len_card__i0__qdio_c_q0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_card__i0__qdio_c_q0; _j0++) {
            card[_i0].qdio.c_q[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        card[_i0].options.cq = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = qeth_is_cq(card,queue);
          printf("%d\n", benchRet); 
          free(card);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned int queue = 255;
          int _len_card0 = 65025;
          struct qeth_card * card = (struct qeth_card *) malloc(_len_card0*sizeof(struct qeth_card));
          for(int _i0 = 0; _i0 < _len_card0; _i0++) {
            card[_i0].qdio.no_in_queues = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_card__i0__qdio_c_q0 = 1;
          card[_i0].qdio.c_q = (int *) malloc(_len_card__i0__qdio_c_q0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_card__i0__qdio_c_q0; _j0++) {
            card[_i0].qdio.c_q[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        card[_i0].options.cq = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = qeth_is_cq(card,queue);
          printf("%d\n", benchRet); 
          free(card);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned int queue = 10;
          int _len_card0 = 100;
          struct qeth_card * card = (struct qeth_card *) malloc(_len_card0*sizeof(struct qeth_card));
          for(int _i0 = 0; _i0 < _len_card0; _i0++) {
            card[_i0].qdio.no_in_queues = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_card__i0__qdio_c_q0 = 1;
          card[_i0].qdio.c_q = (int *) malloc(_len_card__i0__qdio_c_q0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_card__i0__qdio_c_q0; _j0++) {
            card[_i0].qdio.c_q[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        card[_i0].options.cq = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = qeth_is_cq(card,queue);
          printf("%d\n", benchRet); 
          free(card);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
