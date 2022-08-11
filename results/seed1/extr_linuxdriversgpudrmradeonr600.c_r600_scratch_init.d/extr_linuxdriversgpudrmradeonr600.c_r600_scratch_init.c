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
struct TYPE_2__ {int num_reg; int* free; scalar_t__ reg_base; scalar_t__* reg; } ;
struct radeon_device {TYPE_1__ scratch; } ;

/* Variables and functions */
 scalar_t__ SCRATCH_REG0 ; 

void r600_scratch_init(struct radeon_device *rdev)
{
	int i;

	rdev->scratch.num_reg = 7;
	rdev->scratch.reg_base = SCRATCH_REG0;
	for (i = 0; i < rdev->scratch.num_reg; i++) {
		rdev->scratch.free[i] = true;
		rdev->scratch.reg[i] = rdev->scratch.reg_base + (i * 4);
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
          int _len_rdev0 = 1;
          struct radeon_device * rdev = (struct radeon_device *) malloc(_len_rdev0*sizeof(struct radeon_device));
          for(int _i0 = 0; _i0 < _len_rdev0; _i0++) {
            rdev[_i0].scratch.num_reg = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_rdev__i0__scratch_free0 = 1;
          rdev[_i0].scratch.free = (int *) malloc(_len_rdev__i0__scratch_free0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_rdev__i0__scratch_free0; _j0++) {
            rdev[_i0].scratch.free[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        rdev[_i0].scratch.reg_base = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_rdev__i0__scratch_reg0 = 1;
          rdev[_i0].scratch.reg = (long *) malloc(_len_rdev__i0__scratch_reg0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_rdev__i0__scratch_reg0; _j0++) {
            rdev[_i0].scratch.reg[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          r600_scratch_init(rdev);
          free(rdev);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_rdev0 = 65025;
          struct radeon_device * rdev = (struct radeon_device *) malloc(_len_rdev0*sizeof(struct radeon_device));
          for(int _i0 = 0; _i0 < _len_rdev0; _i0++) {
            rdev[_i0].scratch.num_reg = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_rdev__i0__scratch_free0 = 1;
          rdev[_i0].scratch.free = (int *) malloc(_len_rdev__i0__scratch_free0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_rdev__i0__scratch_free0; _j0++) {
            rdev[_i0].scratch.free[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        rdev[_i0].scratch.reg_base = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_rdev__i0__scratch_reg0 = 1;
          rdev[_i0].scratch.reg = (long *) malloc(_len_rdev__i0__scratch_reg0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_rdev__i0__scratch_reg0; _j0++) {
            rdev[_i0].scratch.reg[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          r600_scratch_init(rdev);
          free(rdev);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_rdev0 = 100;
          struct radeon_device * rdev = (struct radeon_device *) malloc(_len_rdev0*sizeof(struct radeon_device));
          for(int _i0 = 0; _i0 < _len_rdev0; _i0++) {
            rdev[_i0].scratch.num_reg = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_rdev__i0__scratch_free0 = 1;
          rdev[_i0].scratch.free = (int *) malloc(_len_rdev__i0__scratch_free0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_rdev__i0__scratch_free0; _j0++) {
            rdev[_i0].scratch.free[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        rdev[_i0].scratch.reg_base = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_rdev__i0__scratch_reg0 = 1;
          rdev[_i0].scratch.reg = (long *) malloc(_len_rdev__i0__scratch_reg0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_rdev__i0__scratch_reg0; _j0++) {
            rdev[_i0].scratch.reg[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          r600_scratch_init(rdev);
          free(rdev);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
