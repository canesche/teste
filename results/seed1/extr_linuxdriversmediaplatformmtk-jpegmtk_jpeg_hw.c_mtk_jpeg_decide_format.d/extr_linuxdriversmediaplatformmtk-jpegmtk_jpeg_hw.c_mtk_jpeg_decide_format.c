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
struct mtk_jpeg_dec_param {int src_color; int* sampling_w; int* sampling_h; int uv_brz_w; void* dst_fourcc; } ;

/* Variables and functions */
#define  MTK_JPEG_COLOR_400 134 
#define  MTK_JPEG_COLOR_420 133 
#define  MTK_JPEG_COLOR_422 132 
#define  MTK_JPEG_COLOR_422V 131 
#define  MTK_JPEG_COLOR_422VX2 130 
#define  MTK_JPEG_COLOR_422X2 129 
#define  MTK_JPEG_COLOR_444 128 
 void* V4L2_PIX_FMT_GREY ; 
 void* V4L2_PIX_FMT_YUV420M ; 
 void* V4L2_PIX_FMT_YUV422M ; 

__attribute__((used)) static int mtk_jpeg_decide_format(struct mtk_jpeg_dec_param *param)
{
	param->src_color = (param->sampling_w[0] << 20) |
			   (param->sampling_h[0] << 16) |
			   (param->sampling_w[1] << 12) |
			   (param->sampling_h[1] << 8) |
			   (param->sampling_w[2] << 4) |
			   (param->sampling_h[2]);

	param->uv_brz_w = 0;
	switch (param->src_color) {
	case MTK_JPEG_COLOR_444:
		param->uv_brz_w = 1;
		param->dst_fourcc = V4L2_PIX_FMT_YUV422M;
		break;
	case MTK_JPEG_COLOR_422X2:
	case MTK_JPEG_COLOR_422:
		param->dst_fourcc = V4L2_PIX_FMT_YUV422M;
		break;
	case MTK_JPEG_COLOR_422V:
	case MTK_JPEG_COLOR_422VX2:
		param->uv_brz_w = 1;
		param->dst_fourcc = V4L2_PIX_FMT_YUV420M;
		break;
	case MTK_JPEG_COLOR_420:
		param->dst_fourcc = V4L2_PIX_FMT_YUV420M;
		break;
	case MTK_JPEG_COLOR_400:
		param->dst_fourcc = V4L2_PIX_FMT_GREY;
		break;
	default:
		param->dst_fourcc = 0;
		return -1;
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
          int _len_param0 = 1;
          struct mtk_jpeg_dec_param * param = (struct mtk_jpeg_dec_param *) malloc(_len_param0*sizeof(struct mtk_jpeg_dec_param));
          for(int _i0 = 0; _i0 < _len_param0; _i0++) {
            param[_i0].src_color = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_param__i0__sampling_w0 = 1;
          param[_i0].sampling_w = (int *) malloc(_len_param__i0__sampling_w0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_param__i0__sampling_w0; _j0++) {
            param[_i0].sampling_w[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_param__i0__sampling_h0 = 1;
          param[_i0].sampling_h = (int *) malloc(_len_param__i0__sampling_h0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_param__i0__sampling_h0; _j0++) {
            param[_i0].sampling_h[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        param[_i0].uv_brz_w = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = mtk_jpeg_decide_format(param);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_param0; _aux++) {
          free(param[_aux].sampling_w);
          }
          for(int _aux = 0; _aux < _len_param0; _aux++) {
          free(param[_aux].sampling_h);
          }
          free(param);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_param0 = 65025;
          struct mtk_jpeg_dec_param * param = (struct mtk_jpeg_dec_param *) malloc(_len_param0*sizeof(struct mtk_jpeg_dec_param));
          for(int _i0 = 0; _i0 < _len_param0; _i0++) {
            param[_i0].src_color = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_param__i0__sampling_w0 = 1;
          param[_i0].sampling_w = (int *) malloc(_len_param__i0__sampling_w0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_param__i0__sampling_w0; _j0++) {
            param[_i0].sampling_w[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_param__i0__sampling_h0 = 1;
          param[_i0].sampling_h = (int *) malloc(_len_param__i0__sampling_h0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_param__i0__sampling_h0; _j0++) {
            param[_i0].sampling_h[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        param[_i0].uv_brz_w = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = mtk_jpeg_decide_format(param);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_param0; _aux++) {
          free(param[_aux].sampling_w);
          }
          for(int _aux = 0; _aux < _len_param0; _aux++) {
          free(param[_aux].sampling_h);
          }
          free(param);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_param0 = 100;
          struct mtk_jpeg_dec_param * param = (struct mtk_jpeg_dec_param *) malloc(_len_param0*sizeof(struct mtk_jpeg_dec_param));
          for(int _i0 = 0; _i0 < _len_param0; _i0++) {
            param[_i0].src_color = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_param__i0__sampling_w0 = 1;
          param[_i0].sampling_w = (int *) malloc(_len_param__i0__sampling_w0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_param__i0__sampling_w0; _j0++) {
            param[_i0].sampling_w[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_param__i0__sampling_h0 = 1;
          param[_i0].sampling_h = (int *) malloc(_len_param__i0__sampling_h0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_param__i0__sampling_h0; _j0++) {
            param[_i0].sampling_h[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        param[_i0].uv_brz_w = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = mtk_jpeg_decide_format(param);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_param0; _aux++) {
          free(param[_aux].sampling_w);
          }
          for(int _aux = 0; _aux < _len_param0; _aux++) {
          free(param[_aux].sampling_h);
          }
          free(param);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
