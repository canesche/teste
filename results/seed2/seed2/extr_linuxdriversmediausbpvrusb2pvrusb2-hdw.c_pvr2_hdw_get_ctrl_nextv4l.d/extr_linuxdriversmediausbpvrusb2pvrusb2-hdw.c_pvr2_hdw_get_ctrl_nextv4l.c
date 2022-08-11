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
struct pvr2_hdw {unsigned int control_cnt; struct pvr2_ctrl* controls; } ;
struct pvr2_ctrl {TYPE_1__* info; } ;
struct TYPE_2__ {int v4l_id; } ;

/* Variables and functions */

struct pvr2_ctrl *pvr2_hdw_get_ctrl_nextv4l(struct pvr2_hdw *hdw,
					    unsigned int ctl_id)
{
	struct pvr2_ctrl *cptr,*cp2;
	unsigned int idx;
	int i;

	/* This could be made a lot more efficient, but for now... */
	cp2 = NULL;
	for (idx = 0; idx < hdw->control_cnt; idx++) {
		cptr = hdw->controls + idx;
		i = cptr->info->v4l_id;
		if (!i) continue;
		if (i <= ctl_id) continue;
		if (cp2 && (cp2->info->v4l_id < i)) continue;
		cp2 = cptr;
	}
	return cp2;
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
          unsigned int ctl_id = 100;
          int _len_hdw0 = 1;
          struct pvr2_hdw * hdw = (struct pvr2_hdw *) malloc(_len_hdw0*sizeof(struct pvr2_hdw));
          for(int _i0 = 0; _i0 < _len_hdw0; _i0++) {
            hdw[_i0].control_cnt = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_hdw__i0__controls0 = 1;
          hdw[_i0].controls = (struct pvr2_ctrl *) malloc(_len_hdw__i0__controls0*sizeof(struct pvr2_ctrl));
          for(int _j0 = 0; _j0 < _len_hdw__i0__controls0; _j0++) {
              int _len_hdw__i0__controls_info0 = 1;
          hdw[_i0].controls->info = (struct TYPE_2__ *) malloc(_len_hdw__i0__controls_info0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_hdw__i0__controls_info0; _j0++) {
            hdw[_i0].controls->info->v4l_id = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          struct pvr2_ctrl * benchRet = pvr2_hdw_get_ctrl_nextv4l(hdw,ctl_id);
          for(int _aux = 0; _aux < _len_hdw0; _aux++) {
          free(hdw[_aux].controls);
          }
          free(hdw);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned int ctl_id = 255;
          int _len_hdw0 = 65025;
          struct pvr2_hdw * hdw = (struct pvr2_hdw *) malloc(_len_hdw0*sizeof(struct pvr2_hdw));
          for(int _i0 = 0; _i0 < _len_hdw0; _i0++) {
            hdw[_i0].control_cnt = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_hdw__i0__controls0 = 1;
          hdw[_i0].controls = (struct pvr2_ctrl *) malloc(_len_hdw__i0__controls0*sizeof(struct pvr2_ctrl));
          for(int _j0 = 0; _j0 < _len_hdw__i0__controls0; _j0++) {
              int _len_hdw__i0__controls_info0 = 1;
          hdw[_i0].controls->info = (struct TYPE_2__ *) malloc(_len_hdw__i0__controls_info0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_hdw__i0__controls_info0; _j0++) {
            hdw[_i0].controls->info->v4l_id = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          struct pvr2_ctrl * benchRet = pvr2_hdw_get_ctrl_nextv4l(hdw,ctl_id);
          for(int _aux = 0; _aux < _len_hdw0; _aux++) {
          free(hdw[_aux].controls);
          }
          free(hdw);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned int ctl_id = 10;
          int _len_hdw0 = 100;
          struct pvr2_hdw * hdw = (struct pvr2_hdw *) malloc(_len_hdw0*sizeof(struct pvr2_hdw));
          for(int _i0 = 0; _i0 < _len_hdw0; _i0++) {
            hdw[_i0].control_cnt = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_hdw__i0__controls0 = 1;
          hdw[_i0].controls = (struct pvr2_ctrl *) malloc(_len_hdw__i0__controls0*sizeof(struct pvr2_ctrl));
          for(int _j0 = 0; _j0 < _len_hdw__i0__controls0; _j0++) {
              int _len_hdw__i0__controls_info0 = 1;
          hdw[_i0].controls->info = (struct TYPE_2__ *) malloc(_len_hdw__i0__controls_info0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_hdw__i0__controls_info0; _j0++) {
            hdw[_i0].controls->info->v4l_id = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          struct pvr2_ctrl * benchRet = pvr2_hdw_get_ctrl_nextv4l(hdw,ctl_id);
          for(int _aux = 0; _aux < _len_hdw0; _aux++) {
          free(hdw[_aux].controls);
          }
          free(hdw);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
