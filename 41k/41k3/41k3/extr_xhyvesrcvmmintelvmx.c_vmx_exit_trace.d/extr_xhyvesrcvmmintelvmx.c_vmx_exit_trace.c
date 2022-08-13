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
typedef  int /*<<< orphan*/  uint64_t ;
typedef  int /*<<< orphan*/  uint32_t ;
struct vmx {int dummy; } ;

/* Variables and functions */

__attribute__((used)) static __inline void
vmx_exit_trace(struct vmx *vmx, int vcpu, uint64_t rip, uint32_t exit_reason,
	       int handled)
{
#ifdef XHYVE_CONFIG_TRACE
	VCPU_CTR3(vmx->vm, vcpu, "%s %s vmexit at 0x%0llx",
		 handled ? "handled" : "unhandled",
		 exit_reason_to_str((int) exit_reason), rip);
#else
	(void) vmx;
	(void) vcpu;
	(void) rip;
	(void) exit_reason;
	(void) handled;
#endif
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
          int vcpu = 100;
          int rip = 100;
          int exit_reason = 100;
          int handled = 100;
          int _len_vmx0 = 1;
          struct vmx * vmx = (struct vmx *) malloc(_len_vmx0*sizeof(struct vmx));
          for(int _i0 = 0; _i0 < _len_vmx0; _i0++) {
            vmx[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          vmx_exit_trace(vmx,vcpu,rip,exit_reason,handled);
          free(vmx);
        
        break;
    }
    // big-arr
    case 1:
    {
          int vcpu = 255;
          int rip = 255;
          int exit_reason = 255;
          int handled = 255;
          int _len_vmx0 = 65025;
          struct vmx * vmx = (struct vmx *) malloc(_len_vmx0*sizeof(struct vmx));
          for(int _i0 = 0; _i0 < _len_vmx0; _i0++) {
            vmx[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          vmx_exit_trace(vmx,vcpu,rip,exit_reason,handled);
          free(vmx);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int vcpu = 10;
          int rip = 10;
          int exit_reason = 10;
          int handled = 10;
          int _len_vmx0 = 100;
          struct vmx * vmx = (struct vmx *) malloc(_len_vmx0*sizeof(struct vmx));
          for(int _i0 = 0; _i0 < _len_vmx0; _i0++) {
            vmx[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          vmx_exit_trace(vmx,vcpu,rip,exit_reason,handled);
          free(vmx);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
