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
typedef  int u32 ;
struct mtk_jpeg_dec_param {int* sampling_w; int* sampling_h; int mcu_w; int pic_w; int mcu_h; int pic_h; int total_mcu; int unit_num; int blk_num; int* blk_comp; int comp_num; int membership; } ;

/* Variables and functions */
 int MTK_JPEG_BLOCK_MAX ; 
 int MTK_JPEG_COMP_MAX ; 

__attribute__((used)) static void mtk_jpeg_calc_mcu(struct mtk_jpeg_dec_param *param)
{
	u32 factor_w, factor_h;
	u32 i, comp, blk;

	factor_w = 2 + param->sampling_w[0];
	factor_h = 2 + param->sampling_h[0];
	param->mcu_w = (param->pic_w + (1 << factor_w) - 1) >> factor_w;
	param->mcu_h = (param->pic_h + (1 << factor_h) - 1) >> factor_h;
	param->total_mcu = param->mcu_w * param->mcu_h;
	param->unit_num = ((param->pic_w + 7) >> 3) * ((param->pic_h + 7) >> 3);
	param->blk_num = 0;
	for (i = 0; i < MTK_JPEG_COMP_MAX; i++) {
		param->blk_comp[i] = 0;
		if (i >= param->comp_num)
			continue;
		param->blk_comp[i] = param->sampling_w[i] *
				     param->sampling_h[i];
		param->blk_num += param->blk_comp[i];
	}

	param->membership = 0;
	for (i = 0, blk = 0, comp = 0; i < MTK_JPEG_BLOCK_MAX; i++) {
		if (i < param->blk_num && comp < param->comp_num) {
			u32 tmp;

			tmp = (0x04 + (comp & 0x3));
			param->membership |= tmp << (i * 3);
			if (++blk == param->blk_comp[comp]) {
				comp++;
				blk = 0;
			}
		} else {
			param->membership |=  7 << (i * 3);
		}
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
          int _len_param0 = 1;
          struct mtk_jpeg_dec_param * param = (struct mtk_jpeg_dec_param *) malloc(_len_param0*sizeof(struct mtk_jpeg_dec_param));
          for(int _i0 = 0; _i0 < _len_param0; _i0++) {
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
        param[_i0].mcu_w = ((-2 * (next_i()%2)) + 1) * next_i();
        param[_i0].pic_w = ((-2 * (next_i()%2)) + 1) * next_i();
        param[_i0].mcu_h = ((-2 * (next_i()%2)) + 1) * next_i();
        param[_i0].pic_h = ((-2 * (next_i()%2)) + 1) * next_i();
        param[_i0].total_mcu = ((-2 * (next_i()%2)) + 1) * next_i();
        param[_i0].unit_num = ((-2 * (next_i()%2)) + 1) * next_i();
        param[_i0].blk_num = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_param__i0__blk_comp0 = 1;
          param[_i0].blk_comp = (int *) malloc(_len_param__i0__blk_comp0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_param__i0__blk_comp0; _j0++) {
            param[_i0].blk_comp[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        param[_i0].comp_num = ((-2 * (next_i()%2)) + 1) * next_i();
        param[_i0].membership = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          mtk_jpeg_calc_mcu(param);
          for(int _aux = 0; _aux < _len_param0; _aux++) {
          free(param[_aux].sampling_w);
          }
          for(int _aux = 0; _aux < _len_param0; _aux++) {
          free(param[_aux].sampling_h);
          }
          for(int _aux = 0; _aux < _len_param0; _aux++) {
          free(param[_aux].blk_comp);
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
        param[_i0].mcu_w = ((-2 * (next_i()%2)) + 1) * next_i();
        param[_i0].pic_w = ((-2 * (next_i()%2)) + 1) * next_i();
        param[_i0].mcu_h = ((-2 * (next_i()%2)) + 1) * next_i();
        param[_i0].pic_h = ((-2 * (next_i()%2)) + 1) * next_i();
        param[_i0].total_mcu = ((-2 * (next_i()%2)) + 1) * next_i();
        param[_i0].unit_num = ((-2 * (next_i()%2)) + 1) * next_i();
        param[_i0].blk_num = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_param__i0__blk_comp0 = 1;
          param[_i0].blk_comp = (int *) malloc(_len_param__i0__blk_comp0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_param__i0__blk_comp0; _j0++) {
            param[_i0].blk_comp[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        param[_i0].comp_num = ((-2 * (next_i()%2)) + 1) * next_i();
        param[_i0].membership = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          mtk_jpeg_calc_mcu(param);
          for(int _aux = 0; _aux < _len_param0; _aux++) {
          free(param[_aux].sampling_w);
          }
          for(int _aux = 0; _aux < _len_param0; _aux++) {
          free(param[_aux].sampling_h);
          }
          for(int _aux = 0; _aux < _len_param0; _aux++) {
          free(param[_aux].blk_comp);
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
        param[_i0].mcu_w = ((-2 * (next_i()%2)) + 1) * next_i();
        param[_i0].pic_w = ((-2 * (next_i()%2)) + 1) * next_i();
        param[_i0].mcu_h = ((-2 * (next_i()%2)) + 1) * next_i();
        param[_i0].pic_h = ((-2 * (next_i()%2)) + 1) * next_i();
        param[_i0].total_mcu = ((-2 * (next_i()%2)) + 1) * next_i();
        param[_i0].unit_num = ((-2 * (next_i()%2)) + 1) * next_i();
        param[_i0].blk_num = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_param__i0__blk_comp0 = 1;
          param[_i0].blk_comp = (int *) malloc(_len_param__i0__blk_comp0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_param__i0__blk_comp0; _j0++) {
            param[_i0].blk_comp[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        param[_i0].comp_num = ((-2 * (next_i()%2)) + 1) * next_i();
        param[_i0].membership = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          mtk_jpeg_calc_mcu(param);
          for(int _aux = 0; _aux < _len_param0; _aux++) {
          free(param[_aux].sampling_w);
          }
          for(int _aux = 0; _aux < _len_param0; _aux++) {
          free(param[_aux].sampling_h);
          }
          for(int _aux = 0; _aux < _len_param0; _aux++) {
          free(param[_aux].blk_comp);
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
