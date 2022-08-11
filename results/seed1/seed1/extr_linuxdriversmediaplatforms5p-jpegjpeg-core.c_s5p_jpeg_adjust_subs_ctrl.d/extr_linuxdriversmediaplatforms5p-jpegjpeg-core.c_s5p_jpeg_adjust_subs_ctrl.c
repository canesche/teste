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
typedef  struct TYPE_8__   TYPE_4__ ;
typedef  struct TYPE_7__   TYPE_3__ ;
typedef  struct TYPE_6__   TYPE_2__ ;
typedef  struct TYPE_5__   TYPE_1__ ;

/* Type definitions */
struct TYPE_8__ {TYPE_3__* fmt; } ;
struct s5p_jpeg_ctx {TYPE_4__ out_q; TYPE_2__* jpeg; } ;
struct TYPE_7__ {int subsampling; int /*<<< orphan*/  fourcc; } ;
struct TYPE_6__ {TYPE_1__* variant; } ;
struct TYPE_5__ {int version; } ;

/* Variables and functions */
 int EINVAL ; 
#define  SJPEG_EXYNOS3250 131 
#define  SJPEG_EXYNOS4 130 
#define  SJPEG_EXYNOS5420 129 
#define  SJPEG_S5P 128 
 int V4L2_JPEG_CHROMA_SUBSAMPLING_GRAY ; 
 int /*<<< orphan*/  V4L2_PIX_FMT_GREY ; 
 int /*<<< orphan*/  V4L2_PIX_FMT_RGB32 ; 

