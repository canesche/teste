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
struct s5p_jpeg_ctx {int /*<<< orphan*/  subsampling; TYPE_2__* jpeg; } ;
struct TYPE_4__ {TYPE_1__* variant; } ;
struct TYPE_3__ {unsigned int version; } ;

/* Variables and functions */
 unsigned int SJPEG_EXYNOS3250 ; 
 unsigned int SJPEG_EXYNOS5420 ; 
 unsigned int SJPEG_EXYNOS5433 ; 
 int /*<<< orphan*/  V4L2_JPEG_CHROMA_SUBSAMPLING_411 ; 
 int /*<<< orphan*/  V4L2_JPEG_CHROMA_SUBSAMPLING_420 ; 
 int /*<<< orphan*/  V4L2_JPEG_CHROMA_SUBSAMPLING_422 ; 
 int /*<<< orphan*/  V4L2_JPEG_CHROMA_SUBSAMPLING_444 ; 
 int /*<<< orphan*/  V4L2_JPEG_CHROMA_SUBSAMPLING_GRAY ; 

__attribute__((used)) static bool s5p_jpeg_subsampling_decode(struct s5p_jpeg_ctx *ctx,
					unsigned int subsampling)
{
	unsigned int version;

	switch (subsampling) {
	case 0x11:
		ctx->subsampling = V4L2_JPEG_CHROMA_SUBSAMPLING_444;
		break;
	case 0x21:
		ctx->subsampling = V4L2_JPEG_CHROMA_SUBSAMPLING_422;
		break;
	case 0x22:
		ctx->subsampling = V4L2_JPEG_CHROMA_SUBSAMPLING_420;
		break;
	case 0x33:
		ctx->subsampling = V4L2_JPEG_CHROMA_SUBSAMPLING_GRAY;
		break;
	case 0x41:
		/*
		 * 4:1:1 subsampling only supported by 3250, 5420, and 5433
		 * variants
		 */
		version = ctx->jpeg->variant->version;
		if (version != SJPEG_EXYNOS3250 &&
		    version != SJPEG_EXYNOS5420 &&
		    version != SJPEG_EXYNOS5433)
			return false;

		ctx->subsampling = V4L2_JPEG_CHROMA_SUBSAMPLING_411;
		break;
	default:
		return false;
	}

	return true;
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
          unsigned int subsampling = 100;
          int _len_ctx0 = 1;
          struct s5p_jpeg_ctx * ctx = (struct s5p_jpeg_ctx *) malloc(_len_ctx0*sizeof(struct s5p_jpeg_ctx));
          for(int _i0 = 0; _i0 < _len_ctx0; _i0++) {
            ctx[_i0].subsampling = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ctx__i0__jpeg0 = 1;
          ctx[_i0].jpeg = (struct TYPE_4__ *) malloc(_len_ctx__i0__jpeg0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_ctx__i0__jpeg0; _j0++) {
              int _len_ctx__i0__jpeg_variant0 = 1;
          ctx[_i0].jpeg->variant = (struct TYPE_3__ *) malloc(_len_ctx__i0__jpeg_variant0*sizeof(struct TYPE_3__));
          for(int _j0 = 0; _j0 < _len_ctx__i0__jpeg_variant0; _j0++) {
            ctx[_i0].jpeg->variant->version = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int benchRet = s5p_jpeg_subsampling_decode(ctx,subsampling);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_ctx0; _aux++) {
          free(ctx[_aux].jpeg);
          }
          free(ctx);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned int subsampling = 255;
          int _len_ctx0 = 65025;
          struct s5p_jpeg_ctx * ctx = (struct s5p_jpeg_ctx *) malloc(_len_ctx0*sizeof(struct s5p_jpeg_ctx));
          for(int _i0 = 0; _i0 < _len_ctx0; _i0++) {
            ctx[_i0].subsampling = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ctx__i0__jpeg0 = 1;
          ctx[_i0].jpeg = (struct TYPE_4__ *) malloc(_len_ctx__i0__jpeg0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_ctx__i0__jpeg0; _j0++) {
              int _len_ctx__i0__jpeg_variant0 = 1;
          ctx[_i0].jpeg->variant = (struct TYPE_3__ *) malloc(_len_ctx__i0__jpeg_variant0*sizeof(struct TYPE_3__));
          for(int _j0 = 0; _j0 < _len_ctx__i0__jpeg_variant0; _j0++) {
            ctx[_i0].jpeg->variant->version = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int benchRet = s5p_jpeg_subsampling_decode(ctx,subsampling);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_ctx0; _aux++) {
          free(ctx[_aux].jpeg);
          }
          free(ctx);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned int subsampling = 10;
          int _len_ctx0 = 100;
          struct s5p_jpeg_ctx * ctx = (struct s5p_jpeg_ctx *) malloc(_len_ctx0*sizeof(struct s5p_jpeg_ctx));
          for(int _i0 = 0; _i0 < _len_ctx0; _i0++) {
            ctx[_i0].subsampling = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ctx__i0__jpeg0 = 1;
          ctx[_i0].jpeg = (struct TYPE_4__ *) malloc(_len_ctx__i0__jpeg0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_ctx__i0__jpeg0; _j0++) {
              int _len_ctx__i0__jpeg_variant0 = 1;
          ctx[_i0].jpeg->variant = (struct TYPE_3__ *) malloc(_len_ctx__i0__jpeg_variant0*sizeof(struct TYPE_3__));
          for(int _j0 = 0; _j0 < _len_ctx__i0__jpeg_variant0; _j0++) {
            ctx[_i0].jpeg->variant->version = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int benchRet = s5p_jpeg_subsampling_decode(ctx,subsampling);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_ctx0; _aux++) {
          free(ctx[_aux].jpeg);
          }
          free(ctx);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
