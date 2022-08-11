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
struct dasd_device {struct ccw_device* cdev; } ;
struct dasd_ccw_req {scalar_t__ startdev; } ;
struct TYPE_2__ {int cu_type; } ;
struct ccw_device {TYPE_1__ id; } ;
typedef  int /*<<< orphan*/  dasd_erp_fn_t ;

/* Variables and functions */
 int /*<<< orphan*/  dasd_3990_erp_action ; 
 int /*<<< orphan*/  dasd_default_erp_action ; 

__attribute__((used)) static dasd_erp_fn_t
dasd_eckd_erp_action(struct dasd_ccw_req * cqr)
{
	struct dasd_device *device = (struct dasd_device *) cqr->startdev;
	struct ccw_device *cdev = device->cdev;

	switch (cdev->id.cu_type) {
	case 0x3990:
	case 0x2105:
	case 0x2107:
	case 0x1750:
		return dasd_3990_erp_action;
	case 0x9343:
	case 0x3880:
	default:
		return dasd_default_erp_action;
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
          int _len_cqr0 = 1;
          struct dasd_ccw_req * cqr = (struct dasd_ccw_req *) malloc(_len_cqr0*sizeof(struct dasd_ccw_req));
          for(int _i0 = 0; _i0 < _len_cqr0; _i0++) {
            cqr[_i0].startdev = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = dasd_eckd_erp_action(cqr);
          printf("%d\n", benchRet); 
          free(cqr);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_cqr0 = 65025;
          struct dasd_ccw_req * cqr = (struct dasd_ccw_req *) malloc(_len_cqr0*sizeof(struct dasd_ccw_req));
          for(int _i0 = 0; _i0 < _len_cqr0; _i0++) {
            cqr[_i0].startdev = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = dasd_eckd_erp_action(cqr);
          printf("%d\n", benchRet); 
          free(cqr);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_cqr0 = 100;
          struct dasd_ccw_req * cqr = (struct dasd_ccw_req *) malloc(_len_cqr0*sizeof(struct dasd_ccw_req));
          for(int _i0 = 0; _i0 < _len_cqr0; _i0++) {
            cqr[_i0].startdev = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = dasd_eckd_erp_action(cqr);
          printf("%d\n", benchRet); 
          free(cqr);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
