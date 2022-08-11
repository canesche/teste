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
struct TYPE_9__ {TYPE_1__** inputs; TYPE_2__* priv; } ;
struct TYPE_8__ {int channels; int /*<<< orphan*/  channel_layout; int /*<<< orphan*/  time_base; int /*<<< orphan*/  sample_rate; TYPE_4__* src; } ;
struct TYPE_7__ {int one2many; int nb_channels; int nb_coef_channels; int /*<<< orphan*/  pts; } ;
struct TYPE_6__ {int channels; int /*<<< orphan*/  channel_layout; int /*<<< orphan*/  time_base; int /*<<< orphan*/  sample_rate; } ;
typedef  TYPE_2__ AudioFIRContext ;
typedef  TYPE_3__ AVFilterLink ;
typedef  TYPE_4__ AVFilterContext ;

/* Variables and functions */
 int /*<<< orphan*/  AV_NOPTS_VALUE ; 

__attribute__((used)) static int config_output(AVFilterLink *outlink)
{
    AVFilterContext *ctx = outlink->src;
    AudioFIRContext *s = ctx->priv;

    s->one2many = ctx->inputs[1]->channels == 1;
    outlink->sample_rate = ctx->inputs[0]->sample_rate;
    outlink->time_base   = ctx->inputs[0]->time_base;
    outlink->channel_layout = ctx->inputs[0]->channel_layout;
    outlink->channels = ctx->inputs[0]->channels;

    s->nb_channels = outlink->channels;
    s->nb_coef_channels = ctx->inputs[1]->channels;
    s->pts = AV_NOPTS_VALUE;

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
          struct TYPE_8__ * outlink = (struct TYPE_8__ *) malloc(_len_outlink0*sizeof(struct TYPE_8__));
          for(int _i0 = 0; _i0 < _len_outlink0; _i0++) {
            outlink[_i0].channels = ((-2 * (next_i()%2)) + 1) * next_i();
        outlink[_i0].channel_layout = ((-2 * (next_i()%2)) + 1) * next_i();
        outlink[_i0].time_base = ((-2 * (next_i()%2)) + 1) * next_i();
        outlink[_i0].sample_rate = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_outlink__i0__src0 = 1;
          outlink[_i0].src = (struct TYPE_9__ *) malloc(_len_outlink__i0__src0*sizeof(struct TYPE_9__));
          for(int _j0 = 0; _j0 < _len_outlink__i0__src0; _j0++) {
              int _len_outlink__i0__src_inputs0 = 1;
          outlink[_i0].src->inputs = (struct TYPE_6__ **) malloc(_len_outlink__i0__src_inputs0*sizeof(struct TYPE_6__ *));
          for(int _j0 = 0; _j0 < _len_outlink__i0__src_inputs0; _j0++) {
            int _len_outlink__i0__src_inputs1 = 1;
            outlink[_i0].src->inputs[_j0] = (struct TYPE_6__ *) malloc(_len_outlink__i0__src_inputs1*sizeof(struct TYPE_6__));
            for(int _j1 = 0; _j1 < _len_outlink__i0__src_inputs1; _j1++) {
              outlink[_i0].src->inputs[_j0]->channels = ((-2 * (next_i()%2)) + 1) * next_i();
        outlink[_i0].src->inputs[_j0]->channel_layout = ((-2 * (next_i()%2)) + 1) * next_i();
        outlink[_i0].src->inputs[_j0]->time_base = ((-2 * (next_i()%2)) + 1) * next_i();
        outlink[_i0].src->inputs[_j0]->sample_rate = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_outlink__i0__src_priv0 = 1;
          outlink[_i0].src->priv = (struct TYPE_7__ *) malloc(_len_outlink__i0__src_priv0*sizeof(struct TYPE_7__));
          for(int _j0 = 0; _j0 < _len_outlink__i0__src_priv0; _j0++) {
            outlink[_i0].src->priv->one2many = ((-2 * (next_i()%2)) + 1) * next_i();
        outlink[_i0].src->priv->nb_channels = ((-2 * (next_i()%2)) + 1) * next_i();
        outlink[_i0].src->priv->nb_coef_channels = ((-2 * (next_i()%2)) + 1) * next_i();
        outlink[_i0].src->priv->pts = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int benchRet = config_output(outlink);
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
          struct TYPE_8__ * outlink = (struct TYPE_8__ *) malloc(_len_outlink0*sizeof(struct TYPE_8__));
          for(int _i0 = 0; _i0 < _len_outlink0; _i0++) {
            outlink[_i0].channels = ((-2 * (next_i()%2)) + 1) * next_i();
        outlink[_i0].channel_layout = ((-2 * (next_i()%2)) + 1) * next_i();
        outlink[_i0].time_base = ((-2 * (next_i()%2)) + 1) * next_i();
        outlink[_i0].sample_rate = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_outlink__i0__src0 = 1;
          outlink[_i0].src = (struct TYPE_9__ *) malloc(_len_outlink__i0__src0*sizeof(struct TYPE_9__));
          for(int _j0 = 0; _j0 < _len_outlink__i0__src0; _j0++) {
              int _len_outlink__i0__src_inputs0 = 1;
          outlink[_i0].src->inputs = (struct TYPE_6__ **) malloc(_len_outlink__i0__src_inputs0*sizeof(struct TYPE_6__ *));
          for(int _j0 = 0; _j0 < _len_outlink__i0__src_inputs0; _j0++) {
            int _len_outlink__i0__src_inputs1 = 1;
            outlink[_i0].src->inputs[_j0] = (struct TYPE_6__ *) malloc(_len_outlink__i0__src_inputs1*sizeof(struct TYPE_6__));
            for(int _j1 = 0; _j1 < _len_outlink__i0__src_inputs1; _j1++) {
              outlink[_i0].src->inputs[_j0]->channels = ((-2 * (next_i()%2)) + 1) * next_i();
        outlink[_i0].src->inputs[_j0]->channel_layout = ((-2 * (next_i()%2)) + 1) * next_i();
        outlink[_i0].src->inputs[_j0]->time_base = ((-2 * (next_i()%2)) + 1) * next_i();
        outlink[_i0].src->inputs[_j0]->sample_rate = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_outlink__i0__src_priv0 = 1;
          outlink[_i0].src->priv = (struct TYPE_7__ *) malloc(_len_outlink__i0__src_priv0*sizeof(struct TYPE_7__));
          for(int _j0 = 0; _j0 < _len_outlink__i0__src_priv0; _j0++) {
            outlink[_i0].src->priv->one2many = ((-2 * (next_i()%2)) + 1) * next_i();
        outlink[_i0].src->priv->nb_channels = ((-2 * (next_i()%2)) + 1) * next_i();
        outlink[_i0].src->priv->nb_coef_channels = ((-2 * (next_i()%2)) + 1) * next_i();
        outlink[_i0].src->priv->pts = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int benchRet = config_output(outlink);
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
          struct TYPE_8__ * outlink = (struct TYPE_8__ *) malloc(_len_outlink0*sizeof(struct TYPE_8__));
          for(int _i0 = 0; _i0 < _len_outlink0; _i0++) {
            outlink[_i0].channels = ((-2 * (next_i()%2)) + 1) * next_i();
        outlink[_i0].channel_layout = ((-2 * (next_i()%2)) + 1) * next_i();
        outlink[_i0].time_base = ((-2 * (next_i()%2)) + 1) * next_i();
        outlink[_i0].sample_rate = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_outlink__i0__src0 = 1;
          outlink[_i0].src = (struct TYPE_9__ *) malloc(_len_outlink__i0__src0*sizeof(struct TYPE_9__));
          for(int _j0 = 0; _j0 < _len_outlink__i0__src0; _j0++) {
              int _len_outlink__i0__src_inputs0 = 1;
          outlink[_i0].src->inputs = (struct TYPE_6__ **) malloc(_len_outlink__i0__src_inputs0*sizeof(struct TYPE_6__ *));
          for(int _j0 = 0; _j0 < _len_outlink__i0__src_inputs0; _j0++) {
            int _len_outlink__i0__src_inputs1 = 1;
            outlink[_i0].src->inputs[_j0] = (struct TYPE_6__ *) malloc(_len_outlink__i0__src_inputs1*sizeof(struct TYPE_6__));
            for(int _j1 = 0; _j1 < _len_outlink__i0__src_inputs1; _j1++) {
              outlink[_i0].src->inputs[_j0]->channels = ((-2 * (next_i()%2)) + 1) * next_i();
        outlink[_i0].src->inputs[_j0]->channel_layout = ((-2 * (next_i()%2)) + 1) * next_i();
        outlink[_i0].src->inputs[_j0]->time_base = ((-2 * (next_i()%2)) + 1) * next_i();
        outlink[_i0].src->inputs[_j0]->sample_rate = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_outlink__i0__src_priv0 = 1;
          outlink[_i0].src->priv = (struct TYPE_7__ *) malloc(_len_outlink__i0__src_priv0*sizeof(struct TYPE_7__));
          for(int _j0 = 0; _j0 < _len_outlink__i0__src_priv0; _j0++) {
            outlink[_i0].src->priv->one2many = ((-2 * (next_i()%2)) + 1) * next_i();
        outlink[_i0].src->priv->nb_channels = ((-2 * (next_i()%2)) + 1) * next_i();
        outlink[_i0].src->priv->nb_coef_channels = ((-2 * (next_i()%2)) + 1) * next_i();
        outlink[_i0].src->priv->pts = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int benchRet = config_output(outlink);
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
