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
typedef  struct TYPE_2__   TYPE_1__ ;

/* Type definitions */
struct dpu_lm_sub_blks {int maxblendstages; int* blendstage_base; } ;
struct dpu_hw_mixer {TYPE_1__* cap; } ;
typedef  enum dpu_stage { ____Placeholder_dpu_stage } dpu_stage ;
struct TYPE_2__ {struct dpu_lm_sub_blks* sblk; } ;

/* Variables and functions */
 int DPU_STAGE_0 ; 
 int DPU_STAGE_BASE ; 
 int EINVAL ; 

__attribute__((used)) static inline int _stage_offset(struct dpu_hw_mixer *ctx, enum dpu_stage stage)
{
	const struct dpu_lm_sub_blks *sblk = ctx->cap->sblk;
	int rc;

	if (stage == DPU_STAGE_BASE)
		rc = -EINVAL;
	else if (stage <= sblk->maxblendstages)
		rc = sblk->blendstage_base[stage - DPU_STAGE_0];
	else
		rc = -EINVAL;

	return rc;
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
          enum dpu_stage stage = 0;
          int _len_ctx0 = 1;
          struct dpu_hw_mixer * ctx = (struct dpu_hw_mixer *) malloc(_len_ctx0*sizeof(struct dpu_hw_mixer));
          for(int _i0 = 0; _i0 < _len_ctx0; _i0++) {
              int _len_ctx__i0__cap0 = 1;
          ctx[_i0].cap = (struct TYPE_2__ *) malloc(_len_ctx__i0__cap0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_ctx__i0__cap0; _j0++) {
              int _len_ctx__i0__cap_sblk0 = 1;
          ctx[_i0].cap->sblk = (struct dpu_lm_sub_blks *) malloc(_len_ctx__i0__cap_sblk0*sizeof(struct dpu_lm_sub_blks));
          for(int _j0 = 0; _j0 < _len_ctx__i0__cap_sblk0; _j0++) {
            ctx[_i0].cap->sblk->maxblendstages = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ctx__i0__cap_sblk_blendstage_base0 = 1;
          ctx[_i0].cap->sblk->blendstage_base = (int *) malloc(_len_ctx__i0__cap_sblk_blendstage_base0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ctx__i0__cap_sblk_blendstage_base0; _j0++) {
            ctx[_i0].cap->sblk->blendstage_base[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          }
          int benchRet = _stage_offset(ctx,stage);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_ctx0; _aux++) {
          free(ctx[_aux].cap);
          }
          free(ctx);
        
        break;
    }
    // big-arr
    case 1:
    {
          enum dpu_stage stage = 0;
          int _len_ctx0 = 65025;
          struct dpu_hw_mixer * ctx = (struct dpu_hw_mixer *) malloc(_len_ctx0*sizeof(struct dpu_hw_mixer));
          for(int _i0 = 0; _i0 < _len_ctx0; _i0++) {
              int _len_ctx__i0__cap0 = 1;
          ctx[_i0].cap = (struct TYPE_2__ *) malloc(_len_ctx__i0__cap0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_ctx__i0__cap0; _j0++) {
              int _len_ctx__i0__cap_sblk0 = 1;
          ctx[_i0].cap->sblk = (struct dpu_lm_sub_blks *) malloc(_len_ctx__i0__cap_sblk0*sizeof(struct dpu_lm_sub_blks));
          for(int _j0 = 0; _j0 < _len_ctx__i0__cap_sblk0; _j0++) {
            ctx[_i0].cap->sblk->maxblendstages = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ctx__i0__cap_sblk_blendstage_base0 = 1;
          ctx[_i0].cap->sblk->blendstage_base = (int *) malloc(_len_ctx__i0__cap_sblk_blendstage_base0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ctx__i0__cap_sblk_blendstage_base0; _j0++) {
            ctx[_i0].cap->sblk->blendstage_base[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          }
          int benchRet = _stage_offset(ctx,stage);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_ctx0; _aux++) {
          free(ctx[_aux].cap);
          }
          free(ctx);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          enum dpu_stage stage = 0;
          int _len_ctx0 = 100;
          struct dpu_hw_mixer * ctx = (struct dpu_hw_mixer *) malloc(_len_ctx0*sizeof(struct dpu_hw_mixer));
          for(int _i0 = 0; _i0 < _len_ctx0; _i0++) {
              int _len_ctx__i0__cap0 = 1;
          ctx[_i0].cap = (struct TYPE_2__ *) malloc(_len_ctx__i0__cap0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_ctx__i0__cap0; _j0++) {
              int _len_ctx__i0__cap_sblk0 = 1;
          ctx[_i0].cap->sblk = (struct dpu_lm_sub_blks *) malloc(_len_ctx__i0__cap_sblk0*sizeof(struct dpu_lm_sub_blks));
          for(int _j0 = 0; _j0 < _len_ctx__i0__cap_sblk0; _j0++) {
            ctx[_i0].cap->sblk->maxblendstages = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ctx__i0__cap_sblk_blendstage_base0 = 1;
          ctx[_i0].cap->sblk->blendstage_base = (int *) malloc(_len_ctx__i0__cap_sblk_blendstage_base0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ctx__i0__cap_sblk_blendstage_base0; _j0++) {
            ctx[_i0].cap->sblk->blendstage_base[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          }
          int benchRet = _stage_offset(ctx,stage);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_ctx0; _aux++) {
          free(ctx[_aux].cap);
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
