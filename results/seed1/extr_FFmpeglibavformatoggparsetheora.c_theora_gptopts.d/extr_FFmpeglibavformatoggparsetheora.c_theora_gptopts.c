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
typedef  int uint64_t ;
struct ogg_stream {int /*<<< orphan*/  pflags; TYPE_1__* private; } ;
struct ogg {struct ogg_stream* streams; } ;
typedef  int int64_t ;
struct TYPE_4__ {int gpshift; int gpmask; int version; } ;
typedef  TYPE_1__ TheoraParams ;
struct TYPE_5__ {struct ogg* priv_data; } ;
typedef  TYPE_2__ AVFormatContext ;

/* Variables and functions */
 int AV_NOPTS_VALUE ; 
 int /*<<< orphan*/  AV_PKT_FLAG_KEY ; 

__attribute__((used)) static uint64_t theora_gptopts(AVFormatContext *ctx, int idx, uint64_t gp,
                               int64_t *dts)
{
    struct ogg *ogg       = ctx->priv_data;
    struct ogg_stream *os = ogg->streams + idx;
    TheoraParams *thp     = os->private;
    uint64_t iframe, pframe;

    if (!thp)
        return AV_NOPTS_VALUE;

    iframe = gp >> thp->gpshift;
    pframe = gp & thp->gpmask;

    if (thp->version < 0x030201)
        iframe++;

    if (!pframe)
        os->pflags |= AV_PKT_FLAG_KEY;

    if (dts)
        *dts = iframe + pframe;

    return iframe + pframe;
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
          int idx = 100;
          int gp = 100;
          int _len_ctx0 = 1;
          struct TYPE_5__ * ctx = (struct TYPE_5__ *) malloc(_len_ctx0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_ctx0; _i0++) {
              int _len_ctx__i0__priv_data0 = 1;
          ctx[_i0].priv_data = (struct ogg *) malloc(_len_ctx__i0__priv_data0*sizeof(struct ogg));
          for(int _j0 = 0; _j0 < _len_ctx__i0__priv_data0; _j0++) {
              int _len_ctx__i0__priv_data_streams0 = 1;
          ctx[_i0].priv_data->streams = (struct ogg_stream *) malloc(_len_ctx__i0__priv_data_streams0*sizeof(struct ogg_stream));
          for(int _j0 = 0; _j0 < _len_ctx__i0__priv_data_streams0; _j0++) {
            ctx[_i0].priv_data->streams->pflags = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ctx__i0__priv_data_streams_private0 = 1;
          ctx[_i0].priv_data->streams->private = (struct TYPE_4__ *) malloc(_len_ctx__i0__priv_data_streams_private0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_ctx__i0__priv_data_streams_private0; _j0++) {
            ctx[_i0].priv_data->streams->private->gpshift = ((-2 * (next_i()%2)) + 1) * next_i();
        ctx[_i0].priv_data->streams->private->gpmask = ((-2 * (next_i()%2)) + 1) * next_i();
        ctx[_i0].priv_data->streams->private->version = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          }
          int _len_dts0 = 1;
          int * dts = (int *) malloc(_len_dts0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_dts0; _i0++) {
            dts[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = theora_gptopts(ctx,idx,gp,dts);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_ctx0; _aux++) {
          free(ctx[_aux].priv_data);
          }
          free(ctx);
          free(dts);
        
        break;
    }
    // big-arr
    case 1:
    {
          int idx = 255;
          int gp = 255;
          int _len_ctx0 = 65025;
          struct TYPE_5__ * ctx = (struct TYPE_5__ *) malloc(_len_ctx0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_ctx0; _i0++) {
              int _len_ctx__i0__priv_data0 = 1;
          ctx[_i0].priv_data = (struct ogg *) malloc(_len_ctx__i0__priv_data0*sizeof(struct ogg));
          for(int _j0 = 0; _j0 < _len_ctx__i0__priv_data0; _j0++) {
              int _len_ctx__i0__priv_data_streams0 = 1;
          ctx[_i0].priv_data->streams = (struct ogg_stream *) malloc(_len_ctx__i0__priv_data_streams0*sizeof(struct ogg_stream));
          for(int _j0 = 0; _j0 < _len_ctx__i0__priv_data_streams0; _j0++) {
            ctx[_i0].priv_data->streams->pflags = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ctx__i0__priv_data_streams_private0 = 1;
          ctx[_i0].priv_data->streams->private = (struct TYPE_4__ *) malloc(_len_ctx__i0__priv_data_streams_private0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_ctx__i0__priv_data_streams_private0; _j0++) {
            ctx[_i0].priv_data->streams->private->gpshift = ((-2 * (next_i()%2)) + 1) * next_i();
        ctx[_i0].priv_data->streams->private->gpmask = ((-2 * (next_i()%2)) + 1) * next_i();
        ctx[_i0].priv_data->streams->private->version = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          }
          int _len_dts0 = 65025;
          int * dts = (int *) malloc(_len_dts0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_dts0; _i0++) {
            dts[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = theora_gptopts(ctx,idx,gp,dts);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_ctx0; _aux++) {
          free(ctx[_aux].priv_data);
          }
          free(ctx);
          free(dts);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int idx = 10;
          int gp = 10;
          int _len_ctx0 = 100;
          struct TYPE_5__ * ctx = (struct TYPE_5__ *) malloc(_len_ctx0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_ctx0; _i0++) {
              int _len_ctx__i0__priv_data0 = 1;
          ctx[_i0].priv_data = (struct ogg *) malloc(_len_ctx__i0__priv_data0*sizeof(struct ogg));
          for(int _j0 = 0; _j0 < _len_ctx__i0__priv_data0; _j0++) {
              int _len_ctx__i0__priv_data_streams0 = 1;
          ctx[_i0].priv_data->streams = (struct ogg_stream *) malloc(_len_ctx__i0__priv_data_streams0*sizeof(struct ogg_stream));
          for(int _j0 = 0; _j0 < _len_ctx__i0__priv_data_streams0; _j0++) {
            ctx[_i0].priv_data->streams->pflags = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ctx__i0__priv_data_streams_private0 = 1;
          ctx[_i0].priv_data->streams->private = (struct TYPE_4__ *) malloc(_len_ctx__i0__priv_data_streams_private0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_ctx__i0__priv_data_streams_private0; _j0++) {
            ctx[_i0].priv_data->streams->private->gpshift = ((-2 * (next_i()%2)) + 1) * next_i();
        ctx[_i0].priv_data->streams->private->gpmask = ((-2 * (next_i()%2)) + 1) * next_i();
        ctx[_i0].priv_data->streams->private->version = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          }
          int _len_dts0 = 100;
          int * dts = (int *) malloc(_len_dts0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_dts0; _i0++) {
            dts[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = theora_gptopts(ctx,idx,gp,dts);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_ctx0; _aux++) {
          free(ctx[_aux].priv_data);
          }
          free(ctx);
          free(dts);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
