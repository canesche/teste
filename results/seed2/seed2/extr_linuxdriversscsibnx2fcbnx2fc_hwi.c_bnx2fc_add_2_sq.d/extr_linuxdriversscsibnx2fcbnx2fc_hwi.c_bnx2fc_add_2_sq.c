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
typedef  int u16 ;
struct fcoe_sqe {int wqe; } ;
struct bnx2fc_rport {size_t sq_prod_idx; int sq_curr_toggle_bit; struct fcoe_sqe* sq; } ;

/* Variables and functions */
 size_t BNX2FC_SQ_WQES_MAX ; 
 int FCOE_SQE_TASK_ID_SHIFT ; 
 int FCOE_SQE_TOGGLE_BIT_SHIFT ; 

void bnx2fc_add_2_sq(struct bnx2fc_rport *tgt, u16 xid)
{
	struct fcoe_sqe *sqe;

	sqe = &tgt->sq[tgt->sq_prod_idx];

	/* Fill SQ WQE */
	sqe->wqe = xid << FCOE_SQE_TASK_ID_SHIFT;
	sqe->wqe |= tgt->sq_curr_toggle_bit << FCOE_SQE_TOGGLE_BIT_SHIFT;

	/* Advance SQ Prod Idx */
	if (++tgt->sq_prod_idx == BNX2FC_SQ_WQES_MAX) {
		tgt->sq_prod_idx = 0;
		tgt->sq_curr_toggle_bit = 1 - tgt->sq_curr_toggle_bit;
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
          int xid = 100;
          int _len_tgt0 = 1;
          struct bnx2fc_rport * tgt = (struct bnx2fc_rport *) malloc(_len_tgt0*sizeof(struct bnx2fc_rport));
          for(int _i0 = 0; _i0 < _len_tgt0; _i0++) {
            tgt[_i0].sq_prod_idx = ((-2 * (next_i()%2)) + 1) * next_i();
        tgt[_i0].sq_curr_toggle_bit = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_tgt__i0__sq0 = 1;
          tgt[_i0].sq = (struct fcoe_sqe *) malloc(_len_tgt__i0__sq0*sizeof(struct fcoe_sqe));
          for(int _j0 = 0; _j0 < _len_tgt__i0__sq0; _j0++) {
            tgt[_i0].sq->wqe = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          bnx2fc_add_2_sq(tgt,xid);
          for(int _aux = 0; _aux < _len_tgt0; _aux++) {
          free(tgt[_aux].sq);
          }
          free(tgt);
        
        break;
    }
    // big-arr
    case 1:
    {
          int xid = 255;
          int _len_tgt0 = 65025;
          struct bnx2fc_rport * tgt = (struct bnx2fc_rport *) malloc(_len_tgt0*sizeof(struct bnx2fc_rport));
          for(int _i0 = 0; _i0 < _len_tgt0; _i0++) {
            tgt[_i0].sq_prod_idx = ((-2 * (next_i()%2)) + 1) * next_i();
        tgt[_i0].sq_curr_toggle_bit = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_tgt__i0__sq0 = 1;
          tgt[_i0].sq = (struct fcoe_sqe *) malloc(_len_tgt__i0__sq0*sizeof(struct fcoe_sqe));
          for(int _j0 = 0; _j0 < _len_tgt__i0__sq0; _j0++) {
            tgt[_i0].sq->wqe = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          bnx2fc_add_2_sq(tgt,xid);
          for(int _aux = 0; _aux < _len_tgt0; _aux++) {
          free(tgt[_aux].sq);
          }
          free(tgt);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int xid = 10;
          int _len_tgt0 = 100;
          struct bnx2fc_rport * tgt = (struct bnx2fc_rport *) malloc(_len_tgt0*sizeof(struct bnx2fc_rport));
          for(int _i0 = 0; _i0 < _len_tgt0; _i0++) {
            tgt[_i0].sq_prod_idx = ((-2 * (next_i()%2)) + 1) * next_i();
        tgt[_i0].sq_curr_toggle_bit = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_tgt__i0__sq0 = 1;
          tgt[_i0].sq = (struct fcoe_sqe *) malloc(_len_tgt__i0__sq0*sizeof(struct fcoe_sqe));
          for(int _j0 = 0; _j0 < _len_tgt__i0__sq0; _j0++) {
            tgt[_i0].sq->wqe = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          bnx2fc_add_2_sq(tgt,xid);
          for(int _aux = 0; _aux < _len_tgt0; _aux++) {
          free(tgt[_aux].sq);
          }
          free(tgt);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
