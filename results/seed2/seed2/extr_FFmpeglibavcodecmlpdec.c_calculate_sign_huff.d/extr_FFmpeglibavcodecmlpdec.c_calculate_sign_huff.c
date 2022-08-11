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
typedef  int int32_t ;
struct TYPE_7__ {int huff_lsbs; int codebook; int huff_offset; } ;
struct TYPE_6__ {TYPE_1__* substream; } ;
struct TYPE_5__ {int* quant_step_size; TYPE_3__* channel_params; } ;
typedef  TYPE_1__ SubStream ;
typedef  TYPE_2__ MLPDecodeContext ;
typedef  TYPE_3__ ChannelParams ;

/* Variables and functions */

__attribute__((used)) static inline int32_t calculate_sign_huff(MLPDecodeContext *m,
                                          unsigned int substr, unsigned int ch)
{
    SubStream *s = &m->substream[substr];
    ChannelParams *cp = &s->channel_params[ch];
    int lsb_bits = cp->huff_lsbs - s->quant_step_size[ch];
    int sign_shift = lsb_bits + (cp->codebook ? 2 - cp->codebook : -1);
    int32_t sign_huff_offset = cp->huff_offset;

    if (cp->codebook > 0)
        sign_huff_offset -= 7 << lsb_bits;

    if (sign_shift >= 0)
        sign_huff_offset -= 1 << sign_shift;

    return sign_huff_offset;
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
          unsigned int substr = 100;
          unsigned int ch = 100;
          int _len_m0 = 1;
          struct TYPE_6__ * m = (struct TYPE_6__ *) malloc(_len_m0*sizeof(struct TYPE_6__));
          for(int _i0 = 0; _i0 < _len_m0; _i0++) {
              int _len_m__i0__substream0 = 1;
          m[_i0].substream = (struct TYPE_5__ *) malloc(_len_m__i0__substream0*sizeof(struct TYPE_5__));
          for(int _j0 = 0; _j0 < _len_m__i0__substream0; _j0++) {
              int _len_m__i0__substream_quant_step_size0 = 1;
          m[_i0].substream->quant_step_size = (int *) malloc(_len_m__i0__substream_quant_step_size0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_m__i0__substream_quant_step_size0; _j0++) {
            m[_i0].substream->quant_step_size[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_m__i0__substream_channel_params0 = 1;
          m[_i0].substream->channel_params = (struct TYPE_7__ *) malloc(_len_m__i0__substream_channel_params0*sizeof(struct TYPE_7__));
          for(int _j0 = 0; _j0 < _len_m__i0__substream_channel_params0; _j0++) {
            m[_i0].substream->channel_params->huff_lsbs = ((-2 * (next_i()%2)) + 1) * next_i();
        m[_i0].substream->channel_params->codebook = ((-2 * (next_i()%2)) + 1) * next_i();
        m[_i0].substream->channel_params->huff_offset = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int benchRet = calculate_sign_huff(m,substr,ch);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_m0; _aux++) {
          free(m[_aux].substream);
          }
          free(m);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned int substr = 255;
          unsigned int ch = 255;
          int _len_m0 = 65025;
          struct TYPE_6__ * m = (struct TYPE_6__ *) malloc(_len_m0*sizeof(struct TYPE_6__));
          for(int _i0 = 0; _i0 < _len_m0; _i0++) {
              int _len_m__i0__substream0 = 1;
          m[_i0].substream = (struct TYPE_5__ *) malloc(_len_m__i0__substream0*sizeof(struct TYPE_5__));
          for(int _j0 = 0; _j0 < _len_m__i0__substream0; _j0++) {
              int _len_m__i0__substream_quant_step_size0 = 1;
          m[_i0].substream->quant_step_size = (int *) malloc(_len_m__i0__substream_quant_step_size0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_m__i0__substream_quant_step_size0; _j0++) {
            m[_i0].substream->quant_step_size[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_m__i0__substream_channel_params0 = 1;
          m[_i0].substream->channel_params = (struct TYPE_7__ *) malloc(_len_m__i0__substream_channel_params0*sizeof(struct TYPE_7__));
          for(int _j0 = 0; _j0 < _len_m__i0__substream_channel_params0; _j0++) {
            m[_i0].substream->channel_params->huff_lsbs = ((-2 * (next_i()%2)) + 1) * next_i();
        m[_i0].substream->channel_params->codebook = ((-2 * (next_i()%2)) + 1) * next_i();
        m[_i0].substream->channel_params->huff_offset = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int benchRet = calculate_sign_huff(m,substr,ch);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_m0; _aux++) {
          free(m[_aux].substream);
          }
          free(m);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned int substr = 10;
          unsigned int ch = 10;
          int _len_m0 = 100;
          struct TYPE_6__ * m = (struct TYPE_6__ *) malloc(_len_m0*sizeof(struct TYPE_6__));
          for(int _i0 = 0; _i0 < _len_m0; _i0++) {
              int _len_m__i0__substream0 = 1;
          m[_i0].substream = (struct TYPE_5__ *) malloc(_len_m__i0__substream0*sizeof(struct TYPE_5__));
          for(int _j0 = 0; _j0 < _len_m__i0__substream0; _j0++) {
              int _len_m__i0__substream_quant_step_size0 = 1;
          m[_i0].substream->quant_step_size = (int *) malloc(_len_m__i0__substream_quant_step_size0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_m__i0__substream_quant_step_size0; _j0++) {
            m[_i0].substream->quant_step_size[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_m__i0__substream_channel_params0 = 1;
          m[_i0].substream->channel_params = (struct TYPE_7__ *) malloc(_len_m__i0__substream_channel_params0*sizeof(struct TYPE_7__));
          for(int _j0 = 0; _j0 < _len_m__i0__substream_channel_params0; _j0++) {
            m[_i0].substream->channel_params->huff_lsbs = ((-2 * (next_i()%2)) + 1) * next_i();
        m[_i0].substream->channel_params->codebook = ((-2 * (next_i()%2)) + 1) * next_i();
        m[_i0].substream->channel_params->huff_offset = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int benchRet = calculate_sign_huff(m,substr,ch);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_m0; _aux++) {
          free(m[_aux].substream);
          }
          free(m);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
