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
struct nvkm_clk {int pstate; } ;
struct TYPE_5__ {TYPE_1__* device; } ;
struct TYPE_6__ {TYPE_2__ subdev; } ;
struct gk20a_pmu {TYPE_3__ base; } ;
struct TYPE_4__ {struct nvkm_clk* clk; } ;

/* Variables and functions */

__attribute__((used)) static void
gk20a_pmu_dvfs_get_cur_state(struct gk20a_pmu *pmu, int *state)
{
	struct nvkm_clk *clk = pmu->base.subdev.device->clk;

	*state = clk->pstate;
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
          int _len_pmu0 = 1;
          struct gk20a_pmu * pmu = (struct gk20a_pmu *) malloc(_len_pmu0*sizeof(struct gk20a_pmu));
          for(int _i0 = 0; _i0 < _len_pmu0; _i0++) {
              int _len_pmu__i0__base_subdev_device0 = 1;
          pmu[_i0].base.subdev.device = (struct TYPE_4__ *) malloc(_len_pmu__i0__base_subdev_device0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_pmu__i0__base_subdev_device0; _j0++) {
              int _len_pmu__i0__base_subdev_device_clk0 = 1;
          pmu[_i0].base.subdev.device->clk = (struct nvkm_clk *) malloc(_len_pmu__i0__base_subdev_device_clk0*sizeof(struct nvkm_clk));
          for(int _j0 = 0; _j0 < _len_pmu__i0__base_subdev_device_clk0; _j0++) {
            pmu[_i0].base.subdev.device->clk->pstate = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int _len_state0 = 1;
          int * state = (int *) malloc(_len_state0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_state0; _i0++) {
            state[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          gk20a_pmu_dvfs_get_cur_state(pmu,state);
          free(pmu);
          free(state);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_pmu0 = 65025;
          struct gk20a_pmu * pmu = (struct gk20a_pmu *) malloc(_len_pmu0*sizeof(struct gk20a_pmu));
          for(int _i0 = 0; _i0 < _len_pmu0; _i0++) {
              int _len_pmu__i0__base_subdev_device0 = 1;
          pmu[_i0].base.subdev.device = (struct TYPE_4__ *) malloc(_len_pmu__i0__base_subdev_device0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_pmu__i0__base_subdev_device0; _j0++) {
              int _len_pmu__i0__base_subdev_device_clk0 = 1;
          pmu[_i0].base.subdev.device->clk = (struct nvkm_clk *) malloc(_len_pmu__i0__base_subdev_device_clk0*sizeof(struct nvkm_clk));
          for(int _j0 = 0; _j0 < _len_pmu__i0__base_subdev_device_clk0; _j0++) {
            pmu[_i0].base.subdev.device->clk->pstate = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int _len_state0 = 65025;
          int * state = (int *) malloc(_len_state0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_state0; _i0++) {
            state[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          gk20a_pmu_dvfs_get_cur_state(pmu,state);
          free(pmu);
          free(state);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_pmu0 = 100;
          struct gk20a_pmu * pmu = (struct gk20a_pmu *) malloc(_len_pmu0*sizeof(struct gk20a_pmu));
          for(int _i0 = 0; _i0 < _len_pmu0; _i0++) {
              int _len_pmu__i0__base_subdev_device0 = 1;
          pmu[_i0].base.subdev.device = (struct TYPE_4__ *) malloc(_len_pmu__i0__base_subdev_device0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_pmu__i0__base_subdev_device0; _j0++) {
              int _len_pmu__i0__base_subdev_device_clk0 = 1;
          pmu[_i0].base.subdev.device->clk = (struct nvkm_clk *) malloc(_len_pmu__i0__base_subdev_device_clk0*sizeof(struct nvkm_clk));
          for(int _j0 = 0; _j0 < _len_pmu__i0__base_subdev_device_clk0; _j0++) {
            pmu[_i0].base.subdev.device->clk->pstate = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int _len_state0 = 100;
          int * state = (int *) malloc(_len_state0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_state0; _i0++) {
            state[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          gk20a_pmu_dvfs_get_cur_state(pmu,state);
          free(pmu);
          free(state);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
