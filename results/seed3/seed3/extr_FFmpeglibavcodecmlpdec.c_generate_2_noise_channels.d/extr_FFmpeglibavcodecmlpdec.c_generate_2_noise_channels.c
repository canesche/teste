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
typedef  int uint32_t ;
typedef  int uint16_t ;
typedef  int int8_t ;
struct TYPE_5__ {int** sample_buffer; TYPE_1__* substream; } ;
struct TYPE_4__ {int noisegen_seed; unsigned int max_matrix_channel; unsigned int blockpos; int noise_shift; } ;
typedef  TYPE_1__ SubStream ;
typedef  TYPE_2__ MLPDecodeContext ;

/* Variables and functions */

__attribute__((used)) static void generate_2_noise_channels(MLPDecodeContext *m, unsigned int substr)
{
    SubStream *s = &m->substream[substr];
    unsigned int i;
    uint32_t seed = s->noisegen_seed;
    unsigned int maxchan = s->max_matrix_channel;

    for (i = 0; i < s->blockpos; i++) {
        uint16_t seed_shr7 = seed >> 7;
        m->sample_buffer[i][maxchan+1] = ((int8_t)(seed >> 15)) * (1 << s->noise_shift);
        m->sample_buffer[i][maxchan+2] = ((int8_t) seed_shr7)   * (1 << s->noise_shift);

        seed = (seed << 16) ^ seed_shr7 ^ (seed_shr7 << 5);
    }

    s->noisegen_seed = seed;
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
          int _len_m0 = 1;
          struct TYPE_5__ * m = (struct TYPE_5__ *) malloc(_len_m0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_m0; _i0++) {
              int _len_m__i0__sample_buffer0 = 1;
          m[_i0].sample_buffer = (int **) malloc(_len_m__i0__sample_buffer0*sizeof(int *));
          for(int _j0 = 0; _j0 < _len_m__i0__sample_buffer0; _j0++) {
            int _len_m__i0__sample_buffer1 = 1;
            m[_i0].sample_buffer[_j0] = (int *) malloc(_len_m__i0__sample_buffer1*sizeof(int));
            for(int _j1 = 0; _j1 < _len_m__i0__sample_buffer1; _j1++) {
              m[_i0].sample_buffer[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_m__i0__substream0 = 1;
          m[_i0].substream = (struct TYPE_4__ *) malloc(_len_m__i0__substream0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_m__i0__substream0; _j0++) {
            m[_i0].substream->noisegen_seed = ((-2 * (next_i()%2)) + 1) * next_i();
        m[_i0].substream->max_matrix_channel = ((-2 * (next_i()%2)) + 1) * next_i();
        m[_i0].substream->blockpos = ((-2 * (next_i()%2)) + 1) * next_i();
        m[_i0].substream->noise_shift = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          generate_2_noise_channels(m,substr);
          for(int _aux = 0; _aux < _len_m0; _aux++) {
          free(*(m[_aux].sample_buffer));
        free(m[_aux].sample_buffer);
          }
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
          int _len_m0 = 65025;
          struct TYPE_5__ * m = (struct TYPE_5__ *) malloc(_len_m0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_m0; _i0++) {
              int _len_m__i0__sample_buffer0 = 1;
          m[_i0].sample_buffer = (int **) malloc(_len_m__i0__sample_buffer0*sizeof(int *));
          for(int _j0 = 0; _j0 < _len_m__i0__sample_buffer0; _j0++) {
            int _len_m__i0__sample_buffer1 = 1;
            m[_i0].sample_buffer[_j0] = (int *) malloc(_len_m__i0__sample_buffer1*sizeof(int));
            for(int _j1 = 0; _j1 < _len_m__i0__sample_buffer1; _j1++) {
              m[_i0].sample_buffer[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_m__i0__substream0 = 1;
          m[_i0].substream = (struct TYPE_4__ *) malloc(_len_m__i0__substream0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_m__i0__substream0; _j0++) {
            m[_i0].substream->noisegen_seed = ((-2 * (next_i()%2)) + 1) * next_i();
        m[_i0].substream->max_matrix_channel = ((-2 * (next_i()%2)) + 1) * next_i();
        m[_i0].substream->blockpos = ((-2 * (next_i()%2)) + 1) * next_i();
        m[_i0].substream->noise_shift = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          generate_2_noise_channels(m,substr);
          for(int _aux = 0; _aux < _len_m0; _aux++) {
          free(*(m[_aux].sample_buffer));
        free(m[_aux].sample_buffer);
          }
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
          int _len_m0 = 100;
          struct TYPE_5__ * m = (struct TYPE_5__ *) malloc(_len_m0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_m0; _i0++) {
              int _len_m__i0__sample_buffer0 = 1;
          m[_i0].sample_buffer = (int **) malloc(_len_m__i0__sample_buffer0*sizeof(int *));
          for(int _j0 = 0; _j0 < _len_m__i0__sample_buffer0; _j0++) {
            int _len_m__i0__sample_buffer1 = 1;
            m[_i0].sample_buffer[_j0] = (int *) malloc(_len_m__i0__sample_buffer1*sizeof(int));
            for(int _j1 = 0; _j1 < _len_m__i0__sample_buffer1; _j1++) {
              m[_i0].sample_buffer[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_m__i0__substream0 = 1;
          m[_i0].substream = (struct TYPE_4__ *) malloc(_len_m__i0__substream0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_m__i0__substream0; _j0++) {
            m[_i0].substream->noisegen_seed = ((-2 * (next_i()%2)) + 1) * next_i();
        m[_i0].substream->max_matrix_channel = ((-2 * (next_i()%2)) + 1) * next_i();
        m[_i0].substream->blockpos = ((-2 * (next_i()%2)) + 1) * next_i();
        m[_i0].substream->noise_shift = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          generate_2_noise_channels(m,substr);
          for(int _aux = 0; _aux < _len_m0; _aux++) {
          free(*(m[_aux].sample_buffer));
        free(m[_aux].sample_buffer);
          }
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
