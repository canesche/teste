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

/* Variables and functions */
#define  NFSERR_ADMIN_REVOKED 133 
#define  NFSERR_BAD_STATEID 132 
#define  NFSERR_EXPIRED 131 
#define  NFSERR_GRACE 130 
#define  NFSERR_OLD_STATEID 129 
#define  NFSERR_STALE_STATEID 128 

int
nfs_mount_state_error_delegation_lost(int error)
{
	switch (error) {
	case NFSERR_STALE_STATEID:
	case NFSERR_ADMIN_REVOKED:
	case NFSERR_EXPIRED:
	case NFSERR_OLD_STATEID:
	case NFSERR_BAD_STATEID:
	case NFSERR_GRACE: /* ugh! (stupid) RFC 3530 specifically disallows CLAIM_DELEGATE_CUR during grace period? */
		return (1);
	}
	return (0);
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
          int error = 100;
          int benchRet = nfs_mount_state_error_delegation_lost(error);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          int error = 255;
          int benchRet = nfs_mount_state_error_delegation_lost(error);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int error = 10;
          int benchRet = nfs_mount_state_error_delegation_lost(error);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
