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
typedef  struct TYPE_11__   TYPE_5__ ;
typedef  struct TYPE_10__   TYPE_4__ ;
typedef  struct TYPE_9__   TYPE_3__ ;
typedef  struct TYPE_8__   TYPE_2__ ;
typedef  struct TYPE_7__   TYPE_1__ ;

/* Type definitions */
struct TYPE_10__ {int blocksize; int* bs_code; scalar_t__ verbatim_only; TYPE_3__* subframes; } ;
struct TYPE_11__ {int channels; TYPE_1__* avctx; TYPE_4__ frame; } ;
struct TYPE_8__ {int /*<<< orphan*/  coding_mode; } ;
struct TYPE_9__ {int obits; TYPE_2__ rc; scalar_t__ wasted; } ;
struct TYPE_7__ {int bits_per_raw_sample; } ;
typedef  TYPE_3__ FlacSubframe ;
typedef  TYPE_4__ FlacFrame ;
typedef  TYPE_5__ FlacEncodeContext ;

/* Variables and functions */
 int /*<<< orphan*/  CODING_MODE_RICE ; 
 int /*<<< orphan*/  CODING_MODE_RICE2 ; 
 int* ff_flac_blocksize_table ; 

__attribute__((used)) static void init_frame(FlacEncodeContext *s, int nb_samples)
{
    int i, ch;
    FlacFrame *frame;

    frame = &s->frame;

    for (i = 0; i < 16; i++) {
        if (nb_samples == ff_flac_blocksize_table[i]) {
            frame->blocksize  = ff_flac_blocksize_table[i];
            frame->bs_code[0] = i;
            frame->bs_code[1] = 0;
            break;
        }
    }
    if (i == 16) {
        frame->blocksize = nb_samples;
        if (frame->blocksize <= 256) {
            frame->bs_code[0] = 6;
            frame->bs_code[1] = frame->blocksize-1;
        } else {
            frame->bs_code[0] = 7;
            frame->bs_code[1] = frame->blocksize-1;
        }
    }

    for (ch = 0; ch < s->channels; ch++) {
        FlacSubframe *sub = &frame->subframes[ch];

        sub->wasted = 0;
        sub->obits  = s->avctx->bits_per_raw_sample;

        if (sub->obits > 16)
            sub->rc.coding_mode = CODING_MODE_RICE2;
        else
            sub->rc.coding_mode = CODING_MODE_RICE;
    }

    frame->verbatim_only = 0;
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
          int nb_samples = 100;
          int _len_s0 = 1;
          struct TYPE_11__ * s = (struct TYPE_11__ *) malloc(_len_s0*sizeof(struct TYPE_11__));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
            s[_i0].channels = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_s__i0__avctx0 = 1;
          s[_i0].avctx = (struct TYPE_7__ *) malloc(_len_s__i0__avctx0*sizeof(struct TYPE_7__));
          for(int _j0 = 0; _j0 < _len_s__i0__avctx0; _j0++) {
            s[_i0].avctx->bits_per_raw_sample = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        s[_i0].frame.blocksize = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_s__i0__frame_bs_code0 = 1;
          s[_i0].frame.bs_code = (int *) malloc(_len_s__i0__frame_bs_code0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_s__i0__frame_bs_code0; _j0++) {
            s[_i0].frame.bs_code[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        s[_i0].frame.verbatim_only = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_s__i0__frame_subframes0 = 1;
          s[_i0].frame.subframes = (struct TYPE_9__ *) malloc(_len_s__i0__frame_subframes0*sizeof(struct TYPE_9__));
          for(int _j0 = 0; _j0 < _len_s__i0__frame_subframes0; _j0++) {
            s[_i0].frame.subframes->obits = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].frame.subframes->rc.coding_mode = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].frame.subframes->wasted = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          init_frame(s,nb_samples);
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(s[_aux].avctx);
          }
          free(s);
        
        break;
    }
    // big-arr
    case 1:
    {
          int nb_samples = 255;
          int _len_s0 = 65025;
          struct TYPE_11__ * s = (struct TYPE_11__ *) malloc(_len_s0*sizeof(struct TYPE_11__));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
            s[_i0].channels = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_s__i0__avctx0 = 1;
          s[_i0].avctx = (struct TYPE_7__ *) malloc(_len_s__i0__avctx0*sizeof(struct TYPE_7__));
          for(int _j0 = 0; _j0 < _len_s__i0__avctx0; _j0++) {
            s[_i0].avctx->bits_per_raw_sample = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        s[_i0].frame.blocksize = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_s__i0__frame_bs_code0 = 1;
          s[_i0].frame.bs_code = (int *) malloc(_len_s__i0__frame_bs_code0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_s__i0__frame_bs_code0; _j0++) {
            s[_i0].frame.bs_code[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        s[_i0].frame.verbatim_only = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_s__i0__frame_subframes0 = 1;
          s[_i0].frame.subframes = (struct TYPE_9__ *) malloc(_len_s__i0__frame_subframes0*sizeof(struct TYPE_9__));
          for(int _j0 = 0; _j0 < _len_s__i0__frame_subframes0; _j0++) {
            s[_i0].frame.subframes->obits = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].frame.subframes->rc.coding_mode = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].frame.subframes->wasted = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          init_frame(s,nb_samples);
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(s[_aux].avctx);
          }
          free(s);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int nb_samples = 10;
          int _len_s0 = 100;
          struct TYPE_11__ * s = (struct TYPE_11__ *) malloc(_len_s0*sizeof(struct TYPE_11__));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
            s[_i0].channels = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_s__i0__avctx0 = 1;
          s[_i0].avctx = (struct TYPE_7__ *) malloc(_len_s__i0__avctx0*sizeof(struct TYPE_7__));
          for(int _j0 = 0; _j0 < _len_s__i0__avctx0; _j0++) {
            s[_i0].avctx->bits_per_raw_sample = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        s[_i0].frame.blocksize = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_s__i0__frame_bs_code0 = 1;
          s[_i0].frame.bs_code = (int *) malloc(_len_s__i0__frame_bs_code0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_s__i0__frame_bs_code0; _j0++) {
            s[_i0].frame.bs_code[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        s[_i0].frame.verbatim_only = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_s__i0__frame_subframes0 = 1;
          s[_i0].frame.subframes = (struct TYPE_9__ *) malloc(_len_s__i0__frame_subframes0*sizeof(struct TYPE_9__));
          for(int _j0 = 0; _j0 < _len_s__i0__frame_subframes0; _j0++) {
            s[_i0].frame.subframes->obits = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].frame.subframes->rc.coding_mode = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].frame.subframes->wasted = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          init_frame(s,nb_samples);
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(s[_aux].avctx);
          }
          free(s);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
