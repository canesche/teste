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
struct vmx {TYPE_1__* cap; } ;
struct TYPE_2__ {int set; } ;

/* Variables and functions */
 int ENOENT ; 
#define  VM_CAP_HALT_EXIT 130 
#define  VM_CAP_MTRAP_EXIT 129 
#define  VM_CAP_PAUSE_EXIT 128 
 int /*<<< orphan*/  cap_halt_exit ; 
 int /*<<< orphan*/  cap_monitor_trap ; 
 int /*<<< orphan*/  cap_pause_exit ; 

__attribute__((used)) static int
vmx_getcap(void *arg, int vcpu, int type, int *retval)
{
	struct vmx *vmx = arg;
	int vcap;
	int ret;

	ret = ENOENT;

	vcap = vmx->cap[vcpu].set;

	switch (type) {
	case VM_CAP_HALT_EXIT:
		if (cap_halt_exit)
			ret = 0;
		break;
	case VM_CAP_PAUSE_EXIT:
		if (cap_pause_exit)
			ret = 0;
		break;
	case VM_CAP_MTRAP_EXIT:
		if (cap_monitor_trap)
			ret = 0;
		break;
	default:
		break;
	}

	if (ret == 0)
		*retval = (vcap & (1 << type)) ? 1 : 0;

	return (ret);
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
          int type = 100;
          void * arg;
          int _len_retval0 = 1;
          int * retval = (int *) malloc(_len_retval0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_retval0; _i0++) {
            retval[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = vmx_getcap(arg,vcpu,type,retval);
          printf("%d\n", benchRet); 
          free(retval);
        
        break;
    }
    // big-arr
    case 1:
    {
          int vcpu = 255;
          int type = 255;
          void * arg;
          int _len_retval0 = 65025;
          int * retval = (int *) malloc(_len_retval0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_retval0; _i0++) {
            retval[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = vmx_getcap(arg,vcpu,type,retval);
          printf("%d\n", benchRet); 
          free(retval);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int vcpu = 10;
          int type = 10;
          void * arg;
          int _len_retval0 = 100;
          int * retval = (int *) malloc(_len_retval0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_retval0; _i0++) {
            retval[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = vmx_getcap(arg,vcpu,type,retval);
          printf("%d\n", benchRet); 
          free(retval);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
