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
typedef  struct TYPE_4__   TYPE_2__ ;
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
struct TYPE_3__ {int enable; } ;
struct TYPE_4__ {int overlap_only; int global_alpha; int global_gain; } ;
struct mpcc {int mpcc_id; int dpp_id; TYPE_1__ sm_cfg; TYPE_2__ blnd_cfg; int /*<<< orphan*/ * mpcc_bot; } ;

/* Variables and functions */

__attribute__((used)) static void mpc1_init_mpcc(struct mpcc *mpcc, int mpcc_inst)
{
	mpcc->mpcc_id = mpcc_inst;
	mpcc->dpp_id = 0xf;
	mpcc->mpcc_bot = NULL;
	mpcc->blnd_cfg.overlap_only = false;
	mpcc->blnd_cfg.global_alpha = 0xff;
	mpcc->blnd_cfg.global_gain = 0xff;
	mpcc->sm_cfg.enable = false;
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
          int mpcc_inst = 100;
          int _len_mpcc0 = 1;
          struct mpcc * mpcc = (struct mpcc *) malloc(_len_mpcc0*sizeof(struct mpcc));
          for(int _i0 = 0; _i0 < _len_mpcc0; _i0++) {
            mpcc[_i0].mpcc_id = ((-2 * (next_i()%2)) + 1) * next_i();
        mpcc[_i0].dpp_id = ((-2 * (next_i()%2)) + 1) * next_i();
        mpcc[_i0].sm_cfg.enable = ((-2 * (next_i()%2)) + 1) * next_i();
        mpcc[_i0].blnd_cfg.overlap_only = ((-2 * (next_i()%2)) + 1) * next_i();
        mpcc[_i0].blnd_cfg.global_alpha = ((-2 * (next_i()%2)) + 1) * next_i();
        mpcc[_i0].blnd_cfg.global_gain = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_mpcc__i0__mpcc_bot0 = 1;
          mpcc[_i0].mpcc_bot = (int *) malloc(_len_mpcc__i0__mpcc_bot0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_mpcc__i0__mpcc_bot0; _j0++) {
            mpcc[_i0].mpcc_bot[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          mpc1_init_mpcc(mpcc,mpcc_inst);
          for(int _aux = 0; _aux < _len_mpcc0; _aux++) {
          free(mpcc[_aux].mpcc_bot);
          }
          free(mpcc);
        
        break;
    }
    // big-arr
    case 1:
    {
          int mpcc_inst = 255;
          int _len_mpcc0 = 65025;
          struct mpcc * mpcc = (struct mpcc *) malloc(_len_mpcc0*sizeof(struct mpcc));
          for(int _i0 = 0; _i0 < _len_mpcc0; _i0++) {
            mpcc[_i0].mpcc_id = ((-2 * (next_i()%2)) + 1) * next_i();
        mpcc[_i0].dpp_id = ((-2 * (next_i()%2)) + 1) * next_i();
        mpcc[_i0].sm_cfg.enable = ((-2 * (next_i()%2)) + 1) * next_i();
        mpcc[_i0].blnd_cfg.overlap_only = ((-2 * (next_i()%2)) + 1) * next_i();
        mpcc[_i0].blnd_cfg.global_alpha = ((-2 * (next_i()%2)) + 1) * next_i();
        mpcc[_i0].blnd_cfg.global_gain = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_mpcc__i0__mpcc_bot0 = 1;
          mpcc[_i0].mpcc_bot = (int *) malloc(_len_mpcc__i0__mpcc_bot0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_mpcc__i0__mpcc_bot0; _j0++) {
            mpcc[_i0].mpcc_bot[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          mpc1_init_mpcc(mpcc,mpcc_inst);
          for(int _aux = 0; _aux < _len_mpcc0; _aux++) {
          free(mpcc[_aux].mpcc_bot);
          }
          free(mpcc);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int mpcc_inst = 10;
          int _len_mpcc0 = 100;
          struct mpcc * mpcc = (struct mpcc *) malloc(_len_mpcc0*sizeof(struct mpcc));
          for(int _i0 = 0; _i0 < _len_mpcc0; _i0++) {
            mpcc[_i0].mpcc_id = ((-2 * (next_i()%2)) + 1) * next_i();
        mpcc[_i0].dpp_id = ((-2 * (next_i()%2)) + 1) * next_i();
        mpcc[_i0].sm_cfg.enable = ((-2 * (next_i()%2)) + 1) * next_i();
        mpcc[_i0].blnd_cfg.overlap_only = ((-2 * (next_i()%2)) + 1) * next_i();
        mpcc[_i0].blnd_cfg.global_alpha = ((-2 * (next_i()%2)) + 1) * next_i();
        mpcc[_i0].blnd_cfg.global_gain = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_mpcc__i0__mpcc_bot0 = 1;
          mpcc[_i0].mpcc_bot = (int *) malloc(_len_mpcc__i0__mpcc_bot0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_mpcc__i0__mpcc_bot0; _j0++) {
            mpcc[_i0].mpcc_bot[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          mpc1_init_mpcc(mpcc,mpcc_inst);
          for(int _aux = 0; _aux < _len_mpcc0; _aux++) {
          free(mpcc[_aux].mpcc_bot);
          }
          free(mpcc);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
