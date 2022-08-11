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
typedef  size_t u32 ;
struct qed_tid_seg {scalar_t__ count; } ;
struct qed_hwfn {struct qed_cxt_mngr* p_cxt_mngr; } ;
struct qed_cxt_mngr {TYPE_1__* conn_cfg; } ;
struct TYPE_2__ {struct qed_tid_seg* tid_seg; } ;

/* Variables and functions */
 size_t MAX_CONN_TYPES ; 

__attribute__((used)) static struct qed_tid_seg *qed_cxt_tid_seg_info(struct qed_hwfn *p_hwfn,
						u32 seg)
{
	struct qed_cxt_mngr *p_cfg = p_hwfn->p_cxt_mngr;
	u32 i;

	/* Find the protocol with tid count > 0 for this segment.
	 * Note: there can only be one and this is already validated.
	 */
	for (i = 0; i < MAX_CONN_TYPES; i++)
		if (p_cfg->conn_cfg[i].tid_seg[seg].count)
			return &p_cfg->conn_cfg[i].tid_seg[seg];
	return NULL;
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
          unsigned long seg = 100;
          int _len_p_hwfn0 = 1;
          struct qed_hwfn * p_hwfn = (struct qed_hwfn *) malloc(_len_p_hwfn0*sizeof(struct qed_hwfn));
          for(int _i0 = 0; _i0 < _len_p_hwfn0; _i0++) {
              int _len_p_hwfn__i0__p_cxt_mngr0 = 1;
          p_hwfn[_i0].p_cxt_mngr = (struct qed_cxt_mngr *) malloc(_len_p_hwfn__i0__p_cxt_mngr0*sizeof(struct qed_cxt_mngr));
          for(int _j0 = 0; _j0 < _len_p_hwfn__i0__p_cxt_mngr0; _j0++) {
              int _len_p_hwfn__i0__p_cxt_mngr_conn_cfg0 = 1;
          p_hwfn[_i0].p_cxt_mngr->conn_cfg = (struct TYPE_2__ *) malloc(_len_p_hwfn__i0__p_cxt_mngr_conn_cfg0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_p_hwfn__i0__p_cxt_mngr_conn_cfg0; _j0++) {
              int _len_p_hwfn__i0__p_cxt_mngr_conn_cfg_tid_seg0 = 1;
          p_hwfn[_i0].p_cxt_mngr->conn_cfg->tid_seg = (struct qed_tid_seg *) malloc(_len_p_hwfn__i0__p_cxt_mngr_conn_cfg_tid_seg0*sizeof(struct qed_tid_seg));
          for(int _j0 = 0; _j0 < _len_p_hwfn__i0__p_cxt_mngr_conn_cfg_tid_seg0; _j0++) {
            p_hwfn[_i0].p_cxt_mngr->conn_cfg->tid_seg->count = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          }
          struct qed_tid_seg * benchRet = qed_cxt_tid_seg_info(p_hwfn,seg);
          printf("%ld\n", (*benchRet).count);
          for(int _aux = 0; _aux < _len_p_hwfn0; _aux++) {
          free(p_hwfn[_aux].p_cxt_mngr);
          }
          free(p_hwfn);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned long seg = 255;
          int _len_p_hwfn0 = 65025;
          struct qed_hwfn * p_hwfn = (struct qed_hwfn *) malloc(_len_p_hwfn0*sizeof(struct qed_hwfn));
          for(int _i0 = 0; _i0 < _len_p_hwfn0; _i0++) {
              int _len_p_hwfn__i0__p_cxt_mngr0 = 1;
          p_hwfn[_i0].p_cxt_mngr = (struct qed_cxt_mngr *) malloc(_len_p_hwfn__i0__p_cxt_mngr0*sizeof(struct qed_cxt_mngr));
          for(int _j0 = 0; _j0 < _len_p_hwfn__i0__p_cxt_mngr0; _j0++) {
              int _len_p_hwfn__i0__p_cxt_mngr_conn_cfg0 = 1;
          p_hwfn[_i0].p_cxt_mngr->conn_cfg = (struct TYPE_2__ *) malloc(_len_p_hwfn__i0__p_cxt_mngr_conn_cfg0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_p_hwfn__i0__p_cxt_mngr_conn_cfg0; _j0++) {
              int _len_p_hwfn__i0__p_cxt_mngr_conn_cfg_tid_seg0 = 1;
          p_hwfn[_i0].p_cxt_mngr->conn_cfg->tid_seg = (struct qed_tid_seg *) malloc(_len_p_hwfn__i0__p_cxt_mngr_conn_cfg_tid_seg0*sizeof(struct qed_tid_seg));
          for(int _j0 = 0; _j0 < _len_p_hwfn__i0__p_cxt_mngr_conn_cfg_tid_seg0; _j0++) {
            p_hwfn[_i0].p_cxt_mngr->conn_cfg->tid_seg->count = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          }
          struct qed_tid_seg * benchRet = qed_cxt_tid_seg_info(p_hwfn,seg);
          printf("%ld\n", (*benchRet).count);
          for(int _aux = 0; _aux < _len_p_hwfn0; _aux++) {
          free(p_hwfn[_aux].p_cxt_mngr);
          }
          free(p_hwfn);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned long seg = 10;
          int _len_p_hwfn0 = 100;
          struct qed_hwfn * p_hwfn = (struct qed_hwfn *) malloc(_len_p_hwfn0*sizeof(struct qed_hwfn));
          for(int _i0 = 0; _i0 < _len_p_hwfn0; _i0++) {
              int _len_p_hwfn__i0__p_cxt_mngr0 = 1;
          p_hwfn[_i0].p_cxt_mngr = (struct qed_cxt_mngr *) malloc(_len_p_hwfn__i0__p_cxt_mngr0*sizeof(struct qed_cxt_mngr));
          for(int _j0 = 0; _j0 < _len_p_hwfn__i0__p_cxt_mngr0; _j0++) {
              int _len_p_hwfn__i0__p_cxt_mngr_conn_cfg0 = 1;
          p_hwfn[_i0].p_cxt_mngr->conn_cfg = (struct TYPE_2__ *) malloc(_len_p_hwfn__i0__p_cxt_mngr_conn_cfg0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_p_hwfn__i0__p_cxt_mngr_conn_cfg0; _j0++) {
              int _len_p_hwfn__i0__p_cxt_mngr_conn_cfg_tid_seg0 = 1;
          p_hwfn[_i0].p_cxt_mngr->conn_cfg->tid_seg = (struct qed_tid_seg *) malloc(_len_p_hwfn__i0__p_cxt_mngr_conn_cfg_tid_seg0*sizeof(struct qed_tid_seg));
          for(int _j0 = 0; _j0 < _len_p_hwfn__i0__p_cxt_mngr_conn_cfg_tid_seg0; _j0++) {
            p_hwfn[_i0].p_cxt_mngr->conn_cfg->tid_seg->count = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          }
          struct qed_tid_seg * benchRet = qed_cxt_tid_seg_info(p_hwfn,seg);
          printf("%ld\n", (*benchRet).count);
          for(int _aux = 0; _aux < _len_p_hwfn0; _aux++) {
          free(p_hwfn[_aux].p_cxt_mngr);
          }
          free(p_hwfn);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
