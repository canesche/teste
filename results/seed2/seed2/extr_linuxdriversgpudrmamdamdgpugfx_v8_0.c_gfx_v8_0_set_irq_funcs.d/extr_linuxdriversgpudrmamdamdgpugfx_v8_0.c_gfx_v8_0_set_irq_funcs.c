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
typedef  struct TYPE_16__   TYPE_8__ ;
typedef  struct TYPE_15__   TYPE_7__ ;
typedef  struct TYPE_14__   TYPE_6__ ;
typedef  struct TYPE_13__   TYPE_5__ ;
typedef  struct TYPE_12__   TYPE_4__ ;
typedef  struct TYPE_11__   TYPE_3__ ;
typedef  struct TYPE_10__   TYPE_2__ ;
typedef  struct TYPE_9__   TYPE_1__ ;

/* Type definitions */
struct TYPE_15__ {int num_types; int /*<<< orphan*/ * funcs; } ;
struct TYPE_14__ {int num_types; int /*<<< orphan*/ * funcs; } ;
struct TYPE_12__ {int /*<<< orphan*/ * funcs; int /*<<< orphan*/  num_types; } ;
struct TYPE_13__ {TYPE_4__ irq; } ;
struct TYPE_11__ {int num_types; int /*<<< orphan*/ * funcs; } ;
struct TYPE_10__ {int num_types; int /*<<< orphan*/ * funcs; } ;
struct TYPE_9__ {int /*<<< orphan*/ * funcs; int /*<<< orphan*/  num_types; } ;
struct TYPE_16__ {TYPE_7__ sq_irq; TYPE_6__ cp_ecc_error_irq; TYPE_5__ kiq; TYPE_3__ priv_inst_irq; TYPE_2__ priv_reg_irq; TYPE_1__ eop_irq; } ;
struct amdgpu_device {TYPE_8__ gfx; } ;

/* Variables and functions */
 int /*<<< orphan*/  AMDGPU_CP_IRQ_LAST ; 
 int /*<<< orphan*/  AMDGPU_CP_KIQ_IRQ_LAST ; 
 int /*<<< orphan*/  gfx_v8_0_cp_ecc_error_irq_funcs ; 
 int /*<<< orphan*/  gfx_v8_0_eop_irq_funcs ; 
 int /*<<< orphan*/  gfx_v8_0_kiq_irq_funcs ; 
 int /*<<< orphan*/  gfx_v8_0_priv_inst_irq_funcs ; 
 int /*<<< orphan*/  gfx_v8_0_priv_reg_irq_funcs ; 
 int /*<<< orphan*/  gfx_v8_0_sq_irq_funcs ; 

