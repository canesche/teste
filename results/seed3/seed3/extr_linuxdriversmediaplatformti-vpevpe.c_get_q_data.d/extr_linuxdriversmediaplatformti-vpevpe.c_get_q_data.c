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
struct vpe_q_data {int dummy; } ;
struct vpe_ctx {struct vpe_q_data* q_data; } ;
typedef  enum v4l2_buf_type { ____Placeholder_v4l2_buf_type } v4l2_buf_type ;

/* Variables and functions */
 size_t Q_DATA_DST ; 
 size_t Q_DATA_SRC ; 
#define  V4L2_BUF_TYPE_VIDEO_CAPTURE 131 
#define  V4L2_BUF_TYPE_VIDEO_CAPTURE_MPLANE 130 
#define  V4L2_BUF_TYPE_VIDEO_OUTPUT 129 
#define  V4L2_BUF_TYPE_VIDEO_OUTPUT_MPLANE 128 

__attribute__((used)) static struct vpe_q_data *get_q_data(struct vpe_ctx *ctx,
				     enum v4l2_buf_type type)
{
	switch (type) {
	case V4L2_BUF_TYPE_VIDEO_OUTPUT_MPLANE:
	case V4L2_BUF_TYPE_VIDEO_OUTPUT:
		return &ctx->q_data[Q_DATA_SRC];
	case V4L2_BUF_TYPE_VIDEO_CAPTURE_MPLANE:
	case V4L2_BUF_TYPE_VIDEO_CAPTURE:
		return &ctx->q_data[Q_DATA_DST];
	default:
		return NULL;
	}
	return NULL;
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
          enum v4l2_buf_type type = 0;
          int _len_ctx0 = 1;
          struct vpe_ctx * ctx = (struct vpe_ctx *) malloc(_len_ctx0*sizeof(struct vpe_ctx));
          for(int _i0 = 0; _i0 < _len_ctx0; _i0++) {
              int _len_ctx__i0__q_data0 = 1;
          ctx[_i0].q_data = (struct vpe_q_data *) malloc(_len_ctx__i0__q_data0*sizeof(struct vpe_q_data));
          for(int _j0 = 0; _j0 < _len_ctx__i0__q_data0; _j0++) {
            ctx[_i0].q_data->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          struct vpe_q_data * benchRet = get_q_data(ctx,type);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_ctx0; _aux++) {
          free(ctx[_aux].q_data);
          }
          free(ctx);
        
        break;
    }
    // big-arr
    case 1:
    {
          enum v4l2_buf_type type = 0;
          int _len_ctx0 = 65025;
          struct vpe_ctx * ctx = (struct vpe_ctx *) malloc(_len_ctx0*sizeof(struct vpe_ctx));
          for(int _i0 = 0; _i0 < _len_ctx0; _i0++) {
              int _len_ctx__i0__q_data0 = 1;
          ctx[_i0].q_data = (struct vpe_q_data *) malloc(_len_ctx__i0__q_data0*sizeof(struct vpe_q_data));
          for(int _j0 = 0; _j0 < _len_ctx__i0__q_data0; _j0++) {
            ctx[_i0].q_data->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          struct vpe_q_data * benchRet = get_q_data(ctx,type);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_ctx0; _aux++) {
          free(ctx[_aux].q_data);
          }
          free(ctx);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          enum v4l2_buf_type type = 0;
          int _len_ctx0 = 100;
          struct vpe_ctx * ctx = (struct vpe_ctx *) malloc(_len_ctx0*sizeof(struct vpe_ctx));
          for(int _i0 = 0; _i0 < _len_ctx0; _i0++) {
              int _len_ctx__i0__q_data0 = 1;
          ctx[_i0].q_data = (struct vpe_q_data *) malloc(_len_ctx__i0__q_data0*sizeof(struct vpe_q_data));
          for(int _j0 = 0; _j0 < _len_ctx__i0__q_data0; _j0++) {
            ctx[_i0].q_data->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          struct vpe_q_data * benchRet = get_q_data(ctx,type);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_ctx0; _aux++) {
          free(ctx[_aux].q_data);
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
