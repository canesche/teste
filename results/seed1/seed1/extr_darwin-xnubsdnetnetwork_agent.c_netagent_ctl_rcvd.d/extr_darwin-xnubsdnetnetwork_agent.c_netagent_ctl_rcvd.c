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
typedef  int /*<<< orphan*/  u_int32_t ;
typedef  int /*<<< orphan*/  kern_ctl_ref ;

/* Variables and functions */

__attribute__((used)) static void
netagent_ctl_rcvd(kern_ctl_ref kctlref, u_int32_t unit, void *unitinfo, int flags)
{
#pragma unused(kctlref, unit, unitinfo, flags)
	return;
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
          int kctlref = 100;
          int unit = 100;
          int flags = 100;
          void * unitinfo;
          netagent_ctl_rcvd(kctlref,unit,unitinfo,flags);
        
        break;
    }
    // big-arr
    case 1:
    {
          int kctlref = 255;
          int unit = 255;
          int flags = 255;
          void * unitinfo;
          netagent_ctl_rcvd(kctlref,unit,unitinfo,flags);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int kctlref = 10;
          int unit = 10;
          int flags = 10;
          void * unitinfo;
          netagent_ctl_rcvd(kctlref,unit,unitinfo,flags);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
