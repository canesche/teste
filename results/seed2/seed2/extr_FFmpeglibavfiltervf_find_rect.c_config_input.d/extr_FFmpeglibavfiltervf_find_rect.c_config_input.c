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
struct TYPE_9__ {TYPE_2__* priv; } ;
struct TYPE_8__ {scalar_t__ w; scalar_t__ h; TYPE_4__* dst; } ;
struct TYPE_7__ {scalar_t__ xmax; scalar_t__ ymax; TYPE_1__* obj_frame; } ;
struct TYPE_6__ {scalar_t__ width; scalar_t__ height; } ;
typedef  TYPE_2__ FOCContext ;
typedef  TYPE_3__ AVFilterLink ;
typedef  TYPE_4__ AVFilterContext ;

/* Variables and functions */

__attribute__((used)) static int config_input(AVFilterLink *inlink)
{
    AVFilterContext *ctx = inlink->dst;
    FOCContext *foc = ctx->priv;

    if (foc->xmax <= 0)
        foc->xmax = inlink->w - foc->obj_frame->width;
    if (foc->ymax <= 0)
        foc->ymax = inlink->h - foc->obj_frame->height;

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
          int _len_inlink0 = 1;
          struct TYPE_8__ * inlink = (struct TYPE_8__ *) malloc(_len_inlink0*sizeof(struct TYPE_8__));
          for(int _i0 = 0; _i0 < _len_inlink0; _i0++) {
            inlink[_i0].w = ((-2 * (next_i()%2)) + 1) * next_i();
        inlink[_i0].h = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_inlink__i0__dst0 = 1;
          inlink[_i0].dst = (struct TYPE_9__ *) malloc(_len_inlink__i0__dst0*sizeof(struct TYPE_9__));
          for(int _j0 = 0; _j0 < _len_inlink__i0__dst0; _j0++) {
              int _len_inlink__i0__dst_priv0 = 1;
          inlink[_i0].dst->priv = (struct TYPE_7__ *) malloc(_len_inlink__i0__dst_priv0*sizeof(struct TYPE_7__));
          for(int _j0 = 0; _j0 < _len_inlink__i0__dst_priv0; _j0++) {
            inlink[_i0].dst->priv->xmax = ((-2 * (next_i()%2)) + 1) * next_i();
        inlink[_i0].dst->priv->ymax = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_inlink__i0__dst_priv_obj_frame0 = 1;
          inlink[_i0].dst->priv->obj_frame = (struct TYPE_6__ *) malloc(_len_inlink__i0__dst_priv_obj_frame0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_inlink__i0__dst_priv_obj_frame0; _j0++) {
            inlink[_i0].dst->priv->obj_frame->width = ((-2 * (next_i()%2)) + 1) * next_i();
        inlink[_i0].dst->priv->obj_frame->height = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          }
          int benchRet = config_input(inlink);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_inlink0; _aux++) {
          free(inlink[_aux].dst);
          }
          free(inlink);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_inlink0 = 65025;
          struct TYPE_8__ * inlink = (struct TYPE_8__ *) malloc(_len_inlink0*sizeof(struct TYPE_8__));
          for(int _i0 = 0; _i0 < _len_inlink0; _i0++) {
            inlink[_i0].w = ((-2 * (next_i()%2)) + 1) * next_i();
        inlink[_i0].h = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_inlink__i0__dst0 = 1;
          inlink[_i0].dst = (struct TYPE_9__ *) malloc(_len_inlink__i0__dst0*sizeof(struct TYPE_9__));
          for(int _j0 = 0; _j0 < _len_inlink__i0__dst0; _j0++) {
              int _len_inlink__i0__dst_priv0 = 1;
          inlink[_i0].dst->priv = (struct TYPE_7__ *) malloc(_len_inlink__i0__dst_priv0*sizeof(struct TYPE_7__));
          for(int _j0 = 0; _j0 < _len_inlink__i0__dst_priv0; _j0++) {
            inlink[_i0].dst->priv->xmax = ((-2 * (next_i()%2)) + 1) * next_i();
        inlink[_i0].dst->priv->ymax = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_inlink__i0__dst_priv_obj_frame0 = 1;
          inlink[_i0].dst->priv->obj_frame = (struct TYPE_6__ *) malloc(_len_inlink__i0__dst_priv_obj_frame0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_inlink__i0__dst_priv_obj_frame0; _j0++) {
            inlink[_i0].dst->priv->obj_frame->width = ((-2 * (next_i()%2)) + 1) * next_i();
        inlink[_i0].dst->priv->obj_frame->height = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          }
          int benchRet = config_input(inlink);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_inlink0; _aux++) {
          free(inlink[_aux].dst);
          }
          free(inlink);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_inlink0 = 100;
          struct TYPE_8__ * inlink = (struct TYPE_8__ *) malloc(_len_inlink0*sizeof(struct TYPE_8__));
          for(int _i0 = 0; _i0 < _len_inlink0; _i0++) {
            inlink[_i0].w = ((-2 * (next_i()%2)) + 1) * next_i();
        inlink[_i0].h = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_inlink__i0__dst0 = 1;
          inlink[_i0].dst = (struct TYPE_9__ *) malloc(_len_inlink__i0__dst0*sizeof(struct TYPE_9__));
          for(int _j0 = 0; _j0 < _len_inlink__i0__dst0; _j0++) {
              int _len_inlink__i0__dst_priv0 = 1;
          inlink[_i0].dst->priv = (struct TYPE_7__ *) malloc(_len_inlink__i0__dst_priv0*sizeof(struct TYPE_7__));
          for(int _j0 = 0; _j0 < _len_inlink__i0__dst_priv0; _j0++) {
            inlink[_i0].dst->priv->xmax = ((-2 * (next_i()%2)) + 1) * next_i();
        inlink[_i0].dst->priv->ymax = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_inlink__i0__dst_priv_obj_frame0 = 1;
          inlink[_i0].dst->priv->obj_frame = (struct TYPE_6__ *) malloc(_len_inlink__i0__dst_priv_obj_frame0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_inlink__i0__dst_priv_obj_frame0; _j0++) {
            inlink[_i0].dst->priv->obj_frame->width = ((-2 * (next_i()%2)) + 1) * next_i();
        inlink[_i0].dst->priv->obj_frame->height = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          }
          int benchRet = config_input(inlink);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_inlink0; _aux++) {
          free(inlink[_aux].dst);
          }
          free(inlink);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