__attribute__((used)) static int s5p_jpeg_adjust_subs_ctrl(struct s5p_jpeg_ctx *ctx, int *ctrl_val)
{
	switch (ctx->jpeg->variant->version) {
	case SJPEG_S5P:
		return 0;
	case SJPEG_EXYNOS3250:
	case SJPEG_EXYNOS5420:
		/*
		 * The exynos3250/compatible device can produce JPEG image only
		 * of 4:4:4 subsampling when given RGB32 source image.
		 */
		if (ctx->out_q.fmt->fourcc == V4L2_PIX_FMT_RGB32)
			*ctrl_val = 0;
		break;
	case SJPEG_EXYNOS4:
		/*
		 * The exynos4x12 device requires input raw image fourcc
		 * to be V4L2_PIX_FMT_GREY if gray jpeg format
		 * is to be set.
		 */
		if (ctx->out_q.fmt->fourcc != V4L2_PIX_FMT_GREY &&
		    *ctrl_val == V4L2_JPEG_CHROMA_SUBSAMPLING_GRAY)
			return -EINVAL;
		break;
	}

	/*
	 * The exynos4x12 and exynos3250/compatible devices require resulting
	 * jpeg subsampling not to be lower than the input raw image
	 * subsampling.
	 */
	if (ctx->out_q.fmt->subsampling > *ctrl_val)
		*ctrl_val = ctx->out_q.fmt->subsampling;

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
          int _len_ctx0 = 1;
          struct s5p_jpeg_ctx * ctx = (struct s5p_jpeg_ctx *) malloc(_len_ctx0*sizeof(struct s5p_jpeg_ctx));
          for(int _i0 = 0; _i0 < _len_ctx0; _i0++) {
              int _len_ctx__i0__out_q_fmt0 = 1;
          ctx[_i0].out_q.fmt = (struct TYPE_7__ *) malloc(_len_ctx__i0__out_q_fmt0*sizeof(struct TYPE_7__));
          for(int _j0 = 0; _j0 < _len_ctx__i0__out_q_fmt0; _j0++) {
            ctx[_i0].out_q.fmt->subsampling = ((-2 * (next_i()%2)) + 1) * next_i();
        ctx[_i0].out_q.fmt->fourcc = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ctx__i0__jpeg0 = 1;
          ctx[_i0].jpeg = (struct TYPE_6__ *) malloc(_len_ctx__i0__jpeg0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_ctx__i0__jpeg0; _j0++) {
              int _len_ctx__i0__jpeg_variant0 = 1;
          ctx[_i0].jpeg->variant = (struct TYPE_5__ *) malloc(_len_ctx__i0__jpeg_variant0*sizeof(struct TYPE_5__));
          for(int _j0 = 0; _j0 < _len_ctx__i0__jpeg_variant0; _j0++) {
            ctx[_i0].jpeg->variant->version = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int _len_ctrl_val0 = 1;
          int * ctrl_val = (int *) malloc(_len_ctrl_val0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_ctrl_val0; _i0++) {
            ctrl_val[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = s5p_jpeg_adjust_subs_ctrl(ctx,ctrl_val);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_ctx0; _aux++) {
          free(ctx[_aux].jpeg);
          }
          free(ctx);
          free(ctrl_val);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_ctx0 = 65025;
          struct s5p_jpeg_ctx * ctx = (struct s5p_jpeg_ctx *) malloc(_len_ctx0*sizeof(struct s5p_jpeg_ctx));
          for(int _i0 = 0; _i0 < _len_ctx0; _i0++) {
              int _len_ctx__i0__out_q_fmt0 = 1;
          ctx[_i0].out_q.fmt = (struct TYPE_7__ *) malloc(_len_ctx__i0__out_q_fmt0*sizeof(struct TYPE_7__));
          for(int _j0 = 0; _j0 < _len_ctx__i0__out_q_fmt0; _j0++) {
            ctx[_i0].out_q.fmt->subsampling = ((-2 * (next_i()%2)) + 1) * next_i();
        ctx[_i0].out_q.fmt->fourcc = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ctx__i0__jpeg0 = 1;
          ctx[_i0].jpeg = (struct TYPE_6__ *) malloc(_len_ctx__i0__jpeg0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_ctx__i0__jpeg0; _j0++) {
              int _len_ctx__i0__jpeg_variant0 = 1;
          ctx[_i0].jpeg->variant = (struct TYPE_5__ *) malloc(_len_ctx__i0__jpeg_variant0*sizeof(struct TYPE_5__));
          for(int _j0 = 0; _j0 < _len_ctx__i0__jpeg_variant0; _j0++) {
            ctx[_i0].jpeg->variant->version = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int _len_ctrl_val0 = 65025;
          int * ctrl_val = (int *) malloc(_len_ctrl_val0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_ctrl_val0; _i0++) {
            ctrl_val[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = s5p_jpeg_adjust_subs_ctrl(ctx,ctrl_val);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_ctx0; _aux++) {
          free(ctx[_aux].jpeg);
          }
          free(ctx);
          free(ctrl_val);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_ctx0 = 100;
          struct s5p_jpeg_ctx * ctx = (struct s5p_jpeg_ctx *) malloc(_len_ctx0*sizeof(struct s5p_jpeg_ctx));
          for(int _i0 = 0; _i0 < _len_ctx0; _i0++) {
              int _len_ctx__i0__out_q_fmt0 = 1;
          ctx[_i0].out_q.fmt = (struct TYPE_7__ *) malloc(_len_ctx__i0__out_q_fmt0*sizeof(struct TYPE_7__));
          for(int _j0 = 0; _j0 < _len_ctx__i0__out_q_fmt0; _j0++) {
            ctx[_i0].out_q.fmt->subsampling = ((-2 * (next_i()%2)) + 1) * next_i();
        ctx[_i0].out_q.fmt->fourcc = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ctx__i0__jpeg0 = 1;
          ctx[_i0].jpeg = (struct TYPE_6__ *) malloc(_len_ctx__i0__jpeg0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_ctx__i0__jpeg0; _j0++) {
              int _len_ctx__i0__jpeg_variant0 = 1;
          ctx[_i0].jpeg->variant = (struct TYPE_5__ *) malloc(_len_ctx__i0__jpeg_variant0*sizeof(struct TYPE_5__));
          for(int _j0 = 0; _j0 < _len_ctx__i0__jpeg_variant0; _j0++) {
            ctx[_i0].jpeg->variant->version = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int _len_ctrl_val0 = 100;
          int * ctrl_val = (int *) malloc(_len_ctrl_val0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_ctrl_val0; _i0++) {
            ctrl_val[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = s5p_jpeg_adjust_subs_ctrl(ctx,ctrl_val);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_ctx0; _aux++) {
          free(ctx[_aux].jpeg);
          }
          free(ctx);
          free(ctrl_val);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
