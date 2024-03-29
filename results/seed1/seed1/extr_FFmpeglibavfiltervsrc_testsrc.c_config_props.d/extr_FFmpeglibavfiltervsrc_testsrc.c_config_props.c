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
typedef  struct TYPE_7__   TYPE_3__ ;
typedef  struct TYPE_6__   TYPE_2__ ;
typedef  struct TYPE_5__   TYPE_1__ ;

/* Type definitions */
struct TYPE_6__ {int /*<<< orphan*/  time_base; int /*<<< orphan*/  frame_rate; int /*<<< orphan*/  sar; int /*<<< orphan*/  h; int /*<<< orphan*/  w; } ;
typedef  TYPE_2__ TestSourceContext ;
struct TYPE_7__ {int /*<<< orphan*/  time_base; int /*<<< orphan*/  frame_rate; int /*<<< orphan*/  sample_aspect_ratio; int /*<<< orphan*/  h; int /*<<< orphan*/  w; TYPE_1__* src; } ;
struct TYPE_5__ {TYPE_2__* priv; } ;
typedef  TYPE_3__ AVFilterLink ;

/* Variables and functions */

__attribute__((used)) static int config_props(AVFilterLink *outlink)
{
    TestSourceContext *test = outlink->src->priv;

    outlink->w = test->w;
    outlink->h = test->h;
    outlink->sample_aspect_ratio = test->sar;
    outlink->frame_rate = test->frame_rate;
    outlink->time_base  = test->time_base;

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
          int _len_outlink0 = 1;
          struct TYPE_7__ * outlink = (struct TYPE_7__ *) malloc(_len_outlink0*sizeof(struct TYPE_7__));
          for(int _i0 = 0; _i0 < _len_outlink0; _i0++) {
            outlink[_i0].time_base = ((-2 * (next_i()%2)) + 1) * next_i();
        outlink[_i0].frame_rate = ((-2 * (next_i()%2)) + 1) * next_i();
        outlink[_i0].sample_aspect_ratio = ((-2 * (next_i()%2)) + 1) * next_i();
        outlink[_i0].h = ((-2 * (next_i()%2)) + 1) * next_i();
        outlink[_i0].w = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_outlink__i0__src0 = 1;
          outlink[_i0].src = (struct TYPE_5__ *) malloc(_len_outlink__i0__src0*sizeof(struct TYPE_5__));
          for(int _j0 = 0; _j0 < _len_outlink__i0__src0; _j0++) {
              int _len_outlink__i0__src_priv0 = 1;
          outlink[_i0].src->priv = (struct TYPE_6__ *) malloc(_len_outlink__i0__src_priv0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_outlink__i0__src_priv0; _j0++) {
            outlink[_i0].src->priv->time_base = ((-2 * (next_i()%2)) + 1) * next_i();
        outlink[_i0].src->priv->frame_rate = ((-2 * (next_i()%2)) + 1) * next_i();
        outlink[_i0].src->priv->sar = ((-2 * (next_i()%2)) + 1) * next_i();
        outlink[_i0].src->priv->h = ((-2 * (next_i()%2)) + 1) * next_i();
        outlink[_i0].src->priv->w = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int benchRet = config_props(outlink);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_outlink0; _aux++) {
          free(outlink[_aux].src);
          }
          free(outlink);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_outlink0 = 65025;
          struct TYPE_7__ * outlink = (struct TYPE_7__ *) malloc(_len_outlink0*sizeof(struct TYPE_7__));
          for(int _i0 = 0; _i0 < _len_outlink0; _i0++) {
            outlink[_i0].time_base = ((-2 * (next_i()%2)) + 1) * next_i();
        outlink[_i0].frame_rate = ((-2 * (next_i()%2)) + 1) * next_i();
        outlink[_i0].sample_aspect_ratio = ((-2 * (next_i()%2)) + 1) * next_i();
        outlink[_i0].h = ((-2 * (next_i()%2)) + 1) * next_i();
        outlink[_i0].w = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_outlink__i0__src0 = 1;
          outlink[_i0].src = (struct TYPE_5__ *) malloc(_len_outlink__i0__src0*sizeof(struct TYPE_5__));
          for(int _j0 = 0; _j0 < _len_outlink__i0__src0; _j0++) {
              int _len_outlink__i0__src_priv0 = 1;
          outlink[_i0].src->priv = (struct TYPE_6__ *) malloc(_len_outlink__i0__src_priv0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_outlink__i0__src_priv0; _j0++) {
            outlink[_i0].src->priv->time_base = ((-2 * (next_i()%2)) + 1) * next_i();
        outlink[_i0].src->priv->frame_rate = ((-2 * (next_i()%2)) + 1) * next_i();
        outlink[_i0].src->priv->sar = ((-2 * (next_i()%2)) + 1) * next_i();
        outlink[_i0].src->priv->h = ((-2 * (next_i()%2)) + 1) * next_i();
        outlink[_i0].src->priv->w = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int benchRet = config_props(outlink);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_outlink0; _aux++) {
          free(outlink[_aux].src);
          }
          free(outlink);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_outlink0 = 100;
          struct TYPE_7__ * outlink = (struct TYPE_7__ *) malloc(_len_outlink0*sizeof(struct TYPE_7__));
          for(int _i0 = 0; _i0 < _len_outlink0; _i0++) {
            outlink[_i0].time_base = ((-2 * (next_i()%2)) + 1) * next_i();
        outlink[_i0].frame_rate = ((-2 * (next_i()%2)) + 1) * next_i();
        outlink[_i0].sample_aspect_ratio = ((-2 * (next_i()%2)) + 1) * next_i();
        outlink[_i0].h = ((-2 * (next_i()%2)) + 1) * next_i();
        outlink[_i0].w = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_outlink__i0__src0 = 1;
          outlink[_i0].src = (struct TYPE_5__ *) malloc(_len_outlink__i0__src0*sizeof(struct TYPE_5__));
          for(int _j0 = 0; _j0 < _len_outlink__i0__src0; _j0++) {
              int _len_outlink__i0__src_priv0 = 1;
          outlink[_i0].src->priv = (struct TYPE_6__ *) malloc(_len_outlink__i0__src_priv0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_outlink__i0__src_priv0; _j0++) {
            outlink[_i0].src->priv->time_base = ((-2 * (next_i()%2)) + 1) * next_i();
        outlink[_i0].src->priv->frame_rate = ((-2 * (next_i()%2)) + 1) * next_i();
        outlink[_i0].src->priv->sar = ((-2 * (next_i()%2)) + 1) * next_i();
        outlink[_i0].src->priv->h = ((-2 * (next_i()%2)) + 1) * next_i();
        outlink[_i0].src->priv->w = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int benchRet = config_props(outlink);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_outlink0; _aux++) {
          free(outlink[_aux].src);
          }
          free(outlink);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
