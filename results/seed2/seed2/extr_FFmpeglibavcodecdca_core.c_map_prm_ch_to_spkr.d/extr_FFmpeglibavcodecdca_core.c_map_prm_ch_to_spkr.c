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
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
struct TYPE_3__ {size_t audio_mode; int ext_audio_mask; unsigned int xxch_core_mask; int xxch_mask_nbits; unsigned int xxch_spkr_mask; } ;
typedef  TYPE_1__ DCACoreDecoder ;

/* Variables and functions */
 int DCA_CSS_XCH ; 
 int DCA_CSS_XXCH ; 
 int DCA_EXSS_XXCH ; 
 int DCA_SPEAKER_Cs ; 
 int DCA_SPEAKER_Ls ; 
 int DCA_SPEAKER_Lss ; 
 int DCA_SPEAKER_MASK_Lss ; 
 int DCA_SPEAKER_MASK_Rss ; 
 int DCA_SPEAKER_Rs ; 
 int DCA_SPEAKER_Rss ; 
 int* ff_dca_channels ; 
 int** prm_ch_to_spkr_map ; 

__attribute__((used)) static int map_prm_ch_to_spkr(DCACoreDecoder *s, int ch)
{
    int pos, spkr;

    // Try to map this channel to core first
    pos = ff_dca_channels[s->audio_mode];
    if (ch < pos) {
        spkr = prm_ch_to_spkr_map[s->audio_mode][ch];
        if (s->ext_audio_mask & (DCA_CSS_XXCH | DCA_EXSS_XXCH)) {
            if (s->xxch_core_mask & (1U << spkr))
                return spkr;
            if (spkr == DCA_SPEAKER_Ls && (s->xxch_core_mask & DCA_SPEAKER_MASK_Lss))
                return DCA_SPEAKER_Lss;
            if (spkr == DCA_SPEAKER_Rs && (s->xxch_core_mask & DCA_SPEAKER_MASK_Rss))
                return DCA_SPEAKER_Rss;
            return -1;
        }
        return spkr;
    }

    // Then XCH
    if ((s->ext_audio_mask & DCA_CSS_XCH) && ch == pos)
        return DCA_SPEAKER_Cs;

    // Then XXCH
    if (s->ext_audio_mask & (DCA_CSS_XXCH | DCA_EXSS_XXCH)) {
        for (spkr = DCA_SPEAKER_Cs; spkr < s->xxch_mask_nbits; spkr++)
            if (s->xxch_spkr_mask & (1U << spkr))
                if (pos++ == ch)
                    return spkr;
    }

    // No mapping
    return -1;
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
          int ch = 100;
          int _len_s0 = 1;
          struct TYPE_3__ * s = (struct TYPE_3__ *) malloc(_len_s0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
            s[_i0].audio_mode = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].ext_audio_mask = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].xxch_core_mask = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].xxch_mask_nbits = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].xxch_spkr_mask = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = map_prm_ch_to_spkr(s,ch);
          printf("%d\n", benchRet); 
          free(s);
        
        break;
    }
    // big-arr
    case 1:
    {
          int ch = 255;
          int _len_s0 = 65025;
          struct TYPE_3__ * s = (struct TYPE_3__ *) malloc(_len_s0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
            s[_i0].audio_mode = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].ext_audio_mask = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].xxch_core_mask = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].xxch_mask_nbits = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].xxch_spkr_mask = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = map_prm_ch_to_spkr(s,ch);
          printf("%d\n", benchRet); 
          free(s);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int ch = 10;
          int _len_s0 = 100;
          struct TYPE_3__ * s = (struct TYPE_3__ *) malloc(_len_s0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
            s[_i0].audio_mode = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].ext_audio_mask = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].xxch_core_mask = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].xxch_mask_nbits = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].xxch_spkr_mask = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = map_prm_ch_to_spkr(s,ch);
          printf("%d\n", benchRet); 
          free(s);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