__attribute__((used)) static void gfx_v8_0_set_irq_funcs(struct amdgpu_device *adev)
{
	adev->gfx.eop_irq.num_types = AMDGPU_CP_IRQ_LAST;
	adev->gfx.eop_irq.funcs = &gfx_v8_0_eop_irq_funcs;

	adev->gfx.priv_reg_irq.num_types = 1;
	adev->gfx.priv_reg_irq.funcs = &gfx_v8_0_priv_reg_irq_funcs;

	adev->gfx.priv_inst_irq.num_types = 1;
	adev->gfx.priv_inst_irq.funcs = &gfx_v8_0_priv_inst_irq_funcs;

	adev->gfx.kiq.irq.num_types = AMDGPU_CP_KIQ_IRQ_LAST;
	adev->gfx.kiq.irq.funcs = &gfx_v8_0_kiq_irq_funcs;

	adev->gfx.cp_ecc_error_irq.num_types = 1;
	adev->gfx.cp_ecc_error_irq.funcs = &gfx_v8_0_cp_ecc_error_irq_funcs;

	adev->gfx.sq_irq.num_types = 1;
	adev->gfx.sq_irq.funcs = &gfx_v8_0_sq_irq_funcs;
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
          int _len_adev0 = 1;
          struct amdgpu_device * adev = (struct amdgpu_device *) malloc(_len_adev0*sizeof(struct amdgpu_device));
          for(int _i0 = 0; _i0 < _len_adev0; _i0++) {
            adev[_i0].gfx.sq_irq.num_types = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_adev__i0__gfx_sq_irq_funcs0 = 1;
          adev[_i0].gfx.sq_irq.funcs = (int *) malloc(_len_adev__i0__gfx_sq_irq_funcs0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_adev__i0__gfx_sq_irq_funcs0; _j0++) {
            adev[_i0].gfx.sq_irq.funcs[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        adev[_i0].gfx.cp_ecc_error_irq.num_types = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_adev__i0__gfx_cp_ecc_error_irq_funcs0 = 1;
          adev[_i0].gfx.cp_ecc_error_irq.funcs = (int *) malloc(_len_adev__i0__gfx_cp_ecc_error_irq_funcs0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_adev__i0__gfx_cp_ecc_error_irq_funcs0; _j0++) {
            adev[_i0].gfx.cp_ecc_error_irq.funcs[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_adev__i0__gfx_kiq_irq_funcs0 = 1;
          adev[_i0].gfx.kiq.irq.funcs = (int *) malloc(_len_adev__i0__gfx_kiq_irq_funcs0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_adev__i0__gfx_kiq_irq_funcs0; _j0++) {
            adev[_i0].gfx.kiq.irq.funcs[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        adev[_i0].gfx.kiq.irq.num_types = ((-2 * (next_i()%2)) + 1) * next_i();
        adev[_i0].gfx.priv_inst_irq.num_types = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_adev__i0__gfx_priv_inst_irq_funcs0 = 1;
          adev[_i0].gfx.priv_inst_irq.funcs = (int *) malloc(_len_adev__i0__gfx_priv_inst_irq_funcs0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_adev__i0__gfx_priv_inst_irq_funcs0; _j0++) {
            adev[_i0].gfx.priv_inst_irq.funcs[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        adev[_i0].gfx.priv_reg_irq.num_types = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_adev__i0__gfx_priv_reg_irq_funcs0 = 1;
          adev[_i0].gfx.priv_reg_irq.funcs = (int *) malloc(_len_adev__i0__gfx_priv_reg_irq_funcs0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_adev__i0__gfx_priv_reg_irq_funcs0; _j0++) {
            adev[_i0].gfx.priv_reg_irq.funcs[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_adev__i0__gfx_eop_irq_funcs0 = 1;
          adev[_i0].gfx.eop_irq.funcs = (int *) malloc(_len_adev__i0__gfx_eop_irq_funcs0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_adev__i0__gfx_eop_irq_funcs0; _j0++) {
            adev[_i0].gfx.eop_irq.funcs[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        adev[_i0].gfx.eop_irq.num_types = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          gfx_v8_0_set_irq_funcs(adev);
          free(adev);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_adev0 = 65025;
          struct amdgpu_device * adev = (struct amdgpu_device *) malloc(_len_adev0*sizeof(struct amdgpu_device));
          for(int _i0 = 0; _i0 < _len_adev0; _i0++) {
            adev[_i0].gfx.sq_irq.num_types = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_adev__i0__gfx_sq_irq_funcs0 = 1;
          adev[_i0].gfx.sq_irq.funcs = (int *) malloc(_len_adev__i0__gfx_sq_irq_funcs0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_adev__i0__gfx_sq_irq_funcs0; _j0++) {
            adev[_i0].gfx.sq_irq.funcs[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        adev[_i0].gfx.cp_ecc_error_irq.num_types = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_adev__i0__gfx_cp_ecc_error_irq_funcs0 = 1;
          adev[_i0].gfx.cp_ecc_error_irq.funcs = (int *) malloc(_len_adev__i0__gfx_cp_ecc_error_irq_funcs0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_adev__i0__gfx_cp_ecc_error_irq_funcs0; _j0++) {
            adev[_i0].gfx.cp_ecc_error_irq.funcs[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_adev__i0__gfx_kiq_irq_funcs0 = 1;
          adev[_i0].gfx.kiq.irq.funcs = (int *) malloc(_len_adev__i0__gfx_kiq_irq_funcs0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_adev__i0__gfx_kiq_irq_funcs0; _j0++) {
            adev[_i0].gfx.kiq.irq.funcs[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        adev[_i0].gfx.kiq.irq.num_types = ((-2 * (next_i()%2)) + 1) * next_i();
        adev[_i0].gfx.priv_inst_irq.num_types = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_adev__i0__gfx_priv_inst_irq_funcs0 = 1;
          adev[_i0].gfx.priv_inst_irq.funcs = (int *) malloc(_len_adev__i0__gfx_priv_inst_irq_funcs0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_adev__i0__gfx_priv_inst_irq_funcs0; _j0++) {
            adev[_i0].gfx.priv_inst_irq.funcs[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        adev[_i0].gfx.priv_reg_irq.num_types = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_adev__i0__gfx_priv_reg_irq_funcs0 = 1;
          adev[_i0].gfx.priv_reg_irq.funcs = (int *) malloc(_len_adev__i0__gfx_priv_reg_irq_funcs0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_adev__i0__gfx_priv_reg_irq_funcs0; _j0++) {
            adev[_i0].gfx.priv_reg_irq.funcs[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_adev__i0__gfx_eop_irq_funcs0 = 1;
          adev[_i0].gfx.eop_irq.funcs = (int *) malloc(_len_adev__i0__gfx_eop_irq_funcs0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_adev__i0__gfx_eop_irq_funcs0; _j0++) {
            adev[_i0].gfx.eop_irq.funcs[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        adev[_i0].gfx.eop_irq.num_types = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          gfx_v8_0_set_irq_funcs(adev);
          free(adev);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_adev0 = 100;
          struct amdgpu_device * adev = (struct amdgpu_device *) malloc(_len_adev0*sizeof(struct amdgpu_device));
          for(int _i0 = 0; _i0 < _len_adev0; _i0++) {
            adev[_i0].gfx.sq_irq.num_types = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_adev__i0__gfx_sq_irq_funcs0 = 1;
          adev[_i0].gfx.sq_irq.funcs = (int *) malloc(_len_adev__i0__gfx_sq_irq_funcs0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_adev__i0__gfx_sq_irq_funcs0; _j0++) {
            adev[_i0].gfx.sq_irq.funcs[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        adev[_i0].gfx.cp_ecc_error_irq.num_types = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_adev__i0__gfx_cp_ecc_error_irq_funcs0 = 1;
          adev[_i0].gfx.cp_ecc_error_irq.funcs = (int *) malloc(_len_adev__i0__gfx_cp_ecc_error_irq_funcs0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_adev__i0__gfx_cp_ecc_error_irq_funcs0; _j0++) {
            adev[_i0].gfx.cp_ecc_error_irq.funcs[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_adev__i0__gfx_kiq_irq_funcs0 = 1;
          adev[_i0].gfx.kiq.irq.funcs = (int *) malloc(_len_adev__i0__gfx_kiq_irq_funcs0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_adev__i0__gfx_kiq_irq_funcs0; _j0++) {
            adev[_i0].gfx.kiq.irq.funcs[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        adev[_i0].gfx.kiq.irq.num_types = ((-2 * (next_i()%2)) + 1) * next_i();
        adev[_i0].gfx.priv_inst_irq.num_types = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_adev__i0__gfx_priv_inst_irq_funcs0 = 1;
          adev[_i0].gfx.priv_inst_irq.funcs = (int *) malloc(_len_adev__i0__gfx_priv_inst_irq_funcs0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_adev__i0__gfx_priv_inst_irq_funcs0; _j0++) {
            adev[_i0].gfx.priv_inst_irq.funcs[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        adev[_i0].gfx.priv_reg_irq.num_types = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_adev__i0__gfx_priv_reg_irq_funcs0 = 1;
          adev[_i0].gfx.priv_reg_irq.funcs = (int *) malloc(_len_adev__i0__gfx_priv_reg_irq_funcs0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_adev__i0__gfx_priv_reg_irq_funcs0; _j0++) {
            adev[_i0].gfx.priv_reg_irq.funcs[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_adev__i0__gfx_eop_irq_funcs0 = 1;
          adev[_i0].gfx.eop_irq.funcs = (int *) malloc(_len_adev__i0__gfx_eop_irq_funcs0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_adev__i0__gfx_eop_irq_funcs0; _j0++) {
            adev[_i0].gfx.eop_irq.funcs[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        adev[_i0].gfx.eop_irq.num_types = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          gfx_v8_0_set_irq_funcs(adev);
          free(adev);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
