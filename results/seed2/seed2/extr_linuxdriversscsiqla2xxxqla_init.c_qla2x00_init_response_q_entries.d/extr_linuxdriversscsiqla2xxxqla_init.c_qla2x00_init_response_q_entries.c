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
typedef  struct TYPE_2__   TYPE_1__ ;

/* Type definitions */
typedef  scalar_t__ uint16_t ;
struct rsp_que {scalar_t__ length; TYPE_1__* ring_ptr; int /*<<< orphan*/ * status_srb; scalar_t__ ring_index; TYPE_1__* ring; } ;
struct TYPE_2__ {int /*<<< orphan*/  signature; } ;
typedef  TYPE_1__ response_t ;

/* Variables and functions */
 int /*<<< orphan*/  RESPONSE_PROCESSED ; 

void
qla2x00_init_response_q_entries(struct rsp_que *rsp)
{
	uint16_t cnt;
	response_t *pkt;

	rsp->ring_ptr = rsp->ring;
	rsp->ring_index    = 0;
	rsp->status_srb = NULL;
	pkt = rsp->ring_ptr;
	for (cnt = 0; cnt < rsp->length; cnt++) {
		pkt->signature = RESPONSE_PROCESSED;
		pkt++;
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
          int _len_rsp0 = 1;
          struct rsp_que * rsp = (struct rsp_que *) malloc(_len_rsp0*sizeof(struct rsp_que));
          for(int _i0 = 0; _i0 < _len_rsp0; _i0++) {
            rsp[_i0].length = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_rsp__i0__ring_ptr0 = 1;
          rsp[_i0].ring_ptr = (struct TYPE_2__ *) malloc(_len_rsp__i0__ring_ptr0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_rsp__i0__ring_ptr0; _j0++) {
            rsp[_i0].ring_ptr->signature = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_rsp__i0__status_srb0 = 1;
          rsp[_i0].status_srb = (int *) malloc(_len_rsp__i0__status_srb0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_rsp__i0__status_srb0; _j0++) {
            rsp[_i0].status_srb[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        rsp[_i0].ring_index = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_rsp__i0__ring0 = 1;
          rsp[_i0].ring = (struct TYPE_2__ *) malloc(_len_rsp__i0__ring0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_rsp__i0__ring0; _j0++) {
            rsp[_i0].ring->signature = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          qla2x00_init_response_q_entries(rsp);
          for(int _aux = 0; _aux < _len_rsp0; _aux++) {
          free(rsp[_aux].ring_ptr);
          }
          for(int _aux = 0; _aux < _len_rsp0; _aux++) {
          free(rsp[_aux].status_srb);
          }
          for(int _aux = 0; _aux < _len_rsp0; _aux++) {
          free(rsp[_aux].ring);
          }
          free(rsp);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_rsp0 = 65025;
          struct rsp_que * rsp = (struct rsp_que *) malloc(_len_rsp0*sizeof(struct rsp_que));
          for(int _i0 = 0; _i0 < _len_rsp0; _i0++) {
            rsp[_i0].length = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_rsp__i0__ring_ptr0 = 1;
          rsp[_i0].ring_ptr = (struct TYPE_2__ *) malloc(_len_rsp__i0__ring_ptr0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_rsp__i0__ring_ptr0; _j0++) {
            rsp[_i0].ring_ptr->signature = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_rsp__i0__status_srb0 = 1;
          rsp[_i0].status_srb = (int *) malloc(_len_rsp__i0__status_srb0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_rsp__i0__status_srb0; _j0++) {
            rsp[_i0].status_srb[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        rsp[_i0].ring_index = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_rsp__i0__ring0 = 1;
          rsp[_i0].ring = (struct TYPE_2__ *) malloc(_len_rsp__i0__ring0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_rsp__i0__ring0; _j0++) {
            rsp[_i0].ring->signature = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          qla2x00_init_response_q_entries(rsp);
          for(int _aux = 0; _aux < _len_rsp0; _aux++) {
          free(rsp[_aux].ring_ptr);
          }
          for(int _aux = 0; _aux < _len_rsp0; _aux++) {
          free(rsp[_aux].status_srb);
          }
          for(int _aux = 0; _aux < _len_rsp0; _aux++) {
          free(rsp[_aux].ring);
          }
          free(rsp);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_rsp0 = 100;
          struct rsp_que * rsp = (struct rsp_que *) malloc(_len_rsp0*sizeof(struct rsp_que));
          for(int _i0 = 0; _i0 < _len_rsp0; _i0++) {
            rsp[_i0].length = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_rsp__i0__ring_ptr0 = 1;
          rsp[_i0].ring_ptr = (struct TYPE_2__ *) malloc(_len_rsp__i0__ring_ptr0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_rsp__i0__ring_ptr0; _j0++) {
            rsp[_i0].ring_ptr->signature = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_rsp__i0__status_srb0 = 1;
          rsp[_i0].status_srb = (int *) malloc(_len_rsp__i0__status_srb0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_rsp__i0__status_srb0; _j0++) {
            rsp[_i0].status_srb[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        rsp[_i0].ring_index = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_rsp__i0__ring0 = 1;
          rsp[_i0].ring = (struct TYPE_2__ *) malloc(_len_rsp__i0__ring0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_rsp__i0__ring0; _j0++) {
            rsp[_i0].ring->signature = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          qla2x00_init_response_q_entries(rsp);
          for(int _aux = 0; _aux < _len_rsp0; _aux++) {
          free(rsp[_aux].ring_ptr);
          }
          for(int _aux = 0; _aux < _len_rsp0; _aux++) {
          free(rsp[_aux].status_srb);
          }
          for(int _aux = 0; _aux < _len_rsp0; _aux++) {
          free(rsp[_aux].ring);
          }
          free(rsp);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
