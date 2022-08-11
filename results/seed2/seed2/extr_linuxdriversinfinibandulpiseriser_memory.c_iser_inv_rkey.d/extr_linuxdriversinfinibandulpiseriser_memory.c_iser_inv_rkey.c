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
struct TYPE_2__ {int /*<<< orphan*/  invalidate_rkey; } ;
struct ib_send_wr {scalar_t__ num_sge; scalar_t__ send_flags; TYPE_1__ ex; struct ib_cqe* wr_cqe; int /*<<< orphan*/  opcode; } ;
struct ib_mr {int /*<<< orphan*/  rkey; } ;
struct ib_cqe {int dummy; } ;

/* Variables and functions */
 int /*<<< orphan*/  IB_WR_LOCAL_INV ; 

__attribute__((used)) static inline void
iser_inv_rkey(struct ib_send_wr *inv_wr,
	      struct ib_mr *mr,
	      struct ib_cqe *cqe)
{
	inv_wr->opcode = IB_WR_LOCAL_INV;
	inv_wr->wr_cqe = cqe;
	inv_wr->ex.invalidate_rkey = mr->rkey;
	inv_wr->send_flags = 0;
	inv_wr->num_sge = 0;
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
          int _len_inv_wr0 = 1;
          struct ib_send_wr * inv_wr = (struct ib_send_wr *) malloc(_len_inv_wr0*sizeof(struct ib_send_wr));
          for(int _i0 = 0; _i0 < _len_inv_wr0; _i0++) {
            inv_wr[_i0].num_sge = ((-2 * (next_i()%2)) + 1) * next_i();
        inv_wr[_i0].send_flags = ((-2 * (next_i()%2)) + 1) * next_i();
        inv_wr[_i0].ex.invalidate_rkey = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_inv_wr__i0__wr_cqe0 = 1;
          inv_wr[_i0].wr_cqe = (struct ib_cqe *) malloc(_len_inv_wr__i0__wr_cqe0*sizeof(struct ib_cqe));
          for(int _j0 = 0; _j0 < _len_inv_wr__i0__wr_cqe0; _j0++) {
            inv_wr[_i0].wr_cqe->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        inv_wr[_i0].opcode = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_mr0 = 1;
          struct ib_mr * mr = (struct ib_mr *) malloc(_len_mr0*sizeof(struct ib_mr));
          for(int _i0 = 0; _i0 < _len_mr0; _i0++) {
            mr[_i0].rkey = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_cqe0 = 1;
          struct ib_cqe * cqe = (struct ib_cqe *) malloc(_len_cqe0*sizeof(struct ib_cqe));
          for(int _i0 = 0; _i0 < _len_cqe0; _i0++) {
            cqe[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          iser_inv_rkey(inv_wr,mr,cqe);
          for(int _aux = 0; _aux < _len_inv_wr0; _aux++) {
          free(inv_wr[_aux].wr_cqe);
          }
          free(inv_wr);
          free(mr);
          free(cqe);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_inv_wr0 = 65025;
          struct ib_send_wr * inv_wr = (struct ib_send_wr *) malloc(_len_inv_wr0*sizeof(struct ib_send_wr));
          for(int _i0 = 0; _i0 < _len_inv_wr0; _i0++) {
            inv_wr[_i0].num_sge = ((-2 * (next_i()%2)) + 1) * next_i();
        inv_wr[_i0].send_flags = ((-2 * (next_i()%2)) + 1) * next_i();
        inv_wr[_i0].ex.invalidate_rkey = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_inv_wr__i0__wr_cqe0 = 1;
          inv_wr[_i0].wr_cqe = (struct ib_cqe *) malloc(_len_inv_wr__i0__wr_cqe0*sizeof(struct ib_cqe));
          for(int _j0 = 0; _j0 < _len_inv_wr__i0__wr_cqe0; _j0++) {
            inv_wr[_i0].wr_cqe->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        inv_wr[_i0].opcode = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_mr0 = 65025;
          struct ib_mr * mr = (struct ib_mr *) malloc(_len_mr0*sizeof(struct ib_mr));
          for(int _i0 = 0; _i0 < _len_mr0; _i0++) {
            mr[_i0].rkey = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_cqe0 = 65025;
          struct ib_cqe * cqe = (struct ib_cqe *) malloc(_len_cqe0*sizeof(struct ib_cqe));
          for(int _i0 = 0; _i0 < _len_cqe0; _i0++) {
            cqe[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          iser_inv_rkey(inv_wr,mr,cqe);
          for(int _aux = 0; _aux < _len_inv_wr0; _aux++) {
          free(inv_wr[_aux].wr_cqe);
          }
          free(inv_wr);
          free(mr);
          free(cqe);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_inv_wr0 = 100;
          struct ib_send_wr * inv_wr = (struct ib_send_wr *) malloc(_len_inv_wr0*sizeof(struct ib_send_wr));
          for(int _i0 = 0; _i0 < _len_inv_wr0; _i0++) {
            inv_wr[_i0].num_sge = ((-2 * (next_i()%2)) + 1) * next_i();
        inv_wr[_i0].send_flags = ((-2 * (next_i()%2)) + 1) * next_i();
        inv_wr[_i0].ex.invalidate_rkey = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_inv_wr__i0__wr_cqe0 = 1;
          inv_wr[_i0].wr_cqe = (struct ib_cqe *) malloc(_len_inv_wr__i0__wr_cqe0*sizeof(struct ib_cqe));
          for(int _j0 = 0; _j0 < _len_inv_wr__i0__wr_cqe0; _j0++) {
            inv_wr[_i0].wr_cqe->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        inv_wr[_i0].opcode = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_mr0 = 100;
          struct ib_mr * mr = (struct ib_mr *) malloc(_len_mr0*sizeof(struct ib_mr));
          for(int _i0 = 0; _i0 < _len_mr0; _i0++) {
            mr[_i0].rkey = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_cqe0 = 100;
          struct ib_cqe * cqe = (struct ib_cqe *) malloc(_len_cqe0*sizeof(struct ib_cqe));
          for(int _i0 = 0; _i0 < _len_cqe0; _i0++) {
            cqe[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          iser_inv_rkey(inv_wr,mr,cqe);
          for(int _aux = 0; _aux < _len_inv_wr0; _aux++) {
          free(inv_wr[_aux].wr_cqe);
          }
          free(inv_wr);
          free(mr);
          free(cqe);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
