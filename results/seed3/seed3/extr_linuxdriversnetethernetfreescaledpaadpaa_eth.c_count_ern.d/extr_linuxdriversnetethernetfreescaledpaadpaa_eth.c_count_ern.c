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
struct TYPE_3__ {int rc; } ;
union qm_mr_entry {TYPE_1__ ern; } ;
struct TYPE_4__ {int /*<<< orphan*/  orp_zero; int /*<<< orphan*/  fq_retired; int /*<<< orphan*/  fq_tdrop; int /*<<< orphan*/  late_window; int /*<<< orphan*/  early_window; int /*<<< orphan*/  err_cond; int /*<<< orphan*/  wred; int /*<<< orphan*/  cg_tdrop; } ;
struct dpaa_percpu_priv {TYPE_2__ ern_cnt; } ;

/* Variables and functions */
#define  QM_MR_RC_CGR_TAILDROP 135 
#define  QM_MR_RC_ERROR 134 
#define  QM_MR_RC_FQ_TAILDROP 133 
 int QM_MR_RC_MASK ; 
#define  QM_MR_RC_ORPWINDOW_EARLY 132 
#define  QM_MR_RC_ORPWINDOW_LATE 131 
#define  QM_MR_RC_ORPWINDOW_RETIRED 130 
#define  QM_MR_RC_ORP_ZERO 129 
#define  QM_MR_RC_WRED 128 

__attribute__((used)) static void count_ern(struct dpaa_percpu_priv *percpu_priv,
		      const union qm_mr_entry *msg)
{
	switch (msg->ern.rc & QM_MR_RC_MASK) {
	case QM_MR_RC_CGR_TAILDROP:
		percpu_priv->ern_cnt.cg_tdrop++;
		break;
	case QM_MR_RC_WRED:
		percpu_priv->ern_cnt.wred++;
		break;
	case QM_MR_RC_ERROR:
		percpu_priv->ern_cnt.err_cond++;
		break;
	case QM_MR_RC_ORPWINDOW_EARLY:
		percpu_priv->ern_cnt.early_window++;
		break;
	case QM_MR_RC_ORPWINDOW_LATE:
		percpu_priv->ern_cnt.late_window++;
		break;
	case QM_MR_RC_FQ_TAILDROP:
		percpu_priv->ern_cnt.fq_tdrop++;
		break;
	case QM_MR_RC_ORPWINDOW_RETIRED:
		percpu_priv->ern_cnt.fq_retired++;
		break;
	case QM_MR_RC_ORP_ZERO:
		percpu_priv->ern_cnt.orp_zero++;
		break;
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
          int _len_percpu_priv0 = 1;
          struct dpaa_percpu_priv * percpu_priv = (struct dpaa_percpu_priv *) malloc(_len_percpu_priv0*sizeof(struct dpaa_percpu_priv));
          for(int _i0 = 0; _i0 < _len_percpu_priv0; _i0++) {
            percpu_priv[_i0].ern_cnt.orp_zero = ((-2 * (next_i()%2)) + 1) * next_i();
        percpu_priv[_i0].ern_cnt.fq_retired = ((-2 * (next_i()%2)) + 1) * next_i();
        percpu_priv[_i0].ern_cnt.fq_tdrop = ((-2 * (next_i()%2)) + 1) * next_i();
        percpu_priv[_i0].ern_cnt.late_window = ((-2 * (next_i()%2)) + 1) * next_i();
        percpu_priv[_i0].ern_cnt.early_window = ((-2 * (next_i()%2)) + 1) * next_i();
        percpu_priv[_i0].ern_cnt.err_cond = ((-2 * (next_i()%2)) + 1) * next_i();
        percpu_priv[_i0].ern_cnt.wred = ((-2 * (next_i()%2)) + 1) * next_i();
        percpu_priv[_i0].ern_cnt.cg_tdrop = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_msg0 = 1;
          const union qm_mr_entry * msg = (const union qm_mr_entry *) malloc(_len_msg0*sizeof(const union qm_mr_entry));
          for(int _i0 = 0; _i0 < _len_msg0; _i0++) {
            msg[_i0] = 0;
          }
          count_ern(percpu_priv,msg);
          free(percpu_priv);
          free(msg);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_percpu_priv0 = 65025;
          struct dpaa_percpu_priv * percpu_priv = (struct dpaa_percpu_priv *) malloc(_len_percpu_priv0*sizeof(struct dpaa_percpu_priv));
          for(int _i0 = 0; _i0 < _len_percpu_priv0; _i0++) {
            percpu_priv[_i0].ern_cnt.orp_zero = ((-2 * (next_i()%2)) + 1) * next_i();
        percpu_priv[_i0].ern_cnt.fq_retired = ((-2 * (next_i()%2)) + 1) * next_i();
        percpu_priv[_i0].ern_cnt.fq_tdrop = ((-2 * (next_i()%2)) + 1) * next_i();
        percpu_priv[_i0].ern_cnt.late_window = ((-2 * (next_i()%2)) + 1) * next_i();
        percpu_priv[_i0].ern_cnt.early_window = ((-2 * (next_i()%2)) + 1) * next_i();
        percpu_priv[_i0].ern_cnt.err_cond = ((-2 * (next_i()%2)) + 1) * next_i();
        percpu_priv[_i0].ern_cnt.wred = ((-2 * (next_i()%2)) + 1) * next_i();
        percpu_priv[_i0].ern_cnt.cg_tdrop = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_msg0 = 65025;
          const union qm_mr_entry * msg = (const union qm_mr_entry *) malloc(_len_msg0*sizeof(const union qm_mr_entry));
          for(int _i0 = 0; _i0 < _len_msg0; _i0++) {
            msg[_i0] = 0;
          }
          count_ern(percpu_priv,msg);
          free(percpu_priv);
          free(msg);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_percpu_priv0 = 100;
          struct dpaa_percpu_priv * percpu_priv = (struct dpaa_percpu_priv *) malloc(_len_percpu_priv0*sizeof(struct dpaa_percpu_priv));
          for(int _i0 = 0; _i0 < _len_percpu_priv0; _i0++) {
            percpu_priv[_i0].ern_cnt.orp_zero = ((-2 * (next_i()%2)) + 1) * next_i();
        percpu_priv[_i0].ern_cnt.fq_retired = ((-2 * (next_i()%2)) + 1) * next_i();
        percpu_priv[_i0].ern_cnt.fq_tdrop = ((-2 * (next_i()%2)) + 1) * next_i();
        percpu_priv[_i0].ern_cnt.late_window = ((-2 * (next_i()%2)) + 1) * next_i();
        percpu_priv[_i0].ern_cnt.early_window = ((-2 * (next_i()%2)) + 1) * next_i();
        percpu_priv[_i0].ern_cnt.err_cond = ((-2 * (next_i()%2)) + 1) * next_i();
        percpu_priv[_i0].ern_cnt.wred = ((-2 * (next_i()%2)) + 1) * next_i();
        percpu_priv[_i0].ern_cnt.cg_tdrop = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_msg0 = 100;
          const union qm_mr_entry * msg = (const union qm_mr_entry *) malloc(_len_msg0*sizeof(const union qm_mr_entry));
          for(int _i0 = 0; _i0 < _len_msg0; _i0++) {
            msg[_i0] = 0;
          }
          count_ern(percpu_priv,msg);
          free(percpu_priv);
          free(msg);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
