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
typedef  struct TYPE_4__   TYPE_2__ ;
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
typedef  int /*<<< orphan*/  uint8_t ;
typedef  int int64_t ;
struct TYPE_3__ {int w; int h; int xcenter; int ycenter; int plane; int* correction; TYPE_2__* out; TYPE_2__* in; } ;
typedef  TYPE_1__ ThreadData ;
struct TYPE_4__ {int* linesize; int /*<<< orphan*/ ** data; } ;
typedef  TYPE_2__ AVFrame ;
typedef  int /*<<< orphan*/  AVFilterContext ;

/* Variables and functions */

__attribute__((used)) static int filter_slice(AVFilterContext *ctx, void *arg, int job, int nb_jobs)
{
    ThreadData *td = (ThreadData*)arg;
    AVFrame *in = td->in;
    AVFrame *out = td->out;

    const int w = td->w, h = td->h;
    const int xcenter = td->xcenter;
    const int ycenter = td->ycenter;
    const int start = (h *  job   ) / nb_jobs;
    const int end   = (h * (job+1)) / nb_jobs;
    const int plane = td->plane;
    const int inlinesize = in->linesize[plane];
    const int outlinesize = out->linesize[plane];
    const uint8_t *indata = in->data[plane];
    uint8_t *outrow = out->data[plane] + start * outlinesize;
    int i;
    for (i = start; i < end; i++, outrow += outlinesize) {
        const int off_y = i - ycenter;
        uint8_t *out = outrow;
        int j;
        for (j = 0; j < w; j++) {
            const int off_x = j - xcenter;
            const int64_t radius_mult = td->correction[j + i*w];
            const int x = xcenter + ((radius_mult * off_x + (1<<23))>>24);
            const int y = ycenter + ((radius_mult * off_y + (1<<23))>>24);
            const char isvalid = x > 0 && x < w - 1 && y > 0 && y < h - 1;
            *out++ =  isvalid ? indata[y * inlinesize + x] : 0;
        }
    }
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
          int job = 100;
          int nb_jobs = 100;
          int _len_ctx0 = 1;
          int * ctx = (int *) malloc(_len_ctx0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_ctx0; _i0++) {
            ctx[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          void * arg;
          int benchRet = filter_slice(ctx,arg,job,nb_jobs);
          printf("%d\n", benchRet); 
          free(ctx);
        
        break;
    }
    // big-arr
    case 1:
    {
          int job = 255;
          int nb_jobs = 255;
          int _len_ctx0 = 65025;
          int * ctx = (int *) malloc(_len_ctx0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_ctx0; _i0++) {
            ctx[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          void * arg;
          int benchRet = filter_slice(ctx,arg,job,nb_jobs);
          printf("%d\n", benchRet); 
          free(ctx);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int job = 10;
          int nb_jobs = 10;
          int _len_ctx0 = 100;
          int * ctx = (int *) malloc(_len_ctx0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_ctx0; _i0++) {
            ctx[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          void * arg;
          int benchRet = filter_slice(ctx,arg,job,nb_jobs);
          printf("%d\n", benchRet); 
          free(ctx);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
