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
typedef  size_t u16 ;
struct qed_vf_queue_cid {int b_is_tx; int /*<<< orphan*/  p_cid; } ;
struct qed_vf_info {TYPE_1__* vf_queues; } ;
struct qed_hwfn {int dummy; } ;
typedef  enum qed_iov_validate_q_mode { ____Placeholder_qed_iov_validate_q_mode } qed_iov_validate_q_mode ;
struct TYPE_2__ {struct qed_vf_queue_cid* cids; } ;

/* Variables and functions */
 int MAX_QUEUES_PER_QZONE ; 
 int QED_IOV_VALIDATE_Q_DISABLE ; 
 int QED_IOV_VALIDATE_Q_ENABLE ; 
 int QED_IOV_VALIDATE_Q_NA ; 

__attribute__((used)) static bool qed_iov_validate_queue_mode(struct qed_hwfn *p_hwfn,
					struct qed_vf_info *p_vf,
					u16 qid,
					enum qed_iov_validate_q_mode mode,
					bool b_is_tx)
{
	int i;

	if (mode == QED_IOV_VALIDATE_Q_NA)
		return true;

	for (i = 0; i < MAX_QUEUES_PER_QZONE; i++) {
		struct qed_vf_queue_cid *p_qcid;

		p_qcid = &p_vf->vf_queues[qid].cids[i];

		if (!p_qcid->p_cid)
			continue;

		if (p_qcid->b_is_tx != b_is_tx)
			continue;

		return mode == QED_IOV_VALIDATE_Q_ENABLE;
	}

	/* In case we haven't found any valid cid, then its disabled */
	return mode == QED_IOV_VALIDATE_Q_DISABLE;
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
          unsigned long qid = 100;
          enum qed_iov_validate_q_mode mode = 0;
          int b_is_tx = 100;
          int _len_p_hwfn0 = 1;
          struct qed_hwfn * p_hwfn = (struct qed_hwfn *) malloc(_len_p_hwfn0*sizeof(struct qed_hwfn));
          for(int _i0 = 0; _i0 < _len_p_hwfn0; _i0++) {
            p_hwfn[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_p_vf0 = 1;
          struct qed_vf_info * p_vf = (struct qed_vf_info *) malloc(_len_p_vf0*sizeof(struct qed_vf_info));
          for(int _i0 = 0; _i0 < _len_p_vf0; _i0++) {
              int _len_p_vf__i0__vf_queues0 = 1;
          p_vf[_i0].vf_queues = (struct TYPE_2__ *) malloc(_len_p_vf__i0__vf_queues0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_p_vf__i0__vf_queues0; _j0++) {
              int _len_p_vf__i0__vf_queues_cids0 = 1;
          p_vf[_i0].vf_queues->cids = (struct qed_vf_queue_cid *) malloc(_len_p_vf__i0__vf_queues_cids0*sizeof(struct qed_vf_queue_cid));
          for(int _j0 = 0; _j0 < _len_p_vf__i0__vf_queues_cids0; _j0++) {
            p_vf[_i0].vf_queues->cids->b_is_tx = ((-2 * (next_i()%2)) + 1) * next_i();
        p_vf[_i0].vf_queues->cids->p_cid = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int benchRet = qed_iov_validate_queue_mode(p_hwfn,p_vf,qid,mode,b_is_tx);
          printf("%d\n", benchRet); 
          free(p_hwfn);
          for(int _aux = 0; _aux < _len_p_vf0; _aux++) {
          free(p_vf[_aux].vf_queues);
          }
          free(p_vf);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned long qid = 255;
          enum qed_iov_validate_q_mode mode = 0;
          int b_is_tx = 255;
          int _len_p_hwfn0 = 65025;
          struct qed_hwfn * p_hwfn = (struct qed_hwfn *) malloc(_len_p_hwfn0*sizeof(struct qed_hwfn));
          for(int _i0 = 0; _i0 < _len_p_hwfn0; _i0++) {
            p_hwfn[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_p_vf0 = 65025;
          struct qed_vf_info * p_vf = (struct qed_vf_info *) malloc(_len_p_vf0*sizeof(struct qed_vf_info));
          for(int _i0 = 0; _i0 < _len_p_vf0; _i0++) {
              int _len_p_vf__i0__vf_queues0 = 1;
          p_vf[_i0].vf_queues = (struct TYPE_2__ *) malloc(_len_p_vf__i0__vf_queues0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_p_vf__i0__vf_queues0; _j0++) {
              int _len_p_vf__i0__vf_queues_cids0 = 1;
          p_vf[_i0].vf_queues->cids = (struct qed_vf_queue_cid *) malloc(_len_p_vf__i0__vf_queues_cids0*sizeof(struct qed_vf_queue_cid));
          for(int _j0 = 0; _j0 < _len_p_vf__i0__vf_queues_cids0; _j0++) {
            p_vf[_i0].vf_queues->cids->b_is_tx = ((-2 * (next_i()%2)) + 1) * next_i();
        p_vf[_i0].vf_queues->cids->p_cid = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int benchRet = qed_iov_validate_queue_mode(p_hwfn,p_vf,qid,mode,b_is_tx);
          printf("%d\n", benchRet); 
          free(p_hwfn);
          for(int _aux = 0; _aux < _len_p_vf0; _aux++) {
          free(p_vf[_aux].vf_queues);
          }
          free(p_vf);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned long qid = 10;
          enum qed_iov_validate_q_mode mode = 0;
          int b_is_tx = 10;
          int _len_p_hwfn0 = 100;
          struct qed_hwfn * p_hwfn = (struct qed_hwfn *) malloc(_len_p_hwfn0*sizeof(struct qed_hwfn));
          for(int _i0 = 0; _i0 < _len_p_hwfn0; _i0++) {
            p_hwfn[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_p_vf0 = 100;
          struct qed_vf_info * p_vf = (struct qed_vf_info *) malloc(_len_p_vf0*sizeof(struct qed_vf_info));
          for(int _i0 = 0; _i0 < _len_p_vf0; _i0++) {
              int _len_p_vf__i0__vf_queues0 = 1;
          p_vf[_i0].vf_queues = (struct TYPE_2__ *) malloc(_len_p_vf__i0__vf_queues0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_p_vf__i0__vf_queues0; _j0++) {
              int _len_p_vf__i0__vf_queues_cids0 = 1;
          p_vf[_i0].vf_queues->cids = (struct qed_vf_queue_cid *) malloc(_len_p_vf__i0__vf_queues_cids0*sizeof(struct qed_vf_queue_cid));
          for(int _j0 = 0; _j0 < _len_p_vf__i0__vf_queues_cids0; _j0++) {
            p_vf[_i0].vf_queues->cids->b_is_tx = ((-2 * (next_i()%2)) + 1) * next_i();
        p_vf[_i0].vf_queues->cids->p_cid = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int benchRet = qed_iov_validate_queue_mode(p_hwfn,p_vf,qid,mode,b_is_tx);
          printf("%d\n", benchRet); 
          free(p_hwfn);
          for(int _aux = 0; _aux < _len_p_vf0; _aux++) {
          free(p_vf[_aux].vf_queues);
          }
          free(p_vf);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
