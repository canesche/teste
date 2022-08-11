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
struct radeon_device {scalar_t__ family; int pcie_reg_mask; int /*<<< orphan*/ * pciep_wreg; int /*<<< orphan*/ * pciep_rreg; int /*<<< orphan*/ * mc_wreg; int /*<<< orphan*/ * mc_rreg; int /*<<< orphan*/ * pll_wreg; int /*<<< orphan*/ * pll_rreg; } ;

/* Variables and functions */
 scalar_t__ CHIP_BONAIRE ; 
 scalar_t__ CHIP_R420 ; 
 scalar_t__ CHIP_R580 ; 
 scalar_t__ CHIP_R600 ; 
 scalar_t__ CHIP_RS400 ; 
 scalar_t__ CHIP_RS480 ; 
 scalar_t__ CHIP_RS600 ; 
 scalar_t__ CHIP_RS690 ; 
 scalar_t__ CHIP_RS740 ; 
 scalar_t__ CHIP_RS780 ; 
 scalar_t__ CHIP_RS880 ; 
 scalar_t__ CHIP_RV515 ; 
 int /*<<< orphan*/  cik_pciep_rreg ; 
 int /*<<< orphan*/  cik_pciep_wreg ; 
 int /*<<< orphan*/  r100_pll_rreg ; 
 int /*<<< orphan*/  r100_pll_wreg ; 
 int /*<<< orphan*/  r420_mc_rreg ; 
 int /*<<< orphan*/  r420_mc_wreg ; 
 int /*<<< orphan*/  r600_pciep_rreg ; 
 int /*<<< orphan*/  r600_pciep_wreg ; 
 int /*<<< orphan*/  radeon_invalid_rreg ; 
 int /*<<< orphan*/  radeon_invalid_wreg ; 
 int /*<<< orphan*/  rs400_mc_rreg ; 
 int /*<<< orphan*/  rs400_mc_wreg ; 
 int /*<<< orphan*/  rs600_mc_rreg ; 
 int /*<<< orphan*/  rs600_mc_wreg ; 
 int /*<<< orphan*/  rs690_mc_rreg ; 
 int /*<<< orphan*/  rs690_mc_wreg ; 
 int /*<<< orphan*/  rs780_mc_rreg ; 
 int /*<<< orphan*/  rs780_mc_wreg ; 
 int /*<<< orphan*/  rv515_mc_rreg ; 
 int /*<<< orphan*/  rv515_mc_wreg ; 

