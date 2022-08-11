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
struct ra_ctx {TYPE_1__* swapchain; } ;
struct priv {struct mpvk_ctx* vk; } ;
struct mpvk_ctx {int dummy; } ;
struct TYPE_2__ {struct priv* priv; int /*<<< orphan*/ * fns; } ;

/* Variables and functions */
 int /*<<< orphan*/  vulkan_swapchain ; 

struct mpvk_ctx *ra_vk_ctx_get(struct ra_ctx *ctx)
{
    if (ctx->swapchain->fns != &vulkan_swapchain)
        return NULL;

    struct priv *p = ctx->swapchain->priv;
    return p->vk;
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
          struct ra_ctx * ctx = (struct ra_ctx *) malloc(_len_ctx0*sizeof(struct ra_ctx));
          for(int _i0 = 0; _i0 < _len_ctx0; _i0++) {
              int _len_ctx__i0__swapchain0 = 1;
          ctx[_i0].swapchain = (struct TYPE_2__ *) malloc(_len_ctx__i0__swapchain0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_ctx__i0__swapchain0; _j0++) {
              int _len_ctx__i0__swapchain_priv0 = 1;
          ctx[_i0].swapchain->priv = (struct priv *) malloc(_len_ctx__i0__swapchain_priv0*sizeof(struct priv));
          for(int _j0 = 0; _j0 < _len_ctx__i0__swapchain_priv0; _j0++) {
              int _len_ctx__i0__swapchain_priv_vk0 = 1;
          ctx[_i0].swapchain->priv->vk = (struct mpvk_ctx *) malloc(_len_ctx__i0__swapchain_priv_vk0*sizeof(struct mpvk_ctx));
          for(int _j0 = 0; _j0 < _len_ctx__i0__swapchain_priv_vk0; _j0++) {
            ctx[_i0].swapchain->priv->vk->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_ctx__i0__swapchain_fns0 = 1;
          ctx[_i0].swapchain->fns = (int *) malloc(_len_ctx__i0__swapchain_fns0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ctx__i0__swapchain_fns0; _j0++) {
            ctx[_i0].swapchain->fns[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          struct mpvk_ctx * benchRet = ra_vk_ctx_get(ctx);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_ctx0; _aux++) {
          free(ctx[_aux].swapchain);
          }
          free(ctx);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_ctx0 = 65025;
          struct ra_ctx * ctx = (struct ra_ctx *) malloc(_len_ctx0*sizeof(struct ra_ctx));
          for(int _i0 = 0; _i0 < _len_ctx0; _i0++) {
              int _len_ctx__i0__swapchain0 = 1;
          ctx[_i0].swapchain = (struct TYPE_2__ *) malloc(_len_ctx__i0__swapchain0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_ctx__i0__swapchain0; _j0++) {
              int _len_ctx__i0__swapchain_priv0 = 1;
          ctx[_i0].swapchain->priv = (struct priv *) malloc(_len_ctx__i0__swapchain_priv0*sizeof(struct priv));
          for(int _j0 = 0; _j0 < _len_ctx__i0__swapchain_priv0; _j0++) {
              int _len_ctx__i0__swapchain_priv_vk0 = 1;
          ctx[_i0].swapchain->priv->vk = (struct mpvk_ctx *) malloc(_len_ctx__i0__swapchain_priv_vk0*sizeof(struct mpvk_ctx));
          for(int _j0 = 0; _j0 < _len_ctx__i0__swapchain_priv_vk0; _j0++) {
            ctx[_i0].swapchain->priv->vk->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_ctx__i0__swapchain_fns0 = 1;
          ctx[_i0].swapchain->fns = (int *) malloc(_len_ctx__i0__swapchain_fns0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ctx__i0__swapchain_fns0; _j0++) {
            ctx[_i0].swapchain->fns[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          struct mpvk_ctx * benchRet = ra_vk_ctx_get(ctx);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_ctx0; _aux++) {
          free(ctx[_aux].swapchain);
          }
          free(ctx);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_ctx0 = 100;
          struct ra_ctx * ctx = (struct ra_ctx *) malloc(_len_ctx0*sizeof(struct ra_ctx));
          for(int _i0 = 0; _i0 < _len_ctx0; _i0++) {
              int _len_ctx__i0__swapchain0 = 1;
          ctx[_i0].swapchain = (struct TYPE_2__ *) malloc(_len_ctx__i0__swapchain0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_ctx__i0__swapchain0; _j0++) {
              int _len_ctx__i0__swapchain_priv0 = 1;
          ctx[_i0].swapchain->priv = (struct priv *) malloc(_len_ctx__i0__swapchain_priv0*sizeof(struct priv));
          for(int _j0 = 0; _j0 < _len_ctx__i0__swapchain_priv0; _j0++) {
              int _len_ctx__i0__swapchain_priv_vk0 = 1;
          ctx[_i0].swapchain->priv->vk = (struct mpvk_ctx *) malloc(_len_ctx__i0__swapchain_priv_vk0*sizeof(struct mpvk_ctx));
          for(int _j0 = 0; _j0 < _len_ctx__i0__swapchain_priv_vk0; _j0++) {
            ctx[_i0].swapchain->priv->vk->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_ctx__i0__swapchain_fns0 = 1;
          ctx[_i0].swapchain->fns = (int *) malloc(_len_ctx__i0__swapchain_fns0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ctx__i0__swapchain_fns0; _j0++) {
            ctx[_i0].swapchain->fns[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          struct mpvk_ctx * benchRet = ra_vk_ctx_get(ctx);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_ctx0; _aux++) {
          free(ctx[_aux].swapchain);
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
