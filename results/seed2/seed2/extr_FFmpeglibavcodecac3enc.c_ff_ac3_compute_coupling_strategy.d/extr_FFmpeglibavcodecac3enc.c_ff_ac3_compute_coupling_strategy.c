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
struct TYPE_5__ {scalar_t__* channel_in_cpl; int num_cpl_channels; int cpl_in_use; int new_cpl_strategy; int new_cpl_leak; int new_snr_offsets; int* end_freq; } ;
struct TYPE_4__ {int num_blocks; int fbw_channels; scalar_t__ cpl_on; int* start_freq; int bandwidth_code; TYPE_2__* blocks; } ;
typedef  TYPE_1__ AC3EncodeContext ;
typedef  TYPE_2__ AC3Block ;

/* Variables and functions */
 size_t CPL_CH ; 

void ff_ac3_compute_coupling_strategy(AC3EncodeContext *s)
{
    int blk, ch;
    int got_cpl_snr;
    int num_cpl_blocks;

    /* set coupling use flags for each block/channel */
    /* TODO: turn coupling on/off and adjust start band based on bit usage */
    for (blk = 0; blk < s->num_blocks; blk++) {
        AC3Block *block = &s->blocks[blk];
        for (ch = 1; ch <= s->fbw_channels; ch++)
            block->channel_in_cpl[ch] = s->cpl_on;
    }

    /* enable coupling for each block if at least 2 channels have coupling
       enabled for that block */
    got_cpl_snr = 0;
    num_cpl_blocks = 0;
    for (blk = 0; blk < s->num_blocks; blk++) {
        AC3Block *block = &s->blocks[blk];
        block->num_cpl_channels = 0;
        for (ch = 1; ch <= s->fbw_channels; ch++)
            block->num_cpl_channels += block->channel_in_cpl[ch];
        block->cpl_in_use = block->num_cpl_channels > 1;
        num_cpl_blocks += block->cpl_in_use;
        if (!block->cpl_in_use) {
            block->num_cpl_channels = 0;
            for (ch = 1; ch <= s->fbw_channels; ch++)
                block->channel_in_cpl[ch] = 0;
        }

        block->new_cpl_strategy = !blk;
        if (blk) {
            for (ch = 1; ch <= s->fbw_channels; ch++) {
                if (block->channel_in_cpl[ch] != s->blocks[blk-1].channel_in_cpl[ch]) {
                    block->new_cpl_strategy = 1;
                    break;
                }
            }
        }
        block->new_cpl_leak = block->new_cpl_strategy;

        if (!blk || (block->cpl_in_use && !got_cpl_snr)) {
            block->new_snr_offsets = 1;
            if (block->cpl_in_use)
                got_cpl_snr = 1;
        } else {
            block->new_snr_offsets = 0;
        }
    }
    if (!num_cpl_blocks)
        s->cpl_on = 0;

    /* set bandwidth for each channel */
    for (blk = 0; blk < s->num_blocks; blk++) {
        AC3Block *block = &s->blocks[blk];
        for (ch = 1; ch <= s->fbw_channels; ch++) {
            if (block->channel_in_cpl[ch])
                block->end_freq[ch] = s->start_freq[CPL_CH];
            else
                block->end_freq[ch] = s->bandwidth_code * 3 + 73;
        }
    }
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
          int _len_s0 = 1;
          struct TYPE_4__ * s = (struct TYPE_4__ *) malloc(_len_s0*sizeof(struct TYPE_4__));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
            s[_i0].num_blocks = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].fbw_channels = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].cpl_on = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_s__i0__start_freq0 = 1;
          s[_i0].start_freq = (int *) malloc(_len_s__i0__start_freq0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_s__i0__start_freq0; _j0++) {
            s[_i0].start_freq[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        s[_i0].bandwidth_code = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_s__i0__blocks0 = 1;
          s[_i0].blocks = (struct TYPE_5__ *) malloc(_len_s__i0__blocks0*sizeof(struct TYPE_5__));
          for(int _j0 = 0; _j0 < _len_s__i0__blocks0; _j0++) {
              int _len_s__i0__blocks_channel_in_cpl0 = 1;
          s[_i0].blocks->channel_in_cpl = (long *) malloc(_len_s__i0__blocks_channel_in_cpl0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_s__i0__blocks_channel_in_cpl0; _j0++) {
            s[_i0].blocks->channel_in_cpl[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        s[_i0].blocks->num_cpl_channels = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].blocks->cpl_in_use = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].blocks->new_cpl_strategy = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].blocks->new_cpl_leak = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].blocks->new_snr_offsets = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_s__i0__blocks_end_freq0 = 1;
          s[_i0].blocks->end_freq = (int *) malloc(_len_s__i0__blocks_end_freq0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_s__i0__blocks_end_freq0; _j0++) {
            s[_i0].blocks->end_freq[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          ff_ac3_compute_coupling_strategy(s);
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(s[_aux].start_freq);
          }
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(s[_aux].blocks);
          }
          free(s);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_s0 = 65025;
          struct TYPE_4__ * s = (struct TYPE_4__ *) malloc(_len_s0*sizeof(struct TYPE_4__));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
            s[_i0].num_blocks = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].fbw_channels = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].cpl_on = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_s__i0__start_freq0 = 1;
          s[_i0].start_freq = (int *) malloc(_len_s__i0__start_freq0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_s__i0__start_freq0; _j0++) {
            s[_i0].start_freq[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        s[_i0].bandwidth_code = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_s__i0__blocks0 = 1;
          s[_i0].blocks = (struct TYPE_5__ *) malloc(_len_s__i0__blocks0*sizeof(struct TYPE_5__));
          for(int _j0 = 0; _j0 < _len_s__i0__blocks0; _j0++) {
              int _len_s__i0__blocks_channel_in_cpl0 = 1;
          s[_i0].blocks->channel_in_cpl = (long *) malloc(_len_s__i0__blocks_channel_in_cpl0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_s__i0__blocks_channel_in_cpl0; _j0++) {
            s[_i0].blocks->channel_in_cpl[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        s[_i0].blocks->num_cpl_channels = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].blocks->cpl_in_use = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].blocks->new_cpl_strategy = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].blocks->new_cpl_leak = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].blocks->new_snr_offsets = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_s__i0__blocks_end_freq0 = 1;
          s[_i0].blocks->end_freq = (int *) malloc(_len_s__i0__blocks_end_freq0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_s__i0__blocks_end_freq0; _j0++) {
            s[_i0].blocks->end_freq[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          ff_ac3_compute_coupling_strategy(s);
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(s[_aux].start_freq);
          }
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(s[_aux].blocks);
          }
          free(s);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_s0 = 100;
          struct TYPE_4__ * s = (struct TYPE_4__ *) malloc(_len_s0*sizeof(struct TYPE_4__));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
            s[_i0].num_blocks = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].fbw_channels = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].cpl_on = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_s__i0__start_freq0 = 1;
          s[_i0].start_freq = (int *) malloc(_len_s__i0__start_freq0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_s__i0__start_freq0; _j0++) {
            s[_i0].start_freq[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        s[_i0].bandwidth_code = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_s__i0__blocks0 = 1;
          s[_i0].blocks = (struct TYPE_5__ *) malloc(_len_s__i0__blocks0*sizeof(struct TYPE_5__));
          for(int _j0 = 0; _j0 < _len_s__i0__blocks0; _j0++) {
              int _len_s__i0__blocks_channel_in_cpl0 = 1;
          s[_i0].blocks->channel_in_cpl = (long *) malloc(_len_s__i0__blocks_channel_in_cpl0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_s__i0__blocks_channel_in_cpl0; _j0++) {
            s[_i0].blocks->channel_in_cpl[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        s[_i0].blocks->num_cpl_channels = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].blocks->cpl_in_use = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].blocks->new_cpl_strategy = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].blocks->new_cpl_leak = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].blocks->new_snr_offsets = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_s__i0__blocks_end_freq0 = 1;
          s[_i0].blocks->end_freq = (int *) malloc(_len_s__i0__blocks_end_freq0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_s__i0__blocks_end_freq0; _j0++) {
            s[_i0].blocks->end_freq[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          ff_ac3_compute_coupling_strategy(s);
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(s[_aux].start_freq);
          }
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(s[_aux].blocks);
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
