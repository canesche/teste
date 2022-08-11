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
struct TYPE_3__ {int nb_channels; float** fft_buffer; int fft_offset; int subframe_size; float** alt_sin; int frame_size; } ;
typedef  TYPE_1__ QDMCContext ;

/* Variables and functions */
 float* amplitude_tab ; 
 float* sin_table ; 

__attribute__((used)) static void add_wave(QDMCContext *s, int offset, int freqs, int group, int stereo_mode, int amp, int phase)
{
    int j, group_bits, pos, pindex;
    float im, re, amplitude, level, *imptr, *reptr;

    if (s->nb_channels == 1)
        stereo_mode = 0;

    group_bits = 4 - group;
    pos = freqs >> (4 - group);
    amplitude = amplitude_tab[amp & 0x3F];
    imptr = &s->fft_buffer[    stereo_mode][s->fft_offset + s->subframe_size * offset + pos];
    reptr = &s->fft_buffer[2 + stereo_mode][s->fft_offset + s->subframe_size * offset + pos];
    pindex = (phase << 6) - ((2 * (freqs >> (4 - group)) + 1) << 7);
    for (j = 0; j < (1 << (group_bits + 1)) - 1; j++) {
        pindex += (2 * freqs + 1) << (7 - group_bits);
        level = amplitude * s->alt_sin[group][j];
        im = level * sin_table[ pindex        & 0x1FF];
        re = level * sin_table[(pindex + 128) & 0x1FF];
        imptr[0] += im;
        imptr[1] -= im;
        reptr[0] += re;
        reptr[1] -= re;
        imptr += s->subframe_size;
        reptr += s->subframe_size;
        if (imptr >= &s->fft_buffer[stereo_mode][2 * s->frame_size]) {
            imptr = &s->fft_buffer[0 + stereo_mode][pos];
            reptr = &s->fft_buffer[2 + stereo_mode][pos];
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
          int offset = 100;
          int freqs = 100;
          int group = 100;
          int stereo_mode = 100;
          int amp = 100;
          int phase = 100;
          int _len_s0 = 1;
          struct TYPE_3__ * s = (struct TYPE_3__ *) malloc(_len_s0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
            s[_i0].nb_channels = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_s__i0__fft_buffer0 = 1;
          s[_i0].fft_buffer = (float **) malloc(_len_s__i0__fft_buffer0*sizeof(float *));
          for(int _j0 = 0; _j0 < _len_s__i0__fft_buffer0; _j0++) {
            int _len_s__i0__fft_buffer1 = 1;
            s[_i0].fft_buffer[_j0] = (float *) malloc(_len_s__i0__fft_buffer1*sizeof(float));
            for(int _j1 = 0; _j1 < _len_s__i0__fft_buffer1; _j1++) {
              s[_i0].fft_buffer[_j0][_j1] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
            }
          }
        s[_i0].fft_offset = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].subframe_size = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_s__i0__alt_sin0 = 1;
          s[_i0].alt_sin = (float **) malloc(_len_s__i0__alt_sin0*sizeof(float *));
          for(int _j0 = 0; _j0 < _len_s__i0__alt_sin0; _j0++) {
            int _len_s__i0__alt_sin1 = 1;
            s[_i0].alt_sin[_j0] = (float *) malloc(_len_s__i0__alt_sin1*sizeof(float));
            for(int _j1 = 0; _j1 < _len_s__i0__alt_sin1; _j1++) {
              s[_i0].alt_sin[_j0][_j1] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
            }
          }
        s[_i0].frame_size = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          add_wave(s,offset,freqs,group,stereo_mode,amp,phase);
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(*(s[_aux].fft_buffer));
        free(s[_aux].fft_buffer);
          }
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(*(s[_aux].alt_sin));
        free(s[_aux].alt_sin);
          }
          free(s);
        
        break;
    }
    // big-arr
    case 1:
    {
          int offset = 255;
          int freqs = 255;
          int group = 255;
          int stereo_mode = 255;
          int amp = 255;
          int phase = 255;
          int _len_s0 = 65025;
          struct TYPE_3__ * s = (struct TYPE_3__ *) malloc(_len_s0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
            s[_i0].nb_channels = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_s__i0__fft_buffer0 = 1;
          s[_i0].fft_buffer = (float **) malloc(_len_s__i0__fft_buffer0*sizeof(float *));
          for(int _j0 = 0; _j0 < _len_s__i0__fft_buffer0; _j0++) {
            int _len_s__i0__fft_buffer1 = 1;
            s[_i0].fft_buffer[_j0] = (float *) malloc(_len_s__i0__fft_buffer1*sizeof(float));
            for(int _j1 = 0; _j1 < _len_s__i0__fft_buffer1; _j1++) {
              s[_i0].fft_buffer[_j0][_j1] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
            }
          }
        s[_i0].fft_offset = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].subframe_size = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_s__i0__alt_sin0 = 1;
          s[_i0].alt_sin = (float **) malloc(_len_s__i0__alt_sin0*sizeof(float *));
          for(int _j0 = 0; _j0 < _len_s__i0__alt_sin0; _j0++) {
            int _len_s__i0__alt_sin1 = 1;
            s[_i0].alt_sin[_j0] = (float *) malloc(_len_s__i0__alt_sin1*sizeof(float));
            for(int _j1 = 0; _j1 < _len_s__i0__alt_sin1; _j1++) {
              s[_i0].alt_sin[_j0][_j1] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
            }
          }
        s[_i0].frame_size = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          add_wave(s,offset,freqs,group,stereo_mode,amp,phase);
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(*(s[_aux].fft_buffer));
        free(s[_aux].fft_buffer);
          }
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(*(s[_aux].alt_sin));
        free(s[_aux].alt_sin);
          }
          free(s);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int offset = 10;
          int freqs = 10;
          int group = 10;
          int stereo_mode = 10;
          int amp = 10;
          int phase = 10;
          int _len_s0 = 100;
          struct TYPE_3__ * s = (struct TYPE_3__ *) malloc(_len_s0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
            s[_i0].nb_channels = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_s__i0__fft_buffer0 = 1;
          s[_i0].fft_buffer = (float **) malloc(_len_s__i0__fft_buffer0*sizeof(float *));
          for(int _j0 = 0; _j0 < _len_s__i0__fft_buffer0; _j0++) {
            int _len_s__i0__fft_buffer1 = 1;
            s[_i0].fft_buffer[_j0] = (float *) malloc(_len_s__i0__fft_buffer1*sizeof(float));
            for(int _j1 = 0; _j1 < _len_s__i0__fft_buffer1; _j1++) {
              s[_i0].fft_buffer[_j0][_j1] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
            }
          }
        s[_i0].fft_offset = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].subframe_size = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_s__i0__alt_sin0 = 1;
          s[_i0].alt_sin = (float **) malloc(_len_s__i0__alt_sin0*sizeof(float *));
          for(int _j0 = 0; _j0 < _len_s__i0__alt_sin0; _j0++) {
            int _len_s__i0__alt_sin1 = 1;
            s[_i0].alt_sin[_j0] = (float *) malloc(_len_s__i0__alt_sin1*sizeof(float));
            for(int _j1 = 0; _j1 < _len_s__i0__alt_sin1; _j1++) {
              s[_i0].alt_sin[_j0][_j1] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
            }
          }
        s[_i0].frame_size = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          add_wave(s,offset,freqs,group,stereo_mode,amp,phase);
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(*(s[_aux].fft_buffer));
        free(s[_aux].fft_buffer);
          }
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(*(s[_aux].alt_sin));
        free(s[_aux].alt_sin);
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
