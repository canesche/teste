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
struct bfa_ioc_s {TYPE_1__* ioc_hwif; } ;
struct TYPE_2__ {int /*<<< orphan*/  ioc_get_alt_fwstate; int /*<<< orphan*/  ioc_set_alt_fwstate; int /*<<< orphan*/  ioc_get_fwstate; int /*<<< orphan*/  ioc_set_fwstate; int /*<<< orphan*/  ioc_sync_complete; int /*<<< orphan*/  ioc_sync_ack; int /*<<< orphan*/  ioc_sync_leave; int /*<<< orphan*/  ioc_sync_join; int /*<<< orphan*/  ioc_sync_start; int /*<<< orphan*/  ioc_ownership_reset; int /*<<< orphan*/  ioc_notify_fail; int /*<<< orphan*/  ioc_isr_mode_set; int /*<<< orphan*/  ioc_map_port; int /*<<< orphan*/  ioc_reg_init; int /*<<< orphan*/  ioc_firmware_unlock; int /*<<< orphan*/  ioc_firmware_lock; int /*<<< orphan*/  ioc_pll_init; } ;

/* Variables and functions */
 int /*<<< orphan*/  bfa_ioc_cb_firmware_lock ; 
 int /*<<< orphan*/  bfa_ioc_cb_firmware_unlock ; 
 int /*<<< orphan*/  bfa_ioc_cb_get_alt_ioc_fwstate ; 
 int /*<<< orphan*/  bfa_ioc_cb_get_cur_ioc_fwstate ; 
 int /*<<< orphan*/  bfa_ioc_cb_isr_mode_set ; 
 int /*<<< orphan*/  bfa_ioc_cb_map_port ; 
 int /*<<< orphan*/  bfa_ioc_cb_notify_fail ; 
 int /*<<< orphan*/  bfa_ioc_cb_ownership_reset ; 
 int /*<<< orphan*/  bfa_ioc_cb_pll_init ; 
 int /*<<< orphan*/  bfa_ioc_cb_reg_init ; 
 int /*<<< orphan*/  bfa_ioc_cb_set_alt_ioc_fwstate ; 
 int /*<<< orphan*/  bfa_ioc_cb_set_cur_ioc_fwstate ; 
 int /*<<< orphan*/  bfa_ioc_cb_sync_ack ; 
 int /*<<< orphan*/  bfa_ioc_cb_sync_complete ; 
 int /*<<< orphan*/  bfa_ioc_cb_sync_join ; 
 int /*<<< orphan*/  bfa_ioc_cb_sync_leave ; 
 int /*<<< orphan*/  bfa_ioc_cb_sync_start ; 
 TYPE_1__ hwif_cb ; 

