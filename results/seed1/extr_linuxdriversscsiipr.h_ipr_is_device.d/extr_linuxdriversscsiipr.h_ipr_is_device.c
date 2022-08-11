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
typedef  struct TYPE_10__   TYPE_5__ ;
typedef  struct TYPE_9__   TYPE_4__ ;
typedef  struct TYPE_8__   TYPE_3__ ;
typedef  struct TYPE_7__   TYPE_2__ ;
typedef  struct TYPE_6__   TYPE_1__ ;

/* Type definitions */
typedef  int u8 ;
struct ipr_res_addr {scalar_t__ bus; int target; } ;
struct TYPE_7__ {struct ipr_res_addr fd_res_addr; } ;
struct TYPE_6__ {int* fd_res_path; } ;
struct TYPE_8__ {TYPE_2__ error; TYPE_1__ error64; } ;
struct TYPE_9__ {TYPE_3__ u; } ;
struct ipr_hostrcb {TYPE_4__ hcam; TYPE_5__* ioa_cfg; } ;
struct TYPE_10__ {scalar_t__ sis64; } ;

/* Variables and functions */
 scalar_t__ IPR_MAX_NUM_BUSES ; 
 int IPR_MAX_NUM_TARGETS_PER_BUS ; 

__attribute__((used)) static inline int ipr_is_device(struct ipr_hostrcb *hostrcb)
{
	struct ipr_res_addr *res_addr;
	u8 *res_path;

	if (hostrcb->ioa_cfg->sis64) {
		res_path = &hostrcb->hcam.u.error64.fd_res_path[0];
		if ((res_path[0] == 0x00 || res_path[0] == 0x80 ||
		    res_path[0] == 0x81) && res_path[2] != 0xFF)
			return 1;
	} else {
		res_addr = &hostrcb->hcam.u.error.fd_res_addr;

		if ((res_addr->bus < IPR_MAX_NUM_BUSES) &&
		    (res_addr->target < (IPR_MAX_NUM_TARGETS_PER_BUS - 1)))
			return 1;
	}
	return 0;
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
          int _len_hostrcb0 = 1;
          struct ipr_hostrcb * hostrcb = (struct ipr_hostrcb *) malloc(_len_hostrcb0*sizeof(struct ipr_hostrcb));
          for(int _i0 = 0; _i0 < _len_hostrcb0; _i0++) {
            hostrcb[_i0].hcam.u.error.fd_res_addr.bus = ((-2 * (next_i()%2)) + 1) * next_i();
        hostrcb[_i0].hcam.u.error.fd_res_addr.target = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_hostrcb__i0__hcam_u_error64_fd_res_path0 = 1;
          hostrcb[_i0].hcam.u.error64.fd_res_path = (int *) malloc(_len_hostrcb__i0__hcam_u_error64_fd_res_path0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_hostrcb__i0__hcam_u_error64_fd_res_path0; _j0++) {
            hostrcb[_i0].hcam.u.error64.fd_res_path[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_hostrcb__i0__ioa_cfg0 = 1;
          hostrcb[_i0].ioa_cfg = (struct TYPE_10__ *) malloc(_len_hostrcb__i0__ioa_cfg0*sizeof(struct TYPE_10__));
          for(int _j0 = 0; _j0 < _len_hostrcb__i0__ioa_cfg0; _j0++) {
            hostrcb[_i0].ioa_cfg->sis64 = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = ipr_is_device(hostrcb);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_hostrcb0; _aux++) {
          free(hostrcb[_aux].ioa_cfg);
          }
          free(hostrcb);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_hostrcb0 = 65025;
          struct ipr_hostrcb * hostrcb = (struct ipr_hostrcb *) malloc(_len_hostrcb0*sizeof(struct ipr_hostrcb));
          for(int _i0 = 0; _i0 < _len_hostrcb0; _i0++) {
            hostrcb[_i0].hcam.u.error.fd_res_addr.bus = ((-2 * (next_i()%2)) + 1) * next_i();
        hostrcb[_i0].hcam.u.error.fd_res_addr.target = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_hostrcb__i0__hcam_u_error64_fd_res_path0 = 1;
          hostrcb[_i0].hcam.u.error64.fd_res_path = (int *) malloc(_len_hostrcb__i0__hcam_u_error64_fd_res_path0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_hostrcb__i0__hcam_u_error64_fd_res_path0; _j0++) {
            hostrcb[_i0].hcam.u.error64.fd_res_path[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_hostrcb__i0__ioa_cfg0 = 1;
          hostrcb[_i0].ioa_cfg = (struct TYPE_10__ *) malloc(_len_hostrcb__i0__ioa_cfg0*sizeof(struct TYPE_10__));
          for(int _j0 = 0; _j0 < _len_hostrcb__i0__ioa_cfg0; _j0++) {
            hostrcb[_i0].ioa_cfg->sis64 = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = ipr_is_device(hostrcb);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_hostrcb0; _aux++) {
          free(hostrcb[_aux].ioa_cfg);
          }
          free(hostrcb);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_hostrcb0 = 100;
          struct ipr_hostrcb * hostrcb = (struct ipr_hostrcb *) malloc(_len_hostrcb0*sizeof(struct ipr_hostrcb));
          for(int _i0 = 0; _i0 < _len_hostrcb0; _i0++) {
            hostrcb[_i0].hcam.u.error.fd_res_addr.bus = ((-2 * (next_i()%2)) + 1) * next_i();
        hostrcb[_i0].hcam.u.error.fd_res_addr.target = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_hostrcb__i0__hcam_u_error64_fd_res_path0 = 1;
          hostrcb[_i0].hcam.u.error64.fd_res_path = (int *) malloc(_len_hostrcb__i0__hcam_u_error64_fd_res_path0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_hostrcb__i0__hcam_u_error64_fd_res_path0; _j0++) {
            hostrcb[_i0].hcam.u.error64.fd_res_path[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_hostrcb__i0__ioa_cfg0 = 1;
          hostrcb[_i0].ioa_cfg = (struct TYPE_10__ *) malloc(_len_hostrcb__i0__ioa_cfg0*sizeof(struct TYPE_10__));
          for(int _j0 = 0; _j0 < _len_hostrcb__i0__ioa_cfg0; _j0++) {
            hostrcb[_i0].ioa_cfg->sis64 = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = ipr_is_device(hostrcb);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_hostrcb0; _aux++) {
          free(hostrcb[_aux].ioa_cfg);
          }
          free(hostrcb);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
