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
struct fimc_effect {int pat_cb; int pat_cr; void* type; } ;
struct TYPE_4__ {TYPE_1__* colorfx_cbcr; } ;
struct fimc_ctx {TYPE_2__ ctrls; struct fimc_effect effect; } ;
typedef  enum v4l2_colorfx { ____Placeholder_v4l2_colorfx } v4l2_colorfx ;
struct TYPE_3__ {int val; } ;

/* Variables and functions */
 int EINVAL ; 
 void* FIMC_REG_CIIMGEFF_FIN_ARBITRARY ; 
 void* FIMC_REG_CIIMGEFF_FIN_ARTFREEZE ; 
 void* FIMC_REG_CIIMGEFF_FIN_BYPASS ; 
 void* FIMC_REG_CIIMGEFF_FIN_EMBOSSING ; 
 void* FIMC_REG_CIIMGEFF_FIN_NEGATIVE ; 
 void* FIMC_REG_CIIMGEFF_FIN_SILHOUETTE ; 
#define  V4L2_COLORFX_ART_FREEZE 135 
#define  V4L2_COLORFX_BW 134 
#define  V4L2_COLORFX_EMBOSS 133 
#define  V4L2_COLORFX_NEGATIVE 132 
#define  V4L2_COLORFX_NONE 131 
#define  V4L2_COLORFX_SEPIA 130 
#define  V4L2_COLORFX_SET_CBCR 129 
#define  V4L2_COLORFX_SILHOUETTE 128 

__attribute__((used)) static int fimc_set_color_effect(struct fimc_ctx *ctx, enum v4l2_colorfx colorfx)
{
	struct fimc_effect *effect = &ctx->effect;

	switch (colorfx) {
	case V4L2_COLORFX_NONE:
		effect->type = FIMC_REG_CIIMGEFF_FIN_BYPASS;
		break;
	case V4L2_COLORFX_BW:
		effect->type = FIMC_REG_CIIMGEFF_FIN_ARBITRARY;
		effect->pat_cb = 128;
		effect->pat_cr = 128;
		break;
	case V4L2_COLORFX_SEPIA:
		effect->type = FIMC_REG_CIIMGEFF_FIN_ARBITRARY;
		effect->pat_cb = 115;
		effect->pat_cr = 145;
		break;
	case V4L2_COLORFX_NEGATIVE:
		effect->type = FIMC_REG_CIIMGEFF_FIN_NEGATIVE;
		break;
	case V4L2_COLORFX_EMBOSS:
		effect->type = FIMC_REG_CIIMGEFF_FIN_EMBOSSING;
		break;
	case V4L2_COLORFX_ART_FREEZE:
		effect->type = FIMC_REG_CIIMGEFF_FIN_ARTFREEZE;
		break;
	case V4L2_COLORFX_SILHOUETTE:
		effect->type = FIMC_REG_CIIMGEFF_FIN_SILHOUETTE;
		break;
	case V4L2_COLORFX_SET_CBCR:
		effect->type = FIMC_REG_CIIMGEFF_FIN_ARBITRARY;
		effect->pat_cb = ctx->ctrls.colorfx_cbcr->val >> 8;
		effect->pat_cr = ctx->ctrls.colorfx_cbcr->val & 0xff;
		break;
	default:
		return -EINVAL;
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
          enum v4l2_colorfx colorfx = 0;
          int _len_ctx0 = 1;
          struct fimc_ctx * ctx = (struct fimc_ctx *) malloc(_len_ctx0*sizeof(struct fimc_ctx));
          for(int _i0 = 0; _i0 < _len_ctx0; _i0++) {
              int _len_ctx__i0__ctrls_colorfx_cbcr0 = 1;
          ctx[_i0].ctrls.colorfx_cbcr = (struct TYPE_3__ *) malloc(_len_ctx__i0__ctrls_colorfx_cbcr0*sizeof(struct TYPE_3__));
          for(int _j0 = 0; _j0 < _len_ctx__i0__ctrls_colorfx_cbcr0; _j0++) {
            ctx[_i0].ctrls.colorfx_cbcr->val = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        ctx[_i0].effect.pat_cb = ((-2 * (next_i()%2)) + 1) * next_i();
        ctx[_i0].effect.pat_cr = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = fimc_set_color_effect(ctx,colorfx);
          printf("%d\n", benchRet); 
          free(ctx);
        
        break;
    }
    // big-arr
    case 1:
    {
          enum v4l2_colorfx colorfx = 0;
          int _len_ctx0 = 65025;
          struct fimc_ctx * ctx = (struct fimc_ctx *) malloc(_len_ctx0*sizeof(struct fimc_ctx));
          for(int _i0 = 0; _i0 < _len_ctx0; _i0++) {
              int _len_ctx__i0__ctrls_colorfx_cbcr0 = 1;
          ctx[_i0].ctrls.colorfx_cbcr = (struct TYPE_3__ *) malloc(_len_ctx__i0__ctrls_colorfx_cbcr0*sizeof(struct TYPE_3__));
          for(int _j0 = 0; _j0 < _len_ctx__i0__ctrls_colorfx_cbcr0; _j0++) {
            ctx[_i0].ctrls.colorfx_cbcr->val = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        ctx[_i0].effect.pat_cb = ((-2 * (next_i()%2)) + 1) * next_i();
        ctx[_i0].effect.pat_cr = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = fimc_set_color_effect(ctx,colorfx);
          printf("%d\n", benchRet); 
          free(ctx);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          enum v4l2_colorfx colorfx = 0;
          int _len_ctx0 = 100;
          struct fimc_ctx * ctx = (struct fimc_ctx *) malloc(_len_ctx0*sizeof(struct fimc_ctx));
          for(int _i0 = 0; _i0 < _len_ctx0; _i0++) {
              int _len_ctx__i0__ctrls_colorfx_cbcr0 = 1;
          ctx[_i0].ctrls.colorfx_cbcr = (struct TYPE_3__ *) malloc(_len_ctx__i0__ctrls_colorfx_cbcr0*sizeof(struct TYPE_3__));
          for(int _j0 = 0; _j0 < _len_ctx__i0__ctrls_colorfx_cbcr0; _j0++) {
            ctx[_i0].ctrls.colorfx_cbcr->val = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        ctx[_i0].effect.pat_cb = ((-2 * (next_i()%2)) + 1) * next_i();
        ctx[_i0].effect.pat_cr = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = fimc_set_color_effect(ctx,colorfx);
          printf("%d\n", benchRet); 
          free(ctx);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
