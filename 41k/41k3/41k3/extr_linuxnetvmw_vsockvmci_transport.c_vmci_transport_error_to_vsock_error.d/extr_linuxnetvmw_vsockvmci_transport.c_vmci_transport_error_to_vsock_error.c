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
typedef  int s32 ;

/* Variables and functions */
 int EADDRINUSE ; 
 int EHOSTUNREACH ; 
 int EINVAL ; 
 int ENOBUFS ; 
 int ENOMEM ; 
 int EPERM ; 
#define  VMCI_ERROR_ALREADY_EXISTS 134 
#define  VMCI_ERROR_DUPLICATE_ENTRY 133 
#define  VMCI_ERROR_INVALID_ARGS 132 
#define  VMCI_ERROR_INVALID_RESOURCE 131 
#define  VMCI_ERROR_NO_ACCESS 130 
#define  VMCI_ERROR_NO_MEM 129 
#define  VMCI_ERROR_NO_RESOURCES 128 

__attribute__((used)) static s32 vmci_transport_error_to_vsock_error(s32 vmci_error)
{
	switch (vmci_error) {
	case VMCI_ERROR_NO_MEM:
		return -ENOMEM;
	case VMCI_ERROR_DUPLICATE_ENTRY:
	case VMCI_ERROR_ALREADY_EXISTS:
		return -EADDRINUSE;
	case VMCI_ERROR_NO_ACCESS:
		return -EPERM;
	case VMCI_ERROR_NO_RESOURCES:
		return -ENOBUFS;
	case VMCI_ERROR_INVALID_RESOURCE:
		return -EHOSTUNREACH;
	case VMCI_ERROR_INVALID_ARGS:
	default:
		break;
	}
	return -EINVAL;
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
          int vmci_error = 100;
          int benchRet = vmci_transport_error_to_vsock_error(vmci_error);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          int vmci_error = 255;
          int benchRet = vmci_transport_error_to_vsock_error(vmci_error);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int vmci_error = 10;
          int benchRet = vmci_transport_error_to_vsock_error(vmci_error);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
