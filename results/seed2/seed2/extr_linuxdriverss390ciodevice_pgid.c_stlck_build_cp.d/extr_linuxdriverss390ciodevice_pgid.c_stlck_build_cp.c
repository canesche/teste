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
typedef  void* u32 ;
struct ccw_request {struct ccw1* cp; } ;
struct ccw_device {TYPE_1__* private; } ;
struct ccw1 {int count; scalar_t__ flags; void* cda; int /*<<< orphan*/  cmd_code; } ;
typedef  scalar_t__ addr_t ;
struct TYPE_2__ {struct ccw1* iccws; struct ccw_request req; } ;

/* Variables and functions */
 int /*<<< orphan*/  CCW_CMD_RELEASE ; 
 int /*<<< orphan*/  CCW_CMD_STLCK ; 
 scalar_t__ CCW_FLAG_CC ; 

__attribute__((used)) static void stlck_build_cp(struct ccw_device *cdev, void *buf1, void *buf2)
{
	struct ccw_request *req = &cdev->private->req;
	struct ccw1 *cp = cdev->private->iccws;

	cp[0].cmd_code = CCW_CMD_STLCK;
	cp[0].cda = (u32) (addr_t) buf1;
	cp[0].count = 32;
	cp[0].flags = CCW_FLAG_CC;
	cp[1].cmd_code = CCW_CMD_RELEASE;
	cp[1].cda = (u32) (addr_t) buf2;
	cp[1].count = 32;
	cp[1].flags = 0;
	req->cp = cp;
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
          int _len_cdev0 = 1;
          struct ccw_device * cdev = (struct ccw_device *) malloc(_len_cdev0*sizeof(struct ccw_device));
          for(int _i0 = 0; _i0 < _len_cdev0; _i0++) {
              int _len_cdev__i0__private0 = 1;
          cdev[_i0].private = (struct TYPE_2__ *) malloc(_len_cdev__i0__private0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_cdev__i0__private0; _j0++) {
              int _len_cdev__i0__private_iccws0 = 1;
          cdev[_i0].private->iccws = (struct ccw1 *) malloc(_len_cdev__i0__private_iccws0*sizeof(struct ccw1));
          for(int _j0 = 0; _j0 < _len_cdev__i0__private_iccws0; _j0++) {
            cdev[_i0].private->iccws->count = ((-2 * (next_i()%2)) + 1) * next_i();
        cdev[_i0].private->iccws->flags = ((-2 * (next_i()%2)) + 1) * next_i();
        cdev[_i0].private->iccws->cmd_code = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_cdev__i0__private_req_cp0 = 1;
          cdev[_i0].private->req.cp = (struct ccw1 *) malloc(_len_cdev__i0__private_req_cp0*sizeof(struct ccw1));
          for(int _j0 = 0; _j0 < _len_cdev__i0__private_req_cp0; _j0++) {
            cdev[_i0].private->req.cp->count = ((-2 * (next_i()%2)) + 1) * next_i();
        cdev[_i0].private->req.cp->flags = ((-2 * (next_i()%2)) + 1) * next_i();
        cdev[_i0].private->req.cp->cmd_code = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          void * buf1;
          void * buf2;
          stlck_build_cp(cdev,buf1,buf2);
          for(int _aux = 0; _aux < _len_cdev0; _aux++) {
          free(cdev[_aux].private);
          }
          free(cdev);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_cdev0 = 65025;
          struct ccw_device * cdev = (struct ccw_device *) malloc(_len_cdev0*sizeof(struct ccw_device));
          for(int _i0 = 0; _i0 < _len_cdev0; _i0++) {
              int _len_cdev__i0__private0 = 1;
          cdev[_i0].private = (struct TYPE_2__ *) malloc(_len_cdev__i0__private0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_cdev__i0__private0; _j0++) {
              int _len_cdev__i0__private_iccws0 = 1;
          cdev[_i0].private->iccws = (struct ccw1 *) malloc(_len_cdev__i0__private_iccws0*sizeof(struct ccw1));
          for(int _j0 = 0; _j0 < _len_cdev__i0__private_iccws0; _j0++) {
            cdev[_i0].private->iccws->count = ((-2 * (next_i()%2)) + 1) * next_i();
        cdev[_i0].private->iccws->flags = ((-2 * (next_i()%2)) + 1) * next_i();
        cdev[_i0].private->iccws->cmd_code = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_cdev__i0__private_req_cp0 = 1;
          cdev[_i0].private->req.cp = (struct ccw1 *) malloc(_len_cdev__i0__private_req_cp0*sizeof(struct ccw1));
          for(int _j0 = 0; _j0 < _len_cdev__i0__private_req_cp0; _j0++) {
            cdev[_i0].private->req.cp->count = ((-2 * (next_i()%2)) + 1) * next_i();
        cdev[_i0].private->req.cp->flags = ((-2 * (next_i()%2)) + 1) * next_i();
        cdev[_i0].private->req.cp->cmd_code = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          void * buf1;
          void * buf2;
          stlck_build_cp(cdev,buf1,buf2);
          for(int _aux = 0; _aux < _len_cdev0; _aux++) {
          free(cdev[_aux].private);
          }
          free(cdev);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_cdev0 = 100;
          struct ccw_device * cdev = (struct ccw_device *) malloc(_len_cdev0*sizeof(struct ccw_device));
          for(int _i0 = 0; _i0 < _len_cdev0; _i0++) {
              int _len_cdev__i0__private0 = 1;
          cdev[_i0].private = (struct TYPE_2__ *) malloc(_len_cdev__i0__private0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_cdev__i0__private0; _j0++) {
              int _len_cdev__i0__private_iccws0 = 1;
          cdev[_i0].private->iccws = (struct ccw1 *) malloc(_len_cdev__i0__private_iccws0*sizeof(struct ccw1));
          for(int _j0 = 0; _j0 < _len_cdev__i0__private_iccws0; _j0++) {
            cdev[_i0].private->iccws->count = ((-2 * (next_i()%2)) + 1) * next_i();
        cdev[_i0].private->iccws->flags = ((-2 * (next_i()%2)) + 1) * next_i();
        cdev[_i0].private->iccws->cmd_code = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_cdev__i0__private_req_cp0 = 1;
          cdev[_i0].private->req.cp = (struct ccw1 *) malloc(_len_cdev__i0__private_req_cp0*sizeof(struct ccw1));
          for(int _j0 = 0; _j0 < _len_cdev__i0__private_req_cp0; _j0++) {
            cdev[_i0].private->req.cp->count = ((-2 * (next_i()%2)) + 1) * next_i();
        cdev[_i0].private->req.cp->flags = ((-2 * (next_i()%2)) + 1) * next_i();
        cdev[_i0].private->req.cp->cmd_code = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          void * buf1;
          void * buf2;
          stlck_build_cp(cdev,buf1,buf2);
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
