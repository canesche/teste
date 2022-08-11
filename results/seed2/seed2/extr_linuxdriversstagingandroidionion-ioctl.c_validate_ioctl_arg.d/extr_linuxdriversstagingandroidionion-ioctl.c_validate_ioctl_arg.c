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
struct TYPE_2__ {int /*<<< orphan*/  reserved2; int /*<<< orphan*/  reserved1; int /*<<< orphan*/  reserved0; } ;
union ion_ioctl_arg {TYPE_1__ query; } ;

/* Variables and functions */
 int EINVAL ; 
#define  ION_IOC_HEAP_QUERY 128 

__attribute__((used)) static int validate_ioctl_arg(unsigned int cmd, union ion_ioctl_arg *arg)
{
	switch (cmd) {
	case ION_IOC_HEAP_QUERY:
		if (arg->query.reserved0 ||
		    arg->query.reserved1 ||
		    arg->query.reserved2)
			return -EINVAL;
		break;
	default:
		break;
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
          unsigned int cmd = 100;
          int _len_arg0 = 1;
          union ion_ioctl_arg * arg = (union ion_ioctl_arg *) malloc(_len_arg0*sizeof(union ion_ioctl_arg));
          for(int _i0 = 0; _i0 < _len_arg0; _i0++) {
            arg[_i0] = 0;
          }
          int benchRet = validate_ioctl_arg(cmd,arg);
          printf("%d\n", benchRet); 
          free(arg);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned int cmd = 255;
          int _len_arg0 = 65025;
          union ion_ioctl_arg * arg = (union ion_ioctl_arg *) malloc(_len_arg0*sizeof(union ion_ioctl_arg));
          for(int _i0 = 0; _i0 < _len_arg0; _i0++) {
            arg[_i0] = 0;
          }
          int benchRet = validate_ioctl_arg(cmd,arg);
          printf("%d\n", benchRet); 
          free(arg);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned int cmd = 10;
          int _len_arg0 = 100;
          union ion_ioctl_arg * arg = (union ion_ioctl_arg *) malloc(_len_arg0*sizeof(union ion_ioctl_arg));
          for(int _i0 = 0; _i0 < _len_arg0; _i0++) {
            arg[_i0] = 0;
          }
          int benchRet = validate_ioctl_arg(cmd,arg);
          printf("%d\n", benchRet); 
          free(arg);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
