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
struct capi_ctr {int /*<<< orphan*/  owner; int /*<<< orphan*/  proc_show; int /*<<< orphan*/ * reset_ctr; int /*<<< orphan*/ * load_firmware; int /*<<< orphan*/  driver_name; } ;

/* Variables and functions */
 int /*<<< orphan*/  DRIVERLNAME ; 
 int /*<<< orphan*/  THIS_MODULE ; 
 int /*<<< orphan*/  diva_ctl_proc_show ; 

void diva_os_set_controller_struct(struct capi_ctr *ctrl)
{
	ctrl->driver_name = DRIVERLNAME;
	ctrl->load_firmware = NULL;
	ctrl->reset_ctr = NULL;
	ctrl->proc_show = diva_ctl_proc_show;
	ctrl->owner = THIS_MODULE;
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
          int _len_ctrl0 = 1;
          struct capi_ctr * ctrl = (struct capi_ctr *) malloc(_len_ctrl0*sizeof(struct capi_ctr));
          for(int _i0 = 0; _i0 < _len_ctrl0; _i0++) {
            ctrl[_i0].owner = ((-2 * (next_i()%2)) + 1) * next_i();
        ctrl[_i0].proc_show = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ctrl__i0__reset_ctr0 = 1;
          ctrl[_i0].reset_ctr = (int *) malloc(_len_ctrl__i0__reset_ctr0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ctrl__i0__reset_ctr0; _j0++) {
            ctrl[_i0].reset_ctr[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ctrl__i0__load_firmware0 = 1;
          ctrl[_i0].load_firmware = (int *) malloc(_len_ctrl__i0__load_firmware0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ctrl__i0__load_firmware0; _j0++) {
            ctrl[_i0].load_firmware[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        ctrl[_i0].driver_name = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          diva_os_set_controller_struct(ctrl);
          for(int _aux = 0; _aux < _len_ctrl0; _aux++) {
          free(ctrl[_aux].reset_ctr);
          }
          for(int _aux = 0; _aux < _len_ctrl0; _aux++) {
          free(ctrl[_aux].load_firmware);
          }
          free(ctrl);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_ctrl0 = 65025;
          struct capi_ctr * ctrl = (struct capi_ctr *) malloc(_len_ctrl0*sizeof(struct capi_ctr));
          for(int _i0 = 0; _i0 < _len_ctrl0; _i0++) {
            ctrl[_i0].owner = ((-2 * (next_i()%2)) + 1) * next_i();
        ctrl[_i0].proc_show = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ctrl__i0__reset_ctr0 = 1;
          ctrl[_i0].reset_ctr = (int *) malloc(_len_ctrl__i0__reset_ctr0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ctrl__i0__reset_ctr0; _j0++) {
            ctrl[_i0].reset_ctr[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ctrl__i0__load_firmware0 = 1;
          ctrl[_i0].load_firmware = (int *) malloc(_len_ctrl__i0__load_firmware0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ctrl__i0__load_firmware0; _j0++) {
            ctrl[_i0].load_firmware[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        ctrl[_i0].driver_name = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          diva_os_set_controller_struct(ctrl);
          for(int _aux = 0; _aux < _len_ctrl0; _aux++) {
          free(ctrl[_aux].reset_ctr);
          }
          for(int _aux = 0; _aux < _len_ctrl0; _aux++) {
          free(ctrl[_aux].load_firmware);
          }
          free(ctrl);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_ctrl0 = 100;
          struct capi_ctr * ctrl = (struct capi_ctr *) malloc(_len_ctrl0*sizeof(struct capi_ctr));
          for(int _i0 = 0; _i0 < _len_ctrl0; _i0++) {
            ctrl[_i0].owner = ((-2 * (next_i()%2)) + 1) * next_i();
        ctrl[_i0].proc_show = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ctrl__i0__reset_ctr0 = 1;
          ctrl[_i0].reset_ctr = (int *) malloc(_len_ctrl__i0__reset_ctr0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ctrl__i0__reset_ctr0; _j0++) {
            ctrl[_i0].reset_ctr[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ctrl__i0__load_firmware0 = 1;
          ctrl[_i0].load_firmware = (int *) malloc(_len_ctrl__i0__load_firmware0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ctrl__i0__load_firmware0; _j0++) {
            ctrl[_i0].load_firmware[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        ctrl[_i0].driver_name = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          diva_os_set_controller_struct(ctrl);
          for(int _aux = 0; _aux < _len_ctrl0; _aux++) {
          free(ctrl[_aux].reset_ctr);
          }
          for(int _aux = 0; _aux < _len_ctrl0; _aux++) {
          free(ctrl[_aux].load_firmware);
          }
          free(ctrl);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
