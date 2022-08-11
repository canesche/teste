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
struct ciw {scalar_t__ ct; } ;
struct ccw_device {TYPE_2__* private; } ;
typedef  scalar_t__ __u32 ;
struct TYPE_6__ {struct ciw* ciw; } ;
struct TYPE_4__ {scalar_t__ esid; } ;
struct TYPE_5__ {TYPE_3__ senseid; TYPE_1__ flags; } ;

/* Variables and functions */
 int MAX_CIWS ; 

struct ciw *ccw_device_get_ciw(struct ccw_device *cdev, __u32 ct)
{
	int ciw_cnt;

	if (cdev->private->flags.esid == 0)
		return NULL;
	for (ciw_cnt = 0; ciw_cnt < MAX_CIWS; ciw_cnt++)
		if (cdev->private->senseid.ciw[ciw_cnt].ct == ct)
			return cdev->private->senseid.ciw + ciw_cnt;
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
          long ct = 100;
          int _len_cdev0 = 1;
          struct ccw_device * cdev = (struct ccw_device *) malloc(_len_cdev0*sizeof(struct ccw_device));
          for(int _i0 = 0; _i0 < _len_cdev0; _i0++) {
              int _len_cdev__i0__private0 = 1;
          cdev[_i0].private = (struct TYPE_5__ *) malloc(_len_cdev__i0__private0*sizeof(struct TYPE_5__));
          for(int _j0 = 0; _j0 < _len_cdev__i0__private0; _j0++) {
              int _len_cdev__i0__private_senseid_ciw0 = 1;
          cdev[_i0].private->senseid.ciw = (struct ciw *) malloc(_len_cdev__i0__private_senseid_ciw0*sizeof(struct ciw));
          for(int _j0 = 0; _j0 < _len_cdev__i0__private_senseid_ciw0; _j0++) {
            cdev[_i0].private->senseid.ciw->ct = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        cdev[_i0].private->flags.esid = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          struct ciw * benchRet = ccw_device_get_ciw(cdev,ct);
          printf("%ld\n", (*benchRet).ct);
          for(int _aux = 0; _aux < _len_cdev0; _aux++) {
          free(cdev[_aux].private);
          }
          free(cdev);
        
        break;
    }
    // big-arr
    case 1:
    {
          long ct = 255;
          int _len_cdev0 = 65025;
          struct ccw_device * cdev = (struct ccw_device *) malloc(_len_cdev0*sizeof(struct ccw_device));
          for(int _i0 = 0; _i0 < _len_cdev0; _i0++) {
              int _len_cdev__i0__private0 = 1;
          cdev[_i0].private = (struct TYPE_5__ *) malloc(_len_cdev__i0__private0*sizeof(struct TYPE_5__));
          for(int _j0 = 0; _j0 < _len_cdev__i0__private0; _j0++) {
              int _len_cdev__i0__private_senseid_ciw0 = 1;
          cdev[_i0].private->senseid.ciw = (struct ciw *) malloc(_len_cdev__i0__private_senseid_ciw0*sizeof(struct ciw));
          for(int _j0 = 0; _j0 < _len_cdev__i0__private_senseid_ciw0; _j0++) {
            cdev[_i0].private->senseid.ciw->ct = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        cdev[_i0].private->flags.esid = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          struct ciw * benchRet = ccw_device_get_ciw(cdev,ct);
          printf("%ld\n", (*benchRet).ct);
          for(int _aux = 0; _aux < _len_cdev0; _aux++) {
          free(cdev[_aux].private);
          }
          free(cdev);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          long ct = 10;
          int _len_cdev0 = 100;
          struct ccw_device * cdev = (struct ccw_device *) malloc(_len_cdev0*sizeof(struct ccw_device));
          for(int _i0 = 0; _i0 < _len_cdev0; _i0++) {
              int _len_cdev__i0__private0 = 1;
          cdev[_i0].private = (struct TYPE_5__ *) malloc(_len_cdev__i0__private0*sizeof(struct TYPE_5__));
          for(int _j0 = 0; _j0 < _len_cdev__i0__private0; _j0++) {
              int _len_cdev__i0__private_senseid_ciw0 = 1;
          cdev[_i0].private->senseid.ciw = (struct ciw *) malloc(_len_cdev__i0__private_senseid_ciw0*sizeof(struct ciw));
          for(int _j0 = 0; _j0 < _len_cdev__i0__private_senseid_ciw0; _j0++) {
            cdev[_i0].private->senseid.ciw->ct = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        cdev[_i0].private->flags.esid = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          struct ciw * benchRet = ccw_device_get_ciw(cdev,ct);
          printf("%ld\n", (*benchRet).ct);
          for(int _aux = 0; _aux < _len_cdev0; _aux++) {
          free(cdev[_aux].private);
          }
          free(cdev);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
