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
typedef  struct TYPE_9__   TYPE_4__ ;
typedef  struct TYPE_8__   TYPE_3__ ;
typedef  struct TYPE_7__   TYPE_2__ ;
typedef  struct TYPE_6__   TYPE_1__ ;

/* Type definitions */
struct TYPE_8__ {scalar_t__ ref_frame; int dc_coeff; } ;
typedef  TYPE_3__ VP56RefDc ;
typedef  scalar_t__ VP56Frame ;
struct TYPE_9__ {int* idct_scantable; size_t* above_block_idx; int** prev_dc; int** block_coeff; int dequant_dc; TYPE_2__* avctx; TYPE_3__* left_block; TYPE_3__* above_blocks; } ;
typedef  TYPE_4__ VP56Context ;
struct TYPE_7__ {TYPE_1__* codec; } ;
struct TYPE_6__ {scalar_t__ id; } ;

/* Variables and functions */
 scalar_t__ AV_CODEC_ID_VP5 ; 
 size_t* ff_vp56_b2p ; 
 size_t* ff_vp56_b6to4 ; 

__attribute__((used)) static void vp56_add_predictors_dc(VP56Context *s, VP56Frame ref_frame)
{
    int idx = s->idct_scantable[0];
    int b;

    for (b=0; b<6; b++) {
        VP56RefDc *ab = &s->above_blocks[s->above_block_idx[b]];
        VP56RefDc *lb = &s->left_block[ff_vp56_b6to4[b]];
        int count = 0;
        int dc = 0;
        int i;

        if (ref_frame == lb->ref_frame) {
            dc += lb->dc_coeff;
            count++;
        }
        if (ref_frame == ab->ref_frame) {
            dc += ab->dc_coeff;
            count++;
        }
        if (s->avctx->codec->id == AV_CODEC_ID_VP5)
            for (i=0; i<2; i++)
                if (count < 2 && ref_frame == ab[-1+2*i].ref_frame) {
                    dc += ab[-1+2*i].dc_coeff;
                    count++;
                }
        if (count == 0)
            dc = s->prev_dc[ff_vp56_b2p[b]][ref_frame];
        else if (count == 2)
            dc /= 2;

        s->block_coeff[b][idx] += dc;
        s->prev_dc[ff_vp56_b2p[b]][ref_frame] = s->block_coeff[b][idx];
        ab->dc_coeff = s->block_coeff[b][idx];
        ab->ref_frame = ref_frame;
        lb->dc_coeff = s->block_coeff[b][idx];
        lb->ref_frame = ref_frame;
        s->block_coeff[b][idx] *= s->dequant_dc;
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
          long ref_frame = 100;
          int _len_s0 = 1;
          struct TYPE_9__ * s = (struct TYPE_9__ *) malloc(_len_s0*sizeof(struct TYPE_9__));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
              int _len_s__i0__idct_scantable0 = 1;
          s[_i0].idct_scantable = (int *) malloc(_len_s__i0__idct_scantable0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_s__i0__idct_scantable0; _j0++) {
            s[_i0].idct_scantable[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_s__i0__above_block_idx0 = 1;
          s[_i0].above_block_idx = (unsigned long *) malloc(_len_s__i0__above_block_idx0*sizeof(unsigned long));
          for(int _j0 = 0; _j0 < _len_s__i0__above_block_idx0; _j0++) {
            s[_i0].above_block_idx[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_s__i0__prev_dc0 = 1;
          s[_i0].prev_dc = (int **) malloc(_len_s__i0__prev_dc0*sizeof(int *));
          for(int _j0 = 0; _j0 < _len_s__i0__prev_dc0; _j0++) {
            int _len_s__i0__prev_dc1 = 1;
            s[_i0].prev_dc[_j0] = (int *) malloc(_len_s__i0__prev_dc1*sizeof(int));
            for(int _j1 = 0; _j1 < _len_s__i0__prev_dc1; _j1++) {
              s[_i0].prev_dc[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_s__i0__block_coeff0 = 1;
          s[_i0].block_coeff = (int **) malloc(_len_s__i0__block_coeff0*sizeof(int *));
          for(int _j0 = 0; _j0 < _len_s__i0__block_coeff0; _j0++) {
            int _len_s__i0__block_coeff1 = 1;
            s[_i0].block_coeff[_j0] = (int *) malloc(_len_s__i0__block_coeff1*sizeof(int));
            for(int _j1 = 0; _j1 < _len_s__i0__block_coeff1; _j1++) {
              s[_i0].block_coeff[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
        s[_i0].dequant_dc = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_s__i0__avctx0 = 1;
          s[_i0].avctx = (struct TYPE_7__ *) malloc(_len_s__i0__avctx0*sizeof(struct TYPE_7__));
          for(int _j0 = 0; _j0 < _len_s__i0__avctx0; _j0++) {
              int _len_s__i0__avctx_codec0 = 1;
          s[_i0].avctx->codec = (struct TYPE_6__ *) malloc(_len_s__i0__avctx_codec0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_s__i0__avctx_codec0; _j0++) {
            s[_i0].avctx->codec->id = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_s__i0__left_block0 = 1;
          s[_i0].left_block = (struct TYPE_8__ *) malloc(_len_s__i0__left_block0*sizeof(struct TYPE_8__));
          for(int _j0 = 0; _j0 < _len_s__i0__left_block0; _j0++) {
            s[_i0].left_block->ref_frame = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].left_block->dc_coeff = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_s__i0__above_blocks0 = 1;
          s[_i0].above_blocks = (struct TYPE_8__ *) malloc(_len_s__i0__above_blocks0*sizeof(struct TYPE_8__));
          for(int _j0 = 0; _j0 < _len_s__i0__above_blocks0; _j0++) {
            s[_i0].above_blocks->ref_frame = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].above_blocks->dc_coeff = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          vp56_add_predictors_dc(s,ref_frame);
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(s[_aux].idct_scantable);
          }
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(s[_aux].above_block_idx);
          }
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(*(s[_aux].prev_dc));
        free(s[_aux].prev_dc);
          }
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(*(s[_aux].block_coeff));
        free(s[_aux].block_coeff);
          }
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(s[_aux].avctx);
          }
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(s[_aux].left_block);
          }
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(s[_aux].above_blocks);
          }
          free(s);
        
        break;
    }
    // big-arr
    case 1:
    {
          long ref_frame = 255;
          int _len_s0 = 65025;
          struct TYPE_9__ * s = (struct TYPE_9__ *) malloc(_len_s0*sizeof(struct TYPE_9__));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
              int _len_s__i0__idct_scantable0 = 1;
          s[_i0].idct_scantable = (int *) malloc(_len_s__i0__idct_scantable0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_s__i0__idct_scantable0; _j0++) {
            s[_i0].idct_scantable[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_s__i0__above_block_idx0 = 1;
          s[_i0].above_block_idx = (unsigned long *) malloc(_len_s__i0__above_block_idx0*sizeof(unsigned long));
          for(int _j0 = 0; _j0 < _len_s__i0__above_block_idx0; _j0++) {
            s[_i0].above_block_idx[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_s__i0__prev_dc0 = 1;
          s[_i0].prev_dc = (int **) malloc(_len_s__i0__prev_dc0*sizeof(int *));
          for(int _j0 = 0; _j0 < _len_s__i0__prev_dc0; _j0++) {
            int _len_s__i0__prev_dc1 = 1;
            s[_i0].prev_dc[_j0] = (int *) malloc(_len_s__i0__prev_dc1*sizeof(int));
            for(int _j1 = 0; _j1 < _len_s__i0__prev_dc1; _j1++) {
              s[_i0].prev_dc[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_s__i0__block_coeff0 = 1;
          s[_i0].block_coeff = (int **) malloc(_len_s__i0__block_coeff0*sizeof(int *));
          for(int _j0 = 0; _j0 < _len_s__i0__block_coeff0; _j0++) {
            int _len_s__i0__block_coeff1 = 1;
            s[_i0].block_coeff[_j0] = (int *) malloc(_len_s__i0__block_coeff1*sizeof(int));
            for(int _j1 = 0; _j1 < _len_s__i0__block_coeff1; _j1++) {
              s[_i0].block_coeff[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
        s[_i0].dequant_dc = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_s__i0__avctx0 = 1;
          s[_i0].avctx = (struct TYPE_7__ *) malloc(_len_s__i0__avctx0*sizeof(struct TYPE_7__));
          for(int _j0 = 0; _j0 < _len_s__i0__avctx0; _j0++) {
              int _len_s__i0__avctx_codec0 = 1;
          s[_i0].avctx->codec = (struct TYPE_6__ *) malloc(_len_s__i0__avctx_codec0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_s__i0__avctx_codec0; _j0++) {
            s[_i0].avctx->codec->id = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_s__i0__left_block0 = 1;
          s[_i0].left_block = (struct TYPE_8__ *) malloc(_len_s__i0__left_block0*sizeof(struct TYPE_8__));
          for(int _j0 = 0; _j0 < _len_s__i0__left_block0; _j0++) {
            s[_i0].left_block->ref_frame = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].left_block->dc_coeff = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_s__i0__above_blocks0 = 1;
          s[_i0].above_blocks = (struct TYPE_8__ *) malloc(_len_s__i0__above_blocks0*sizeof(struct TYPE_8__));
          for(int _j0 = 0; _j0 < _len_s__i0__above_blocks0; _j0++) {
            s[_i0].above_blocks->ref_frame = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].above_blocks->dc_coeff = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          vp56_add_predictors_dc(s,ref_frame);
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(s[_aux].idct_scantable);
          }
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(s[_aux].above_block_idx);
          }
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(*(s[_aux].prev_dc));
        free(s[_aux].prev_dc);
          }
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(*(s[_aux].block_coeff));
        free(s[_aux].block_coeff);
          }
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(s[_aux].avctx);
          }
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(s[_aux].left_block);
          }
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(s[_aux].above_blocks);
          }
          free(s);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          long ref_frame = 10;
          int _len_s0 = 100;
          struct TYPE_9__ * s = (struct TYPE_9__ *) malloc(_len_s0*sizeof(struct TYPE_9__));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
              int _len_s__i0__idct_scantable0 = 1;
          s[_i0].idct_scantable = (int *) malloc(_len_s__i0__idct_scantable0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_s__i0__idct_scantable0; _j0++) {
            s[_i0].idct_scantable[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_s__i0__above_block_idx0 = 1;
          s[_i0].above_block_idx = (unsigned long *) malloc(_len_s__i0__above_block_idx0*sizeof(unsigned long));
          for(int _j0 = 0; _j0 < _len_s__i0__above_block_idx0; _j0++) {
            s[_i0].above_block_idx[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_s__i0__prev_dc0 = 1;
          s[_i0].prev_dc = (int **) malloc(_len_s__i0__prev_dc0*sizeof(int *));
          for(int _j0 = 0; _j0 < _len_s__i0__prev_dc0; _j0++) {
            int _len_s__i0__prev_dc1 = 1;
            s[_i0].prev_dc[_j0] = (int *) malloc(_len_s__i0__prev_dc1*sizeof(int));
            for(int _j1 = 0; _j1 < _len_s__i0__prev_dc1; _j1++) {
              s[_i0].prev_dc[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_s__i0__block_coeff0 = 1;
          s[_i0].block_coeff = (int **) malloc(_len_s__i0__block_coeff0*sizeof(int *));
          for(int _j0 = 0; _j0 < _len_s__i0__block_coeff0; _j0++) {
            int _len_s__i0__block_coeff1 = 1;
            s[_i0].block_coeff[_j0] = (int *) malloc(_len_s__i0__block_coeff1*sizeof(int));
            for(int _j1 = 0; _j1 < _len_s__i0__block_coeff1; _j1++) {
              s[_i0].block_coeff[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
        s[_i0].dequant_dc = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_s__i0__avctx0 = 1;
          s[_i0].avctx = (struct TYPE_7__ *) malloc(_len_s__i0__avctx0*sizeof(struct TYPE_7__));
          for(int _j0 = 0; _j0 < _len_s__i0__avctx0; _j0++) {
              int _len_s__i0__avctx_codec0 = 1;
          s[_i0].avctx->codec = (struct TYPE_6__ *) malloc(_len_s__i0__avctx_codec0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_s__i0__avctx_codec0; _j0++) {
            s[_i0].avctx->codec->id = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_s__i0__left_block0 = 1;
          s[_i0].left_block = (struct TYPE_8__ *) malloc(_len_s__i0__left_block0*sizeof(struct TYPE_8__));
          for(int _j0 = 0; _j0 < _len_s__i0__left_block0; _j0++) {
            s[_i0].left_block->ref_frame = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].left_block->dc_coeff = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_s__i0__above_blocks0 = 1;
          s[_i0].above_blocks = (struct TYPE_8__ *) malloc(_len_s__i0__above_blocks0*sizeof(struct TYPE_8__));
          for(int _j0 = 0; _j0 < _len_s__i0__above_blocks0; _j0++) {
            s[_i0].above_blocks->ref_frame = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].above_blocks->dc_coeff = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          vp56_add_predictors_dc(s,ref_frame);
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(s[_aux].idct_scantable);
          }
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(s[_aux].above_block_idx);
          }
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(*(s[_aux].prev_dc));
        free(s[_aux].prev_dc);
          }
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(*(s[_aux].block_coeff));
        free(s[_aux].block_coeff);
          }
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(s[_aux].avctx);
          }
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(s[_aux].left_block);
          }
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(s[_aux].above_blocks);
          }
          free(s);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
