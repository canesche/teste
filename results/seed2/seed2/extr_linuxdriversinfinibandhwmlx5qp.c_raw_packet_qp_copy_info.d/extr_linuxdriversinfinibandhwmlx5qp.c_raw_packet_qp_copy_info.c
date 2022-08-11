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
struct mlx5_ib_sq {int /*<<< orphan*/ * doorbell; int /*<<< orphan*/ * sq; } ;
struct mlx5_ib_rq {int /*<<< orphan*/ * doorbell; int /*<<< orphan*/ * rq; } ;
struct mlx5_ib_raw_packet_qp {struct mlx5_ib_rq rq; struct mlx5_ib_sq sq; } ;
struct mlx5_ib_qp {int /*<<< orphan*/  db; int /*<<< orphan*/  rq; int /*<<< orphan*/  sq; } ;

/* Variables and functions */

__attribute__((used)) static void raw_packet_qp_copy_info(struct mlx5_ib_qp *qp,
				    struct mlx5_ib_raw_packet_qp *raw_packet_qp)
{
	struct mlx5_ib_sq *sq = &raw_packet_qp->sq;
	struct mlx5_ib_rq *rq = &raw_packet_qp->rq;

	sq->sq = &qp->sq;
	rq->rq = &qp->rq;
	sq->doorbell = &qp->db;
	rq->doorbell = &qp->db;
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
          int _len_qp0 = 1;
          struct mlx5_ib_qp * qp = (struct mlx5_ib_qp *) malloc(_len_qp0*sizeof(struct mlx5_ib_qp));
          for(int _i0 = 0; _i0 < _len_qp0; _i0++) {
            qp[_i0].db = ((-2 * (next_i()%2)) + 1) * next_i();
        qp[_i0].rq = ((-2 * (next_i()%2)) + 1) * next_i();
        qp[_i0].sq = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_raw_packet_qp0 = 1;
          struct mlx5_ib_raw_packet_qp * raw_packet_qp = (struct mlx5_ib_raw_packet_qp *) malloc(_len_raw_packet_qp0*sizeof(struct mlx5_ib_raw_packet_qp));
          for(int _i0 = 0; _i0 < _len_raw_packet_qp0; _i0++) {
              int _len_raw_packet_qp__i0__rq_doorbell0 = 1;
          raw_packet_qp[_i0].rq.doorbell = (int *) malloc(_len_raw_packet_qp__i0__rq_doorbell0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_raw_packet_qp__i0__rq_doorbell0; _j0++) {
            raw_packet_qp[_i0].rq.doorbell[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_raw_packet_qp__i0__rq_rq0 = 1;
          raw_packet_qp[_i0].rq.rq = (int *) malloc(_len_raw_packet_qp__i0__rq_rq0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_raw_packet_qp__i0__rq_rq0; _j0++) {
            raw_packet_qp[_i0].rq.rq[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_raw_packet_qp__i0__sq_doorbell0 = 1;
          raw_packet_qp[_i0].sq.doorbell = (int *) malloc(_len_raw_packet_qp__i0__sq_doorbell0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_raw_packet_qp__i0__sq_doorbell0; _j0++) {
            raw_packet_qp[_i0].sq.doorbell[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_raw_packet_qp__i0__sq_sq0 = 1;
          raw_packet_qp[_i0].sq.sq = (int *) malloc(_len_raw_packet_qp__i0__sq_sq0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_raw_packet_qp__i0__sq_sq0; _j0++) {
            raw_packet_qp[_i0].sq.sq[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          raw_packet_qp_copy_info(qp,raw_packet_qp);
          free(qp);
          free(raw_packet_qp);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_qp0 = 65025;
          struct mlx5_ib_qp * qp = (struct mlx5_ib_qp *) malloc(_len_qp0*sizeof(struct mlx5_ib_qp));
          for(int _i0 = 0; _i0 < _len_qp0; _i0++) {
            qp[_i0].db = ((-2 * (next_i()%2)) + 1) * next_i();
        qp[_i0].rq = ((-2 * (next_i()%2)) + 1) * next_i();
        qp[_i0].sq = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_raw_packet_qp0 = 65025;
          struct mlx5_ib_raw_packet_qp * raw_packet_qp = (struct mlx5_ib_raw_packet_qp *) malloc(_len_raw_packet_qp0*sizeof(struct mlx5_ib_raw_packet_qp));
          for(int _i0 = 0; _i0 < _len_raw_packet_qp0; _i0++) {
              int _len_raw_packet_qp__i0__rq_doorbell0 = 1;
          raw_packet_qp[_i0].rq.doorbell = (int *) malloc(_len_raw_packet_qp__i0__rq_doorbell0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_raw_packet_qp__i0__rq_doorbell0; _j0++) {
            raw_packet_qp[_i0].rq.doorbell[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_raw_packet_qp__i0__rq_rq0 = 1;
          raw_packet_qp[_i0].rq.rq = (int *) malloc(_len_raw_packet_qp__i0__rq_rq0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_raw_packet_qp__i0__rq_rq0; _j0++) {
            raw_packet_qp[_i0].rq.rq[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_raw_packet_qp__i0__sq_doorbell0 = 1;
          raw_packet_qp[_i0].sq.doorbell = (int *) malloc(_len_raw_packet_qp__i0__sq_doorbell0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_raw_packet_qp__i0__sq_doorbell0; _j0++) {
            raw_packet_qp[_i0].sq.doorbell[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_raw_packet_qp__i0__sq_sq0 = 1;
          raw_packet_qp[_i0].sq.sq = (int *) malloc(_len_raw_packet_qp__i0__sq_sq0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_raw_packet_qp__i0__sq_sq0; _j0++) {
            raw_packet_qp[_i0].sq.sq[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          raw_packet_qp_copy_info(qp,raw_packet_qp);
          free(qp);
          free(raw_packet_qp);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_qp0 = 100;
          struct mlx5_ib_qp * qp = (struct mlx5_ib_qp *) malloc(_len_qp0*sizeof(struct mlx5_ib_qp));
          for(int _i0 = 0; _i0 < _len_qp0; _i0++) {
            qp[_i0].db = ((-2 * (next_i()%2)) + 1) * next_i();
        qp[_i0].rq = ((-2 * (next_i()%2)) + 1) * next_i();
        qp[_i0].sq = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_raw_packet_qp0 = 100;
          struct mlx5_ib_raw_packet_qp * raw_packet_qp = (struct mlx5_ib_raw_packet_qp *) malloc(_len_raw_packet_qp0*sizeof(struct mlx5_ib_raw_packet_qp));
          for(int _i0 = 0; _i0 < _len_raw_packet_qp0; _i0++) {
              int _len_raw_packet_qp__i0__rq_doorbell0 = 1;
          raw_packet_qp[_i0].rq.doorbell = (int *) malloc(_len_raw_packet_qp__i0__rq_doorbell0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_raw_packet_qp__i0__rq_doorbell0; _j0++) {
            raw_packet_qp[_i0].rq.doorbell[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_raw_packet_qp__i0__rq_rq0 = 1;
          raw_packet_qp[_i0].rq.rq = (int *) malloc(_len_raw_packet_qp__i0__rq_rq0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_raw_packet_qp__i0__rq_rq0; _j0++) {
            raw_packet_qp[_i0].rq.rq[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_raw_packet_qp__i0__sq_doorbell0 = 1;
          raw_packet_qp[_i0].sq.doorbell = (int *) malloc(_len_raw_packet_qp__i0__sq_doorbell0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_raw_packet_qp__i0__sq_doorbell0; _j0++) {
            raw_packet_qp[_i0].sq.doorbell[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_raw_packet_qp__i0__sq_sq0 = 1;
          raw_packet_qp[_i0].sq.sq = (int *) malloc(_len_raw_packet_qp__i0__sq_sq0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_raw_packet_qp__i0__sq_sq0; _j0++) {
            raw_packet_qp[_i0].sq.sq[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          raw_packet_qp_copy_info(qp,raw_packet_qp);
          free(qp);
          free(raw_packet_qp);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
