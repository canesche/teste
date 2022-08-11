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
typedef  struct TYPE_12__   TYPE_6__ ;
typedef  struct TYPE_11__   TYPE_5__ ;
typedef  struct TYPE_10__   TYPE_4__ ;
typedef  struct TYPE_9__   TYPE_3__ ;
typedef  struct TYPE_8__   TYPE_2__ ;
typedef  struct TYPE_7__   TYPE_1__ ;

/* Type definitions */
struct TYPE_11__ {TYPE_1__* vflip; TYPE_6__* hflip; TYPE_4__* rotate; } ;
struct TYPE_9__ {TYPE_2__* vsi; } ;
struct mtk_mdp_ctx {TYPE_5__ ctrls; TYPE_3__ vpu; } ;
struct mdp_config_misc {int /*<<< orphan*/  vflip; int /*<<< orphan*/  hflip; int /*<<< orphan*/  orientation; } ;
struct TYPE_12__ {int /*<<< orphan*/  val; } ;
struct TYPE_10__ {int /*<<< orphan*/  val; } ;
struct TYPE_8__ {struct mdp_config_misc misc; } ;
struct TYPE_7__ {int /*<<< orphan*/  val; } ;

/* Variables and functions */

void mtk_mdp_hw_set_rotation(struct mtk_mdp_ctx *ctx)
{
	struct mdp_config_misc *misc = &ctx->vpu.vsi->misc;

	misc->orientation = ctx->ctrls.rotate->val;
	misc->hflip = ctx->ctrls.hflip->val;
	misc->vflip = ctx->ctrls.vflip->val;
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
          int _len_ctx0 = 1;
          struct mtk_mdp_ctx * ctx = (struct mtk_mdp_ctx *) malloc(_len_ctx0*sizeof(struct mtk_mdp_ctx));
          for(int _i0 = 0; _i0 < _len_ctx0; _i0++) {
              int _len_ctx__i0__ctrls_vflip0 = 1;
          ctx[_i0].ctrls.vflip = (struct TYPE_7__ *) malloc(_len_ctx__i0__ctrls_vflip0*sizeof(struct TYPE_7__));
          for(int _j0 = 0; _j0 < _len_ctx__i0__ctrls_vflip0; _j0++) {
            ctx[_i0].ctrls.vflip->val = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ctx__i0__ctrls_hflip0 = 1;
          ctx[_i0].ctrls.hflip = (struct TYPE_12__ *) malloc(_len_ctx__i0__ctrls_hflip0*sizeof(struct TYPE_12__));
          for(int _j0 = 0; _j0 < _len_ctx__i0__ctrls_hflip0; _j0++) {
            ctx[_i0].ctrls.hflip->val = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ctx__i0__ctrls_rotate0 = 1;
          ctx[_i0].ctrls.rotate = (struct TYPE_10__ *) malloc(_len_ctx__i0__ctrls_rotate0*sizeof(struct TYPE_10__));
          for(int _j0 = 0; _j0 < _len_ctx__i0__ctrls_rotate0; _j0++) {
            ctx[_i0].ctrls.rotate->val = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ctx__i0__vpu_vsi0 = 1;
          ctx[_i0].vpu.vsi = (struct TYPE_8__ *) malloc(_len_ctx__i0__vpu_vsi0*sizeof(struct TYPE_8__));
          for(int _j0 = 0; _j0 < _len_ctx__i0__vpu_vsi0; _j0++) {
            ctx[_i0].vpu.vsi->misc.vflip = ((-2 * (next_i()%2)) + 1) * next_i();
        ctx[_i0].vpu.vsi->misc.hflip = ((-2 * (next_i()%2)) + 1) * next_i();
        ctx[_i0].vpu.vsi->misc.orientation = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          mtk_mdp_hw_set_rotation(ctx);
          free(ctx);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_ctx0 = 65025;
          struct mtk_mdp_ctx * ctx = (struct mtk_mdp_ctx *) malloc(_len_ctx0*sizeof(struct mtk_mdp_ctx));
          for(int _i0 = 0; _i0 < _len_ctx0; _i0++) {
              int _len_ctx__i0__ctrls_vflip0 = 1;
          ctx[_i0].ctrls.vflip = (struct TYPE_7__ *) malloc(_len_ctx__i0__ctrls_vflip0*sizeof(struct TYPE_7__));
          for(int _j0 = 0; _j0 < _len_ctx__i0__ctrls_vflip0; _j0++) {
            ctx[_i0].ctrls.vflip->val = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ctx__i0__ctrls_hflip0 = 1;
          ctx[_i0].ctrls.hflip = (struct TYPE_12__ *) malloc(_len_ctx__i0__ctrls_hflip0*sizeof(struct TYPE_12__));
          for(int _j0 = 0; _j0 < _len_ctx__i0__ctrls_hflip0; _j0++) {
            ctx[_i0].ctrls.hflip->val = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ctx__i0__ctrls_rotate0 = 1;
          ctx[_i0].ctrls.rotate = (struct TYPE_10__ *) malloc(_len_ctx__i0__ctrls_rotate0*sizeof(struct TYPE_10__));
          for(int _j0 = 0; _j0 < _len_ctx__i0__ctrls_rotate0; _j0++) {
            ctx[_i0].ctrls.rotate->val = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ctx__i0__vpu_vsi0 = 1;
          ctx[_i0].vpu.vsi = (struct TYPE_8__ *) malloc(_len_ctx__i0__vpu_vsi0*sizeof(struct TYPE_8__));
          for(int _j0 = 0; _j0 < _len_ctx__i0__vpu_vsi0; _j0++) {
            ctx[_i0].vpu.vsi->misc.vflip = ((-2 * (next_i()%2)) + 1) * next_i();
        ctx[_i0].vpu.vsi->misc.hflip = ((-2 * (next_i()%2)) + 1) * next_i();
        ctx[_i0].vpu.vsi->misc.orientation = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          mtk_mdp_hw_set_rotation(ctx);
          free(ctx);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_ctx0 = 100;
          struct mtk_mdp_ctx * ctx = (struct mtk_mdp_ctx *) malloc(_len_ctx0*sizeof(struct mtk_mdp_ctx));
          for(int _i0 = 0; _i0 < _len_ctx0; _i0++) {
              int _len_ctx__i0__ctrls_vflip0 = 1;
          ctx[_i0].ctrls.vflip = (struct TYPE_7__ *) malloc(_len_ctx__i0__ctrls_vflip0*sizeof(struct TYPE_7__));
          for(int _j0 = 0; _j0 < _len_ctx__i0__ctrls_vflip0; _j0++) {
            ctx[_i0].ctrls.vflip->val = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ctx__i0__ctrls_hflip0 = 1;
          ctx[_i0].ctrls.hflip = (struct TYPE_12__ *) malloc(_len_ctx__i0__ctrls_hflip0*sizeof(struct TYPE_12__));
          for(int _j0 = 0; _j0 < _len_ctx__i0__ctrls_hflip0; _j0++) {
            ctx[_i0].ctrls.hflip->val = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ctx__i0__ctrls_rotate0 = 1;
          ctx[_i0].ctrls.rotate = (struct TYPE_10__ *) malloc(_len_ctx__i0__ctrls_rotate0*sizeof(struct TYPE_10__));
          for(int _j0 = 0; _j0 < _len_ctx__i0__ctrls_rotate0; _j0++) {
            ctx[_i0].ctrls.rotate->val = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ctx__i0__vpu_vsi0 = 1;
          ctx[_i0].vpu.vsi = (struct TYPE_8__ *) malloc(_len_ctx__i0__vpu_vsi0*sizeof(struct TYPE_8__));
          for(int _j0 = 0; _j0 < _len_ctx__i0__vpu_vsi0; _j0++) {
            ctx[_i0].vpu.vsi->misc.vflip = ((-2 * (next_i()%2)) + 1) * next_i();
        ctx[_i0].vpu.vsi->misc.hflip = ((-2 * (next_i()%2)) + 1) * next_i();
        ctx[_i0].vpu.vsi->misc.orientation = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          mtk_mdp_hw_set_rotation(ctx);
          free(ctx);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
