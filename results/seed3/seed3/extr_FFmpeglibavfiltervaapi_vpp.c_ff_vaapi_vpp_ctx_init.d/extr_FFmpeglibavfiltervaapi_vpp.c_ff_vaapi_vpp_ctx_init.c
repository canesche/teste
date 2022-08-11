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
typedef  struct TYPE_5__   TYPE_2__ ;
typedef  struct TYPE_4__   TYPE_1__ ;

/* Type definitions */
struct TYPE_4__ {int valid_ids; scalar_t__ nb_filter_buffers; void** filter_buffers; void* va_context; void* va_config; } ;
typedef  TYPE_1__ VAAPIVPPContext ;
struct TYPE_5__ {TYPE_1__* priv; } ;
typedef  TYPE_2__ AVFilterContext ;

/* Variables and functions */
 int VAProcFilterCount ; 
 void* VA_INVALID_ID ; 

void ff_vaapi_vpp_ctx_init(AVFilterContext *avctx)
{
    int i;
    VAAPIVPPContext *ctx   = avctx->priv;

    ctx->va_config  = VA_INVALID_ID;
    ctx->va_context = VA_INVALID_ID;
    ctx->valid_ids  = 1;

    for (i = 0; i < VAProcFilterCount; i++)
        ctx->filter_buffers[i] = VA_INVALID_ID;
    ctx->nb_filter_buffers = 0;
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
          int _len_avctx0 = 1;
          struct TYPE_5__ * avctx = (struct TYPE_5__ *) malloc(_len_avctx0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_avctx0; _i0++) {
              int _len_avctx__i0__priv0 = 1;
          avctx[_i0].priv = (struct TYPE_4__ *) malloc(_len_avctx__i0__priv0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_avctx__i0__priv0; _j0++) {
            avctx[_i0].priv->valid_ids = ((-2 * (next_i()%2)) + 1) * next_i();
        avctx[_i0].priv->nb_filter_buffers = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_avctx__i0__priv_filter_buffers0 = 1;
          avctx[_i0].priv->filter_buffers = (void **) malloc(_len_avctx__i0__priv_filter_buffers0*sizeof(void *));
          for(int _j0 = 0; _j0 < _len_avctx__i0__priv_filter_buffers0; _j0++) {
          }
          }
          }
          ff_vaapi_vpp_ctx_init(avctx);
          for(int _aux = 0; _aux < _len_avctx0; _aux++) {
          free(avctx[_aux].priv);
          }
          free(avctx);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_avctx0 = 65025;
          struct TYPE_5__ * avctx = (struct TYPE_5__ *) malloc(_len_avctx0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_avctx0; _i0++) {
              int _len_avctx__i0__priv0 = 1;
          avctx[_i0].priv = (struct TYPE_4__ *) malloc(_len_avctx__i0__priv0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_avctx__i0__priv0; _j0++) {
            avctx[_i0].priv->valid_ids = ((-2 * (next_i()%2)) + 1) * next_i();
        avctx[_i0].priv->nb_filter_buffers = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_avctx__i0__priv_filter_buffers0 = 1;
          avctx[_i0].priv->filter_buffers = (void **) malloc(_len_avctx__i0__priv_filter_buffers0*sizeof(void *));
          for(int _j0 = 0; _j0 < _len_avctx__i0__priv_filter_buffers0; _j0++) {
          }
          }
          }
          ff_vaapi_vpp_ctx_init(avctx);
          for(int _aux = 0; _aux < _len_avctx0; _aux++) {
          free(avctx[_aux].priv);
          }
          free(avctx);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_avctx0 = 100;
          struct TYPE_5__ * avctx = (struct TYPE_5__ *) malloc(_len_avctx0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_avctx0; _i0++) {
              int _len_avctx__i0__priv0 = 1;
          avctx[_i0].priv = (struct TYPE_4__ *) malloc(_len_avctx__i0__priv0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_avctx__i0__priv0; _j0++) {
            avctx[_i0].priv->valid_ids = ((-2 * (next_i()%2)) + 1) * next_i();
        avctx[_i0].priv->nb_filter_buffers = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_avctx__i0__priv_filter_buffers0 = 1;
          avctx[_i0].priv->filter_buffers = (void **) malloc(_len_avctx__i0__priv_filter_buffers0*sizeof(void *));
          for(int _j0 = 0; _j0 < _len_avctx__i0__priv_filter_buffers0; _j0++) {
          }
          }
          }
          ff_vaapi_vpp_ctx_init(avctx);
          for(int _aux = 0; _aux < _len_avctx0; _aux++) {
          free(avctx[_aux].priv);
          }
          free(avctx);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
