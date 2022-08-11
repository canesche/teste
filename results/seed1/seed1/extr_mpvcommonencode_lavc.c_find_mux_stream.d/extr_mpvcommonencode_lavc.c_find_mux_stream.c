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
struct mux_stream {int codec_type; } ;
struct encode_priv {int num_streams; struct mux_stream** streams; } ;
struct encode_lavc_context {struct encode_priv* priv; } ;
typedef  enum AVMediaType { ____Placeholder_AVMediaType } AVMediaType ;

/* Variables and functions */

__attribute__((used)) static struct mux_stream *find_mux_stream(struct encode_lavc_context *ctx,
                                          enum AVMediaType codec_type)
{
    struct encode_priv *p = ctx->priv;

    for (int n = 0; n < p->num_streams; n++) {
        struct mux_stream *s = p->streams[n];
        if (s->codec_type == codec_type)
            return s;
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
          enum AVMediaType codec_type = 0;
          int _len_ctx0 = 1;
          struct encode_lavc_context * ctx = (struct encode_lavc_context *) malloc(_len_ctx0*sizeof(struct encode_lavc_context));
          for(int _i0 = 0; _i0 < _len_ctx0; _i0++) {
              int _len_ctx__i0__priv0 = 1;
          ctx[_i0].priv = (struct encode_priv *) malloc(_len_ctx__i0__priv0*sizeof(struct encode_priv));
          for(int _j0 = 0; _j0 < _len_ctx__i0__priv0; _j0++) {
            ctx[_i0].priv->num_streams = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ctx__i0__priv_streams0 = 1;
          ctx[_i0].priv->streams = (struct mux_stream **) malloc(_len_ctx__i0__priv_streams0*sizeof(struct mux_stream *));
          for(int _j0 = 0; _j0 < _len_ctx__i0__priv_streams0; _j0++) {
            int _len_ctx__i0__priv_streams1 = 1;
            ctx[_i0].priv->streams[_j0] = (struct mux_stream *) malloc(_len_ctx__i0__priv_streams1*sizeof(struct mux_stream));
            for(int _j1 = 0; _j1 < _len_ctx__i0__priv_streams1; _j1++) {
              ctx[_i0].priv->streams[_j0]->codec_type = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          }
          struct mux_stream * benchRet = find_mux_stream(ctx,codec_type);
          printf("%d\n", (*benchRet).codec_type);
          for(int _aux = 0; _aux < _len_ctx0; _aux++) {
          free(ctx[_aux].priv);
          }
          free(ctx);
        
        break;
    }
    // big-arr
    case 1:
    {
          enum AVMediaType codec_type = 0;
          int _len_ctx0 = 65025;
          struct encode_lavc_context * ctx = (struct encode_lavc_context *) malloc(_len_ctx0*sizeof(struct encode_lavc_context));
          for(int _i0 = 0; _i0 < _len_ctx0; _i0++) {
              int _len_ctx__i0__priv0 = 1;
          ctx[_i0].priv = (struct encode_priv *) malloc(_len_ctx__i0__priv0*sizeof(struct encode_priv));
          for(int _j0 = 0; _j0 < _len_ctx__i0__priv0; _j0++) {
            ctx[_i0].priv->num_streams = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ctx__i0__priv_streams0 = 1;
          ctx[_i0].priv->streams = (struct mux_stream **) malloc(_len_ctx__i0__priv_streams0*sizeof(struct mux_stream *));
          for(int _j0 = 0; _j0 < _len_ctx__i0__priv_streams0; _j0++) {
            int _len_ctx__i0__priv_streams1 = 1;
            ctx[_i0].priv->streams[_j0] = (struct mux_stream *) malloc(_len_ctx__i0__priv_streams1*sizeof(struct mux_stream));
            for(int _j1 = 0; _j1 < _len_ctx__i0__priv_streams1; _j1++) {
              ctx[_i0].priv->streams[_j0]->codec_type = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          }
          struct mux_stream * benchRet = find_mux_stream(ctx,codec_type);
          printf("%d\n", (*benchRet).codec_type);
          for(int _aux = 0; _aux < _len_ctx0; _aux++) {
          free(ctx[_aux].priv);
          }
          free(ctx);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          enum AVMediaType codec_type = 0;
          int _len_ctx0 = 100;
          struct encode_lavc_context * ctx = (struct encode_lavc_context *) malloc(_len_ctx0*sizeof(struct encode_lavc_context));
          for(int _i0 = 0; _i0 < _len_ctx0; _i0++) {
              int _len_ctx__i0__priv0 = 1;
          ctx[_i0].priv = (struct encode_priv *) malloc(_len_ctx__i0__priv0*sizeof(struct encode_priv));
          for(int _j0 = 0; _j0 < _len_ctx__i0__priv0; _j0++) {
            ctx[_i0].priv->num_streams = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ctx__i0__priv_streams0 = 1;
          ctx[_i0].priv->streams = (struct mux_stream **) malloc(_len_ctx__i0__priv_streams0*sizeof(struct mux_stream *));
          for(int _j0 = 0; _j0 < _len_ctx__i0__priv_streams0; _j0++) {
            int _len_ctx__i0__priv_streams1 = 1;
            ctx[_i0].priv->streams[_j0] = (struct mux_stream *) malloc(_len_ctx__i0__priv_streams1*sizeof(struct mux_stream));
            for(int _j1 = 0; _j1 < _len_ctx__i0__priv_streams1; _j1++) {
              ctx[_i0].priv->streams[_j0]->codec_type = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          }
          struct mux_stream * benchRet = find_mux_stream(ctx,codec_type);
          printf("%d\n", (*benchRet).codec_type);
          for(int _aux = 0; _aux < _len_ctx0; _aux++) {
          free(ctx[_aux].priv);
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