void
bfa_ioc_set_cb_hwif(struct bfa_ioc_s *ioc)
{
	hwif_cb.ioc_pll_init = bfa_ioc_cb_pll_init;
	hwif_cb.ioc_firmware_lock = bfa_ioc_cb_firmware_lock;
	hwif_cb.ioc_firmware_unlock = bfa_ioc_cb_firmware_unlock;
	hwif_cb.ioc_reg_init = bfa_ioc_cb_reg_init;
	hwif_cb.ioc_map_port = bfa_ioc_cb_map_port;
	hwif_cb.ioc_isr_mode_set = bfa_ioc_cb_isr_mode_set;
	hwif_cb.ioc_notify_fail = bfa_ioc_cb_notify_fail;
	hwif_cb.ioc_ownership_reset = bfa_ioc_cb_ownership_reset;
	hwif_cb.ioc_sync_start = bfa_ioc_cb_sync_start;
	hwif_cb.ioc_sync_join = bfa_ioc_cb_sync_join;
	hwif_cb.ioc_sync_leave = bfa_ioc_cb_sync_leave;
	hwif_cb.ioc_sync_ack = bfa_ioc_cb_sync_ack;
	hwif_cb.ioc_sync_complete = bfa_ioc_cb_sync_complete;
	hwif_cb.ioc_set_fwstate = bfa_ioc_cb_set_cur_ioc_fwstate;
	hwif_cb.ioc_get_fwstate = bfa_ioc_cb_get_cur_ioc_fwstate;
	hwif_cb.ioc_set_alt_fwstate = bfa_ioc_cb_set_alt_ioc_fwstate;
	hwif_cb.ioc_get_alt_fwstate = bfa_ioc_cb_get_alt_ioc_fwstate;

	ioc->ioc_hwif = &hwif_cb;
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
          int _len_ioc0 = 1;
          struct bfa_ioc_s * ioc = (struct bfa_ioc_s *) malloc(_len_ioc0*sizeof(struct bfa_ioc_s));
          for(int _i0 = 0; _i0 < _len_ioc0; _i0++) {
              int _len_ioc__i0__ioc_hwif0 = 1;
          ioc[_i0].ioc_hwif = (struct TYPE_2__ *) malloc(_len_ioc__i0__ioc_hwif0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_ioc__i0__ioc_hwif0; _j0++) {
            ioc[_i0].ioc_hwif->ioc_get_alt_fwstate = ((-2 * (next_i()%2)) + 1) * next_i();
        ioc[_i0].ioc_hwif->ioc_set_alt_fwstate = ((-2 * (next_i()%2)) + 1) * next_i();
        ioc[_i0].ioc_hwif->ioc_get_fwstate = ((-2 * (next_i()%2)) + 1) * next_i();
        ioc[_i0].ioc_hwif->ioc_set_fwstate = ((-2 * (next_i()%2)) + 1) * next_i();
        ioc[_i0].ioc_hwif->ioc_sync_complete = ((-2 * (next_i()%2)) + 1) * next_i();
        ioc[_i0].ioc_hwif->ioc_sync_ack = ((-2 * (next_i()%2)) + 1) * next_i();
        ioc[_i0].ioc_hwif->ioc_sync_leave = ((-2 * (next_i()%2)) + 1) * next_i();
        ioc[_i0].ioc_hwif->ioc_sync_join = ((-2 * (next_i()%2)) + 1) * next_i();
        ioc[_i0].ioc_hwif->ioc_sync_start = ((-2 * (next_i()%2)) + 1) * next_i();
        ioc[_i0].ioc_hwif->ioc_ownership_reset = ((-2 * (next_i()%2)) + 1) * next_i();
        ioc[_i0].ioc_hwif->ioc_notify_fail = ((-2 * (next_i()%2)) + 1) * next_i();
        ioc[_i0].ioc_hwif->ioc_isr_mode_set = ((-2 * (next_i()%2)) + 1) * next_i();
        ioc[_i0].ioc_hwif->ioc_map_port = ((-2 * (next_i()%2)) + 1) * next_i();
        ioc[_i0].ioc_hwif->ioc_reg_init = ((-2 * (next_i()%2)) + 1) * next_i();
        ioc[_i0].ioc_hwif->ioc_firmware_unlock = ((-2 * (next_i()%2)) + 1) * next_i();
        ioc[_i0].ioc_hwif->ioc_firmware_lock = ((-2 * (next_i()%2)) + 1) * next_i();
        ioc[_i0].ioc_hwif->ioc_pll_init = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          bfa_ioc_set_cb_hwif(ioc);
          for(int _aux = 0; _aux < _len_ioc0; _aux++) {
          free(ioc[_aux].ioc_hwif);
          }
          free(ioc);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_ioc0 = 65025;
          struct bfa_ioc_s * ioc = (struct bfa_ioc_s *) malloc(_len_ioc0*sizeof(struct bfa_ioc_s));
          for(int _i0 = 0; _i0 < _len_ioc0; _i0++) {
              int _len_ioc__i0__ioc_hwif0 = 1;
          ioc[_i0].ioc_hwif = (struct TYPE_2__ *) malloc(_len_ioc__i0__ioc_hwif0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_ioc__i0__ioc_hwif0; _j0++) {
            ioc[_i0].ioc_hwif->ioc_get_alt_fwstate = ((-2 * (next_i()%2)) + 1) * next_i();
        ioc[_i0].ioc_hwif->ioc_set_alt_fwstate = ((-2 * (next_i()%2)) + 1) * next_i();
        ioc[_i0].ioc_hwif->ioc_get_fwstate = ((-2 * (next_i()%2)) + 1) * next_i();
        ioc[_i0].ioc_hwif->ioc_set_fwstate = ((-2 * (next_i()%2)) + 1) * next_i();
        ioc[_i0].ioc_hwif->ioc_sync_complete = ((-2 * (next_i()%2)) + 1) * next_i();
        ioc[_i0].ioc_hwif->ioc_sync_ack = ((-2 * (next_i()%2)) + 1) * next_i();
        ioc[_i0].ioc_hwif->ioc_sync_leave = ((-2 * (next_i()%2)) + 1) * next_i();
        ioc[_i0].ioc_hwif->ioc_sync_join = ((-2 * (next_i()%2)) + 1) * next_i();
        ioc[_i0].ioc_hwif->ioc_sync_start = ((-2 * (next_i()%2)) + 1) * next_i();
        ioc[_i0].ioc_hwif->ioc_ownership_reset = ((-2 * (next_i()%2)) + 1) * next_i();
        ioc[_i0].ioc_hwif->ioc_notify_fail = ((-2 * (next_i()%2)) + 1) * next_i();
        ioc[_i0].ioc_hwif->ioc_isr_mode_set = ((-2 * (next_i()%2)) + 1) * next_i();
        ioc[_i0].ioc_hwif->ioc_map_port = ((-2 * (next_i()%2)) + 1) * next_i();
        ioc[_i0].ioc_hwif->ioc_reg_init = ((-2 * (next_i()%2)) + 1) * next_i();
        ioc[_i0].ioc_hwif->ioc_firmware_unlock = ((-2 * (next_i()%2)) + 1) * next_i();
        ioc[_i0].ioc_hwif->ioc_firmware_lock = ((-2 * (next_i()%2)) + 1) * next_i();
        ioc[_i0].ioc_hwif->ioc_pll_init = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          bfa_ioc_set_cb_hwif(ioc);
          for(int _aux = 0; _aux < _len_ioc0; _aux++) {
          free(ioc[_aux].ioc_hwif);
          }
          free(ioc);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_ioc0 = 100;
          struct bfa_ioc_s * ioc = (struct bfa_ioc_s *) malloc(_len_ioc0*sizeof(struct bfa_ioc_s));
          for(int _i0 = 0; _i0 < _len_ioc0; _i0++) {
              int _len_ioc__i0__ioc_hwif0 = 1;
          ioc[_i0].ioc_hwif = (struct TYPE_2__ *) malloc(_len_ioc__i0__ioc_hwif0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_ioc__i0__ioc_hwif0; _j0++) {
            ioc[_i0].ioc_hwif->ioc_get_alt_fwstate = ((-2 * (next_i()%2)) + 1) * next_i();
        ioc[_i0].ioc_hwif->ioc_set_alt_fwstate = ((-2 * (next_i()%2)) + 1) * next_i();
        ioc[_i0].ioc_hwif->ioc_get_fwstate = ((-2 * (next_i()%2)) + 1) * next_i();
        ioc[_i0].ioc_hwif->ioc_set_fwstate = ((-2 * (next_i()%2)) + 1) * next_i();
        ioc[_i0].ioc_hwif->ioc_sync_complete = ((-2 * (next_i()%2)) + 1) * next_i();
        ioc[_i0].ioc_hwif->ioc_sync_ack = ((-2 * (next_i()%2)) + 1) * next_i();
        ioc[_i0].ioc_hwif->ioc_sync_leave = ((-2 * (next_i()%2)) + 1) * next_i();
        ioc[_i0].ioc_hwif->ioc_sync_join = ((-2 * (next_i()%2)) + 1) * next_i();
        ioc[_i0].ioc_hwif->ioc_sync_start = ((-2 * (next_i()%2)) + 1) * next_i();
        ioc[_i0].ioc_hwif->ioc_ownership_reset = ((-2 * (next_i()%2)) + 1) * next_i();
        ioc[_i0].ioc_hwif->ioc_notify_fail = ((-2 * (next_i()%2)) + 1) * next_i();
        ioc[_i0].ioc_hwif->ioc_isr_mode_set = ((-2 * (next_i()%2)) + 1) * next_i();
        ioc[_i0].ioc_hwif->ioc_map_port = ((-2 * (next_i()%2)) + 1) * next_i();
        ioc[_i0].ioc_hwif->ioc_reg_init = ((-2 * (next_i()%2)) + 1) * next_i();
        ioc[_i0].ioc_hwif->ioc_firmware_unlock = ((-2 * (next_i()%2)) + 1) * next_i();
        ioc[_i0].ioc_hwif->ioc_firmware_lock = ((-2 * (next_i()%2)) + 1) * next_i();
        ioc[_i0].ioc_hwif->ioc_pll_init = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          bfa_ioc_set_cb_hwif(ioc);
          for(int _aux = 0; _aux < _len_ioc0; _aux++) {
          free(ioc[_aux].ioc_hwif);
          }
          free(ioc);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
