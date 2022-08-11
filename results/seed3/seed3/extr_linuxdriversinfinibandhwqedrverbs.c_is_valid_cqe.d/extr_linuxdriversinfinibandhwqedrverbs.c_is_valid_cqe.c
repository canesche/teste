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
struct rdma_cqe_requester {int flags; } ;
union rdma_cqe {struct rdma_cqe_requester req; } ;
struct qedr_cq {int pbl_toggle; } ;

/* Variables and functions */
 int RDMA_CQE_REQUESTER_TOGGLE_BIT_MASK ; 

__attribute__((used)) static int is_valid_cqe(struct qedr_cq *cq, union rdma_cqe *cqe)
{
	struct rdma_cqe_requester *resp_cqe = &cqe->req;

	return (resp_cqe->flags & RDMA_CQE_REQUESTER_TOGGLE_BIT_MASK) ==
		cq->pbl_toggle;
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
          int _len_cq0 = 1;
          struct qedr_cq * cq = (struct qedr_cq *) malloc(_len_cq0*sizeof(struct qedr_cq));
          for(int _i0 = 0; _i0 < _len_cq0; _i0++) {
            cq[_i0].pbl_toggle = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_cqe0 = 1;
          union rdma_cqe * cqe = (union rdma_cqe *) malloc(_len_cqe0*sizeof(union rdma_cqe));
          for(int _i0 = 0; _i0 < _len_cqe0; _i0++) {
            cqe[_i0] = 0;
          }
          int benchRet = is_valid_cqe(cq,cqe);
          printf("%d\n", benchRet); 
          free(cq);
          free(cqe);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_cq0 = 65025;
          struct qedr_cq * cq = (struct qedr_cq *) malloc(_len_cq0*sizeof(struct qedr_cq));
          for(int _i0 = 0; _i0 < _len_cq0; _i0++) {
            cq[_i0].pbl_toggle = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_cqe0 = 65025;
          union rdma_cqe * cqe = (union rdma_cqe *) malloc(_len_cqe0*sizeof(union rdma_cqe));
          for(int _i0 = 0; _i0 < _len_cqe0; _i0++) {
            cqe[_i0] = 0;
          }
          int benchRet = is_valid_cqe(cq,cqe);
          printf("%d\n", benchRet); 
          free(cq);
          free(cqe);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_cq0 = 100;
          struct qedr_cq * cq = (struct qedr_cq *) malloc(_len_cq0*sizeof(struct qedr_cq));
          for(int _i0 = 0; _i0 < _len_cq0; _i0++) {
            cq[_i0].pbl_toggle = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_cqe0 = 100;
          union rdma_cqe * cqe = (union rdma_cqe *) malloc(_len_cqe0*sizeof(union rdma_cqe));
          for(int _i0 = 0; _i0 < _len_cqe0; _i0++) {
            cqe[_i0] = 0;
          }
          int benchRet = is_valid_cqe(cq,cqe);
          printf("%d\n", benchRet); 
          free(cq);
          free(cqe);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
