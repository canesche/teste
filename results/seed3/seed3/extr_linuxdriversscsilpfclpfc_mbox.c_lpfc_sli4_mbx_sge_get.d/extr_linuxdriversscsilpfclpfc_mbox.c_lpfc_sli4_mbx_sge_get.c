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
typedef  struct TYPE_8__   TYPE_4__ ;
typedef  struct TYPE_7__   TYPE_3__ ;
typedef  struct TYPE_6__   TYPE_2__ ;
typedef  struct TYPE_5__   TYPE_1__ ;

/* Type definitions */
typedef  size_t uint32_t ;
struct lpfc_mbx_sge {int /*<<< orphan*/  length; int /*<<< orphan*/  pa_hi; int /*<<< orphan*/  pa_lo; } ;
struct lpfc_mbx_nembed_cmd {TYPE_4__* sge; } ;
struct TYPE_5__ {int /*<<< orphan*/  nembed_cmd; } ;
struct TYPE_6__ {TYPE_1__ un; } ;
struct TYPE_7__ {TYPE_2__ mqe; } ;
struct lpfcMboxq {TYPE_3__ u; } ;
struct TYPE_8__ {int /*<<< orphan*/  length; int /*<<< orphan*/  pa_hi; int /*<<< orphan*/  pa_lo; } ;

/* Variables and functions */

void
lpfc_sli4_mbx_sge_get(struct lpfcMboxq *mbox, uint32_t sgentry,
		      struct lpfc_mbx_sge *sge)
{
	struct lpfc_mbx_nembed_cmd *nembed_sge;

	nembed_sge = (struct lpfc_mbx_nembed_cmd *)
				&mbox->u.mqe.un.nembed_cmd;
	sge->pa_lo = nembed_sge->sge[sgentry].pa_lo;
	sge->pa_hi = nembed_sge->sge[sgentry].pa_hi;
	sge->length = nembed_sge->sge[sgentry].length;
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
          unsigned long sgentry = 100;
          int _len_mbox0 = 1;
          struct lpfcMboxq * mbox = (struct lpfcMboxq *) malloc(_len_mbox0*sizeof(struct lpfcMboxq));
          for(int _i0 = 0; _i0 < _len_mbox0; _i0++) {
            mbox[_i0].u.mqe.un.nembed_cmd = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_sge0 = 1;
          struct lpfc_mbx_sge * sge = (struct lpfc_mbx_sge *) malloc(_len_sge0*sizeof(struct lpfc_mbx_sge));
          for(int _i0 = 0; _i0 < _len_sge0; _i0++) {
            sge[_i0].length = ((-2 * (next_i()%2)) + 1) * next_i();
        sge[_i0].pa_hi = ((-2 * (next_i()%2)) + 1) * next_i();
        sge[_i0].pa_lo = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          lpfc_sli4_mbx_sge_get(mbox,sgentry,sge);
          free(mbox);
          free(sge);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned long sgentry = 255;
          int _len_mbox0 = 65025;
          struct lpfcMboxq * mbox = (struct lpfcMboxq *) malloc(_len_mbox0*sizeof(struct lpfcMboxq));
          for(int _i0 = 0; _i0 < _len_mbox0; _i0++) {
            mbox[_i0].u.mqe.un.nembed_cmd = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_sge0 = 65025;
          struct lpfc_mbx_sge * sge = (struct lpfc_mbx_sge *) malloc(_len_sge0*sizeof(struct lpfc_mbx_sge));
          for(int _i0 = 0; _i0 < _len_sge0; _i0++) {
            sge[_i0].length = ((-2 * (next_i()%2)) + 1) * next_i();
        sge[_i0].pa_hi = ((-2 * (next_i()%2)) + 1) * next_i();
        sge[_i0].pa_lo = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          lpfc_sli4_mbx_sge_get(mbox,sgentry,sge);
          free(mbox);
          free(sge);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned long sgentry = 10;
          int _len_mbox0 = 100;
          struct lpfcMboxq * mbox = (struct lpfcMboxq *) malloc(_len_mbox0*sizeof(struct lpfcMboxq));
          for(int _i0 = 0; _i0 < _len_mbox0; _i0++) {
            mbox[_i0].u.mqe.un.nembed_cmd = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_sge0 = 100;
          struct lpfc_mbx_sge * sge = (struct lpfc_mbx_sge *) malloc(_len_sge0*sizeof(struct lpfc_mbx_sge));
          for(int _i0 = 0; _i0 < _len_sge0; _i0++) {
            sge[_i0].length = ((-2 * (next_i()%2)) + 1) * next_i();
        sge[_i0].pa_hi = ((-2 * (next_i()%2)) + 1) * next_i();
        sge[_i0].pa_lo = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          lpfc_sli4_mbx_sge_get(mbox,sgentry,sge);
          free(mbox);
          free(sge);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
