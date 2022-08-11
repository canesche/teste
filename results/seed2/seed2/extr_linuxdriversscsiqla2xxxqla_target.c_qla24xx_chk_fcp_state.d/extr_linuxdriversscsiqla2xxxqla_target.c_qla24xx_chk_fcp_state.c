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
typedef  struct TYPE_6__   TYPE_3__ ;
typedef  struct TYPE_5__   TYPE_2__ ;
typedef  struct TYPE_4__   TYPE_1__ ;

/* Type definitions */
struct fc_port {scalar_t__ chip_reset; scalar_t__ scan_state; int /*<<< orphan*/  fw_login_state; scalar_t__ logo_ack_needed; scalar_t__ logout_on_delete; TYPE_3__* vha; } ;
struct TYPE_6__ {TYPE_2__* hw; } ;
struct TYPE_5__ {TYPE_1__* base_qpair; } ;
struct TYPE_4__ {scalar_t__ chip_reset; } ;

/* Variables and functions */
 int /*<<< orphan*/  DSC_LS_PORT_UNAVAIL ; 

__attribute__((used)) static void qla24xx_chk_fcp_state(struct fc_port *sess)
{
	if (sess->chip_reset != sess->vha->hw->base_qpair->chip_reset) {
		sess->logout_on_delete = 0;
		sess->logo_ack_needed = 0;
		sess->fw_login_state = DSC_LS_PORT_UNAVAIL;
		sess->scan_state = 0;
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
          int _len_sess0 = 1;
          struct fc_port * sess = (struct fc_port *) malloc(_len_sess0*sizeof(struct fc_port));
          for(int _i0 = 0; _i0 < _len_sess0; _i0++) {
            sess[_i0].chip_reset = ((-2 * (next_i()%2)) + 1) * next_i();
        sess[_i0].scan_state = ((-2 * (next_i()%2)) + 1) * next_i();
        sess[_i0].fw_login_state = ((-2 * (next_i()%2)) + 1) * next_i();
        sess[_i0].logo_ack_needed = ((-2 * (next_i()%2)) + 1) * next_i();
        sess[_i0].logout_on_delete = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_sess__i0__vha0 = 1;
          sess[_i0].vha = (struct TYPE_6__ *) malloc(_len_sess__i0__vha0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_sess__i0__vha0; _j0++) {
              int _len_sess__i0__vha_hw0 = 1;
          sess[_i0].vha->hw = (struct TYPE_5__ *) malloc(_len_sess__i0__vha_hw0*sizeof(struct TYPE_5__));
          for(int _j0 = 0; _j0 < _len_sess__i0__vha_hw0; _j0++) {
              int _len_sess__i0__vha_hw_base_qpair0 = 1;
          sess[_i0].vha->hw->base_qpair = (struct TYPE_4__ *) malloc(_len_sess__i0__vha_hw_base_qpair0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_sess__i0__vha_hw_base_qpair0; _j0++) {
            sess[_i0].vha->hw->base_qpair->chip_reset = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          }
          qla24xx_chk_fcp_state(sess);
          for(int _aux = 0; _aux < _len_sess0; _aux++) {
          free(sess[_aux].vha);
          }
          free(sess);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_sess0 = 65025;
          struct fc_port * sess = (struct fc_port *) malloc(_len_sess0*sizeof(struct fc_port));
          for(int _i0 = 0; _i0 < _len_sess0; _i0++) {
            sess[_i0].chip_reset = ((-2 * (next_i()%2)) + 1) * next_i();
        sess[_i0].scan_state = ((-2 * (next_i()%2)) + 1) * next_i();
        sess[_i0].fw_login_state = ((-2 * (next_i()%2)) + 1) * next_i();
        sess[_i0].logo_ack_needed = ((-2 * (next_i()%2)) + 1) * next_i();
        sess[_i0].logout_on_delete = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_sess__i0__vha0 = 1;
          sess[_i0].vha = (struct TYPE_6__ *) malloc(_len_sess__i0__vha0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_sess__i0__vha0; _j0++) {
              int _len_sess__i0__vha_hw0 = 1;
          sess[_i0].vha->hw = (struct TYPE_5__ *) malloc(_len_sess__i0__vha_hw0*sizeof(struct TYPE_5__));
          for(int _j0 = 0; _j0 < _len_sess__i0__vha_hw0; _j0++) {
              int _len_sess__i0__vha_hw_base_qpair0 = 1;
          sess[_i0].vha->hw->base_qpair = (struct TYPE_4__ *) malloc(_len_sess__i0__vha_hw_base_qpair0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_sess__i0__vha_hw_base_qpair0; _j0++) {
            sess[_i0].vha->hw->base_qpair->chip_reset = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          }
          qla24xx_chk_fcp_state(sess);
          for(int _aux = 0; _aux < _len_sess0; _aux++) {
          free(sess[_aux].vha);
          }
          free(sess);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_sess0 = 100;
          struct fc_port * sess = (struct fc_port *) malloc(_len_sess0*sizeof(struct fc_port));
          for(int _i0 = 0; _i0 < _len_sess0; _i0++) {
            sess[_i0].chip_reset = ((-2 * (next_i()%2)) + 1) * next_i();
        sess[_i0].scan_state = ((-2 * (next_i()%2)) + 1) * next_i();
        sess[_i0].fw_login_state = ((-2 * (next_i()%2)) + 1) * next_i();
        sess[_i0].logo_ack_needed = ((-2 * (next_i()%2)) + 1) * next_i();
        sess[_i0].logout_on_delete = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_sess__i0__vha0 = 1;
          sess[_i0].vha = (struct TYPE_6__ *) malloc(_len_sess__i0__vha0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_sess__i0__vha0; _j0++) {
              int _len_sess__i0__vha_hw0 = 1;
          sess[_i0].vha->hw = (struct TYPE_5__ *) malloc(_len_sess__i0__vha_hw0*sizeof(struct TYPE_5__));
          for(int _j0 = 0; _j0 < _len_sess__i0__vha_hw0; _j0++) {
              int _len_sess__i0__vha_hw_base_qpair0 = 1;
          sess[_i0].vha->hw->base_qpair = (struct TYPE_4__ *) malloc(_len_sess__i0__vha_hw_base_qpair0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_sess__i0__vha_hw_base_qpair0; _j0++) {
            sess[_i0].vha->hw->base_qpair->chip_reset = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          }
          qla24xx_chk_fcp_state(sess);
          for(int _aux = 0; _aux < _len_sess0; _aux++) {
          free(sess[_aux].vha);
          }
          free(sess);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
