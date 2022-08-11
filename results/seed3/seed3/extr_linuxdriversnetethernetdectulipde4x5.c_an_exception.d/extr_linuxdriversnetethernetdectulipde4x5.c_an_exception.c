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
typedef  int u_short ;
struct TYPE_2__ {scalar_t__ sub_system_id; scalar_t__ sub_vendor_id; } ;
struct de4x5_private {TYPE_1__ srom; } ;

/* Variables and functions */

__attribute__((used)) static int
an_exception(struct de4x5_private *lp)
{
    if ((*(u_short *)lp->srom.sub_vendor_id == 0x00c0) &&
	(*(u_short *)lp->srom.sub_system_id == 0x95e0)) {
	return -1;
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
          int _len_lp0 = 1;
          struct de4x5_private * lp = (struct de4x5_private *) malloc(_len_lp0*sizeof(struct de4x5_private));
          for(int _i0 = 0; _i0 < _len_lp0; _i0++) {
            lp[_i0].srom.sub_system_id = ((-2 * (next_i()%2)) + 1) * next_i();
        lp[_i0].srom.sub_vendor_id = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = an_exception(lp);
          printf("%d\n", benchRet); 
          free(lp);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_lp0 = 65025;
          struct de4x5_private * lp = (struct de4x5_private *) malloc(_len_lp0*sizeof(struct de4x5_private));
          for(int _i0 = 0; _i0 < _len_lp0; _i0++) {
            lp[_i0].srom.sub_system_id = ((-2 * (next_i()%2)) + 1) * next_i();
        lp[_i0].srom.sub_vendor_id = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = an_exception(lp);
          printf("%d\n", benchRet); 
          free(lp);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_lp0 = 100;
          struct de4x5_private * lp = (struct de4x5_private *) malloc(_len_lp0*sizeof(struct de4x5_private));
          for(int _i0 = 0; _i0 < _len_lp0; _i0++) {
            lp[_i0].srom.sub_system_id = ((-2 * (next_i()%2)) + 1) * next_i();
        lp[_i0].srom.sub_vendor_id = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = an_exception(lp);
          printf("%d\n", benchRet); 
          free(lp);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
