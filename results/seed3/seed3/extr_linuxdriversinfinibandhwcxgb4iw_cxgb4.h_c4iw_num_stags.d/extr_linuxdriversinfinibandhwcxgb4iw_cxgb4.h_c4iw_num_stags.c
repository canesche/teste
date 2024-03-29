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
typedef  struct TYPE_6__   TYPE_3__ ;
typedef  struct TYPE_5__   TYPE_2__ ;
typedef  struct TYPE_4__   TYPE_1__ ;

/* Type definitions */
struct TYPE_6__ {TYPE_2__* vr; } ;
struct c4iw_rdev {TYPE_3__ lldi; } ;
struct TYPE_4__ {int size; } ;
struct TYPE_5__ {TYPE_1__ stag; } ;

/* Variables and functions */

__attribute__((used)) static inline int c4iw_num_stags(struct c4iw_rdev *rdev)
{
	return (int)(rdev->lldi.vr->stag.size >> 5);
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
          int _len_rdev0 = 1;
          struct c4iw_rdev * rdev = (struct c4iw_rdev *) malloc(_len_rdev0*sizeof(struct c4iw_rdev));
          for(int _i0 = 0; _i0 < _len_rdev0; _i0++) {
              int _len_rdev__i0__lldi_vr0 = 1;
          rdev[_i0].lldi.vr = (struct TYPE_5__ *) malloc(_len_rdev__i0__lldi_vr0*sizeof(struct TYPE_5__));
          for(int _j0 = 0; _j0 < _len_rdev__i0__lldi_vr0; _j0++) {
            rdev[_i0].lldi.vr->stag.size = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = c4iw_num_stags(rdev);
          printf("%d\n", benchRet); 
          free(rdev);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_rdev0 = 65025;
          struct c4iw_rdev * rdev = (struct c4iw_rdev *) malloc(_len_rdev0*sizeof(struct c4iw_rdev));
          for(int _i0 = 0; _i0 < _len_rdev0; _i0++) {
              int _len_rdev__i0__lldi_vr0 = 1;
          rdev[_i0].lldi.vr = (struct TYPE_5__ *) malloc(_len_rdev__i0__lldi_vr0*sizeof(struct TYPE_5__));
          for(int _j0 = 0; _j0 < _len_rdev__i0__lldi_vr0; _j0++) {
            rdev[_i0].lldi.vr->stag.size = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = c4iw_num_stags(rdev);
          printf("%d\n", benchRet); 
          free(rdev);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_rdev0 = 100;
          struct c4iw_rdev * rdev = (struct c4iw_rdev *) malloc(_len_rdev0*sizeof(struct c4iw_rdev));
          for(int _i0 = 0; _i0 < _len_rdev0; _i0++) {
              int _len_rdev__i0__lldi_vr0 = 1;
          rdev[_i0].lldi.vr = (struct TYPE_5__ *) malloc(_len_rdev__i0__lldi_vr0*sizeof(struct TYPE_5__));
          for(int _j0 = 0; _j0 < _len_rdev__i0__lldi_vr0; _j0++) {
            rdev[_i0].lldi.vr->stag.size = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = c4iw_num_stags(rdev);
          printf("%d\n", benchRet); 
          free(rdev);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