__attribute__((used)) static void radeon_register_accessor_init(struct radeon_device *rdev)
{
	rdev->mc_rreg = &radeon_invalid_rreg;
	rdev->mc_wreg = &radeon_invalid_wreg;
	rdev->pll_rreg = &radeon_invalid_rreg;
	rdev->pll_wreg = &radeon_invalid_wreg;
	rdev->pciep_rreg = &radeon_invalid_rreg;
	rdev->pciep_wreg = &radeon_invalid_wreg;

	/* Don't change order as we are overridding accessor. */
	if (rdev->family < CHIP_RV515) {
		rdev->pcie_reg_mask = 0xff;
	} else {
		rdev->pcie_reg_mask = 0x7ff;
	}
	/* FIXME: not sure here */
	if (rdev->family <= CHIP_R580) {
		rdev->pll_rreg = &r100_pll_rreg;
		rdev->pll_wreg = &r100_pll_wreg;
	}
	if (rdev->family >= CHIP_R420) {
		rdev->mc_rreg = &r420_mc_rreg;
		rdev->mc_wreg = &r420_mc_wreg;
	}
	if (rdev->family >= CHIP_RV515) {
		rdev->mc_rreg = &rv515_mc_rreg;
		rdev->mc_wreg = &rv515_mc_wreg;
	}
	if (rdev->family == CHIP_RS400 || rdev->family == CHIP_RS480) {
		rdev->mc_rreg = &rs400_mc_rreg;
		rdev->mc_wreg = &rs400_mc_wreg;
	}
	if (rdev->family == CHIP_RS690 || rdev->family == CHIP_RS740) {
		rdev->mc_rreg = &rs690_mc_rreg;
		rdev->mc_wreg = &rs690_mc_wreg;
	}
	if (rdev->family == CHIP_RS600) {
		rdev->mc_rreg = &rs600_mc_rreg;
		rdev->mc_wreg = &rs600_mc_wreg;
	}
	if (rdev->family == CHIP_RS780 || rdev->family == CHIP_RS880) {
		rdev->mc_rreg = &rs780_mc_rreg;
		rdev->mc_wreg = &rs780_mc_wreg;
	}

	if (rdev->family >= CHIP_BONAIRE) {
		rdev->pciep_rreg = &cik_pciep_rreg;
		rdev->pciep_wreg = &cik_pciep_wreg;
	} else if (rdev->family >= CHIP_R600) {
		rdev->pciep_rreg = &r600_pciep_rreg;
		rdev->pciep_wreg = &r600_pciep_wreg;
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
            rdev[_i0].family = ((-2 * (next_i()%2)) + 1) * next_i();
        rdev[_i0].pcie_reg_mask = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_rdev__i0__pciep_wreg0 = 1;
          rdev[_i0].pciep_wreg = (int *) malloc(_len_rdev__i0__pciep_wreg0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_rdev__i0__pciep_wreg0; _j0++) {
            rdev[_i0].pciep_wreg[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_rdev__i0__pciep_rreg0 = 1;
          rdev[_i0].pciep_rreg = (int *) malloc(_len_rdev__i0__pciep_rreg0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_rdev__i0__pciep_rreg0; _j0++) {
            rdev[_i0].pciep_rreg[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_rdev__i0__mc_wreg0 = 1;
          rdev[_i0].mc_wreg = (int *) malloc(_len_rdev__i0__mc_wreg0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_rdev__i0__mc_wreg0; _j0++) {
            rdev[_i0].mc_wreg[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_rdev__i0__mc_rreg0 = 1;
          rdev[_i0].mc_rreg = (int *) malloc(_len_rdev__i0__mc_rreg0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_rdev__i0__mc_rreg0; _j0++) {
            rdev[_i0].mc_rreg[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_rdev__i0__pll_wreg0 = 1;
          rdev[_i0].pll_wreg = (int *) malloc(_len_rdev__i0__pll_wreg0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_rdev__i0__pll_wreg0; _j0++) {
            rdev[_i0].pll_wreg[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_rdev__i0__pll_rreg0 = 1;
          rdev[_i0].pll_rreg = (int *) malloc(_len_rdev__i0__pll_rreg0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_rdev__i0__pll_rreg0; _j0++) {
            rdev[_i0].pll_rreg[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          radeon_register_accessor_init(rdev);
          for(int _aux = 0; _aux < _len_rdev0; _aux++) {
          free(rdev[_aux].pciep_wreg);
          }
          for(int _aux = 0; _aux < _len_rdev0; _aux++) {
          free(rdev[_aux].pciep_rreg);
          }
          for(int _aux = 0; _aux < _len_rdev0; _aux++) {
          free(rdev[_aux].mc_wreg);
          }
          for(int _aux = 0; _aux < _len_rdev0; _aux++) {
          free(rdev[_aux].mc_rreg);
          }
          for(int _aux = 0; _aux < _len_rdev0; _aux++) {
          free(rdev[_aux].pll_wreg);
          }
          for(int _aux = 0; _aux < _len_rdev0; _aux++) {
          free(rdev[_aux].pll_rreg);
          }
          free(rdev);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_rdev0 = 65025;
          struct radeon_device * rdev = (struct radeon_device *) malloc(_len_rdev0*sizeof(struct radeon_device));
          for(int _i0 = 0; _i0 < _len_rdev0; _i0++) {
            rdev[_i0].family = ((-2 * (next_i()%2)) + 1) * next_i();
        rdev[_i0].pcie_reg_mask = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_rdev__i0__pciep_wreg0 = 1;
          rdev[_i0].pciep_wreg = (int *) malloc(_len_rdev__i0__pciep_wreg0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_rdev__i0__pciep_wreg0; _j0++) {
            rdev[_i0].pciep_wreg[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_rdev__i0__pciep_rreg0 = 1;
          rdev[_i0].pciep_rreg = (int *) malloc(_len_rdev__i0__pciep_rreg0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_rdev__i0__pciep_rreg0; _j0++) {
            rdev[_i0].pciep_rreg[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_rdev__i0__mc_wreg0 = 1;
          rdev[_i0].mc_wreg = (int *) malloc(_len_rdev__i0__mc_wreg0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_rdev__i0__mc_wreg0; _j0++) {
            rdev[_i0].mc_wreg[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_rdev__i0__mc_rreg0 = 1;
          rdev[_i0].mc_rreg = (int *) malloc(_len_rdev__i0__mc_rreg0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_rdev__i0__mc_rreg0; _j0++) {
            rdev[_i0].mc_rreg[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_rdev__i0__pll_wreg0 = 1;
          rdev[_i0].pll_wreg = (int *) malloc(_len_rdev__i0__pll_wreg0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_rdev__i0__pll_wreg0; _j0++) {
            rdev[_i0].pll_wreg[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_rdev__i0__pll_rreg0 = 1;
          rdev[_i0].pll_rreg = (int *) malloc(_len_rdev__i0__pll_rreg0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_rdev__i0__pll_rreg0; _j0++) {
            rdev[_i0].pll_rreg[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          radeon_register_accessor_init(rdev);
          for(int _aux = 0; _aux < _len_rdev0; _aux++) {
          free(rdev[_aux].pciep_wreg);
          }
          for(int _aux = 0; _aux < _len_rdev0; _aux++) {
          free(rdev[_aux].pciep_rreg);
          }
          for(int _aux = 0; _aux < _len_rdev0; _aux++) {
          free(rdev[_aux].mc_wreg);
          }
          for(int _aux = 0; _aux < _len_rdev0; _aux++) {
          free(rdev[_aux].mc_rreg);
          }
          for(int _aux = 0; _aux < _len_rdev0; _aux++) {
          free(rdev[_aux].pll_wreg);
          }
          for(int _aux = 0; _aux < _len_rdev0; _aux++) {
          free(rdev[_aux].pll_rreg);
          }
          free(rdev);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_rdev0 = 100;
          struct radeon_device * rdev = (struct radeon_device *) malloc(_len_rdev0*sizeof(struct radeon_device));
          for(int _i0 = 0; _i0 < _len_rdev0; _i0++) {
            rdev[_i0].family = ((-2 * (next_i()%2)) + 1) * next_i();
        rdev[_i0].pcie_reg_mask = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_rdev__i0__pciep_wreg0 = 1;
          rdev[_i0].pciep_wreg = (int *) malloc(_len_rdev__i0__pciep_wreg0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_rdev__i0__pciep_wreg0; _j0++) {
            rdev[_i0].pciep_wreg[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_rdev__i0__pciep_rreg0 = 1;
          rdev[_i0].pciep_rreg = (int *) malloc(_len_rdev__i0__pciep_rreg0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_rdev__i0__pciep_rreg0; _j0++) {
            rdev[_i0].pciep_rreg[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_rdev__i0__mc_wreg0 = 1;
          rdev[_i0].mc_wreg = (int *) malloc(_len_rdev__i0__mc_wreg0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_rdev__i0__mc_wreg0; _j0++) {
            rdev[_i0].mc_wreg[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_rdev__i0__mc_rreg0 = 1;
          rdev[_i0].mc_rreg = (int *) malloc(_len_rdev__i0__mc_rreg0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_rdev__i0__mc_rreg0; _j0++) {
            rdev[_i0].mc_rreg[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_rdev__i0__pll_wreg0 = 1;
          rdev[_i0].pll_wreg = (int *) malloc(_len_rdev__i0__pll_wreg0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_rdev__i0__pll_wreg0; _j0++) {
            rdev[_i0].pll_wreg[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_rdev__i0__pll_rreg0 = 1;
          rdev[_i0].pll_rreg = (int *) malloc(_len_rdev__i0__pll_rreg0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_rdev__i0__pll_rreg0; _j0++) {
            rdev[_i0].pll_rreg[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          radeon_register_accessor_init(rdev);
          for(int _aux = 0; _aux < _len_rdev0; _aux++) {
          free(rdev[_aux].pciep_wreg);
          }
          for(int _aux = 0; _aux < _len_rdev0; _aux++) {
          free(rdev[_aux].pciep_rreg);
          }
          for(int _aux = 0; _aux < _len_rdev0; _aux++) {
          free(rdev[_aux].mc_wreg);
          }
          for(int _aux = 0; _aux < _len_rdev0; _aux++) {
          free(rdev[_aux].mc_rreg);
          }
          for(int _aux = 0; _aux < _len_rdev0; _aux++) {
          free(rdev[_aux].pll_wreg);
          }
          for(int _aux = 0; _aux < _len_rdev0; _aux++) {
          free(rdev[_aux].pll_rreg);
          }
          free(rdev);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
